using System;
using GSN.Skill.Games.Common.Events;

namespace GSN.Skill.Games.Tripeaks
{
	public enum InputMessageType {
		CardClicked = CommonInputMessageType.GameSpecificInputMessageStart,
		Deal,
		Hold,
		Reshuffle,
		Wild,
#if DEBUG
		CheatAddCard,
		CheatWinNow,
		CheatUndo,
		CheatIncrementStreak,
		CheatResetStreak,
		CheatToggleStreakResetLock,
#endif
	}

	public static class InputMessageExtensions
	{
		public static InputMessageType msgType(this IInputMessage msg)
		{
			return (InputMessageType)msg.msgTypeInt;
		}
	}

	public struct CardClickedMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)InputMessageType.CardClicked; } }
		public Type msgTypeEnum { get { return typeof(InputMessageType); } }
		public int cardIndex;
		public CardClickedMessage(int cardIndex)
		{
			this.cardIndex = cardIndex;
		}
	}

	public struct DealMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)InputMessageType.Deal; } }
		public Type msgTypeEnum { get { return typeof(InputMessageType); } }
	}

	public struct HoldMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)InputMessageType.Hold; } }
		public Type msgTypeEnum { get { return typeof(InputMessageType); } }
	}

	public struct ReshuffleMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)InputMessageType.Reshuffle; } }
		public Type msgTypeEnum { get { return typeof(InputMessageType); } }
	}

	public struct WildMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)InputMessageType.Wild; } }
		public Type msgTypeEnum { get { return typeof(InputMessageType); } }
	}

#if DEBUG
	public struct CheatAddCardMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)InputMessageType.CheatAddCard; } }
		public Type msgTypeEnum { get { return typeof(InputMessageType); } }
		public int flags;
		public CheatAddCardMessage(int flags)
		{
			this.flags = flags;
		}
	}

	public struct CheatWinNowMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)InputMessageType.CheatWinNow; } }
		public Type msgTypeEnum { get { return typeof(InputMessageType); } }
	}

	public struct CheatUndoMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)InputMessageType.CheatUndo; } }
		public Type msgTypeEnum { get { return typeof(InputMessageType); } }
	}

	public struct CheatIncrementStreakMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)InputMessageType.CheatIncrementStreak; } }
		public Type msgTypeEnum { get { return typeof(InputMessageType); } }
	}

	public struct CheatResetStreakMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)InputMessageType.CheatResetStreak; } }
		public Type msgTypeEnum { get { return typeof(InputMessageType); } }
	}

	public struct CheatToggleStreakResetLockMessage : IInputMessage
	{
		public int msgTypeInt { get { return (int)InputMessageType.CheatToggleStreakResetLock; } }
		public Type msgTypeEnum { get { return typeof(InputMessageType); } }
	}
#endif
}
