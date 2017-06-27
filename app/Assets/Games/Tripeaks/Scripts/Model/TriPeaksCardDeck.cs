using System.Collections.Generic;
using GSN.Skill.Games.Common.Primitive.Card;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Tripeaks
{
	/**
	 * Extends the GsnCardDeck functionality by defining a standard-52 deck of cards.
	 */
	public class TriPeaksCardDeck : GsnStandardCardDeck
	{
		PlayfieldModelData _playfield;
		
	    // members to hold suit and rank names.
	    public TriPeaksCardDeck(PlayfieldModelData inPlayfield) : base()
	    {
			_playfield = inPlayfield;
	    }

		override public GsnCard CreateCard(GsnStandardCard.Suits suit, GsnStandardCard.Ranks rank, int value, int flags, int sortV)
		{
			return new TriPeaksCard(suit, rank, value, flags, sortV);
		} 
		
		public void BuildDeck(GameModel gameModel, List<BaseCardData> baseCardData, GsnCardPile dealPile, GsnCardPile removedPile, int[] cardOrder)
		{
			// initialize the standard 52 cards
			Initialize (false, GsnStandardCard.Suits.Club, GsnStandardCard.Suits.Diamond, GsnStandardCard.Suits.Spade, GsnStandardCard.Suits.Heart);

            List<int> cardOrderList = new List<int>(cardOrder);
            // send the rest to removed and not to be reshuffles
            for (int j = 0; j < count; ++j)
            {
                if (!cardOrderList.Contains(j))
                {
                    removedPile.AddCard(j);
                    // mark all as do not reshuffle
                    TriPeaksCard card = (TriPeaksCard)removedPile.GetCardAt(removedPile.GetCardSlot(j));
                    card.SetFlag(GameModel.DO_NOT_RESHUFFLE_FLAGS, true);
                }
            }

            // Put all the cards from the deck into the deal pile;
            for (int j = 0; j < cardOrder.Length; ++j)
			{
                dealPile.AddCard (cardOrder[cardOrder.Length - j - 1]);
			}
			

			BuildDeckInternal( gameModel, baseCardData, dealPile);
		}
		
		public void BuildDeck(GameModel gameModel, List<BaseCardData> baseCardData, GsnCardPile dealPile, GsnRandom rand)
		{
			// initialize the standard 52 cards
			Initialize (false, GsnStandardCard.Suits.Club, GsnStandardCard.Suits.Diamond, GsnStandardCard.Suits.Spade, GsnStandardCard.Suits.Heart);
			
			// Put all the cards from the deck into the deal pile;
			for (int j = 0; j < count; ++j)
			{
				dealPile.AddCard (j);
			}
			
			dealPile.Shuffle (rand);
			
			
			if (gameModel.HasOption(GameModel.OPTIONS_SHARK_HAZARD_ID))
				AddSharkCards( baseCardData, dealPile);
			
			GenerateTikiCards ( gameModel, baseCardData, dealPile, rand);
			
			BuildDeckInternal( gameModel, baseCardData, dealPile);
			
		}
		
		void BuildDeckInternal(GameModel gameModel, List<BaseCardData> baseCardData, GsnCardPile dealPile)
		{	
			GsnCard card;
			for (int i = 0; i < baseCardData.Count; ++i)
			{
				card = dealPile.GetCardAt (dealPile.count -1 - i);
			
				// Transfer flags from card cardType			
				if (card is TriPeaksCard)
					((TriPeaksCard)card).ApplyFlagsFromData(gameModel, baseCardData [i]);	
				
			}
		}
		
		protected void AddSharkCards( List<BaseCardData> baseCardData, GsnCardPile dealPile)
		{
			// Shark and bait cards are always in the same place in the playfield.
			// At this point we have already shuffled the deck. To place Shark cards we can replace the standard card with the Shark
			// and stick the standard at the end of the deal
		
			int standardCardID;
			for (int i = 0; i < baseCardData.Count; ++i)
			{
				if ( baseCardData[i].cardType == CardType.HazardShark || baseCardData[i].cardType == CardType.HazardSharkBait )
				{
					// cards are dealt from the top. making things more complicated.
					int dealPos = dealPile.count - 1 - i;
					standardCardID = dealPile.GetCardIDAt(dealPos);
					dealPile.RemoveCardAt(dealPos);
					
					// Add the new card to the deck
					int flag = 0;
					if ( baseCardData[i].cardType == CardType.HazardShark )
						flag = GameModel.SHARK_FLAG;
					else
						flag = GameModel.SHARK_BAIT_FLAG;
					AddCard(new GsnCard("Special",flag, 0));
				
					int sharkCardID = count - 1;
					dealPile.AddCardAt(dealPos, sharkCardID);
					baseCardData[i].cardID = sharkCardID;
					
					// add the standard back into the dealpile
					dealPile.AddCardAt(0, standardCardID);					
				}
			}	
		}
		
		protected void GenerateTikiCards ( GameModel gameModel, List<BaseCardData> baseCardData, GsnCardPile dealPile, GsnRandom rand )
		{
			GenerateTikiCardsFromCardData( gameModel, GameModel.OPTIONS_GOLDEN_TIKI_ID, baseCardData, dealPile, rand, _playfield.goldenData, GameModel.GOLDEN_TIKI_FLAG );
			GenerateTikiCardsFromCardData( gameModel, GameModel.OPTIONS_RED_TIKI_ID, baseCardData, dealPile, rand, _playfield.redData, GameModel.RED_TIKI_FLAG );
			GenerateTikiCardsFromCardData( gameModel, GameModel.OPTIONS_BLACK_TIKI_ID, baseCardData, dealPile, rand, _playfield.blackData, GameModel.BLACK_TIKI_FLAG );
			GenerateTikiCardsFromCardData( gameModel, GameModel.OPTIONS_BLOSSOM_TIKI_ID, baseCardData, dealPile, rand, _playfield.flowerData, GameModel.FLOWER_TIKI_FLAG );
			GenerateTikiCardsFromCardData( gameModel, GameModel.OPTIONS_VOLCANO_TIKI_ID, baseCardData, dealPile, rand, _playfield.volcanoData, GameModel.VOLCANO_TIKI_FLAG );
		}
		
		protected void GenerateTikiCardsFromCardData(GameModel gameModel, string optionKey, List<BaseCardData> baseCardData, GsnCardPile dealPile,  GsnRandom rand, TikiCardData tikiCardData, int tikiFlag)
		{
			bool forceTiki = false;
			
#if DEBUG
			forceTiki = gameModel.HasOption(GameModel.OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID);
#endif //DEBUG
			
			
			if (!gameModel.HasOption(optionKey) && !forceTiki)
				return;

	
			if ( tikiCardData == null )
				return;
			
			bool chanceToSpawnForce100 = false;	
#if DEBUG
			if ( forceTiki)
				InsertTikiCard( baseCardData, dealPile, rand, tikiFlag);
				
			chanceToSpawnForce100 = gameModel.HasOption(GameModel.OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID);
#endif //DEBUG


			// first generate the mincount
			if ( tikiCardData.minCount > 0 ) 
				for (int x = 0;x < tikiCardData.minCount;++x)
					InsertTikiCard( baseCardData, dealPile, rand, tikiFlag);		
					
			// Generate the max - min for chances
			if (tikiCardData.maxCount  > tikiCardData.minCount )
				for (int x = tikiCardData.minCount;x < tikiCardData.maxCount;++x)
					{
						if ( chanceToSpawnForce100 || rand.GetNextRange(0,100) < tikiCardData.chance)
							InsertTikiCard( baseCardData, dealPile, rand, tikiFlag);						
					}
		}
		
		protected void InsertTikiCard(List<BaseCardData> baseCardData, GsnCardPile dealPile,  GsnRandom rand, int tikiFlag)
		{
			// insert randomly into the deal cards, beyone the tableau
			
			uint highRange = (uint)(count - baseCardData.Count - GameModel.SPECIAL_PLACEMENT_BUFFER);
			int wildPos = (int)rand.GetNextRange (0, highRange);
			AddCard(new GsnCard("Special", tikiFlag, 0));
			dealPile.AddCardAt(wildPos,count - 1);
		}
	}
		 
}
