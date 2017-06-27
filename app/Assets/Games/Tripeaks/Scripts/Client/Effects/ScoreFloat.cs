using UnityEngine;
using System.Collections;
using TMPro;
using GSN.Skill.Games.Common.Client;

namespace GSN.Skill.Games.Tripeaks
{
	public class ScoreFloat : PooledMonoBehaviour 
	{
		public TextMeshProUGUI scoreValue;
		public TextMeshProUGUI streakValue;
		public Color32[] streakColors;

		private const int MAX_STREAK_VALUE = 5;
		private const float FIREBALL_TIME = .3f;

		public void setScore(int pointsEarned, int streak, Vector3 fireballEndPos, GameObject fireballObject)
		{
			float scaleAmount = 1f + (float)streak/10f;
			Vector3 newScale = new Vector3(scaleAmount, scaleAmount, scaleAmount);
			this.transform.localScale = newScale;

			scoreValue.faceColor = streakColors[streak];
			streakValue.faceColor = streakColors[streak];
			scoreValue.text = "+" + pointsEarned.ToString();

			if (streak == MAX_STREAK_VALUE)
				streakValue.text = StringTable.instance.GetEntry("MAX_STREAK");
			else
				streakValue.text = (streak) + " " + StringTable.instance.GetEntry("STREAK");

			StartCoroutine(playFireballEffect(fireballEndPos, fireballObject));
		}

		IEnumerator playFireballEffect(Vector3 fireballEndPos, GameObject fireballObject)
		{
			fireballEndPos.z -= 50f;
			GameObject fireBall = fireballObject;
			ParticleSystem fireFX = fireBall.GetComponent<ParticleSystem>();

			fireBall.transform.SetParent(this.transform);
			fireBall.transform.localScale = Vector3.one;
			fireBall.transform.localPosition = Vector3.zero;
			fireBall.SetActive(true);
			fireFX.Play();

			LeanTween.move (fireBall, fireballEndPos, FIREBALL_TIME).setEase(LeanTweenType.easeOutQuad);

			//AudioFactory.Instance.PlayAudio<AppAudio>(AppAudio.Fireball);

			yield return new WaitForSeconds(FIREBALL_TIME);

			
			fireFX.Stop();
		}
	}
}
