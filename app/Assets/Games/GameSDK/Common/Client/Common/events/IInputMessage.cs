using System;

namespace GSN.Skill.Games.Common.Events
{
	/// A message from the view to the model
	public interface IInputMessage
	{
		/**
		\brief Unique int representing which type of message this is.
		\see CommonInputMessageType
		For example, if your game has an input enum called MyInputMessageType, each of your IInputMessages should
		return a different member of that enum, cast to an int.
		\code
		public int msgTypeInt { get { return (int)MyInputMessageType.FrobGizmo; } }
		\endcode
		*/
		int msgTypeInt { get; }
		
		/**
		\brief Type of the enum used to implement msgTypeInt.  Used to prevent msgTypeInt collisions between games.
		Using the above msgTypeInt example, this would be
		\code
		public Type msgTypeEnum { get { return typeof(MyInputMessageType); } }
		\endcode
		*/
		Type msgTypeEnum { get; }

	}
}
