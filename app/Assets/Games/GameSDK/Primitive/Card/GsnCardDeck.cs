using System;
using System.Collections.Generic;
using System.Text;

namespace GSN.Skill.Games.Common.Primitive.Card
{
	/**
	 * The card deck represents the total set of cards in the game. A card deck contains
	 * a vector of GsnCards. The order of the cards in the deck never changes.
	 * Each card's index into the deck is its ID. The deck should only be used
	 * to reference cards that are in piles. Refer to a card by cardID.
	 * A deck is not necessarily a standard deck. You could have a deck with 4 suits of
	 * spades A-K to play Spider Solitaire.
	 */	
	public class GsnCardDeck
	{
        protected List<GsnCard> _cards; // List of cards
		
        public GsnCardDeck()
        {
			_cards = new List<GsnCard>();
        }

        /**
         * \brief Add a card to the deck
         * \param card to add
         */
        public void AddCard(GsnCard card)
        {
	        // Push a new card onto the list
	        _cards.Add(card);
        }

        /**
         * \brief Get a card from the deck.
         * \param cardID the index of the card into the deck.
         * \return the card requested
         */
        public GsnCard GetCard(int cardID)
        {
	        return _cards[cardID];
        }

		/**
		 * \brief Get a card's id
		 * \param card The card to find
		 * \return the ID of the card requested
		 */
		public int GetCardID(GsnCard card)
		{
			return _cards.IndexOf(card);
		}
		
        /**
         * \return the number of cards in the deck
         */
        public int count
        {
        	get
        	{
	        	return _cards.Count;
	        }
        }
		
        /**
         * \return the card deck as a string (to be passed to the UI)
         */
        public override string ToString()
        {			
	        int length = _cards.Count;
			
	        // send the number of cards in the deck
	        StringBuilder result = new StringBuilder();
			
	        GsnCard theCard;
	        // loop through all cards in the deck
	        for (int i = 0; i < length; i++)
	        {
		        // get the card in the deck at the current location
		        theCard = GetCard(i);
				
		        if (i > 0)
			        result.Append(",");
				
		        result.Append(theCard.ToString());
	        }
			
	        return result.ToString();
        }
		
		/**
		*\brief sets the pile for a card
		*\param cardID id of the card to set
		*\param pile pile to add the card to. 
		*/
        public void SetPileOfCard(int cardID, GsnCardPile pile)
        {
	        GsnCard theCard = GetCard(cardID);
	        theCard.pile = pile;
        }
		
        /// this function takes all the cards out of their piles, and sets each card's flags to zero.
        public void Reset()
        {
	        int len = _cards.Count;
			
	        int i;
			
	        GsnCard theCard;
			
	        GsnCardPile thePile;
			
	        for (i = 0; i < len; ++i)
	        {
		        theCard = _cards[i];	// get the card.
				
		        thePile = theCard.pile;	// get its pile.
				
		        if (thePile != null)	// if it's in a pile
		        {
			        thePile.Clear();	// empty the pile of ALL of its cards. 
		        }
				
		        theCard.ClearFlags();	// clear the flags of the card.
	        }
        }
	}
}

