using System.Text;

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
	public class GsnStandardCard : GsnCard
	{
		private const string HEX_DIGITS = "0123456789ABCDEF";
		public const string TYPE = "StandardCard";

		/// Constants representing the stand 4 suits.		
		public enum Suits
		{
			Club = 0,
			Diamond,
			Spade,
			Heart,
			Count,
		};

		private const int RED_MASK = 1;	// internal constant.
		
		public const int SUIT_SIZE = 13;
		
		/// Constants representing the lowest card (ace) and the highest card (king)
		public enum Ranks
		{
			Ace = 1,
			Two,
			Three,
			Four,
			Five,
			Six,
			Seven,
			Eight,
			Nine,
			Ten,
			Jack,
			Queen,
			King,
		};
		    		
		public Suits suit { get; private set;}			// Suit for this card
		public Ranks rank { get; private set;}			// Rank for this card
		public int value { get; protected set;}		// Point value of this card
		
		public GsnStandardCard(Suits suit, Ranks rank, int value, int flags, int sortValue, string type = TYPE)
		:base(type, flags ,sortValue)
		{
            this.suit = suit;
            this.rank = rank;
            this.value = value;
		}

		/// Convert the card to a string 
		public override string ToString()
		{
			StringBuilder result = new StringBuilder();
            result.Append(HEX_DIGITS[(int)rank]); // one character for rank
            result.Append(((int)suit).ToString()); // one character for suit
            result.Append(base.ToString()); // any number of characters for the flags
            return result.ToString();
		}
		

		///Convert the card to a pretty string
		public override string PrettyString()
		{
            StringBuilder retval = new StringBuilder();
            switch(rank)
            {
	            case Ranks.Jack:
		            retval.Append("J");
		            break;
				case Ranks.Queen:
		            retval.Append("Q");
		            break;
				case Ranks.King:
		            retval.Append("K");
		            break;
				case Ranks.Ace:
		            retval.Append("A");
		            break;
	            default:
		            retval.Append(((int)rank).ToString());
					break;
            }

            retval.Append(suitString);
			retval.Append(base.PrettyString());
            return retval.ToString();
		}    		    		

		/// Is the card's suit red?
		public bool isRed
		{
			get 
			{
                return 0 != (((int)suit) & RED_MASK);
			}
		}
		
		/// Helper function to know if a suit is red
		public static bool SuitIsRed(int suit)
		{
            return 0 != (suit & RED_MASK);
		}
		
		/// Get the suit string for a card
		public string suitString
		{
			get
			{
				switch(suit)
				{
					case Suits.Club:
						return "C";
					case Suits.Heart:
						return "H";
					case Suits.Diamond:
						return "D";
					case Suits.Spade:
						return "S";
					default:
						return "";
				}
			}
		}
	}
}
