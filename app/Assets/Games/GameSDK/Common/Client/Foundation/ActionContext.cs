#if false
#define TRACK_CHILDREN
#endif

#if false
#define REF_REASONS
#endif

using System;
using System.Text;

namespace GSN.Skill.Games.Common.Utils
{
	/* 	An ActionContext represents a context within which Actions are processed by the ActionQueue.
		Its main purpose is to know what exception handler should be called to recover from exceptions
	 	encountered in the context.

	 	ActionContexts have a lifetime. There is the root context, whose lifetime is the life of the app.
	 	Other contexts are children of contexts. These contexts get created, and destroyed as necessary.

	 	ActionQueue.QueueAction has an optional ActionContext argument. If you provide it, the action
	 	will be queued to run in the given context. If you don't provide it, the action will be queued
	 	to run in the currently active context.

		The ActionQueue manages contexts. Whenever it runs an action, it switches into the context that
		action was queued for. When actions are done running, it switches back to the root context.

		It's possible to queue an action for a new context which is a child of the active context. Doing this
		does not change the active context until the queued action is run.

		Ending the active context makes it impossible to queue actions to run in that context, or to call
		the action in the ended context.

		Ending the active context brings you back to its parent context.

	*/

	public class ActionContext {

		public const int NO_LOGGING_PREFERENCE = 0;
		public const int SMALL_LOGGING_PREFERENCE = 10;
		public const int MEDIUM_LOGGING_PREFERENCE = 20;
		public const int LARGE_LOGGING_PREFERENCE = 30;
		public const int HUGE_LOGGING_PREFERENCE = 40;
		public const int ABSOLUTE_LOGGING_PREFERENCE = 100000;

		public struct LoggingSettings {

			public bool Enabled;			// whether logging is enabled
			public uint PreferenceStrength;	// the strength of this preference. Can be overridden 
											// by stronger preferences closer to or further from
											// the root context.
		}

		public ActionContext () { // this is needed on device, for some reason.
		}

		public string name { // the name of the context. Shows up in errors.
			get; private set;
		}

		public ActionContext parent { // the parent context which we return to when we end
			get; private set;
		}

		public Action eHandler { // the exception handler which will run to attempt to recover from 
									// exceptions in this context.
			get; private set;
		}

		public Action doneAction {	// the action we call when we end the context.
			get; private set;
		}

		public void removeDoneAction () {
			doneAction = null;
		}

		public int id { // just an integer. Useful to distinguish one context from another when they
						// have the same name. This is true with jobs, which are named for the job class used.
			get; private set;
		}

		public string note;	// This is further information about the context. Alterable any time. Shows up in errors.

		public bool inPool // indicates whether this ActionContext is in the ActionContext pool
		{
			get; private set;
		}

		public bool active {
			get; private set;
		}

		public int refCount {	// How many outstanding references to the ActionContext exist.
								// Contexts are never recycled until they are *ended*. References
								// are for the purpose of delaying the recycling of a context *even
								// though* it has been ended. When refs go to zero, that does NOT 
								// cause the context to end. It just means that IF ended, the context
								// will immediately be recycled.
								// Ended contexts which still have references are called "retired".
								// When the refCount of a retired context goes to zero, it is 
								// recycled.
			get; private set;
		} // refs include child contexts, ActionWrappers, TimeoutDispatchers, and WebRequestDispatchers

		public bool hasRefs {
			get {
				return refCount > 0;
			}
		}

		// variables indicating whether we should do any logging inside this ActionContext.
		// the PreferenceStrength is an indication of how important THIS turning on or off of logging is.
		// 

		public LoggingSettings loggingSettings;

		// Whether logging is actually enabled depends on the preferences of all the containing
		// contexts.
		public bool LoggingEnabled {
			get {
				ActionContext ac = this;
				ActionContext strongest = ac;

				// find the ac with the strongest preference strength going towards the root
				while(ac.parent != null) {

					ac = ac.parent;

					// if the ancestor doesn't have a stronger preference, the child prevails.
					if (ac.loggingSettings.PreferenceStrength > strongest.loggingSettings.PreferenceStrength) {
						strongest = ac;
					}
				}

				return strongest.loggingSettings.Enabled;

			}
		}

		// Set the logging preference for this ActionContext.
		public void SetLogging(bool enabled, uint prefStrength) {
			loggingSettings.Enabled = enabled;
			loggingSettings.PreferenceStrength = prefStrength;
		}

