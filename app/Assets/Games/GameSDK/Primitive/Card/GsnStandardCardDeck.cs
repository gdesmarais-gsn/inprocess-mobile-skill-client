using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Primitive.Card
{
    /**
     * Extends the GsnCardDeck functionality by defining a standard-52 deck of cards.
     */
    public class GsnStandardCardDeck : GsnCardDeck
    {
	    // members to hold suit and rank names.
	    public GsnStandardCardDeck() : base()
	    {
	    }

	    /**
	     * Utility function to fill the deck with a standard deck of cards
	     *\param aceHigh Is aces high for this deck? 
	     *\param suit0 first suit in order
	     *\param suit1 second suit in order
	     *\param suit2 third suit in order
	     *\param suit3 fourth suit in order
	     */
		public void Initialize(bool aceHigh, GsnStandardCard.Suits suit0, GsnStandardCard.Suits suit1, GsnStandardCard.Suits suit2, GsnStandardCard.Suits suit3)
	    {
		    int value;
		    int sortValue;
			
		    // Assign sort values to value array
		    List<int> suitValues = new List<int>((int)GsnStandardCard.Suits.Count);
			suitValues.Insert((int)suit0, 0);
			suitValues.Insert((int)suit1, 1);
			suitValues.Insert((int)suit2, 2);
			suitValues.Insert((int)suit3, 3);
			
		    // add the standard pack of cards to the deck
			for (GsnStandardCard.Suits suit = 0; suit < GsnStandardCard.Suits.Count; ++suit)
		    {
			    for (GsnStandardCard.Ranks rank = GsnStandardCard.Ranks.Ace; rank <= GsnStandardCard.Ranks.King; ++rank)
			    {
				    // calculate the value. if the deck is ace high, then adjust accordingly
					value = (aceHigh && rank == GsnStandardCard.Ranks.Ace) ? (int)GsnStandardCard.Ranks.King + 1 : (int)rank;
					
				    // also calculate the sort value based on the suit value and card value
				    // sort value is NOT necessarily strictly between 0 and 51
					sortValue = suitValues[(int)suit] * ((int)GsnStandardCard.Ranks.King) + value;
					
					AddCard(CreateCard(suit, rank, value, 0, sortValue));
				}
		    }
	    }
		
	    public int GetCardIDFromRankAndSuit(GsnStandardCard.Ranks rank, GsnStandardCard.Suits suit)
	    {
			return (int)suit * 13 + rank - GsnStandardCard.Ranks.Ace; // minus RANK_ACE because RANK_ACE is the first rank in each suit
	    }
		
		virtual public GsnCard CreateCard(GsnStandardCard.Suits suit, GsnStandardCard.Ranks rank, int value, int flags, int sortV)
		{
			 return new GsnStandardCard(suit, rank, value, flags, sortV);
		} 
    }
}

