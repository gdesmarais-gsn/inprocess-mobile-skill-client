using UnityEngine;
using UnityEngine.Serialization;
using System.Collections;
using GSN.Skill.Games.Common.Client.Game;
using GSN.Skill.Games.Common.Events;

namespace GSN.Skill.Games.Common.Client
{
	public abstract class UIHudBase : MonoBehaviour
	{
		private const float TIME_SPEED_MODIFY_VALUE = 2.0f;
		private const float TIME_SPEED_TAP_DELAY = 5.0f;
		private const float TIME_SPEED_TAP_ACTIVATION_TIME = .35f;

		private IEnumerator _coSpeedUpTimeTap;
		private float _speedButtonDownTime = 0;
		
		public int currentTime { get; private set;}

		/// <summary>
		/// Prefab for the abort dialog
		/// </summary>
		//TODO: Rename this
		[SerializeField]
		[FormerlySerializedAs("_abortDialog")]
		private UIGenericYesNoDialog _abortDialogPrefab = null;
	
		/// <summary>
		/// Instance of the abort dialog
		/// </summary>
		private UIGenericYesNoDialog _uiAbortDialog;

		/// <summary>
		/// Fast forward button
		/// </summary>
		[SerializeField]
		private GameObject _fastForwardButton;

		/// <summary>
		/// Is the game over?
		/// </summary>
		public bool isGameOver;

		void Awake()
		{
			// preload the abort dialog and cache it
			PreloadAbortDialog();
			score = 0;
		}

		void PreloadAbortDialog()
		{
			if ( _uiAbortDialog != null)
			{
				return;
			}

			_uiAbortDialog = (UIGenericYesNoDialog)GameObject.Instantiate (_abortDialogPrefab) as UIGenericYesNoDialog;
			_uiAbortDialog.gameObject.SetActive(false);			
		}
		/// <summary>
		/// Sets the score.  When overridden this function should set the display element for the score
		/// </summary>
		/// <value>The score.</value>
		protected abstract int score { set;}

		/// <summary>
		/// Sets the time.  When overriden this function should set the display element for the time
		/// </summary>
		/// <value>The time.</value>
		protected abstract int time { set;}

		/// <summary>
		/// Shows the replay hud.
		/// </summary>
		public void ShowReplayHud ()
		{
			_fastForwardButton.SetActive(true);
		}

		public virtual void OnExitClicked()
		{
			ShowAbortDialog ();
		}

		/// <summary>
		/// Shows the abort dialog.
		/// </summary>
		private void ShowAbortDialog()
		{
			if (isGameOver)
				return; // do not display the abort dialog when the game is already over

			_uiAbortDialog.ConfirmAction += ConfirmAbortDialog;
			_uiAbortDialog.gameObject.SetActive(true);
			_uiAbortDialog.transform.SetParent(this.gameObject.transform, false);
		}

		/// <summary>
		/// Hides the abort dialog.
		/// </summary>
		private void ConfirmAbortDialog()
		{
			_uiAbortDialog.ConfirmAction -= ConfirmAbortDialog;
			ViewBase.Instance.OnAbort();
		}

		/// <summary>
		/// Sets the abort dialog string identifiers.
		/// </summary>
		/// <param name="headerId">Header identifier.</param>
		/// <param name="messageId">Message identifier.</param>
		public void SetAbortDialogStringIds(string headerId, string messageId)
		{
			if ( _uiAbortDialog == null)
			{
				PreloadAbortDialog();
			}
			_uiAbortDialog.header = headerId;
			_uiAbortDialog.message = messageId;
		}


		/// <summary>
		/// Called when the speed up button is down.
		/// </summary>
		public virtual void SpeedUpTimeDown()
		{
			if (_coSpeedUpTimeTap != null)
			{
				StopCoroutine(_coSpeedUpTimeTap);
				_coSpeedUpTimeTap = null;
			}

			TimeScale.instance.Modify(TIME_SPEED_MODIFY_VALUE);
			_speedButtonDownTime = Time.time;
		}

		/// <summary>
		/// When the speed up button is pressed and released, the game fastfowards for a few seconds. This function will reset time back to normal once that time has expired.
		/// </summary>
		public void SpeedUpTimeUp()
		{
			if (Time.time - _speedButtonDownTime <= TIME_SPEED_TAP_ACTIVATION_TIME)
			{
				_coSpeedUpTimeTap = SpeedUpTimeTap();
				StartCoroutine(_coSpeedUpTimeTap);
			}
			else
				TimeScale.instance.Reset();
		}

		/// <summary>
		/// This is called when the user taps the speed button.
		/// </summary>
		/// <returns>The up time tap.</returns>
		private IEnumerator SpeedUpTimeTap()
		{
			yield return new WaitForSeconds(TIME_SPEED_TAP_DELAY);
			TimeScale.instance.Reset();
		}

		public virtual void OnUpdateClock(IModelEvent e)
		{
			time = ((UpdateClockEvent)e).remainingMS;
			currentTime = ((UpdateClockEvent)e).remainingMS/1000;
		}

		public void OnScoreUpdate(IModelEvent e)
		{
			score = ((ScoreUpdateEvent)e).score;
		}	
		
		public void HideAbortDialog()
		{
			_uiAbortDialog.gameObject.SetActive(false);
		}	
	}
}
