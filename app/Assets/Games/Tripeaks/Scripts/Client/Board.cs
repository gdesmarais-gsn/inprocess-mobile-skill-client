using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Client;
using GSN.Skill.Games.Common.Client.Game;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common.Events;
using GSN.Skill.Games.Common.Client.Audio;
using GSN.Skill.Games.Common.Model;

namespace GSN.Skill.Games.Tripeaks
{
	public class Board : MonoBehaviour
	{
		public Transform _drawPile;
		public Transform _wastePile;
		public HoldingCard _holdingCard;
		public WildButton _wildButton;
		private float _screenWorldLeftSide;
		public UIHud _uiHud;

        private Vector3 _wastePilePosition;
		private Vector3 _drawPilePosition;
		private Vector3 _wildCardButtonPos;


		const float DEAL_CARD_SPACING = .1f;
		const float DEAL_BUFFER = .5f;// space between deal loc and edge to buffer
		
		const float EVENT_TIME_DELAY = .5f; // half a second.
		const float MIN_Z_DIFF = .04f;
		const float WASTE_Z_OFFSET = .25f;
		
		const float START_BUILD_TABLEAU_TIME = 1.0f;
		const float START_FLIP_DELAY_TIME = .8f;		
		const float START_FLIP_CARDS_TIME = .25f;
		const float START_BUILD_DEAL_TIME = .25f;
		const float START_DEAL_DELAY_TIME = .8f;
		
		const float RESHUFFLE_DEAL_TIME = 4.0f;
		const float DEAL_ANIM_TIME = 1.4f;
		const float GAIN_DEAL_TIME = 1.0f;

		const float END_GAME_CYCLONE_DELAY = .04f;

		const float MIN_END_GAME_FALL_DELAY = .01f;
		const float MAX_END_GAME_FALL_DELAY = .04f;
		const float DEAL_SHOW_HAZARDS_DELAY = .25f;

		const float CARD_Z_SCALER = 4.0f;
		
		List<Card> _cards = new List<Card> ();
		List<Card> _dealPile = new List<Card> ();
		List<Card> _wasteCards = new List<Card> ();		

		Card _wildCardOneShot = null;
		
		int _reshufflePenalty = 10;
		float _lastReshuffleTime = 0;
		PlayfieldData _pfData;
		IEnumerator _reshuffleCoroutine;
        IEnumerator _animateDealTableau;
		
		const int FACE_CARD_POOL_SIZE = 52;
		const int GOLDEN_CARD_POOL_SIZE = 2;
		const int ONE_SHOT_WILD_CARD_POOL_SIZE = 1;
		const int BLACK_TIKI_CARD_POOL_SIZE = 2;
		const int RED_TIKI_CARD_POOL_SIZE = 2;
		const int FLOWER_TIKI_CARD_POOL_SIZE = 2;
		const int VOLCANO_TIKI_CARD_POOL_SIZE = 2;
		const int SHARK_CARD_POOL_SIZE = 2;
		const int SHARK_BAIT_CARD_POOL_SIZE = 2;		
		const int TRAP_POOL_SIZE = 4;
		const int DYNAMITE_POOL_SIZE = 4;
        const int TUTORIAL_OVERLAY_POOL_SIZE = 2;

        private const string FACE_CARD_RESOURCE = "FaceCard";
		private const string GOLDEN_TIKI_CARD_RESOURCE = "GoldenTikiCard";
		private const string RED_TIKI_CARD_RESOURCE = "RedTikiCard";
		private const string BLACK_TIKI_CARD_RESOURCE = "BlackTikiCard";
		private const string FLOWER_TIKI_CARD_RESOURCE = "BlossomTikiCard";
		private const string VOLCANO_TIKI_CARD_RESOURCE = "VolcanoTikiCard";
		private const string ONE_SHOT_WILD_CARD_RESOURCE = "OneShotWildCard";

		private const string SHARK_CARD_RESOURCE = "SharkCard";
		private const string BAIT_CARD_RESOURCE = "BaitCard";
		private const string DYNAMITE_OVERLAY_RESOURCE = "DynamiteHazard";
		private const string TRAP_OVERLAY_RESOURCE = "TrapHazard";

        private const string TUTORIAL_SELECT_OVERLAY_RESOURCE = "Gameplay/OrangeTutorialOverlay";
        private const string TUTORIAL_DESTINATION_OVERLAY_RESOURCE = "Gameplay/GreenTutorialOverlay";

        public const string DECK_ASSET_BUNDLE = "tripeaks.deck.assetbundle";

        private const string DECK_DATA_RESOURCE = "DeckData";
		