		private ActionQueue actionQueue; // the queue to which this ActionContext belongs.

		public ActionContext AddRef(
			#if REF_REASONS
			string why
			#endif
			) {
			if (inPool)
				throw new Exception("Bad ActionContext AddRef");

			++refCount;

			#if REF_REASONS
			GsnDebug.Log("Adding Ref", refCount, "to", this.Trace, why);
			#endif

			return this; // pass through
		}

		public void RemoveRef(
			#if REF_REASONS
			string why
			#endif
			) {

			if (refCount == 0 || inPool) {
				TryRecycle();
				return;
//				throw new Exception("Bad ActionContext RemoveRef");
			} 

			#if REF_REASONS
			GsnDebug.Log("Removing Ref", refCount, "from", this.Trace, why);
			#endif
			// deal with retired contexts whose refCount goes to zero.

			if (--refCount == 0) 
				TryRecycle();

		}

		// only for use by the ActionQueue
		public ActionContext _deactivate()
		{
			active = false;
			return this;
		}

#if TRACK_CHILDREN
		// Can be useful in debugging failed PopContexts.
		public List<ActionContext> children = new List<ActionContext>();
#endif

		// action contexts are pooled. Call this before returning one to the pool.
		public void Reconstruct() {

			if (refCount != 0)
				throw new Exception("ActionContext " + this.Trace + " still has references");

#if TRACK_CHILDREN
			children.Clear();
#endif
			name = null;
			id = 0;
			eHandler = null;
			doneAction = null;

			if (parent != null) {
				parent.RemoveRef(
				#if REF_REASONS
				"Reconstruct Child"
				#endif
				);
			}
				
			parent = null;
			note = null;
			inPool = true;
			active = false;

			SetLogging(false, 0); // defer to more fundamental preference.
		}

		public void TryRecycle() {
			if (inPool)
				return; // no problem. Things are as we like.

			if (active)
				return;

			if (refCount == 0) // we DON'T recycle contexts which have not been ended yet.
				actionQueue.RecycleContext(this);
		}



		// call this after grabbing a context from the pool.
		public void Initialize(ActionQueue actionQueue, string name, int id, Action eHandler = null, Action doneAction = null, ActionContext parent = null, string note = null) {

			this.actionQueue = actionQueue;
			this.name = name;
			this.id = id;
			this.eHandler = eHandler;
			this.doneAction = doneAction;
			this.parent = parent;

			if(parent != null) {
#if TRACK_CHILDREN
				// No need to clear children, as it is already clear.
				parent.AddRef().children.Add(this); // add a ref and a child to the parent.
#else
				parent.AddRef(
					#if REF_REASONS
					"Initialize child"
					#endif
				); // just add a ref to the parent.

#endif
			}
			this.note = note;
			inPool = false;		// no longer in pool.
			active = true;
		}

#if TRACK_CHILDREN
		public string ChildrenString {
			get {

				var sb = new StringBuilder();

				foreach(var c in children) {
					sb.Append("[");
					sb.Append(c.Trace);
					sb.Append("]");					
				}

				return sb.ToString();
			}
		}
#endif

		public bool In(ActionContext acSought)
		{
			if (acSought == this)
				return true;
			
			var ac = parent;

			while (ac != null) { // go up the chain.
				if (ac == acSought)
					return true;

				ac = ac.parent;
			}
			return false;
		}

		// This gives you a string telling you what context you are in. It walks up the parents.
		public string Trace {
			get {
				var sb = new StringBuilder();

				string lastName = name;

				sb.Append("<");
				sb.Append(name); // add the name of the innermost context.
				sb.Append(":");
				sb.Append(id);
				if (note != null) {
					sb.Append(":");
					sb.Append(note);
				}

				if (inPool)
					sb.Append(":InPool");

				var ac = parent;

				while (ac != null) { // go up the chain.

					lastName = ac.name;

					sb.Append(", in ");
					sb.Append(ac.name);
					sb.Append(":");
					sb.Append(ac.id);
					if (ac.note != null) {
						sb.Append(":");
						sb.Append(ac.note);
					}

					if (ac.inPool)
						sb.Append(":InPool");

					ac = ac.parent;
				}

				sb.Append(">");

				string retval = sb.ToString();

				if (lastName != "root") {
					GsnDebug.Log(("root is dead: " + retval).ToRed());
				}

				return retval; // return the result.				
			}
		}

	}
}