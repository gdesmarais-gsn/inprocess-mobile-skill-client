using UnityEngine;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Tripeaks
{
	public class UIStreakCard : MonoBehaviour {

		public Animator animator;
		public ParticleSystem fireFX;
		public ParticleSystem smokeFX;

		private bool visible = false;

		private const string ANIM_STREAK_IN = "StreakCard_In";
		private const string ANIM_STREAK_OFF = "StreakCard_Off";

		public void showStreakCard()
		{
			animator.Play(ANIM_STREAK_IN);
			fireFX.Play();
			visible = true;
		}

		public void hideStreakCard()
		{
			if (!visible)
				return;

			animator.Play(ANIM_STREAK_OFF);
			fireFX.Stop();
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.Extinguish);
			visible = false; 
		}
	}
}
