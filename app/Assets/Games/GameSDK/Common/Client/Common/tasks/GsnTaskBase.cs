using System;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Tasks
{
	/*
	 *   HERE IS THE PUBLIC INTERFACE TO tasks
 		function get wakeUpTime():uint; // returns next time it should Run
		function set wakeUpTime(wt:uint):void; // sets the next wakeup time.
		function get scheduler():GsnScheduler; // returns what scheduler this task is in
		function UnSchedule():void; // makes the task never Run again, 
	 * FRIEND FUNCTIONS OF THE SCHEDULER: DON'T CALL THESE DIRECTLY.
		function set scheduler(s:GsnScheduler):void // to set the scheduler for the task
		function set heapLocation(i:int):void; // (for use by scheduler) to store where in the scheduler's heap the task is
		function get heapLocation():int; // returns location in the scheduler's heap
		function OnRemoved():void; // called by the scheduler once removed
		function Run():void;  // does what the task wants to do.

	 * 
	 */

	/// The base class for tasks which are to be sheduled with a GsnScheduler.
	/**
		The scheduler works with software objects called tasks. A task is an object whose class
		inherits from GsnTaskBase. Other than this, you can make your task be anything you want,
		with any instance data or member functions.

		The purpose of a task is to do something, at some time&mdash;so a task has two essential
		features:

		- A wakeup time 
		- A Run function

		The wakeup time indicates when the Run function should next be called.

		A task, by itself, doesn't do anything&mdash;a scheduler must call the task's Run function.

	*/

	public abstract class GsnTaskBase: LinkedListNode
	{
		public const int NEVER = 0x7fffffff; ///< A wakeUpTime which will never occur.
		/**<
			If a scheduler has no tasks in it, then its wakeUpTime is NEVER.

			If a task's wakeUpTime is NEVER, it will never Run. */

		private int _wakeUpTime; // when this task will next be Run by its scheduler.
		private GsnScheduler _scheduler; // the scheduler that this task is scheduled in. If null, this task is unscheduled.
		private int _heapLocation; // where in the scheduler's task heap this task resides.  This speeds up certain operations.

		/// Constructs the task, setting its wakeUpTime to NEVER.
		public GsnTaskBase()
		{
			_wakeUpTime = NEVER; // task will NOT RUN unless you set its wakeUpTime.
			_scheduler = null; // no scheduler
			_heapLocation = 0; // invalid heap location (scheduled tasks start at 1).
		}

		/// Restores a GsnTaskBase to its post-construction state.
		/**
			The reason for this function is to allow you to pool up tasks and re-use them without having to re-allocate them.

			If the constructor for a GsnTaskBase ever gets more complex, calling this function will take that into account.

			Don't call Reconstruct on a task which is currently scheduled. (It will throw an error in a DEBUG build.)
		*/
		protected virtual void Reconstruct()
		{
			_wakeUpTime = NEVER; // task will NOT RUN unless you set its wakeuUpTime.
			#if DEBUG
				if (_scheduler!=null)
				{
					throw new Exception("attempting to Reconstruct a scheduled task");
				}
				if (_ownerList!=null)
				{
					throw new Exception("attempting to Reconstruct a task in a list");
				}
			#endif
		}

		/// FOR INTERNAL USE ONLY
		/**
			This function is how a task's wakeup time is changed. This function effectively notifies 
			parent schedulers of the task's new wakeup time.

			ONLY FOR USE BY GsnScheduler.  Don't call this from your own subclasses of GsnTaskBase.
		
			Instead, use the wakeUpTime setter.

		 */

		protected void SetWakeUpTime(int wt) 
		{
			if (wt==_wakeUpTime) // nothing to do.
			{
				return;
			}
			if (_scheduler!=null)
			// keep our scheduler up to date.
			{
				if (wt<_wakeUpTime)
				// task is moving backward in time relative to its old time.
				{
					_wakeUpTime = wt;
					_scheduler.FriendPrepone(this); /* yes, there are three copies of this line.  Why?
					   because it must be prior to any call to prepone or postpone, and it must
					   be AFTER the above if statement. */
				}
				// move the task in the schedule
				else
				{
					_wakeUpTime = wt;
					_scheduler.FriendPostpone(this); // move the task in the schedule
				}
			}
			else // just change this tasks wakeUpTime
			{
				_wakeUpTime = wt;
			}
		}

		/// Returns true if the task's wakeUpTime is NEVER.
		public bool IsIdle()
		{
			return _wakeUpTime==NEVER;
		}

        /// Unschedules a task. Does nothing if the task is not currently scheduled.
		/**
			Leaves the task's wakeUpTime unaffected.

			Note that calling UnSchedule on a task, inside the task's Run function, has no
			effect on the task's wakeUpTime or on the ongoing execution of the Run function. It
			simply removes the task from its scheduler, preventing the task from running *again.*

			If you call UnSchedule on a task, it is recommended that you do so *earlier* in its
			Run function rather than later. This will emphasize, in your code, that unshedule
			has no effect other than to stop your task from running *again*, and it will make your
			task available for *re-scheduling* if that is your intent.

            If you are going to re-schedule a task, why UnSchedule it? Because you might want to
			add the task to a *different* scheduler. Why would you have more than one scheduler? That's a
			topic for another time.

        */

		public void UnSchedule()
		{
			if (_scheduler==null)
			{
				return;
			}
			// we're already unscheduled. Do nothing.
			_scheduler.Remove(this); // scheduler will Remove it from the schedule, and then set _scheduler to null.
		}
		// THIS FUNCTION IS ONLY TO BE CALLED BY A SCHEDULER.  Period. 
		// You can override it in a subclass of GsnTaskBase, so that it will get called when your
		// task is removed from the scheduler.


		/// Called when a task is unscheduled.
		/** 
			This is not a function you call. It's a function which you *define* in your task class, and
			which the scheduler calls when the task is unscheduled (removed from its scheduler) from
			_outside its own Run function_.

		*/
		public virtual void OnRemoved()
		{
		}

		/// Does the work of the task
		/**
			This is not a function you call. It's a function which you *define* in your task class,
			and which the scheduler calls to Run your task.

			On entering the Run function, the value of wakeUpTime is the time at which your task
			has been Run.

			You should increase wakeUpTime inside the Run function, to indicate when the task
			should *next* be Run. If you don't, the Run function will be called again
			_immediately_ once it returns.

		*/

		public abstract void Run();

		/// Returns false.
		/** 

			\returns false. 

			Overrides LinkedListNode.IsAnchor()

		*/ 
		public override bool IsAnchor()
		{
			return false;
		}

		/// For internal use only. 
		/** 
	

			ONLY TO BE CALLED BY A SCHEDULER.  Period.  Whenever the scheduler moves a task around in 
		 	the schedule, it calls this.

		*/
		public int heapLocation
		{
			get
			{
				return _heapLocation;
			}
			set
			{
				_heapLocation = value;
			}
		}

		/// Returns the task's scheduler, or NULL if the task isn't currently scheduled.
		public GsnScheduler scheduler
		{
			get
			{
				return _scheduler;
			}
			set
			{
				/* THIS FUNCTION IS ONLY TO BE CALLED BY A SCHEDULER.  Generally in the scheduler's add function. 
			Nobody else should call this, because whenever a task is scheduled, it must be added to the scheduler's
			schedule, and that's the scheduler's job. Similarly when a task is unscheduled. The scheduler is
			is responsible for removing the task from its schedule. */
				_scheduler = value;
			}
		}

		/// Represents the task's wakeup time. wakeUpTime is the time at which the task will next Run.
		/** 

			At the beginning of a task's Run function, wakeUpTime
			indicates the time at which the task *has now been* Run.
			The meaning of "now" here is subtle. You might think that
			"now" would be the time which has been passed into the
			scheduler's RunUntil function (which *calls* your task's
			Run function), but that's not true. Your task is being
			Run because its wakeUpTime is *less than or equal to*
			the value which has been passed to RunUntil. That value
			could be *much bigger than* wakeUpTime, and your task
			_must not care_. Your task's idea of "now" is
			wakeUpTime, period.

			Change wakeUpTime inside the Run function to indicate
			the *next* time the task will Run.

			You can get or set a task's wakeUpTime whether or not
			the task is not currently running or currently scheduled.
			Of course, if the task is never scheduled, it will never
			Run. But once it is scheduled, its wakeUpTime will
			become relevant.

			Since a scheduler *is* a task, whenever a scheduler is
			running a task, the scheduler itself is inside its *own*
			Run function.  This can be very handy, because it means
			that the *scheduler's* wakeUpTime can serve as an easily
			accessible "wall clock" time in any function any task's
			Run function might call. There's no need to pass
			wakeUpTime to any code which can access the scheduler.
			Such code can simply get wakeUpTime from the scheduler.

			Note, though, that if the code currently being executed is
			not in the context of the scheduler's Run function (for
			instance, code which is running in a listener to a
			keyboard or mouse event), the scheduler's wakeUpTime is
			_not_ a valid "wall clock," because it represents when the
			scheduler will *next* Run a task -- a time *in the
			future.*

			It is easy to tell whether the scheduler is currently
			running a task -- whether you are currently executing in
			the context of the scheduler's Run function. Use the
			runningTask getter below.

			The above comments about the scheduler's wakeUpTime are
			true, with one exception: if you change the scheduler's
			value of lazy.

		*/
		public virtual int wakeUpTime
		{
			get
			{
				return _wakeUpTime;
			}
			set
			{
				SetWakeUpTime(value); // pre or postpone it.
			}
		}
	
		public override String GetDumpString()
		{
			return GetType().ToString();
		}
		
	};
}
