using System;

namespace GSN.Skill.Phoenix.Model.Popups
{
	public class RegisterPopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.Registration; } }

		public void OnOpen()
		{
			// handle the data specific for registration
		}

		public void OnClose()
		{
			// handle functionality when the popup is closing
		}
	}
}
