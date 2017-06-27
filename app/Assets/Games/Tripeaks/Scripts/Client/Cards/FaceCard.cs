using GSN.Skill.Games.Common.Primitive.Card;
using UnityEngine;

namespace GSN.Skill.Games.Tripeaks
{
	public class FaceCard : Card 
	{

		public SkinnedMeshRenderer _suitRenderer;
		public SkinnedMeshRenderer _numberRenderer;

		public Texture[] _suitTextures;
		public Texture[] _numberTextures;
		
		public override void setCard (int cardId, int index, PileID pileID, CardType cardType, DeckData deckData)
		{
			base.setCard (cardId, index, pileID, cardType, deckData);

			int suit = _value / CARDS_IN_SUIT;
			int number = _value % CARDS_IN_SUIT;

			_numberRenderer.material.SetTexture ("_MainTex", deckData._blackNumberTextures[number]);

			if (suit == 1 || suit == 3)// todo use gamemodel const
				_numberRenderer.material.SetTexture ("_MainTex", deckData._redNumberTextures[number]);
			
			_suitRenderer.material.SetTexture ("_MainTex", deckData._suitTextures[suit]);
			_cardBackRenderer.material.SetTexture("_MainTex", deckData._cardBackTexture);
		}

		public override void setCardTint(int timeOfDay)
		{
			base.setCardTint(timeOfDay);

			_suitRenderer.material.SetColor("_Color", _timeOfDayTint[timeOfDay]);
			_numberRenderer.material.SetColor("_Color", _timeOfDayTint[timeOfDay]);
		}
		
		public override string GetPrettyString()
		{
			string retval = "";
			
			GsnStandardCard.Suits suit = (GsnStandardCard.Suits)(_value / CARDS_IN_SUIT);
			GsnStandardCard.Ranks number = (GsnStandardCard.Ranks)(_value % CARDS_IN_SUIT);
			++number;

            switch(number)
            {
	            case GsnStandardCard.Ranks.Jack:
		            retval = "J";
		            break;
				case GsnStandardCard.Ranks.Queen:
		            retval = "Q";
		            break;
				case GsnStandardCard.Ranks.King:
		            retval = "K";
		            break;
				case GsnStandardCard.Ranks.Ace:
		            retval = "A";
		            break;
	            default:
		            retval = ((int)number).ToString();
					break;
            }
			
            switch(suit) 
            {
	            case GsnStandardCard.Suits.Club:
		            retval += "C";
	            break;
				case GsnStandardCard.Suits.Heart:
		            retval += "H";
	            break;
				case GsnStandardCard.Suits.Diamond:
		            retval += "D";
	            break;
				case GsnStandardCard.Suits.Spade:
		            retval += "S";
	            break;
            }

			retval += base.GetPrettyString();			
            return retval;	    		
		}
	}
}
