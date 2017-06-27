using System;

namespace GSN.Skill.Games.Common.Events
{
	/**
	\brief Unique output event types

	In order to serialize and deserialize properly, each output event must have
	a unique number, represented by this enum, any other enums defined in other assemblies, and
	one or more game-specific enums.
	*/
	public enum CommonModelEventType
	{
		EndGame = 0,
		InputComplete,
		Sync,
		UpdateClock,
		ScoreUpdate,

		///Starting number for card primitive events enum
		CardPrimitiveModelEventStart = 1000,
		///Starting number for interaction engine events enum
		InteractionEngineModelEventStart = 2000,
		///Starting number for game-specific events enums
		GameSpecificModelEventStart = Int32.MinValue
	}

	public static class CommonModelEventExtensions
	{
		/// Returns this IModelEvent's type as a CommonModelEventType
		public static CommonModelEventType commonEventType(this IModelEvent e)
		{
			return (CommonModelEventType)e.eventTypeInt;
		}
	}

	public struct EndGameTimeEvent : IModelEvent
	{
		public int gameTime;

		public int eventTypeInt { get { return (int)CommonModelEventType.EndGame; } }
		public Type eventTypeEnum { get { return typeof(CommonModelEventType); } }
		public EndGameTimeEvent(int gameTime)
		{
			this.gameTime = gameTime;
		}
	}

	/**
	\brief The game has ended and no more input messages will be processed.

	At this point, the view will notarize the game log to prove the user has finished playing at this time.
	*/
	public struct InputCompleteEvent : IModelEvent
	{
		public int gameTime;
		public int eventTypeInt { get { return (int)CommonModelEventType.InputComplete; } }
		public Type eventTypeEnum { get { return typeof(CommonModelEventType); } }
		public InputCompleteEvent(int gameTime)
		{
			this.gameTime = gameTime;
		}
	}	

	/// Force the model to catch up to the current time.
	public struct SyncEvent : IModelEvent
	{
		public int gameTime;
		public int eventTypeInt { get { return (int)CommonModelEventType.Sync; } }
		public Type eventTypeEnum { get { return typeof(CommonModelEventType); } }
		public SyncEvent(int gameTime)
		{
			this.gameTime = gameTime;
		}
	}

	/// Update the view with how much time is left
	public struct UpdateClockEvent : IModelEvent
	{
		public int remainingMS;
		public int eventTypeInt { get { return (int)CommonModelEventType.UpdateClock; } }
		public Type eventTypeEnum { get { return typeof(CommonModelEventType); } }
		public UpdateClockEvent(int remainingMS)
		{
			this.remainingMS = remainingMS;
		}
	}

	public struct ScoreUpdateEvent : IModelEvent
	{
		public int score;
		public int eventTypeInt { get { return (int)CommonModelEventType.ScoreUpdate; } }
		public Type eventTypeEnum { get { return typeof(CommonModelEventType); } }
		public ScoreUpdateEvent(int score)
		{
			this.score = score;
		}
	}
}
