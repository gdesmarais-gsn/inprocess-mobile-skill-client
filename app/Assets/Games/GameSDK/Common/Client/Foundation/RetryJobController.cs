namespace GSN.Skill.Games.Common.Utils
{

	// This controller gets a group of RetryJobs to work together, such that if one succeeds, all the others retry right away
	// rather than waiting.
	public class RetryJobController : IJobController {

		private Heap runningJobs = new Heap(); // just a place to hold a group of jobs.

		public bool SupportsPriority {
			get {
				return false;
			}
		}

		public void PleaseStart(Job job) {

			runningJobs.Add(job); // remember it's running.
			job.__ActuallyStart(); // start it.

		}
		public void JobDone(Job job) {

			runningJobs.Remove(job); // forget that it is running

			if (!job.Failed) {
				runningJobs.ForEach(rushRetry); // tell everybody else to run right now.
			}
		}

		private void rushRetry(IHeapable pwrj) {

			((RetryJob)pwrj).RushRetry();

		}

	}
}
