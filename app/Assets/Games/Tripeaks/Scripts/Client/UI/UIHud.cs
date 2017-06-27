using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using TMPro;
using GSN.Skill.Games.Common.Client.Audio;
using GSN.Skill.Games.Common.Client;
using GSN.Skill.Games.Common.Events;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Tripeaks
{
	public class UIHud : MonoBehaviour 
	{

		public TextMeshProUGUI scoreText;

		public UIStreakCard[] streakCards = new UIStreakCard[5];
		public TextMeshProUGUI streakText;
		public Color32[] streakColors;

		public TextMeshProUGUI timerText;
		public Animator timerWarningAnimator;
		public Button reshuffle;
		public GameObject reshuffleTimer;
		public TextMeshProUGUI reshuffleTimerText;

		public GameObject holdObject;
		public GameObject wildOneShotObject;

		public GameObject fastForwardButton;

		public Animator animator;
		public Animator streakTextAnimator;
		public Animator streakCardsAnimator;

        public RuntimeAnimatorController tutorialController;

		public UIAbortDialog abortDialog;
		public UIHugeWin hugeWin;

		public CameraShakeFX shakeFX;

		private const int STREAK_CAP = 5;
		private bool _reshuffleEnabled;

		[SerializeField] 
		private int firstTimeWarning = 30;
		[SerializeField] 
		private int finalTimeWarning = 10;
		
		private bool _playedFirstWarning = false;
		private bool _playedFinalWarning = false;
		private bool _playedTimeUp = false;

		private const string ANIM_HUD_IN = "HUD_In";
		private const string ANIM_HUD_OUT = "HUD_Out";
		private const string ANIM_HOLD_IN = "HoldSlot_In";
		private const string ANIM_HOLD_OUT = "HoldSlot_Out";
		private const string ANIM_STREAK_PUNCH = "StreakText_Punch";
		private const string ANIM_STREAK_PULSE = "StreakText_Pulse";
		private const string ANIM_STREAK_IDLE = "StreakText_Idle";
        private const string ANIM_STREAK_IN = "StreakMeter_In";
		private const string ANIM_TIMER_IN = "Time_In";

        private const float TIME_SPEED_MODIFY_VALUE = 2.0f;
		private const float STREAK_PITCH_ADJUSTMENT = .1f;
		private const float TIME_SPEED_TAP_DELAY = 5.0f;		
		private IEnumerator _coSpeedUpTimeTap;
		
		private float _speedButtonDownTime = 0;
		private const float TIME_SPEED_TAP_ACTIVATION_TIME = .35f;		
		
		public void configure (bool holdEnabled, bool oneShotWildEnabled, bool reshuffleEnabled)
		{	
			holdObject.SetActive(holdEnabled);
			wildOneShotObject.SetActive(oneShotWildEnabled);		
			_reshuffleEnabled = reshuffleEnabled;
		}
		
		/// <summary>
		/// Updates the score display value.
		/// </summary>
		/// <param name="score">Score</param>
		public void setScoreValue(int score)
		{
			scoreText.text =  score.ToString();
		}

        public void setTutorialAnimController()
        {
            animator.runtimeAnimatorController = tutorialController;
        }

		/// <summary>
		/// Updates the time remaining display value.
		/// </summary>
		/// <param name="time">Time in seconds</param>
		public void setTimeValue(int time)
		{
			timerText.text = StringExtensions.TimeFormatMSFromSeconds (time);

			if ( time <= firstTimeWarning && !_playedFirstWarning)
			{
				timerWarningAnimator.Play( "TimeWarning");
				_playedFirstWarning = true;
				
				AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TimeWarning30);
			}
			
			if ( time <= finalTimeWarning && !_playedFinalWarning)
			{
				// Note .  Steve said this may get out of sync with the timer countdown.
				timerWarningAnimator.Play( "TimeWarningLoop");
				_playedFinalWarning = true;			
				AudioFactory.instance.StopAudiosOnChan(SoundChannels.CHAN_MUSIC, 0.1f);
				AudioFactory.instance.PlayMusic<TriPeaksAudio>(TriPeaksAudio.TimeWarningMusic);
				AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TimeWarning10);
			}

			if ( time == 0 && !_playedTimeUp)
			{
				_playedTimeUp = true;	
				AudioFactory.instance.StopAudiosOnChan(SoundChannels.CHAN_MUSIC, 0.1f);
				AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TimeUp);
			}
		}

		public void showReshuffle()
		{
			hugeWin.setWinText(StringTable.instance.GetEntry ("RESHUFFLE_BANNER"));
			hugeWin.gameObject.SetActive(true);		
			hugeWin.ShowHugeWin();

			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.Reshuffle);
		}

		public void setStreak(int streakValue)
		{
			streakText.faceColor = streakColors[streakValue];
			if (streakValue == 0) 
			{
				streakTextAnimator.Play(ANIM_STREAK_IDLE);
				streakCardsAnimator.Play(ANIM_STREAK_IDLE);

				//Set streak text based on streak value
				streakText.text = "";

				for (int i = 0; i < streakCards.Length; i++)
					streakCards[i].hideStreakCard();
			}
			else
			{
				streakCards[streakValue - 1].showStreakCard();

				AudioOptions options = AudioFactory.DefaultOptions();
				options.pitch = 1f + (float)streakValue * STREAK_PITCH_ADJUSTMENT;

				if (streakValue == STREAK_CAP)
				{
					streakText.text = StringTable.instance.GetEntry("MAX_STREAK") + "!";
					streakTextAnimator.Play(ANIM_STREAK_PULSE);
					streakCardsAnimator.Play(ANIM_STREAK_PULSE);
					AudioFactory.instance.PlaySoundEffect(TriPeaksAudio.MaxStreak);
				}
				else
				{
					streakText.text = streakValue.ToString() + " " + StringTable.instance.GetEntry("STREAK") + "!";
					streakTextAnimator.Play(ANIM_STREAK_PUNCH);
					AudioFactory.instance.PlaySoundEffect(TriPeaksAudio.StreakIncrement, options);
				}

				AudioOptions fbOptions = AudioFactory.DefaultOptions();
				fbOptions.volume = 0.8f;
				AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.Fireball, fbOptions);
			}
		}
		
		public void showReshuffleButton()
		{
			if ( _reshuffleEnabled )
			{
				AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.ButtonClick);
				reshuffle.gameObject.SetActive(true);	
				reshuffle.GetComponent<Animator>().Play(ANIM_HOLD_IN);
			}
		}

		public void hideReshuffleButton()
		{
			reshuffle.gameObject.SetActive(false);
			reshuffle.GetComponent<Animator>().Play(ANIM_HOLD_OUT);
		}

		public void showHoldSlot()
		{
			if (holdObject.activeSelf)
			{
				AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.ButtonClick);
				holdObject.GetComponent<Animator>().Play(ANIM_HOLD_IN);
			}
		}

		public void hideHoldSlot()
		{
			if (holdObject.activeSelf)
			{
				holdObject.GetComponent<Animator>().Play(ANIM_HOLD_OUT);
			}
		}

		public void showReplayHud()
		{
			fastForwardButton.SetActive(true);
		}

		public void onCloseClicked()
		{
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.ButtonClick);
			showAbortDialog();
		}

		private void showAbortDialog()
		{
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.UITransitionQuick);

			UIAbortDialog dialog = (UIAbortDialog)Instantiate(abortDialog) as UIAbortDialog;
			dialog.transform.SetParent(this.transform.parent);
			dialog.transform.localPosition = abortDialog.transform.localPosition;
			dialog.transform.localScale = Vector3.one;
		}
		
		public void SpeedUpTimeDown()
		{
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.ButtonClick);

			if ( _coSpeedUpTimeTap != null)
			{
				StopCoroutine(_coSpeedUpTimeTap);
				_coSpeedUpTimeTap = null;
			}
			
			TimeScale.instance.Modify(TIME_SPEED_MODIFY_VALUE);
			_speedButtonDownTime = Time.time;
		}

		public void SpeedUpTimeUp()
		{
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.ButtonRelease);

			if ( Time.time - _speedButtonDownTime <= TIME_SPEED_TAP_ACTIVATION_TIME)
			{					
				_coSpeedUpTimeTap = SpeedUpTimeTap ();			
				StartCoroutine (_coSpeedUpTimeTap);
			}
			else
				TimeScale.instance.Reset();
		}
		
		private IEnumerator SpeedUpTimeTap()
		{
			yield return new WaitForSeconds (TIME_SPEED_TAP_DELAY);
			TimeScale.instance.Reset();
		}
		
		public void animateHUDIn()
		{
			animator.Play(ANIM_HUD_IN);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.UITransitionQuick);
		}

        public void animateStreakMeterIn()
        {
            animator.Play(ANIM_STREAK_IN);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.UITransitionQuick);
        }

        public void animateTimerIn()
        {
            animator.Play(ANIM_TIMER_IN);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.UITransitionQuick);
        }

        public void animateHUDOut()
		{
			animator.Play(ANIM_HUD_OUT);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.UITransitionQuick);
		}
		
		public void onShowBannerEvent(IModelEvent e)
		{
			ShowBannerEvent showBannerEvent = (ShowBannerEvent)e;

			// missing text by default
			string key = "";

			switch (showBannerEvent.bannerFlag)
			{
				// TODO steve do your banner thing here
				case GameModel.RED_TIKI_FLAG:
				key = "RED_BANNER";
				break;
				case GameModel.BLACK_TIKI_FLAG:
				key = "BLACK_BANNER";
				break;				
				case GameModel.FLOWER_TIKI_FLAG:
				key = "FLOWER_BANNER";
				break;
				case GameModel.VOLCANO_TIKI_FLAG:
				key = "VOLCANO_BANNER";
				StartCoroutine(startVolcanoEffect());
				break;		
				case GameModel.GOLDEN_TIKI_FLAG:
				key = "GOLDEN_TIKI_BANNER";
				break;	
			}

			string winText = StringTable.instance.GetEntry (key);

			hugeWin.setWinText(winText);
			hugeWin.gameObject.SetActive(true);		
			hugeWin.ShowHugeWin();

			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TikiCardUse);
		}

		public void showEndGameBanner(string endGameReason)
		{
			hugeWin.setWinText(endGameReason);
			hugeWin.gameObject.SetActive(true);		
			hugeWin.ShowHugeWin();
		}

		IEnumerator startVolcanoEffect()
		{
			yield return new WaitForSeconds(1f);

			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.VolcanoTiki);
			shakeFX.Shake(3);
		}
	}
}
