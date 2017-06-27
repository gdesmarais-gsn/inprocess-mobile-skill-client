using System;
using GSN.Skill.Games.Common.Events;

namespace GSN.Skill.Games.Tripeaks
{
	//These actions are what happened - a list of what the game did
	//NOT how to undo it
	public enum UndoEventType
	{
		BeginUndo = ModelEventType.ModelEventTypeCount,
		MoveCardFromTableauToWaste,
		MoveCardFromDealToWaste,
		MoveCardFromWasteToDeal,
		MoveCardFromRemovedToDeal,
		AddCardToFaceup,
		RemoveCardFromFaceup,
		UncoveredCard,
		ModifyStreak,
		FlippedCard,
		ModifyScore,
		ChangeType,
		RemoveCardFromWaste,
		RemoveCardFromTableau,
		OneShotWildClicked,
		HoldSpotClicked,
		HoldCardClicked,
		BurnRng,
		AdvanceTurnCounter,
		AdvanceTurnCard,
		UndoEventTypeCount
	};

	public static class UndoEventExtensions
	{
		public static UndoEventType undoEventType(this IModelEvent e)
		{
			return (UndoEventType)e.eventTypeInt;
		}
	}

	public struct BeginUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.BeginUndo; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int stateTimeMS;
		public int accumulatedPauseTime;
		public BeginUndoStep(int stateTime, int accumulatedPauseTime)
		{
			this.stateTimeMS = stateTime;
			this.accumulatedPauseTime = accumulatedPauseTime;
		}
	}

	public struct TableauToWasteUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.MoveCardFromTableauToWaste; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardIndex;
		public TableauToWasteUndoStep(int cardIndex)
		{
			this.cardIndex = cardIndex;
		}
	}

	public struct DealToWasteUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.MoveCardFromDealToWaste; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardID;
		public DealToWasteUndoStep(int cardID)
		{
			this.cardID = cardID;
		}
	}

	public struct WasteToDealUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.MoveCardFromWasteToDeal; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardID;
		public WasteToDealUndoStep(int cardID)
		{
			this.cardID = cardID;
		}
	}

	public struct RemovedToDealUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.MoveCardFromRemovedToDeal; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardID;
		public RemovedToDealUndoStep(int cardID)
		{
			this.cardID = cardID;
		}
	}

	public struct AddCardToFaceupUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.AddCardToFaceup; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardIndex;
		public AddCardToFaceupUndoStep(int cardIndex)
		{
			this.cardIndex = cardIndex;
		}
	}

	public struct RemoveCardFromFaceupUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.RemoveCardFromFaceup; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardIndex;
		public RemoveCardFromFaceupUndoStep(int cardIndex)
		{
			this.cardIndex = cardIndex;
		}
	}

	public struct UncoveredCardUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.UncoveredCard; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardIndex;
		public int cardCovered;
		public UncoveredCardUndoStep(int cardIndex, int cardCovered)
		{
			this.cardIndex = cardIndex;
			this.cardCovered = cardCovered;
		}
	}

	public struct ModifyStreakUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.ModifyStreak; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int streakCount;
		public ModifyStreakUndoStep(int streakCount)
		{
			this.streakCount = streakCount;
		}
	}

	public struct FlippedCardUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.FlippedCard; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardIndex;
		public FlippedCardUndoStep(int cardIndex)
		{
			this.cardIndex = cardIndex;
		}
	}

	public struct ModifyScoreUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.ModifyScore; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int streakPoints;
		public int cardID;
		public ModifyScoreUndoStep(int streakPoints, int cardID)
		{
			this.streakPoints = streakPoints;
			this.cardID = cardID;
		}
	}

	public struct ChangeTypeUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.ChangeType; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardIndex;
		public CardType cardType;
		public ChangeTypeUndoStep(int cardIndex, CardType cardType)
		{
			this.cardIndex = cardIndex;
			this.cardType = cardType;

		}
	}

	public struct RemoveCardFromWasteUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.RemoveCardFromWaste; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardID;
		public RemoveCardFromWasteUndoStep(int cardID)
		{
			this.cardID = cardID;
		}
	}

	public struct RemoveCardFromTableauUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.RemoveCardFromTableau; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardIndex;
		public RemoveCardFromTableauUndoStep(int cardIndex)
		{
			this.cardIndex = cardIndex;
		}
	}

	public struct OneShotWildClickedUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.OneShotWildClicked; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int numOneTimeWildsLeft;
		public OneShotWildClickedUndoStep(int numOneTimeWildsLeft)
		{
			this.numOneTimeWildsLeft = numOneTimeWildsLeft;
		}
	}

	public struct HoldSpotClickedUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.HoldSpotClicked; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardID;
		public HoldSpotClickedUndoStep(int cardID)
		{
			this.cardID = cardID;
		}
	}

	public struct HoldCardClickedUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.HoldCardClicked; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardID;
		public HoldCardClickedUndoStep(int cardID)
		{
			this.cardID = cardID;
		}
	}

	public struct BurnRNGUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.BurnRng; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public uint burnCount;
		public BurnRNGUndoStep(uint burnCount)
		{
			this.burnCount = burnCount;
		}
	}

	public struct AdvanceTurnCounterUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.AdvanceTurnCounter; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int turnCounter;
		public AdvanceTurnCounterUndoStep(int turnCounter)
		{
			this.turnCounter = turnCounter;
		}
	}

	public struct AdvanceTurnCardUndoStep : IModelEvent
	{
		public int eventTypeInt { get { return (int)UndoEventType.AdvanceTurnCard; } }
		public Type eventTypeEnum { get { return typeof(UndoEventType); } }
		public int cardID;
		public int activationCounter;
		public AdvanceTurnCardUndoStep(int cardID, int activationCounter)
		{
			this.cardID = cardID;
			this.activationCounter = activationCounter;
		}
	}
}
