using System;
using GSN.Skill.Events;
using UnityEngine;
using UnityEngine.UI;

namespace GSN.Skill.Phoenix.View
{
	public class GpsDeniedPopupView : PopupView
	{
		[SerializeField]
		private Button _okButton;
		[SerializeField]
		private Button _cancelButton;

		private Action _openSettingsCallback;
		private Action _cancelCallback;

		protected override void OnEnable()
		{
			base.OnEnable();

			EventDispatcher.AddListener<GpsErrorEvent>(OnGpsDeniedPopulate);
			EventDispatcher.AddListener<GpsLocationSuccessEvent>(OnGpsLocationSuccess);
			EventDispatcher.AddListener<GpsErrorPostAppPauseEvent>(OnGpsLocationFail);
		}

		protected override void OnDisable()
		{
			base.OnDisable();

			EventDispatcher.RemoveListener<GpsErrorEvent>(OnGpsDeniedPopulate);
			_okButton.onClick.RemoveListener(OnOkButton);
			_cancelButton.onClick.RemoveListener(OnCancelButton);
		}

		private void OnGpsDeniedPopulate(IEvent e)
		{
			var evt = (GpsErrorEvent)e;

			_openSettingsCallback = evt.callback;
			_cancelCallback = evt.cancelCallback;

			_okButton.onClick.AddListener(OnOkButton);
			_cancelButton.onClick.AddListener(OnCancelButton);

		}

		private void OnGpsLocationFail(IEvent e)
		{
			// TODO: visually show angry text saying that the user didn't update their settings :(
		}

		private void OnGpsLocationSuccess(IEvent e)
		{
			OnHide();
		}

		private void OnOkButton()
		{
			if (_openSettingsCallback != null)
				_openSettingsCallback();
		}

		private void OnCancelButton()
		{
			if (_cancelCallback != null)
				_cancelCallback();
			
			OnHide();
		}

		protected override void Hide()
		{
			controller.RemovePopup(_uid);
			Destroy(this.gameObject);
		}
	}
}
