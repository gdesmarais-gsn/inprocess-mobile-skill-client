using System;
using System.Text;
using System.Diagnostics;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Tasks
/*
 * New OnIdle functionality:
 * OnIdle() is an overrideable function of the scheduler. It is called *from within the scheduler's Run() function*, 
 * *just before returning*, when the scheduler discovers that its wakeUpTime has become NEVER.
 * 
 * The value passed to OnIdle is the time at which the scheduler last ran a subtask.
 * 
 * This semantic is invariant with respect to whether the scheduler is lazy or not.
 * 
 * OnIdle is ONLY called from within the scheduler's Run() function.
 * 
*/
{ /*

Internal doc, not for doxygen.

A task is simply an object with a Run() function, and a wakeUpTime which
indicates when Run() should be called.

Run(), when called, does some work that needs doing and then returns. If the
wakeUpTime doesn't change, the task wants to be called again immediately.
Generally, though, the wakeUpTime is increased with each call to Run().

Here's how to call a task:

	var foo:uint = getTimer();

	while (task.wakeUpTime <= foo) 
		task.Run();

(See the GsnTaskBase.RunUntil() function, which is basically the above loop).

Note that if task.wakeUpTime is never increased, this is an endless loop.

A scheduler is a task which integrates other tasks. It has a Run() function
which is responsible for calling the Run() function of other tasks.

On creation, a scheduler has no tasks, and so its Run() function does nothing.

Tasks are added to a scheduler by using the Add() function.

Tasks are removed with the Remove() function.

A task's wakeuptime is altered by task.wakeupTime = X.

So, there are three operations that can be performed on a task with respect to
a scheduler: Add it, Remove it, or change its wakeUpTime.

Of course, these three operations can be performed by code outside the Run() function of the task or
scheduler in question, say in response to user input. For example, clicking the
mouse can Add a task to the scheduler to simulate a bouncing ball. Each new
task would simulate each new ball.

These three operations, though, are also possible from within the Run() function
of any running task. This means that any task can Add another task, or Remove
another task, or change the wakeUpTime of another task. This last is rare, but
still possible. As well, a task can Remove itself while it is running (so it
won't Run() again, see the GsnTaskBase.UnSchedule() function.)

In the face of all this possible change, the scheduler still needs to do its
job of running each task at the appropriate time.

When does it do this job?

In large measure, it does this job in its own Run() function (remember, the scheduler IS a task). 
That is, before the Run() function returns, it makes sure that the next subtask to be Run() is at the head
of the queue, and that the wakeUpTime of the scheduler is the same as the
wakeUpTime of the head subtask. This way, the scheduler will wake up at the
appropriate time so that it can Run() its head subtask.

Of course, though, while the scheduler is not running, any of its tasks might
be removed, or have their wakeUpTimes change, or more tasks might be added!

Clearly, none of these operations should undermine the integrity of the
scheduler. At the end of each of these operations upon any task, the (sleeping)
scheduler is notified so it can maintain its integrity so that it will wake up
at the right time to do its job.

What, then, does scheduler integrity consist of?

There are two cases: 

	If a scheduler is strict, then its integrity consists of having a schedule that
	is in the form of a proper heap, and its wakeUpTime is the wakeUpTime of its
	head subtask.  

	If a scheduler is lazy, then its integrity consists only of having a wakeUpTime 
	that is not later than the wakeUpTime of any of its subtasks.

So, a lazy scheduler doesn't necessarily have a proper heap, and its wakeUpTime might
be *earlier* than the wakeUpTime of it's earliest subtask. 
 
How can a lazy scheduler work? It keeps track of whether its heap is dirty. 

A dirty heap is a heap that might not be a proper heap. For a lazy scheduler, to
Add a task, or to Remove a task, or to change the wakeUpTime of a task makes
the scheduler's heap dirty.

When the lazy scheduler wakes up (at its wakeUpTime), if the heap is dirty, it
cleans it up. If the head subtask on the clean heap doesn't want to be Run() yet,
the lazy scheduler "resets the alarm clock" by resetting its wakeUpTime to the
wakeUpTime of the head subtask, and then returns.

But if there's a subtask that wants to be Run(), the scheduler runs it. This
could cause the schedule to become dirty again.

And, while the scheduler is asleep, the schedule could get even dirtier.

The lazy scheduler doesn't care how dirty the schedule gets. The only important
aspect of its integrity is that its wakeUpTime is not later than the wakeUpTime
of any of its subtasks, so that it won't "oversleep".

This means that any operation which dirties the schedule must assure that the
scheduler's wakeUpTime is no later than any of the subtasks.

A Remove operation will not require wakeUpTime to be modified, since it can't
possibly advance the wakeUpTime.

An Add operation might advance the wakeUpTime.

If a subtask advances its wakeUpTime, that might advance the scheduler's
wakeUpTime.

Remember that any of the above operations can take place inside or outside the
scheduler's Run() function.

In summary:

	Strict scheduler: 
		On leaving Run(), the schedule is a heap, and the wakeUpTime is the wakeUpTime of the head subtask.  
		The same is true any time Add or Remove	are called, or if any subtask's wakeUpTime is changed.

	Lazy scheduler: 
		On leaving Run(), the wakeUpTime is not later than that of any subtask.  
		The same is true any time Add or Remove are called, or if any subtask's wakeUpTime is changed.

So, a lazy scheduler's prime job is to make sure that wakeUpTime never gets too
late. wakeUpTime, then, increases only when the heap gets cleaned up, and it
can decrease as the heap gets dirty.

Some optimization:

The *reason* for either kind of scheduler to maintain its integrity is so that it
will be told to Run() at the proper time to get its job done. 

Either kind of scheduler must ensure that it has its integrity goal met 
_at the end of its Run() function_:

		A strict scheduler sets its wakeUpTime before returning from its Run() function.  
		A lazy scheduler will do the same, given its less precise idea (conservative, 
			yet good enough) of what its wakeUpTime should be.

The above means that Add, Remove, and wakeUpTime changes which take place
_during the scheduler's Run() function_ need not set the scheduler's wakeUpTime.

The strict scheduler sets its wakeUpTime by looking at the wakeUpTime of the
head task.

The lazy scheduler sets its wakeUpTime by using a minWakeUpTime variable, which
is reset every time the heap is cleaned, and potentially reduced by any Add or
prepone action.

So, Add or prepone actions, for a lazy scheduler, rather than cleaning the
heap, potentially reduce the value of the minWakeUpTime variable.

So, the Add, Remove, prepone and postpone actions each have two pieces to them:

	The "do the work" piece.  
		For strict scheduler, this is to make the change and fix the heap.  
		For lazy scheduler, this is to make the change and update minWakeUpTime 
	The "assure integrity of wakeUpTime" piece (which is only done if we are outside the Run() function) 
		For strict scheduler, this is to set wakeUpTime from the head subtask 
		For lazy scheduler, this is to set wakeUpTime from minWakeUpTime

*/

// DOXYGEN DOC STARTS HERE
// DOXYGEN DOC STARTS HERE
// DOXYGEN DOC STARTS HERE
// DOXYGEN DOC STARTS HERE
// DOXYGEN DOC STARTS HERE

/**

\brief A non-preemptive multitasking tool which can be
incorporated into any program. It's completely platform-independent, making no
use at all of system facilities&mdash;not even a clock.

## Tasks

The scheduler works with software objects called tasks. A task is an object
whose class inherits from GsnTaskBase. Other than this, you can make your
task be anything you want, with any instance data or member functions.

The purpose of a task is to do something, at some time&mdash;so a task has two
essential features:

- A wakeup time
- A Run() function

The wakeup time indicates when the Run() function should next be called.

A task, by itself, doesn't do anything. A task must be added to a scheduler, which will call the task's Run() function.

##The scheduler

A scheduler is an object which manages a group of tasks, and calls each task's
Run() function at the task's wakeup time.

##Constructing a scheduler

It's simple:

\code

    GsnScheduler sched = new GsnScheduler();

\endcode

There are no arguments to the scheduler's constructor.

##Driving the scheduler

To get its job done, the scheduler has a function which your program needs to
call to allow the scheduler to Run() some tasks.  This function is:

\code

    void RunUntil(int t)
    {
        . . .
    }

\endcode

This function drives the scheduler. If this function is never called, the
scheduler will do nothing at all. No tasks will be Run().

Here's an example of how to call RunUntil:

\code

    sched.RunUntil(getTimer());

\endcode

Generally, you'd do this in a part of your program which is Run over and over,
say an event listener to the ENTER_FRAME event.

The argument t is an integer indicating what time it is now.
Generally, the value passed to RunUntil is the number of milliseconds since
your program started running, but the actual value, and units of time, are
your choice&mdash;the scheduler does not care (they could be frames, or even
something abstract like "turns").

Generally t should increase with each call to RunUntil, but if it happens
to stay the same, or even decrease occasionally, it's not a problem in
practice.

The scheduler has no expectation that RunUntil be called regularly. Just
call RunUntil when you want to, and it will make up for any gaps in the
timeline&mdash;it *runs* tasks *until* the time passed in.

Because *you drive* the scheduler, you have complete control over its idea of
time. It just runs tasks, in order, based on t values. What t values you
pass it are up to you.

When RunUntil is called, the scheduler calls the Run() functions of any tasks
whose wakeup time is less than or equal to t. More precisely, the scheduler
repeatedly calls the Run() function of whichever scheduled task has the smallest
wakeup time, until every scheduled task's wakeup time is greater than t. If
there's a tie for the smallest wakeup time, one of the tied tasks is
arbitrarily, yet deterministically chosen to Run() first.

##Defining a task class

To create a task, you must define a class which is a subclass of GsnTaskBase:

\code

	// this is a test.
	public class simpleTask extends GsnTaskBase
	{
	    public function simpleTask()
	    {
	    }

	    public override function Run():void 
	    {
	        trace("running");
	    }
	}

\endcode

##Running your task

Once you define your task class, you must construct an instance:

\code

	var task:simpleTask = new simpleTask();

\endcode

So far, so good, but your task won't do anything if you don't tell the
scheduler about it. You do this by calling the scheduler's Add function:

\code

    sched.Add(task);

\endcode

If you Run your program now, you'll find that it doesn't do anything. This is
because, by default, the task's wakeUpTime is NEVER (which is a *very* big
number&mdash;the biggest possible uint). It will never Run()!

To fix this, after constructing the task, we set its wakeUpTime as follows:

\code

    var task:simpleTask = new simpleTask();
    task.wakeUpTime = getTimer();

\endcode

If you Run your program now, you'll *still* have a problem. You'll get lots
(and *lots*) of trace output:

\code

    running
    running
    running
    running
    .
    .
    .

\endcode

. . . and the Flash player will be unhappy with you&mdash;it's an endless loop!

In our Run() function, so far, we have not modified the task's wakeUpTime.
Its value doesn't change unless we write code to actually change it. So the
scheduler keeps waking up the task, over and over, in a very tight loop. That
is, *one* call to the scheduler's RunUntil function is trying to call your
task's Run() function an *infinite number of times*.

The way to prevent this is by having the Run() function Add *some amount* to the
wakeup time, as follows:
\code
    public override function Run():void 
    {
        trace("running");
        wakeUpTime += 100; // go to sleep for 100ms.
    }
\endcode
Now, if you Run your application, you'll find it is much better behaved.
It will print "running", 10 times a second.

##Summary

To Run a task under the scheduler you must do the following things:

1. Construct a scheduler.
2. Repeatedly call the scheduler's RunUntil function, generally from your ENTER_FRAME event listener.
3. Pass the current time to RunUntil.  Here are some examples of values that are a good indication of the current time:
	- In Unity: int(Time.time * 1000)
	- In AS3: getTimer() 
4. Define a task class, which inherits from GsnTaskBase.
5. Make your task do whatever you want in its Run() function.
6. Make sure you increase wakeUpTime in the Run() function.
7. Construct an instance of your task class.
8. Set the task's wakeUpTime to be the current time, or some time in the future.
9. Add the task to the scheduler.

Then Run the program and your task's Run() function will be called as
frequently or as infrequently as it wishes.

------

# An In-depth Discussion of the Scheduler

A typical task scheduler manages its own time, hooking a periodic system 
time-slice interrupt, and it decides what tasks to Run and to preempt. The
Hierarchical Scheduler (the GsnScheduler) is similar, except for the following:

- It runs within an application, not as part of the operating system.
- Its tasks are software objects in the application.
- The scheduler, and all its tasks, Run in a single thread.
- The scheduler cannot preempt a task which is running (tasks must be well-behaved, running only a little bit at a time).
- The scheduler explicitly delegates its own clocking to the environment in which it is used (it makes no use of any system clock).

In a validated GSN skill game application, the environment of the
scheduler&mdash;the code which makes use of it&mdash;is the model. The model
itself delegates its own clocking to the environment in which *it* is used.
The model's environment could be a game client, or a game server.

Any software object which delegates its own clocking to its environment does
not need to Run in real time. The environment can clock it frequently or
seldomly, faster or slower than real-time, regularly or irregularly. The
object can be written in such a way that regardless of the speed or smoothness
of the apparent passage of time, the object will perform the exact same
_actions_ in the exact same *order*, and at the exact same *apparent times*.
This feature, which the scheduler has, allows the model to behave
_deterministically_, which is crucial for the sake of using the results of a
server-side model to validate the behavior of a client-side model.

For both the client-side model and the server-side model to have the same
result, both must employ only integer math. Floating-point can vary in
implementation from platform to platform.

The model has a top-level update(t) function, by which it is clocked. Each
time update is called, the model's internal simulation progresses to the
specified time&mdash;that is, all actions which should take place at or before
t are performed in any given call to update(t).

The model's scheduler exports a RunUntil(t) function, which is to be called
by the model's update(t) function. The scheduler does nothing outside of
RunUntil(). Inside RunUntil(), it runs some tasks, without yielding, until
no task wants to be Run any more. If RunUntil() is called often, it won't
have a lot of work to do each time it is called. But if you call it only
occasionally, it might have a lot of work to do (tasks to Run) to "catch up"
to the present time.

Tasks, as the scheduler sees them, are just software objects with a public
time-stamp (a wakeUpTime), and a Run() function with no arguments or
return value. A scheduler manages a number of scheduled tasks. It runs these
tasks, in order of their wakeUpTime, inside its own RunUntil function.
Tasks are Run by calling their Run() function. The wakeUpTime of a task is
the next time at which it shall be Run().

Tasks have no knowledge of actual system time. Whenever a scheduler runs a
task, as far as that task is concerned, the current time *is its
wakeUpTime*. This obliviousness to the actual system time is
crucial&mdash;it is what allows the model to Run in non-real time, but
have the exact same results as if it had Run in real time.

The Run() function of each task generally adds some positive amount to the
task's wakeUpTime, or it un-schedules the task. Otherwise the scheduler will
call the task's Run() function again immediately (and perhaps over and over in
an infinite loop).

## One-shot Tasks

A task's Run() function doesn't necessarily Run more than once. It can prevent
itself from being called again, by calling UnSchedule(). Calling UnSchedule() does not
interfere with the continuing execution of the Run() function, but once it returns, it won't be called again.

##Schedulers as Tasks

The GsnScheduler class derives from the GsnTaskBase class.

Each scheduler **is a task**. This is how the scheduler can be hierarchical.
Each scheduler can manage an entire tree of sub-schedulers, treating each
directly subordinate scheduler no differently than it would a scheduled task.

In order to be a task, a scheduler needs only two things: a wakeUpTime, and
a Run() function.

In the scheduler's Run() function, it calls the Run() function of one of the
tasks it has scheduled&mdash;the task with the smallest wakeUpTime. This
task is called this the scheduler's *earliest task*.

After running its earliest task, the scheduler refreshes its own wakeUpTime
to be the wakeUpTime of its *now* earliest task. Then it returns from its
Run() function.

Whenever any task (including a task which happens to be a scheduler) changes
its own wakeUpTime, it notifies its scheduler of this fact, to allow the
scheduler to properly maintain its schedule.

Given that the Scheduler class is implemented as above, when the RunUntil
function of the root scheduler is called, if any task runs, it is the one, of
all the tasks at any level throughout the scheduler tree, that has the
smallest wakeUpTime.

## GsnCoTask

A GsnCoTask is a task which is linked to another task in such a way that if it gets
unscheduled before it runs, the corresponding GsnCoTask will also be unscheduled.

GsnCoTasks represent pairs of things which will either both happen, or both not happen.

GsnCoTasks are instrumental in the implementation of the Interaction Engine, and in older, Action Engine-based games such as
Vegas Nights 2.

*/

	public class GsnScheduler: GsnTaskBase
	{
		private GsnVector< GsnTaskBase > _schedule; // this is a binary heap of tasks.  Position 0 is not used.
		private GsnVector< GsnTaskBase > _otherSchedule; // spare schedule, for RemoveAll function.
		// This variable is the number of pending tasks, plus 1. The first element in the 
		// schedule is not used.
		private int _schedLen; // updated whenever the schedule length changes. For speed.
		private GsnTaskBase _runningTask; // task which this scheduler is running, if any.
		// lazy mode (as opposed to strict) is an alternate mode is which to use the scheduler. It might be
		// higher performance in some situations.
		private bool _lazy; // very fast adds, removes, prepones and postpones, with just in
		// time Cleanup.
		private bool _dirty; // schedule requires Cleanup (for use with lazy mode)
		private int _minWakeUpTime; // A conservative estimate of the minimum wakeUpTime in the heap. (for lazy mode)
		private int _lastRunTime; // when this scheduler last ran a subtask. For passing to the OnIdle function.
		#if DEBUG
			public uint _runCounter;
			private uint secdiff;
			private uint load;
		#endif



		/// Constructs a scheduler with an empty task schedule.
		/**

			Because the schedule is empty, the scheduler's wakeUpTime is NEVER.

		*/
		public GsnScheduler()
		{
			_schedule = new GsnVector< GsnTaskBase >(); // the schedule. A vector of tasks (position 0 is not used)
			_schedule[0] = null; // waste the first element for better heap arithmetic
			_otherSchedule = new GsnVector< GsnTaskBase >(); // spare schedule for RemoveAll function.
			_otherSchedule[0] = null; // likewise for the _otherSchedule
			_schedLen = 1; // It's 1, now, meaning no tasks.
			_runningTask = null; // No task is now running.
			_lazy = false; // default to be a strict scheduler.
			_dirty = false; // clean to begin with (and only used in lazy mode anyway)
			_minWakeUpTime = NEVER; // No tasks yet, so this is NEVER.
			_lastRunTime = NEVER; // we haven't Run any subtasks yet.
			SetWakeUpTime(_minWakeUpTime); // Never wake up until we get some tasks added!
			#if DEBUG
				_runCounter = 0;
			#endif
		}

		// this is called only by someone who knows you are the "top dog" task, and who is willing to let 
		// you Run until the given time.
		// USE WITH CARE, AND RARELY, LIKE ONCE, ON THE TOP LEVEL SCHEDULER.
		// DON'T USE THIS ON REGULAR TASKS, AS IT GIVES THEM A MONOPOLY ON TIME, which could prevent
		// other tasks from running when they want to.

		/// Calls the scheduler's Run() function repeatedly until the scheduler's wakeUpTime is greater than t.
		/**
			The scheduler's Run() function calls some scheduled task's Run() function&mdash;the one with the smallest wakeUpTime.

			Note that the scheduler's wakeUpTime is always equal to the lowest wakeUpTime of any scheduled task.

		*/
		public void RunUntil(int t ///< the time to Run() tasks until.
			)
		{
			// Run all tasks with a wakeup time equal to or before now.
			while(wakeUpTime<=t)
			{
				#if DEBUG
					secdiff = (uint)(wakeUpTime/1000)-(uint)(_lastRunTime/1000);
					if (secdiff!=0)
					{
						load = _runCounter/secdiff;
						if (load>100)
						{
							Trace.WriteLine(wakeUpTime+" "+load+" "+"runs per second");
						}
						_runCounter = 0;
					}
				#endif
				Run(); // this runs a single task, and doing this can alter the schedule (and therefore our wakeUpTime).
			}
		}
		// returns what task we are now running. If the result is NULL, we *aren't* in our Run() function.
		// this is a handy way for code to tell HOW it should tell what time it now is.  If we ARE running a task,
		// then the right way to find out what time it is now is by looking at the scheduler's wakeUpTime (which is the same
		// as the wakeUpTime of the running task). If we AREN'T running a task, then whatever code is running now is doing
		// so in response to some event which has its own timestamp, like a frame callback, or a user input event.
		// function to Run *as little as possible*. This function just runs one task. 
		// No looping to Run more than one, as that would be presumptuous and monopolistic.
		// This function is what makes the scheduler into a GsnTaskBase. 
		// A GsnTaskBase, when Run, does what needs doing now, 
		// and doesn't progress into the future.  This allows a GsnScheduler to serve as a 
		// super-task of a bunch of tasks -- a task which can be in another scheduler, 
		// and which plays nice with the other tasks in that scheduler, not locking them out
		// from running.
		// the caller has decided we have something to do, so we do it. Note, WE don't know what time it "really" is right now.
		// presumably, it's time for our first task to Run, otherwise this function wouldn't be called, and our first task,
		// while running, never looks at any kind of wall clock. All it knows is that "it is time to Run". Inside the task, 
		// that means that the time is now *that task's wakeUpTime*. What time it *really is* right now is *no tasks business*.
		// NEVER NEVER NEVER EVER LOOK AT A WALL-CLOCK INSIDE A TASK. Adherence to this principle is what makes it possible for 
		// tasks to Run deterministically in non-real-time, i.e. on a server that responds to time-stamped input messages.

		/// Called by RunUntil. You have no need to call this function directly.
		/**
			It calls the Run() function of whichever scheduled task has the earliest wakeUpTime.

			If two tasks both have the earliest wakeUpTime, one will be chosen to Run(), but in
			practice it is impossible to predict which. If you want strict task ordering, avoid
			identical wakeUpTimes.

			The scheduler's Run() function *presumes* that there is at least one task in the
			schedule. Calling this function with an empty schedule will result in undefined and
			certainly undesirable behavior such as calling the Run() function of a task which is no
			longer scheduled.

			There is no loop in this function. It calls the Run() function of a single task, and
			then returns.

			Before returning, Run() sets the scheduler's wakeUpTime to the earliest wakeUpTime
			of any task in the schedule, or NEVER if the schedule is empty.

			Before returning, Run() will call OnIdle if the scheduler's wakeUpTime has become
			NEVER.

			You cannot directly set a scheduler's wakeUpTime -- an error will be thrown.

		*/

		public override void Run()
		{
			#if DEBUG
				if (_runningTask!=null)
				{
					throw new Exception("Do not call the scheduler recursively!");
				}
				++_runCounter;
			#endif
			/* Lazy means two things: the heap might not be in order, and wakeUpTime might be before any
			 *  task wants to Run. When we wake up, if the schedule is dirty, we heapify it, then we check to see if we really
			 *	have anything to do right now.
			 */
			if (_lazy)
			// schedule might be dirty.
			{
				if (_dirty)
				// It is dirty. clean it up.
				{
					cleanupSchedule();
				}
				// here is where _minWakeUpTime might increase. Nowhere else.				
				// sched is clean, but it might be empty! In lazy mode, we don't adjust wakeUpTime when we delete or postpone tasks.
				if (_schedLen<2)
				// no tasks to do.
				{
					_minWakeUpTime = NEVER;
				}
				// we have a clean schedule with at least one task in it.
				else // when we should do something.					
				{
					_minWakeUpTime = _schedule[1].wakeUpTime;
				}
				// now _minWakeUpTime is the time of the first task in the queue.
				if (wakeUpTime<_minWakeUpTime) // wakeUpTime is "when we have woken up"
				// we woke up too soon. Nothing to do right now (except clean the heap, which we just did).
				{ // plan to wake up at the right time.
					SetWakeUpTime(_minWakeUpTime);
					if (_minWakeUpTime==NEVER) // if we'll never wake up again, call OnIdle now.
					{
						OnIdle(_lastRunTime); // Call OnIdle ONLY JUST BEFORE RETURNING.
					}
					return;
				}
				// this way, new tasks can be added to the scheduler in OnIdle(), without
				// us returning here and messing things up afterwards.
				_runningTask = _schedule[1]; // the task we will Run
				_lastRunTime = wakeUpTime; // remember when we ran the subtask
				_runningTask.Run(); // Run the task
				// calling Run on the subtask DOESN'T change OUR wakeUpTime, 
				// (each task, even a scheduler, changes ONLY its own wakeUpTime)
				_runningTask = null; // not running it any more.
				lazyRefreshWakeUpTime(); // make sure wakeUpTime is at least as early as _minWakeUpTime
			}
			// we don't call OnIdle here, because we'll do it if we have to, the next time we clean the heap, above.
			// lazyRefreshWakeUpTime never INCREASES our wakeUpTime, so, we will wake up again right away and clean the
			// heap, and then see if we need to call OnIdle().
			// CODE HERE IS COPIED FROM ABOVE, FOR SPEED
			else // the task we will Run
			{
				_runningTask = _schedule[1];
				_lastRunTime = wakeUpTime; // remember when we ran the subtask
				_runningTask.Run(); // Run the task
				// calling Run on the subtask DOESN'T change OUR wakeUpTime, 
				// (each task, even a scheduler, changes ONLY its own wakeUpTime)
				_runningTask = null; // not running it any more.
				// END OF COPIED CODE
				strictRefreshWakeUpTime(); // set wakeUpTime to the time of the head task.	
				if (wakeUpTime==NEVER) // if we won't wake up again, call OnIdle
				{
					OnIdle(_lastRunTime); // Call OnIdle ONLY JUST BEFORE RETURNING.
				}
			}
		}
		// this way, new tasks can be added to the scheduler in OnIdle(), without
		// us returning here and messing things up afterwards.
		// Called when the scheduler goes idle. Override it in a subclass of GsnScheduler.
		// argument is the time this scheduler last ran a subtask.

		/// Called by the scheduler when its wakeUpTime becomes NEVER.
		/** 


			This is not a function you call. It's a function which you *define* in a subclass of
			GsnScheduler.

			It is called just before the scheduler returns from its own Run() function. Calling this
			function is a scheduler's way of indicating that it doesn't intend to Run() any more tasks
			unless some new ones are scheduled, or unless some scheduled task's  wakeUpTime
			becomes something less than NEVER.

			Why isn't this function some kind of event that the scheduler emits? Because the scheduler 
			was designed to be very portable. Not every platform supports events, particularly
			the platform which consists of code that is sent through our AS to C++ conversion process.

			@param lastRunTime the time the scheduler last ran a task before calling OnIdle.

		*/

		public virtual void OnIdle(int lastRunTime)
		{
		}
		// in adding a task, we search from the leaves, towards the root, for a parent
		// to become a child of, demoting parents as we go.  Our new parent need not have 
		// a wakeUpTime less than ours, but it needs not to be greater than ours.
		// we keep looking until we find a parent with a wakeUpTime which is not greater than ours.

		/// Adds a task to a scheduler's task schedule.
		/**


			If the task is already scheduled, *in any scheduler*, Add does nothing. It does not
			throw an error even if an attempt is made to Add the task to a different scheduler than
			the one it is currently scheduled in.

			It is possible to Add a task to a scheduler even if the scheduler is currently running a
			task.

			Calling Add does not alter the task's wakeUpTime, nor immediately call the task's
			Run() function.

			While the scheduler is running a task, the scheduler's wakeUpTime is the time at which
			that task was Run(). It's only on returning from a task's Run() function that the
			scheduler's wakeUpTime is updated to match the earliest wakeUpTime of any scheduled
			task.  (There is one exception to this: if you change lazy in a task's Run() function.
			Doing so can prematurely alter the scheduler's wakeUpTime.)

			The scheduler's RunUntil function repeatedly calls the scheduler's Run() function
			until the scheduler's wakeUpTime is in the future.

			The scheduler, in its own Run() function, calls the  Run() function of a single
			scheduled task: the one with the earliest wakeUpTime.

			When the scheduler is done running the task, the scheduler sets its wakeUpTime to the
			earliest wakeUpTime of any task currently in its schedule. If there are no tasks in
			the schedule, or all of them have NEVER for their wakeUpTime, the scheduler sets its
			wakeUpTime to NEVER and calls OnIdle. The scheduler then returns from its Run()
			function.

			Since the task's Run() function generally changes its wakeUpTime, it often results in
			the scheduler changing *its* wakeUpTime.

			\param task The task to be added to the schedule.

		*/

		public void Add(GsnTaskBase task)
		{
			if (task.scheduler!=null)
			{
				throw new Exception("Task is already scheduled!");
			}
			task.scheduler = this; // we own it now. Don't Add it again.
			task.heapLocation = 0; // not in a valid heap location yet.
			internalAdd(task); // do the work, the lazy way or the strict way.
			if (_runningTask!=null) // we are adding a task while running a task.
			{
				return;
			}
			// defer refreshing the wakeUpTime until we are done running the task.
			// we are outside the Run() function, so we should refresh the wakeUpTime *now*.
			if (_lazy)
			// we are in Add(), outside the Run() function.
			{ // make sure wakeUpTime is at least as early as _minWakeUpTime
				lazyRefreshWakeUpTime();
			}
			// we are in Add(), outside the Run() function.
			else // set wakeUpTime to the time of the head task. 
			{
				strictRefreshWakeUpTime();
			}
		}
		// this adds a task. It is to be used internally.
		private void internalAdd(GsnTaskBase task)
		{
			int i;
			
			i = _schedLen; // remember how long the schedule currently is.
			_schedule[i] = task; // stuff it on the end -- might extend the schedule vector
			task.heapLocation = i; // tell the task where it is in the schedule. 
			++_schedLen; // we have one more task
			if (_lazy)
			// the lazy way. Just mark the schedule as dirty, 
			// and remember the earliest wakeUpTime seen.
			// we don't change the order of the tasks in the schedule.
			{
				_dirty = true;
				if (task.wakeUpTime<_minWakeUpTime)
				{
					_minWakeUpTime = task.wakeUpTime;
				}
				return;
			}
			// the strict way. Put the task in the right place.
			internalPrepone(i);
		}
		// removes the given task, calling its OnRemoved function if it 
		// isn't the running one.
		// refreshes our wakeUpTime if we aren't running and we aren't lazy.

		/// Unschedules a single task from this scheduler, calling its OnRemoved() function if the task isn't currently running.
		/**


			If the task isn't scheduled *with this
			scheduler*, nothing happens.

			If the task isn't the running task, its OnRemoved function is called.

			It is possible to Remove a task from a scheduler even if the scheduler is currently
			running a task, and even if the task being removed is the task currently being Run().
			Doing so does not interrupt the execution of the running task's Run() function.

			\param task the GsnTaskBase to be removed from the schedule

		*/

		public void Remove(GsnTaskBase task)
		{
			int i;
			GsnScheduler sched;
			
			// This silly variable is here because of the PAC tool. Sigh.
			sched = this;
			if (task.scheduler!=sched) // not mine, so my job is done.
			{
				return;
			}
			// the number of REAL tasks we have is _schedLen - 1, because slot 0 is empty
			if (_schedLen<2)
			// task mistakenly thinks it is this scheduler's
			{
				throw new Exception("Task thinks it is mine, but I have no tasks.");
			}
			i = task.heapLocation;
			#if DEBUG
				if (_schedule[i]!=task)
				{
					throw new Exception("Task heap location is corrupt");
				}
			#endif
			internalRemove(i); // do the Remove, dirty way or clean way.
			if (task!=_runningTask)
			// task is being removed, but not inside its own Run() function.
			{ /*
				 * Why, you might ask don't we call OnRemoved when the task being removed is the running task?
				 * 
				 * The OnRemoved() function is here to support GsnCoTasks, which are tasks which BOTH get removed
				 * if EITHER gets removed. A pair of GsnCoTasks might be "one-shot" tasks, which Run() only once, simultaneously
				 * at a specific time, for instance one task for each of two colliding balls. When the balls collide, one 
				 * task changes the direction of one ball, and the other task changes the direction of the other.
				 * 
				 * If, though, it turns out that the collision *shall not happen*, then unscheduling one co-task will cause
				 * the other to UnSchedule (be removed).
				 * 
				 * But if the tasks actually Run(), then one of them will actually Run() first, even though they are scheduled
				 * for the same time. When that task runs, it will call GsnTaskBase.UnSchedule(), which will Remove it from 
				 * its scheduler.  Doing THAT shouldn't UnSchedule the other of the two GsnCoTasks. Both tasks should Run().
				 * 
				 * So, it's only if a task is removed *while it isn't running* that it's OnRemoved() function will be called.
				 *   
				 */
				task.OnRemoved(); // Call the OnRemoved function for the task.				
			}
			if (_runningTask!=null) // we are removing a task while running a task. we'll refresh the wakeUpTime at the end of Run().
			{
				return;
			}
			if (_lazy) // removes don't affect _minWakeUpTime, regardless of whether we are running.
			{
				return;
			}
			// we are in Remove(), called from outside the Run() function.  Get the ducks in order.
			strictRefreshWakeUpTime(); // set wakeUpTime to the time of the head task. 
		}
		// this function does the Remove, perhaps cleaning the heap. And NOTHING ELSE.
		private void internalRemove(int i)
		{
			GsnTaskBase lastTask;
			GsnTaskBase task;
			
			// First, Remove the task at the end of the vector.			
			lastTask = _schedule[--_schedLen]; // task at end of heap.
			if (i==_schedLen) // if we just removed the one we want to Remove
			{ // it's not ours any more, and we're done.
				lastTask.scheduler = null;
				return;
			}
			// at this point, if the heap is dirty, it is still dirty,
			// and if it is clean, it is still clean, since removing the last element of
			// a clean heap is still a clean heap.
			task = _schedule[i]; // the one we *really* want to Remove.
			task.scheduler = null; // it's not ours any more.
			_schedule[i] = lastTask; // overwrite the task we are removing, with the one we removed above.
			lastTask.heapLocation = i; // keep this up-to-date.
			if (_lazy)
			// the lazy way. Just mark the schedule as dirty. It'll get cleaned when we wake up.
			// removing a task doesn't change _minWakeUpTime.
			{
				_dirty = true;
				return;
			}
			// clean up the schedule because we are strict.
			// there is no guarantee that the last task in the heap has a later wakeUpTime than
			// the task we wanted to Remove. So we must look in both directions to
			// find where this task must really go.
			if (internalPrepone(i)) // try to move the task towards the head of the heap.
			// prepone returns true if it thinks we should try postponing instead.				
			{ // try to move the task towards the end of the heap.
				internalPostpone(i);
			}
		}
		// Remove all the tasks, and call OnRemoved() on each one except the _runningTask
		// we can't call OnRemoved() until the schedule is empty, because OnRemoved
		// might Add some tasks.  So, we use an alternate schedule vector to get it
		// done.

		/// Unschedules each and every scheduled task, calling its OnRemoved() function if the task isn't currently running.
		public void RemoveAll()
		{
			int i;
			GsnTaskBase task;
			int tmpSchedLen;
			GsnVector< GsnTaskBase > tmpSchedule;
			
			if (_schedLen<2) // nothing to Remove.
			{
				return;
			}
			tmpSchedule = _schedule; // save the schedule (a reference, not a new instance)
			tmpSchedLen = _schedLen; // remember the length.
			// swap the schedules
			_schedule = _otherSchedule; // bring in the new schedule. it will be taken as empty.
			_otherSchedule = tmpSchedule; // remember the old schedule.
			// re-form the schedule, so that any call to OnRemoved can work with
			// the new schedule, rather than the old one. Don't mess with the 
			// length of the schedule vector, for speed.
			_schedLen = 1; // all the tasks are gone.
			_dirty = false; // an empty schedule is a clean one.
			// the schedule is now clear, but we still need to call the OnRemoved functions for the removed
			// tasks.
			// let all the tasks know they've been removed before being done.
			i = 1; // first task to Remove, because we skip index zero.			
			// tell the task I don't own it any more
			do
			{
				task = tmpSchedule[i];
				task.scheduler = null; // not our task any more.
				if (task!=_runningTask)
				// call OnRemoved only if the task is not the running task!
				{
					task.OnRemoved();
				}
			}
			while(++i<tmpSchedLen);
			if (_runningTask!=null)
			{
				return;
			}
			// if we are running, refresh wakeuptime later, before we return from running.
			if (_lazy)
			{
				return;
			}
			//removes do not affect _minWakeUpTime, regardless of whether we are running.
			SetWakeUpTime(NEVER); // faster substitute for strictRefreshWakeupTime(), since we have no tasks.
		}
		// this function changes us from lazy to strict mode, or vice versa.  You don't have to do this just once.
		// you can change from strict to lazy and vice versa at any time.
		// CAVEAT: changing the state of lazy might IMMEDIATELY alter the scheduler's wakeUpTime.
		// This means that after changing lazy from within the Run() function, the scheduler's wakeUpTime is NO LONGER
		// A VALID INDICATOR OF THE wall-clock TIME during that Run() function.
		// NOTE AGAIN: This function might directly alter the scheduler's wake-up time, even if it is currently running a task
		// If we are in the Run() function, strictRefreshWakeUpTime will be called, but that's ok since
		// the schedule is not dirty right now.
		// DON'T RELY ON this scheduler's wakeUpTime as a wall-clock time until the next Run() function is called.				
		// this is the public prepone function, to be called if one of our tasks changes its wakeup time.
		// it would be a friend of GsnTaskBase if we could make it such.

		/// INTERNAL USE ONLY. Used by internals of GsnTaskBase.
		public void FriendPrepone(GsnTaskBase task)
		{
			if (_lazy)
			// the lazy way. set the heap dirty, and update the _minWakeUpTime.
			{
				_dirty = true;
				if (task.wakeUpTime<_minWakeUpTime) // maintain _minWakeUpTime
				{
					_minWakeUpTime = task.wakeUpTime;
				}
				if (_runningTask!=null)
				{
					return;
				}
				// skip the refresh if we are running. We'll get to it.
				lazyRefreshWakeUpTime(); // make sure wakeUpTime is at least as early as _minWakeUpTime
			}
			// the strict case. Do the hard work.
			else
			{
				internalPrepone(task.heapLocation);
				if (_runningTask!=null)
				{
					return;
				}
				// skip the refresh if we are running. We'll get to it.
				// we are in FriendPrepone, outside the Run() function.
				strictRefreshWakeUpTime(); // set wakeUpTime to the time of the head task.	
			}
		}
		// moves a task forward in time (towards the head). 
		// returns true if postponing might be fruitful instead.
		// preponing stops when your parent's wakeUpTime is 
		// equal to or smaller than yours.
		// 
		// normally we'd think that postponing might be a good
		// idea any time prepone does nothing. But there is one
		// case where it does nothing where it's not even worth
		// considering postponing: when our parent has the same
		// wake-up time we do.
		//
		// so, on entering this function, only if we discover
		// the parent has a lesser wakeUpTime than we do, do we
		// immediately return true, indicating "try postponing instead"
		// this bubbles tasks up to where they have a wakeUpTime equal to or greather than their parent.
		private bool internalPrepone(int child)
		{
			int parent;
			GsnTaskBase parentTask;
			GsnTaskBase task;
			int wt;
			
			task = _schedule[child]; // the task to prepone.
			wt = task.wakeUpTime; // cache the task's wakeUpTime
			parent = child>>1; // index of the parent. each parent has two children, an even one and an odd one.
			if (parent==0)
			{
				return true; // no parent. Can't prepone. Perhaps postpone to find right spot.
			}
			parentTask = _schedule[parent]; // get the parent task
			if (wt>parentTask.wakeUpTime)
			{
				return true; // Can't prepone. Perhaps postpone.
			}
			// prepone if wt is smaller than the parent's.
			// stop when it is equal or greater.
			while(wt<parentTask.wakeUpTime)
			// this is the preponement step. We have a wakeUpTime smaller than our parent's.
			// so our current parent should be our child.
			{ // move parent task down into child's slot.
				_schedule[child] = parentTask;
				parentTask.heapLocation = child; // keep this up-to-date.
				// move up the tree towards the head.
				child = parent; // the child slot is now what the parent slot use to be.
				parent = child>>1; // new parent slot.
				if (parent==0) // no parent. You are done.
				{
					break;
				}
				parentTask = _schedule[parent];
			}
			// put our task where it goes. It might not have moved.
			_schedule[child] = task;
			task.heapLocation = child; // keep heapLocation up-to-date.
			return false; // don't bother trying postponing.
		}
		// this is the public postpone function, to be called if one of our tasks changes its wakeup time.
		// it is called by GsnTaskBase. It would be a friend function if we could make it so.

		/// INTERNAL USE ONLY. Used by internals of GsnTaskBase.
		public void FriendPostpone(GsnTaskBase task)
		{
			if (_lazy)
			// the lazy way. Just mark the heap as dirty. Wakeup time is irrelevant.
			{
				_dirty = true;
			}
			// strict method. 
			else
			{
				internalPostpone(task.heapLocation);
			}
			if (_runningTask!=null)
			{
				return;
			}
			// no need to refresh wakeUpTime
			if (_lazy)
			{
				return;
			}
			// _minWakeUpTime has not changed.
			// we are in postpone, outside the Run() function.
			strictRefreshWakeUpTime(); // set wakeUpTime to the time of the head task.	
		}
		// there is no guarantee of ordering of tasks with equal wakeUpTimes. We postpone a task only as far as we 
		// HAVE to to maintain the heap condition.  If children equal you, you don't move. This bubbles down.
		// a task's wakeUpTime has grown. We call this to fix the heap.
		private void internalPostpone(int parent)
		{
			GsnTaskBase childTask;
			int earlierChild;
			GsnTaskBase task;
			int wt;
			
			task = _schedule[parent]; // get the task which might move.
			wt = task.wakeUpTime; // cache the task's wakeUpTime
			earlierChild = getEarlierChild(parent); // which of any children should be promoted.
			/* We want to swap with the earlier child rather than the later child, because if we promote it it will
				not end up later than either of its new children, one of which is its prior sibling. */
			if (earlierChild==0)
			{
				return;
			}
			// no children, nothing to do.
			childTask = _schedule[earlierChild];
			// stop the search when our wakeUpTime is equal or less than any children.
			// i.e. the children's wakeUpTimes are late enough for us to be their parent.
			while(wt>childTask.wakeUpTime)
			// promote a child.
			{ // move the child into its parent's slot
				_schedule[parent] = childTask;
				childTask.heapLocation = parent; // keep heapLocation updated
				parent = earlierChild; // go down the tree.
				earlierChild = getEarlierChild(parent); // which of any children should be promoted.
				if (earlierChild==0)
				{
					break;
				}
				// no children.
				childTask = _schedule[earlierChild]; // new child to look at.
			}
			_schedule[parent] = task; // we've found where this task should go.
			task.heapLocation = parent; // keep heapLocation updated.
		}
		// This is a freaking kludge!  It's here because of a current limitation in PAC2. Ideally,
		// PAC2 should recognize that there's a getter for wakeUpTime in the base class, but because
		// we have a setter here, and not there, it doesn't think we have a getter there.
		// you can't change the scheduler's wakeUpTime, since when it should wake
		// up depends on the next task it wants to Run().
		// This function is called at the end of our Run() function, to assure we'll be Run() again at
		// the proper time. It's also called if, while we are not running, our schedule gets modified
		// by some other task. (Add, Remove, postpone, or prepone). If Add, Remove, postpone or prepone
		// are called while we are running a subtask, this function should not be called, as it will
		// be called at the END of our Run() function.
		// This function sets our wakeUpTime based on the current contents of our schedule. 
		// Generally it is called at the end of our Run() function so that wakeUpTime can be used
		// inside the Run() function as a wall-clock time.
		// The only exception to this is if we change the scheduler from lazy to strict, or from strict
		// to lazy, during the Run() function.
		// If Add, Remove, removeall, postpone, or prepone get called outside the Run() function, 
		// we want to call this function too.
		// this function calls SetWakeUpTime, which will prepone or postpone US in our parent scheduler,
		// so we don't want to call this function too often.
		private void strictRefreshWakeUpTime()
		{
			// set wakeUpTime to the time of the head task.	
			if (_schedLen>1)
			{
				SetWakeUpTime(_schedule[1].wakeUpTime);
			}
			else // no tasks.
			{
				SetWakeUpTime(NEVER);
			}
		}
		// make sure wakeUpTime is at least as early as _minWakeUpTime
		// with lazy schedule maintenance, it uses the value of _earliestWakeUpTime, a value that is 
		// guaranteed to be as early as any of our sub-tasks would like to wake up.
		// the result is that if we are strict, we'll be woken just-in-time, but if we are deferring
		// Cleanup, we 
		// may get woken up early. We will never get woken up late.
		private void lazyRefreshWakeUpTime()
		{
			if (_minWakeUpTime<wakeUpTime)
			// wakeup time got advanced by an Add or prepone.
			{
				SetWakeUpTime(_minWakeUpTime);
			}
		}
		// returns the index of the earlier of a node's two children.
		private int getEarlierChild(int index)
		{
			int firstChild;
			
			firstChild = index<<1; // times 2 left child.
			// _schedule[_schedLen - 1] is the last element. 
			if (firstChild>=_schedLen) // no children.
			{
				return 0;
			}
			if (firstChild+1>=_schedLen)
			// only one child. return it.
			{
				return firstChild;
			}
			// return the child with the smaller wakeUpTime.
			else
			{
				return (_schedule[firstChild].wakeUpTime<=_schedule[firstChild+1].wakeUpTime) ? firstChild : firstChild+1;
			}
		}
		// this function does NOT modify wakeUpTime or _minWakeUpTime. It only cleans the heap.
		private void cleanupSchedule()
		{
			int i;
			
			// this function makes the schedule into a heap.
			// you'd use this function if the schedule ever gets "dirty", i.e. unheapified.
			// for every node has children, go from the bottom up,
			// and internalPostpone it.
			// if _schedLen is 14, that means we have 13 tasks, the last of which is in slot 13
			// Its parent is in slot 6.  So, the last parent in the schedule is (_schedLen - 1) >> 1  
			for(i = (_schedLen-1)>>1; i>0; i--)
			{
				internalPostpone(i);
			}
			_dirty = false; // it's clean now.
		}

		/// Gets the contents of the schedule, for debugging.
		/**
			\returns a string indicating the contents of the schedule. 
		*/
		public override string GetDumpString()
		{
			int i;
			StringBuilder retval = new StringBuilder();
			retval.Append("[");
			
			for(i = 1; i<_schedLen; ++i)
			{
				retval.Append(_schedule[i].GetDumpString());
			}
			retval.Append("]");
			return retval.ToString();
		}
		#if G__UNITTESTS
		// this function checks our schedule for corruption (bugs). It doesn't check the wakeUpTime.
		private void checkSchedule()
		{
			int i;
			
			if (!_lazy)
			// wakeUpTime must be right.
			{
				if (_schedLen>1)
				// we have a task
				{
					if (wakeUpTime!=_schedule[1].wakeUpTime)
					{
						throw new Exception("wakeUpTime is stale");
					}
				}
				else
				{
					if (wakeUpTime!=NEVER)
					{
						throw new Exception("wakeUpTime is stale");
					}
				}
			}
			if (_schedLen>1)
			// we have a task. verify its heaplocation.
			{
				if (_schedule[1].heapLocation!=1)
				{
					throw new Exception("bad heapLocation");
				}
			}
			// for any node that has a parent. . .
			for(i = 2; i<_schedLen; i++)
			{
				if (_schedule[i].heapLocation!=i)
				{
					throw new Exception("bad heapLocation");
				}
				if (!_dirty && _schedule[i].wakeUpTime<_schedule[i>>1].wakeUpTime)
				{
					throw new Exception("heap is out of order");
				}
			}
		}
		public void unitTestStrict()
		{
			unitTest(false);
		}
		public void unitTestLazy()
		{
			unitTest(true);
		}
		private void unitTest(bool lazy)
		{
			GsnDumpCatcher dc;
			int i;
			GsnIdleAwareScheduler s;
			GsnScheduler sched1;
			GsnIdleAwareScheduler subSched;
			GsnTaskBase t1;
			GsnTaskBase t2;
			GsnTaskBase t3;
			GsnTraceTask task1;
			GsnTraceTask task2;
			
			Trace.WriteLine("GsnScheduler Unit Test");
			dc = new GsnDumpCatcher();
			task1 = new GsnTraceTask(1, 1000, 0, dc);
			while(task1.wakeUpTime<=5000)
			{
				task1.Run();
			}
			dc.require("1:0\n1:1000\n1:2000\n1:3000\n1:4000\n1:5000\n");
			task1.wakeUpTime = 0;
			task1.Run();
			dc.require("1:0\n");
			task1 = new GsnTraceTask(1, 1, 25, dc);
			while(task1.wakeUpTime<=20)
			{
				task1.Run();
			}
			dc.require("");
			while(task1.wakeUpTime<=25)
			{
				task1.Run();
			}
			dc.require("1:25\n");
			while(task1.wakeUpTime<=30)
			{
				task1.Run();
			}
			dc.require("1:26\n1:27\n1:28\n1:29\n1:30\n");
			task1.wakeUpTime = 25;
			while(task1.wakeUpTime<=30)
			{
				task1.Run();
			}
			dc.catchDump(111, (task1.wakeUpTime).ToString());
			dc.require("1:25\n1:26\n1:27\n1:28\n1:29\n1:30\n111:31\n");
			sched1 = new GsnScheduler();
			sched1.lazy = lazy;
			if (lazy)
			{
				Trace.WriteLine("TESTING LAZY MODE SCHEDULERS");
			}
			else
			{
				Trace.WriteLine("TESTING STRICT MODE SCHEDULERS");
			}
			sched1.Add(task1);
			sched1.RunUntil(33);
			dc.require("1:31\n1:32\n1:33\n");
			sched1.Remove(task1);
			dc.require("1:removed\n");
			task2 = new GsnTraceTask(2, 456, 0, dc);
			task2.UnSchedule();
			sched1.Add(task1);
			sched1.Add(task2);
			task1.SetCoTask(task2); // bidirectional.
			task1.UnSchedule();
			dc.require("1:removed\n2:removed\n");
			task2.SetCoTask(task1);
			sched1.Add(task1);
			sched1.Add(task2);
			task1.UnSchedule();
			dc.require("1:removed\n2:removed\n");
			task1 = new GsnTraceTask(1, 500, 3000, dc);
			task2 = new GsnTraceTask(2, 347, 200, dc);
			sched1.RemoveAll();
			sched1.Add(task1);
			sched1.Add(task2);
			sched1.RunUntil(5000);
			dc.require("2:200\n2:547\n2:894\n2:1241\n2:1588\n2:1935\n2:2282\n2:2629\n2:2976\n1:3000\n2:3323\n"+"1:3500\n2:3670\n1:4000\n2:4017\n2:4364\n1:4500\n2:4711\n1:5000\n");
			sched1.Remove(task1);
			dc.require("1:removed\n");
			sched1.Remove(task1);
			dc.require("");
			task2.wakeUpTime = 0;
			sched1.RunUntil(3000);
			dc.require("2:0\n2:347\n2:694\n2:1041\n2:1388\n2:1735\n2:2082\n2:2429\n2:2776\n");
			{
				sched1 = new GsnScheduler();
				for(i = 0; i<10; ++i)
				{
					sched1.Add(new GsnOneShotTask(i, dc));
				}
				sched1.RunUntil(1000);
			}
			dc.require("0:new OneShot\n1:new OneShot\n2:new OneShot\n3:new OneShot\n4:new OneShot\n5:new OneShot\n6:new OneShot\n"+"7:new OneShot\n8:new OneShot\n9:new OneShot\n0:running oneShot at 0\n9:running oneShot at 0\n8:running oneShot at 0\n7:running oneShot at 0\n"+"6:running oneShot at 0\n5:running oneShot at 0\n4:running oneShot at 0\n3:running oneShot at 0\n2:running oneShot at 0\n1:running oneShot at 0\n");
			s = new GsnIdleAwareScheduler(1, dc); // top sched
			t1 = new GsnOneShotTask(1234, dc); // some oneshot tasks.
			t2 = new GsnOneShotTask(3456, dc);
			t3 = new GsnOneShotTask(7890, dc);
			dc.require("1234:new OneShot\n3456:new OneShot\n7890:new OneShot\n");
			t1.wakeUpTime = 1000; // set wakeuptimes and Add them to the top sched.
			s.Add(t1);
			t2.wakeUpTime = 2000;
			s.Add(t2);
			t3.wakeUpTime = 3000;
			s.Add(t3);
			s.RunUntil(5000); // make it Run.
			dc.require("1234:running oneShot at 1000\n"+"3456:running oneShot at 2000\n"+"7890:running oneShot at 3000\n"+"1:idle time is 3000\n"+"23:new OneShot\n"+"23:running oneShot at 4500\n"+"1:idle time is 4500\n"+"23:new OneShot\n");
			s.Add(t3); // back to 3000.
			t3.wakeUpTime = 6000; // change to 6000.
			s.RemoveAll(); // clean it out.
			dc.require("");
			subSched = new GsnIdleAwareScheduler(2, dc);
			s.Add(subSched); // Add a sub-scheduler.
			s.RemoveAll();
			dc.require("");
			s.Add(subSched);
			subSched.Add(t1); // Add task 1 and 2.
			subSched.Add(t2);
			s.RunUntil(3499);
			dc.require("1234:running oneShot at 1000\n"+"3456:running oneShot at 2000\n"+"2:idle time is 2000\n"+"23:new OneShot\n");
			s.RunUntil(3500);
			dc.require("23:running oneShot at 3500\n"+"2:idle time is 3500\n"+"23:new OneShot\n");
			s.RunUntil(10000);
			dc.require("23:running oneShot at 5000\n"+"2:idle time is 5000\n"+"23:new OneShot\n"+"23:running oneShot at 6500\n"+"2:idle time is 6500\n"+"23:new OneShot\n"+"23:running oneShot at 8000\n"+"2:idle time is 8000\n"+"23:new OneShot\n"+"23:running oneShot at 9500\n"+"2:idle time is 9500\n"+"23:new OneShot\n");
		}
		#endif

		//Properties

		/// Whether the scheduler will perform lazy schedule maintenance.
		/**
			Schedule maintenance is *strict* by default (not lazy).

			Lazy schedule maintenance can be more efficient than strict schedule maintenance under
			some circumstances.

			Lazy maintenance speeds up Add and Remove, and adjustments to a task's wakeUpTime,
			deferring most of the work, and perhaps eliminating some redundant work.

			Lazy schedule maintenance does not improve the performance of RemoveAll.

			Changing the value of lazy can immediately affect the scheduler's wakeUpTime, so if
			you change lazy inside a task's Run() function, don't subsequently depend on the
			scheduler's wakeUpTime as an indication of "current time" until you return from that
			Run() function.

			Other than the above, lazy can be changed at any time without affecting the
			functionality of the scheduler.


		*/

		public bool lazy
		{
			get
			{
				return _lazy;
			}
			set
			{
				if (_lazy) // we were lazy (deferring schedule Cleanup)
				{
					if (value)
					{
						return;
					}
					// staying lazy, nothing to do.
					// getting strict
					if (_dirty)
					{
						cleanupSchedule();
					}
					_lazy = false;
					// NOTE, WE AREN'T CHECKING, HERE, TO FIND OUT IF WE ARE INSIDE THE Run() FUNCTION.
					// THAT'S BECAUSE SINCE, IN THE Run() FUNCTION, WE'VE ALREADY CHECKED FOR LAZY OR NOT.
					// IF WE ARE IN THE Run() FUNCTION, ON RETURNING FROM THIS FUNCTION lazyRefreshWakeUpTime WILL BE CALLED.
					strictRefreshWakeUpTime(); // set wakeUpTime to the time of the head task.
					_minWakeUpTime = NEVER; // pacify lazyRefreshWakeUpTime. It will be called if we are in the Run() function. 
				}
				// DON'T RELY ON this scheduler's wakeUpTime as a wall-clock time until the next Run() function is called.
				// we were strict
				else
				{
					if (!value)
					{
						return;
					}
					// staying strict, nothing to do.
					// getting lazy. the schedule is rigorously kept up-to-date if strict, so
					// get the _minWakeUpTime from the schedule. DON'T pull it from
					// wakeUpTime, as wakeUpTime is NOT slavishly kept up-to-date, even in
					// strict mode. That is, say, if we Add a couple of tasks, inside
					// the Run() function, wakeUpTime is stale until refreshed at the END of the
					// Run() function.
					if (_schedLen>1)
					//  set minWakeUpTime from the first task.
					{
						_minWakeUpTime = _schedule[1].wakeUpTime;
					}
					// no tasks
					else
					{
						_minWakeUpTime = NEVER;
					}
					_lazy = true;
					// NOTE, WE AREN'T CHECKING, HERE, TO FIND OUT IF WE ARE INSIDE THE Run() FUNCTION.
					// THAT'S BECAUSE SINCE, IN THE Run() FUNCTION, WE'VE ALREADY CHECKED FOR LAZY OR NOT.
					// IF WE ARE IN THE Run() FUNCTION, ON RETURNING FROM THIS FUNCTION strictRefreshWakeUpTime WILL BE CALLED.
					lazyRefreshWakeUpTime(); // make sure wakeUpTime is at least as early as _minWakeUpTime
				}
			}
		}

		/// Returns the task the scheduler is now running, or NULL if the scheduler is not currently running a task.
		/**
			Since there is only a single thread, if runningTask is not NULL, it means you are in
			code which is running inside runningTask's Run() function.

			If runningTask *is* NULL, it means that you are *not* inside the Run() function of
			any of this scheduler's scheduled tasks.

		*/

		public GsnTaskBase runningTask
		{
			get
			{
				return _runningTask;
			}
		}

		/// The time at which the scheduler will next Run() a task, or _is running_ a task.
		/**

		Since a scheduler *is* a task, whenever a scheduler is running a task, the scheduler
		itself is inside its *own* Run() function.  This can be very handy, because it means
		that the *scheduler's* wakeUpTime can serve as an easily accessible "wall clock"
		time in any function any task's Run() function might call. There's no need to pass
		wakeUpTime to any code which can access the scheduler. Such code can simply get
		wakeUpTime from the scheduler.

		Note, though, that if the code currently being executed is not in the context of the
		scheduler's Run() function (for instance, code which is running in a listener to a
		keyboard or mouse event), the scheduler's wakeUpTime is *not* a valid "wall
		clock," because it represents when the scheduler will *next* Run() a task&mdash;a time
		_in the future._

		It is easy to tell whether the scheduler is currently running a task&mdash;whether you
		are currently executing in the context of the scheduler's Run() function. Use the
		runningTask getter.

		The above comments about the scheduler's wakeUpTime are true, with one exception:
		if you change the scheduler's value of lazy. See lazy.

		*/


		public override int wakeUpTime
		{
			get
			{
				return base.wakeUpTime;
			}
			set
			{
				// never call this!
				throw new Exception("can't set wakeup time on a scheduler");
			}
		}
	
	};
}
