using System.Net;
using System.IO;
using System;

/* 

Regarding FailCheckers and FatalCheckers:

A WRJ has a FailChecker, for deciding what to do when its WRD has completed. The FailChecker looks at the WRD, and decides the success or failure of the WRJ.

A WRJ has a FatalChecker, for deciding whether retrying the same WRJ makes any sense. Retries always make sense unless we get an
explicit error from the back end telling us not to try again.

*/

namespace GSN.Skill.Games.Common.Utils
{
	public interface IActivityIndicator {
		void ImActive(Job me);	// we call this to let the activity indicator know that we are active.
		void ImInactive(Job me);	// we call this to let the activity indicatory know that we are inactive.
		void SetCancelEnabled(bool enabled); // when we show, do we show the cancel button?
		Job GetAskPermissionToRetryJob();	// We start this job when we want to ask the user if we should retry.
	}

	/// This class is a Job that uses a RequestWrapper to make a WebRequest
	public class WebRequestJob : Job {

		public delegate void onCompleteFunc(WebResponse response);

		// Any arena platform request may have a header containing a JWT.
		// This function allows all web request responses to be checked for a new JWT .
		public static onCompleteFunc GlobalOnComplete = (WebResponse response) => { };

		// WebRequestJob instances negotiate with each other via a JobPriorityQueue. Lower priority WebRequestJob instances 
		// do not start until higher priority instances are done running.
		public static JobPriorityQueue OurController = new JobPriorityQueue();
	
	
		// If this is set, then any WebRequestJob that is running in a sub context of the HPJ will have the priority 
		// promoted to that of the HPJ
		public static Job HighPriorityJob = null;


		// A FailChecker is a function, given to a WebRequestJob, which is used to determine failure or success of the WebRequestJob on completion of the Wrapper's send.
		// the FailChecker is passed the WebRequestDispatcher so it can examine the response and decide accordingly.
		public delegate bool FailChecker(WebRequestDispatcher dispatcher);

		// Set CheckForFailure if you want to decide success or failure by custom standards. It will be passed the
		// WebRequestDispatcher which has just completed (or has been aborted)
		public FailChecker CheckForFailure;

		// by default, we've failed if we don't get a 2xx status.
		private bool defaultFailChecker(WebRequestDispatcher dispatcher) {

			int scode = dispatcher.HttpStatusCode;

			return !(200 <= scode && scode < 300); // 2xx is a success and everything else is failure, by default.

		}



		public delegate bool FatalChecker(WebRequestDispatcher dispatcher); // tells if a WRJ failure should be fatal to the PWRJ.

		public FatalChecker CheckForFatal;

		// There are two non-fatal status codes: 333 and -1. All others should not be retried.
		private bool defaultFatalChecker(WebRequestDispatcher dispatcher) {

			int code = dispatcher.HttpStatusCode;
			// 333 means "arena try again". -1 means "not an HttpWebResponse" (e.g. disconnected)
			bool isFatal =  (code != 333 && code != -1);
			if (isFatal)
			{
				GsnDebug.Log (( Name ?? "WRJ" + " Failed Fatally with code " + code + " Message " + dispatcher.HttpStatusDescription).ToRed ());
			}
			return isFatal;
		}

		public bool FailedFatally() 
		{
			if (!ActuallyStarted)
				return false;
			return CheckForFatal(Wrapper.Dispatcher);
		}

		// the means by which we make web requests.
		public RequestWrapper Wrapper {get; private set;}

		// start with a long timeout, which might be shortened by config params.
		private static int DefaultTimeout = 30000;

		public static void SetDefaultTimeout(int t) {
			DefaultTimeout = t;

			GsnDebug.Log("WRJ Default Timeout set to ", t);

		}

		public WebRequestJob () {

			Timeout = DefaultTimeout; // could be from a config parameter WRJ_DEFAULT_TIMEOUT

			// Set the Controller. Shared by all WebRequestJob instances.
			Controller = OurController;

			CheckForFailure = defaultFailChecker; // cannot use an initializer for this.

			CheckForFatal = defaultFatalChecker; // cannot use an initializer for this.

			NewWrapper(); // so, on construction, we have a RequestWrapper

		}

		// useful for jobs that are re-used with a different request.
		public void NewWrapper() {
			Wrapper = new RequestWrapper();
		}

