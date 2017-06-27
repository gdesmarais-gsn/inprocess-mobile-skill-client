using System;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Games.Common.Client.Session;
using GSN.Skill.Games.Common;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Strings;
using GSN.Skill.Phoenix.Utils;
using GSN.Skill.Phoenix.WebObject;
using GSN.Skill.Requests;
using GSN.Skill.Utils;

using IGameSession = GSN.Skill.Games.Common.Utils.IGameSession;

namespace GSN.Skill.Phoenix.Model
{
	public class GameManager : SingletonMonoBehaviour<GameManager>
	{
		private const string SESSION_STORAGE_KEY_TOURN_ID = "tourn_id";

		private const int PRE_START_DISCONNECT_IN_SECONDS = 60;
		private const int IN_GAME_DISCONNECT_IN_SECONDS = 30;

		private MainModel _model;
		private SceneManager _sceneManager;
		private CurrentUser _currentUser;
		private WebGameObjectWrapper _webGame;

		private IEvent _returningEvent = null;

		private DisconnectHandler _disconnectHandler = new DisconnectHandler();

		// Holds the data for the tournament we're currently in for the game.
		// NOTE: This was put here so GameLoad can get some data from us, it also
		// needs to know if we're loading a web or native game.
		public TournamentSignupSuccessEvent currentTournament;

		public void Init(MainModel model, SceneManager sceneManager, CurrentUser currentUser, WebGameObjectWrapper webGame)
		{
			_model = model;
			_sceneManager = sceneManager;
			_currentUser = currentUser;
			_webGame = webGame;

			EventDispatcher.AddListener<TournamentSignupSuccessEvent>(OnBeginGame);
			EventDispatcher.AddListener<WebGameReadyEvent>(OnWebGameReady);
			EventDispatcher.AddListener<WebGameEndedEvent>(OnWebGameComplete);
			EventDispatcher.AddListener<WebGameErrorEvent>(OnWebGameError);
			EventDispatcher.AddListener<WebGameDisconnectMessageShowEvent>(OnWebGameDisconnectShow);
			EventDispatcher.AddListener<WebGameDisconnectMessageHideEvent>(OnWebGameDiscconectHide);
		}

		public void RemoveListeners()
		{
			EventDispatcher.RemoveListener<TournamentSignupSuccessEvent>(OnBeginGame);
			EventDispatcher.RemoveListener<WebGameReadyEvent>(OnWebGameReady);
			EventDispatcher.RemoveListener<WebGameEndedEvent>(OnWebGameComplete);
			EventDispatcher.RemoveListener<WebGameErrorEvent>(OnWebGameError);
			EventDispatcher.RemoveListener<WebGameDisconnectMessageShowEvent>(OnWebGameDisconnectShow);
			EventDispatcher.RemoveListener<WebGameDisconnectMessageHideEvent>(OnWebGameDiscconectHide);
		}

		public ScreenType ReturningScreenType
		{
			get
			{
				ScreenType returningScreenType;
				
				if (_returningEvent is WebGameEndedEvent)
				{
					returningScreenType = ScreenType.TournamentSelect;
				}
				else if (_returningEvent is WebGameErrorEvent)
				{
					returningScreenType = ScreenType.Home;
				}
				else
				{
					GsnDebug.LogError("Returning event \"" + _returningEvent.GetType() + "\" is not valid.");
					
					returningScreenType = ScreenType.Home;
				}
				
				return returningScreenType;
			}
		}

		public void HandleCompletedGame()
		{
			ScreenType returningScreenType = ReturningScreenType;

			switch (returningScreenType)
			{
				case ScreenType.TournamentSelect:
					HandleWebGameComplete(_returningEvent as WebGameEndedEvent);
					break;
				case ScreenType.Home:
					HandleWebGameError(_returningEvent as WebGameErrorEvent);
					break;
				default:
					GsnDebug.LogError("Returning event \"" + _returningEvent.GetType() + "\" is not valid.");
					break;
			}

			// clear out the returning event
			_returningEvent = null;
		}

		private void Update()
		{
			if (_disconnectHandler.HasDisconnected())
				HandlePhoenixDisconnect();
		}

		private void HandlePhoenixDisconnect()
		{
			_disconnectHandler.Stop();

			// we've reached our disconnect time threshold. kick out
			var evt = new WebGameErrorEvent();
			evt.webObj = _webGame;
			evt.detail = StringTable.Instance.GetEntry(CategoryTournament.ErrorUnhandledDisconnect);

			_returningEvent = evt;

			// we've tried to reconnect for too long. return to main scene
			_sceneManager.LoadScene(SceneLoadType.PhoenixLoad, true);
		}

#region Event Listeners
    // These are functions that listen for events.  Most of these will trigger a 
    // scene load.  There are some parallel Handler functions which get another
    // chance to do things after the scene load is complete.


		private void OnBeginGame(IEvent e)
		{
			GsnDebug.Log("Starting game");

			// This needs to be set ASAP.  The functions called later need
			// it as does GameLoad which will become active when we 
			// load the game scene.
			currentTournament = e as TournamentSignupSuccessEvent;
			
			if (currentTournament.isNativeGame)
			{
				LoadNativeGame();
			}
			else
			{
				LoadWebGame();
			}
		}

