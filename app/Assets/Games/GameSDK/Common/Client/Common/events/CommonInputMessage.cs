using System;

namespace GSN.Skill.Games.Common.Events
{
	/**
	\brief Unique input message types
	
	In order to serialize and deserialize properly, each input message must have
	a unique number, represented by this enum, any other enums defined in other assemblies, and
	one ore more game-specific enums.
	
	DO NOT CHANGE NUMBERS OF ENUM MEMBERS (by, for example, deleting entries).  This will invalidate previously saved replays.
	*/
	public enum CommonInputMessageType {
		CoreServer = 0,
		UserAborted,

		//Placeholder starting number for card primitives messages enum (does not currently exist)
		CardPrimitiveInputMessageStart = CommonModelEventType.CardPrimitiveModelEventStart,

		///Starting number for interaction engine messages enum
		InteractionEngineInputMessageStart = CommonModelEventType.InteractionEngineModelEventStart,
		///Starting number for game-specific messages enums
		GameSpecificInputMessageStart = CommonModelEventType.GameSpecificModelEventStart
	}

	public static class CommonInputMessageExtensions
	{
		/// Returns this IInputMessage's type as a CommonInputMessageType
		public static CommonInputMessageType CommonMsgType(this IInputMessage msg)
		{
			return (CommonInputMessageType)msg.msgTypeInt;
		}
	}

	/// Debugging message used to test what happens on a server when the server crashes and dumps core
	public struct CoreServerMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)CommonInputMessageType.CoreServer; } }
		public Type msgTypeEnum { get { return typeof(CommonInputMessageType); } }
	}

	/// User requests to abort the game before it has been completed (typically using the X button in a corner)
	public struct UserAbortedMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)CommonInputMessageType.UserAborted; } }
		public Type msgTypeEnum { get { return typeof(CommonInputMessageType); } }
	}
}
