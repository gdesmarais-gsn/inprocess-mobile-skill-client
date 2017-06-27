using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace GSN.Skill.Phoenix.View
{
	public class AccountPageView : ScreenView
	{
		[SerializeField]
		private TextMeshProUGUI _username;

		[SerializeField]
		private Button _logoutButton;
		[SerializeField]
		private Button _withdrawButton;
		[SerializeField]
		private Button _helpButton;
		[SerializeField]
		private Button _legalButton;


		[SerializeField]
		private ProfilePopupView _profileView;

		protected override void OnEnable()
		{
			_logoutButton.onClick.AddListener(OnLogoutButton);
			_withdrawButton.onClick.AddListener(OnWithdrawButton);
            _helpButton.onClick.AddListener(OnHelpButton);
            _legalButton.onClick.AddListener(OnLegalButton);

			_username.text = "";
		}

		protected override void OnDisable()
		{
			_logoutButton.onClick.RemoveListener(OnLogoutButton);
			_withdrawButton.onClick.RemoveListener(OnWithdrawButton);
			_helpButton.onClick.RemoveListener(OnHelpButton);
			_legalButton.onClick.RemoveListener(OnLegalButton);
		}

		public void SetData(ProfilePopupReadyEvent data)
		{
			_username.text = data.username;
		}

		private void OnWithdrawButton()
		{
			_profileView.ShowWithdrawPage();
		}

		private void OnLogoutButton()
		{
			_profileView.LogOut();
		}

        private void OnHelpButton()
        {
            controller.Help();
        }

        private void OnLegalButton()
        {
            _profileView.ShowLegalPage();
        }
	}
}