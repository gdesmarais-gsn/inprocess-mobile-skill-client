using UnityEngine;
using System.Collections;

namespace GSN.Skill.Games.Tripeaks
{
	public class TikiCard: Card 
	{
		public override void setCard (int cardId, int index, PileID pileID, CardType cardType, DeckData deckData)
		{
			base.setCard (cardId, index, pileID, cardType, deckData);

			_cardBackRenderer.material.SetTexture("_MainTex", deckData._cardBackTexture);
		}
	}
}
