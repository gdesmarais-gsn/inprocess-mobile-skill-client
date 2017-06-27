using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using System;

namespace GSN.Skill.Games.Tripeaks
{
	public class PlayfieldData : ScriptableObject
	{
		[System.Serializable]
		public class CardData : BaseCardData
		{
			public Vector3 cardPos;
			public Quaternion cardRot;
			public OBB2D obb;
			/*public Card.CardType cardType;
			public Card.FaceValue cardFaceValue;
			public Card.Suit cardSuit;
			public HazardMultiLock.MultiLockSingle.MultiLockSingleType[] multiLockSetting;*/
		}
		
		public int GetID() { return ID; }
		public void SetID(int newID) { ID = newID; }
		
		int ID = 0;

		public string levelName;

		public int entryCost = 3000;
		public int timeStarRequirement = 75;
		public int stockCardCount = 12;
		/*
		public TriPeaksTutorial.TutorialState playfieldTutorialState = TriPeaksTutorial.TutorialState.NoTutorial;
		public TriPeaksTutorial.TutorialTikiState playfieldTutorialTikiState = TriPeaksTutorial.TutorialTikiState.NoTutorial;
		
		public PowerUp.PowerUpType slot1PowerUp = PowerUp.PowerUpType.SunShine;
		public PowerUp.PowerUpType slot2PowerUp = PowerUp.PowerUpType.MoreTime;
		public PowerUp.PowerUpType slot3PowerUp = PowerUp.PowerUpType.MagicEye;
		
		public TriPeaksGetAways.NewGetAwayID newGetAwayID = TriPeaksGetAways.NewGetAwayID.loc_TikiBeach;
		public TriPeaksGetAways.TimeOfDay timdOfDay = TriPeaksGetAways.TimeOfDay.day;
		*/
		public string[] musicNames;
		
		public int moreStockCardsCountAdjustment = 0;
		public float moreStocksBaseMultiOfLevelCost = 2.0f;
		public float moreStocksAddMultiOfLevelCost = 1.0f;
		
		public float smartMoneyPercentage = 0.05f;
		public float smartMoneyPowerCurve = 0.9875f;
		
		public float undoBaseMultiOfLevelCost = 0.5f;
		public float undoAddMultiOfLevelCost = 0.5f;
		
		public float wildBaseMultiOfLevelCost = 1.0f;
		public float wildAddMultiOfLevelCost = 0.5f;

		public int tikiRedMin = 0;
		public int tikiRedMax = 1;
		public int tikiRedChance = 5;
		
		public int tikiBlackMin = 0;
		public int tikiBlackMax = 1;
		public int tikiBlackChance = 5;
		
		public int tikiGoldenMin = 0;
		public int tikiGoldenMax = 1;
		public int tikiGoldenChance = 5;
		
		public int tikiBlossomMin = 0;
		public int tikiBlossomMax = 1;
		public int tikiBlossomChance = 5;
		
		public int tikiVolcanoMin = 0;
		public int tikiVolcanoMax = 1;
		public int tikiVolcanoChance = 5;

		public int tikiFireSpawnPosTop = 1;
		public int tikiFireSpawnPosBot = 3;
		public bool tikiFire = false;
		
		public float bonusCardChance = 10;
		
		//public ScoringTable scoringTable;

		public CardData[] cardData;
		public CardData[] stockData;
		
		// for auto tuner
		public float targetWinRate = 0.2f;
		public float simWinRate = 0f; // records the last sim win rate 
		public bool lockStockCardCount = false;

		public float targetMargin = 20f;
		public float simMargin = 0f; // records the last sim margin with old system
		public float simMarginNew = 0f; // records the last sim margin with new system

		/*
		public DynamicBalancingTier[] dynamicBalancingTiers;

		public long getEntryCost() {
			PlayfieldDataDB pfDB = TripeaksGlobals.Inst.playfieldDataDB;
			if ( pfDB.getRightSmartEntryCostConfig().useSmartEntryCost ) {
				return (long)SmartMoney.GetSmartCostFromControlPoints( entryCost );
			} else {
				return (long)entryCost;
			}
		}*/
	}
}
