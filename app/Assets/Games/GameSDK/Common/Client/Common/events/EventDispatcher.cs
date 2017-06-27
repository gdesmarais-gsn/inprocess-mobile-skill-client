using System;
using System.Collections.Generic;
using System.Linq;
using GSN.Skill.Games.Common.AssemblyExtensionsWorkaround;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Events
{
	/// Allows listeners to register for notifications in the form of IModelEvents
	public class EventDispatcher
	{
		/// <summary>
		/// List implementation that allows delaying of modifications to the "master" list until ready.
		/// </summary>
		private class PendingList<T> : List<T>
		{
			private int _lockCounter = 0;
			private List<T> _pendingAdds = new List<T>();
			private List<T> _pendingRemoves = new List<T>();

			public new void Add(T item)
			{
				if (_lockCounter == 0)
				{ // we're not locked, so just add as usual
					base.Add (item);
					return;
				}

				// hide the normal add behavior by remembering what was requested to be added
				_pendingAdds.Add(item);
			}

			public new void Remove(T item)
			{
				if (_lockCounter == 0)
				{ // we're not locked, so just remove as usual
					base.Remove(item);
					return;
				}

				// hide the normal remove behavior by remembering what was requested to be removed
				_pendingRemoves.Add(item);
			}
				
			/// <summary>
			/// "Lock" the master list to hold off pending modifications until fully "unlocked".
			/// </summary>
			public void Lock()
			{
				++_lockCounter;
			}

			/// <summary>
			/// "Unlock" the master list to allow pending modifications if no longer "locked".
			/// </summary>
			public void Unlock()
			{
				if (--_lockCounter > 0)
					return; // still locked

				// fully unlocked, so resolve the pending adds/removes in the "master" list
				AddRange(_pendingAdds);
				RemoveAll(_pendingRemoves.Contains);

				_pendingAdds.Clear();
				_pendingRemoves.Clear();
			}
		}

		//Map of enum type to which eventTypeInts use that enum
		private static readonly Dictionary<Type, List<int>> EVENTS = new Dictionary<Type, List<int>>();
		static void InitializeEVENTS()
		{
			// This is a hack to make sure that whenever a new GameModel is loaded into the MonoBox,
			// all its event enum types go into the EVENTS dictionary.
			// This function used to be a static constructor, but because of that, it was only being called
			// when the FIRST GameModel was getting loaded into the MonoBox.
			// This is a HACK because now InitializeEVENTS might get called many times when it 
			// SHOULDN'T be.
			EVENTS.Clear(); // CLEAR OUT EVENTS BECAUSE WE ARE REPOPULATING IT.

			//Get all types that implement IModelEvent
			//http://stackoverflow.com/questions/26733/getting-all-types-that-implement-an-interface
			IEnumerable<Type> types = AppDomain.CurrentDomain.GetAssemblies().
					SelectMany(s => s.GetLoadableTypes()).
					Where(p => typeof(IModelEvent).IsAssignableFrom(p)).
					Where(p => !p.IsInterface);

			//Record all IModelEvent types for use in EventDispatcher's constructor
			foreach (Type type in types)
			{
				//Create a temporary object of type type to get its eventTypeEnum and eventTypeInt
				IModelEvent e = (IModelEvent)Activator.CreateInstance(type);

				List<int> eventTypeInts;
				if (! EVENTS.TryGetValue(e.eventTypeEnum, out eventTypeInts))
				{
				//	GsnDebug.Log("Adding", e.eventTypeEnum.FullName, "to EVENTS");

					eventTypeInts = new List<int>();
					EVENTS.Add(e.eventTypeEnum, eventTypeInts);
				}

				// GsnDebug.Log("Adding", e.eventTypeInt, "to", e.eventTypeEnum.FullName);

				eventTypeInts.Add(e.eventTypeInt);
			}
		}

		/// Other classes can register for events using this function signature
		public delegate void EventListener(IModelEvent e);
		//_eventListeners[e.eventTypeInt] is a list of functions to dispatch
		// This is using a list versus using c# delegates or events.  This is because when initializing 
		// a delegate, you cannot specifiy the initial size of the functions added to its internal list.
		// TODO: allow the ability to specify the size of the lists. 
		private Dictionary<int, PendingList<EventListener>> _eventListeners;

		// pass in an array of enum Types. Each type represents a set of events.
		public EventDispatcher(params Type[] eventTypeEnums)
		{
			// THIS IS A HACK. InitializeEVENTS ideally should be called on each LOAD of the GameModel code.
			// Not on every construction of an EventDispatcher.
			EventDispatcher.InitializeEVENTS();

			_eventListeners = new Dictionary<int, PendingList<EventListener>>();

			// for each eventTypeEnum Type
			for (int eventTypeEnumIndex = 0; eventTypeEnumIndex < eventTypeEnums.Length; ++eventTypeEnumIndex)
			{
				List<int> eventTypeInts;
				if (!EVENTS.TryGetValue(eventTypeEnums[eventTypeEnumIndex], out eventTypeInts))
				{
					GsnDebug.LogWarning(eventTypeEnums[eventTypeEnumIndex], "Has no entry in Events");
					continue;
				}
				for (int eventTypeIntIndex = 0; eventTypeIntIndex < eventTypeInts.Count; ++eventTypeIntIndex)
				{
					int eventTypeInt = eventTypeInts[eventTypeIntIndex];

					//This will throw if any of eventTypeEnums contain IModelEvents with colliding eventTypeInts.  
					// MAKE SURE THEY'RE ALL UNIQUELY NUMBERED.
					_eventListeners.Add(eventTypeInt, new PendingList<EventListener>());
				}
			}
		}

		/// Send this event to every object that has registered to listen for e's eventType
		public void DispatchEvent(IModelEvent e)
		{
			PendingList<EventListener> listeners = _eventListeners[e.eventTypeInt];

			// delay adds/removes during a dispatch in order to prevent modifying the list of event listeners while iterating over them
			listeners.Lock();

			for (int i = 0; i < listeners.Count; ++i)
			{
				listeners[i](e);
			}

			// we're done dispatching everything, so we can release our lock now
			listeners.Unlock();
		}

		[System.Obsolete("Do not use any more. Use DispatchEvent")]
		public void dispatchEvent(IModelEvent e)
		{
			DispatchEvent (e);
		}

		public void DispatchEvent(int eventTypeInt, Func<IModelEvent> eventCreationFunc)
		{	
			if (!HasEventListener(eventTypeInt))
				return;
	
			DispatchEvent(eventCreationFunc());
		}

		/**
		\brief Register a function to receive a callback every time an event of the given type is dispatched

		T is the enum type of eventType.  Can be omitted and C# will infer it:
		\code
		void playSound(IModelEvent e) { ... }
		...
		myEventDispatcher.addEventListener(BaseEventType.PlaySound, playSound);
		\endcode
		\param eventType The type of event to listen for
		\param listener The callback function
		*/
		public void AddEventListener<T>(T eventType, EventListener listener) where T : struct, IConvertible
		{
#if DEBUG
			if (_eventListeners[Convert.ToInt32(eventType)].Contains(listener))
				throw new ArgumentException(eventType + " already broadcasts to " + listener);
#endif

			_eventListeners[Convert.ToInt32(eventType)].Add(listener);
		}

		[System.Obsolete("Do not use any more. Use AddEventListener")]
		public void addEventListener<T>(T eventType, EventListener listener) where T : struct, IConvertible
		{
			AddEventListener (eventType, listener);
		}

		/**
		\brief Removes previously registered event listener

		\see addEventListener
		*/
		public void RemoveEventListener<T>(T eventType, EventListener listener) where T : struct, IConvertible
		{
			_eventListeners[Convert.ToInt32(eventType)].Remove(listener);
		}

		[System.Obsolete("Do not use any more. Use RemoveEventListener")]
		public void removeEventListener<T>(T eventType, EventListener listener) where T : struct, IConvertible
		{
			RemoveEventListener (eventType, listener);
		}


		/**
		\brief See if any objects have requested to listen for events of type eventType

		\see addEventListener
		*/
		public bool HasEventListener<T>(T eventType) where T : struct, IConvertible
		{
			PendingList<EventListener> listeners = _eventListeners[Convert.ToInt32(eventType)];
			return listeners.Count > 0;
		}
	}
}
