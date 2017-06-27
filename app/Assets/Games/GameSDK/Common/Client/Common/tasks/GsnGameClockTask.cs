using System;
using GSN.Skill.Games.Common.Events;
using GSN.Skill.Games.Common.Model;

namespace GSN.Skill.Games.Common.Tasks
{
	/// A task for a clock which counts down to zero from some amount, at a particular step size.
	/** 
		If this code runs on a client, it dispatches a UpdateClockEvent to keep the user clock up-to-date.
	*/
	public class GsnGameClockTask: GsnTaskBase
	{
		private int _duration;
		private GameModelBase _model;
		private int _timeStep;
		private int _startTime;
		public int accumulatedPauseTime { get; private set; } ///< Needs to be reset when rewinding
		private int _lastPausedAt;

		///Create a new GsnGameClockTask.  Call Setup on before running it. 
		public GsnGameClockTask(
			GameModelBase model, 	///< the GameModelBase on which to call onTimeExpired() and dispatchEvent(new UpdateClockEvent())
		 	int timeStep = 100)		///< how frequently to dispatch UpdateClockEvents.
		{
			_timeStep = timeStep;
			_model = model;
		}

		/// call onTimeExpired() if duration has passed. Also keep the visible clock up to date if we're on the client.
		public override void Run()
		{
			int timeLeftMS = GetMSLeft();

			UpdateTime();

			if (timeLeftMS == 0)
			{
				UnSchedule();
				// onTimeExpired might re-cycle this finished task, so we don't want
				// to do ANYTHING ELSE after calling onTimeExpired.
				_model.OnTimeExpired(wakeUpTime);
				return;
			}
			else if (timeLeftMS < 0)
			{
				throw new Exception("timeLeftMS is " + timeLeftMS + ", should never be < 0");
			}
			wakeUpTime += _timeStep; // the time at which this task will be run again
		}

		private void UpdateTime()
		{
			_model.DispatchEvent(new UpdateClockEvent(GetMSLeft()));
		}

		/// set up the task with a duration, and possibly paused.
		public void Setup(int timeNow, int duration, bool startPaused = false)
		{
			_startTime = timeNow;
			_duration = duration;
			accumulatedPauseTime = 0;
			_lastPausedAt = timeNow;
			wakeUpTime = NEVER; // do nothing until this task is resumed.

			if (startPaused)
			{ // tell the UI what the remaining time is.
				UpdateTime();
				return;
			}
			// leave it paused
			Resume(timeNow); // Resume it now!
		}
		/// returns the number of seconds left in the game.
		/** \returns the number of seconds left in the game, rounded up to the nearest second. */
		public int GetSecsLeft()
		{
			// round UP to the nearest second.
			return (GetMSLeft()+999)/1000;
		}
		/// returns the number of milliseconds left in the game.
		/** \returns the number of milliseconds left in the game. */
		public int GetMSLeft()
		{
			int endTime = _startTime + _duration + accumulatedPauseTime;
			if (IsIdle())
				return endTime - _lastPausedAt;
			else
				return endTime - wakeUpTime;
		}

		/// Pause the clock at a specific time
		public void Pause(int t) /**< time representing now, the time at which we are pausing. This time is always less than or equal to wakeUpTime. */
		{
			if (scheduler == null)
			{
				// Ignore the pause because we're not running anyway.
				return;
			}

			if (t > wakeUpTime)
				throw new ArgumentException("Pause time must be <= wakeUpTime");

			// If we are already paused, do nothing!
			if (IsIdle())
			{
				return;
			}
			// Remember when we paused to calculate accumulatedPauseTime when we wake up, and time left while we're paused
			_lastPausedAt = t;
			wakeUpTime = NEVER; // go idle.
		}
		/// Resume the clock at a specific time, representing now.
		public void Resume(int t) ///< time representing now.
		{
			// If we aren't paused then return
			if (!IsIdle())
			{
				return;
			}
			UpdateTime();
			accumulatedPauseTime += t - _lastPausedAt;
			wakeUpTime = NextTimeStepAfter(t);
		}
		/// make this task forget about the model we passed to it.
		public void Cleanup()
		{
			_model = null;
		}

		//Get the next time step after the given time such that some number of _timeSteps later, GetMSLeft() will return
		//exactly 0
		private int NextTimeStepAfter(int time)
		{
			int endTime = _startTime + _duration + accumulatedPauseTime;
			int timeLeft = endTime - time;
			int timeStepRemainder = timeLeft % _timeStep;
			return time + timeStepRemainder;
		}

		/// Rewind the clock. This is for undo functionality, especially in a game solver context.
		public void Rewind(
			int stateTimeMS,  ///< what time to Rewind to.
			int accumulatedPauseTime) ///< accumulated pause time at stateTimeMS
		{
			this.accumulatedPauseTime = accumulatedPauseTime;
			wakeUpTime = NextTimeStepAfter(stateTimeMS);
		}
	};
}
