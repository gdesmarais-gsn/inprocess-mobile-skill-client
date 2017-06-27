using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common.Client.Audio;
using GSN.Skill.Games.Common.Client.Game;

namespace GSN.Skill.Games.Common.Client
{
	/// <summary>
	/// This class is the Base class for for the startscreen in the UI. 
	/// </summary>
	public abstract class UIStartScreenBase : MonoBehaviour
	{
		private enum InfoTab
		{
			GameTips,
			Details,
			Settings,
		}

		[SerializeField]
		protected float INITIAL_TIMER_SEC = 0f;

		protected float REVEAL_TIMER_SEC = 60f;
	
	    private const int PAUSE_FORGIVENESS_TIME = 30 * 1000;
		private int _pauseTimeStart = 0;
		private bool _paused = false; // whether you are paused.
		
		/// <summary>
		/// List of tabs to display
		/// </summary>
		public EnumeratedUIInfoTab tabs = new EnumeratedUIInfoTab(typeof(InfoTab));

		/// <summary>
		/// The _current tab selected
		/// </summary>
		private InfoTab? _currentTab = null;

		protected float count { get; private set; }
		protected IEnumerator _coBringUpStartTime;

		/// <summary>
		/// Gets or sets a value indicating whether this <see cref="GSN.Skill.Games.Common.Client.UIStartScreenBase"/> auto start.
		/// </summary>
		/// <value><c>true</c> if auto start; otherwise, <c>false</c>.</value>
		public bool autoStart { get; protected set; }

		/// <summary>
		/// The transition to start call back.  This is called when we are transitioning to the game.
		/// </summary>
		public Action transitionToStartAction;

		/// <summary>
		/// Start this instance.
		/// </summary>
        public virtual void Start()
		{
			_coBringUpStartTime = bringUpTimerAfterTime(HideStartScreen);
		}

		/// <summary>
		/// Switchs the to the selected tab
		/// </summary>
		/// <returns><c>true</c>, if tab was switched, <c>false</c> otherwise.</returns>
		/// <param name="toTab">To tab.</param>
		private bool SwitchTab(InfoTab toTab)
		{
			if (toTab == _currentTab)
				return false;
			if ( _currentTab != null)
			{
				PlayButtonClickSound ();
			}
			GameAnalyticSender.instance.SendTabSelected(_currentTab.ToString(), toTab.ToString());
			_currentTab = toTab;
			for (int i = 0; i < tabs.Length;++i)
			{
				tabs[i].visible = (int)toTab == i;
			}
			return true;
		}

		/// <summary>
		/// Shows the tips.
		/// </summary>
		public void ShowTips()
		{
			SwitchTab (InfoTab.GameTips);
		}

		/// <summary>
		/// Shows the details.
		/// </summary>
		public void ShowDetails()
		{
			SwitchTab (InfoTab.Details);
		}

		/// <summary>
		/// Shows the settings.
		/// </summary>
		public void ShowSettings()
		{
			SwitchTab (InfoTab.Settings);
		}

		/// <summary>
		/// Setups the tabs.
		/// </summary>
		public void SetupTabs()
		{
			for (int i = 0; i < tabs.Length; ++i)
			{
				tabs[i].Setup();
			}

		}

		/// <summary>
		/// Raises the loading complete event.
		/// </summary>
		public virtual void OnLoadingComplete()
		{
			StartCoroutine(_coBringUpStartTime);

			SetupTabs();
			
			// start up the start screen with the tips tab
			ShowTips();

			GameAnalyticSender.instance.SendStartScreenLoad();
		}

		/// <summary>
		/// Hide the specified immediate.
		/// </summary>
		/// <param name="immediate">If set to <c>true</c> immediate.</param>
		protected virtual IEnumerator Hide()
		{
			gameObject.SetActive (false);

			if (transitionToStartAction != null)
				transitionToStartAction();

			yield return null;
		}

		/// <summary>
		/// Called when the start button is clicked
		/// </summary>
		public virtual void OnStartButton()
		{
			StopCoroutine(_coBringUpStartTime);

			autoStart = false;
			HideStartScreen();
		}

		/// <summary>
		/// Called when the close button is clicked.
		/// </summary>
		public virtual void OnCloseClick()
		{
			OnCloseClickInternal(GameSessionExitMode.AbortAtStart);
		}	

		void OnCloseClickInternal(GameSessionExitMode exitMode = GameSessionExitMode.AbortAtStart)
		{	
			StopCoroutine(_coBringUpStartTime);

			ArenaProxy.instance.gameSession.ExitMode = exitMode;
			
			AudioFactory.instance.StopAudiosOnChan(SoundChannels.CHAN_MUSIC);
            ViewBase.Instance.GameClientComplete();
		}


		public IEnumerator Preload(Dictionary<string, string> joinRecord)
		{
			// If the game scene is not active, then we don't need to do this.
			for (int i= 0; i < tabs.Length; ++i)
			{
				yield return StartCoroutine(tabs[i].Preload(joinRecord));
			}

		}

		public int GetPreloadCount()
		{
			int total = 0;
			for (int i= 0; i < tabs.Length; ++i)
			{
				total += tabs[i].PreloadCount();
			}
			return total;
		}

		public abstract void PlayButtonClickSound();	
		public abstract float countdown { set;}

		protected IEnumerator bringUpTimerAfterTime(Action doneAction)
		{
			yield return new WaitForSeconds(INITIAL_TIMER_SEC);

			while (count < REVEAL_TIMER_SEC)
			{
				countdown = (REVEAL_TIMER_SEC - count);
				count++;
				yield return new WaitForSeconds(1f);
			}
            
			autoStart = true;

			if ( doneAction != null)
			{
				doneAction();
			}
		}
		
		protected virtual void HideStartScreen()
		{
			StartCoroutine(Hide ());		
		}
	
		/// <summary>
		/// When the application is paused, we don't want the user to come back to the start screen, so we act as if the clicked exit.
		/// </summary>
		/// <param name="paused">If set to <c>true</c> paused.</param>

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
						OnCloseClickInternal(GameSessionExitMode.AbortAtStartPaused);
					}
					_paused = false;
				}
			}
		}
    }

	[System.Serializable]
	public class EnumeratedGameObjectArray : EnumeratedArray<GameObject> {
		public EnumeratedGameObjectArray(Type t) : base(t) {}
	}
}