		private void LoadNativeGame()
		{
			// HACK: Games we are pulling from Sparcade use this API
			IGameSession session = Factory.CreateGameSession(SessionType.Real);
			
			var gso = new GameSession.GameSetupOptions();
			gso.userID            = _currentUser.userID.ToString();
			gso.deviceID          = NativeUtilities.GetDeviceID();
			gso.clientID          = currentTournament.clientID;
			gso.gameID            = currentTournament.gameID;
			gso.txSessionID       = currentTournament.tournamentSessionID;
			gso.tournID           = currentTournament.tournamentID;
			gso.wwUrlBase         = "https://qa.worldwinner.com";  // HACK:  get this from config data
			gso.wwStartGamePath   = null; // null = JoinTournament uses default/predefined value
			gso.validationUrlBase = "https://validation.skillqa.worldwinner.com"; // HACK:  get this from config data
			gso.token             = "";
			gso.titleName         = "TriPeaks"; // get this from config data....config data can have a map of game ID to title name
			gso.modelHash         = GameMaps.GetModelHash(gso.titleName);
			gso.joinDataJSON      = currentTournament.joinRecord;
			gso.setup             = new Dictionary<string,string>(); // HACK: ??
			gso.options           = new Dictionary<string,string>(); // HACK: ??	
			
			session.JoinTournament( gso, () => {} );

			ArenaProxy.instance.gameSession = session;
			ArenaProxy.instance.ReturnFromGameAction = 
				() => 
				{
					_sceneManager.LoadScene(SceneLoadType.PhoenixLoad);
				};		

			_sceneManager.LoadScene(SceneLoadType.GameLoad);
		}

		private void LoadWebGame()
		{
			_disconnectHandler.Start(PRE_START_DISCONNECT_IN_SECONDS);

			_webGame.sessionStorage = currentTournament.sessionStorageVariables;
			_webGame.url = currentTournament.gameSite;

			// The GameLoad object has a ref to our _webGame, and has it load the page
			// when the time is right.
			_sceneManager.LoadScene(SceneLoadType.GameLoad);
		}

		/// <summary>
		/// OnWebGameError When we get an error, we want to return to Phoenix and force the scene load.
		/// </summary>
		/// <param name="evt">Evt.</param>
		private void OnWebGameError(IEvent evt)
		{
			// the webview is handling an error so we don't need to intervene
			_disconnectHandler.Stop();

			_returningEvent = evt;
			_sceneManager.LoadScene(SceneLoadType.PhoenixLoad,true);
		}

		private void OnWebGameDisconnectShow(IEvent evt)
		{
			GsnDebug.Log("WebGameDisconnectShow");

			// start disconnect timer
			_disconnectHandler.Start(IN_GAME_DISCONNECT_IN_SECONDS);
		}

		private void OnWebGameDiscconectHide(IEvent evt)
		{
			GsnDebug.Log("WebGameDisconnectHide");

			// we've returned to the game. stop disconnect timer
			_disconnectHandler.Stop();
		}

		private void OnWebGameReady(IEvent evt)
		{
			GsnDebug.Log("WebGameReady");

			// we're at the start screen. stop the disconnection timer
			_disconnectHandler.Stop();
		}

		private void OnWebGameComplete(IEvent evt)
		{
			GsnDebug.Log("WebGameComplete");

			_disconnectHandler.Stop();
			_returningEvent = evt;

			_sceneManager.LoadScene(SceneLoadType.PhoenixLoad);
		}

#endregion // Event Listeners

#region Event Post Handlers
    // These will get called by the model after a transition has occurred, allowing
    // us to handle a particular event when we know the main portion of the app
    // is prepared (ex: error dialogs will work).

		private void HandleWebGameComplete(WebGameEndedEvent e)
		{
			GsnDebug.Log("A web game has ended.");

			if (e.webObj != null && e.webObj is WebGameObjectWrapper && ((WebGameObjectWrapper)e.webObj).sessionStorage.ContainsKey(SESSION_STORAGE_KEY_TOURN_ID))
			{
				int tournID = Convert.ToInt32(((WebGameObjectWrapper)e.webObj).sessionStorage[SESSION_STORAGE_KEY_TOURN_ID]);
				_model.ShowTournamentResult(tournID);
			}
			else
			{
				GsnDebug.LogError("Couldn't get a tourn_id out of the webObject when the game ended");

				ErrorManager.Instance.HandleUserError(ErrorType.RestTournament, StringTable.Instance.GetEntry(CategoryWebGame.ResultsProblem));
			}
		}

		private void HandleWebGameError(WebGameErrorEvent e)
		{
			GsnDebug.LogError("A web game has had an error: " + e.detail);

			ErrorManager.Instance.HandleUserError(ErrorType.GamePlayError, e.detail);
		}

#endregion // Event Post Handlers

		private class DisconnectHandler
		{
			private DateTime _disconnectTime = DateTime.MinValue;

			public void Start(int totalSeconds)
			{
				_disconnectTime = DateTime.Now.AddSeconds(totalSeconds);
			}

			public void Stop()
			{
				_disconnectTime = DateTime.MinValue;
			}

			public bool HasDisconnected()
			{
				if (_disconnectTime == DateTime.MinValue)
					return false; // disconnect time isn't set, i.e Start was never called

				if (_disconnectTime >= DateTime.Now)
				{
					//GsnDebug.Log("Phoenix Client disconnecting in", (_disconnectTime - DateTime.Now).TotalSeconds, "seconds.");
					return false; // we haven't passed disconnect time yet
				}

				// we've surpassed disconnect time. we've disconnected
				return true;
			}
		}
	}
}
