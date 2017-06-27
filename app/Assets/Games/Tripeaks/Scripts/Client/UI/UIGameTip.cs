using UnityEngine;
using UnityEngine.UI;
using TMPro;
using GSN.Skill.Games.Common;
using GSN.Skill.Games.Common.Client;

namespace GSN.Skill.Games.Tripeaks
{
	public class UIGameTip : MonoBehaviour {

		public Image tipImage;
		public TextMeshProUGUI tipText;

		public void setTip(Tip tip)
		{
			tipImage.overrideSprite = tip.sprite;
			tipText.text = StringTable.instance.GetEntry(tip.id);
		}
	}
}
