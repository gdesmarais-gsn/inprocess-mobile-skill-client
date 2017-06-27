using System;
using System.Collections.Generic;
using System.Text;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Primitive.Card
{
	/**
	 * A subset of GsnCards from the GsnCardDeck. Like GsnCardDeck, the pile contains a vector of cardIDs
	 * referencing to cards from the deck.
	 * 
	 */	
	public class GsnCardPile
	{
		protected GsnCardDeck _deck;		// Reference to the deck associated with this pile
		protected List<int> _cards;		// List of cards in this pile, -1 means it's an empty slot
		private bool _sortAscending;		// whether or not to sort rank in ascending order
		public int pileID { get; private set;}				// the pile id
		
		public GsnCardPile(GsnCardDeck deck, int pileID)
		{
			if (deck == null)
				throw new Exception("Cannot create a pile w/o a deck!");
			
			_deck = deck;
			_cards = new List<int>();
			this.pileID = pileID;
			
			// set up default sort parameters 
			_sortAscending = true;
		}

		public int count 
		{
			get
			{
				return _cards.Count;
			}
		}

		/**
		 * Add card to this pile. cards are stored in piles by cardID,
		 * which is used as a index into the deck.
		 * Note: AddCard() is not referencing AddCardAt() because classes that extend this class
		 * may be overriding AddCardAt().
		 * \param cardID the id of the card to add
		 */
		public void AddCard(int cardID)
		{
			_cards.Add(cardID);
			_deck.SetPileOfCard(cardID, this);
			CardAdded(cardID);
		}
		
		/**
		 * Add a card at a certain position in the pile
		 * \param slot: offset into the pile where the card is to be placed
		 * \param cardID: the id of the card to add
		 */
		public void AddCardAt(int slot, int cardID)
		{
			_cards.Insert(slot,cardID);
			_deck.SetPileOfCard(cardID, this);
			CardAdded(cardID);
		}
		
		/**
		 * Checks if a card is on top.
		 * \param slot of the cardID
		 * \return true if it's allowed
		 */		
		public bool SlotIsOnTop(uint slot)
		{
			return slot == _cards.Count - 1;
		}
		
		/**
		 * Remove the top card. 
		 * \return id of the card on top removed
		 */		
		public int RemoveTopCard()
		{
			return RemoveCardAt(_cards.Count - 1);
		}
		
		/**
		 * Remove a card from the pile by cardID. 
		 * \param cardID
		 */		
		public void RemoveCard(int cardID)
		{
			RemoveCardAt(GetCardSlot(cardID));
		}
		
		/**
		 * Remove card from the pile. 
		 * \param slot The slot of the card to remove.
		 * \return the cardID of the card removed
		 */
		public int RemoveCardAt(int slot)
		{
			if (_cards.Count <= 0)
				throw new Exception("No cards to remove.");
			
			if (slot == -1)
				throw new Exception("Bogus slot for card removal.");
			
			int returnValue = _cards[slot];
			_deck.SetPileOfCard(returnValue, null);
			_cards.RemoveAt(slot);
			
			CardRemoved(returnValue);		
			
			return returnValue;
		}
		
		/**
		 * Get the cardID at a specified slot in the pile
		 * \param slot the offset in the pile where the card is located
		 * \return the cardID of the card in the pile
		 */
		public int GetCardIDAt(int slot)
		{
			// Check the bounds
			if (slot >= _cards.Count)
				throw new Exception("Invalid slot!");
			return _cards[slot];
		}
		
		/**
		 * Get the card at a specified offset in the pile
		 * \param slot the offset in the pile where the card is located
		 * \return the card in the pile
		 */
		public GsnCard GetCardAt(int slot)
		{
			int cardID = GetCardIDAt(slot);
			
			return _deck.GetCard(cardID);
		}
		
		/**
		 * Get the slot of a given cardID
		 * \param cardID
		 * \return slot, -1 if card is not there
		 */		
		public int GetCardSlot(int cardID)
		{
			return _cards.IndexOf(cardID);
		}

		/// Get to top card id
		public int GetTopCardID()
		{
			if (_cards.Count == 0)
				throw new Exception("empty pile has no top card. Check for empty first.");
			
			return _cards[_cards.Count - 1];
			
		}
		
		/**
		 * Get the top card in the pile
		 * \return the card in the pile
		 */
		public GsnCard GetTopCard()
		{
			if (_cards.Count == 0)
				throw new Exception("empty pile has no top card. Check for empty first.");
			
			return GetCardAt(_cards.Count - 1);
		}
		
		/**
		 * \return Returns the top card if it's face up.
		 */
		public GsnCard GetTopCardIfFaceUp()
		{
			GsnCard retval = GetTopCard();
			
			if (retval.faceUp)
				return retval;	// it's face up. Return it.
			
			return null;	// it's not face up, return null.
		}
		
		/**
		 * Remove all cards from the pile 
		 */
		public void Clear()
		{
			while (_cards.Count > 0)
			{
				int cardID = RemoveTopCard();
				_deck.SetPileOfCard(cardID, null);
				CardRemoved(cardID);
			}
		}

		/// Is the pile empty.
		public bool isEmpty
		{
			get
			{
			 return _cards.Count == 0;
			}
		}
		
		/**
		 * Sort this pile into some kind of order
		 * \param sortAscending if true, sort cards from low to high
		 */
		public void Sort(bool sortAscending)
		{	
			_sortAscending = sortAscending;
			QuickSort(0, _cards.Count-1);
		}

		/**
		 * QuickSort implementation for sorting a pile into some order
		 */
		private void QuickSort(int left, int right)
		{
			int i = left;
			int j = right;
			int tmp;
			int pivotIndex = (left + right) / 2;
			int pivot = GetSortValue(_cards[pivotIndex]);
			
			while (i <= j)
			{
				while (GetSortValue(_cards[i]) < pivot)
					i++;
				while (GetSortValue(_cards[j]) > pivot)
					j--;
				if (i <= j)
				{
					tmp = _cards[i];
					_cards[i] = _cards[j];
					_cards[j] = tmp;
					i++;
					j--;
				}
			}

			int index = i;

			if (left < index - 1)
				QuickSort(left, index - 1);
			if (index < right)
				QuickSort(index, right);
		}

		/**
		 * Get the sort value of the card depending on _sortAscending.
		 */
		private int GetSortValue(int cardID)
		{
			GsnCard theCard = _deck.GetCard(cardID);
			return _sortAscending ? theCard.sortValue : -theCard.sortValue;
		}
		
		/// Shuffle the cards in the pile
		public void Shuffle(GsnRandom rand)
		{
			// TODO: going to need to be able to shuffle the array of cards
			_cards.Shuffle(rand);
		}
		
		/// This function will allow you to move cards in the pile. NOTE: This really should be done only around the time the cards are set up doing this once the game has the cards can be bad.
		public void SwapCardWith(int cardID, int spotID)
		{
			int cardIndex = GetCardSlot(cardID);
			if (cardIndex == -1 )
				throw new Exception("Card is not in this pile. Cannot move it!");
			int tempCard = GetCardIDAt(spotID);
			
			// Now swap the indices
			_cards[spotID] = cardID;
			_cards[cardIndex] = tempCard;

		}
		
		/**
		 * \return the pile indices as a string
		 */
		public string GetString(bool withFlags)
		{
			StringBuilder ret = new StringBuilder();
			for (int i = 0; i < _cards.Count; ++i)
			{
				if (i != 0)
					ret.Append(", ");

				int cardInfo = _cards[i];
				if (withFlags)
					cardInfo += (_deck.GetCard(_cards[i]).flags << 8);

				ret.Append(cardInfo);
			}
			return ret.ToString();
		}
	
		/**
		 * Get the number of cards in this pile of 'suit' suit
		 * \return the number of cards
		 */
		public int GetCountOfCardsInSuit(GsnStandardCard.Suits suit)
		{
			int count = 0;
			int length = this.count;
			GsnCard theCard = null;
			for (int i = 0; i < length; i++)
			{
				theCard = GetCardAt(i);
				if (theCard.type != GsnStandardCard.TYPE)
					continue;
				GsnStandardCard card = (GsnStandardCard)theCard;
				if (card.suit == suit)
					count++;
			}
			
			return count;
		}
		
		/**
		 * Get the highest card in this pile in the specified suit
		 * \param suit the suit to evaluate
		 * \return the card with the highest value in the suit
		 */
		public GsnStandardCard GetHighestCardInSuit(GsnStandardCard.Suits suit)
		{
			GsnStandardCard highestCard = null;
			int highestValue = 0;
			int length = this.count;
			
			for (int i = 0; i < length; i++)
			{
				GsnCard theCard= GetCardAt(i);
				if (theCard.type != GsnStandardCard.TYPE)
					continue;
				GsnStandardCard card = (GsnStandardCard)theCard;
				if (card.suit == suit && card.value > highestValue)
				{
					highestValue = card.value;
					highestCard = card;
				}
			}
			
			return highestCard;
		}
		
		/// This function is called whenever a card is added to this pile. Override it in your pile to make it do game specific things
		protected virtual void CardAdded(int cardID)
		{
			
		}

		/// This function is called whenever a card is removed from this pile. Override it in your pile to make it do game specific things
		protected virtual void CardRemoved(int cardID)
		{
			
		}

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
				theCard = GetCardAt(i);

				if (i > 0)
					result.Append(",");

				result.Append(theCard.PrettyString());
			}

			return result.ToString();
		}
	}
}
