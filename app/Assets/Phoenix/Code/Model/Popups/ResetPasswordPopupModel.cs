using System;
using GSN.Skill.Events;

namespace GSN.Skill.Phoenix.Model.Popups
{
	public class ResetPasswordPopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.ResetPassword; } }

		// No data is required from the back end to show this popup.
		public void OnOpen()
		{
			EventDispatcher.DispatchEvent(new ResetPasswordPopupReadyEvent());
		}

		public void OnClose()
		{
			// handle functionality when the popup is closing
		}
	}
}
