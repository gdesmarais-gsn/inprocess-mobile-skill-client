using UnityEngine;
using System.Collections;
using TMPro;

namespace GSN.Skill.Games.Tripeaks
{
	public class UITutorialBanner : MonoBehaviour 
	{
		public Animator _animator;
		private const string BEGIN_ANIM = "ANIM_CLIP_BigWin_Show"; 
		
		public TextMeshProUGUI textValue;
		
		public void setWinText(string winText)
		{
			textValue.text = winText.ToString();
		}
		
		public void ShowHugeWin()
		{
			_animator.Play(BEGIN_ANIM);
		}
	}
}
