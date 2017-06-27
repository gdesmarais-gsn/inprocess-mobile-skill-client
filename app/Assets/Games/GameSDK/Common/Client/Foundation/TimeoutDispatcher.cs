#if false
#define REF_REASONS
#endif

using System;
using System.Threading;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils
{
	/// TimeoutDispatcher makes it easy to make time-deferred function calls on the main thread, by means of an ActionQueue
	/** Your callback action will be called no matter what, even if the timeout is aborted.
		You can check the Aborted member to find out if the timeout was aborted.
	*/
	public class TimeoutDispatcher
	{

		// An ActionProxy is an object that serves to wrap an action, so that the action can be called synchronously
		// (rather than asynchronously) even after it has been queued to the actionQueue.
		// calling the action synchronously will make it so that it WON'T be called again when the actionQueue
		// gets around to trying to run it
		// that is, the actionProxy makes sure the Action will only be called once.
		private class ActionProxy {

			private Action action;		// the action we are for running.
			private TimeoutDispatcher user;		// what TimeoutDispatcher we exist for.
			private bool queued;			// whether we've been queued to the ActionQueue yet.
			public int id;
			public ActionContext actionContext;

			// This serves as a constructor, because we, the actionproxy are pooled on a stack for alloction speed.
			public void Init(TimeoutDispatcher user, Action action, ActionContext actionContext, int id) {
				this.action = action; // the action we will run.
				this.user = user; // what TimeoutDispatcher is using us now.
				this.queued = false; // whether we have yet been queued.
				this.id = id; 
				this.actionContext = actionContext;
			}

			public void Reconstruct() 
			{
				action = null;
				user = null;
				queued = false;
				id = 0;
				actionContext = null;
			}

			// call this function to queue us up. Runs on secondary thread.
			public void QueueIt() {
				queued = true; // remember we've been queued.

				user.actionQueue.QueueActionWithoutAddRef(callFromQueue, actionContext); // callFromQueue is queued.

			}

			// call the action from Abort. This will disable the action for when the queue gets around to it.
			public void callFromAbort() {

				callAction(false);

			}

			// call the action from actionQueue.Process. This will do nothing if the action has already been
			// called from Abort.
			private void callFromQueue() {

				callAction(true);

			}

			// the function which will actually call your action.
			private void callAction(bool fromQueue) {

				if (action == null) {

#if DEBUG
					if (!fromQueue) {
						// this would be a bad bug. Abort should never be able to call us
						// if there's no action.
						throw new Exception("callFromAbort with no action");
					}
#endif
					// we are being called from the queue, after being called from Abort.
					// So, this ActionProxy is finally totally done being used for the given action.
					Reconstruct();
					TimeoutDispatcher.actionProxyPool.Push(this); // this ActionProxy is now re-usable.					

					return; // Nothing more to do.
				}

				// we actually have an action to run. Before we run it, we want to clear out
				// all the members of this ActionProxy, and perhaps return it to the pool.
				Action temp = action;

				action = null; // never getting called again

				user.actionProxy = null; // make the TimeoutDispatcher forget about us.

				user.Active = false; // the callback has been called. The TimeoutDispatcher is no longer active.

				// if we've never been queued, we have an extra reference in our context
				// which running us from the queue would have removed.

				if (!queued)
				{
					actionContext.RemoveRef(
						#if REF_REASONS
						"TD callAction never queued"
						#endif
						);
				}

				var aq = user.actionQueue;

				user = null; // forget about our user.

				// if we are being called from the queue, we are done, and we can be re-used.
				// otherwise, if we have not been queued yet, we are done because we'll never
				// be queued (abort has stopped the timer, and above we've made the TimeoutDispatcher forget
				// about us.)
				if (fromQueue || !queued) {

					Reconstruct(); // blows away a lot of variables.
					TimeoutDispatcher.actionProxyPool.Push(this); // this ActionProxy is now re-usable.

				}

	//			GsnDebug.Log("Calling action", tempid, "in", aq.Context.Trace);
				aq.CallActionInContext(temp); // won't call it if we are in a retired context.

			}

		}

		// stack for storing ActionProxy instances.
		private static Stack<ActionProxy> actionProxyPool = new Stack<ActionProxy>();

		protected ActionQueue actionQueue; // where to queue actions on.

		private Timer tt;

		// the ActionProxy is responsible for running our action, whether it be aborted, or whether it runs
		// by the actionQueue. The ActionProxy makes sure it gets called exactly once.
		private ActionProxy actionProxy;

		public bool Aborted {
			get; private set; // whether the timer was aborted (finished early)
		}

		public bool Active {
			get; private set;
		}

		public int Duration {
			get; private set;
		}

		private object locker = new Object();

		/// Constructs a TimeoutDispatcher. 
		public TimeoutDispatcher (ActionQueue aq ///< The ActionQueue on which the callback Action will be queued.
			) {

			actionQueue = aq;
			tt = null;
			Aborted = false;
		}

		private void killTimer () {
			tt.Change(Timeout.Infinite, Timeout.Infinite); // stop the timer.
			tt.Dispose();
			tt = null; // we're now Done
		}



		/// To Abort a timeout is to abort WAITING. The callback is called no matter what. 
		//
		// To call Abort will result in the doneAction being called IMMEDIATELY AND SYNCHRONOUSLY,
		// if it hasn't already been called, EVEN if the underlying timer has already queued it up (on the ActionQueue) 
		// to be run.
		//
		// There's an inherent race between Abort and timerCallback (the function which queues up your Action), 
		// because timerCallback runs on a secondary thread. One or the other will be the one to kill the timer.
		// If timerCallback kills the timer, that means it ran first. But all is not lost. We can still 
		// Abort (call the callback synchronously) if the queued action has not yet been run.
		/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 

			Once more: To call Abort is to abort the WAITING of the timer, which means your callback action
			will be called IMMEDIATELY, rather than later or OR NOT AT ALL.

			Abort CALLS YOUR CALLBACK IMMEDIATELY, setting Aborted to true so your callback can behave in a 
			special way if the timeout has been aborted. 

			You are probably rebelling against this fact. I assure you that you are mistaken. :-)

			The reason that Abort doesn't just forget about (not call) your callback is to simplify your code.
			Your callback action is where the flow of control goes when the timer is done waiting. This is
			where you will be doing any cleanup or reinitialization regarding why you started the timeout in the first place.
			Generally this cleanup is required whether or not you Aborted the TimeoutDispatcher.

			If Abort didn't call your callback, then any code which CALLS Abort would have to duplicate
			the cleanup associated with dispatching the timeout.

			But because Abort calls your callback immediately, you can just do the cleanup in one place: in your 
			callback. And IN YOUR CALLBACK you get to decide what to do in the Abort case. You can check the Aborted member
			of TimeoutDispatcher to find out whether the timer was aborted, and act accordingly.

			We have found that in many cases, whether "Aborted" is true in your callback ends up being irrelevant. 
			A common pattern we've found is a repeating Timeout, which if aborted, simply repeats right away rather than at 
			the normal interval. This pattern ends up being extremely simple to implement given that Abort calls your
			callback, rather than forgetting about it.

			If, in the above case, you want to stop the repetition, you need simply to set a flag that will prevent the repetition 
			the next time the callback action is called. Then you can call Abort, or not. Your choice.

		 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
		public void Abort() {

			lock(locker) {
				if (tt != null) {
					killTimer(); // sets tt to null.
				}
			}

			// The timer may or may not have fired, but it's stopped now, one way or the other.

			// when the action runs, actionProxy gets set to null.
			// Since Abort will certainly run the action, a second call to Abort will
			// certainly return here.
			if (actionProxy == null) {
				return; // our doneAction has already been called. Abort won't happen.
			}

			// we can stop this thing.
			// the timer isn't running, but it may have fired, queueing up ourQueuedAction.
			// our doneAction hasn't been called yet, though.
			Aborted = true; 	// information for doneAction.

			// call our doneAction from the right context.
			actionQueue.CallActionInContext(actionProxy.callFromAbort, actionProxy.actionContext);

			// NOTE that even though the above call will set actionProxy to null, the action that it calls
			// may re-use this TimeoutDispatcher, thus setting actionProxy to non-null again. So we can't do 
			// an assert here on actionProxy. It generally will be null, but it might not be.

		}

		// There's an inherent race between Abort and timerCallback, because timerCallback runs on a secondary
		// thread. One or the other will be the one to kill the timer.
		// If Abort kills the timer, the timerCallback should do nothing.
		private void timerCallback (object o) {

			lock(locker) {
				if (tt == null) {
					return; // it must have been aborted.
				}
				killTimer(); // sets it to null.
			}

			// It has NOT been aborted, so this actionProxy is still valid. Queue it up.
			actionProxy.QueueIt();

		}

		/// Dispatches a timeout, using a Timer. When the timer expires, action will be queued on the ActionQueue.
		/**

			If there is no Action or ActionQueue, the only way to tell if the timer has expired is by polling \ref Done.
			
		*/

		private static int dispatches;

		public void DispatchTimeout (
			int duration, 			///< how many milliseconds to wait.
		 	Action action	///< The Action to perform after the specified duration
		 )
		{
			if (tt != null) {
				throw new SystemException("Cannot dispatch timer with in-use TimerDispatcher");
			}

			// Timeouts are the means by which chains of actions can have a life of their own.
			// e.g. LoginRefresh, or the WebLogger.
			// It's best to name and explicitly identify those lives by creating a context under
			// which each timeout will run.
			if (actionQueue.AtRootContext) {
				GsnDebug.LogError("DispatchTimeout at root context. Consider using a child context instead.".ToRed());
			}

//			GsnDebug.Log("Dispatching Timer".ToRed(), duration, "milliseconds from ", actionQueue.Context.Trace);

			Aborted = false;	// not aborted yet.

			Active = true;

			Duration = duration;

			++dispatches;

//			GsnDebug.Log("Dispatching timeout", dispatches, "from", actionQueue.Context.Trace);

			// Get an ActionProxy.
			if (actionProxyPool.Count == 0) {
				actionProxy = new ActionProxy(); // fresh and new
			} else {
				actionProxy = actionProxyPool.Pop(); // lightly used
			}

			actionProxy.Init(this, action, actionQueue.Context.AddRef(
			#if REF_REASONS
			"DispatchTimeout"
			#endif
			), dispatches); // tell it about us and our action.

			tt = new Timer (timerCallback);	// create the timer with the callback.
			tt.Change (duration, Timeout.Infinite); // Start it running.

		}
	}
}
