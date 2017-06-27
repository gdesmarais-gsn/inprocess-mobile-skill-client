using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils {

	// This JobController is basically a Job execution FIFO.  Jobs which share this controller will wait for the prior one to complete.
	public class JobOrderQueue : IJobController {

		private List<Job> jobList = new List<Job>(); // the waiting jobs.

		private Heap runningJobs = new Heap(); // the running jobs.

		private int maxRunning = 1; // default only runs one at a time, but the pipe can be made fatter.

		public int MaxRunning {
			set {

				maxRunning = value;

				runJobs(); // whenever it is changed, we might run some jobs.

			}
			get {
				return maxRunning;

			}

		}

		public bool SupportsPriority {
			get {
				return false;
			}
		}

		public void PleaseStart(Job job) {

			if (runningJobs.Count < maxRunning) { // there's room to run the job.
				runningJobs.Add(job);		// we'll be running.
				job.__ActuallyStart();	// start us.
			} 
			else {
				// wait until later.
				jobList.Add(job);
			}
		}

		// run any jobs to get us up to the maxRunning
		private void runJobs() {

			Job jobToRun;

			while (jobList.Count != 0 && runningJobs.Count < maxRunning) { // there waiting jobs to run.
				jobToRun = jobList[0];
				jobList.RemoveAt(0); // not waiting any more.
				runningJobs.Add(jobToRun);	// it will be running.
				jobToRun.__ActuallyStart();	// start it.
			}
		}

		public void JobDone(Job job) {

			jobList.Remove(job);	// if it's not running, do this.

			runningJobs.Remove(job); // if it's running, do this.

			runJobs();	// run a job to take its place.

		}
	}
}
