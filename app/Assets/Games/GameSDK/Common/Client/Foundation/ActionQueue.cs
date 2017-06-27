// Turn this on to enable extra debugging capabilities for the ActionQueue class.
#if false //DEBUG
#define ACTION_QUEUE_DEBUG
#endif
#if false
#define REF_REASONS
#endif

using System;
using System.Text;
using System.Threading;
using System.Diagnostics;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils
{
	/// An object that allows C# Actions to be queued, from any thread, for processing on the main thread.
	public class ActionQueue
	{

		// this is the name of the context used for reporting exceptions to the back end.
		private const string EXCEPTION_REPORTING_CONTEXT = "__erpt";

		// this is where we get ActionContexts from, to reduce mem thrash.
		private ObjectPool<ActionContext> actionContextPool;

		// If no contexts have been pushed, this is our exception handler. It's not very helpful.
		private void rootEHandler() {

			// We cannot throw an exception here, or we end up in an exception handling loop.
			GsnDebug.LogError("Cannot recover from exception in root context");

		}

#region ActionWrapper
		// A wrapper around an action, allowing us to add extra information in debug builds.
		private struct ActionWrapper
		{
			public Action action;
			public ActionContext actionContext;

			public ActionWrapper( Action a, ActionContext b)
			{
				action = a;
				actionContext = b;
			#if ACTION_QUEUE_DEBUG
				int skipFrames = 0; // don't include this ctor or the calling function.
				bool getFileInfo = true;
				stack = new System.Diagnostics.StackTrace( skipFrames, getFileInfo );
			#endif
			}

	#if ACTION_QUEUE_DEBUG
			// information about where the action came from, set when the action is queued.
			// TODO: The OnFrame action is a standard Action, so we don't know who initiated those.
			public System.Diagnostics.StackTrace stack;

			public override string ToString() {
				return (stack == null) ? "NO STACK" : stack.ToString();
			}
	#endif // !DEBUG

		}

#endregion // ActionWrapper


		private List<ActionWrapper> mainList; // where actions are actually queued.
		private List<ActionWrapper> otherList; // an empty queue that swaps with the main queue

		private List<ActionContext> retiredContexts; // contexts which have been ended, but not recycled yet.
		private List<ActionContext> activeContexts;	// contexts currently active. Not ended or recycled. 

		private object locker = new object(); // object just for locking. Best practice.

		public Action OnFrame; // handy for actions you want to do on every frame. Just += them or -= them.

		public int ProcessCount;
		public int ActionCount;

		// the action context used when none other is available.
		public ActionContext RootActionContext {get; private set;}

		// information concerning the currently processing action, including its ActionContext,
		// which contains an exception handling function.
		private ActionWrapper currentWrapper;

		/// Constructs an empty ActionQueue.

		/** 
			The ActionQueue should be owned by the main thread, and Process() should be called from the main thread. 
			References to the ActionQueue can be passed to other threads so they can call QueueAction() on it. 
		*/
		public ActionQueue ()
		{
			mainList = new List<ActionWrapper> ();
			otherList = new List<ActionWrapper> ();
			retiredContexts = new List<ActionContext> ();
			activeContexts = new List<ActionContext> ();

			OnFrame = null;

			actionContextPool = new ObjectPool<ActionContext>(); // construct the actioncontextpool.

			// construct the root context. It has no parent.
			RootActionContext = actionContextPool.GetObject();
			RootActionContext.Initialize(this, "root", 0, rootEHandler); // don't call NewContext. circularity.
			RootActionContext.AddRef( // Add a ref, to prevent it from getting recycled.
			#if REF_REASONS
			"because root"
			#endif
			); // you can't pop this.

			activeContexts.Add(RootActionContext);

			// we aren't in an action yet, but we do have an action context that 
			// might be used by the first action that gets queued.
			currentWrapper = new ActionWrapper(null, RootActionContext);

		}

		public bool AtRootContext {
			get {
				return Context == RootActionContext;
			}
		}

		// this puts an ActionContext back into the actionContextPool. 
		// the ActionContext must have no references on it. If it is retired,
		// it will be taken off the retiredContexts list.
		public void RecycleContext(ActionContext actionContext) {

			#if REF_REASONS
			GsnDebug.Log("Recycling context", actionContext.Trace);
			#endif

			if (!actionContext.active) { // recycling was delayed
				retiredContexts.RemoveAll(x => x == actionContext);
			}

			actionContext.Reconstruct();
			actionContextPool.ReturnObject(actionContext);

		}

		// get an ActionContext from the pool.
		public ActionContext NewContext(string name, int id, Action eHandler = null, 
			Action doneAction = null, ActionContext parent = null, string note = null) {

			// every context has a parent except the default action context.
			if (parent == null)
				parent = RootActionContext;

			var retval = actionContextPool.GetObject();

			#if REF_REASONS
			GsnDebug.Log("New Context", name + ":" +id, "in", parent.Trace);
			#endif

			retval.Initialize(this, name, id, eHandler, doneAction, parent, note);

			activeContexts.Add(retval);

			return retval;
		}

		// pass null to run in current context.
		/*

			Calls an action in a context.
			the context may or may not be the current context.
			restores the current context after running.
			This function may recycle the context you try to run in.

		*/
		public void CallActionInContext(Action a, ActionContext ac = null) {

			ActionContext origContext = null; // to save the original context

			if (ac != null && ac != Context) { // ac is a DIFFERENT context

				origContext = Context; // remember the current context.

				Context = ac; // set the active context.

			}

			// deal with the context we want to run in.
			if (!Context.active) { // cannot call it in an ended context.

				GsnDebug.Log("Not calling action in inactive context".ToYellow(), Context.Trace);
				Context.TryRecycle(); // try to put it back in the pool.

			} 
			else 
			{
				try {

					a(); // Call the Action

				}
				catch (Exception e){

					// handle it.
					HandleException(e);

				}

			}

			if (origContext != null)	// context desired was not the active one 
			{
				Context = origContext; // restore the original different context.
			}

			// deal with the context we want to continue in.
			if (!Context.active)
			{	// our context is ended. Go to root context.
				Context.TryRecycle();
				Context = RootActionContext;
			}
		}

		// this function starts a new context by queueing an action a to run under that context.  The ActionContext has an associated exception
		// handler, as well as an associated doneAction, which will be queued in the parent context when this context is ended.
		// Both the main-line code for the context, and the eHandler, should call EndContext, which will cause the doneAction to be queued.
		public void BeginContext(string name, int id, Action a, Action eHandler = null, Action doneAction = null, ActionContext parent = null, string note = null)
		{

			if (parent == null)
				parent = currentWrapper.actionContext;

			QueueAction(a, NewContext(name, id, eHandler, doneAction, parent, note));

		}

		public void EndContext(ActionContext context) 
		{
			CallActionInContext(EndContext, context);
		}

		public void EndContext() 
		{
			ActionContext child = currentWrapper.actionContext; // where we are now.

			#if REF_REASONS
			GsnDebug.Log("Ending context", child.Trace);
			#endif

			ActionContext parent = child.parent; // where we are going.

			if (parent == null)
			{
				// do nothing if this is the root context
				GsnDebug.LogError("Cannot end root context");
				return;
			}

//			parent.children.RemoveAll(p => p == child);

//			if (child.children.Count != 0) {
//				GsnDebug.Log("Popping a parent context:".ToRed(), child.Trace);
//				GsnDebug.Log(("Children: " + child.ChildrenString).ToRed());
//			}

			// if we have a doneAction, queue it up to run in the parent context.
			if (child.doneAction != null)
				QueueAction(child.doneAction, parent);

			// go to parent context after ending the context.
			currentWrapper.actionContext = parent;

			activeContexts.RemoveAll(c => c == child);

			if (child.hasRefs)
			{
				#if REF_REASONS
				GsnDebug.Log("deactivating", child.Trace);
				#endif

				// context was ended before we were done with it. Tough. Disable further use.
				retiredContexts.Add(child._deactivate());
			}
			else
			{
				// we're ending it, and it has no refs. Recycle it.
				RecycleContext(child);
			}

		}

		// this function is mainly called from the TimeoutDispatcher and the WebRequestDispatcher
		public void QueueActionWithoutAddRef(Action a, ActionContext c, bool allowDupes = true) {

			ActionWrapper aw =  new ActionWrapper(a, c);

			// Add isn't thread-safe. Lock so we are the only thread Adding.
			lock (locker) {

                if (!allowDupes && (mainList.Contains(aw) || otherList.Contains(aw)))
                {
                    GsnDebug.Log("Dupe Found in queue. Not queueing.");
                    return;
                }

                //GsnDebug.Log("Enqueueing at ", Environment.StackTrace);
                mainList.Add( aw ); // queue it up.
			}

		}

		public string StatusText {

			get{
				StringBuilder sb = new StringBuilder();

				sb.Append("ActionContextPool reports ");
				sb.Append(actionContextPool.LiveObjects);
				sb.Append(" live ActionContexts");
				sb.Append(Environment.NewLine);
				sb.Append(Environment.NewLine);
				sb.Append(activeContexts.Count);
				sb.Append(" active contexts");
				sb.Append(Environment.NewLine);
				getTraces(sb, activeContexts);
				sb.Append(Environment.NewLine);
				sb.Append(retiredContexts.Count);
				sb.Append(" retired contexts");
				sb.Append(Environment.NewLine);
				getTraces(sb, retiredContexts);

				return sb.ToString();

			}


		}

		private void getTraces(StringBuilder sb, List<ActionContext> l)
		{
			var c = l.Count;

			for (int i = 0; i < c; ++i) {
				sb.Append("    ");
				sb.Append(l[i].Trace);
				sb.Append(" References: ");
				sb.Append(l[i].refCount);
				sb.Append(Environment.NewLine);
			}
		}

		/// Adds an action to the ActionQueue.
		/** 
			QueueAction() is generally called from some thread other than the main thread. But the action being queued must be one that
			can run on the main thread.

			The ActionQueue is used to support call-backs which result from the completion of some work on some secondary thread.

			Examples of this are asynchronous HttpWebRequests, or Timer timeouts.

			QueueAction() is thread-safe with respect to Process(), assuming Process() is only ever called from the main thread, and not recursively. 

			QueueAction() can be called from any thread.

			QueueAction() can also be called from an Action being performed inside Process().

			The queue'ed action will track extra info such as where it was queued from if
			ACTION_QUEUE_DEBUG is defined when compiling the SDK dlls.  You can call DumpCurrentWrapper
			from the action to have that extra info logged.
		*/
		// This method is only called from the primary thread.
		public void QueueAction(Action a, 	///< the Action to be queued for processing. 
				                ActionContext actionContext = null,  ///< a context for handling exceptions
                                bool allowDupes = true /// Normally, allow duplicate calls to th same method.
			) {

			if (a == null)
				throw new Exception("Cannot queue null action");

    		//	GsnDebug.Log("Queueing from", (new System.Diagnostics.StackTrace( 1, true )).ToString());

			// on secondary threads, actionContext will never be null.
			if (actionContext == null) { // none provided. Inherit.
				// inherit from currentWrapper, on main thread
				actionContext = currentWrapper.actionContext;
			}

			if (!actionContext.active) {
				GsnDebug.LogError("Not queueing Action to ended context".ToYellow(), actionContext.Trace);
				actionContext.TryRecycle();
				return; // we don't queue actions to ended contexts.
			}

			// NOTE HOW WE ARE ADDING A REF HERE BEFORE CALLING QueueActionWithoutAddRef
			// actions in the queue have a ref for being in the queue.
			QueueActionWithoutAddRef(a, actionContext.AddRef(
				#if REF_REASONS
				"QueueAction"
				#endif
                ), allowDupes);

		}

		public void AssertContext(ActionContext ac)
		{
			if (ac != currentWrapper.actionContext) {
				throw new Exception("Wanted actionContext " + ac.Trace);
			}
		}

		public bool InSubContextOf(ActionContext acSought)
		{
			return currentWrapper.actionContext.In (acSought);
		}

		private const int NO_CONTEXT_ID = -1;

		public void AssertContext(string name, int id = NO_CONTEXT_ID) {

			if (currentWrapper.actionContext.name != name ||
				(id != NO_CONTEXT_ID && id != currentWrapper.actionContext.id))
			{
				if (id != NO_CONTEXT_ID)
					name = name + id;

				throw new Exception("Not at desired ActionContext: " + name);				
			}

		}

		// direct setting and getting of the currentWrapper.actionContext. Jobs need this.
		public ActionContext Context {
			get {
				return currentWrapper.actionContext;
			}
			private set {

			//	GsnDebug.Log("Context becomes", value.name);

				currentWrapper.actionContext = value;
			}
		}

		/// Performs all the Actions currently in the ActionQueue, and empties it.
		/**
			Process() should generally be called periodically, on the main thread, from, for example, an Update function. 

			Process() is thread-safe with respect to QueueAction(), assuming Process() is only ever called 
			from the main thread, and not recursively. 
		*/
		public void Process() {

			++ProcessCount; // to prove we've been processing.

		//	GsnDebug.Log("ProcessCount:", ProcessCount);

			List<ActionWrapper> temp; // for swapping positions.

			if (OnFrame != null) {
				OnFrame(); // call "every frame" Actions
			}

			// There's no need to lock, here, since we are the only code which will REDUCE the value
			// of count. We don't want to lock if there is nothing to do. And Count will be non-zero eventually if
			// there is something to do.
			while (mainList.Count != 0) { // use a while loop to quickly totally empty the queue. So there's no delay
											// of the execution of actions enqueued during Process.
											// So an Action CAN lock us up if it enqueues itself. Don't be stupid.

				// There is something to do.
				temp = mainList; // copy the reference to mainList.

				// quickly clear the main queue to allow further queueing, including during Action execution below.
				// don't let enqueueing happen while we are swapping out mainList.
				// prevent the reference to mainList from changing in the middle of an Enqueue operation.
				lock (locker) { // don't do this during mainList.Add() .
					mainList = otherList; // switch queueing to the other list.
					// now enqueueing will go to otherList.
				}

				// what WAS the mainQueue is now safe from enqueueing. So we can run all the actions in it, and empty it.
				// do all the actions
				int c = temp.Count; // temp var maybe makes things faster. Don't do a ForEach (slow).

				// GsnDebug.Log("Processing", c, "Actions");

				for (int i = 0; i < c; ++i)
				{
				//	GsnDebug.Log("vvvvvvvv");

					currentWrapper = temp[i]; // each action has its own ActionContext

				//	DumpCurrentWrapper();

				//	GsnDebug.Log("Running an action in context", currentWrapper.actionContext.Trace);

					currentWrapper.actionContext.RemoveRef(
					#if REF_REASONS
					"Process"
					#endif
					); // no longer in queue

					CallActionInContext(currentWrapper.action); // default context.

					++ActionCount;
				//	GsnDebug.Log("^^^^^^^^", Environment.NewLine);


				}

				temp.Clear(); // empty the queue
				otherList = temp; // save the empty queue for later.

			}

			// switch back to root context because somebody might queue an action without an explicit context.
			currentWrapper.actionContext = RootActionContext;

		}
		
		public string ExceptionMessage {
			get; private set;
		}

		public void BubbleException() 
		{
			GsnDebug.Log("Exception bubbles to parent");

			// since we're executing the parent's exception handler, we don't
			// run the doneAction for this context when we end it.
			currentWrapper.actionContext.removeDoneAction();
			EndContext();

			// now we're in the parent context.
			HandleException(null, ExceptionMessage);
		}

		// we've encountered an exception in the currentWrapper's ActionContext.
		// note that this function can be called from Job.Finish as well.
		public void HandleException(Exception e, string message = null, string trace = null) 
		{
			if (e != null)
			{
				message = e.Message;
				trace = e.StackTrace;
			}

			// do these two lines before we enter another context.
			GsnDebug.LogError("Exception caught globally: ".ToRed(),"\"" +message+ "\"", "in context:", currentWrapper.actionContext.Trace, 
				Environment.NewLine + trace + Environment.NewLine + new StackTrace(2, true));

			if (e != null && e.InnerException != null) {
				GsnDebug.LogError("InnerException: ", "\"" + e.InnerException.Message + "\"");
			}

			// remember this for handleIt, which will run after we return.
			var actionContext = currentWrapper.actionContext;

			if (actionContext.eHandler == null)
			{	
				ExceptionMessage = message;
				BubbleException();
				ExceptionMessage = null;
				return;
			}

			// Now that we're about to handle it, REPORT THE EXCEPTION.
			// We can't report an exception in the EXCEPTION_REPORTING_CONTEXT. That could mean endless exceptions.
			if (currentWrapper.actionContext.name != EXCEPTION_REPORTING_CONTEXT) {

				// Now, the more complicated reporting that might talk over the net.
				// Do this in its own context, so that if it fails nothing else is affected.
				// The context for exception reporting is a child of the RootActionContext.
				// When UploadRecentLog is done, the context is popped, returning it to the 
				// actionContextPool.

				if (currentWrapper.actionContext.parent == null) {
					GsnDebug.LogError("Exception in root context. Application possibly hung.");
				}

				if (!currentWrapper.actionContext.active) {
					GsnDebug.LogError("Exception in inactive context. Cannot call handler.");
				}

				// Queue this action in a newly created context (child of root), which has no error handler.
				// if it gets an exception, such won't be handled, really, but at least we shouldn't die.
				// there's nobody waiting for this to complete. 
				QueueAction(() => {
					if (e != null) 
						GsnDebug.LogHandledException(e); // talk to crittercism.
					GsnDebug.UploadRecentLog(true);
					QueueAction(EndContext); // end the EXCEPTION_REPORTING_CONTEXT. 
				}, NewContext(EXCEPTION_REPORTING_CONTEXT, 0));

			}
			else
			{
				GsnDebug.Log("Exception encountered in exception reporting");
			}

			// Don't call the handler if the context has ended.
			if (!actionContext.active) {
				actionContext.TryRecycle();
				return;
			}

			Action handleIt = () => {
				ExceptionMessage = message;
				actionContext.eHandler();
				ExceptionMessage = null;
			};

			// Actually perform the exception handler associated with the current ActionContext.
			// your handler must decide whether it wishes to end the context, or stay in the current
			// context (or even enter a new context).
			// Your handler could even end the context and then throw again.
			// we must call handleIt asynchronously, since we are already in a catch block
			// due to the processing of this action.
			QueueAction(handleIt, actionContext);

		}

		// This long comment is for the purpose of describing a public static method whose purpose is to do 
		// something which is almost, but not quite completely unlike something.
		public static void DoNothing() {

		}

		/// Show debug info for the current action, this is intended to be called from
		/// within the action function itself to show what is queueing said action.
		/// If ACTION_QUEUE_DEBUG is defined when compiling the SDK dlls, this function does nothing.
		public void DumpCurrentWrapper()
		{
		#if ACTION_QUEUE_DEBUG
			GsnDebug.Log( GsnDebug.COLOR_CANARY + "ActionQueue: Current action was queued from:" + GsnDebug.END_COLOR + Environment.NewLine + 
			              currentWrapper.ToString()  );
		#endif
		}


		// set this bool to cause PumpFrames to return.
		private bool stopFrames;

		// Call this to cause PumpFrames to return.
		public void StopPumpingFrames() {

			stopFrames = true;

		}

		// A handy function which is best used in non-Unity applications.
		// PumpFrames does NOT return until StopPumpingFrames is called.
		// It calls Process periodically.
		public void PumpFrames (int frameDuration) {

			stopFrames = false; // pumping frames now.

			int nextFrameTime = 0; // when the next Process should happen, according to watch

			int sleepTime; // how long to sleep before calling Process.

			Stopwatch watch = new Stopwatch();

			while (!stopFrames) // when stopFrames becomes true we return.
			{
				nextFrameTime += frameDuration;

				sleepTime = nextFrameTime - (int)watch.ElapsedMilliseconds;

				if (sleepTime > 0)
				{
					Thread.Sleep(sleepTime);
				}

				Process();
			}
		}
	}

	/// singleton access to an action queue.
	public static class GlobalActionQueue {

		private static ActionQueue _instance;

		public static ActionQueue instance {
			get {

				if (null == _instance) {
					_instance = new ActionQueue();
				}
				return _instance;
			}
		}
	}

	/// Class to verify that the ActionQueue is operating propertly
	public static class GlobalActionQueueChecker {

		private static ActionQueueChecker _instance;

		public static void Start () {
			if (null == _instance) {
				_instance = new ActionQueueChecker();
			}
		}		
	}

	public class ActionQueueChecker {

		private Timer timer;	// timer we will run (can't use a TimeoutDispatcher since it relies on the ActionQueue!)

		private int priorProcessCount;

		private ActionQueue actionQueue; // the queue we'll check.

		public ActionQueueChecker() {

			actionQueue = GlobalActionQueue.instance;

			priorProcessCount = actionQueue.ProcessCount;

			timer = new Timer (timerCallback);	// create the timer with the callback.
			timer.Change (5000, 5000); // Start it running every 5 seconds after 5 seconds.

		}

		void timerCallback(object o) {

			int newProcessCount = actionQueue.ProcessCount;

			int difference = newProcessCount - priorProcessCount;

			if (difference == 0) {
				throw new Exception("GlobalActionQueue was not processed");
			}

			GsnDebug.Log("Processed GlobalActionQueue " + difference + " times" );

			priorProcessCount = newProcessCount;

		}
	}

	/// a class to check for ActionQueue idleness.
	public class ActionQueueIdleChecker {

		private Timer timer; // uses a timer.

		private int priorActionCount; // for finding out if actions have been performed.

		private ActionQueue actionQueue;

		private int secondsToCheckFor;	// how many seconds of idle before calling the callback.

		private int idleSecondCounter;

		private Action idleCallback;	// what to call when idle for long enough.

		public ActionQueueIdleChecker() {
			actionQueue = GlobalActionQueue.instance;

			timer = new Timer(timerCallback);
			timer.Change(Timeout.Infinite, Timeout.Infinite); // doing nothing yet.
		}

		public void Start(int seconds, Action cb) {

			idleCallback = cb;			// remember what to call

			timer.Change(1000, 1000);	// run once a second, after a second.
			secondsToCheckFor = seconds;	// remember how long to wait.

			idleSecondCounter = 0;		// No idle seconds seen yet.

			priorActionCount = actionQueue.ActionCount; // note how many actions have been done.

		}

		void timerCallback(object o) {

			int newActionCount = actionQueue.ActionCount;

			int difference = newActionCount - priorActionCount;

			priorActionCount = newActionCount;

			if (difference == 0) {	// we've been idle for a second.

				if (++idleSecondCounter == secondsToCheckFor) {

					timer.Change(Timeout.Infinite, Timeout.Infinite);	// pause the timer.
					actionQueue.QueueAction(idleCallback);		// call the callback, on the main thread.
				}

			} else {
				// not idle for this second. reset the count back to zero.
				idleSecondCounter = 0;
			}
		}
	}
}

