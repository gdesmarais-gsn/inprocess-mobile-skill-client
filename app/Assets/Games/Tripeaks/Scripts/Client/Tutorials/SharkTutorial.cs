using UnityEngine;
using System.Collections;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Tripeaks
{
	public class SharkTutorial : MonoBehaviour {

		public TikiCharacter tiki;
		public PoiCharacter poi;
		public GameObject sharkCard;
		public GameObject baitCard;
		public GameObject waterParticles;

		public Animator sharkAnimator;

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
			sharkCard.SetActive(true);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TreasureMap);

			yield return new WaitForSeconds(.7f);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.SharkReveal);
			yield return new WaitForSeconds(3.8f);
			baitCard.SetActive(true);

			yield return new WaitForSeconds(.5f);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TreasureMap);

			yield return new WaitForSeconds(.7f);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.RevealCollectible);

			yield return new WaitForSeconds(.8f);
			sharkAnimator.Play("EatBaitCard");
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.SharkMatch);

			yield return new WaitForSeconds(.98f);
			waterParticles.SetActive(true);
			baitCard.SetActive(false);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.CardBonus);

			yield return new WaitForSeconds(3f);
			banner.setWinText("Try it out!");
			banner.gameObject.SetActive(true);		
			banner.ShowHugeWin();
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.PerfectGameBigWin);
		}
	}
}
