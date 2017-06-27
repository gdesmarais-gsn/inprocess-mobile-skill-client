using System.Collections.Generic;
using Newtonsoft.Json;

namespace GSN.Skill.Games.Tripeaks
{
	public class PlayfieldModelData
	{
		public List<BaseCardData> cards = new List<BaseCardData>();
		public TikiCardData redData;
		public TikiCardData blackData;
		public TikiCardData goldenData;
		public TikiCardData volcanoData;
		public TikiCardData flowerData;

		public PlayfieldModelData(string data)
		{
			List<string> level = JsonConvert.DeserializeObject<List<string>>(data);
			List<string> cardData = JsonConvert.DeserializeObject<List<string>>(level[0]);
			for (int j = 0; j < cardData.Count; j++)
			{
				cards.Add(new BaseCardData(cardData[j]));
			}

			redData = new TikiCardData(level[1]);
			blackData = new TikiCardData(level[2]);
			flowerData = new TikiCardData(level[3]);
			goldenData = new TikiCardData(level[4]);
			volcanoData = new TikiCardData(level[5]);
		}

		public static List<PlayfieldModelData> Deserialize()
		{
			List<PlayfieldModelData> l = new List<PlayfieldModelData>();
			string [] playfields = JsonConvert.DeserializeObject<string []>(Playfields.DATA);
			for (int i = 0; i < playfields.Length; ++i)
			{
				l.Add(new PlayfieldModelData(playfields[i]));
			}
			return l;
		}
		
		public static PlayfieldModelData Deserialize(int boardID)
		{
			string [] playfields = JsonConvert.DeserializeObject<string []>(Playfields.DATA);
			if (boardID >= playfields.Length)
				boardID = 0;
			return new PlayfieldModelData(playfields[boardID]);
		}
	}
}
