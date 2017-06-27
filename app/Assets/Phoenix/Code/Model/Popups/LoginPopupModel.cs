using System;
using GSN.Skill.Events;

namespace GSN.Skill.Phoenix.Model.Popups
{
	public class LoginPopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.Login; } }

		private string _username;
		private bool _rememberMeEnabled;

		public LoginPopupModel(string defaultUsername, bool rememberMeEnabled)
		{
			_username = defaultUsername;
			_rememberMeEnabled = rememberMeEnabled;
		}

		public void OnOpen()
		{
			// a username has been set. let's prepopulate
			EventDispatcher.DispatchEvent(new LoginPopupInitEvent(_username, _rememberMeEnabled));
		}

		public void OnClose()
		{
			// handle functionality when the popup is closing
		}
	}
}
