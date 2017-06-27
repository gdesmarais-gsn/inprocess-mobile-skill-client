using System;
using UnityEngine;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Model;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common.Client.Session;

namespace GSN.Skill.Games.Common.Client.Game
{
	public abstract class GameBase : MonoBehaviour
	{
		private GameModelBase _model;
		protected ViewBase _view;
		private ControllerBase _controller;
		private IGameSession _gameSession = null;

		private const int MS_PER_DAY = 86400000; // milliseconds per day. 
		
		private bool _paused = false; // whether you are paused.
		private int _pausedAt; // time of day you paused. 

		/// Called when the Gamebase is awoke.
		public virtual void Awake()
		{
			if (Debug.isDebugBuild)
			{
				// don't replace if already set.
				GsnDebug.AddLog (Debug.Log, true);
				GsnDebug.AddLogWarning (Debug.LogWarning, true);
				GsnDebug.AddLogError (Debug.LogError, true);
			}
		}

		void OnDestroy()
		{

		}

		/// Called when the game is started. This function will Join the tournement, call \ref Init and \ref ReadyToStart
		void Start()
		{
			_gameSession = ArenaProxy.instance.gameSession;
			Init ();
		}

		/// This function must be override in your game to create your model
		public abstract GameModelBase CreateModel(string dataPath);

		public abstract string GetGameName(); // "Tetris", "Scrabble", "Pacman", "TriPeaks"

		/// This function must be override in your game to create your view
		public abstract ViewBase CreateView ();

		/// This function must be override in your game to create your controller
		public abstract ControllerBase CreateController();

		protected virtual void CreateAnalyticsSender()
		{
		}
		
		protected virtual void CreateGameModelProxy()
		{
		}

		private void Init()
		{
			CreateAnalyticsSender ();
			CreateGameModelProxy();

			string dataPath = UnityEngine.Application.streamingAssetsPath + "/Games/" + GetGameName();

			_model = CreateModel(dataPath);
			_view = CreateView ();
			_controller = CreateController();
			// throw exceptions if any of these fail
			if ( _model == null)
				throw new Exception("Failed to create Model");
			if ( _view == null)
				throw new Exception("Failed to create View");
			if ( _controller == null)
				throw new Exception("Failed to create Controller");


			// connect the model, view, and controller to each other accordingly
			_view.controller = _controller;
			_controller.model = _model;
			_controller.view = _view;

			if (GameModelProxyBase.instance != null)
				GameModelProxyBase.instance.model = _model;

			_view.Init(_gameSession.JoinRecord);
		}

		void Update()
		{
			GsnFramePump.instance.Update();
		}

		/// This function is called to start the game. It will connect with the session to get the start record.
		public void StartGame()
		{

			_gameSession.StartGame (() => {
				if (!_gameSession.Success) 
				{
					Debug.LogError("Failed to start game: " + _gameSession.FailReason);
					_gameSession.ExitMode = GameSessionExitMode.FailedToStart;
					_view.GameClientComplete();
					return;
				}
		
				// send start message to server and wait for the server to respond back with args
				// set up default values for the nonet case.
				
	//            bool crashOnThrow = false;
				//string errorMessage = null;
				// for now, call gameStarted directly

				_view.gameStarted = true; // The game has officially started.

				GsnFramePump.instance.Start(_controller); // when the game starts (should be moved if we're starting later)

				Dictionary<string, string> joinRecord = _gameSession.JoinRecord;

				_view.Configure(joinRecord);
				_controller.Configure(joinRecord);

				if (_gameSession is ReplayGameSession)
					_controller.CreateMovePlayer((ReplayGameSession)_gameSession);

				_model.Configure(_gameSession.StartRecord, joinRecord, _gameSession.DataSafe);

			});
		}

		void OnApplicationPause(bool paused)
		{
			if (paused)
			{
				// system is pausing.
				if (!_paused) // do nothing if we are already paused.
				{   // remember the time at which we paused.
					_pausedAt = (int)DateTime.Now.TimeOfDay.TotalMilliseconds;
					_paused = true; // means _pausedAt is set.
				}
			}
			else
			{
				// system is unpausing.
				if (_paused)
				{ // do nothing if we are already unpaused.
					int pauseDuration = (int)DateTime.Now.TimeOfDay.TotalMilliseconds - _pausedAt;
					
					if (pauseDuration < 0)
						pauseDuration += MS_PER_DAY;
					
					GsnFramePump.instance.AddPausedTime(pauseDuration);
					_paused = false; // means pausetime is useless.
				}
			}
		}
		
		void OnApplicationQuit()
		{
			// On iOS, we are receiving this because the player is force quitting the game.
			// We want to treat this as a voluntary quit, and not a disconnection.
			if ( _view != null )
			{
				_view.SendEndGameMessage();    
			}
				
			_gameSession.WriteGameLogToFile (GameLog.TempGameLogFileName);
		}
	}
}
