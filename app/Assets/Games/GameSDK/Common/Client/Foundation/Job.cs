#if false
#define REF_REASONS
#endif

using System;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils
{

	/**
		\brief A Job is an object that represents a software activity which completes, or condition which obtains, asynchronously. 

		The Start function returns immediately, but the Finish (protected) function indicates the
		completion of the Job itself, calling the Action passed to Start.

		The completion Action (doneAction, passed to Start) of the Job will invariably be called (unless intentionally forgotten), 
		regardless of whether the Job succeeds or fails. 

	### Failed

		The Failed public bool indicates failure, for use in doneAction. Failed defaults to false. Set it to true before calling 
		Finish if your Job fails.

	### Abort

		A Job can be aborted by calling Abort(). Abort simply tells the Job that you want it to finish *very soon* rather than
		to continue to perform its task. Calling Abort does not assure that the Job will fail--it just forces the Job to finish fast.

		Aborting a Job is not necessarily a synchronous operation, in that the doneAction of the job is not necessarily called before 
		Abort() returns. On return from Abort, it is not yet known whether the Job has succeeded or failed. The only way to know that is 
		by checking Failed in doneAction (passed to Start). On abort, a Job probably fails, but not necessarily. It can 
		succeed even if aborted (for instance if it was about to succeed anyway).

	### Use of ActionQueue

		Job instances, as such, make extensive use of the ActionQueue class, which allows them to perform work on secondary
		threads and still call the doneAction on the main thread (in a call to ActionQueue.process()).

	### Job states

		Jobs have three major states: RESET, RUNNING, and DONE.

		A RESET job is one that is ready to be started by a call to Start(). If you call Start on a RESET job, its CustomStart
		function will be called, and the doneAction (passed to Start) will be called when the Job calls Finish().

		A RUNNING job is doing its work, and has not yet called Finish().  If you call Start on a RUNNING job, 
		it will keep running, and it will take note of your request to run it, such that when it is done running, it will call 
		not only the doneAction provided by the first call to Start(), but also the doneActions provided by the second and 
		subsequent calls to Start().

		A DONE job has completed its work. It may even have already called all the doneActions passed to it by calls to Start(). 
		If you call Start() on a DONE job, it will do nothing except call the doneAction, synchronously.

		It is best to return immediately after calling Start, because any code after Start in the enclosing function might be 
		called before, or after, the Action passed to Start. To minimize uncertainty, don't do anything after calling Start. Instead, 
		allow your doneAction to do the work.

		The basic idea is that a single Job can, in fact, have multiple clients which desire its completion. Each client calls
		Start() on the Job, and the Job, on completion, lets each of its clients know that it is done by calling each client's
		doneAction.

		Even with multiple clients, a Job actually runs only once, but it calls each client's doneAction to confirm that the 
		Job is done.

	### Re-running a job

		If you wish to run a Job again, you must call Reset(), which puts the Job back into RESET state, such that a call to Start()
		will actually call the Job's CustomStart function, rather than only calling the doneAction passed to Start().

		Reset() has no effect on DONE Job instances which have completed successfully (Failed is false). The general purpose of Reset()
		is to permit a re-start of a failed Job in an attempt to get success out of it.

		If you wish to re-run a successful job, you must call Reset(true), which forces the Reset in the case of a successful job.

	### Prerequisite Jobs

		If there are jobs that you want successfully completed before performing a job, call AddPrerequisite for each such
		job. Only if all prerequisites are successfully completed will CustomStart be called.

		All prerequisites are started at the same time (when you call Start); they are not run sequentially. If any of them fail,
		then this Job is considered to have failed.

		Resetting a Job also resets its prerequisites. Aborting a Job aborts its prerequisites.

	### Controllers

		Each job can have a Controller, if you assign one to it. The Controller implements IJobController. After all of a job's
		prerequisites are complete, the Controller is given custody of the Job, to determine when its CustomStart function will
		actually be called.  When a job Finishes, its Controller is informed of such so it can forget about the job. 
		In this way, a Controller can be used to queue up jobs, forcing them to wait for other jobs to complete before 
		CustomStart gets called. A controller also keeps track of running jobs because they might cause new jobs to be queued up.

		A special controller might also perform special actions on special jobs within its custody. For instance, a controller
		might notify all of its running jobs that one of its jobs has succeeded. This might impact the activity of the running
		jobs.

	### Priority

		Each job has a Priority, which is used if the Job is ever placed in a Heap. Job implements IHeapable, and Priority is 
		used to position the Job in its Heap if it has one.  The JobPriorityQueue IController makes use of heaps.  Changing a Job's
		Priority may cause it to move, if in a Heap, to another position in the Heap. 

	*/

	// Job is IHeapable so that it can be put into a heap for things like priority controllers.
	abstract public class Job : IHeapable {

		// this struct is a way to associate an ActionContext with each doneAction, so Finish can set the proper context
		// before calling each doneAction. 
		private struct DoneContext {
			public Action doneAction; // the action to call from Finish
			public ActionContext actionContext;	// the context to run it under.

			public DoneContext(Action da, ActionContext ab) {
				doneAction = da;
				actionContext = ab;
			}
		}

		// The four states of a Job. 
		private enum JobStateValue {
			HARD_RESET, // all subjobs have been reset.
			SOFT_RESET,		// Only failed subjobs have been reset. Successful ones are still in DONE state.
			RUNNING,	// Started, but not done
			DONE 		// Completed, i.e. Finished.
		};

		// these values are for how this job will auto-self-reset when you start it.
		public enum AutoResetValue {
			NONE,	// no AutoReset. This is the normal case.
			SOFT,	// Only if failed. 
			HARD	// Always
		}

		// some standard priority values. Smaller is prior.
		public const int HIGHEST_PRIORITY = -3000;
		public const int HIGHER_PRIORITY = -2000;
		public const int HIGH_PRIORITY = -1000;
		public const int NORMAL_PRIORITY = 0;
		public const int LOW_PRIORITY = 1000;
		public const int LOWER_PRIORITY = 2000;
		public const int LOWEST_PRIORITY = 3000;

		// What phase of Job start we are in. These are basically sub-states of RUNNING.
		private enum StartPhaseValue {
			AWAITING_PREREQUISITES,		// Prerequisites aren't done yet.
			AWAITING_CONTROLLER,		// Controller hasn't let us start yet.
			ACTUALLY_STARTED			// RUNNING proper.
		};

		private StartPhaseValue StartPhase; // only meaningful if JobState == RUNNING. Note that JobState is set to RUNNING in Start.

		private JobStateValue JobState; // Yes, private. The owner of a job shouldn't be polling it. Use the completion callback.

		public AutoResetValue AutoReset; // Whether and how the job resets when you Start it.

		public bool Failed;		// whether the job has failed (only significant after job is complete)

		public bool Running {	// OK, you can check to see if a job is RUNNING.
			get {
				return JobState == JobStateValue.RUNNING;
			}
		}

		protected ActionQueue actionQueue; // how this job will make its callback happen

		private List<DoneContext> doneContexts; // actions to run on completion.
		private List<DoneContext> otherDoneContexts; // empty list to swap in while Finishing.

		private List<Job> Prerequisites; // the jobs which must complete before we do our work 
		private Action[] PrerequisiteDoneActions; // the doneAction that the particular Prerequisite will call.

		private int prerequisitesRunning; // how many prerequisites are still running.

		public int jobID { // A unique number for each Job constructed.
			get; private set;
		}

		protected ActionContext actionContext; // the context for this job.

		private string contextNote; // a note for the context used when starting.
		
		public string Name; // a name you can give to a job, for debugging. No name means quiet debugging.

		public int Timeout = 0; // no timeout by default.

		public bool Aborted {
			get; private set;
		}

		private TimeoutDispatcher jobTimeoutDispatcher; // Job self-aborts if this timeout expires.
		public bool ActuallyStarted { get; private set; }  // Was the job actually started?

		public Heap __heap {
			get; set;
		}

		public int __heapIndex {
			get; set;
		}

		public int heapRank {
			get {
				return _Priority;
			}
		}

		private int _Priority; 

		// higher priority jobs, while running, prevent lower priority jobs from starting.
		public int Priority { // LOWER NUMBERS MEAN HIGHER PRIORITY.
			get {
				return _Priority;
			}
			set {

#if DEBUG
				if (Controller == null) {
					throw new Exception("Please set Controller before setting priority.");
				}

				if (!Controller.SupportsPriority) {
					throw new Exception("Controller doesn't use priority.");
				}
#endif
				_Priority = value;
				// changing priority can move this Job's position in the heap.
				// keep it up to date.
				if (__heap != null) {
					__heap.__adjustIndex(this);
				}
			}
		}

		public IJobController Controller {
			set; get;
		}

		// Counter from which JobIDs come.
		private static int JobCounter;

		private bool loggingEnabled;
		private uint loggingPreferenceStrength;

		public void SetLogging(bool loggingEnabled, uint loggingPreferenceStrength) {

			this.loggingEnabled = loggingEnabled;
			this.loggingPreferenceStrength = loggingPreferenceStrength;
		}

		/// Constructor
		protected Job(AutoResetValue autoReset = AutoResetValue.NONE)
		{
			actionQueue = GlobalActionQueue.instance;
			JobState = JobStateValue.HARD_RESET;    // Job ready to start
			AutoReset = autoReset;
			Aborted = false;
			Failed = false;                 // We haven't failed yet.
			doneContexts = new List<DoneContext>();             // nothing to do when we are done, yet.
			otherDoneContexts = new List<DoneContext>();
			Prerequisites = null;           // we don't have any prerequisites yet.		
			prerequisitesRunning = 0;		// no prerequisites are running.
			jobID = ++JobCounter;			// set the jobID
			Name = null;					// we have no name yet.
			// Name = this.GetType().Name + jobID; // name based on Type
		}

		// utility function to abort all jobs in a specific list. The list can be null.
		protected void AbortAll(List<Job> l) {

			if (l == null) {
				return;
			}

			int count = l.Count;

			for (int i = 0; i < count; ++i) {
				l[i].Abort();
			}
		}

		// forget about calling a particular doneAction.  Since we won't be calling the doneAction, we 
		// will be forgetting about its context, too. So we cut down the refcount.
		// if it goes to zero, we recycle it.
		public void Forget(Action doneAction)
		{

			doneContexts.RemoveAll((DoneContext x) => {

				// for each one found, remove a ref from it.
				bool retval = x.doneAction == doneAction;

				if (retval) { // if we're removing it

					x.actionContext.RemoveRef(
						#if REF_REASONS
						"Forgetting"
						#endif
					);
				}

				return retval;

			});
		}

		// utility function to reset all jobs in a specific list. The list can be null.
		// hard causes even successful jobs to be reset
		protected void ResetAll(List<Job> l, bool hard) {
			if (l == null) {
				return;
			}

			int count = l.Count;

			for (int i = 0; i < count; ++i) {
				l[i].Reset(hard);
			}

		}

		public void AddPrerequisite(Job j) {

			if (Prerequisites == null) {
				Prerequisites = new List<Job>();
			}

			if (PrerequisiteDoneActions != null) {
				throw new Exception ("Cannot add prerequisites after Starting");
			}

			Prerequisites.Add(j);

		}

		/// subclass must define this
		/** Most jobs will ignore the argument, but it is needed for multijob. */
		protected virtual void CustomReset(bool hard) {

		}
		/// make it possible to run this job again.

		/// Prepare a job to be run again, typically if the job has failed.
		/** This function usually does nothing if the job has been successful. Hard means reset the job
			even if it has been successful.
			*/

		// Do not ordinarily Reset jobs which have already succeeded.
		// Hard means force a reset even on successfully completed jobs.

		/*

		A job only runs once if it is never reset. Resetting lets you run it again.

		Resetting a job has two purposes: 1. To take another try at a failed job. 2. To repeat the work of a successful job.

		Prerequisites are jobs which must be successfully completed in order for us to run.

		To repeat OUR work is not necessesarily to repeat THEIR work.

		It would be different if they were sub-jobs. But they are not.				

		*/

		public void Reset(bool hard = false) {

			if (Name != null) {
				GsnDebug.Log(Name, "is", hard ? "hard" : "soft", "reset", JobState == JobStateValue.RUNNING ? "while running, doing nothing" : "");
			}

			switch(JobState) {

			case JobStateValue.HARD_RESET: // All sub-jobs have been hard reset. Nothing more to do.
				return;

			case JobStateValue.SOFT_RESET: // We are reset, but we might have successful sub-jobs not reset.
				if (!hard) {
					return; // not looking to reset successful sub-jobs.
				}
				JobState = JobStateValue.HARD_RESET; // now fully reset.

				CustomReset(true); // reset those successful sub-jobs.
				break;

			case JobStateValue.RUNNING:
				return; // To reset a job is to prepare it to start. So if you reset it while running, 
						// it will just keep running. The point of reset is to make sure that IF you
						// call Start on it, AND it WAS DONE, it will actually do work now. But if 
						// it is actually already doing work, then a call to reset is a "just in case you are finished"
						// kind of thing.

			case JobStateValue.DONE:
				if (Failed || hard) // don't normally reset successful jobs.
				{
					Aborted = false;

					// only reset failed jobs, unless you are forcing reset.
					JobState = hard ? JobStateValue.HARD_RESET : JobStateValue.SOFT_RESET;
					Failed = false;		// Assume future success

					// this next line is probably redundant. But good to be sure.
					doneContexts.Clear(); // no doneContexts yet. They get set by Start.

					ResetAll(Prerequisites,false); // reset prerequisites. Never reset successful ones, because we DON'T OWN THEM.
					CustomReset(hard); // do the concrete work of resetting the job and its sub-jobs.

				}
				break;
			}
		}

		/// forces a job to complete really soon. Could fail or succeed.
		// custom implementation of Abort. Define this in your subclass.
		protected virtual void CustomAbort() {

		}

		/// force a job to complete really soon (but not synchronously). Could fail or succeed.
		public void Abort() {
			if (JobState != JobStateValue.RUNNING) {
				return; // do nothing if not running.
			}

			if (Aborted)
				return; // don't abort twice.

			if (Name != null) { 
				GsnDebug.Log("Aborting", Name); // debug output
			}

			Aborted = true;

			if (jobTimeoutDispatcher != null) {
				/* We're aborting the Job right now. We MIGHT be aborting it due to the jobTimeoutDispatcher firing,
					 but not necessarily. There are two cases:

					 1. We are Aborting BEFORE the jobTimeoutDispatcher fires.
					 2. We are Aborting BECAUSE the jobTimeoutDispatcher fires.

					In the first case, we should abort the jobTimeoutDispatcher now, so it doesn't cause problems
					later.

					In the second case, aborting it does nothing.
				*/
				jobTimeoutDispatcher.Abort(); // stop the overall timer. We do this no matter what.
			}


			switch(StartPhase) {
			case StartPhaseValue.AWAITING_PREREQUISITES:
			//	GsnDebug.Log("Aborting", Name, "while AWAITING_PREREQUISITES");
				AbandonPrerequisites(); // MUST RETURN AFTER CALLING THIS. It calls Finish().
				break;
			case StartPhaseValue.AWAITING_CONTROLLER:
			//	GsnDebug.Log("Aborting", Name, "while AWAITING_CONTROLLER");
				Failed = true;
				Finish();	// we're not going to start. We'll rip ourselves out of the controller.
				break;
			case StartPhaseValue.ACTUALLY_STARTED:
			//	GsnDebug.Log("Aborting", Name, "while ACTUALLY_STARTED");
				// we've already started, so we must abort the normal way.
				// call CustomAbort, in this job's ActionContext.
				actionQueue.CallActionInContext(CustomAbort, actionContext);		
				break;
			}
		}

		/// override this in a subclass.  It starts the job, and returns immediately.
		abstract protected void CustomStart();
		
		/// Another way to start a job. Note that it takes a doneAction with a boolean argument indicating failure
		public void Start(Action<bool> doneAction, string note = null) {
			Start(() => {doneAction(Failed);}, note); // call the other Start.
		}

		///	Generic function to Start a Job. 
		/** Only starts it if it hasn't started yet.
			If the Job has started already doneAction will be called on Job completion.
		 	If the Job has already finished, doneAction is called immediately.
		 	Beware in situations where multiple jobs start the same job. It will
		 	only be run once, and both super-jobs will get notified on completion.
		 	Don't modify the job once it completes, or you may have a race condition
		 	between the two waiting jobs--that is, both waiting jobs' completion functions
		 	will get called, and the first one shouldn't modify stuff the second one might look at.
		 	Both completion functions should see the same result.
		  */
		public void Start(Action doneAction, string note = null) {

		//	Name = this.GetType().Name + jobID; // override name based on Type

			contextNote = note;

			switch (JobState) {
					
				case JobStateValue.RUNNING:
					// JobState is RUNNING. Piggyback on the future completion.
					// A job is never started twice without a Reset. This way, the second
					// Job to try to Start this job will not continue until this job finishes.
					// remember how to finish on behalf of who is calling Start.
					// DoneContext is a struct, so this just adds another space in the list, and puts two values in it.
					doneContexts.Add(new DoneContext(doneAction, actionQueue.Context.AddRef(
						#if REF_REASONS
						"Start Job " + Name
						#endif
						)));
					return;

				case JobStateValue.DONE:

					// Do the right thing depending on AutoReset
					switch(AutoReset)
					{
						case AutoResetValue.HARD:
							Reset(true); // certainly prepare it for running.
							break;

						case AutoResetValue.SOFT:
							Reset(false); // do a soft reset
							if (JobState == JobStateValue.DONE) // it did nothing.
								goto case AutoResetValue.NONE;

							break;

						case AutoResetValue.NONE:
							// cannot perform again without resetting first. State of Failed stands, 
							// i.e. if we've succeeded, we've succeeded,
							// if we've failed, we've failed.
							doneAction(); // Finish instantly
							return;

					}
					goto default;

				default:
					// We will be starting this job, but we haven't started it yet.
					ActuallyStarted = false;

					JobState = JobStateValue.RUNNING; // we're going to Start it.


					actionContext = actionQueue.Context; // temporarily copy the current context.

					// remember how to finish on behalf of who is calling Start.
					// DoneContext is a struct, so this just adds another space in the list, and puts two values in it.
					doneContexts.Add(new DoneContext(doneAction, actionContext.AddRef(
						#if REF_REASONS
						"Start Job " + Name
						#endif
						)));

					// create a child context for us to run in.
					actionContext = actionQueue.NewContext(Name ?? this.GetType().Name, jobID, 
						handleJobException, null, actionContext, contextNote);

					actionContext.SetLogging(loggingEnabled, loggingPreferenceStrength);

					// finish starting IN this new context.
					actionQueue.CallActionInContext(finishStarting, actionContext);
					break;
			}
		}

		private void finishStarting() {
			if (Timeout != 0) {	// This job should self-abort if it takes too long.

				jobTimeoutDispatcher = new TimeoutDispatcher(actionQueue);	// since we have a timeout, make one of these.

				jobTimeoutDispatcher.DispatchTimeout(Timeout, () => {
					if (!jobTimeoutDispatcher.Aborted) {	// Do nothing if the Timeout was aborted (the job probably finished)

						// the Timeout has fired. we should self-abort.
						if (Name != null) { 
							GsnDebug.Log(Name, "self-aborts after", jobTimeoutDispatcher.Duration, "ms"); // debug output
						}

						Abort(); // abort this job if the jobTimeoutDispatcher has fired.
					}
				});
			}
			else
			{
				jobTimeoutDispatcher = null; // if they set it to zero, we must null this.
			}

			StartPrerequisites();

		}

		// this is the exception handler for exceptions which happen inside a Job's context.
		private void handleJobException() {
			GsnDebug.Log(("Failing Job " + (Name ?? this.GetType().Name + jobID) + " due to exception").ToRed());
			Failed = true; // we've failed. Better than just stopping dead.
			Finish(); // let everybody who started us know we've failed.
		}

		/// Calls CustomStart, but with a debug message first.
		public void __ActuallyStart() {
			if (Name != null) GsnDebug.Log(Name, "starts"); // debug output

			StartPhase = StartPhaseValue.ACTUALLY_STARTED;
			ActuallyStarted = true;		// Now that we've actually started, set the boolean

			// no matter who calls this, we'll be running inside our own actionContext.
			actionQueue.QueueAction(CustomStart, actionContext);

		}

		// Call __ActuallyStart, now, or later.  All prerequisites have completed.
		private void StartByController() {
			if (Controller == null) {

				__ActuallyStart();

			}
			else
			{
				StartPhase = StartPhaseValue.AWAITING_CONTROLLER;

				Controller.PleaseStart(this);				
			}
		}

		// This function creates an action that calls CheckPrerequisite for the given job.
		private Action MakePrereqDoneAction(Job j) {
			return () => {
				CheckPrerequisite(j.Failed);
			};
		}

		// starts all of this Job's prerequisites, so they can be done before doing the custom work of this job.
		private void StartPrerequisites() {

			if (Prerequisites == null) { // no prerequisites.

				StartByController();	// start us if we are high enough priority
				return;

			}

			prerequisitesRunning = Prerequisites.Count; // we're going to start them all

			if (prerequisitesRunning == 0) { // there are no prerequisites

				StartByController(); // start us if we are high enough priority
				return;

			}

			if (PrerequisiteDoneActions == null) { // we need to make the DoneAction array.

				PrerequisiteDoneActions = new Action[prerequisitesRunning]; // create the array of doneActions for the prerequisites.

				// populate the array with the actions.
				for (int i = 0; i < prerequisitesRunning; ++i) {
					PrerequisiteDoneActions[i] = MakePrereqDoneAction(Prerequisites[i]);
				}

			}

			StartPhase = StartPhaseValue.AWAITING_PREREQUISITES;

			// start all the prerequisites
			// note that each, when done, will call CheckPrerequisite
			for (int i = 0; i < prerequisitesRunning; ++i) {
				Prerequisites[i].Start(PrerequisiteDoneActions[i]);
			}
		}

		// a prerequisite has finished. 
		private void CheckPrerequisite(bool failed) {

			if (failed && !Failed) { // we fail if a prerequisite fails and we haven't failed yet.

				// forget about the rest of the prerequisites.
				AbandonPrerequisites(); // MUST RETURN AFTER CALLING THIS. It calls Finish();
				return;
			}

			if (--prerequisitesRunning == 0) {
				// all prerequisites have finally stopped.
				if (Failed) {
					// this should never happen.
					throw new Exception("final prereq didn't fail yet we failed");
				}
				else 
				{
					// all prerequisites succeeded. Do our work.
					StartByController(); // run if we are of high enough priority.
				}
			}
		}

		// One does not abort prerequisites. One abandons them, so they don't call you when they finish.
		void AbandonPrerequisites() {

			Failed = true; // we have failed.

			prerequisitesRunning = 0; // we aren't waiting for them any more.

			int i = Prerequisites.Count;

			while (--i >= 0) {

				Job p = Prerequisites[i];

				if (Name != null && p.Name != null) {
					GsnDebug.Log(Name, "abandons", p.Name);
				}

				// tell it not to call us.
				p.Forget(PrerequisiteDoneActions[i]);
			}

			Finish(); // we are done.

		}

		/// continues any Jobs waiting for this one to Finish. Calling this function is how a Job indicates that it is really done.
		// Finish is now SYNCHRONOUS!
		protected virtual void Finish() {

			// it's possible for there to be an exception in a job AFTER it has committed to calling Finish. Since the 
			// exception handler will be calling Finish, we need to make the second call to Finish harmless.
			if (JobState != JobStateValue.RUNNING) {
				GsnDebug.Log("Attempt to finish a job " + (Name == null ? "" : "(" + Name + ") " ) + "that's not running.");
				return;
			}

			// abort our Timeout
			if (jobTimeoutDispatcher != null) 
				jobTimeoutDispatcher.Abort();

			// don't be calling Finish from outside this job's context.
			actionQueue.AssertContext(actionContext);

			// the job is done. End its context. This brings us to root context.
			// We'll soon be replacing
			// it for each client who started us.
			actionQueue.EndContext();

			actionContext = null;

			if (Name != null) { 
				GsnDebug.Log(Name + (Failed ? " fails" : " succeeds")); // debug output
			}

			// call us DONE
			JobState = JobStateValue.DONE; // Require a Reset to make subsequent calls to Start do anything
						// if we don't set to DONE here, any calls to Start (perhaps called in tempDoneContexts, below)
						// will end up adding to our doneContexts. We don't want that.
						// we want to stop further Actions from getting added to doneContexts.
						// setting to DONE, here, causes them to pass right through Start, above.

			// deal with the list of doneContexts. Any call back into a client might attempt to Start us again.
			var tempDoneContexts = doneContexts; // copy to temp variable
			doneContexts = otherDoneContexts; // empty the member variable, for new Starts.
			otherDoneContexts = null; // just for safety.


			// the tempDoneContexts here, can call functions which might reset this job, altering its doneContexts.
			// that's why we emptied them out above. 
			// a good example is the RetryJob, which immediately re-starts a job which fails.

			if (Controller != null) {
				Controller.JobDone(this); // indicate we are done.
			}

			// call synchronously so the next step of an aggregate job can start immediately without any intervening weird states.
			// for example, a RetryJob uses a RetriedJob and a RecoverJob. When the RetriedJob fails, we want the recoverJob to start
			// immediately.
			int actionCount = tempDoneContexts.Count; // how many clients to call into.

			// call all the actions, catching any exception in any of them, yet still running the other ones.
			// (this didn't used to be a list, but an exception in one client would cause all subsequent 
			// clients not to be called)
			for (int i = 0; i < actionCount; ++i)
			{
				var dc = tempDoneContexts[i];

				var ac = dc.actionContext;

				// remove the ref, but do NOT try to recycle, as we have an action to call.
				ac.RemoveRef(
				#if REF_REASONS
				"Job Finish " + Name
				#endif
				); // it's no longer in our DoneContexts

				actionQueue.CallActionInContext(dc.doneAction, ac); // deals with exceptions.

			}

			otherDoneContexts = tempDoneContexts;
			otherDoneContexts.Clear();

			// call synchronously here because we are already running at the top of the stack (right from the ActionQueue).
			// if we were to instead queue up tempDoneContexts, then something might execute, before tempDoneContexts, which could 
			// Alter the job before the doneContexts get a chance to look at it. 
			// As much as possible, we want the tempDoneContexts to run as soon as this job is complete.

			/*	There's an interesting problem, here. If two simultaneous jobs A and B try to start a third job C,
				when C finishes, both A and B will have a chance to continue, and look at the state of C, i.e. whether it failed,
				what the result was, etc.

				If A or B attempts to alter C after looking at it, there's a race condition, because either 
				A will modify C before B sees it or B will modify C before A sees it.

				"I'm beginning to think that the feature which allows two Jobs to independently subsume a third Job (which actually gets 
				Started only once) is a mistake." Nah. Just never presume that you are the only job starting a job.

				Instead of using this feature, it's a better idea to have a SequenceJob which Starts C first, then starts a 
				SimulJob of A and B once C is complete. If C fails, then neither A nor B would get run.

				Your choice, for now.

			 */

		}

		public void CallActionInJobContext(Action action)
		{
			actionQueue.CallActionInContext(action, actionContext);
		}

		public bool ContainsContext(ActionContext ac)
		{
			return ac.In (actionContext);
		}
	}

	/// Class to create a job whose job is to run another job.
	/**

		This class may not seem very valuable, but it is useful if you ever wish to use two or more controllers to determine when a
		job actually starts. For instance, a running job limiter (max n jobs) after a priority queue.

	*/ 
	public class ContainerJob : Job {
		public Job ContainedJob;

		private void done() {
			Failed = ContainedJob.Failed;
			Finish();
		}

		protected override void CustomStart() {
			ContainedJob.Start(done);
		}

		protected override void CustomAbort() {
			ContainedJob.Abort();
		}

		protected override void CustomReset(bool hard) {
			ContainedJob.Reset(hard);
		}
	}

	/// A utility job which runs another job over and over until it succeeds once or fails too many times.

	/**
	*/

	public class RetryJob : Job {

		private int tryCount;	// how many tries left, including the first one.

		private int savedTryCount;	// saved so we can set tryCount in Reset

		public Job RetriedJob = null; // the job that gets retried.

		public Job RecoverJob = null; // a job that gets run to help make the next retry more likely to succeed

		public int RetryDelay = 0; // how long to delay before retrying.

		private TimeoutDispatcher retryTimeoutDispatcher; 	// Start RetriedJob after this timeout expires.

		bool rushedRetry = false; // whether we've been asked to rush our retry.

		/// How many times the Job will be retried.
		public int TryCount {
			set {
				savedTryCount = value; // save for Reset
				tryCount = value;
			}
			get {
				return tryCount; // return live value, how many tries left.
			}
		}

		/// Constructor.
		public RetryJob() {
			TryCount = int.MaxValue; // Try FOREVER by default.
			retryTimeoutDispatcher = new TimeoutDispatcher(actionQueue); // Start RetriedJob after this timeout expires.
		}

		protected override void CustomReset(bool hard) {

			// Start over the number of tries.
			tryCount = savedTryCount;

			// reset "child" Job
			RetriedJob.Reset(hard);
		}

		protected override void CustomAbort() {

			// to abort is to abort all children (which is harmless if they aren't running)
			// and to not run any new children, such that you Finish up fast.

			// Note, we need to be sure that there are only three states, here, to deal with, and no race conditions.
			// Abort is being called from some code and we must be sure that we are EITHER running the Retried Job, 
			// the RecoverJob, OR
			// we are running the retryTimeoutDispatcher. Because we are going to cancel one and only one of these.

			if (RetriedJob.Running) { // the job is running, and the retryTimeoutDispatcher is not.

				tryCount = 0; // don't try again!
				RetriedJob.Abort(); // cause the RetriedJob to Finish fast, which will let us Finish fast.
				// we will continue in handleResults.
			}
			else if (RecoverJob != null && RecoverJob.Running) {

				RecoverJob.Abort(); // give up recovering. Continue in maybeRestartRetriedJob.

			} else
			{
				
				retryTimeoutDispatcher.Abort(); // we might be in a timeout right now.
				// we will continue in actuallyRestart.
			}

		}


		/// do the first try of the Retried Job.
		protected override void CustomStart() {

			if (tryCount-- > 0) { // test THEN decrement, before each try.

				RetriedJob.Start(handleResults); // do the first try.
			} else {
				// not trying at all. We don't fail by not trying.
				Finish();
			}
		}

		public void RushRetry() {

			if (RetriedJob.Running) { // the job is running, and the retryTimeoutDispatcher is not.
				return; // there is nothing to rush.
			}
			else if (RecoverJob != null && RecoverJob.Running) {

				rushedRetry = true; // don't use a timeout after we recover. Just retry immediately.

			} else
			{
				
				retryTimeoutDispatcher.Abort(); // make the retry happen immediately.
			}
		}

		/// Restarts the retried job, with a possible preceding delay, and only if there are more tries left.
		// we've just finished the RecoverJob (if any) (perhaps we aborted it)
		private void maybeRestartRetriedJob(bool failed) {

			if (failed) { // The RecoverJob has failed.
				Failed = true;	// we've failed recovery.
				Finish();
				return;		// crucial to return here. Otherwise you are a ghost -- dead but thinking you are alive.
			}

			// we succeeded at recovering, and we have more tries.
			if (Aborted) { // but we're aborting, so we aren't trying again.
				Finish();
				return;
			}

			--tryCount; // we're trying again.

			// we're going to try again. Should we delay at all before we do so?
			if (!rushedRetry && RetryDelay > 0) {
				retryTimeoutDispatcher.DispatchTimeout(RetryDelay, actuallyRestart);
			} else { // don't use a timer.
				rushedRetry = false;
				actuallyRestart();
			}
		}

		/// The restart timer is complete. Perhaps we should really start the Retried job.
		private void actuallyRestart() {

			if (Aborted) {
				// we are really aborting the RetryJob. So we've failed.
				Failed = true;
				Finish();    // QUESTIONABLE!!!!!
				return;
			}

			// Either the timeout was NOT aborted, or it was aborted for a rushed retry.
			// Either way, we want to re-start it.
			RetriedJob.Reset(); // hard reset is not necessary, because we know it has failed.
			RetriedJob.Start(handleResults); // do it again.

		}

		// the Retried job has Finished. Should we retry, fail, or succeed?
		private void handleResults(bool failed) {

			if (failed) { // the job we ran failed.
				Failed = true;		// we've failed so far.

				if (Aborted || tryCount == 0) {
					Finish(); // we've been Aborted, or that was our last try. Do not recover.
					return;
				}

				if (RecoverJob != null) { // we have a RecoverJob, and at least another try.
					RecoverJob.Reset(true); // force it to act, even if it succeeded the last time.
					RecoverJob.Start(maybeRestartRetriedJob);
					return;
				}

				maybeRestartRetriedJob(false);	// no RecoverJob. act as if recovery succeeded.

			} else {
				Failed = false;		// we've succeeded (even if we've aborted)
				Finish();
				return;
			}
		}

	}

	/// a Job to call a polling function over and over until it returns true.
	public class PollJob : Job {

		public delegate bool PollingFunction();

		private PollingFunction pollingFunction; // to remember the polling function.

		public PollJob (PollingFunction pollingFunction_) {

			pollingFunction = pollingFunction_;

		}

		// action that gets put on OnFrame
		private void callPollingFunction () {

			Failed |= Aborted;

			// Finish if the pollingFunction returns True
			if (Aborted || pollingFunction()) {

				actionQueue.OnFrame -= callPollingFunction; // stop polling.
				Finish();

			}

		}

		protected override void CustomAbort() {
			// we really don't need to do anything in here, as Aborted is set by Abort().
		}

		protected override void CustomReset(bool hard) {
		}

		protected override void CustomStart() {
			actionQueue.OnFrame += callPollingFunction;
		}
	}

	/// class to run multiple jobs, in parallel or in sequence

	/** 

		While Every job has a Prerequisites list, a MultiJob has a SubJobs list--its whole purpose is to run the SubJobs.
	*/
	public class MultiJob : Job {

		public List<Job> SubJobs; // the jobs we will run.

		private bool parallel;

		// being pessimistic means we require all sub-jobs to succeed for our success
		public bool NeedOnlyOne; // whether to succeed even if only a single job succeeds.

		private int runningJobCount;

		private int runningJobIndex;

		// only used if not parallel.
		public bool FailOnFirstFailure; // whether to stop after the first failure, claiming failure.
		public bool SucceedOnFirstSuccess;	// whether to stop after the first success, claiming success.

		public MultiJob(bool parallel = false)
		{
			this.parallel = parallel;

			// for sequential use.
			FailOnFirstFailure = true; // default is to fail on first failure.
			SucceedOnFirstSuccess = false;

			SubJobs = null;

			// for parallel use
			NeedOnlyOne = false; // one failure means we've failed. Default.
		}

		public void AddJob(Job job) {

			if (SubJobs == null) {
				SubJobs = new List<Job>();
			}

			SubJobs.Add(job);
		}

		// run all the jobs.
		protected override void CustomStart() {

			if (parallel) { // start the jobs all at once.

				Failed = NeedOnlyOne; // Assume we've failed, and wait for one success.

				runningJobCount = SubJobs.Count;

				// start all the jobs.
				for (int i = 0; i < runningJobCount; ++i) {
					SubJobs[i].Start(CheckIt);
				}

			} else {

				// we go sequential.
				runningJobIndex = -1; // nothing running yet.

				SubJobs[++runningJobIndex].Start(performRestOfJobs);

			}

		}

		// on completion of a sub-job during parallel use, decide what to do.
		private void CheckIt(bool f) {

			if (NeedOnlyOne) { // succeed if at least one sub-job succeeds

				Failed &= f; // if we succeeded erase any past failure.
			}
			else { // fail if any sub-job fails
				Failed |= f; // if we failed we have failed.
			}

			if (--runningJobCount == 0) { // one more job is done.
				Finish();
			}

			// do nothing else. Just wait for more jobs to complete.

		}

		// performs the rest of the jobs, in sequence. Parameter is whether the last job run failed.
		private void performRestOfJobs(bool lastFailed) {

			if (SucceedOnFirstSuccess && !lastFailed) {
				Failed = false; // we're done, because one succeeded.
				Finish();
				return;
			}

			if (FailOnFirstFailure && lastFailed) {
				Failed = true; // we're done because one failed.
				Finish();
				return;
			}

			if (Aborted || ++runningJobIndex >= SubJobs.Count) {

				// no more jobs to do. don't change our status.
				Finish();
				return;

			}

			SubJobs[runningJobIndex].Start(performRestOfJobs);
		}

		protected override void CustomAbort() {

			if (parallel) {
				AbortAll(SubJobs);
			} else {
				SubJobs[runningJobIndex].Abort(); // abort the running job.
			}
		}

		protected override void CustomReset(bool hard) {
			ResetAll(SubJobs, hard);
		}
	}

	public class RepeaterJob : Job {

		private Job repeatingJob; 	// the job we will run over and over.
		private int timesToRun;		// how many times we'll run it
		private int runCount;		// how many times we've run it.

		public RepeaterJob(Job repeatingJob_, int timesToRun_) {
			repeatingJob = repeatingJob_;
			timesToRun = timesToRun_;
		}

		private void maybeRepeatAgain() {
			// don't run if we've been aborted, or we've run out of times.
			if (!Aborted && runCount++ < timesToRun) {
				repeatingJob.Reset (true);	// hard reset to cause re-execution.
				repeatingJob.Start (maybeRepeatAgain); // start it.
				return;
			}

			Finish (); // not running any more. We never fail, even if aborted or if the repeatingJob fails.
		}

		protected override void CustomStart() {
			maybeRepeatAgain (); // separate function, for clarity.
		}

		override protected void CustomAbort() {

			repeatingJob.Abort (); 	// stop the job we are running. It will call us back fast.

		}

		override protected void CustomReset(bool hard) {
			runCount = 0;		// start back at zero.
		}
	}

	// This class will call a number of "AsyncFunctions", in order. It's like the SequenceJob class, except there are no job objects, and no aborting.
	// This is very lightweight. Handy for doing a bunch of tests.
	public class AsyncFunctionCaller {

		public delegate void AsyncFunction(Action doneAction);

		int runningIndex; // which function is running.
		int count; // how many there are to run.
		Action finalDoneAction; // action to perform when done.
		readonly List<AsyncFunction> funcList; // the functions we will run.
		ActionQueue actionQueue;

		public AsyncFunctionCaller (ActionQueue actionQueue) {

			this.actionQueue = actionQueue;

			funcList = new List<AsyncFunction>();

		}

		public void Add (AsyncFunction f) {

			funcList.Add (f);

		}

		// call some more functions, if we can.
		private void CallMore () {

			++runningIndex;

			if (runningIndex < count) {

				CallOne();

			} else {
				actionQueue.QueueAction(finalDoneAction);
			}
		}

		private void CallOne() {

			AsyncFunction m = funcList[runningIndex];

			actionQueue.AssertContext(actionQueue.RootActionContext);

			GsnDebug.Log(Environment.NewLine + Environment.NewLine + Environment.NewLine, "***** Calling AsyncFunction", m.Method.Name);

			m(CallMore);
		}

		// call all the functions, in sequence.
		public void CallAll(Action doneAction) {

			finalDoneAction = doneAction;

			count = funcList.Count;

			if (count > 0) {

				runningIndex = 0;

				CallOne();

			} else { // nothing to do.
				actionQueue.QueueAction (doneAction);
			}

		}

	}

	// This is a job that does nothing, and succeeds (by default) Not only is it useful to keep 
	// some code clean that expects a job to exist, but it's a great place to start 
	// when creating a new job class. Copy and modify.
	public class NullJob : Job {

		public bool WillFail; // change this if you want to fail.

		public NullJob(bool willFail = false) {
			WillFail = willFail;
		}

		override protected void CustomReset(bool hard) {			
			// This function is only called if you have Failed,
			// or if hard is true. Reset yourself, and call 
			// Reset on any Sub-Jobs, passing hard through.
			// This job does nothing, and so Reset is nothing.
		}

		override protected void CustomAbort() {
			// Abort any Sub-Jobs you have, and then call
			// Finish only after they've all Finished.
			// Set Failed to true if you've failed.
			Failed = WillFail;

			Finish(); // nothing to Abort, so Finish now.
		}

		override protected void CustomStart() {
			// Start any Sub-Jobs, plus your own work, 
			// and then call Finish when they've all Finished.
			// Before Finishing, Set Failed to true if 
			// you've failed.
			Failed = WillFail;

			Finish(); // this job does nothing, so Finish now.
		}

	}

	public class TimeoutJob : Job
	{
		private TimeoutDispatcher dispatcher;
		private int duration;

		public TimeoutJob(int duration)
			:base(AutoResetValue.HARD)
		{
			this.duration = duration;
			dispatcher = new TimeoutDispatcher (actionQueue);
		}

		override protected void CustomReset(bool hard) {			
		}

		override protected void CustomAbort() {
			dispatcher.Abort ();
		}

		override protected void CustomStart() {
			dispatcher.DispatchTimeout (duration, Finish);
		}
	}

}
