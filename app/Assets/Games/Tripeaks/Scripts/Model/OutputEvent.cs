using System;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Events;

namespace GSN.Skill.Games.Tripeaks
{
	public enum ModelEventType
	{
		BuildPlayfield = CommonModelEventType.GameSpecificModelEventStart,
		CardClickResult,
		EndGame,
		FlipCard,
		GainDealCards,
		MoveCardToHold,
		RemoveCard,
		RemoveTrap,
		Reshuffle,
		ShowBanner,
		ShowReshuffleButton,
		UpdateDynamiteCounter,
		UpdateScore,
		UpdateStreak,
		BlockInput,
        FirstDealComplete,
        ReshuffleComplete,
		ModelEventTypeCount
	}

	public static class ModelEventExtensions
	{
		public static ModelEventType eventType(this IModelEvent e)
		{
			return (ModelEventType)e.eventTypeInt;
		}
	}

	public struct BuildPlayfieldEvent : IModelEvent
	{
		public List<int> cardIndices;
		public int eventTypeInt { get { return (int)ModelEventType.BuildPlayfield; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public BuildPlayfieldEvent(List<int> cardIndices)
		{
			this.cardIndices = new List<int>(cardIndices);
		}
	}

	public struct CardClickResultEvent : IModelEvent
	{
		public bool goodMove;
		public int cardID;
		public List<int> missedCards;
		public int streakLevel;
		public int eventTypeInt { get { return (int)ModelEventType.CardClickResult; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public CardClickResultEvent(bool goodMove, int cardID, List<int> missedCards = null, int streakLevel = -1)
		{
			this.goodMove = goodMove;
			this.cardID = cardID;
			this.streakLevel = streakLevel;
			this.missedCards = (missedCards == null) ? null : new List<int>(missedCards);
		}
	}

	public struct EndGameEvent : IModelEvent
	{
		public int matches;
		public int streaks;
		public int time;
		public int endReason;
		public int eventTypeInt { get { return (int)ModelEventType.EndGame; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public EndGameEvent(int matches, int streaks, int time, int endReason)
		{
			this.matches = matches;
			this.streaks = streaks;
			this.time = time;
			this.endReason = endReason;
		}

		public int totalScore { get { return matches + streaks + time; } }
	}

	public struct FlipCardEvent : IModelEvent
	{
		public List<int> cardIndices;
		public int eventTypeInt { get { return (int)ModelEventType.FlipCard; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public FlipCardEvent(List<int> cardIndices)
		{
			this.cardIndices = new List<int>(cardIndices);
		}
	}

	public struct GainDealCardsEvent : IModelEvent
	{
		public List<int> newDealCards;
		public int eventTypeInt { get { return (int)ModelEventType.GainDealCards; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public GainDealCardsEvent(List<int> newDealCards)
		{
			this.newDealCards = new List<int>(newDealCards);
		}
	}

	public struct MoveCardToHoldEvent : IModelEvent
	{
		public int cardID;
		public int eventTypeInt { get { return (int)ModelEventType.MoveCardToHold; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public MoveCardToHoldEvent(int cardID)
		{
			this.cardID = cardID;
		}
	}

	public struct RemoveCardEvent : IModelEvent
	{
		public int cardID;
		public int targetCardID;
		public int eventTypeInt { get { return (int)ModelEventType.RemoveCard; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public RemoveCardEvent(int cardID, int targetCardID = -1)
		{
			this.cardID = cardID;
			this.targetCardID = targetCardID;
		}
	}

	public struct RemoveTrapEvent : IModelEvent
	{
		public int cardID;
		public int eventTypeInt { get { return (int)ModelEventType.RemoveTrap; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public RemoveTrapEvent(int cardID)
		{
			this.cardID = cardID;
		}
	}

	public struct ReshuffleEvent : IModelEvent
	{
		public string reshuffledCards;
		public int reshuffleTimePenalty;
		public int eventTypeInt { get { return (int)ModelEventType.Reshuffle; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public ReshuffleEvent(string reshuffledCards, int reshuffleTimePenalty)
		{
			this.reshuffledCards = reshuffledCards;
			this.reshuffleTimePenalty = reshuffleTimePenalty;
		}
	}

	public struct ShowBannerEvent : IModelEvent
	{
		public int bannerFlag;
		public int eventTypeInt { get { return (int)ModelEventType.ShowBanner; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public ShowBannerEvent(int bannerFlag)
		{
			this.bannerFlag = bannerFlag;
		}
	}

	public struct ShowReshuffleButtonEvent : IModelEvent
	{
		public int eventTypeInt { get { return (int)ModelEventType.ShowReshuffleButton; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
	}

    public struct FirstDealCompleteEvent : IModelEvent
    {
        public int eventTypeInt { get { return (int)ModelEventType.FirstDealComplete; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
    }

    public struct ReshuffleCompleteEvent : IModelEvent
    {
        public int eventTypeInt { get { return (int)ModelEventType.ReshuffleComplete; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
    }

    public struct UpdateDynamiteCounterEvent : IModelEvent
	{
		public int cardID;
		public int counterValue;
		public int eventTypeInt { get { return (int)ModelEventType.UpdateDynamiteCounter; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public UpdateDynamiteCounterEvent(int cardID, int counterValue)
		{
			this.cardID = cardID;
			this.counterValue = counterValue;
		}
	}

	public struct UpdateScoreEvent : IModelEvent
	{
		public int score;
		public int pointsEarned;
		public int streakCount;
		public int cardID;
		public int eventTypeInt { get { return (int)ModelEventType.UpdateScore; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public UpdateScoreEvent(int score, int pointsEarned, int streakCount, int cardID)
		{
			this.score = score;
			this.pointsEarned = pointsEarned;
			this.streakCount = streakCount;
			this.cardID = cardID;
		}
	}

	public struct UpdateStreakEvent : IModelEvent
	{
		public int currentStreak;
		public int eventTypeInt { get { return (int)ModelEventType.UpdateStreak; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public UpdateStreakEvent(int currentStreak)
		{
			this.currentStreak = currentStreak;
		}
	}

	public struct BlockInputEvent : IModelEvent
	{
		public int blockTimeMS;
		public int eventTypeInt { get { return (int)ModelEventType.BlockInput; } }
		public Type eventTypeEnum { get { return typeof(ModelEventType); } }
		public BlockInputEvent(int timeMS)
		{
			this.blockTimeMS = timeMS;
		}
	}
}