		private MonoBehaviourPool _faceCardPool;
		private MonoBehaviourPool _goldenCardPool;
		private MonoBehaviourPool _oneShotWildCardPool;
		private MonoBehaviourPool _blackTikiCardPool;
		private MonoBehaviourPool _redTikiCardPool;
		private MonoBehaviourPool _flowerTikiCardPool;
		private MonoBehaviourPool _volcanoTikiCardPool;
		private MonoBehaviourPool _sharkCardPool;
		private MonoBehaviourPool _sharkBaitCardPool;
		private MonoBehaviourPool _trapOverlayPool;
		private MonoBehaviourPool _dynamiteOverlayPool;
        private MonoBehaviourPool _tutorialSelectOverlayPool;
        private MonoBehaviourPool _tutoriaDestinationOverlayPool;

		private DeckData _deckData;		
		
		private bool _poolsInitilized = false;
		public List<Card> cards
		{
			get { return _cards;}
		}
		
		public List<Card> dealPile
		{
			get { return _dealPile;}
		}
		
		public int wasteCount
		{
			get { return _wasteCards.Count;}	
		}
		
		public bool poolsInitilized
		{
			get { return _poolsInitilized;}
		}
		
		public float screenWorldLeftSide
		{
			set { _screenWorldLeftSide = value;}
		}

