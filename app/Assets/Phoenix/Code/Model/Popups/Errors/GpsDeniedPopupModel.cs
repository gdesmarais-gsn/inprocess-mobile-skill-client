using System;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Utils.GeoLocation;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.Model.Popups
{
	public class GpsDeniedPopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.ErrorGpsDenied; } }

		private Action _callback;
		private Action _cancelCallback;

		public GpsDeniedPopupModel(Action callback, Action cancelCallback)
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

		public void UpdateState(GpsResult reason)
		{
			switch (reason)
			{
				case GpsResult.Denied:
					EventDispatcher.DispatchEvent(new GpsErrorPostAppPauseEvent());
					break;
				case GpsResult.Determined:
					EventDispatcher.DispatchEvent(new GpsLocationSuccessEvent());
					break;
				default:
					GsnDebug.LogError("Invalid gps result:", reason);
					break;
			}
		}
	}
}
