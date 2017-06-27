using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Model.Popups;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.Model
{
	public class PlayerProfileManager
	{
		private CurrentUser _currentUser;
		private StoredConfigData _storedConfigData;

		private WithdrawManager _withdrawManager = new WithdrawManager();
		private HelpManager _helpManager = new HelpManager();
		private LogoutManager _logoutManager = new LogoutManager();

		public PlayerProfileManager(CurrentUser currentUser, StoredConfigData storedConfigData)
		{
			_currentUser = currentUser;
			_storedConfigData = storedConfigData;
		}

		#region Public Functions

		// Create the player profile popup and Show it.
		public void ShowPlayerProfile()
		{
			ProfilePopupModel profilePopup = new ProfilePopupModel(_currentUser, _storedConfigData);
			PopupManager.Instance.SetPopup(profilePopup);
		}

		public void Withdraw(decimal amount, string password)
		{
			_withdrawManager.Withdraw(amount,password);
		}

		public void Help()
		{
			_helpManager.Help(_currentUser.username);
		}

		public void Logout()
		{
			_logoutManager.Logout();
		}
		 
		#endregion
	}
}