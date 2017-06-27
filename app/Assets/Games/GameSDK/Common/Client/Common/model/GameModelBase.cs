using System;
using System.IO;
using System.Collections.Generic;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

using GSN.Skill.Games.Common.Events;
using GSN.Skill.Games.Common.Tasks;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Model
{
	public enum BaseOptionName
	{
		GameTime,
		Seed,
		TISeed,
        GameTip1,
        GameTip2,
        GameTip3,
		NEXT,
	}

	public abstract class GameModelBase : EventDispatcher
	{
		public enum BaseEndGameReason
		{
			NONE,			// not ended yet.
			NORMAL,			// completed the goal before time ran out.
			TIMEOUT,		// time ran out
			EARLY_EXIT,		// USER ABORT, actually
			NEXT_VALUE,		// for appending game-specific ways of ending a game.
		}

		/// Single Brief description of end Game reason
		protected int _endGameReason;	// index into the above enum.

		/// This is a brief
		/**
		This is the extended comment.
		\param parameter value
		\return value
		\see see also
		\throw execption it throws
		\code
		\endcode
		*/
		public const string USER_ABORTED = "UserAborted";

		public static readonly string SETUP_SEED = BaseOptionName.Seed.ToString();
		public const string OPTIONS_SEED_OVERRIDE = "seedOverride";
		public static readonly string OPTIONS_TI_SEED = BaseOptionName.TISeed.ToString();
		public static readonly string OPTIONS_GAME_TIME = BaseOptionName.GameTime.ToString();
        public static readonly string OPTIONS_GAME_TIP1 = BaseOptionName.GameTip1.ToString();
        public static readonly string OPTIONS_GAME_TIP2 = BaseOptionName.GameTip2.ToString();
        public static readonly string OPTIONS_GAME_TIP3 = BaseOptionName.GameTip3.ToString();

		public GsnScheduler _scheduler; // might or MIGHT NOT BE the top task.
		protected GsnGameClockTask _clockTask;
		private int _gameTime;
		private long _stateTimeOffsetMS;
		//TODO change to rand and tiRand?
		public GsnRandom _rand; // Random number generator
		public GsnRandom _tiRand; // Random number generator
		// Constants
		public GsnRational _rfDuration; //Time at which each iteration of roll forward will move
		private string _version; // State machine configuration params

		// Link back to the main loop context
		private bool _receiving;
		private bool _updating;

		protected Dictionary<string, int> _tweakables;

		public readonly Type[] inputTypeEnums;

		private delegate void ReportMetricDelegate(string key, JToken val);
		private ReportMetricDelegate ReportMetricHandler;

		protected string _dataPath;

		private IDataSafe _dataSafe;

		private int _mostRecentSessionTimeMS;

		public bool _frozen;

		public void FetchData(Dictionary<string, string> request, Action< Dictionary<string, string> > doneAction) {

			_frozen = true; // stop all input and time updates.

			// add the model's time stamp to the request. This is the client's idea of what time it is.
			request["_stateTime"] = GetStateTime().ToString();

			// the DataSafe is responsible for storing the request and response in the GameLog.
			_dataSafe.FetchData(request, (Dictionary<string, string> response) => { 

				_frozen = false; // response has come back, we are no longer frozen.

				// do what the model wants to do with the data.
				doneAction(response); // this could cause us to fetch more data, freezing us.

				// doing that action might have caused another data request. But if it didn't
				// then advance the clock (which also might cause another data request)
				if (!_frozen) {
					RunToOrFreeze(_mostRecentSessionTimeMS);
				}

			});

		}

		public GameModelBase(Type[] inputTypeEnums, Type[] eventTypeEnums, string version, string dataPath)
			: base(eventTypeEnums)
		{
			// Initialize log line sequence number and time
			_receiving = false;
			_updating = false;
			_scheduler = CreateScheduler(); // create the kind of scheduler the game wants.
			_gameTime = 0;
			// Initialize the duration of a rf tick to a sixtieth of a second.
			_rfDuration = new GsnRational(0, 1000, 60);
			_version = "";
			_dataPath = dataPath;

			_endGameReason = (int)BaseEndGameReason.NONE;
			_tweakables = new Dictionary<string, int>();
			this.inputTypeEnums = inputTypeEnums;

			#if DEBUG
				_version = version + " DEBUG";
			#else
				_version = version + " RELEASE";
			#endif
		} 
		
		// override this in your derived class if you want to create a special subclass of GsnScheduler (such as GsnSuspendibleScheduler)
		protected virtual GsnScheduler CreateScheduler()
		{
			return new GsnScheduler();
		}

		/// This function returns the model version used for making sure the model is the same on the client and the server.
		public string Version
		{
			get
			{
				return _version;
			}
		}        
        
		/// This function will take in a message into it and update the model. 
		public void Receive(
			IInputMessage msg, 	///< The input message to process
			long gameTimeMS		///< Game time when the message was received
			)
		{
			//gameTimeMS as input into this function is a monotonically increasing number
			//Add _stateTimeOffsetMS to get the time that the model is working with, including rewinds
			gameTimeMS += _stateTimeOffsetMS;
			if (_receiving || _updating)
			{
				throw new Exception("Attempt to receive while receiving or updating");
			}

			_receiving = true;
			HandleMessage(msg, Convert.ToInt32(gameTimeMS));
			_receiving = false;
		}

		// This function moves the game forward in time, but stops if the model freezes. It's like RunUntil, but it 
		// exits if the model freezes.
		private void RunToOrFreeze(int time) {

			_mostRecentSessionTimeMS = time; // remember where we'd like to be in time.

			while (_scheduler.wakeUpTime <= time && !_frozen) {
				_scheduler.Run(); // runs one task.
			}

			// running the task might cause a data request, freezing us.
			if (!_frozen)
				_gameTime = time; // we're done running tasks, and we're not frozen.
									// set the time for GetStateTime().

		}

		// Accept message for the State Machine
		private void HandleMessage(IInputMessage msg, int gameTimeMS)
		{
			// Let our state machine roll forward first. In replay, this will do nothing because _scheduler will be up-to-date.
			RunToOrFreeze(gameTimeMS);
			// pre-process messages

			if (_frozen)
				return; // this input will be ignored.

			// handle the message now!
			// Dispatch based on message type
			switch(msg.CommonMsgType())
			{
				case CommonInputMessageType.CoreServer:
					// This will cause the server to core in debug mode
#if DEBUG
					CoreServer();
#endif
					break;
				case CommonInputMessageType.UserAborted:
					endGameNow();
					break;
				default:
					HandleInputMessage(msg);
					break;
			}
		}

		protected virtual void endGameNow()
		{
			endGameReason = (int)BaseEndGameReason.EARLY_EXIT;
		}

		// This function does nothing. It is supposed to be overloaded inside the derived gamestate
		// This is because we want the derived classes versionto be called!!!
		protected abstract void HandleInputMessage(IInputMessage msg);

		//Frame pump calls this version of update, which may need to account for time that has be rewound
		public void Update(long sessionTime)
		{
			int sessionTimeMS = Convert.ToInt32(sessionTime + _stateTimeOffsetMS);

			if (_updating || _receiving)
			{
				throw new Exception("Attempt to update while updating or receiving.");
			}
			_updating = true;

			RunToOrFreeze(sessionTimeMS);

			_updating = false;
		}
		///Some games have have models which know about frames. This function is called by the rollForwardTask for every frame of the game, even if physical frames are dropped. 
		public void RollOneFrame(int rftime)
		{
			throw new Exception("Please define rollOneFrame in your model.");
		}

		/// Gets the score of the game. 
		public abstract int GetScore();

		/// This function is called when the game is over.  In this function you need to calculate the final score of the game.  
		protected abstract int FinalizeScore();

		/**
		\brief This function sets the end game reason.  This is done whenever the model decides that the game is over.  You can set it to one of the base end game reasons \ref BaseEndGameReason, 
		or derive your own in your game model and set it here. This function will send an \ref GSN.Skill.Games.Common.Events.InputCompleteEvent to the view to signify that the game is over. It will also call
		OnInputComplete() to let your model do what it needs to do when the game is over.
		*/
		public int endGameReason
		{
			protected set
			{				
				if (_endGameReason != (int)BaseEndGameReason.NONE)
				{
					return; // it's aready set. You cannot change it.
				}

				_endGameReason = value;

				OnInputComplete();		// do game specific ending of game.
				DispatchEvent(new InputCompleteEvent(_gameTime));	// let the view know the game is over.
			}
			get
			{
				return _endGameReason;
			}
		}

		/** 
		\brief This function is called whenever the endgame reason is set. It's a hook in the model for when the endGameReason is set. If you need to do some things after the game is over, like resolve your board to remove bombs
		this function would be where would you start that process off. When you are done you want to call onGameSettled()
		*/
		protected abstract void OnInputComplete();

		/**
		\brief This function is called once your model has finished doing what you need to do to calculate the score.  It will call finalize score to calculate the final score.
		*/
		public void OnGameSettled()
		{
			// Tell game to give us it's final score
			FinalizeScore();

			// Now dispatch a game over event.  This will send the score and reason to the view
			DispatchEvent (new EndGameTimeEvent (_gameTime));
		}

		/// This function will tell the model that the game is over normally.  Call this when your game has completed it's task. (Removed all cards, destroyed all pieces.... etc)
		protected void NormalEndGame()
		{
			endGameReason = (int)BaseEndGameReason.NORMAL;
		}

 		private int CoreServer()
		{
			int numerator = 1;
			int denominator = 0;
			int crashTime = numerator/denominator;
			return crashTime;
		}


		// This function is called when the model is setup.
		public void Configure(
			Dictionary<string, string> startRecord, ///< 	This is the Start Record that will setup the game
			Dictionary<string, string> joinRecord,
			IDataSafe dataSafe = null)  ///<	This is the Join Record that will setup the options for the game
		{

			GsnDebug.Log("Join record:", JsonConvert.SerializeObject(joinRecord));
			GsnDebug.Log("Start record:", JsonConvert.SerializeObject(startRecord));

			_dataSafe = dataSafe;

			// -----------------------------------------------------------------
			// Initialize random number generator
			uint seed = 0;
			// get seed from setup string.
			if (startRecord.ContainsKey(SETUP_SEED))
			{
				seed = Convert.ToUInt32(startRecord[SETUP_SEED]);
			}

			// override it from the tournament parameters.
			if (joinRecord.ContainsKey(OPTIONS_SEED_OVERRIDE))
			{
				seed = Convert.ToUInt32(joinRecord[OPTIONS_SEED_OVERRIDE]);
			}

			if (seed == 0) {
				throw new Exception("Seed missing or zero");
			}

			_rand = new GsnRandom(seed);

			uint tiSeed = 0;
			// Get tournament instance specific seed.  This is actually the tournament instance ID, unless we are
			// operating in no-net mode, in which case it's a timestamp.	
			if (joinRecord.ContainsKey(OPTIONS_TI_SEED)) // tournament parameters override of TI seed.
			{
				tiSeed = Convert.ToUInt32(joinRecord[OPTIONS_TI_SEED]);
			}
			else
			{
				// THIS IS A TEMPORARY HACK, WHICH WILL HAVE TO CHANGE ONCE WE HAVE TOURNAMENT RE-ENTRY.
				// ON RE-ENTRY, YOU SHOULD HAVE A DIFFERENT SEED, BUT THE SAME TISEED.
				tiSeed = seed;
			}

			_tiRand = new GsnRandom(tiSeed);

			ConfigureGame(startRecord, joinRecord);
		}

		///  This function will be overridden in your game.  Configure the Game as you need too.  This function might be empty in your game if it doesn't need to do anything.
		protected abstract void ConfigureGame(
			Dictionary<string, string> startRecord, ///< 	This is the Start Record that will setup the game
			Dictionary<string, string> joinRecord   ///<	This is the Join Record that will setup the options for the game
			);

		/// This handy function creates the rollForwardTask, which will call updateState periodically. returns the rounded frame duration in milliseconds.
		protected int AddRollForwardTask()
		{
			GsnRational fd;
			
			fd = new GsnRational();
			GetFrameDuration(fd);
			_scheduler.Add(new GsnRollForwardTask(this, fd)); // add the rollForward task, with the right fd (task COPIES the fd).	
			fd.Add(new GsnRational(0, 1, 2)); // add 0.5 for rounding.
			return fd.Integer; // return ROUNDED frame duration in milliseconds.
		}

		/// This function will return the frame duration for games that play per frame.
		public void GetFrameDuration(GsnRational fd)
		{
			fd.AssignFromParts(1000);
			fd.DivInt(GetFrameRate()); // frame rate is defined in the derived class.
		}

		/// OVERRIDE THIS IN YOUR SUBCLASS TO CHANGE THE FRAME RATE.
		public int GetFrameRate()
		{
			return 30;
		}
		/**
		 * This returns the wallclock time on the state side.
		 * If the scheduler is running a task, then the wallclock time is the scheduler's wakeUpTime.
		 * Otherwise, the wallclock time is the time of the message we are currently processing or
		 * most recently processed.
		 */
		public int GetStateTime()
		{
			if (_scheduler.runningTask!=null)
			{
				return _scheduler.wakeUpTime;
			}
			return _gameTime;
		}

		/// This function will create a /ref GSN.Skill.Games.Common.Tasks.GsnGameClockTask() and add it to the scheduler.
		protected void SetupClock(
			int secs, 	 ///< Amount of time in seconds the clock will tick down for
			int timeStep ///< Period in ms which the clock task will run at. 
			)
		{
			if (_clockTask!=null)
			{
				_clockTask.UnSchedule();
				_clockTask = null;
			}
			_clockTask = new GsnGameClockTask(this, timeStep);
			// first argument is irrelevant because we're starting paused.
			_clockTask.Setup(0, secs*1000, true); // Sends "T" message to UI with full value.
			_scheduler.Add(_clockTask);
		}

		/// This function will make the game clock run. It started in paused state.
		public virtual void ResumeClock(
			int t ///< Time at which the clock will be resumed
			)
		{
			if (_clockTask!=null)
			{
				_clockTask.Resume(t);
			}
		}

		// This function will the Pause the clock at the time it is currently at
		public virtual void PauseClock(
			int t ///< Time at which the clock will be paused
			)
		{
			if (_clockTask!=null)
			{
				_clockTask.Pause(t);
			}
		}

		/// This function is called by the \ref GSN.Skill.Games.Common.Events.UpdateClockEvent when the time reaches 0 seconds.  It will set the end game to Timeout.
		public virtual void OnTimeExpired(
			int t ///< Time at which the clock expired
			)
		{
			DispatchEvent(new SyncEvent(t));
			endGameReason = (int)BaseEndGameReason.TIMEOUT;
		}

		/// This function is called whenever the scheduler isn't running any tasks. 
		public virtual void OnIdle(uint lastRunTime)
		{
		}

		///This function is called to Rewind tasks back to stateTimeMS. Any game that has additional tasks should override this and Rewind them
		public virtual void RewindTasks(
			int stateTimeMS, ///< Time in ms to Rewind the clock back to. 
			int clockTaskAccumulatedPauseTime ///< _clockTask's accumulatedPauseTime at stateTimeMS
			)
		{
			_stateTimeOffsetMS += stateTimeMS - GetStateTime();

			if (_clockTask != null)
			{
				_clockTask.Rewind(stateTimeMS, clockTaskAccumulatedPauseTime);
				if (_clockTask.scheduler == null)
					_scheduler.Add(_clockTask);
			}
		}

		///Restore the game to a state where it can be continued
		public virtual void CancelEndGame()
		{
			// Don't call tje setter here.
			_endGameReason = (int)BaseEndGameReason.NONE;
		}

		public void ReportMetric(string key, JToken value)
		{
			if (ReportMetricHandler != null)
			{
				ReportMetricHandler(key, value);
			}

		}

		/// Is the clock task idle?
		public bool clockPaused
		{
			get
			{
				return (null == _clockTask) ? false : _clockTask.IsIdle();
			}
		}

		/// How many MS left in the clock
		public int msLeft
		{
			get
			{
				return (null == _clockTask) ? 0 : _clockTask.GetMSLeft();
			}
		}

		/// How many seconds left in the clock
		public int secsLeft
		{
			get
			{
				return (null == _clockTask) ? 0 : _clockTask.GetSecsLeft();
			}
		}

		/// Is the game over?
		public virtual bool isGameOver
		{
			get
			{
				return _endGameReason != (int)BaseEndGameReason.NONE;
			}
	 
		}

		/// What is the current wake up time of the scheduler.
		public int wakeUpTime
		{
			get
			{
				return _scheduler.wakeUpTime;
			}
		}

		public List<KeyValuePair<string, JToken>> HandleGameLog( MemoryStream gameLog, out int excessRealTime)
		{
			if (gameLog == null || gameLog.Length == 0) {
				excessRealTime = 0;
				return null;
			}

	        // Create the move player and tracker
            MetricTracker tracker = new MetricTracker();
            ReportMetricHandler += tracker.Add;
            var mp = new MovePlayer(this, gameLog);
            mp.ConfigureModel();
            mp.PlayMoves();
            excessRealTime = mp.excessRealTime;

            ReportMetricHandler -= tracker.Add;
            tracker.Dispatch();
            return tracker.Stream;
		}	
	};

	// The attribute used to flag the game specific model
	[AttributeUsage( AttributeTargets.Class, Inherited = false)]
	public class GsnGameModelAttribute : Attribute
	{

	}	
}
