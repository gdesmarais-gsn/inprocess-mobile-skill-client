using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using TMPro;
using GSN.Skill.Games.Common.Client.Game;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common.Client.Audio;
using GSN.Skill.Games.Common;

namespace GSN.Skill.Games.Tripeaks
{
	public class UIStartScreen : MonoBehaviour 
    {
		public Animator startButtonAnimator;
		public Animator animator;
		public TextMeshProUGUI countdownTxtValue;
        public Button settingsButton;
        public GameObject settingsPopup;


		[SerializeField]private float INITIAL_TIMER_SEC = 0f;
		private float REVEAL_TIMER_SEC = 60f;

		private float count = 0;
		private IEnumerator _coBringUpStartTime;

		private const string START_BTN_SWAP = "ButtonSwap";
		private const string ANIM_OFF = "StartScreen_Off";

        private const string PRIZE_POOL_RESOURCE = "PANEL_PrizePoolItem";

		private const int PAUSE_FORGIVENESS_TIME = 30 * 1000;
		private int _pauseTimeStart = 0;
		private bool _paused = false; // whether you are paused.
		private bool _autostarting = false;

        void Start () 
		{			
			TriPeaksAnalytics.instance.SendStartScreenLoad ();
			//if ( _coBringUpStartTime == null)
				//_coBringUpStartTime = bringUpTimerAfterTime ();
		}

        private void OnEnable()
        {
            settingsButton.onClick.AddListener(ShowSettings);
        }

        private void OnDisable()
        {
            settingsButton.onClick.RemoveListener(ShowSettings);
        }

        public void OnLoadingComplete()
		{			
			if ( _coBringUpStartTime == null || !gameObject.activeSelf)
				return; // this object is inactive, it will start when start gets called. this happens when loading is faster than init
			StopCoroutine(_coBringUpStartTime);
			StartCoroutine (_coBringUpStartTime);
		}

		public void onStartButton()
		{
			TriPeaksAnalytics.instance.SendGameStart(_autostarting?"autoStarting":"startButtonClicked") ;
			_autostarting = false;

			if ( null != _coBringUpStartTime )
				StopCoroutine(_coBringUpStartTime);
			StartCoroutine (((View)ViewBase.Instance).hideStartScreen ());
		}

		public void onCloseClick()
		{
			onCloseClick(GameSessionExitMode.AbortAtStart);
		}	
		
		public void onCloseClick(GameSessionExitMode exitMode = GameSessionExitMode.AbortAtStart)
		{	
			TriPeaksAnalytics.instance.SendStartScreenExit ();

			StopCoroutine (_coBringUpStartTime);
			AudioFactory.instance.StopAudiosOnChan (SoundChannels.CHAN_MUSIC);

			ArenaProxy.instance.gameSession.ExitMode = exitMode;
			ViewBase.Instance.GameClientComplete ();
		}

		public void playButtonClickSound()
		{
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.ButtonClick);
		}

		private IEnumerator bringUpTimerAfterTime()
		{
			yield return new WaitForSeconds (INITIAL_TIMER_SEC);

			while (count < REVEAL_TIMER_SEC)
			{
				countdownTxtValue.text = (REVEAL_TIMER_SEC - count).ToString();
				count ++;
				yield return new WaitForSeconds(1f);
			}

			_autostarting = true;
			onStartButton ();
		}

		public void animateStartScreenOff()
		{
			animator.Play(ANIM_OFF);
		}

        public void ShowSettings()
        {
            settingsPopup.SetActive(true);
        }

		void OnApplicationPause(bool paused) 
		{
			// We want to give the user some time to get back
			if (paused)
			{
				// they can only pause once. they can't keep pausing over and over. 
				if (_pauseTimeStart == 0 && !_paused)
				{
					_pauseTimeStart = (int)System.DateTime.Now.TimeOfDay.TotalMilliseconds;					
				}
				_paused = true;
			}
			else
			{
				if ( _paused)
				{
					int pauseDuration = (int)System.DateTime.Now.TimeOfDay.TotalMilliseconds - _pauseTimeStart;
					if (pauseDuration > PAUSE_FORGIVENESS_TIME)
					{
						onCloseClick(GameSessionExitMode.AbortAtStartPaused);
					}
					_paused = false;
				}
			}
		}
	}
}
