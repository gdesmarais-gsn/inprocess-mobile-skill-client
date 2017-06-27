using UnityEngine;
using GSN.Skill.Utils;

namespace GSN.Skill.Games.Common.Client
{
    public class TimeScale : Singleton<TimeScale>
    {
    	/// Boolean to tell whether or not the system is paused.
        public bool Paused { get; private set; }
        private float pausedSpeed = 0.0f;

        public TimeScale()
        {
            Paused = false;
        }

        /// This function will Toggle the pausing of time.  When it unpauses time it will go back to what the previous time was.
		public void TogglePause()
		{
			if (Paused)
			{
				Time.timeScale = pausedSpeed;
			}
			else
			{
				pausedSpeed = Time.timeScale;
				Time.timeScale = 0;
			}
			Paused = !Paused;
		}

		/// This function will reset the time to one.  I will unpause the system first if the system was paused.
		public void Reset()
		{	
			if (Paused)
				TogglePause ();
			Time.timeScale = 1; 
		}


		/// This system will modify the time by \ref delta.  The time is capped between 0 and 100.  If the system is paused it will unpause it before modify the time.
		public void Modify(float delta)
		{
			// Unpause first
			if (Paused)
				TogglePause ();

			float time = Time.timeScale;
			time += delta;
			if (time > 100)
				time = 100;
			if (time < 0)
				time = 0;
			Time.timeScale = time;
		}
    }
}

