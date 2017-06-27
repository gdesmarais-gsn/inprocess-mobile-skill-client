using System.Collections.Generic;
using System;
using System.Text;
using GSN.Skill.Games.Common.Model;
using GSN.Skill.Games.Common.Events;
using GSN.Skill.Games.Common.Primitive.Card;
using GSN.Skill.Games.Common.Tasks;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Tripeaks
{
	public enum PileID
	{
		Deal,
		Waste,
		Tableau,
		Hold,
		OneShotWild,
		Removed,
		Count,
	};

	enum OptionName
	{
		Reshuffle =  BaseOptionName.NEXT,
		Hold,
		OneShotWild,
		BoardID,
		BackgroundID,
		BackgroundDiff,	// Not a typo!
		RedTiki,
		BlackTiki,
		RedBlackCardMax,
		VolcanoTiki,
		VolcanoCardMax,
		BlossomTiki,
		BlossomCardMax,
		GoldenTiki,
		SpawnAllTikisDebug,
		TikiSpawnChance100Debug,
		TrapHazard,
		SharkHazard,
		DynamiteHazard,
		DynamiteTimeMax,
		DynamiteTurnMax,
		DynamiteUseTime,
		TutorialIntro,
		TutorialTrap,
		TutorialShark,
		TutorialDynamite,
		TutorialIntroCardOrder,
	};

	// this line is just for editing to force a version update. Have some fun.

	[GsnGameModel]
	public class GameModel : GameModelBase
	{
		public static readonly string OPTIONS_BOARD_ID = OptionName.BoardID.ToString();
		
		public static readonly string OPTIONS_RED_TIKI_ID = OptionName.RedTiki.ToString();
		public static readonly string OPTIONS_BLACK_TIKI_ID = OptionName.BlackTiki.ToString();
		public static readonly string OPTIONS_VOLCANO_TIKI_ID = OptionName.VolcanoTiki.ToString();
		public static readonly string OPTIONS_BLOSSOM_TIKI_ID = OptionName.BlossomTiki.ToString();
		public static readonly string OPTIONS_GOLDEN_TIKI_ID = OptionName.GoldenTiki.ToString();
		
		public static readonly string OPTIONS_REDBLACK_MAX_CARD_ID = OptionName.RedBlackCardMax.ToString();
		public static readonly string OPTIONS_VOLCANO_MAX_CARD_ID = OptionName.VolcanoCardMax.ToString();
		public static readonly string OPTIONS_BLOSSOM_MAX_CARD_ID = OptionName.BlossomCardMax.ToString();

		public static readonly string OPTIONS_TRAP_HAZARD_ID = OptionName.TrapHazard.ToString();
		public static readonly string OPTIONS_SHARK_HAZARD_ID = OptionName.SharkHazard.ToString();
		public static readonly string OPTIONS_DYNAMITE_HAZARD_ID = OptionName.DynamiteHazard.ToString();
		public static readonly string OPTIONS_DYNAMITE_USE_TIME_ID = OptionName.DynamiteUseTime.ToString();
		public static readonly string OPTIONS_DYNAMITE_TIME_MAX_ID = OptionName.DynamiteTimeMax.ToString();
		public static readonly string OPTIONS_DYNAMITE_TURN_MAX_ID = OptionName.DynamiteTurnMax.ToString();
		
		public static readonly string OPTIONS_RESHUFFLE_ID = OptionName.Reshuffle.ToString();
		public static readonly string OPTIONS_HOLD_ID = OptionName.Hold.ToString();
		public static readonly string OPTIONS_ONE_SHOT_WILD_ID = OptionName.OneShotWild.ToString();
		public static readonly string OPTIONS_BACKGROUND_ID = OptionName.BackgroundID.ToString();
		public static readonly string OPTIONS_BACKGROUND_DIFFICULTY_ID = OptionName.BackgroundDiff.ToString();
		public static readonly string OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID = OptionName.SpawnAllTikisDebug.ToString();
		public static readonly string OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID = OptionName.TikiSpawnChance100Debug.ToString();
				
		public const int GOLDEN_TIKI_FLAG 	= 1<<1;
		public const int RED_TIKI_FLAG 		= 1<<2;
		public const int BLACK_TIKI_FLAG 	= 1<<3;
		public const int FLOWER_TIKI_FLAG 	= 1<<4;
		public const int VOLCANO_TIKI_FLAG 	= 1<<5;
		public const int SHARK_FLAG		 	= 1<<6;
		public const int SHARK_BAIT_FLAG 	= 1<<7;
		public const int DYNAMITE_FLAG 		= 1<<8;
		public const int TRAP_FLAG 			= 1<<9;
		public const int ONE_SHOT_WILD_FLAG = 1<<10;
			
		
		public const int TIKI_AUTO_USE_FLAGS = VOLCANO_TIKI_FLAG | BLACK_TIKI_FLAG | FLOWER_TIKI_FLAG | RED_TIKI_FLAG;
	 	public const int DO_NOT_RESHUFFLE_FLAGS = SHARK_FLAG | SHARK_BAIT_FLAG | VOLCANO_TIKI_FLAG | BLACK_TIKI_FLAG | FLOWER_TIKI_FLAG | RED_TIKI_FLAG | GOLDEN_TIKI_FLAG;
	 
	
		public const int SPECIAL_PLACEMENT_BUFFER = 5;

		// BEGIN LIST OF TWEAKABLE ITEMS HERE
		// If you need to add something that is tweakable, add a TWEAK_ string to identify it in the tweakables table
		// Also don't forget to add the default constant.
		// Add it to the construction of tweakables in the GameModel Constructor below
		// Don't forget to also add it to the "DefaulTweaks.txt" file that is in the root of the "TriPeaks" folder.

		private const string TWEAK_STREAK_LENGTH = "STREAK_LENGTH";
		private const int DEFAULT_STREAK_LENGTH = 5;

		private const string TWEAK_POINTS_PER_STREAK = "POINTS_PER_STREAK";
		private const int DEFAULT_POINTS_PER_STREAK = 25;

		private const string TWEAK_MAX_TIME_BONUS = "MAX_TIME_BONUS";
		private const int DEFAULT_MAX_TIME_BONUS = 3000;

		private const string TWEAK_POINTS_PER_MATCH = "POINTS_PER_MATCH";
		private const int DEFAULT_POINTS_PER_MATCH = 100;

		public const string TWEAK_RESHUFFLE_TIME = "RESHUFFLE_TIME";
		private const int DEFAULT_RESHUFFLE_TIME = 5000;

		private const string TWEAK_VOLCANO_REMOVAL_COUNT = "VOLCANO_REMOVAL_COUNT";
		private const int DEFAULT_VOLCANO_REMOVAL_COUNT = 5;

		private const string TWEAK_COLOR_CARD_REMOVAL_COUNT = "COLOR_CARD_REMOVAL_COUNT";
		private const int DEFAULT_COLOR_CARD_REMOVAL_COUNT = 5;

		private const string TWEAK_FLOWER_CARD_ADD_COUNT = "FLOWER_CARD_ADD_COUNT";
		private const int DEFAULT_FLOWER_CARD_ADD_COUNT = 5;
		
		public const string TWEAK_USE_TIME_BASED_BOMBS = "USE_TIME_BASED_BOMBS";
		private const int DEFAULT_USE_TIME_BASED_BOMBS = 1;
		
		public const string TWEAK_BOMBS_TURNS_MAX = "BOMBS_TURNS_MAX";
		private const int DEFAULT_BOMBS_TURNS_MAX = 10;
		
		public const string TWEAK_BOMBS_TIME_MAX = "BOMBS_TIME_MAX";
		private const int DEFAULT_BOMBS_TIME_MAX = 30;
		
		public const string TWEAK_DEAL_CLICKED_WAIT_TIME = "DEAL_CLICKED_WAIT_TIME";
		private const int DEFAULT_DEAL_CLICKED_WAIT_TIME = 500;
		
		public const string TWEAK_TIKI_POP_CARD_TIME = "TIKI_POP_CARD_TIME";
		private const int DEFAULT_TIKI_POP_CARD_TIME = 250;
		
		public const string TWEAK_TIKI_INITIAL_TIME_BEFORE_POP_CARD = "TIKI_INITIAL_TIME_BEFORE_POP_CARD";
		private const int DEFAULT_TIKI_INITIAL_TIME_BEFORE_POP_CARD = 1250;

		public const string TWEAK_SHARK_EATS_BAIT_TIME = "SHARK_EATS_BAIT_TIME";
		private const int DEFAULT_SHARK_EATS_BAIT_TIME = 250;
		
		public const int START_BUILD_PLAYFIELD_TIME = 4000;// 4 seconds		
		
		public const int TIKI_CARD_TIME_TO_FALL_FROM_REVEAL = 2500;
		public const int NINJA_THROW_TIME = 350;
		public const int BAIT_FLIP_TIME = 500;
		public const int SHARK_BOUNCE_TIME = 700;		
		public const int TIKI_IN_WASTE_DROP_DELAY_TIME = 600;
		
		public const string GAMES_PLAYED 		= "GAMES_PLAYED"; 
		public const string CARDS_COLLECTED		= "CARDS_COLLECTED";
		public const string WILDS_USED 			= "WILDS_USED"; 
 		public const string HOLD_USED 			= "HOLD_USED"; 
		public const string SHARKS_CLEARED		= "SHARKS_CLEARED";
		public const string DYNAMITE_CLEARED	= "DYNAMITE_CLEARED"; 
		public const string TRAP_CLEARED 		= "TRAP_CLEARED"; 
		public const string GOLDEN_TIKI_USED	= "GOLDEN_TIKI_USED";
		public const string RED_TIKI_USED		= "RED_TIKI_USED"; 
 		public const string BLACK_TIKI_USED		= "BLACK_TIKI_USED"; 
		public const string VOLCANO_TIKI_USED 	= "VOLCANO_TIKI_USED";
		public const string BLOSSOM_TIKI_USED	= "BLOSSOM_TIKI_USED";
		public const string SCORE				= "SCORE"; 
		public const string FINAL_SCORE         = "FINAL_SCORE";
		public const string TIME_BONUS			= "TIME_BONUS"; 	
		public const string STREAK_SCORE		= "STREAK_SCORE"; 			
 		public const string CARDS_AT_STREAK_0	= "CARDS_AT_STREAK_0";
		public const string CARDS_AT_STREAK_1	= "CARDS_AT_STREAK_1";
		public const string CARDS_AT_STREAK_2	= "CARDS_AT_STREAK_2";
		public const string CARDS_AT_STREAK_3	= "CARDS_AT_STREAK_3";
		public const string CARDS_AT_STREAK_4	= "CARDS_AT_STREAK_4";
		public const string CARDS_AT_STREAK_5	= "CARDS_AT_STREAK_5";
		public const string MAX_STREAK_COUNT  	= "MAX_STREAK_COUNT";
        public const string CLEAR_NO_RESHUFFLE = "CLEAR_NO_RESHUFFLE";

		public const string RESHUFFLE = "RESHUFFLE";
		public const string CLEARED_BOARD_WITH_50PERC_TIME_LEFT = "CLEARED_BOARD_WITH_50PERC_TIME_LEFT";
		 
		public const string OPTIONS_BUNDLE_URL_BACKGROUND_ID 		= "bundleURLBackground"; 
		public const string OPTIONS_BUNDLE_URL_GAME_ID				= "bundleURLGame";
		public const string OPTIONS_BUNDLE_URL_DECK_ID 				= "bundleURLDeck"; 
		public const string OPTIONS_BUNDLE_VERSION_BACKGROUND_ID 	= "bundleVersionBackground"; 
		public const string OPTIONS_BUNDLE_VERSION_GAME_ID			= "bundleVersionGame";
		public const string OPTIONS_BUNDLE_VERSION_DECK_ID 			= "bundleVersionDeck"; 

		public static readonly string OPTIONS_TUTORIAL_INTRO_ID 			= OptionName.TutorialIntro.ToString();
		public static readonly string OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID 	= OptionName.TutorialIntroCardOrder.ToString();
		public static readonly string OPTIONS_TUTORIAL_TRAP_ID 				= OptionName.TutorialTrap.ToString(); 
		public static readonly string OPTIONS_TUTORIAL_SHARK_ID	 			= OptionName.TutorialShark.ToString();
		public static readonly string OPTIONS_TUTORIAL_DYNAMITE_ID 			= OptionName.TutorialDynamite.ToString(); 
 

   
		public enum EndGameReason
		{
			BOMB_EXPLODED = GameModelBase.BaseEndGameReason.NEXT_VALUE,
			NO_MORE_MOVES
		}
		
				
		protected Dictionary<string, bool> _optionToggles = new Dictionary<string, bool>();
		
		private List<BaseCardData> _cards = new List<BaseCardData> ();
		private TriPeaksCardDeck _deck;
		private GsnCardPile _dealPile;
		private GsnCardPile _wastePile;
		private GsnCardPile _removedPile; //card removed from play until reshuffle
		public GsnCard wasteCard 
		{
			get 
			{
				if (_wastePile.isEmpty)
					return null;
				return _wastePile.GetTopCard();
			}
		}
		public GsnCard holdCard { get; private set; }
		int _boardID = 0;
		/// Just the card score
		public int score { get; private set; }
		public int timeBonus { get; private set; }
		public int streakBonus { get; private set; }

		int _numOneTimeWildsLeft = 1;
		int _streakCount = 0;
		int _lengthOfGameInMS = 0;
		int _wildID;
		int _turnCounter = 0;

		public bool inputBlocked;
		public bool triggerClearBoardEvent = false;
		
		LockModelTask _lockTask;

		List<int> _faceUpCards = new List<int>();
		Stack<IModelEvent> _undoSteps = new Stack<IModelEvent>();
		public bool _okToAddUndo = false;

		private bool _streakResetLocked;

        private bool _hasReshuffled = false;
		
		int[] _IntroTutorialCardOrder = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51};

		private static readonly Type[] inputEnumTypes = new Type[] { typeof(CommonInputMessageType), typeof(InputMessageType) };
		private static readonly Type[] eventEnumTypes = new Type[] { typeof(CommonModelEventType), typeof(CardModelEventType), typeof(ModelEventType), typeof(UndoEventType) };

		public GameModel(string dataPath)
			: base(inputEnumTypes, eventEnumTypes, "1", dataPath)
		{
			_tweakables[TWEAK_POINTS_PER_MATCH] = DEFAULT_POINTS_PER_MATCH;
			_tweakables[TWEAK_POINTS_PER_STREAK] = DEFAULT_POINTS_PER_STREAK;
			_tweakables[TWEAK_MAX_TIME_BONUS] = DEFAULT_MAX_TIME_BONUS;
			_tweakables[TWEAK_STREAK_LENGTH] = DEFAULT_STREAK_LENGTH;
			_tweakables[TWEAK_RESHUFFLE_TIME] = DEFAULT_RESHUFFLE_TIME;
			_tweakables[TWEAK_VOLCANO_REMOVAL_COUNT] = DEFAULT_VOLCANO_REMOVAL_COUNT;
			_tweakables[TWEAK_COLOR_CARD_REMOVAL_COUNT] = DEFAULT_COLOR_CARD_REMOVAL_COUNT;
			_tweakables[TWEAK_FLOWER_CARD_ADD_COUNT] = DEFAULT_FLOWER_CARD_ADD_COUNT;			
			_tweakables[TWEAK_USE_TIME_BASED_BOMBS] = DEFAULT_USE_TIME_BASED_BOMBS;
			_tweakables[TWEAK_BOMBS_TURNS_MAX] = DEFAULT_BOMBS_TURNS_MAX;
			_tweakables[TWEAK_BOMBS_TIME_MAX] = DEFAULT_BOMBS_TIME_MAX;
			_tweakables[TWEAK_DEAL_CLICKED_WAIT_TIME] = DEFAULT_DEAL_CLICKED_WAIT_TIME;
			_tweakables[TWEAK_TIKI_POP_CARD_TIME] = DEFAULT_TIKI_POP_CARD_TIME;
			_tweakables[TWEAK_TIKI_INITIAL_TIME_BEFORE_POP_CARD] = DEFAULT_TIKI_INITIAL_TIME_BEFORE_POP_CARD;
			_tweakables[TWEAK_SHARK_EATS_BAIT_TIME] = DEFAULT_SHARK_EATS_BAIT_TIME;
			
			_optionToggles[ OPTIONS_RED_TIKI_ID] = false;
			_optionToggles[ OPTIONS_BLACK_TIKI_ID] = false;
			_optionToggles[ OPTIONS_VOLCANO_TIKI_ID] = false;
			_optionToggles[ OPTIONS_BLOSSOM_TIKI_ID] = false;
			_optionToggles[ OPTIONS_GOLDEN_TIKI_ID] = false;
			
			_optionToggles[ OPTIONS_TRAP_HAZARD_ID] = true;
			_optionToggles[ OPTIONS_SHARK_HAZARD_ID] = true;
			_optionToggles[ OPTIONS_DYNAMITE_HAZARD_ID] = true;
			
			_optionToggles[ OPTIONS_RESHUFFLE_ID] = true;
			_optionToggles[ OPTIONS_HOLD_ID] = false;
			_optionToggles[ OPTIONS_ONE_SHOT_WILD_ID] = true;
			
			_optionToggles[ OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID] = false;
			_optionToggles[ OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID] = false;			
		
			_optionToggles[ OPTIONS_TUTORIAL_INTRO_ID ] = false;
			_optionToggles[ OPTIONS_TUTORIAL_TRAP_ID] = false;
			_optionToggles[ OPTIONS_TUTORIAL_SHARK_ID] = false;
			_optionToggles[ OPTIONS_TUTORIAL_DYNAMITE_ID] = false;
			
				
			_lockTask = new LockModelTask(this);

		}
		
		protected override GsnScheduler CreateScheduler()
		{
			return new TriPeaksScheduler(this);
		}
		
		public int GetTweakable(string tweakable)
		{
			return _tweakables[tweakable];
		}

		private void modifyScore(int points, int streak, int cardID, int delayTime = 0)
		{
			// If the score isn't changed, don't do anyting.
			int currentScore = GetScore();
			score += points;
			streakBonus += streak;
			
			// Did the score change?
			if (currentScore != GetScore())
			{
				if ( delayTime == 0)	
					DispatchEvent(new UpdateScoreEvent(GetScore(), (points + streak), _streakCount, cardID));
				else
					_scheduler.Add(new UpdateScoreTask(this, new UpdateScoreEvent(GetScore(), (points + streak), _streakCount, cardID),delayTime));
				ReportMetric(SCORE, score);
			}
		}
		private bool noMoreMoves()
		{
            // if this is called before game starts
            if (!isGameStarted)
                return false;

            if (cardsRemaining == 0)
				return true;

			if (HasOption(OPTIONS_RESHUFFLE_ID))
				return false;

			if (canClickWild)
				return false;


			// Can we use the hold?
			if (HasOption(OPTIONS_HOLD_ID))
			{
				// Is there a card in the hold?
				if (holdCard != null)
				{
					// If so is there a move for this card?
					List<int> allHoldMoves = findAllMoves(holdCard);
					if (allHoldMoves.Count != 0)
						return false;

				}

			}

			// If the deal pile is empty
			if (!_dealPile.isEmpty)
				return false;
			// Are there any moves left?
			List<int> allMoves = findAllMoves(wasteCard);
			if (allMoves.Count != 0)
				return false;
				

			// If we got to here we have no more moves;
			return true;

		}

		public override bool isGameOver
		{
			get
			{
				// Is the game already over?
				if (base.isGameOver)
					return true;

				// Are there any moves left?	
				if (noMoreMoves())
					return true;

				// We are not done.
		   		return false;
			}
		}

        public bool isGameStarted
        {
            get
            {
                if (_deck == null || _wastePile == null || _removedPile == null || _dealPile == null)
                    return false;

                return true;
            }
        }

        public int cardsRemaining
		{
			get
			{
				return _deck.count - _wastePile.count - _removedPile.count - _dealPile.count - _numOneTimeWildsLeft - (holdCard != null?1:0);
			}
		}

		private void checkForEndGame()
		{
			if (!isGameOver || !isGameStarted)
				return;

            if ( cardsRemaining == 0)
			{
				NormalEndGame ();
				if ( GetStateTime() >  _lengthOfGameInMS>>2 )
					ReportMetric(CLEARED_BOARD_WITH_50PERC_TIME_LEFT,1 );
                if (_hasReshuffled == false)
                    ReportMetric(CLEAR_NO_RESHUFFLE,1);
			}
			else
				earlyFailNoMoreMoves ();
		}

		//Returns list of baseCardData indices
		public List<int> findAllMoves(GsnCard card1)
		{
			List<int> newList = new List<int>();
			foreach (int cardIndex in _faceUpCards)
			{
				int cardID = _cards[cardIndex].cardID;
				GsnCard card2 = _deck.GetCard(cardID);
				if (isCardOneUpOrDown(card1,card2))
					newList.Add(cardIndex);
			}
			newList.Sort();
			return newList;
		}

		private bool isCardOneUpOrDown(GsnCard c1, GsnCard c2)
		{
			// If the cards are both standard cards, then compare the values.
			if (c1 is TriPeaksCard && c2 is TriPeaksCard)
			{
				
				TriPeaksCard card1 = (TriPeaksCard)c1;
				TriPeaksCard card2 = (TriPeaksCard)c2;	
				int diff = Math.Abs (card1.rank - card2.rank);
				return (diff == 1 || diff == 12);
			} 
			else
			{	
				// shark cards only match bait to shark
				if ( c1.HasFlag(SHARK_FLAG) || c2.HasFlag(SHARK_FLAG) || 
					c1.HasFlag(SHARK_BAIT_FLAG) || c2.HasFlag(SHARK_BAIT_FLAG) )
				{
				 	if (c1.HasFlag(SHARK_BAIT_FLAG) && c2.HasFlag(SHARK_FLAG))
						return true;
				}					
				// wild always matches
				else if (c1.HasFlag(GOLDEN_TIKI_FLAG) || c2.HasFlag(GOLDEN_TIKI_FLAG))
					return true;
				else if ( c1.HasFlag(RED_TIKI_FLAG) && c2 is TriPeaksCard)
				{
					TriPeaksCard card2 = (TriPeaksCard)c2;
					if ( card2.isRed)
						return true;
				}
				else if ( c2.HasFlag(RED_TIKI_FLAG) && c1 is TriPeaksCard)
				{
					TriPeaksCard card1 = (TriPeaksCard)c1;
					if ( card1.isRed)
						return true;
				}
				else if ( c1.HasFlag(BLACK_TIKI_FLAG) && c2 is TriPeaksCard)
				{
					TriPeaksCard card2 = (TriPeaksCard)c2;
					if ( !card2.isRed)
						return true;
				}
				else if ( c2.HasFlag(BLACK_TIKI_FLAG) && c1 is TriPeaksCard)
				{
					TriPeaksCard card1 = (TriPeaksCard)c1;
					if ( !card1.isRed)
						return true;
				}
				else if (c1.HasFlag(VOLCANO_TIKI_FLAG) || c2.HasFlag(VOLCANO_TIKI_FLAG))
					return true;
		
			}

			//otherwise, return false as we don't know how to compare them.
			return false;
		}

		public void beginUndo()
		{
			if (_okToAddUndo)
				throw new Exception("Called beginUndo twice");

			_okToAddUndo = true;
			addUndoStep(new BeginUndoStep(GetStateTime(), _clockTask.accumulatedPauseTime));
		}

		public void endUndo()
		{
			if (!_okToAddUndo)
				throw new Exception("Called endUndo without first calling beginUndo");

			_okToAddUndo = false;
		}

		public void addUndoStep(IModelEvent step)
		{
			if (_okToAddUndo == false)
				return;
			//GsnDebug.Log("Adding undo step " + step);
			_undoSteps.Push(step);
		}

		protected override void HandleInputMessage (IInputMessage msg)
		{
			// Are we done? Then the game is over.
			if (!isGameStarted || isGameOver || inputBlocked)
			{
#if SOLVER
				if (inputBlocked)
					throw new Exception("Solver should never have an input blocked");
#endif
				return;
			}

			switch (msg.msgType())
			{
			case InputMessageType.CardClicked:
				{
					beginUndo();
					bool sendClickResult = true;
					int cardIndex = ((CardClickedMessage)msg).cardIndex;
					BaseCardData data = _cards [cardIndex];
					int cardID = data.cardID;	
					GsnCard cardClicked = _deck.GetCard (cardID);
					bool validMove = false;
					List<int> missedCards = null;
					if (cardClicked.faceUp)
					{
						if ( cardClicked.HasFlag(SHARK_BAIT_FLAG))
						{
							// Bait cards are removed and not sent to waste.
							PlayBaitCard(cardIndex);
							sendClickResult = false;
							validMove = true;
						}
						else if (isCardOneUpOrDown (cardClicked, wasteCard))
						{
							if (cardClicked.HasFlag(DYNAMITE_FLAG))
							{
								ClearDynamite(cardIndex);
								sendClickResult = false;
							}
							else
							{
								ProcessClickActions(cardIndex, ref sendClickResult);
							}
							validMove = true;
							
							switch ( _streakCount )
							{
								case 0:
									ReportMetric(CARDS_AT_STREAK_0, 1);
									break;
								case 1:
									ReportMetric(CARDS_AT_STREAK_1, 1);
									break;
								case 2:
									ReportMetric(CARDS_AT_STREAK_2, 1);
									break;
								case 3:
									ReportMetric(CARDS_AT_STREAK_3, 1);
									break;
								case 4:
									ReportMetric(CARDS_AT_STREAK_4, 1);
									break;
								case 5:
									ReportMetric(CARDS_AT_STREAK_5, 1);
									break;								
							}
							
						} 
						else
						{
							missedCards = new List<int> ();
							missedCards.Add (cardIndex);
						}
					}
					if ( sendClickResult)
						DispatchEvent (new CardClickResultEvent (validMove, cardID, missedCards, validMove?_streakCount:-1));
					if (validMove)
						AdvanceTurn();
					endUndo();
				}
				break;
			case InputMessageType.Deal:
				beginUndo();
				OnDealClicked();
				endUndo();
				break;
			case InputMessageType.Hold:
				{
					if (!HasOption(OPTIONS_HOLD_ID))
						return;

					beginUndo();
					// can only move to hold if hold is empty and dea has cards
					if (!_dealPile.isEmpty && holdCard == null)
					{
						// card drom waste goes to hold
						holdCard = wasteCard;

						// move next deal to waste			
						int holdCardID = _deck.GetCardID(holdCard);
						addUndoStep(new HoldSpotClickedUndoStep(holdCardID));

						_wastePile.RemoveCard(holdCardID);

						// move next to waste
						int cardID = _dealPile.GetTopCardID ();
						_dealPile.RemoveTopCard ();
						_wastePile.AddCard(cardID);

						addUndoStep(new DealToWasteUndoStep(cardID));
						resetStreak();
						
					
						DispatchEvent (new MoveCardToHoldEvent (holdCardID));
						CheckWasteForTikiAbilities();
						blockInput( _tweakables[TWEAK_DEAL_CLICKED_WAIT_TIME]);
					
						if (canReshuffle)
							DispatchEvent (new ShowReshuffleButtonEvent());
							
						ReportMetric(HOLD_USED, 1);

					}
					else if ( holdCard != null )
					{
						int cardID = _deck.GetCardID(holdCard);
						List<int> missedCards = findAllMoves (wasteCard);
						checkCurrentWasteForRemoval();
						_wastePile.AddCard(cardID);
						holdCard = null;
						DispatchEvent (new CardClickResultEvent (true, cardID, missedCards));
						addUndoStep(new HoldCardClickedUndoStep(cardID));
						blockInput( _tweakables[TWEAK_DEAL_CLICKED_WAIT_TIME]);
					}
					AdvanceTurn();
					endUndo();
				}
				break;
			case InputMessageType.Reshuffle:
				{
					if (!HasOption(OPTIONS_RESHUFFLE_ID))
						return;
						
					if (!_dealPile.isEmpty )
						return;

					beginUndo();

					List<int> missedCards = findAllMoves (wasteCard);

					// move all cards from waste to deal
					while ( !_wastePile.isEmpty )
					{
						int topWasteCardID = _wastePile.GetTopCardID();
						addUndoStep(new WasteToDealUndoStep(topWasteCardID));
						_wastePile.RemoveTopCard();
						_dealPile.AddCard(topWasteCardID);
					}
					
					// move any cards in the removed to the deal
					for (int i = _removedPile.count - 1; i >= 0; --i)
					{
						int cardID = _removedPile.GetCardIDAt(i);
						GsnCard card2 = _deck.GetCard(cardID);
						// Dont add tiki cards back into reshuffle
						if ( !card2.HasFlag(DO_NOT_RESHUFFLE_FLAGS))
						{
							_removedPile.RemoveCardAt(i);
							_dealPile.AddCard(cardID);
							addUndoStep(new RemovedToDealUndoStep(cardID));
						}
					}
					
					DispatchEvent (new CardClickResultEvent (false, -1, missedCards));					
					// Shuffle
					addUndoStep(new BurnRNGUndoStep(_rand.GetBurnCount()));
					_dealPile.Shuffle(_rand);

					DispatchEvent (new ReshuffleEvent (_dealPile.GetString (true), _tweakables[TWEAK_RESHUFFLE_TIME]));
					blockInput(_tweakables[TWEAK_RESHUFFLE_TIME]);
					_scheduler.Add(new EndReshuffleTask(this));

                    _hasReshuffled = true;
                    ReportMetric(RESHUFFLE,1);
					//DO NOT ENDUNDO HERE
					//input is blocked until EndReshuffleTask fires, which completes this undo step
				}
				break;
			case InputMessageType.Wild:
				if (!HasOption(OPTIONS_ONE_SHOT_WILD_ID))
					return;

				beginUndo();
				OnWildOnTimeClicked();
				endUndo();
				break;
#if DEBUG
			case InputMessageType.CheatAddCard:
				{
					int cardFlags = ((CheatAddCardMessage)msg).flags;
					_deck.AddCard(new GsnCard("Special", cardFlags, 0));
					_dealPile.AddCard(_deck.count - 1);
					OnDealClicked();
				}
				break;
			case InputMessageType.CheatWinNow:
				{
					for (int i = 0; i < _deck.count; ++i)
					{
						GsnCard card = _deck.GetCard(i);
						if (card.pile == null)
						{
							_removedPile.AddCard(_deck.GetCardID(card));
						}
					}
					// Need to also do this because one time wilds are essentially another pile. 
					_numOneTimeWildsLeft = 0;
					break;
				}
			case InputMessageType.CheatUndo:
				 performUndoAction();
				 break;
			case InputMessageType.CheatIncrementStreak:
				 IncrementStreak();
				 break;
			case InputMessageType.CheatResetStreak:
				 resetStreak();
				 break;
			case InputMessageType.CheatToggleStreakResetLock:
				 ToggleStreakResetLock();
				 break;
#endif	
			
			}

			checkForEndGame();
		}

		public void performUndoAction()
		{
			if (_undoSteps.Count == 0)
				return;

			IModelEvent step;
			do
			{
				step = _undoSteps.Pop();
				//GsnDebug.Log("Undoing step " + step);
				switch (step.undoEventType())
				{
					case UndoEventType.BeginUndo:
						{
							BeginUndoStep s = (BeginUndoStep)step;
							RewindTasks(s.stateTimeMS, s.accumulatedPauseTime);
						}
						break;
					case UndoEventType.MoveCardFromTableauToWaste:
						{
							TableauToWasteUndoStep s = (TableauToWasteUndoStep)step;
							_wastePile.RemoveCard(_cards[s.cardIndex].cardID);
						}
						break;
					case UndoEventType.MoveCardFromDealToWaste:
						{
							DealToWasteUndoStep s = (DealToWasteUndoStep)step;
							int wasteCardId = s.cardID;
							_wastePile.RemoveCard(wasteCardId);
							_dealPile.AddCard(wasteCardId);
						}
						break;
					case UndoEventType.MoveCardFromWasteToDeal:
						{
							WasteToDealUndoStep s = (WasteToDealUndoStep)step;
							_dealPile.RemoveCard(s.cardID);
							_wastePile.AddCard(s.cardID);
							if (canReshuffle)
								DispatchEvent(new ShowReshuffleButtonEvent());
						}
						break;
					case UndoEventType.MoveCardFromRemovedToDeal:
						{
							RemovedToDealUndoStep s = (RemovedToDealUndoStep)step;
							_dealPile.RemoveCard(s.cardID);
							_removedPile.AddCard(s.cardID);
						}
						break;
					case UndoEventType.AddCardToFaceup:
						{
							AddCardToFaceupUndoStep s = (AddCardToFaceupUndoStep)step;
							_faceUpCards.Remove(s.cardIndex);
						}
						break;
					case UndoEventType.RemoveCardFromFaceup:
						{
							RemoveCardFromFaceupUndoStep s = (RemoveCardFromFaceupUndoStep)step;
							_faceUpCards.Add(s.cardIndex);
						}
						break;
					case UndoEventType.UncoveredCard:
						{
							UncoveredCardUndoStep s = (UncoveredCardUndoStep)step;
							_cards[s.cardCovered].coveredByCards.Add(s.cardIndex);
							_cards[s.cardIndex].coversCards.Add(s.cardCovered);
						}
						break;
					case UndoEventType.ModifyStreak:
						{
							ModifyStreakUndoStep s = (ModifyStreakUndoStep)step;
							_streakCount = s.streakCount;
							DispatchEvent(new UpdateStreakEvent(_streakCount));
						}
						break;
					case UndoEventType.FlippedCard:
						{
							FlippedCardUndoStep s = (FlippedCardUndoStep)step;
							int otherCardID = _cards[s.cardIndex].cardID;
							GsnCard otherCard = _deck.GetCard(otherCardID);
							otherCard.faceUp = false;
						}
						break;
					case UndoEventType.ModifyScore:
						{
							ModifyScoreUndoStep s = (ModifyScoreUndoStep)step;
							modifyScore(-_tweakables[TWEAK_POINTS_PER_MATCH], -s.streakPoints, s.cardID);
							break;
						}
					case UndoEventType.ChangeType:
						{
							ChangeTypeUndoStep s = (ChangeTypeUndoStep)step;
							int cardIndex = s.cardIndex;
							_cards[cardIndex].cardType = s.cardType;
							int cardID = _cards[cardIndex].cardID;
							GsnCard card = _deck.GetCard(cardID);

							// Transfer flags from card cardType	
							// Bill is this step necessary...?		
							if (card is TriPeaksCard)
								((TriPeaksCard)card).ApplyFlagsFromData(this, _cards[cardIndex]);
						}
						break;
					case UndoEventType.RemoveCardFromWaste:
						{
							RemoveCardFromWasteUndoStep s = (RemoveCardFromWasteUndoStep)step;
							int cardId = s.cardID;
							if (_removedPile.GetCardSlot(cardId) != -1)
								_removedPile.RemoveCard(cardId);
							_wastePile.AddCard(cardId);
						}
						break;
					case UndoEventType.RemoveCardFromTableau:
						{
							RemoveCardFromTableauUndoStep s = (RemoveCardFromTableauUndoStep)step;
							int cardIndex = s.cardIndex;
							int cardID = _cards[cardIndex].cardID;
							if (_removedPile.GetCardSlot(cardID) != -1)
								_removedPile.RemoveCard(cardID);
							_deck.SetPileOfCard(cardID, null);
						}
						break;
					case UndoEventType.OneShotWildClicked:
						{
							OneShotWildClickedUndoStep s = (OneShotWildClickedUndoStep)step;
							_numOneTimeWildsLeft = s.numOneTimeWildsLeft;
							_wastePile.RemoveCard(_wildID);
							break;
						}
					case UndoEventType.HoldSpotClicked:
						{
							// card from waste goes to hold
							int cardId = _deck.GetCardID(holdCard);
							holdCard = null;
							_wastePile.AddCard(cardId);
						}
						break;
					case UndoEventType.HoldCardClicked:
						{
							int wastePileID = _wastePile.GetTopCardID();
							_wastePile.RemoveTopCard();
							holdCard = _deck.GetCard(wastePileID);
						}
						break;
					case UndoEventType.BurnRng:
						{
							BurnRNGUndoStep s = (BurnRNGUndoStep)step;
							_rand.SetSeed(_rand.GetSeed(), s.burnCount);
						}
						break;
					case UndoEventType.AdvanceTurnCounter:
						{
							AdvanceTurnCounterUndoStep s = (AdvanceTurnCounterUndoStep)step;
							_turnCounter = s.turnCounter;
						}
						break;
					case UndoEventType.AdvanceTurnCard:
						{
							AdvanceTurnCardUndoStep s = (AdvanceTurnCardUndoStep)step;
							TriPeaksCard card = (TriPeaksCard)_deck.GetCard(s.cardID);
							card.SetActivationCounter(this, s.activationCounter);
						}
						break;
					default:
						throw new ArgumentException("Unknown undo step: " + step);
				}


				DispatchEvent(step);
			} while (_undoSteps.Count > 0 && step.undoEventType() != UndoEventType.BeginUndo);
		}

		public override void CancelEndGame()
		{
			base.CancelEndGame();
			ResumeClock(GetStateTime());
			timeBonus = 0;
		}
		 
		private void blockInput(int blockTime)
		{
			if (inputBlocked)
				return;

			inputBlocked = true;
			_lockTask.wakeUpTime = GetStateTime() + blockTime;

			_scheduler.Add(_lockTask);

			DispatchEvent(new BlockInputEvent(blockTime));
		}

		protected override void ConfigureGame (Dictionary<string, string> startRecord, Dictionary<string, string> joinRecord)
		{
			int totalSeconds = 120;

			if (joinRecord.ContainsKey (GameModelBase.OPTIONS_GAME_TIME))
			{
				totalSeconds = Convert.ToInt32 (joinRecord [GameModelBase.OPTIONS_GAME_TIME]);
			}

			_boardID = 0;
			if (joinRecord.ContainsKey (OPTIONS_BOARD_ID))
			{
				// offset by 1 since they start at 1
				_boardID = Convert.ToInt32 (joinRecord [OPTIONS_BOARD_ID]) -1;
				if ( _boardID < 0 )
					_boardID = 0;
			}

			SetupClock (totalSeconds, 1000);
			_lengthOfGameInMS = totalSeconds * 1000;
			
			// some gameoptions change tweakable values
			if (startRecord.ContainsKey(OPTIONS_REDBLACK_MAX_CARD_ID))
				_tweakables[TWEAK_COLOR_CARD_REMOVAL_COUNT] = Convert.ToInt32(startRecord[OPTIONS_REDBLACK_MAX_CARD_ID]);

			if (startRecord.ContainsKey(OPTIONS_VOLCANO_MAX_CARD_ID))
				_tweakables[TWEAK_VOLCANO_REMOVAL_COUNT] = Convert.ToInt32(startRecord[OPTIONS_VOLCANO_MAX_CARD_ID]);

			if (startRecord.ContainsKey(OPTIONS_BLOSSOM_MAX_CARD_ID))
				_tweakables[TWEAK_FLOWER_CARD_ADD_COUNT] = Convert.ToInt32(startRecord[OPTIONS_BLOSSOM_MAX_CARD_ID]);

			if (startRecord.ContainsKey(OPTIONS_DYNAMITE_USE_TIME_ID))
				_tweakables[TWEAK_USE_TIME_BASED_BOMBS] = Convert.ToInt32(startRecord[OPTIONS_DYNAMITE_USE_TIME_ID]);

			if (startRecord.ContainsKey(OPTIONS_DYNAMITE_TURN_MAX_ID))
				_tweakables[TWEAK_BOMBS_TURNS_MAX] = Convert.ToInt32(startRecord[OPTIONS_DYNAMITE_TURN_MAX_ID]);

			if (startRecord.ContainsKey(OPTIONS_DYNAMITE_TIME_MAX_ID))
				_tweakables[TWEAK_BOMBS_TIME_MAX] = Convert.ToInt32(startRecord[OPTIONS_DYNAMITE_TIME_MAX_ID]);
		
			SetOptionToggle(startRecord, OPTIONS_RED_TIKI_ID);
			SetOptionToggle(startRecord, OPTIONS_BLACK_TIKI_ID);
			SetOptionToggle(startRecord, OPTIONS_VOLCANO_TIKI_ID);
			SetOptionToggle(startRecord, OPTIONS_BLOSSOM_TIKI_ID);
			SetOptionToggle(startRecord, OPTIONS_GOLDEN_TIKI_ID);
			
			SetOptionToggle(startRecord, OPTIONS_TRAP_HAZARD_ID);
			SetOptionToggle(startRecord, OPTIONS_SHARK_HAZARD_ID);
			SetOptionToggle(startRecord, OPTIONS_DYNAMITE_HAZARD_ID);
			
			SetOptionToggle(joinRecord, OPTIONS_RESHUFFLE_ID);
			SetOptionToggle(joinRecord, OPTIONS_HOLD_ID);
			SetOptionToggle(joinRecord, OPTIONS_ONE_SHOT_WILD_ID);

			SetOptionToggle(startRecord, OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID);
			SetOptionToggle(startRecord, OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID);
			
			SetOptionToggle(joinRecord, OPTIONS_TUTORIAL_INTRO_ID );
			SetOptionToggle(joinRecord, OPTIONS_TUTORIAL_TRAP_ID);
			SetOptionToggle(joinRecord, OPTIONS_TUTORIAL_SHARK_ID);
			SetOptionToggle(joinRecord, OPTIONS_TUTORIAL_DYNAMITE_ID);

			if ( _optionToggles[ OPTIONS_TUTORIAL_INTRO_ID ] == true && joinRecord.ContainsKey(OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID))
			{
				string[] tokens = joinRecord[OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID].Split(',');
				// Verify there are at least 52 cards here
				_IntroTutorialCardOrder = Array.ConvertAll<string, int>(tokens, int.Parse);
			}

			PlayfieldModelData playfield = PlayfieldModelData.Deserialize(_boardID);
			// Make a copy of list card data
			_cards = new List<BaseCardData> (playfield.cards);

			_deck = new TriPeaksCardDeck (playfield);
			
			_dealPile = new GsnCardPile(_deck, (int)PileID.Deal);
			_wastePile = new GsnCardPile (_deck, (int)PileID.Waste);
			_removedPile = new GsnCardPile (_deck, (int)PileID.Removed);			

			// Sequence of events on the UI is
			// Deal cards
			// Flip face up cards
			// Build Deal
			// Flip Waste
			// Start clock

			if ( _optionToggles[ OPTIONS_TUTORIAL_INTRO_ID ] == true)
			{
				_deck.BuildDeck(this, _cards, _dealPile, _removedPile, _IntroTutorialCardOrder);
			}	
			else
			{		
				_deck.BuildDeck(this, _cards, _dealPile, _rand);
			}

			DispatchEvent (new DealCardsEvent (_dealPile.GetString (true)));

			// On time wild
			_deck.AddCard(new GsnCard("Special", GOLDEN_TIKI_FLAG, 0));
			_wildID = _deck.count - 1;
			
			//go through all of the cards and pull cards from the deal
			//Assign them to cards in the layout
			// Also while doing this determine which cards are the uncovered ones

			int cardID;
			GsnCard card;
			for (int i = 0; i < _cards.Count; ++i)
			{
				cardID = _dealPile.GetTopCardID ();
				_cards [i].cardID = cardID;
				_dealPile.RemoveTopCard ();
				card = _deck.GetCard (cardID);				
				card.faceUp = (_cards [i].coveredByCards.Count == 0);
				if (card.faceUp)
					AddFaceUpCard(i, 0, false);
			}

			DispatchEvent (new BuildPlayfieldEvent (_faceUpCards));
			_scheduler.Add(new ConfigureGameBeginGameTask(this));
			blockInput(START_BUILD_PLAYFIELD_TIME);
		}	
		
		public void ConfigureGameBeginGame()
		{
			int topCardID = _dealPile.GetTopCardID();
			MoveTopDealCardToWaste ();
			DispatchEvent (new CardClickResultEvent (true, topCardID, null));
			
			// start hazards
			foreach (int cardIndex in _faceUpCards)
			{
				int cardID = _cards[cardIndex].cardID;
				GsnCard card = _deck.GetCard(cardID);
				if (card is TriPeaksCard )
				{
					TriPeaksCard triPeaksCard = (TriPeaksCard)card;
					triPeaksCard.ActivateFaceUpEffects(this, cardID );
				}
			}
            // Need to dealay this eventually
            if (_optionToggles[OPTIONS_TUTORIAL_INTRO_ID] != true)
                ResumeClock(GetStateTime());

            DispatchEvent(new FirstDealCompleteEvent());
            
        }
		
		protected void SetOptionToggle(Dictionary<string, string> att, string optionName)
		{
			if (att.ContainsKey(optionName))
			{
				int value = Convert.ToInt32(att[optionName]);
				_optionToggles[optionName] = (value == 1)?true:false;
			}
		}

		private void resetStreak()
		{
			if (_streakResetLocked)
				return;

			addUndoStep(new ModifyStreakUndoStep(_streakCount));
			_streakCount = 0;
			DispatchEvent(new UpdateStreakEvent(_streakCount));
		}

		public override int GetScore()
		{
			return score + timeBonus + streakBonus;
		}

		protected override int FinalizeScore ()
		{
			DispatchEvent(new EndGameEvent(score, streakBonus, timeBonus, _endGameReason));

 			ReportMetric(FINAL_SCORE, score + timeBonus + streakBonus);

			return score + timeBonus + streakBonus;
		}
		
		protected  override void OnInputComplete()
		{
			PauseClock(GetStateTime());
			if (null != _clockTask)
				_clockTask.UnSchedule();
			
			// kill any tasks cards may have that can be killed. such as dynamite
			for (int i = 0; i < _cards.Count; ++i)
			{
				int cardID = _cards[i].cardID;
				GsnCard card = _deck.GetCard(cardID);
                RemoveEffectTimer(card);				
			}
			
			triggerClearBoardEvent = true;
			
			timeBonus = getTimeBonus(msLeft);
			ReportMetric( TIME_BONUS, timeBonus );
			ReportMetric( STREAK_SCORE, streakBonus );

            // if there are no tasks it will never on idle, kick off manually
            if (_scheduler.wakeUpTime == GsnScheduler.NEVER || _endGameReason == (int)BaseEndGameReason.EARLY_EXIT)
            {
                _scheduler.RemoveAll();
                OnGameSettled();
            }
		}

        protected void RemoveEffectTimer(GsnCard card)
        { 
            if (card is TriPeaksCard )
            {
                TriPeaksCard triPeaksCard = (TriPeaksCard)card;
                triPeaksCard.KillFaceUpEffectTimers();
            }
        }
                
		protected int getTimeBonus(int timeLeft)
		{
			//If we end the game early, NO TIME BONUS FOR YOU!
			if (_endGameReason != (int)GameModelBase.BaseEndGameReason.NORMAL && _endGameReason != (int)GameModelBase.BaseEndGameReason.NONE)
				return 0;
			return (int)((_tweakables[TWEAK_MAX_TIME_BONUS] * msLeft) / _lengthOfGameInMS);
		}

		protected void OnDealClicked()
		{
			int topCardID = _dealPile.GetTopCardID();

			List<int> missedCards = findAllMoves (wasteCard);
/*			if (canClickWild &&  _optionToggles[ OPTIONS_TUTORIAL_INTRO_ID ] == false)
			{
				missedCards.Add (_wildID);
			}
*/

			MoveTopDealCardToWaste();		
		
			DispatchEvent (new CardClickResultEvent (true, topCardID, missedCards));
		
			// this card may be a tiki that does something and goes away
			CheckWasteForTikiAbilities();
			AdvanceTurn();
			blockInput( _tweakables[TWEAK_DEAL_CLICKED_WAIT_TIME]);

			if (canReshuffle)
				DispatchEvent (new ShowReshuffleButtonEvent());
		}					
		
		protected bool PlayBaitCard(int cardIndex)
		{
			BaseCardData data = _cards [cardIndex];

			if ( data.cardType == CardType.HazardSharkBait)
			{
				int cardID = data.cardID;	
				GsnCard baitCard = _deck.GetCard (cardID);
			
				// find faceup shark card
				List<int>  sharkCards = findAllMoves(baitCard);
				if ( sharkCards.Count < 1)
				{
					GsnDebug.Log("Missing Shark card");
					return false;		
				}
				
				// this is a bait card. it also removes the first shark card we come across
				
				
				int sharkCardIndex = sharkCards[0];
				BaseCardData sharkData = _cards [sharkCardIndex];
				int sharkCardID = sharkData.cardID;	
				
				// Remove shark first.
				RemoveFaceUpCard(sharkCardIndex, NINJA_THROW_TIME);
				_removedPile.AddCard(sharkCardID); //add to remove pile so it gets reshuffled
				
				// remove bait
				RemoveFaceUpCard(cardIndex, NINJA_THROW_TIME + BAIT_FLIP_TIME);
				_removedPile.AddCard(cardID); //add to remove pile so it gets reshuffled
				//  does not go into waste
				
				_scheduler.Add(new RemoveCardTask(this, cardID, SHARK_BOUNCE_TIME));
				DispatchEvent (new RemoveCardEvent (sharkCardID, cardID ));
				addUndoStep(new RemoveCardFromTableauUndoStep(cardIndex));
				addUndoStep(new RemoveCardFromTableauUndoStep(sharkCardIndex));
				
				// shark card removes 2 cards from the board
				blockInput(NINJA_THROW_TIME + BAIT_FLIP_TIME);	
				ReportMetric(SHARKS_CLEARED, 1);					
				return true;	
			}
			
			return false;
		}
		
		
		void ClearDynamite(int cardIndex)
		{
			BaseCardData data = _cards[cardIndex];
			TriPeaksCard card = (TriPeaksCard)_deck.GetCard(data.cardID);
			addUndoStep(new AdvanceTurnCardUndoStep(data.cardID, card.activationCounter));
			addUndoStep(new ChangeTypeUndoStep(cardIndex, data.cardType));
			RemoveEffectTimer(card);	
            
			// Remove both cards to the remove pile
			RemoveFaceUpCard(cardIndex, NINJA_THROW_TIME); //flips the cards under the bomb
			int cardID = data.cardID;	
			_removedPile.AddCard(cardID); //add to remove pile so it gets reshuffled
			addUndoStep(new RemoveCardFromTableauUndoStep(cardIndex));
			_scheduler.Add(new RemoveCardTask(this, cardID, NINJA_THROW_TIME));
			RemoveWaste(cardID); // the waste card gets blown away too
			ReportMetric(DYNAMITE_CLEARED, 1);
		}

		protected void MoveTableauCardToWaste(int cardIndex, bool playerDriven, int delayTime = 0)
		{
			BaseCardData data = _cards [cardIndex];
			int cardID = data.cardID;	
			
			addUndoStep(new TableauToWasteUndoStep(cardIndex));
			checkCurrentWasteForRemoval();
			_wastePile.AddCard(cardID);
			RemoveFaceUpCard(cardIndex, delayTime);
			ReportMetric(CARDS_COLLECTED, 1);
			IncrementStreak( delayTime );
			
			int streak = PointsForStreak(_streakCount);
			modifyScore (_tweakables[TWEAK_POINTS_PER_MATCH], streak, cardID, delayTime); // TODO move this out?
			addUndoStep(new ModifyScoreUndoStep(streak, cardID));
		}
		
		protected void ProcessClickActions(int cardIndex, ref bool sendClickResult)
		{
			BaseCardData data = _cards [cardIndex];
			int cardId = data.cardID;	
			GsnCard cardClicked = _deck.GetCard (cardId);
			
			if ( cardClicked.HasFlag(TRAP_FLAG))
			{
				addUndoStep(new ChangeTypeUndoStep(cardIndex, data.cardType));
				cardClicked.SetFlag(GameModel.TRAP_FLAG, false);
				_scheduler.Add(new RemoveTrapTask(this, cardId, NINJA_THROW_TIME));
				// Send event to view to remove the trap overlay
				RemoveWaste(cardId );
				sendClickResult = false;
				ReportMetric(TRAP_CLEARED, 1 );
			}
			else
			{
				MoveTableauCardToWaste(cardIndex, true);
			}
		}

		protected void RemoveFaceUpCard(int cardIndex, int timeDelay = 0)
		{
			BaseCardData data = _cards [cardIndex];
			_faceUpCards.Remove (cardIndex);
			addUndoStep(new RemoveCardFromFaceupUndoStep(cardIndex));

			
			// tell all the cards i am over that i am no longer over them
			for (int i=0; i < data.coversCards.Count; ++i)
			{
				int cardCovered = data.coversCards [i];	
				_cards [cardCovered].coveredByCards.Remove (cardIndex);
				addUndoStep(new UncoveredCardUndoStep(cardIndex, cardCovered));

				if (_cards [cardCovered].coveredByCards.Count == 0)
				{
					int otherCardID = _cards [cardCovered].cardID;
					GsnCard otherCard = _deck.GetCard (otherCardID);
					otherCard.faceUp = true;	
					addUndoStep(new FlippedCardUndoStep(cardCovered));
					AddFaceUpCard(cardCovered, timeDelay);
				}
			}
			_cards [cardIndex].coversCards.Clear ();
			if (_faceUpCards.Count > 0)
			{
				if (  timeDelay > 0)
					_scheduler.Add(new FlipCardTask(this, new List<int>(_faceUpCards), timeDelay));
				else
					DispatchEvent (new FlipCardEvent (_faceUpCards));
				
			}
		}
			
		private void AddFaceUpCard(int cardIndex, int timeDelay = 0,bool activateFaceUpEffects = true )
		{
			_faceUpCards.Add (cardIndex);
			addUndoStep(new AddCardToFaceupUndoStep(cardIndex));
			ActivateFaceUpCard( cardIndex, timeDelay, activateFaceUpEffects);
		}
	
		public void ActivateFaceUpCard(int cardIndex, int timeDelay = 0,bool activateFaceUpEffects = true )
		{	
			// A newly made face up card can active a card ability, like dynamite
			BaseCardData data = _cards [cardIndex];
			GsnCard card = _deck.GetCard (data.cardID);
			if ( card is TriPeaksCard)
			{
				TriPeaksCard triPeaksCard = (TriPeaksCard)card;
				if ( activateFaceUpEffects )
					triPeaksCard.ActivateFaceUpEffects(this, data.cardID, timeDelay );
				if ( timeDelay != 0)
					triPeaksCard.UpdateUI(this,data.cardID);
			}
		}
		
		protected int PointsForStreak(int streak)
		{
			return (_tweakables[TWEAK_POINTS_PER_STREAK] * (streak - 1 ));
		}

		private void IncrementStreak(int delayTime = 0)
		{
			addUndoStep(new ModifyStreakUndoStep(_streakCount));
			_streakCount ++;
			if (_streakCount > _tweakables[TWEAK_STREAK_LENGTH])
				_streakCount = _tweakables[TWEAK_STREAK_LENGTH];
			if ( delayTime == 0)
				DispatchEvent(new UpdateStreakEvent(_streakCount));
			else
				_scheduler.Add(new UpdateStreakTask(this, new UpdateStreakEvent(_streakCount), delayTime));
		
			ReportMetric( MAX_STREAK_COUNT, _streakCount );	
		}

		private void ToggleStreakResetLock()
		{
			_streakResetLocked = ! _streakResetLocked;
		}

		protected void MoveTopDealCardToWaste ()
		{
			int topCardID = _dealPile.GetTopCardID();
			checkCurrentWasteForRemoval();
			_dealPile.RemoveTopCard ();
			_wastePile.AddCard(topCardID);

			addUndoStep(new DealToWasteUndoStep(topCardID));

			resetStreak();
		}
		
		protected void RemoveWaste(int targetCardId = -1 )
		{
			// this removes the top waste card from the waste pile. BUT it should still count for reshuffle...
			int topCardID = _wastePile.GetTopCardID();
			_wastePile.RemoveTopCard();
			// dont add cards to remove that cant be reshuffled
			if ( CanCardStayInPlay())
				_removedPile.AddCard(topCardID);
			
			// tell the ui to remove the card
			DispatchEvent (new RemoveCardEvent (topCardID, targetCardId ));	
			addUndoStep(new RemoveCardFromWasteUndoStep(topCardID));
			
			if ( _wastePile.count <= 0 )
			{
				// no cards left in the waste, must move one over
				int topDealCardID = _dealPile.GetTopCardID();
				MoveTopDealCardToWaste();
				DispatchEvent (new CardClickResultEvent (true, topDealCardID, null));
			}
		}

		static public bool CanMoveCardToWaste(int cardFlags)
		{
			if ((cardFlags & GameModel.TIKI_AUTO_USE_FLAGS) != 0 )
				return false;

			return true;
		}

		protected void CheckWasteForTikiAbilities()
		{
			GsnCard card = wasteCard; //store the card, some may dump this card from waste
			int flags = card.flags;
			
			if (!CanMoveCardToWaste (flags)) 
			{
				addUndoStep(new RemoveCardFromWasteUndoStep(_deck.GetCardID(card)));
				int cardId = _wastePile.GetTopCardID();
				_wastePile.RemoveTopCard ();
				_removedPile.AddCard(cardId);
				// Delay the Remove card event on the UI to allow it to be seen by the player
				_scheduler.Add(new RemoveCardTask(this, cardId, TIKI_CARD_TIME_TO_FALL_FROM_REVEAL));
				checkCurrentWasteForRemoval();				
			}
			
			if ( card.HasFlag( GOLDEN_TIKI_FLAG))
			{
				DispatchEvent (new ShowBannerEvent (GOLDEN_TIKI_FLAG));	
			}
			else if (card.HasFlag (RED_TIKI_FLAG) || card.HasFlag (BLACK_TIKI_FLAG)) 
			{
				// red/black tiki removes all red cards that are face up to waste
				// max of 3?
				ClearRandomCardsFromList(_tweakables[TWEAK_COLOR_CARD_REMOVAL_COUNT], card);
				if( card.HasFlag (RED_TIKI_FLAG))
				{
					DispatchEvent (new ShowBannerEvent (RED_TIKI_FLAG));
					ReportMetric(RED_TIKI_USED, 1 );
				}
				else
				{	
					DispatchEvent (new ShowBannerEvent (BLACK_TIKI_FLAG));
					ReportMetric(BLACK_TIKI_USED, 1 );
				}	
							
			} 
			else if (card.HasFlag (VOLCANO_TIKI_FLAG)) 
			{
				// A Volcano is summoned and up to 5 random cards are shot out from the table. Each shot out card counts toward the streak.
				ClearRandomCardsFromList(_tweakables[TWEAK_VOLCANO_REMOVAL_COUNT], card, true);
				
				DispatchEvent (new ShowBannerEvent (VOLCANO_TIKI_FLAG));
				ReportMetric(VOLCANO_TIKI_USED, 1 );
			} 
			else if (card.HasFlag (FLOWER_TIKI_FLAG)) 
			{
				addUndoStep(new BurnRNGUndoStep(_rand.GetBurnCount()));

				// return 3 cards from waste to the end of deal
				List<int> returnedCards = new List<int>();
				while (_wastePile.count > 1 && returnedCards.Count < _tweakables[TWEAK_FLOWER_CARD_ADD_COUNT]) // cant take face up card
				{
					// random cards
					int bottomWasteCardID = _wastePile.RemoveCardAt((int)_rand.GetNextRange (0,(uint)_wastePile.count-1)); // get bottom card
					returnedCards.Add(bottomWasteCardID);
					_dealPile.AddCardAt(0,bottomWasteCardID);
					addUndoStep(new WasteToDealUndoStep(bottomWasteCardID)); //TODO add index
				}

				DispatchEvent (new GainDealCardsEvent (returnedCards));
				DispatchEvent (new ShowBannerEvent (FLOWER_TIKI_FLAG));
				blockInput(TIKI_CARD_TIME_TO_FALL_FROM_REVEAL);
				ReportMetric(BLOSSOM_TIKI_USED, 1 );
			}
		}
		
		private void ClearRandomCardsFromList(int maxNumCards, GsnCard card, bool rebuildAllMovesEveryPop = false)
		{
			List<int> cardList = findAllMoves (card);
			// spread these messages out some so the UI can show these is a nice order
			int timeToWakeup = _tweakables[TWEAK_TIKI_INITIAL_TIME_BEFORE_POP_CARD];

			addUndoStep(new BurnRNGUndoStep(_rand.GetBurnCount()));
			
			int numCleared = 0;
			while (cardList.Count > 0 && numCleared < maxNumCards) 
			{
				int randCard = (int)_rand.GetNextRange (0, (uint)cardList.Count - 1);
				int cardIndex = cardList [randCard];
				MoveTableauCardToWaste (cardIndex, false, timeToWakeup);
				int cardID = _cards [cardIndex].cardID;
				cardList.RemoveAt (randCard);
				numCleared++;
				
				_scheduler.Add(new ClickCardTask(this, true, cardID, timeToWakeup));
				timeToWakeup += _tweakables[TWEAK_TIKI_POP_CARD_TIME];
				if ( rebuildAllMovesEveryPop)
					cardList = findAllMoves (card);
			}		
			
			blockInput(timeToWakeup);
		}

		public void EndReshuffle()
		{
			// Undo has not ended since reshuffle process has started
			int topCardID = _dealPile.GetTopCardID();
			MoveTopDealCardToWaste ();
			blockInput( _tweakables[TWEAK_DEAL_CLICKED_WAIT_TIME]);
			DispatchEvent (new CardClickResultEvent (true, topCardID, null));
            DispatchEvent(new ReshuffleCompleteEvent());
            AdvanceTurn();
				
			endUndo();
		}
					
		private void OnWildOnTimeClicked()
		{
			if (_numOneTimeWildsLeft <= 0)
				return;

			addUndoStep(new OneShotWildClickedUndoStep(_numOneTimeWildsLeft));

			--_numOneTimeWildsLeft;

			// Find the misses for the old card
			List<int> missedCards = findAllMoves (wasteCard);		
			checkCurrentWasteForRemoval();
			_wastePile.AddCard( _wildID );

			DispatchEvent (new CardClickResultEvent (true, _wildID, missedCards));
			ReportMetric(WILDS_USED, 1);
			AdvanceTurn();
		}

		public int CalculateScoreUpperBound(int msPerMove)
		{
			if (endGameReason != (int)GameModelBase.BaseEndGameReason.NONE)
				return GetScore();

			int timeBonus = getTimeBonus(msLeft - msPerMove * cardsRemaining);

			int unscoredCardPoints = 0;
			int maxStreakLength = _tweakables[TWEAK_STREAK_LENGTH];
			int pointsPerMatch = _tweakables[TWEAK_POINTS_PER_MATCH];
			//Assume current streak continues through the rest of the cards in the tableau
			for (int i = 0; i < cardsRemaining && i * msPerMove <= msLeft; ++i)
			{
				int streak = Math.Min(i + _streakCount + 1, maxStreakLength);
				int streakScore = PointsForStreak(streak);
				unscoredCardPoints += pointsPerMatch + streakScore;
				//Console.WriteLine("\n ***\tStreak: " + streak + ", streakScore: " + streakScore + ", running total: " + unscoredCardPoints + ", time bonus: " + timeBonus);
			}
			return GetScore() + unscoredCardPoints + timeBonus;
		}

		protected void AdvanceTurn()
		{
			addUndoStep(new AdvanceTurnCounterUndoStep(_turnCounter));
			++_turnCounter;

			// Check if any face up cards expire on this turn
			foreach (int cardIndex in _faceUpCards)
			{
				int cardID = _cards[cardIndex].cardID;
				GsnCard card = _deck.GetCard(cardID);
				if (card is TriPeaksCard )
				{
					TriPeaksCard triPeaksCard = (TriPeaksCard)card;
					addUndoStep(new AdvanceTurnCardUndoStep(cardID, triPeaksCard.activationCounter));
					triPeaksCard.AdvanceTurn(this);
					if ( triPeaksCard.EndsGame(this)) // todo move this into card
						earlyFailBomb ();
					triPeaksCard.UpdateUI(this, cardID);
				}
			}
		}
		
		public void AdvanceCountdownTimer(int cardID, int timeLeft)
		{
			// only respond to cards still on the table
			GsnCard card = _deck.GetCard(cardID);
			if (card.pile != _wastePile && card.pile != _removedPile && card is TriPeaksCard )
			{
				TriPeaksCard triPeaksCard = (TriPeaksCard)card;
				triPeaksCard.SetActivationCounter(this, timeLeft);
				if ( triPeaksCard.EndsGame(this))
					earlyFailBomb ();
				triPeaksCard.UpdateUI(this, cardID);
			}
		}


		private void checkCurrentWasteForRemoval()
		{
			// if the current waste card is a golden tiki, it needs to be removed from play
			// we need to wait until it is replaced in order to drop it on the client.
			if ( CanCardStayInPlay())
				return;
			// dont count wild tikis in this, they are a different type for acheivements
			int cardId = _deck.GetCardID(wasteCard);
			bool isGenericGoldenTiki = wasteCard.HasFlag(GOLDEN_TIKI_FLAG) && _wildID != cardId;
			_wastePile.RemoveCard(cardId);
			_removedPile.AddCard(cardId);
			//DispatchEvent (new RemoveCardEvent (cardId));	
			_scheduler.Add(new RemoveCardTask(this, cardId, TIKI_IN_WASTE_DROP_DELAY_TIME));
			addUndoStep(new RemoveCardFromWasteUndoStep(cardId));
			if ( isGenericGoldenTiki)
				ReportMetric(GOLDEN_TIKI_USED , 1);
		}
		
		private bool CanCardStayInPlay()
		{
			GsnCard card = wasteCard;
			// Only Golden tikis so far go out of play
			if ( card == null )
				return true;

			return ( !card.HasFlag(GOLDEN_TIKI_FLAG));
		}
		
		public bool canDealCard
		{
			get
			{
				return _dealPile != null && ! _dealPile.isEmpty;
			}
		}

		public bool canClickWild
		{
			get
			{
				return HasOption(OPTIONS_ONE_SHOT_WILD_ID) && _numOneTimeWildsLeft > 0;
			}
		}

		public bool canReshuffle
		{
			get
			{
				return HasOption(OPTIONS_RESHUFFLE_ID) && _dealPile.isEmpty;
			}
		}

		public bool canHoldCard
		{
			get
			{
				return HasOption(OPTIONS_HOLD_ID) && (holdCard != null || canDealCard);
			}
		}
	    
		public bool isCardChoiceSuboptimal(int inputIndex)
		{
			BaseCardData inputData = _cards[inputIndex];
			int inputCardID = inputData.cardID;
			TriPeaksCard inputCard = _deck.GetCard(inputCardID) as TriPeaksCard;
			if (inputCard == null)
				return false;

			int inputRevealsCards = CountCardsRevealedBy(inputData);

			foreach(int cardIndex in _faceUpCards)
			{
				BaseCardData cardData = _cards[cardIndex];
				int cardID = cardData.cardID;
				TriPeaksCard card = _deck.GetCard(cardIndex) as TriPeaksCard;
				if (card == null || inputCardID == cardID)
					continue;

				if (inputCard.rank == card.rank && inputRevealsCards < CountCardsRevealedBy(cardData))
					return true;
			}
			return false;
		}

		public int GetVisibleStreak(int cardIndex)
		{
			return GetVisibleStreak(_cards[cardIndex].cardID, new List<int>(_faceUpCards));
		}

		private int GetVisibleStreak(int cardID, List<int> faceUpCards)
		{
			if (faceUpCards == null)
			{
				faceUpCards = new List<int>(_faceUpCards);
			}

			TriPeaksCard card = _deck.GetCard(cardID) as TriPeaksCard;
			if (card == null) //bait or shark
			{
				return 0;
			}

			int maxStreak = 0;
			for (int i = 0; i < faceUpCards.Count; ++i)
			{
				int faceUpCardIndex = faceUpCards[i];
				int faceUpCardID = _cards[faceUpCardIndex].cardID;
				TriPeaksCard faceUpCard = _deck.GetCard(faceUpCardID) as TriPeaksCard;
				if (faceUpCard == null) //bait or shark
				{
					continue;
				}

				if (isCardOneUpOrDown(card, faceUpCard))
				{
					List<int> remainingCards = new List<int>(faceUpCards);
					remainingCards.Remove(faceUpCardIndex);

					int streak = GetVisibleStreak(faceUpCardID, remainingCards) + 1;
					maxStreak = Math.Max(streak, maxStreak);
				}
			}

			return maxStreak;
		}

		public int CountCardsRevealedBy(int cardIndex)
		{
			BaseCardData data = _cards[cardIndex];
			return CountCardsRevealedBy(data);
		}

		private int CountCardsRevealedBy(BaseCardData data)
		{
			int result = 0;
			foreach (int i in data.coversCards)
			{
				BaseCardData coveredData = _cards[i];
				if (coveredData.coveredByCards.Count == 1)
					++result;
			}

			return result;
		}
		
		public bool HasOption(string optionName)
		{
			return _optionToggles[optionName];	
		}

		private void earlyFailBomb()
		{
			endGameReason = (int)EndGameReason.BOMB_EXPLODED;
		}

		private void earlyFailNoMoreMoves()
		{
			endGameReason = (int)EndGameReason.NO_MORE_MOVES;
		}

		public int GetReshuffleTime()
		{
			return _tweakables[TWEAK_RESHUFFLE_TIME];
		}

		public override void RewindTasks(int stateTimeMS, int clockTaskAccumulatedPauseTime)
		{
			base.RewindTasks(stateTimeMS, clockTaskAccumulatedPauseTime);
			
			for (int i = 0; i < _deck.count; ++i)
			{
				GsnCard card = _deck.GetCard(i);
				card.Rewind(stateTimeMS);
			}
		}

		public string CardIndexToString(int cardIndex)
		{
			return CardIDToString(_cards[cardIndex].cardID);
		}

		public string CardIDToString(int cardID)
		{
			if (cardID == -1)
				return "NULL";
			else
				return String.Format("{0}#{1}", _deck.GetCard(cardID).PrettyString(), cardID);
		}

		public override string ToString()
		{
			StringBuilder result = new StringBuilder();
			result.AppendFormat("State time: {0}\tTime left: {1}\t", GetStateTime(), msLeft);
			result.AppendFormat("Score: {0}\tScore upper bound: {1}\n", GetScore(), CalculateScoreUpperBound(1000));

			result.Append("Face up: ");
			foreach (int faceUpCardIndex in _faceUpCards)
			{
				int cardID = _cards[faceUpCardIndex].cardID;
				result.AppendFormat("{0}|", CardIDToString(cardID));
			}

			result.Append("\n");

			int dealPileCount = _dealPile.count;
			result.AppendFormat("Deal pile count: {0}\t", dealPileCount);
			/*
			for (int i = 0; i < dealPileCount; ++i)
			{
				int cardID = _dealPile.GetCardIDAt(i);
				result.AppendFormat("{0}|", CardIDToString(cardID));
			}
			*/

			int wasteID = _deck.GetCardID(wasteCard);
			result.AppendFormat("Waste: {0}\t", CardIDToString(wasteID));

			if (holdCard == null)
				result.Append("Hold [ ]\t");
			else
				result.AppendFormat("Hold [{0}]\t", CardIDToString(_deck.GetCardID(holdCard)));

			if (_numOneTimeWildsLeft > 0)
				result.AppendFormat("Wild [{0}]", CardIDToString(_wildID));
			else
				result.Append("Wild [ ]");

			return result.ToString();
		}

		public string getCardStringFromIndex(int index)
		{
			return _deck.GetCard(_cards[index].cardID).PrettyString();
		}

    }
}
