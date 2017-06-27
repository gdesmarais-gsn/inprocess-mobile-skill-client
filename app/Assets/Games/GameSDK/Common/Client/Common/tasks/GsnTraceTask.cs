using System.Diagnostics;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Tasks
{
	/// A simple testing task, which runs periodically
	public class GsnTraceTask: GsnCoTask
	{
		private int _id;
		private int _period;
		private GsnDumpCatcher _dc;

		public GsnTraceTask(
			int id, 					///< id of this task, for the GsnDumpCatcher.
			int period, 				///< how often this task will Run.
			int firstRun, 				///< time at which the task will first Run.
			GsnDumpCatcher dc = null	///< GsnDumpCatcher to record output in.
			)
		{
			_id = id;
			_period = period;
			wakeUpTime = firstRun;
			_dc = dc;
		}
		
		/// either traces or catches, some output, depending on if there is a GsnDumpCatcher. Adds period to wakeUpTime.
		public override void Run()
		{
			if (_dc!=null)
			{
				_dc.CatchDump(_id, (wakeUpTime).ToString());
			}
			else
			{
				Trace.WriteLine(_id, (wakeUpTime).ToString());
			}
			wakeUpTime += _period;
		}

		/// takes note of the task's removal, if there's a GsnDumpCatcher.
		public override void OnRemoved()
		{
			if (_dc!=null)
			{
				_dc.CatchDump(_id, "removed");
			}
			base.OnRemoved();
		}
	
	};
}
