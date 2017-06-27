using UnityEngine;
using System.Collections;
using TMPro;
using UnityEngine.UI;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common.Model;
using GSN.Skill.Games.Common.Client.Audio;
using GSN.Skill.Games.Common.Client;
using GSN.Skill.Games.Common.Tutorial;
using GSN.Skill.Games.Common.Client.Game;

namespace GSN.Skill.Games.Tripeaks
{
	public class UIResults : MonoBehaviour {

		public TextMeshProUGUI _cardPoints;
		public TextMeshProUGUI _streakPoints;
		public TextMeshProUGUI _timePoints;
		public TextMeshProUGUI _timeRemaining;
		public TextMeshProUGUI _totalPoints;
		public TextMeshProUGUI _header;

        public Button continueButton;

		public Animator animator;
		public Animator palmAnimator1;
		public Animator palmAnimator2;

		public TikiCharacter tikiCharacter;
		public PoiCharacter poiCharacter;
		public GameObject fireworksparticles;

		private int _animLayer = 0;

		private bool _boardCleared = false;
		private bool _animatingOff = false;

		private float _cardScore = 0;
		private float _streakScore = 0;
		private float _timeScore = 0;
		private float _timeRemainingValue = 0;
		private float _totalScore = 0;
		private float _currentTotalScore = 0;

		private const float ROLLING_SCORE_TIME = 1f;
		private const float ROLLING_SCORE_DELAY = .25f;
		private const string RESULTS_IN = "Results_In";
		private const string RESULTS_OFF = "Results_Off";
		private const string PALMS_IN = "Palms_In";

		public void setupPanel(EndGameEvent ee, int timeOfDay, int timeRemaining)
		{
			_cardScore = ee.matches;
			_streakScore = ee.streaks;
			_timeScore = ee.time;
			_timeRemainingValue = timeRemaining;
			_totalScore = ee.totalScore;

			_cardPoints.text = "0";
			_streakPoints.text = "0";
			_timePoints.text = "0";

			if (_timeScore > 0)
				_timeRemaining.text = StringExtensions.TimeFormatMSFromSeconds ((int)_timeRemainingValue);

			_totalPoints.text = "";

			tikiCharacter.setTimeOfDayTint(timeOfDay);
			poiCharacter.setTimeOfDayTint(timeOfDay);

			if (ee.endReason == (int)GameModelBase.BaseEndGameReason.NORMAL)
				fireworksparticles.SetActive(true);
		}

        public void ContinueButtonEnabled(bool isEnabled)
        {
            continueButton.enabled = isEnabled;
        }

		public string getEndGameReason(int endReason)
		{
			string key = "";
			switch (endReason)
			{
			case (int)GameModelBase.BaseEndGameReason.NORMAL:
				key = "BOARD_CLEARED";
				_animLayer = 0;
				_boardCleared = true;
				break;
			case (int)GameModelBase.BaseEndGameReason.TIMEOUT:
				key = "TIMES_UP";
				_animLayer = 1;
				break;
			case (int)GameModel.EndGameReason.BOMB_EXPLODED:
				key = "BOMB_EXPLODED";
				_animLayer = 2;
				break;
			case (int)GameModelBase.BaseEndGameReason.EARLY_EXIT:
				key = "EARLY_EXIT";
				_animLayer = 3;
				break;
			case (int)GameModel.EndGameReason.NO_MORE_MOVES:
				key = "NO_MORE_MOVES";
				_animLayer = 4;
                break;
                    
			}

			return StringTable.instance.GetEntry(key);
		}

		public void onContinueClick()
		{
			AudioFactory.instance.StopAudiosOnChan (SoundChannels.CHAN_SFX);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.ButtonClick);
			StartCoroutine(animateResultsOff());
            TutorialManager.instance.HideShownStep();
        }

		private IEnumerator animateResultsOff()
		{
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.UITransitionQuick);
			_animatingOff = true;
			tikiCharacter.playAnimation(TikiCharacter.TIKI_ANNOUNCEMENT_EXIT, _animLayer);
			poiCharacter.playAnimation(PoiCharacter.POI_ANNOUNCEMENT_EXIT, _animLayer);

			AudioFactory.instance.StopAudiosOnChan (SoundChannels.CHAN_MUSIC, 1.2f);

			yield return new WaitForSeconds(.2f);

			animator.Play(RESULTS_OFF);

			yield return new WaitForSeconds(1.5f);

			ViewBase.Instance.GameClientComplete ();
		}

		public IEnumerator AnimateResultsIn()
		{
			animator.Play(RESULTS_IN);

			tikiCharacter.playAnimation(TikiCharacter.TIKI_ANNOUNCEMENT_SHOW, _animLayer);
			poiCharacter.playAnimation(PoiCharacter.POI_ANNOUNCEMENT_SHOW, _animLayer);

			AudioOptions sOptions = AudioFactory.DefaultOptions();
			sOptions.loop = true;
			sOptions.delayTime = 0f;

			yield return new WaitForSeconds(1);

			palmAnimator1.Play(PALMS_IN);
			palmAnimator2.Play(PALMS_IN);

			AudioSource rollingscore;

			if (_cardScore > 0 && !_animatingOff)
			{
				rollingscore = AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.RollingScore, sOptions);
				AnimateRollingScore(_cardPoints, 0, _cardScore);
				UpdateTotalScore(_cardScore);
				yield return new WaitForSeconds(ROLLING_SCORE_TIME);

				_currentTotalScore += _cardScore;

				if (rollingscore != null)
					rollingscore.FadeOutDestroy(0);
			}

			if (_streakScore > 0 && !_animatingOff)
			{
				yield return new WaitForSeconds(ROLLING_SCORE_DELAY);

				rollingscore = AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.RollingScore, sOptions);

				AnimateRollingScore(_streakPoints, 0, _streakScore);
				UpdateTotalScore(_streakScore);

				yield return new WaitForSeconds(ROLLING_SCORE_TIME);

				_currentTotalScore += _streakScore;

				if (rollingscore != null)
					rollingscore.FadeOutDestroy(0);
			}

			if (_timeScore > 0 && !_animatingOff)
			{
				yield return new WaitForSeconds(ROLLING_SCORE_DELAY);

				rollingscore = AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.RollingScore, sOptions);

				AnimateRollingTime(_timeRemainingValue, 0);
				AnimateRollingScore(_timePoints, 0, _timeScore);
				AnimateRollingScore(_totalPoints, _currentTotalScore, _totalScore);


				yield return new WaitForSeconds(ROLLING_SCORE_TIME);
				if (rollingscore != null)
					rollingscore.FadeOutDestroy(0);
			}

			if (_boardCleared)
				AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.PerfectGame);

		}

		void AnimateRollingScore(TextMeshProUGUI textObject, float fromValue, float toValue)
		{
			LeanTween.value(this.gameObject, fromValue, toValue, ROLLING_SCORE_TIME).setOnUpdate( (float val)=>{ 

				int newValue = (int)val;
				textObject.text = newValue.ToString();
			} );
		}

		void UpdateTotalScore(float newPoints)
		{
			AnimateRollingScore(_totalPoints, _currentTotalScore, _currentTotalScore + newPoints);
		}

		void AnimateRollingTime(float fromValue, float toValue)
		{
			LeanTween.value(this.gameObject, fromValue, toValue, ROLLING_SCORE_TIME).setOnUpdate( (float val)=>{ 
				
				int newValue = (int)val;
				_timeRemaining.text = StringExtensions.TimeFormatMSFromSeconds (newValue);
			} );
		}
	}
}
