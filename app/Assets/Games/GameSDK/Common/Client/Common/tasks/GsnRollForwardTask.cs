using GSN.Skill.Games.Common.Model;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Tasks
{
	/// This class is for games whose model needs to be aware of frames
	/**

		If a game model needs a frame-by-frame update at a specific frame-rate, this task is the means of 
		achieving that.

		The frame duration is provided as a GsnRational, so we can get exact frame rates like 30 fps, etc,
		where the actual frame duration is not a whole number of milliseconds.

		This task calls the rollOneFrame() function on the model.

	*/
	public class GsnRollForwardTask: GsnTaskBase
	{
		private GsnRational _rfTime; // chunked up time.
		// Constants
		private GsnRational _frameDuration; //Time at which each iteration of roll forward will move		
		private GameModelBase _model;

		/// Construct a GsnRollForwardTask, given a model and a frameDuration
		public GsnRollForwardTask(
			GameModelBase model, 		///< the model to call rollOneFrame() on.
			GsnRational frameDuration	///< the duration of the frame, in milliseconds, as a GsnRational
			)
		{
			_model = model;
			// Initialize the next time we'll update roll forward to. It's 1/2 ms to begin with to make rounding trivial.
			_rfTime = new GsnRational(0, 1, 2);
			_frameDuration = new GsnRational();
			_frameDuration.Assign(frameDuration); // COPY the value passed in.
			// Since wake up time's default time is NEVER, we need to set this 0
			wakeUpTime = 0;
		}
		
		/// Calls rollOneFrame() on the model, and adjusts wakeUpTime for the next frame. Frame times are rounded to the nearest millisecond.
		public override void Run()
		{
			// Call the rollOneFrame function (By default, this should call the derived one as the base doesn't do anything)
			_model.RollOneFrame(wakeUpTime);
			// Increment the next time to update
			_rfTime.Add(_frameDuration);
			wakeUpTime = _rfTime.Integer; // plan our next wakeup.
		}
	};
}
