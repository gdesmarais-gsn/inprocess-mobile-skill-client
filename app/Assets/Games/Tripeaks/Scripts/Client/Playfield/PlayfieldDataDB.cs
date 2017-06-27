using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using GSN.Skill.Games.Common.Utils;
//using Stm.V1_1;

namespace GSN.Skill.Games.Tripeaks
{

	public class PlayfieldDataDB : ScriptableObject {
		[System.Serializable]
		public class SmartEntryCostConfig {
			public bool  useSmartEntryCost;
			public float smartEntryCostStartPoint;
			public float smartEntryCostTaxRate;	
		}

		public PlayfieldData[] playfieldDataDB; // main track
		//public PlayfieldTrack[] bonusTracks; // bonus tracks
		
		public float globalMarginMod = 1; // [0,1] globally modifies streak/stock bonus
		public bool useNewMarginSystem;
		
		public float streakBonusCurveMod = 30f;
		public float stockBonusCurveMod = 30f;
		
		public float maxStreakBonus = 20f;
		public float maxStockBonus = 20f;
		
		// margin starts at 100%, then linearly interpolates to the target point
		public bool useDynamicMargin;
		public Vector2 dynamicMarginTarget;
		public float minDynamicMargin;

		/*
		public float GetDynamicMargin() {
			if(!useDynamicMargin) {
				return 1;
			}
			float coins = (float)PlayerData.GetCoins();
			float slope = (dynamicMarginTarget.y - 1)/ dynamicMarginTarget.x;
			float margin = coins * slope + 1;
			margin = Mathf.Min(margin, 1f); // don't go above 1
			margin = Mathf.Max(margin, minDynamicMargin); // don't go below the min margin
			return margin;
		}*/
		
		public static readonly int NUM_TRACKS 		  = 5;
		public static readonly int MAIN_TRACK_ID 	  = 0;
		public static readonly int EXPERT_TRACK_ID 	  = 1;
		public static readonly int GSN_TRACK_ID 	  = 2;
		public static readonly int BASH_TRACK_ID 	  = 3;
		public static readonly int TIKISKIES_TRACK_ID = 4;
		
		/* configure smart money */
		public SmartEntryCostConfig payerSmartEntryConfig    = new SmartEntryCostConfig (){ useSmartEntryCost = false, 
																							smartEntryCostStartPoint = 5000000L, 
																							smartEntryCostTaxRate = 0.1f};
		public SmartEntryCostConfig nonPayerSmartEntryConfig = new SmartEntryCostConfig (){ useSmartEntryCost = true,
																							smartEntryCostStartPoint = 5000000L, 
																							smartEntryCostTaxRate = 0.1f};
		
		public Dictionary<string, PlayfieldData> dict;

		/**
		 * Based on whether player is a payer or not, we have different smart money configuration...
		 * */
		/*public SmartEntryCostConfig getRightSmartEntryCostConfig(){
			if (GsnUserInfo.IsPayer ()) return payerSmartEntryConfig;
			else return nonPayerSmartEntryConfig;
		}*/

		/// <summary>
		/// Can only be used to get bonus track!!!
		/// </summary>
		/// <returns>The track.</returns>
		/// <param name="trackId">Track identifier.</param>
		/*public PlayfieldTrack GetTrack(int trackId) {
			foreach(PlayfieldTrack bonusTrack in bonusTracks) {
				if(bonusTrack.trackId == trackId) {
					return bonusTrack;
				}
			}
			return null;
		}

		public PlayfieldTrack GetTrackByUnlockLevel(int levelId) {
			foreach(PlayfieldTrack track in bonusTracks) {
				if(track.unlockType == PlayfieldTrack.UnlockType.LEVEL_COMPLETION && track.levelUnlock == levelId) {
					return track;
				}
			}
			return null;
		}

	    public PlayfieldData this[string levelName] {
	        get {
				// populate dictionary if not initialized
				if(dict == null) {
					dict = new Dictionary<string, PlayfieldData>();
					foreach (PlayfieldData playFieldData in playfieldDataDB){
						if(playFieldData != null) {
							dict[playFieldData.name] = playFieldData;
						}
					}
					foreach(PlayfieldTrack track in bonusTracks) {
						foreach(PlayfieldData playfield in track.playfieldDatas) {
							if(playfield != null) {
								dict[playfield.name] = playfield;
							}
						}
					}
				}
				PlayfieldData data = null;
				if( dict.TryGetValue(levelName, out data)){
					return data;
				} else {
					return null;
				}
	        }
	    }*/


		private string TikiDataString(int min, int max, int chance)
		{
			List<int> l = new List<int>();
			l.Add(min);
			l.Add(max);
			l.Add(chance);
			return JsonConvert.SerializeObject(l);	
		}

		public void generateLevelData ()
		{
			GsnDebug.Log ("Starting to generate level data");
			List<string> playfields = new List<string>();

			// Go through the playfields and pull out data into cards
			for (int i =0; i < playfieldDataDB.Length; i++)
			{
				// Playfield Data
				List<string> level = new List<string>();
				List<string> cards = new List<string>(); 
				PlayfieldData data = playfieldDataDB [i];
				// Create a new list of cards
				for (int j=0; j<data.cardData.Length; j++) 
				{
					// Create new base data and add it to the list
					cards.Add(data.cardData[j].Serialize());
				}
				level.Add(JsonConvert.SerializeObject(cards));
				level.Add(TikiDataString(data.tikiRedMin, data.tikiRedMax, data.tikiRedChance));
				level.Add(TikiDataString(data.tikiBlackMin, data.tikiBlackMax, data.tikiBlackChance));
				level.Add(TikiDataString(data.tikiBlossomMin, data.tikiBlossomMax, data.tikiBlossomChance));
				level.Add(TikiDataString(data.tikiGoldenMin, data.tikiGoldenMax, data.tikiGoldenChance));
				level.Add(TikiDataString(data.tikiVolcanoMin, data.tikiVolcanoMax, data.tikiVolcanoChance));
				playfields.Add (JsonConvert.SerializeObject(level));
			}

			// Serialize the object			
			string str = JsonConvert.SerializeObject (playfields);
			str = JsonConvert.SerializeObject (str);

			//str = str.Replace ("\"", "\\\"");
			String str2 = String.Format(@"//Do not modify this file by hand.  
class Playfields
{{ 
	public const string DATA = {0};
}}", str);
			
			// Write it out to a temp file for use later
			System.IO.File.WriteAllText ("Assets/TripeaksPackage/Model/Playfields.cs", str2);

			GsnDebug.Log ("Finished generating level data");
		}
	}
}