		override protected void CustomReset(bool force) {
			// there's no state to restore to try again, so there's nothing to do here.
		}

		override protected void CustomAbort() {
			Wrapper.Dispatcher.Abort(); // finish up fast.
		}

		override protected void CustomStart() {

			// send the request.
			Wrapper.send(() => {

				// do the custom failure check.
				Failed = CheckForFailure(Wrapper.Dispatcher);

				Wrapper.Dispatcher.DumpResult();

				GlobalOnComplete(Wrapper.Dispatcher.Response);

				Finish();
			});
		}
	}

	// This is a RetryJob. Note that RetryJob already has CustomStart, CustomAbort, and CustomReset defined. 
	// If you override them, you should call them in your override.
	/// This class actually has the ability to perform a user-initiated retry.
	public class PerseverantWebRequestJob : RetryJob {

		// an activity indicator that does nothing. Used if OurActivityIndicator is never set to anything else.
		private class NullActivityIndicator : IActivityIndicator {

			private NullJob permissionJob = new NullJob(); // a job that does nothing.

			int activeCount = 0; // just a counter of how many PWRJs are active.

			public NullActivityIndicator () {

				// by default, don't grant permission.
				permissionJob.WillFail = true;
			}

			// a PWRJ is indicating that it is active.
			public void ImActive(Job me) {
				if (0 == activeCount++) {
					GsnDebug.Log("PWRJ activity begins".ToRoyalBlue());
				}
			}

			public void SetCancelEnabled(bool enabled) {

				if (!enabled)
					throw new Exception("Cannot disable cancel on NullActivityIndicator");

			}

			// a PWRJ is indicating that it is inactive.
			public void ImInactive(Job me) {
				if (--activeCount == 0) {
					GsnDebug.Log("PWRJ activity ends".ToRoyalBlue());
				}
			}

			public Job GetAskPermissionToRetryJob() {
				return permissionJob;  
			}

		}

		// This job recovers for the PerseverantWebRequestJob by asking the user if they want to retry.
		// It's used when the PerseverantWebRequestJob fails.
		private class OuterRecoverJob : Job {

			private PerseverantWebRequestJob pwrj;

			public OuterRecoverJob (PerseverantWebRequestJob pwrj) {

				this.pwrj = pwrj;

			}

			override protected void CustomReset(bool hard) {
				// we have no state to reset.
			}

			override protected void CustomAbort() {

				// take down the retry dialog.
				pwrj.activityIndicator.GetAskPermissionToRetryJob().Abort();

			}

			// how we recover from a failure of the InnerPerseverantWebRequestJob.
			override protected void CustomStart() {

				if (pwrj.WebRequestJob.FailedFatally()) { // cannot recover.

					Failed = true;
					Finish(); // we cannot recover even by asking permission. No retry dialog.
					return;
				}

				pwrj.activityIndicator.GetAskPermissionToRetryJob().Start((bool failed) => {

					GsnDebug.Log("We", (failed ? "didn't get" : "got"), "permission to try again.");

					Failed = failed;

					Finish(); // if this recoverJob fails, the PerseverantWebRequestJob fails,
					// since the responsibility of OuterRecoverJob is to recover from the failure
					// of the PerseverantWebRequestJob.

				});

			}

		}

		private static IActivityIndicator nullActivityIndicator = new NullActivityIndicator();

		// to be overridden with a real activity indicator. But if it isn't, everything will still work.
		public static IActivityIndicator OurActivityIndicator = nullActivityIndicator;

		// In the constructor, get the one that the class knows about.
		private IActivityIndicator activityIndicator;

		private InnerPerseverantWebRequestJob innerPWRJ;

		public WebRequestJob WebRequestJob {
			get; private set;
		}

		// just pass it through.
		public new void RushRetry() {
			innerPWRJ.RushRetry();
		}
		
		// set this with your own Job to attempt recovery.  It passes through to all InnerPerseverantWebRequestJobs.
		public static Job AuthorizationRecoverJob {
			get {
				return InnerPerseverantWebRequestJob.AuthorizationRecoverJob;
			}
			set {
				InnerPerseverantWebRequestJob.AuthorizationRecoverJob = value;
			}
		}

