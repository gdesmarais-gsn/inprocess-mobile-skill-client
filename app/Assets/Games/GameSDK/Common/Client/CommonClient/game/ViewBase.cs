using System;
using System.Collections;
using System.Collections.Generic;

using Gsn.AssetLoading;
using GSN.Skill.Games.Common.Client.Session;
using GSN.Skill.Games.Common.Events;
using GSN.Skill.Games.Common.Utils;
using UnityEngine;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Common.Client.Game
{
	public abstract class ViewBase : SingletonMonoBehaviour<ViewBase> 
	{
		public ControllerBase controller {protected get; set;}

		/// Is this game in replay mode.
		public bool InReplay {get; private set;}

		public static ViewBase Instance
		{
			get
			{
				return instance;
			}
		}

		protected bool _preloadComplete = false;

		public bool gameStarted; 	// whether the game has actually been started.

		// This function is called with a Join Record to allow the view to setup what it needs.
		public virtual void Configure(Dictionary<string, string> joinRecord)
		{

		}

		/// This function is called with the Join Record so that the view will be initialized. If we are in replay mode, this function will skip the start screen
		public virtual void Init(Dictionary<string, string> joinRecord)
		{
			// Find a reference to the loading scene, this will be updated with our progress in preloading if it exists
			UILoadData.instance.OnLoadingComplete += LoadComplete;
			StartCoroutine( StartPreload() );

			InReplay = (  ArenaProxy.instance.gameSession is ReplayGameSession);

			AddEventHandlers();

			ReadyToStart ();
		}

		/// This funtion will call the GSN.Skill.Games.Common.GsnRenderer's render call.  This will allow renderables to render
		virtual public void Render(int t) 
		{
		}

		private bool _ignoreUserInput = false;

		/// This function will forward the IInputMessage msg to the controller.
		public void Send(IInputMessage msg)
		{
			if (_ignoreUserInput)
				return;

			controller.Send(msg);
		}

		/// This function will send an end game message through Send to the controller.
		public void SendEndGameMessage()
		{
			Send(new UserAbortedMessage());
		}

		/// This function will add event handlers that all games need to add. (InputComplete, GameSettled, Sync).  Override this in your view to add more event handlers.
		public virtual void AddEventHandlers()
		{
			controller.AddEventListener ((int)CommonModelEventType.InputComplete, OnInputComplete);
			controller.AddEventListener ((int)CommonModelEventType.Sync, OnSync);
		}

		protected void OnSync(IModelEvent e)
		{
			SyncEvent se = (SyncEvent)e;
			controller.Sync(se.gameTime);
		}

		protected void OnInputComplete (IModelEvent e)
		{
			InputCompleteEvent ice = (InputCompleteEvent)e;
			// Call sync here so that the model will be up to date as of the end of input.
			// TODO - possibly modify this as the last sync of the game, so we can note in the game log it is the end.
			// This would allow the validation of the game log to positively recognize the end of the game.
			controller.Sync (ice.gameTime);

			_ignoreUserInput = true; // Don't call controller.Send any more (it appends moves to the GameLog, and we don't want that). 


			// Start validation, but don't yet wait for its completion.
			//ArenaProxy.instance.gameSession.ValidateJob.Start(ActionQueue.DoNothing); // do nothing if it happens to finish.
			// Replace the job operation with a direct validation call to the session
			//ArenaProxy.instance.gameSession.Validate(ActionQueue.DoNothing);
			StartCoroutine(WaitForFinalNotarization());

		}
		private IEnumerator WaitForFinalNotarization() {
			IGameSession gs = ArenaProxy.instance.gameSession;
			if (null == gs) {
				yield return null;
			} else {
				yield return new WaitUntil (() => gs.NotarizeOutstanding == 0);
				gs.Validate (ActionQueue.DoNothing);
			}
		}

		// This function is currently called from UILoad in the situation where the config param: SKIP_START_SCREEN_<GAME_NAME> exists and is set to true.
		// Currently only Tetris and TriPeaks should be set to true.  Those two games are the only ones that currently have override functions for this.
		// Setting this to true on any other games would be bad.  Like total protonic reversal bad.
		public virtual void ImmediatelyStartGameWhenLoadingCompletes()
		{

		}

		/// This function is called when we want to skip the start screen.  Override this in your view to do what you need to do to skip the start screen.
		protected abstract void SkipStartScreen();

		/// This function is called when the game is ReadyToStart. Override it in your view to do what need to be done when the game is ready to start.
		public abstract void ReadyToStart();

		/// This function is called when we are trying to exit the game.  If we are in a replay game, it will \ref GameClientComplete otherwise it will \ref SendEndGameMessage
		public virtual void OnAbort()
		{
			if (InReplay)
				GameClientComplete(); // in this case, validate will do nothing and complete fast.
			else 
				SendEndGameMessage();	
		} 

		/// This function will return you to the arena app.
		public virtual void GameClientComplete()
		{
			// Note: in the case of replay, the validate job will be null.
			// In that case, we just want to close the game out.
			ArenaProxy.instance.ReturnFromGame();

		}

		/// This function is called when the scene and preloading are complete.
		public virtual void OnLoadingComplete()
		{	

		}	

		/// <summary>
		/// Play the game hud music.  It is in the base as we may need access to it from outside entities, specifically
		/// for the WegGL audio loop bug
		/// </summary>
		/// <returns>The game hud music source</returns>

		public abstract AudioSource playGameHudMusic (int index = -1);

		private void LoadComplete()
		{
			UILoadData.instance.OnLoadingComplete -= LoadComplete;

			if (InReplay)//if in replay skip start screen
				SkipStartScreen();
			_preloadComplete = true;

			OnLoadingComplete();
		}

		/// NEW LOADING STUFF
		/// <summary>
		/// List of the bundles that a game needs to load and unload
		/// </summary>
		protected List<string> _assetBundleNames = new List<string> ();

		protected IViewMode _viewMode;

		private GroupLoadingData _preloadLoadingData;

		/// <summary>
		/// Called when we want to start any preloading we have to do
		/// </summary>
		/// <returns>The preload.</returns>

		/// This function is called when the uiload scene is ready to preload any game objects.
		/// Override to load game preloaded objects
		public virtual IEnumerator StartPreload()
		{
			IGameSession gameSession = ArenaProxy.instance.gameSession;
		
			yield return StartCoroutine(Preload(gameSession.JoinRecord));

		}

		/// <summary>
		/// Called 
		/// </summary>
		/// <returns>The pool.</returns>
		/// <param name="joinRecord">Join record.</param>
		private IEnumerator Preload(Dictionary<string, string> joinRecord)
		{
			if (_preloadComplete)
				yield break;
			
			_preloadComplete = true;

			int itemsToLoad = 0;

			itemsToLoad += _assetBundleNames.Count;
			itemsToLoad += GamePreloadCount();
			if (_viewMode != null)
				itemsToLoad += _viewMode.GetPreloadCount();
			
			_preloadLoadingData = new GroupLoadingData(itemsToLoad, "Preloading");
			UILoadData.instance.loadingData.Add(_preloadLoadingData);

			yield return StartCoroutine (LoadBundles ());
			
			yield return StartCoroutine(GamePreload());
			if (_viewMode != null)
				yield return StartCoroutine(_viewMode.Preload(joinRecord));

			ShaderWarmup ();

			UnloadBundles ();
		}

		protected virtual void ShaderWarmup()
		{

		}

		public void IncrementItemLoaded()
		{
			_preloadLoadingData.ItemLoaded();
		}

		/// <summary>
		/// Preload anything you need to. This is a good place to do pooling of objects
		/// </summary>
		protected virtual IEnumerator GamePreload()
		{
			throw new NotImplementedException ("Override this in your base class");
		}

		protected virtual int GamePreloadCount()
		{
			throw new NotImplementedException ("Override this in your base class");
		}

	/// <summary>
		/// Loads the asset bundles.
		/// </summary>
		/// <returns>The bundles.</returns>
		protected virtual IEnumerator LoadBundles()
		{
			foreach(string bundle in _assetBundleNames)
			{
				yield return StartCoroutine(AssetLoadingService.PreloadAssetGroup(bundle, this));
                IncrementItemLoaded(); //TODO: make this progress work when we switch to asset bundles
			}
		}

		/// <summary>
		/// Unloads all of the bundles.
		/// </summary>
		protected virtual void UnloadBundles()
		{
			foreach(string bundle in _assetBundleNames)
				AssetLoadingService.UnloadAssetGroup(bundle);
		}

		// Backwards compatiblity
		[System.Obsolete("Do not use any more")]
		public void UpdateLoadProgress(float percent)
		{
			UILoadData.instance.PreloaderProgress = percent;
		}
	}
}	
