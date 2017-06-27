using System;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Tasks
{
	/// A class for testing the OnIdle() functionality of the GsnScheduler.
	public class GsnIdleAwareScheduler: GsnScheduler
	{
		private int _id;
		private GsnDumpCatcher _dc;
		public GsnIdleAwareScheduler(
			int id, 			///< what id this GsnIdleAwareScheduler should call itself to the GsnDumpCatcher.
		 	GsnDumpCatcher dc	///< a GsnDumpCatcher to send our output to.
		 )
		{
			_id = id;
			_dc = dc;
		}

		/// Should be called whenever the GsnIdleAwareScheduler goes idle.
		public override void OnIdle(int t)
		{
			GsnOneShotTask ost;
			
			_dc.CatchDump(_id, "idle time is "+t);
			ost = new GsnOneShotTask(23, _dc);
			ost.wakeUpTime = t+1500;
			Add(ost);
		}
	
	};
}
