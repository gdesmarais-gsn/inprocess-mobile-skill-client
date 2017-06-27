using UnityEngine;
using System.Collections;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Tripeaks
{
	public class BombTutorial : MonoBehaviour {

		public TikiCharacter tiki;
		public PoiCharacter poi;
		public GameObject faceCard;
		public GameObject faceCard2;
		public DynamiteHazard bombHazard;

		public Animator faceCardAnimator;
		public Animator faceCardAnimator2;
		public Animator bombAnimator;

		public Animator screenFlashAnimator;

		public UIHugeWin banner;

		private bool _diffuseBomb = false;

		private const int FAST_BOMB_TIME = 3;
		private const int BOMB_TIME = 5;
		private const int DIFFUSE_TIME = 1;

		void Start()
		{
			StartCoroutine(playCutscene());
		}

		IEnumerator playCutscene()
		{
			yield return new WaitForSeconds(1f);
			tiki.gameObject.SetActive(true);
			poi.gameObject.SetActive(true);

			yield return new WaitForSeconds(.5f);
			faceCard.SetActive(true);
			faceCardAnimator.Play("Onscreen");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TreasureMap);

			yield return new WaitForSeconds(0.5f);
			bombHazard.gameObject.SetActive(true);
			bombAnimator.Play("DisplayFast");
			StartCoroutine(BombCountdown(FAST_BOMB_TIME));
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.BombShow);

			yield return new WaitForSeconds(3f);
			faceCardAnimator.Play("Blow");

			yield return new WaitForSeconds(1f);
			screenFlashAnimator.Play("ScreenFlash");

			yield return new WaitForSeconds(.5f);
			tiki.animator.Play("OnScreenSad");
			poi.animator.Play("OnScreenSad");

			yield return new WaitForSeconds(.6f);
			faceCardAnimator.Play("Onscreen");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TreasureMap);

			yield return new WaitForSeconds(1f);
			bombHazard.gameObject.SetActive(true);
			bombAnimator.Play("Display");
			_diffuseBomb = true;
			StartCoroutine(BombCountdown(BOMB_TIME));
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.BombShow);

			yield return new WaitForSeconds(.5f);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.DogBarkSlow);

			yield return new WaitForSeconds(1.0f);
			faceCard2.SetActive(true);
			faceCardAnimator2.Play("Reveal");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.RevealCollectible);

			yield return new WaitForSeconds(1.5f);
			faceCardAnimator2.Play("Slice");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.NinjaCard);


			yield return new WaitForSeconds(.5f);
			bombHazard.ClearOverlay();
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.BombDiffuse);


			yield return new WaitForSeconds(1.0f);
			faceCardAnimator.Play("Blow");
			//faceCardAnimator2.Play("Blow");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TreasureMap);

			yield return new WaitForSeconds(1f);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.DogBarkFast);

			yield return new WaitForSeconds(1.5f);
			banner.setWinText("Try it out!");
			banner.gameObject.SetActive(true);		
			banner.ShowHugeWin();
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.PerfectGameBigWin);
		}

		IEnumerator BombCountdown(int bombTime)
		{
			bombHazard._bombEffect.SetActive(false);
			bombHazard.ResetFill();
			for (int i = 0; i < bombTime + 1; i++)
			{
				int time = bombTime - i;

				if (_diffuseBomb && time == DIFFUSE_TIME)
					break;

				bombHazard.UpdateCounter(time);
				yield return new WaitForSeconds(1f);
			}
		}
	}
}
