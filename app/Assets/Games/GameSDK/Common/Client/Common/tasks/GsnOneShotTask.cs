using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Tasks
{
	/// Simple "fire and forget" task for testing the GsnScheduler
	public class GsnOneShotTask: GsnTaskBase
	{
		private int _id;
		private GsnDumpCatcher _dc;
		public GsnOneShotTask(
			int id, 			///< how this task should identify itself to the dump catcher. 
			GsnDumpCatcher dc	///< where to catch output from this task.
			)
		{
			_id = id;
			_dc = dc;
			dc.CatchDump(id, ("new OneShot").ToString());
		}
		/// runs once and unschedules itself. Lets the GsnDumpCatcher know.
		public override void Run()
		{
			_dc.CatchDump(_id, "running oneShot at "+wakeUpTime);
			UnSchedule(); // remove this from its scheduler
		}
	};
}