		public PerseverantWebRequestJob (WebRequestJob.FailChecker fc = null, int firstDelay_ = 1000, int maxDelay = 60000) {

			innerPWRJ = new InnerPerseverantWebRequestJob(fc, firstDelay_, maxDelay);

			RetriedJob = innerPWRJ;

			RecoverJob = new OuterRecoverJob(this);

			activityIndicator = PerseverantWebRequestJob.OurActivityIndicator;

			// pass the reference through.
			WebRequestJob = innerPWRJ.WebRequestJob;

		}

		public void SuppressActivityIndicator() {
			activityIndicator = nullActivityIndicator;
		}

		public bool Bullish {
			set {

				innerPWRJ.Bullish = value;

			}
			get {

				return innerPWRJ.Bullish;

			}
		}

		override protected void CustomStart() {
			activityIndicator.ImActive(this);
			base.CustomStart();
		}

		override protected void Finish() {
			activityIndicator.ImInactive(this);
			base.Finish();
		}

		public RequestWrapper Wrapper {
			get {
				return WebRequestJob.Wrapper;
			}
		}

		// if this job will be re-used for a different request, we'll need a new RequestWrapper.
		public void NewWrapper() {
			WebRequestJob.NewWrapper();
		}

		public void DestroyResponse() {
			WebRequestJob.Wrapper.Dispatcher.DestroyResponse();
		}



	}

	/// InnerPerseverantWebRequestJob attempts a web request over and over until successful.
	public class InnerPerseverantWebRequestJob : RetryJob {

		// this private class is the default class of the PWRJ's RecoverJob. It is used to 
		// recover from a failure of the underlying WebRequestJob.
		private class CopingJob : Job {

			private InnerPerseverantWebRequestJob ipwrj; // the PWRJ we are helping recover.

			public CopingJob(InnerPerseverantWebRequestJob ipwrj) {
				this.ipwrj = ipwrj;
			}

			override protected void CustomReset(bool hard) {

			}

			override protected void CustomAbort() {
				AuthorizationRecoverJob.Forget(CheckAuthorizationRecoverJobStatus);
			}

			// how the InnerPerseverantWebRequestJob recovers when its WebRequestJob fails.
			override protected void CustomStart() {

				//First, check if the network is reachable.  If we we can't reach the net, don't bother retrying.
				if (! ipwrj.NetIsReachable()) {
					Failed = true;
					Finish();
					return;
				}

				//Then, if the error code is 401 (Unauthorized), attempt to recover using the AuthorizationRecoverJob.
				if (ipwrj.Wrapper.Dispatcher.HttpStatusCode == (int)HttpStatusCode.Unauthorized) {
					AuthorizationRecoverJob.Start(CheckAuthorizationRecoverJobStatus);
				} else {
					RecoverNormally();
				}
			}

			private void CheckAuthorizationRecoverJobStatus() {
				if (AuthorizationRecoverJob.Failed) {
					RecoverNormally();
				} else {
					//AuthorizationRecoverJob successfully logged back in.  Try again immediately.
					Finish();
				}
			}

			private void RecoverNormally() {
				// If the WRJ has failed fatally, we don't retry.
				if (ipwrj.WebRequestJob.FailedFatally()) {
					Failed = true; // we can't cope.

				} else { // We might be able to succeed next time.  Wait, then try again.
					ipwrj.DoubleRetryDelay();
				}

				Finish();
			}
		}

		// InnerPerseverantWebRequestJob instances negotiate with each other using a RetryJobController. 
		// When any one of them succeeds, it notifies all the rest to retry immediately.
		public static RetryJobController OurController = new RetryJobController();

		private Random theRandom; // for doing random back-off.

		private int firstDelay;

		//Allows custom code to attempt to recover from a failure, by detecting a login timeout and logging back in
		//By default, use a job that immediately fails
		public static Job AuthorizationRecoverJob = new NullJob(true);

		private int maxDelay;

		public WebRequestJob WebRequestJob {get; private set;}

		// start with a long timeout, which might be shortened by config params.
		private static int DefaultTimeout = 60000; 

		public static void SetDefaultTimeout(int t) {
			DefaultTimeout = t;

			GsnDebug.Log("IPWRJ Default Timeout set to ", t);

		}

		private bool _bullish; // Whether this IPWRJ will refuse to fail quickly if the network isn't reachable

		private int _savedTimeout;

		public bool Bullish {

			set {
				if (value && !_bullish) { // going bullish.
					_savedTimeout = Timeout;	// remember prior timeout
					Timeout = 0;				// don't time out.
				} else if (!value && _bullish) {
					Timeout = _savedTimeout;	// go back to having a timeout.
					Abort();
				}

				_bullish = value;

			}

			get {
				return _bullish;
			}
		}

