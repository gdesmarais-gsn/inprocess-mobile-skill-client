using System;
using GSN.Skill.Games.Common.Events;

namespace GSN.Skill.Games.Common.Primitive.Card
{
	public enum CardModelEventType
	{
		DealCards = CommonModelEventType.CardPrimitiveModelEventStart
	}

	public static class CardModelEventExtensions
	{
		public static CardModelEventType cardEventType(this IModelEvent e)
		{
			return (CardModelEventType)e.eventTypeInt;
		}
	}

	public struct DealCardsEvent : IModelEvent
	{
		public string deck;
		public int eventTypeInt { get { return (int)CardModelEventType.DealCards; } }
		public Type eventTypeEnum { get { return typeof(CardModelEventType); } }
		public DealCardsEvent(string deck)
		{
			this.deck = deck;
		}
	}
}
