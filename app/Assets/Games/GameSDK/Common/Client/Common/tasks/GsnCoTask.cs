using System;

namespace GSN.Skill.Games.Common.Tasks
{
	/// a GsnTaskBase which can be paired with another GsnCoTask. Generally each of the two GsnCoTask instances has the same wakeUpTime.
	/**
		If one GsnCoTask is removed from its GsnScheduler before it runs, the other will also be removed from *its*
		GsnScheduler.  In other words, unscheduling one of the GsnCoTask instances before it runs will UnSchedule the other, which
		will prevent it from running.
	
	 */
	public abstract class GsnCoTask: GsnTaskBase
	{
		private GsnCoTask _coTask;

		/// Constructs a GsnCoTask. It has no pairing with another GsnCoTask yet.
		public GsnCoTask()
		{
			_coTask = null;
		}


		/// Restores a GsnCoTask to its post-construction state.
		protected override void Reconstruct()
		{
			if (_coTask!=null)
			// unlink any co-task, otherwise it might try to remove us sometime!
			{
				_coTask._coTask = null;
				_coTask = null;
			}
			base.Reconstruct(); // Reconstruct from derived to base.
		}
		/// Sets up a reference to another GsnCoTask, and also sets its reference back to _this_ GsnCoTask.
		public void SetCoTask(
			GsnCoTask task ///< the GsnCoTask to pair with this GsnCoTask.
			)
		{
			_coTask = task;
			task._coTask = this;
		}

		/// Gets called by the GsnScheduler if the GsnCoTask is unscheduled while not inside its own Run() function.
		/**


			For normal GsnCoTask behavior, you should never call OnRemoved(), as the scheduler will call it for you.

			If, however, you want _only the first_ GsnCoTask of a pair to Run(), you can explicitly call OnRemoved() inside
			its Run() function. This will UnSchedule the other (second) GsnCoTask, preventing it from running.

		*/

		public override void OnRemoved() 
		{
			if (_coTask!=null)
			{
				_coTask.UnSchedule();
				_coTask = null;
			}
		}
	};
}
