using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model.Data;

namespace GSN.Skill.Phoenix.Model.Popups
{
	/// <summary>
	/// Withdraw popup model.  This contains all the data required to build the withdraw popup.
	/// </summary>
	public class ProfilePopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.Profile; } }

		private CurrentUser _currentUser;
		private StoredConfigData _storedConfigData;

		public ProfilePopupModel(CurrentUser currentUser, StoredConfigData storedConfigData)
		{
			_currentUser = currentUser;
			_storedConfigData = storedConfigData;
		}
		/// <summary>
		/// Since we already have the _current user object, we know what the player's balances are.
		/// We can immediately dispatch the WithdrawPopupReadyEvent.  We could (if we wanted to) 
		/// request updated balance info from the platform prior to showing htis popup, but I think 
		/// that is likely overkill for now.
		/// </summary>
		public void OnOpen()
		{
			ProfilePopupReadyEvent evt = new ProfilePopupReadyEvent();
			evt.cashBalance = _currentUser.cashBalance;
			evt.gameCreditBalance = _currentUser.gameCredits;
			evt.username = _currentUser.username;
			evt.isCashPlayer = !_currentUser.isGuest;
			evt.appVersion = _storedConfigData.ApplicationVersion;
			EventDispatcher.DispatchEvent(evt);
		}
		public void OnClose()
		{
			// handle functionality when the popup is closing
		}
	}
}