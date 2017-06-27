using System;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils {

	public interface IJobController {
		void PleaseStart(Job job);
		void JobDone(Job job);
		bool SupportsPriority {
			get;
		}
	}

	/**

		Job priority numbers are larger for lower-priority jobs, and smaller for higher-priority jobs.
		When you try to start a job, if a higher-priority job is running, your job will be made to wait.
		If no other Job is running, your job will start.
		If your job's prority # is <= the priority # of the running job with the lowest priority #, your job will start.
		Whenever a job finishes running, any jobs which the finishing job was causing to wait will then start.

	*/

	/// This object makes sure that lower priority jobs do not start until higher priority jobs are complete.

	/// singleton access to a JobPriorityQueue. 
	/** 
		Not really recommended, as there can be different types of jobs, and each type might want its own priority queue.
	*/
	public static class GlobalJobPriorityQueue {

		private static JobPriorityQueue _instance;

		public static JobPriorityQueue instance {
			get {
				if (null == _instance) {
					_instance = new JobPriorityQueue();
				}
				return _instance;
			}
		}
	}

	// class to prevent jobs from starting when higher-priority jobs are running.
	public class JobPriorityQueue : IJobController {

		private Heap WaitingJobs = new Heap(); // jobs which are waiting to run
		private Heap RunningJobs = new Heap(); // jobs which are running now.

		public bool SupportsPriority {
			get {
				return true;
			}
		}

		/// ask the queue to start a job. It might refuse and queue it up.
		public void PleaseStart(Job job) {

			Job topJob = (Job)RunningJobs.Top; // a running job with the highest priority.

			// we can run if no jobs are running, or if the most important job running is at or below our priority.
			if (topJob == null || job.Priority <= topJob.Priority) {
				RunningJobs.Add(job); // keep track of running jobs
				job.__ActuallyStart(); // really start the job.
				return;				
			}

			if (job.Name != null) {

				GsnDebug.Log(job.Name + " waits" + (topJob.Name != null ? " because of " + topJob.Name : ""));

			}

			// Our priority doesn't match or beat the priority of topJob.
			WaitingJobs.Add(job);
		}

		// a job is finishing (called at the end of Finish)
		public void JobDone(Job job) {

			// forget about the job. Remove it from where it is.
			WaitingJobs.Remove(job); // no longer waiting (harmless if not waiting)
			RunningJobs.Remove(job); // no longer running (harmless if not running)

			// start running any job that should now be run.
			Job firstWaiter = (Job)WaitingJobs.Top;

			if (firstWaiter == null) { 
				return; // No jobs to start.
			}

			Job topJob = (Job)RunningJobs.Top;

			while (topJob == null || firstWaiter.Priority <= topJob.Priority) { // start firstWaiter
				WaitingJobs.Remove(firstWaiter); // no longer waiting.
				RunningJobs.Add(firstWaiter); // call it running.
				firstWaiter.__ActuallyStart(); // start it. Note, this could start more than one job, including a high-prio one!

				firstWaiter = (Job)WaitingJobs.Top;
				if (firstWaiter == null)
					break;

				// get a fresh topJob.
				topJob = (Job)RunningJobs.Top; // NOTE, this MIGHT NOT BE the job we just started.
			}
		}
	}
}
