using System;

using GSN.Skill.Utils;
using GSN.Skill.Events;

using GSN.Skill.Phoenix.Model;
using GSN.Skill.Phoenix.WebObject;

namespace GSN.Skill.Phoenix.Model.LoadFlows
{
	public class GameLoad : ISceneLoad
	{
		private const int TOTAL_GATES = 3;


		[Flags]
		private enum GameLoadGates
		{
			None              = 0,
			LoadGameScene     = 1 << 0,
			LoadGameResources = 1 << 1,
			GameReady         = 1 << 2,

			// NOTE: the rhs of the shift needs to be incremented as you add flags.
			All               = ~(-1 << TOTAL_GATES),
		}

		private SceneManager _sceneManager;
		private WebObjectWrapper _webGame;

		private GameLoadGates _gateFlags;
		private int _currentGatesCompleted = 0;

		private const string webGameUnityObjectName = "GameWebView";

		public GameLoad( SceneManager sceneManager, WebObjectWrapper webGame )
		{
			_sceneManager = sceneManager;
			_webGame = webGame;
		}

		public void Start()
		{
			GsnDebug.Log("GameLoad.Start");
			EventDispatcher.DispatchEvent(new SceneLoadBeginEvent(SceneLoadType.GameLoad));

			Reset();

			_sceneManager.currentScene = PhoenixScene.Load;

			TournamentSignupSuccessEvent currentTourn = GameManager.Instance.currentTournament;
			if( null == currentTourn )
			{
				GsnDebug.LogError( "Starting a game without a tournament, GameManager.currentTournament is null" );
				// TODO: Send an error event?
				Finish();				
			}

			if( currentTourn.isNativeGame )
			{
				_sceneManager.LoadSceneAsyncAdditive(currentTourn.gameSite, OnSceneProgress, OnNativeGameSceneLoad);
			}
			else
			{
				Action completeCallback = OnWebGameSceneLoad;

				EventDispatcher.AddListener<WebPageLoadedEvent>(OnWebGamePageLoaded);
				EventDispatcher.AddListener<WebGameReadyEvent>(OnWebGameReady);


	#if UNITY_EDITOR
				// web games don't work in Unity Editor, let's bypass the entire web game experience
				completeCallback = OnUnityEditorGameSceneLoad;
	#endif

	#if DEBUG
				EventDispatcher.AddListener<ForceRenderWebViewEvent>(OnForceRender);
	#endif

				_sceneManager.LoadSceneAsyncAdditive(PhoenixScene.WebGame, OnSceneProgress, completeCallback);
			}

			
		}

		public void Finish()
		{
			GsnDebug.Log("GameLoad.Finish");
			_sceneManager.currentScene = PhoenixScene.WebGame;
			TournamentSignupSuccessEvent currentTourn = GameManager.Instance.currentTournament;

			if( !currentTourn.isNativeGame )
			{
				EventDispatcher.RemoveListener<WebPageLoadedEvent>(OnWebGamePageLoaded);
				EventDispatcher.RemoveListener<WebGameReadyEvent>(OnWebGameReady);
			}

			EventDispatcher.DispatchEvent(new SceneLoadCompleteEvent(SceneLoadType.GameLoad));
#if DEBUG
			EventDispatcher.RemoveListener<ForceRenderWebViewEvent>(OnForceRender);
#endif
		}

		private void Reset()
		{
			_currentGatesCompleted = 0;
			_gateFlags = GameLoadGates.None;
		}

#if DEBUG
		private void OnForceRender(IEvent e)
		{
			EventDispatcher.DispatchEvent(new UnitySceneProgressEvent(1));
			EventDispatcher.DispatchEvent(new UnitySceneLoadCompleteEvent());
		}
#endif
		private void OnSceneProgress(float progress)
		{
			EventDispatcher.DispatchEvent(new UnitySceneProgressEvent((_currentGatesCompleted + progress) / TOTAL_GATES));
		}

#if UNITY_EDITOR
		private void OnUnityEditorGameSceneLoad()
		{
			EventDispatcher.DispatchEvent(new UnitySceneProgressEvent(1));
			EventDispatcher.DispatchEvent(new UnitySceneLoadCompleteEvent());
		}
#endif

		private void OnNativeGameSceneLoad()
		{
			_gateFlags |= GameLoadGates.LoadGameScene;


			// HACK: Native TriPeaks
			// We should get an event from the game letting us know the resources are loaded.
			++_currentGatesCompleted;
			_gateFlags |= GameLoadGates.LoadGameResources;
			++_currentGatesCompleted;
			_gateFlags |= GameLoadGates.GameReady;
			OnGateComplete();
		}

		private void OnWebGameSceneLoad()
		{
			_gateFlags |= GameLoadGates.LoadGameScene;

			// This event will give the view a chance to hook the web object into
			// the scene (WebObjectWrapper.Attach).
			var wvlEvt = new InitWebViewEvent();
			wvlEvt.webObj = _webGame;
			EventDispatcher.DispatchEvent(wvlEvt);

			// the URL should be set by the MainModel.
			_webGame.Load();

			OnGateComplete();
		}

		private void OnWebGamePageLoaded(IEvent evt)
		{
			var webEvt = evt as WebPageLoadedEvent;

			GsnDebug.Log( "Web Game page loaded: " + webEvt.url);
			if( webEvt.webObj == _webGame )
			{
				_gateFlags |= GameLoadGates.LoadGameResources;
				OnGateComplete();
			}
		}

		private void OnWebGameReady(IEvent evt)
		{
			var webEvt = evt as WebGameReadyEvent;
			if( webEvt.webObj == _webGame )
			{
				_gateFlags |= GameLoadGates.GameReady;
				OnGateComplete();
			}
		}

		private void OnGateComplete()
		{
			EventDispatcher.DispatchEvent(new UnitySceneProgressEvent((float)++_currentGatesCompleted / TOTAL_GATES));

			if( GameLoadGates.All == (GameLoadGates.All & _gateFlags) )
			{
				EventDispatcher.DispatchEvent(new UnitySceneLoadCompleteEvent());
			}
		}
	}
}
