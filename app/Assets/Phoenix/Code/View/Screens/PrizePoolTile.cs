using UnityEngine;
using TMPro;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.View
{
	public class PrizePoolTile : BaseView
	{
		[SerializeField]
		private TextMeshProUGUI _place;
		[SerializeField]
		private TextMeshProUGUI _prize;

		public void SetPrizeData(string place, decimal prize)
		{
			_place.text = place;
			_prize.text = prize.ToString("C");
		}

		public void SetGameTheme(GameResource gameResource)
		{
			_place.color = gameResource.textColor;
			_prize.color = gameResource.textColor;
		}
	}
}