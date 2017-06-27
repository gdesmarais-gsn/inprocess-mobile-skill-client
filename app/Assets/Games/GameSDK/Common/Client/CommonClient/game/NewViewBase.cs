using UnityEngine;
using System;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Client.Session;
using GSN.Skill.Games.Common.Events;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client.Game
{
	public abstract class NewViewBase : ViewBase
	{
		new public static NewViewBase instance
		{
			get
			{
				return (NewViewBase)ViewBase.instance;
			}
		}

		/// <summary>
		/// The _hud.
		/// </summary>
		[SerializeField]
		protected UIHudBase _hud;

		/// <summary>
		/// The _results screen
		/// </summary>
		[SerializeField]
		protected UIResultsBase _results;

		/// <summary>
		/// The _start screen.
		/// </summary>
		[SerializeField]
		protected UIStartScreenBase _startScreen;

		/// <summary>
		/// The game.
		/// </summary>
		[SerializeField]
		private GameBase game;

		/// <summary>
		/// The _graphics settings. This object can be null. But if it isn't it will warmup the shaders
		/// </summary>
		[SerializeField]
		private ShaderVariantCollection _shaderVariantCollection;

		public override void Awake()
		{
			base.Awake();
			_startScreen.transitionToStartAction = StartGame;
		}

		// This function is called with a Join Record to allow the view to setup what it needs.
		public override void Configure(Dictionary<string, string> joinRecord)
		{
			_viewMode.Configure(joinRecord);

			_hud.SetAbortDialogStringIds(_viewMode.AbortTitle, _viewMode.AbortMessage);
		}
		
		protected virtual IViewMode CreateReplayViewMode()
		{
			return new ReplayViewMode();
		}

		protected abstract IViewMode CreateViewMode(Dictionary<string, string> joinRecord);

		/// This function is called with the Join Record so that the view will be initialized. If we are in replay mode, this function will skip the start screen
		public override void Init(Dictionary<string, string> joinRecord)
		{
			if (ArenaProxy.instance.gameSession is ReplayGameSession)
				_viewMode =	CreateReplayViewMode();
			else
				_viewMode = CreateViewMode(joinRecord);
				
			_viewMode.Init(joinRecord);

			// Find a reference to the loading scene, this will be updated with our progress in preloading if it exists
			UILoadData.instance.OnLoadingComplete += () => { _viewMode.OnLoadingComplete();};

			StartCoroutine( StartPreload() );


			AddEventHandlers();

			ArenaProxy.instance.gameSession.ExitMode = _viewMode.exitMode;
		}

		/// This function will add event handlers that all games need to add. (InputComplete, GameSettled, Sync).  Override this in your view to add more event handlers.
		public override void AddEventHandlers()
		{
			GameModelProxyBase.instance.AddEventListener ((int)CommonModelEventType.InputComplete, OnInputComplete);
			GameModelProxyBase.instance.AddEventListener ((int)CommonModelEventType.Sync, OnSync);
			GameModelProxyBase.instance.AddEventListener ((int)CommonModelEventType.EndGame, OnEndGame);
			GameModelProxyBase.instance.AddEventListener ((int)CommonModelEventType.UpdateClock, _hud.OnUpdateClock);
			GameModelProxyBase.instance.AddEventListener ((int)CommonModelEventType.ScoreUpdate, _hud.OnScoreUpdate);
		}

		/// This function is called when we are trying to exit the game.  If we are in a replay game, it will \ref GameClientComplete otherwise it will \ref SendEndGameMessage
		public override void OnAbort()
		{
			_viewMode.OnAbort();
		} 

		/// <summary>
		/// This is called when the game ends.
		/// </summary>
		/// <param name="e">E.</param>
		protected virtual void OnEndGame(IModelEvent e)
		{
			GsnDebug.Log("The game is over.  The final score was " + GameModelProxyBase.instance.GetScore());
			
			PlayResultsMusic ();
			
			_results.gameObject.SetActive(true);
			_results.Show();
		}

		/// <summary>
		/// This will show the game hud.
		/// </summary>
		
		protected virtual void ShowGameHud()
		{
			_hud.gameObject.SetActive(true);
			
			_viewMode.ShowGameHud(_hud);

			PlayGameMusic ();
		}
	

		/// <summary>
		/// Hides the game HUD.
		/// </summary>
		protected virtual void HideGameHUD()
		{
			_hud.gameObject.SetActive(false);
		}

		protected abstract void PlayStartMenuMusic();
		protected abstract void PlayResultsMusic();
		protected abstract void PlayGameMusic ();

		/// <summary>
		/// What bundle are the tips in?
		/// </summary>
		/// <returns>The tip bundle.</returns>
		public abstract string GetTipBundleName();
	
		// Graphics settings are packaged with the asset bundle because we're not running the game through the tetris project,
		// but rather through the arena container. The graphics settings were created by initially tracking the shaders and
		// variants via editor, saving out the graphics settings that accumulated into a ShaderVariantCollection, and holding
		// a reference to the graphic settings in the view so that asset bundles will compile it.
		// These graphic settings preload the shaders and its variances at the beginning of the game so that the CPU isn't
		// throttled during the overall game experience.
		protected override void ShaderWarmup()
		{
			if (_shaderVariantCollection == null)
			{
				GsnDebug.LogWarning("Shader Variant Collection does not exist!");
				return;
			}

			_shaderVariantCollection.WarmUp();
		}

		/// <summary>
		/// This is called when all loading of assets are complete
		/// </summary>
		public override void OnLoadingComplete()
		{
			PlayStartMenuMusic ();

			_startScreen.OnLoadingComplete();
		}

		/// <summary>
		/// This will start the game
		/// </summary>
		public virtual void StartGame()
		{
			GameAnalyticSender.instance.SendGameStart(_startScreen.autoStart ? "autoStart" : "startClicked");
			
			game.StartGame();
		}	

		protected override void SkipStartScreen()
		{
			throw new NotImplementedException ("DO NOT CALL THIS!");
		}

		public override void ReadyToStart()
		{
			throw new NotImplementedException ("DO NOT CALL THIS!");
		}

	}
}
