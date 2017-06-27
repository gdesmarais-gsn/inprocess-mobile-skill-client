using System;

namespace GSN.Skill.Games.Common.Primitive.Card
{
	/**
	 * A card used for card games on the state side.
	 * Contains the following information:
	 * ~Suit		- The suit of the card represented by a constant
	 * ~Rank		- The rank of the card represented by a number between RANK_ACE and RANK_KING
	 * ~Value		- The value of the card represented by a number (can vary based on game)
	 * ~Sort Value	- This value sets where the card should be placed in any given pile
	 * 
	 * If a game needs additional flags for a card, please add a flag constant to the game
	 * and set the first new flag to the following: "GSN_CARD_FLAG_NEXT << 1".
	 * 
	 * A card can only be contained in a single pile at a time: if you try to add a card to a pile without
	 * first removing it from the current pile, then the GsnCard class will throw an error.
	 */	
	public class GsnCard
	{    		
		// Base flags for a GsnCard
		public const int FLAG_FACE_UP = 1<<0; // is the card face up?
		// If you add a new flag, remember to replace GSN_CARD_FLAG_NEXT!
		public const int FLAG_NEXT = FLAG_FACE_UP<<1;  // THE FIRST FLAG NOT YET USED
		
		private GsnCardPile _pile;	// current pile card is in
		
		public string type { get; private set;}
		public int flags { get; private set;}
		public int sortValue { get; private set;}
		
		public GsnCard(string type, int flags, int sortValue)
		{
			this.type = type;
            this.flags = flags;
			this.sortValue = sortValue;
		}
		
		/// This function just prints out the flags. Override this in other classes to print more data
		public override string ToString()
		{
            return flags.ToString();								// any number of characters for the flags
		}

		/// This function will allow you to rewind time back for events.
		public virtual void Rewind(
			int stateTimeMS ///< Time in MS to rewind to.
			)
		{
		}
		
		/// This function will print a more verbose version of information with for the card. 
		public virtual string PrettyString()
		{
            return flags.ToString();
		}
		
		/**
		 * \brief Checks if a given flag is toggled on or off for the card 
		 * \param bit
		 * \return true if the bit exists, false otherwise.
		 */		
		public bool HasFlag(int bit) 
		{
			return (flags & bit) != 0; 
		}
		
		/**
		 * \brief Sets a flag to either on or off
		 * \param bit of the flag that wants to be set
		 * \param flag
		 */		
		public void SetFlag(int bit, bool flag)
		{
            if (flag)
	            flags |= bit;
            else
	            flags &= ~bit;
		}
		
		/// Clear the flags for the card		
		public void ClearFlags() 
		{
            flags = 0;
		}
		
		/**
		 * \brief Current pile the card is contained in.
		 */		
		public GsnCardPile pile
		{ 
			get 
			{
				return _pile; 
			}
			set
			{
				if (_pile != null && value != null)
					throw new Exception("Attempting to add card to a pile when it's already in a pile.");
                _pile = value;
			}
		}

		/**
		 * \brief Helper getter method to see if a faceUp boolean has been toggled on the card
		 * \return true if card is faceUp, false otherwise.
		 */		
		public bool faceUp
		{
			get
			{
				return HasFlag(FLAG_FACE_UP);
			}
			set
			{
				SetFlag(FLAG_FACE_UP, value);
			}
		}
	}
}
