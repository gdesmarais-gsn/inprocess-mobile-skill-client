using System;

namespace GSN.Skill.Phoenix.Model.Popups
{
	public class VerifyPasswordPopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.ErrorVerifyPassword; } }

		public VerifyPasswordPopupModel()
		{
		}

		public void OnOpen()
		{
		}

		public void OnClose()
		{
			// handle functionality when the popup is closing
		}
	}
}
