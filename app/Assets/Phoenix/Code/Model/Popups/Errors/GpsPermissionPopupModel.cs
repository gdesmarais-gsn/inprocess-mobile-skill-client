using System;
using GSN.Skill.Events;

namespace GSN.Skill.Phoenix.Model.Popups
{
	public class GpsPermissionPopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.ErrorGpsPermission; } }

		private Action _callback;
		private Action _cancelCallback;

		public GpsPermissionPopupModel(Action callback, Action cancelCallback)
		{
			_callback = callback;
			_cancelCallback = cancelCallback;
		}

		public void OnOpen()
		{
			EventDispatcher.DispatchEvent(new GpsErrorEvent(_callback, _cancelCallback));
		}

		public void OnClose()
		{
		}
	}
}