		// Creates all the pools
		public IEnumerator initializePool(Dictionary<string, string> joinRecord)
		{
            View view = (View)ViewBase.Instance;

			GameObject parentObjPool = new GameObject("Parent Pool");
            parentObjPool.SetActive(false);
            
			_faceCardPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, FACE_CARD_RESOURCE, FACE_CARD_POOL_SIZE);
			_goldenCardPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, GOLDEN_TIKI_CARD_RESOURCE, GOLDEN_CARD_POOL_SIZE);
			_oneShotWildCardPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, ONE_SHOT_WILD_CARD_RESOURCE, ONE_SHOT_WILD_CARD_POOL_SIZE);
			_blackTikiCardPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, BLACK_TIKI_CARD_RESOURCE, BLACK_TIKI_CARD_POOL_SIZE);
			_redTikiCardPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, RED_TIKI_CARD_RESOURCE, RED_TIKI_CARD_POOL_SIZE);
			_flowerTikiCardPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, FLOWER_TIKI_CARD_RESOURCE, FLOWER_TIKI_CARD_POOL_SIZE);
			_volcanoTikiCardPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, VOLCANO_TIKI_CARD_RESOURCE, VOLCANO_TIKI_CARD_POOL_SIZE);
			_sharkCardPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, SHARK_CARD_RESOURCE, SHARK_CARD_POOL_SIZE);
			_sharkBaitCardPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, BAIT_CARD_RESOURCE, SHARK_BAIT_CARD_POOL_SIZE);
			
			_trapOverlayPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, TRAP_OVERLAY_RESOURCE, TRAP_POOL_SIZE);
			_dynamiteOverlayPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, DYNAMITE_OVERLAY_RESOURCE, DYNAMITE_POOL_SIZE);

			_tutorialSelectOverlayPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, TUTORIAL_SELECT_OVERLAY_RESOURCE, TUTORIAL_OVERLAY_POOL_SIZE);
			_tutoriaDestinationOverlayPool = view.CreateObjectPool(parentObjPool.transform, View.GAME_ASSET_BUNDLE, TUTORIAL_DESTINATION_OVERLAY_RESOURCE, TUTORIAL_OVERLAY_POOL_SIZE);


			_deckData = view.LoadAsset<DeckData> (DECK_ASSET_BUNDLE, DECK_DATA_RESOURCE);

			if ( _deckData == null)
				GsnDebug.LogError("Failed to load deck data");

            _poolsInitilized = true;
			yield return null;
			
		}
		
		public void Init (string deck, PlayfieldData playfieldData, bool oneShotWildEnabled, int backgroundDifficultyIndex)
		{		
			_drawPilePosition = _drawPile.position;
			_wastePilePosition = _wastePile.position;
			_wildCardButtonPos = _wildButton.transform.position;
			_pfData = playfieldData;

			string[] cardIDs = deck.Split (',');

			// cards in play
			int index = 0;
			for (index = 0; index < playfieldData.cardData.Length; ++index) 
			{
				CreateCard (int.Parse (cardIDs [cardIDs.Length - 1 - index]), index, playfieldData.cardData [index], PileID.Tableau, backgroundDifficultyIndex);
			}

			Vector3 cardPos = _wastePilePosition;

			cardPos = _drawPilePosition;

			// Cards that make up the leftover deck
			int x =0;
			int totalCardsInDeal = cardIDs.Length - index;
			for (; index < cardIDs.Length; ++index, ++x) 
			{
				CreateCard (int.Parse (cardIDs [cardIDs.Length - 1 - index]), index, cardPos, Quaternion.identity, PileID.Deal, backgroundDifficultyIndex);
				cardPos.x -= GetCardSpacing(x, totalCardsInDeal);
				cardPos.z += MIN_Z_DIFF;
				_dealPile.Add(_cards [index]);
			}

			if ( oneShotWildEnabled)		// need to create the Wild One shot
			{
                int wildId = _cards.Count;

                // tutorial can have less than 52 visible cards
                if (wildId < 52)
                    wildId = 52;

                CreateCard (wildId + (GameModel.ONE_SHOT_WILD_FLAG<<8), index, _wildCardButtonPos + new Vector3(0,0,MIN_Z_DIFF), Quaternion.identity, PileID.OneShotWild, backgroundDifficultyIndex);
				_wildCardOneShot = _cards [_cards.Count - 1];
			}
		}
		
		public void onBuildPlayfieldEvent(IModelEvent e, PlayfieldData playfieldData )
		{
			BuildPlayfieldEvent buildPlayfieldEvent = (BuildPlayfieldEvent)e;
            _animateDealTableau = animateDealTableau(playfieldData, buildPlayfieldEvent.cardIndices);
			StartCoroutine(_animateDealTableau);
		}
		
		
		IEnumerator animateDealTableau(PlayfieldData playfieldData, List<int> flippedCards)
		{
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.CardDeal);
			// Tableau
			float timeDelay = START_BUILD_TABLEAU_TIME / _cards.Count;
			for (int index = 0; index < playfieldData.cardData.Length; ++index) 
			{
				yield return new WaitForSeconds(timeDelay);
				if ( flippedCards.Contains(index))
					_cards [index].PlayfieldDealActive();
				else
					_cards [index].PlayfieldDeal();
				
			}
			
			// Flip cards
			timeDelay = START_FLIP_CARDS_TIME / flippedCards.Count;
			yield return new WaitForSeconds(START_FLIP_DELAY_TIME);
			//foreach( int index in flippedCards )
			for (int x = flippedCards.Count -1; x >= 0;--x)
			{
				yield return new WaitForSeconds(timeDelay);
				_cards [flippedCards[x]].FlipCard (true, false);
			}
			
			StartCoroutine(AnimateHazardsEntry(flippedCards));
			
			// Deal
			timeDelay = START_BUILD_DEAL_TIME / _dealPile.Count;
			for (int x = 0;x < _dealPile.Count;++x)
			{
				yield return new WaitForSeconds(timeDelay);
				_dealPile[x].DrawPileDeal();
			}


            // Wild
            if (_wildCardOneShot != null && _wildCardOneShot.pileId == PileID.OneShotWild && !((View)ViewBase.Instance).IsinTutorial())
            {
				yield return new WaitForSeconds(timeDelay);
                DealOneShotWild();
            }

			yield return new WaitForSeconds(1.7f);

			_uiHud.showHoldSlot();
		}

		IEnumerator AnimateHazardsEntry(List<int> flippedCards)
		{
			yield return new WaitForSeconds(DEAL_SHOW_HAZARDS_DELAY);
			// Trigger hazards appear
			for (int x = flippedCards.Count -1; x >= 0;--x)
			{
				_cards [flippedCards[x]].OverlayAppear();
			}
		}

		void CreateCard (int cardID, int cardIndex, PlayfieldData.CardData cardData, PileID pileID, int backgroundDifficultyIndex )
		{	
			CreateCard (cardID, cardIndex, cardData.cardPos, cardData.cardRot, pileID, backgroundDifficultyIndex, cardData.cardType  );
		}

		void CreateCard (int cardID, int cardIndex, Vector3 position, Quaternion rot, PileID pileID, int backgroundDifficultyIndex, CardType cardType = CardType.Normal)
		{	
			int flags = cardID >> 8;

			MonoBehaviourPool pool = null;

			// we kinda have dupe info here with flags and card types. I'd like to get rid of the flags and just use cardtype
			switch (flags)
			{
			case GameModel.GOLDEN_TIKI_FLAG:
				pool = _goldenCardPool;
				break;
			case GameModel.ONE_SHOT_WILD_FLAG:
				pool = _oneShotWildCardPool;
				break;
			case GameModel.BLACK_TIKI_FLAG:
				pool = _blackTikiCardPool;
				break;
			case GameModel.RED_TIKI_FLAG:
				pool = _redTikiCardPool;
				break;
			case GameModel.FLOWER_TIKI_FLAG:
				pool = _flowerTikiCardPool;
				break;
			case GameModel.VOLCANO_TIKI_FLAG:
				pool = _volcanoTikiCardPool;
				break;
			case GameModel.SHARK_FLAG:
				pool = _sharkCardPool;
				break;
			case GameModel.SHARK_BAIT_FLAG:
				pool = _sharkBaitCardPool;
				break;
			default:
				pool = _faceCardPool;
				break;
			};
			
			PooledMonoBehaviour poolGO = pool.getObject();
			GameObject GO = poolGO.gameObject;
            GO.transform.SetParent(this.transform, false);
			if ( pileID == PileID.Tableau ) //only z shift in tableau
				position.z *= CARD_Z_SCALER;
			GO.transform.position = position;

			Vector3 eulerAngles = rot.eulerAngles;
			eulerAngles = new Vector3(0, 0, eulerAngles.z);
			rot = Quaternion. Euler(eulerAngles);

			GO.transform.rotation = rot;
            
	
			Card card = GO.GetComponent<Card> ();
			card.setCard (cardID, cardIndex, pileID, cardType, _deckData);
			card.setCardTint(backgroundDifficultyIndex);


            // Create any overlays
            AddOverlay(card, cardType);

			_cards.Add (card);
		}

		public void AddOverlay(Card card, CardType cardType)
		{
			if ( (card.flag & GameModel.TRAP_FLAG) > 0)
				card.AddOverlay(_trapOverlayPool.getObject().gameObject);
			else if ( (card.flag & GameModel.DYNAMITE_FLAG) > 0)
				card.AddOverlay(_dynamiteOverlayPool.getObject().gameObject);

            if (cardType == CardType.TutorialSelect)
                card.AddOverlay(_tutorialSelectOverlayPool.getObject().gameObject);
            else if (cardType == CardType.TutorialDestination)
                card.AddOverlay(_tutoriaDestinationOverlayPool.getObject().gameObject);

        }

		public void onCardClickedResult (IModelEvent e)
		{
			CardClickResultEvent ccre = (CardClickResultEvent)e;
			if (ccre.goodMove) 
			{
				Card card = FindCardWithCardID(ccre.cardID);
				switch (card.pileId)
				{
					case PileID.Deal:
						TriPeaksAnalytics.instance.ReportCardDrawn(ccre.missedCards != null && ccre.missedCards.Count != 0);
						break;
					case PileID.Tableau:
						TriPeaksAnalytics.instance.ReportCardCollected(ccre.streakLevel);
						break;
					case PileID.OneShotWild:
						TriPeaksAnalytics.instance.ReportWildUsed();
						break;
					case PileID.Hold:
						TriPeaksAnalytics.instance.ReportHoldCellUsed(false);
						break;
				}

				MoveCardToWaste(ccre.cardID);
			}
			
			if (ccre.missedCards != null) 
			{
				foreach(int cardIndex in ccre.missedCards)
				{
					_cards[cardIndex].CardShake();
				}
			}
		}

		public void onFlipCardResult( IModelEvent e )
		{
			FlipCardEvent flipEvent = (FlipCardEvent)e;
			foreach( int index in flipEvent.cardIndices )
				_cards [index].FlipCard (true);
		}

		public void onGainDealCards( IModelEvent e )
		{
			GainDealCardsEvent gainDealCardsEvent = (GainDealCardsEvent)e;

			StartCoroutine(animateGainDealPileReshuffle(gainDealCardsEvent.newDealCards));	
			
		}
		
		IEnumerator animateGainDealPileReshuffle(List<int> newdealCards)
		{
			// Deal
			Vector3 cardPos = _drawPilePosition;
			float timeDelay = GAIN_DEAL_TIME / newdealCards.Count;

			foreach (int cardID in newdealCards) 
			{
				// move card from waste to deal
				Card card = FindCardWithCardID (cardID);

				if ( card == null )
				{
					GsnDebug.Log("Missing Card "+cardID);
					break;
				}

                //card.transform.position = cardPos;
                card.SetPile(PileID.Deal);
                card.FlipCard(false);
				card.CardFaceDownOffScreen();
				
				_dealPile.Add(card);
				RemoveFromWasteCards(card, false);												
			}
			
			// rearrange deal cards
			int index = 0;
			foreach (Card card in _dealPile) 
			{
				card.MoveCard (cardPos, Card.DEAL_MOVE_TIME, false);
				cardPos.x -= GetCardSpacing(index, _dealPile.Count);
				cardPos.z += MIN_Z_DIFF;
				++index;
			}
			
			foreach (int cardID in newdealCards) 
			{
				yield return new WaitForSeconds(timeDelay);
				
				// move card from waste to deal
				Card card = FindCardWithCardID (cardID);

				if ( card == null )
				{
					GsnDebug.Log("Missing Card "+cardID);
					break;
				}
				
				card.DrawPileDeal();											
			}
			// We still need to arrange these, since the cards are randomly removed from the waste
			ArrangeWasteCards();
		}

		void MoveCardToWaste(int cardID)
		{
			Card cardToMove = FindCardWithCardID (cardID);
			if (cardToMove == null) 
			{
				GsnDebug.LogError ("Error missing card ID:" + cardID);
				return;
			}

			
			bool rotateMove = true;
			if (_dealPile.Contains (cardToMove)) 
			{
				_dealPile.Remove (cardToMove);
				// move draw pile closer
				Vector3 cardPos = _drawPilePosition;
				int index = 0;
				foreach (Card card in _dealPile) 
				{
					card.MoveCard (cardPos, Card.DEAL_MOVE_TIME, false);
					cardPos.x -= GetCardSpacing(index, _dealPile.Count);
					cardPos.z += MIN_Z_DIFF;
					++index;
				}
				rotateMove = false;
			}

			// if this is the one shot or hold. do not rotateMove
			if ( (cardToMove.flag & GameModel.ONE_SHOT_WILD_FLAG) > 0  ||
				cardToMove.pileId == PileID.Hold )
				rotateMove = false;
				
			// Turn off the wild button, game model should ignore it, but no reason to keep sending the msg up
			if ( (cardToMove.flag & GameModel.ONE_SHOT_WILD_FLAG) > 0)
				_wildButton.gameObject.SetActive (false);
				
			cardToMove.ClearOverlay();
			

			//make these the same z level to prevent fighting
			Vector3 sourcePos = cardToMove.transform.position;
			sourcePos.z = _wastePilePosition.z;
			cardToMove.transform.position = sourcePos;
			cardToMove.FlipCard(true);
			
			if ( rotateMove)
				cardToMove.MoveCardWithRot (_wastePilePosition, Quaternion.identity);
			else 
				cardToMove.MoveCard(_wastePilePosition);			

			AddToWasteCards(cardToMove);
		}

		public void onShowReshuffleButton(IModelEvent e )
		{
			_uiHud.showReshuffleButton();
		}
		
		public void onRemoveTrap(IModelEvent e )
		{
			RemoveTrapEvent removeTrapEvent = (RemoveTrapEvent)e;
			Card trapCard = FindCardWithCardID (removeTrapEvent.cardID);
			if (trapCard == null) 
			{
				GsnDebug.LogError ("Error missing card ID:" + removeTrapEvent.cardID);
				return;
			}

			trapCard.ClearOverlay();
			trapCard.cardType = CardType.Normal;
		}
		public void onMoveCardToHoldEvent( IModelEvent e )
		
		{
			MoveCardToHoldEvent moveCardToHoldEvent = (MoveCardToHoldEvent)e;
			Card cardToMoveToHold = FindCardWithCardID (moveCardToHoldEvent.cardID);
			if (cardToMoveToHold == null) 
			{
				GsnDebug.LogError ("Error missing card ID:" + moveCardToHoldEvent.cardID);
				return;
			}
			
			// move card on waste to hold
			Vector3 adjustedHoldPos = _holdingCard.transform.position;
			adjustedHoldPos.z = _wastePilePosition.z;
			_holdingCard._CurrentCard = cardToMoveToHold;
			_holdingCard._CurrentCard.SetPile ( PileID.Hold);
			cardToMoveToHold.MoveCard (adjustedHoldPos);
			cardToMoveToHold.MoveCard (_holdingCard.transform.position);
			RemoveFromWasteCards(cardToMoveToHold);

			TriPeaksAnalytics.instance.ReportHoldCellUsed(true);
            
            // move card on deal to waste
			MoveCardToWaste (_dealPile [0].cardID);
		}

		float GetCardSpacing( int cardCountInDeal, int numTotalCards )
		{
			float sizeToDealIn = Mathf.Abs(_screenWorldLeftSide - _drawPile.transform.position.x) - DEAL_BUFFER;
			float spacePerCard = sizeToDealIn / (float)numTotalCards;
			 
			if ( spacePerCard > DEAL_CARD_SPACING)
				spacePerCard = DEAL_CARD_SPACING;
			return 	spacePerCard;
		}
		
		public void onReshuffleEvent( IModelEvent e )
		{
			_uiHud.hideReshuffleButton();
			ReshuffleEvent reshuffleEvent = (ReshuffleEvent)e;

			_reshufflePenalty = (int)(reshuffleEvent.reshuffleTimePenalty * .001f);
			// move cards from waste back to deal in this new order
			// top is the new waste

			// this should run for X seconds

			_dealPile.Clear ();
			_wasteCards.Clear();
			_uiHud.showReshuffle();
			_lastReshuffleTime = Time.time;

			string[] cardIDs = reshuffleEvent.reshuffledCards.Split (',');

			Vector3 cardPos = _wastePilePosition;

			Card card = FindCardWithCardID(int.Parse(cardIDs[cardIDs.Length - 1]));
			if ( card == null )
			{
				GsnDebug.Log("Missing Card "+cardIDs[cardIDs.Length - 1]);
				return;
			}

			card.transform.position = _wastePilePosition;

			cardPos = _drawPilePosition;
			// Card that make up the leftover deck
			for (int index = 0; index < cardIDs.Length; ++index) 
			{
				cardPos.x -= GetCardSpacing(index, cardIDs.Length);
				cardPos.z += MIN_Z_DIFF;


				card = FindCardWithCardID(int.Parse(cardIDs[cardIDs.Length - 1 - index]));
				if ( card == null )
				{
					GsnDebug.Log("Missing Card "+cardIDs[cardIDs.Length - 1 - index]);
					break;				
				}
				card.KillTweenAndAnimations();
				card.transform.position = cardPos;
				card.transform.eulerAngles = Vector3.zero; //reset local rotation in case modified from card spin
                card.SetPile(PileID.Deal);
                card.faceUp = false;
                card.CardFaceDownOffScreen();
				
				_dealPile.Add(card);
				
			}
			
			_reshuffleCoroutine = animateDealPileReshuffle();
			StartCoroutine(_reshuffleCoroutine);			
		}	
		
		IEnumerator animateDealPileReshuffle()
		{
			// Deal
			float timeDelay = (_reshufflePenalty - DEAL_ANIM_TIME) / _dealPile.Count;
			for (int x = 0;x < _dealPile.Count;++x)
			{
				yield return new WaitForSeconds(timeDelay);
				_dealPile[x].DrawPileDeal();
			}
		}
		
		public void onRemoveCard(IModelEvent e)
		{
			RemoveCardEvent removeCardEvent = (RemoveCardEvent)e;
			
			Card cardToRemove = FindCardWithCardID (removeCardEvent.cardID);
			if (cardToRemove == null) 
			{
				GsnDebug.LogError ("Error missing card ID:" + removeCardEvent.cardID);
				return;
			}
			
			// make card fall off and set pile to Removed.
			// if we reshuffle this card later, we need to reset it anim state to the default to place it back
			bool wasInTableau = cardToRemove.pileId == PileID.Tableau;
			
			// if this was already in the waste, set this out a little in the z order. this is to prevent clipping when arrange is called.
			if ( cardToRemove.pileId == PileID.Waste)
			{
				Vector3 adjustedWastePos = new Vector3 (0, 0, -WASTE_Z_OFFSET) + _wastePilePosition;
				cardToRemove.transform.position = adjustedWastePos;
			}
			
			RemoveFromWasteCards(cardToRemove);
			cardToRemove.SetPile(PileID.Removed);
			
			// if the card has a target id. send it flying to that card
			if ( removeCardEvent.targetCardID != -1)
			{
				Card targetCard = FindCardWithCardID (removeCardEvent.targetCardID);
				if (targetCard == null) 
				{
					GsnDebug.LogError ("Error missing card ID:" + removeCardEvent.targetCardID);
					return;
				}
				
				if ( cardToRemove.flag == GameModel.SHARK_FLAG)
					cardToRemove.MoveCardWithBounce(targetCard.transform.position, GameModel.SHARK_BOUNCE_TIME * .001f);
				else
					cardToRemove.MoveCardNinjaStar(targetCard.transform.position, GameModel.NINJA_THROW_TIME * .001f);
			}
			else
			{
				cardToRemove.ClearOverlay();
				if ( wasInTableau)
					cardToRemove.PlayfieldCardFall();
				else if ( cardToRemove.faceUp)
					cardToRemove.CardWastePileFall();		
				else 
					cardToRemove.DrawPileFall();
			}
		}		
		
		void AddToWasteCards( Card card)
		{			
			card.SetPile (PileID.Waste);		
			_wasteCards.Add(card);
			ArrangeWasteCards();		
		}

		void RemoveFromWasteCards( Card card, bool arrangeCards = true )
		{
			if (!_wasteCards.Remove(card))
				GsnDebug.Log("Failed to remove from waste cards");	
			if ( arrangeCards )
				ArrangeWasteCards();
		}
		
		void ArrangeWasteCards()
		{
			if (_wasteCards.Count <= 0 )
				return;
				
			// The top Waste card is at a higher z level.
			// Second is a little farther back
			// the rest are on top of each other
			// This is to prevent clipping in the reveal animation
			// the rest are below
			
			Card topCard = _wasteCards[_wasteCards.Count - 1];
			topCard.MoveCard(_wastePilePosition,0);
				//topCard.transform.position = _wastePilePosition;
			
			Vector3 adjustedWastePos = new Vector3 (0, 0, WASTE_Z_OFFSET) + _wastePilePosition;
			
			if ( _wasteCards.Count > 1)			
				_wasteCards[_wasteCards.Count - 2].MoveCard(adjustedWastePos,0);
			
			for (int x = _wasteCards.Count - 3; x >= 0;--x)
			//for (int x = 0;x < _wasteCards.Count - 2;++x)
			{
				adjustedWastePos.z += MIN_Z_DIFF;			
				_wasteCards[x].MoveCard(adjustedWastePos, 0);
				//_wasteCards[x].MoveCardWithRot(adjustedWastePos, Quaternion.identity,0);			
			}
		}

		public Card FindCardWithCardID(int cardID )
		{
			// strip the flags off the card id
			int value = cardID - ((cardID >> 8)<<8);
			foreach (Card card in _cards)
				if (card.value == value)
					return card;

			return null;
		}

		int TimeSinceLastReshuffle()
		{
			return (int)(Time.time - _lastReshuffleTime);
		}

		public bool InReshuffleCountdown()
		{
			if (_reshufflePenalty - TimeSinceLastReshuffle () > 0)
				return true;
			return false;
		}

        public void DealOneShotWild()
        {
            _wildCardOneShot.DrawPileDeal();
            StartCoroutine(ActivateTutorialOneShotWildButton());
        }

        private IEnumerator ActivateTutorialOneShotWildButton()
        {
            yield return new WaitForSeconds(1f);
            _wildButton.gameObject.SetActive(true);
        }

        public void DisableWildButton()
        {
            _wildButton.gameObject.SetActive(false);
        }

        public IEnumerator ClearBoard(int endReason)
		{
			// Stop any delayed animations
			if (_reshuffleCoroutine != null)
				StopCoroutine(_reshuffleCoroutine);
           // There could be DEAL anims still playing, 
           if ( _animateDealTableau != null)
                StopCoroutine(_animateDealTableau);
             
				
			_uiHud.hideHoldSlot();
			_wildButton.gameObject.SetActive(false);
			if (_wildCardOneShot != null)
				_wildCardOneShot.gameObject.SetActive(false);

			yield return new WaitForSeconds(.6f);

			if (endReason == (int)GameModelBase.BaseEndGameReason.NORMAL)
				StartCoroutine(animateCardCyclone());
			else
				StartCoroutine(animateCardsFalling());
		}
		
		IEnumerator animateCardCyclone()
		{
            yield return StartCoroutine(animateCardsFalling());
            yield return new WaitForSeconds(MAX_END_GAME_FALL_DELAY);

            AudioFactory.instance.PlaySoundEffect(TriPeaksAudio.LastCard);
			AudioFactory.instance.PlaySoundEffect(TriPeaksAudio.CardCyclone);

			foreach (Card card in _cards)
			{
				if (card.gameObject.activeSelf)
				{
					card.transform.localPosition = new Vector3(0,-3,0);
				}
			}

			foreach (Card card in _cards)
			{
				if (card.gameObject.activeSelf)
				{
					yield return new WaitForSeconds(END_GAME_CYCLONE_DELAY);
					card.CardCyclone();
				}
			}
		}

		IEnumerator animateCardsFalling()
		{
			AudioFactory.instance.PlaySoundEffect(TriPeaksAudio.CardFall);
			// Cards in tableau fall
			// Cards from deal
			// cards from waste
			// hold card
			
			foreach (Card card in _cards)
			{
				if (card.gameObject.activeSelf && card.pileId == PileID.Tableau)
				{
					yield return new WaitForSeconds(UnityEngine.Random.Range (MIN_END_GAME_FALL_DELAY, MAX_END_GAME_FALL_DELAY));
					card.PlayfieldCardFall();
				}
			}
			
			//for (int x = _dealPile.Count -1 ;x >= 0 ;--x)
			for (int x = 0;x < _dealPile.Count  ;++x)			
			{
				yield return new WaitForSeconds(UnityEngine.Random.Range (MIN_END_GAME_FALL_DELAY, MAX_END_GAME_FALL_DELAY));					
				_dealPile[x].DrawPileFall();
			}
			
			for (int x = _wasteCards.Count - 1; x >= 0;--x)
			//for (int x = 0; x < _wasteCards.Count ;++x)			
			{
				if (_wasteCards[x].gameObject.activeSelf)
				{
					yield return new WaitForSeconds(UnityEngine.Random.Range (MIN_END_GAME_FALL_DELAY, MAX_END_GAME_FALL_DELAY));
					_wasteCards[x].CardWastePileFall();
				}
			}
			
			if ( _holdingCard._CurrentCard != null)
			{
				yield return new WaitForSeconds(UnityEngine.Random.Range (MIN_END_GAME_FALL_DELAY, MAX_END_GAME_FALL_DELAY));
				_holdingCard._CurrentCard.CardWastePileFall();
			}
			
			if ( _wildCardOneShot != null && _wildCardOneShot.pileId == PileID.OneShotWild)
			{
				yield return new WaitForSeconds(UnityEngine.Random.Range (MIN_END_GAME_FALL_DELAY, MAX_END_GAME_FALL_DELAY));
				_wildCardOneShot.DrawPileFall();				
			}
		}

		void addCardToTopOfDeal(int cardID)
		{
			Vector3 cardPos = _drawPilePosition;
			// Card that make up the leftover deck

			Card card = FindCardWithCardID (cardID);
			_dealPile.Insert(0, card);
			card.FlipCard(false);
			RemoveFromWasteCards(card);
			
			int cardsCount = _dealPile.Count;
			for (int index = 0; index < cardsCount; ++index) 
			{
				cardPos.x -= GetCardSpacing(index, cardsCount);
				cardPos.z += MIN_Z_DIFF;
				
				
				card = _dealPile[index];
				card.MoveCard(cardPos);
				card.SetPile ( PileID.Deal );
			}

			_uiHud.hideReshuffleButton();
			
		}


		
		public void onUpdateDynamiteCounter(IModelEvent e)
		{
			UpdateDynamiteCounterEvent updateDynamiteCounterEvent = (UpdateDynamiteCounterEvent)e;
			Card card = FindCardWithCardID (updateDynamiteCounterEvent.cardID);
			if (card == null) 
			{
				GsnDebug.LogError ("Error missing card ID:" + updateDynamiteCounterEvent.cardID);
				return;
			}
			
			card.onUpdateDynamiteCounter(updateDynamiteCounterEvent.counterValue);
		}

		public void onUndoAction(IModelEvent step)
		{
			switch (step.undoEventType())
			{
				case UndoEventType.BeginUndo:
					break;
				case UndoEventType.MoveCardFromTableauToWaste:
					{
						TableauToWasteUndoStep s = (TableauToWasteUndoStep)step;
						int cardIndex = s.cardIndex;
						PlayfieldData.CardData data = _pfData.cardData[cardIndex];
						_cards[cardIndex].MoveCardWithRot(data.cardPos,data.cardRot);				
						RemoveFromWasteCards(_cards[cardIndex]);
						_cards[cardIndex].SetPile(PileID.Tableau);
					}
					break;
				case UndoEventType.MoveCardFromDealToWaste:  
					{
						DealToWasteUndoStep s = (DealToWasteUndoStep)step;
						addCardToTopOfDeal(s.cardID);
					}
					break; 
				case UndoEventType.MoveCardFromWasteToDeal:
					{
						WasteToDealUndoStep s = (WasteToDealUndoStep)step;
						MoveCardToWaste(s.cardID);
					}
					break;
				case UndoEventType.MoveCardFromRemovedToDeal:
					{
						RemovedToDealUndoStep s = (RemovedToDealUndoStep)step;
						Card card = FindCardWithCardID(s.cardID);
						card.SetPile(PileID.Removed);
						card.DrawPileFall();
					}
					break;
				case UndoEventType.AddCardToFaceup:
				case UndoEventType.RemoveCardFromFaceup:
				case UndoEventType.UncoveredCard:
					//Model only
					break;
				case UndoEventType.ModifyStreak:
					{
						ModifyStreakUndoStep s = (ModifyStreakUndoStep)step;
						_uiHud.setStreak(s.streakCount);
					}
					break;
				case UndoEventType.FlippedCard:
					{
						FlippedCardUndoStep s = (FlippedCardUndoStep)step;
						_cards[s.cardIndex].FlipCard(true);
					}
					break;
				case UndoEventType.ModifyScore:
					//Model sends an UpdateScoreEvent
					break;
				case UndoEventType.ChangeType:
					{
						ChangeTypeUndoStep s = (ChangeTypeUndoStep)step;
						_cards[s.cardIndex].cardType = s.cardType;
						AddOverlay(_cards[s.cardIndex], s.cardType);
					}
					break;
				case UndoEventType.RemoveCardFromWaste: 
					{
						RemoveCardFromWasteUndoStep s = (RemoveCardFromWasteUndoStep)step;
						Card card = FindCardWithCardID(s.cardID);	
						card.SetToIdleAnim();
						MoveCardToWaste(s.cardID);
						card.enableCollider(true);
					}
					break;	
				case UndoEventType.RemoveCardFromTableau:
					{
						RemoveCardFromTableauUndoStep s = (RemoveCardFromTableauUndoStep)step;
						int cardIndex = s.cardIndex;
						PlayfieldData.CardData data2 = _pfData.cardData[cardIndex];
						_cards[cardIndex].SetToIdleAnim();
						_cards[cardIndex].MoveCardWithRot(data2.cardPos,data2.cardRot);				
						_cards[cardIndex].SetPile(PileID.Tableau);
						_cards[cardIndex].enableCollider(true);
					}	
					break;
				case UndoEventType.OneShotWildClicked:
					_wildCardOneShot.MoveCard(_wildCardButtonPos + new Vector3(0,0,MIN_Z_DIFF));
					_wildCardOneShot.FlipCard(false);
					_wildButton.gameObject.SetActive (true);
					break;
				case UndoEventType.HoldSpotClicked:
					{
						HoldSpotClickedUndoStep s = (HoldSpotClickedUndoStep)step;
						// Have to move the card in the hold spot back to the top of the waste pile
						MoveCardToWaste(s.cardID);
					}
					break;
				case UndoEventType.HoldCardClicked:
					{
						HoldCardClickedUndoStep s = (HoldCardClickedUndoStep)step;
						// Have to move the card on the top of the waste pile back to the hold pile
						Card cardToMoveToHold = FindCardWithCardID(s.cardID);
						// move card on waste to hold
						Vector3 adjustedHoldPos = new Vector3 (0, 0, -.1f) + _holdingCard.transform.position;
						_holdingCard._CurrentCard = cardToMoveToHold;
						_holdingCard._CurrentCard.SetPile ( PileID.Hold);
						cardToMoveToHold.MoveCard (adjustedHoldPos);
					}
					break;
				case UndoEventType.BurnRng:
					break;
				case UndoEventType.AdvanceTurnCounter:
					break;
				case UndoEventType.AdvanceTurnCard:
					{
						AdvanceTurnCardUndoStep s = (AdvanceTurnCardUndoStep)step;
						Card card = FindCardWithCardID(s.cardID);
						card.onUpdateDynamiteCounter(s.activationCounter);
					}
					break;
				default:
					throw new System.ArgumentException("Unknown undo step: " + step);
			}
		}
	}
}

		
