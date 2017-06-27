using UnityEngine;
using System.Collections;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Tripeaks
{
	public class TrapTutorial : MonoBehaviour {

		public TikiCharacter tiki;
		public PoiCharacter poi;
		public GameObject faceCard;
		public GameObject faceCard2;
		public GameObject faceCard3;
		public GameObject trapHazard;

		public Animator faceCardAnimator;
		public Animator faceCardAnimator2;
		public Animator faceCardAnimator3;
		public Animator trapAnimator;

		public GameObject cardDust;

		public UIHugeWin banner;

		void Start()
		{
			StartCoroutine(playCutscene());
		}

		IEnumerator playCutscene()
		{
			yield return new WaitForSeconds(1f);
			tiki.gameObject.SetActive(true);
			poi.gameObject.SetActive(true);

			yield return new WaitForSeconds(1.8f);
			faceCard.SetActive(true);
			faceCardAnimator.Play("Onscreen");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TreasureMap);

			yield return new WaitForSeconds(0.5f);
			trapHazard.SetActive(true);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TrapShow);

			yield return new WaitForSeconds(3.5f);
			faceCard2.SetActive(true);
			faceCardAnimator2.Play("Reveal");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.RevealCollectible);

			yield return new WaitForSeconds(0.8f);
			faceCardAnimator2.Play("Slice");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.NinjaCard);

			yield return new WaitForSeconds(.6f);
			trapAnimator.Play("Clear");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TrapClear);

			yield return new WaitForSeconds(.5f);
			poi.animator.Play("Reveal");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.DogBarkSlow);

			yield return new WaitForSeconds(.3f);
			faceCard3.SetActive(true);
			faceCardAnimator3.Play("Reveal");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.RevealCollectible);

			yield return new WaitForSeconds(1f);
			faceCardAnimator.Play("Match");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TreasureMap);

			yield return new WaitForSeconds(.75f);
			faceCard3.SetActive(false);
			cardDust.SetActive(true);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.StreakIncrement);

			yield return new WaitForSeconds(4.5f);
			banner.setWinText("Try it out!");
			banner.gameObject.SetActive(true);		
			banner.ShowHugeWin();
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.PerfectGameBigWin);
		}
	}
}
