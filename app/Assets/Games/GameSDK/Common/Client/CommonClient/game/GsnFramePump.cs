using System;
using GSN.Skill.Games.Common.Utils;
using UnityEngine;

namespace GSN.Skill.Games.Common.Client.Game
{

	/// Class to serve as the wall clock in the game client, and to allow for manipulating the time progression of the game as necessary.
	/** 

		This class uses Time.time internally, but allows for certain time manipulations which we require, such as detecting breakpoints 
		in a debug build, so that game progression stops during time spent at a breakpoint (and doesn't race forward when the code starts
		running again).

	*/
	public class GsnFramePump : Singleton<GsnFramePump>
	{
		private ControllerBase _controller;

		private long _tZero; // Time.time (* 1000) at which the game started.

		int _virtualFrameTime; // time last passed to the controller. This is the game time.


		int _pausedTime;  // amount of time spent paused, to make up for lack of progression of Time.time.
		
		private int _timePausedAt = -1;
		private int _totalTimePaused = 0;
		private int _pauseCount = 0;
		
#if DEBUG
		private int _rawTime;
		private float _msResidue;	// fractional ms not yet processed.
		private int _scaledTime;	// counter of scaled ms			
		private int _postBPTime;    // breakpoint-filtered real-time.
#endif

		public GsnFramePump()
		{
			Reconstruct();
		}

		/// Tell the frame pump how much time was spent with the game in the background (not running).
		/**
			Calling this function with a positive amount will make the game jump forward that amount (in ms).
		*/
		public void AddPausedTime(int t ///< number of milliseconds to jump forward.
			)
		{
			if (_pauseCount > 0)
				return;
				
			_pausedTime += t; // force the game to progress t milliseconds.
		}

		private void Reconstruct()
		{
			_virtualFrameTime = 0;

			_pausedTime = 0;
			_controller = null;

#if DEBUG
			_rawTime = 0;
			_msResidue = 0;
			_scaledTime = 0;
			_postBPTime = 0; // realTime after dealing with breakpoints.
#endif
		}

		public void Pause()
		{
			if (_pauseCount++ == 0)
			{ // remember the time at which we are paused
				_timePausedAt = GetTimer();
			}
		}

		public void Resume()
		{
			if (--_pauseCount == 0)
			{ // accumulate the total amount of time paused and resume
				_totalTimePaused += GetTimer() - _timePausedAt;
				_timePausedAt = -1;
			}
		}

		public int GetPauseableTimer()
		{
			if (_timePausedAt != -1)
			{ // we're paused. return the paused virtual frame time
				return _timePausedAt - _totalTimePaused;
			}
			else
			{ // we're not paused. give back the current time minus the total amount we were paused
				return GetTimer() - _totalTimePaused;
			}
		}

		// give me the current time in milliseconds
		public int GetTimer()
		{
			// Note that Time.time is not reliable - that is, it pauses if the application is paused
			// Skill games require us to track that passage of time, so we need to account for the
			// paused time later  (see _delayTime)
			long t = (long)(Time.time * 1000);
			return (int)(t - _tZero);
		}
		
		/// Starts the frame pump, telling it what controller to send time updates to.
		public void Start(ControllerBase controller)
		{
			Reconstruct();
			
			_tZero = (long)(Time.time * 1000);  // mark when the frame pump was started.
		
			_controller = controller;

			_pausedTime = 0;
		}
		
		/// Call this function from an Update function of a MonoBehaviour, to cause the game to run.
		/** 

			Until you call Start, the frame pump won't do anything.

		*/
		public void Update()
		{

			if (_controller == null) {
				return;
			}

			int realTime = GetPauseableTimer(); // what time Unity says it is now.

#if DEBUG
			int deltaT = realTime - _rawTime; // how much time has really passed. CAN BE NEGATIVE BECAUSE UNITY MAY SUCK (NOTE: This is only speculation).
			_rawTime = realTime; // save for next time.

			//Debug.Log("deltaT: " + deltaT);

			if (deltaT > 400)
			{
				Debug.Log(realTime + " BREAKPOINT DETECTED");
				return;
			}

			_postBPTime += deltaT;

			realTime = _postBPTime;

			// realTime is now time as passes in small chunks. It's breakpoint-filtered.
			// deltaT is how much time just passed (a small chunk).

			// Scale the time.

			// _mResidue is the fractional millseconds not processed.  
			_msResidue += deltaT; // scale the passing of time (floating point Numbers)
			
			int scaledPassed = (int)_msResidue; // get the integer portion.
				
			_msResidue -= scaledPassed;	// subtract it from the floating point value, to get the fraction left over.
				
			_scaledTime += scaledPassed; // add the scaled delta to the last scaled timestamp.
				
			if (_scaledTime != realTime)
			{ // scaling has messed with the time.
				realTime = _scaledTime; // fake out the rest of the function by setting realTime. It's actually fake.					
			}
#endif

			// "Adding" paused time, which has the effect of adding more time
			// to the game clock.
			realTime += _pausedTime;

			// believe it or not, realTime can go backward. In this case, the game just doesn't progress until it 
			// catches up with its prior self.
			if (realTime <= _virtualFrameTime)	
				return;

			_virtualFrameTime = realTime;
			try 
			{
				_controller.UpdateTime(_virtualFrameTime);
			}
			catch (Exception e)
			{
				_controller = null;
				GsnDebug.LogError("GsnFramePump has failed to handle controller.UpdateTime:", e.Message, e.StackTrace);
				throw e;
			}
		}
	}
}
