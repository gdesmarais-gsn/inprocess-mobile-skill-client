using System.Collections.Generic;
using System;
using Newtonsoft.Json;

namespace GSN.Skill.Games.Tripeaks
{
	public class TikiCardData
	{
		public int minCount = 0;
		public int maxCount = 1;
		public int chance = 5;

		public TikiCardData(string data)
		{
			List<int> l = JsonConvert.DeserializeObject<List<int>>(data);

			minCount = Convert.ToInt32(l[0]);
			maxCount = Convert.ToInt32(l[1]);
			chance = Convert.ToInt32(l[2]);
		}
	}
}
