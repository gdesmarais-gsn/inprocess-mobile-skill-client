using System;
using GSN.Skill.Events;
using UnityEngine;
using UnityEngine.UI;

namespace GSN.Skill.Phoenix.View
{
	public class GpsPermissionPopupView : PopupView
	{
		[SerializeField]
		private Button _okButton;
		[SerializeField]
		private Button _cancelButton;

		private Action _callback;
		private Action _cancelCallback;

		protected override void OnEnable()
		{
			base.OnEnable();

			EventDispatcher.AddListener<GpsErrorEvent>(OnGpsPermissionPopulate);
		}

		protected override void OnDisable()
		{
			base.OnDisable();

			EventDispatcher.RemoveListener<GpsErrorEvent>(OnGpsPermissionPopulate);
			_okButton.onClick.RemoveListener(OnOkButton);
			_cancelButton.onClick.RemoveListener(OnCancelButton);
		}

		private void OnGpsPermissionPopulate(IEvent e)
		{
			var evt = (GpsErrorEvent)e;

			_callback = evt.callback;
			_cancelCallback = evt.cancelCallback;

			_okButton.onClick.AddListener(OnOkButton);
			_cancelButton.onClick.AddListener(OnCancelButton);
			
		}

		private void OnOkButton()
		{
			if (_callback != null)
				_callback();
			
			OnHide();
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
