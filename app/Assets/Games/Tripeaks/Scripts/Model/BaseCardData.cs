using System.Collections.Generic;
using System;
using Newtonsoft.Json;

namespace GSN.Skill.Games.Tripeaks
{
	public enum CardType 
	{ 	Normal					= 0, 
		Wild					= 1, 
		NormalBonus 			= 2, 
		HazardTrap				= 3, 
		HazardSeaweedSurprise	= 4, 
		HazardDynamite			= 5, 
		HazardShark				= 6, 
		HazardSharkBait			= 7, 
		HazardBigWave			= 8,
		TikiRed					= 9,
		TikiBlack				= 10,
		TikiGolden				= 11,
		TikiBlossom 			= 12,
		TikiVolcano				= 13,
		HazardIce				= 14,
		TikiFire				= 15,
		HazardMultiLock			= 16,
        TutorialSelect          = 17,
        TutorialDestination    = 18
	}

	public enum MultiLockSingleType 
	{
		RandomLock = 0,
		Suit = 1,
		FaceValue = 2,
	}

	public class BaseCardData
	{
		public int cardID;
		public List<int> coversCards;
		public List<int> coveredByCards;
		public CardType cardType;
//		public MultiLockSingleType[] multiLockSetting;

		private const int ID = 0;
		private const int COVERS = 1;
		private const int COVEREDBY = 2;
		private const int TYPE = 3;

		public BaseCardData()
		{
		}

		public BaseCardData(string data)
		{
			string [] l = JsonConvert.DeserializeObject<string []>(data);
			cardID = Convert.ToInt32(l[ID]);
			coversCards = new List<int>(JsonConvert.DeserializeObject<List<int>>(l[COVERS]));
			coveredByCards  = new List<int>(JsonConvert.DeserializeObject<List<int>>(l[COVEREDBY]));
			cardType = (CardType)Convert.ToInt32(l[TYPE]);;
		}

		public string Serialize()
		{
			string [] l = new string[4];
			l[ID] = cardID.ToString();
			l[COVERS] = JsonConvert.SerializeObject(coversCards);
			l[COVEREDBY] = JsonConvert.SerializeObject(coveredByCards);
			l[TYPE] = ((int)cardType).ToString();
			return JsonConvert.SerializeObject(l);
		}
	}
}