		public InnerPerseverantWebRequestJob (WebRequestJob.FailChecker fc = null, int firstDelay_ = 1000, int maxDelay = 60000) {

			WebRequestJob = new WebRequestJob();

			this.maxDelay = maxDelay;

			Controller = OurController;

			Timeout = DefaultTimeout;	// could be set from IPWRJ_DEFAULT_TIMEOUT config param

			firstDelay = firstDelay_;

			// Create a WebRequestJob to try over and over.
			RetriedJob = WebRequestJob;

			RecoverJob = new CopingJob (this);

			if (fc != null)
				WebRequestJob.CheckForFailure = fc;

			// note, this will be "doubled" before the first retry.
			// So our first delay (after failure) will be between 750ms and 1250ms
			RetryDelay = firstDelay / 2;

		}

		protected override void CustomReset(bool force) {

			base.CustomReset(force);

			RetryDelay = firstDelay / 2;

		}

		// This function serves to make the initial Timeout on the WebRequestJob be under 10 seconds, so that if we are not on the network, we'll fail fairly fast.
		// on iPhone, if you go off net, then immediately start a WebRequest, that request stays active for quite a while. We don't like that. We'd rather fail fast.
		// This quick first timeout lets us find out if we are actually offline, so we can try again.
		protected override void CustomStart() { // CustomStart of InnerPerseverantWebRequestJob

			int savedWRJTimeout = WebRequestJob.Timeout; // remember the intended timeout.

			// reduce the WRJ's timeout, if it has one. If it's zero (no Timeout), this leaves it unchanged.
			int to = savedWRJTimeout / 4; // first time timeout 1/4 of intended timeout.

			WebRequestJob.Timeout = to; // small timeout for first time (or zero)

			Job HighPriorityJob = WebRequestJob.HighPriorityJob;
			
			// If we have a High Priority Job and it is running 
			// Then see if this action context is a sub contect of the HPJ
			// Then promote the priority
			if (HighPriorityJob != null && HighPriorityJob.Running)
			{
				if (HighPriorityJob.ContainsContext (actionContext))
				{
					if (WebRequestJob.Name != null)
					{
						string HighPriorityJobName = HighPriorityJob.Name ?? "HighPriorityJob";
						GsnDebug.Log ("Promoting the priority of", WebRequestJob.Name, "to", HighPriorityJobName + "'s", "priority: ", HighPriorityJob.Priority.ToString());
					}
					WebRequestJob.Priority = HighPriorityJob.Priority;
				}
			}

			// Start the RetryJob, which starts the WebRequestJob, which starts the WebRequestJob's Timeout.
			base.CustomStart(); // uses Timeout (starts the timer)

			// restore the original Timeout for subsequent tries. 
			WebRequestJob.Timeout = savedWRJTimeout;

		}

		private bool NetIsReachable() {

			if (_bullish) { // if we are Bullish, we ignore that the net is not reachable. We just keep trying.
				GsnDebug.Log("Bullishly pretending the Net is reachable");
				return true;
			}

			bool reachable = WebRequestDispatcher.GetNetworkReachability() !=  WebRequestDispatcher.NetworkReachableValue.NOT_REACHABLE;

			GsnDebug.Log("The Net is", reachable ? "reachable" : "not reachable");

			return (reachable);
		}

		public void DestroyResponse() {
			WebRequestJob.Wrapper.Dispatcher.DestroyResponse();
		}

		// if this job will be re-used for a different request, we'll need a new RequestWrapper.
		public void NewWrapper() {
			WebRequestJob.NewWrapper();
		}

		/// Pass the Wrapper through to the RetriedJob.
		public RequestWrapper Wrapper {
			get {
				return WebRequestJob.Wrapper;
			}
		}

		private void DoubleRetryDelay() {
			if (theRandom == null) 
				theRandom = new Random();

			// exponential random back-off. Factor of 1.5 to 2.5.
			RetryDelay += RetryDelay / 2 + theRandom.Next(RetryDelay);

			if (RetryDelay > maxDelay) {

				// We're over the max. Randomly choose a value between 90% and 100% of max.
				RetryDelay = maxDelay - theRandom.Next(maxDelay / 10);

			}

		}

	}
}
