using GSN.Skill.Events;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using UnityEngine.UI.Extensions;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.View
{
	public class ProfilePopupView : PopupView
	{
		[SerializeField]
		private Button _closeButton;
		
		[SerializeField]
		private Button _backButton;

        [SerializeField]
        private Button _forgotPasswordButton;

		[SerializeField]
		private TextMeshProUGUI _appVersion;

		[SerializeField]
		private TextMeshProUGUI _headerText;


		[SerializeField]
		private WithdrawPageView _withdrawPage;
		[SerializeField]
		private AccountPageView _accountPage;
		[SerializeField]
		private LegalPageView _legalPage;

		[SerializeField]
		private HorizontalScrollSnap _pageScroll;

		private int _currentPage = 0;

		private const int ACCOUNT_PAGE = 0;
		private const int WITHDRAW_PAGE = 1;
        private const int LEGAL_PAGE = 1;
		private const int SETTINGS_PAGE = 1;
		private const int HELP_PAGE = 1;

        private string appVersion = "";

		protected override void OnEnable()
		{
			base.OnEnable();
			EventDispatcher.AddListener<ProfilePopupReadyEvent>(OnProfilePopupReady);

			_closeButton.onClick.AddListener(OnCloseButton);
			_backButton.onClick.AddListener(OnBackButton);
            _forgotPasswordButton.onClick.AddListener(OnForgotPasswordButton);
            _appVersion.text = "";
			_currentPage = 0;
			ChangeAccountPage(ACCOUNT_PAGE);
            _headerText.text = StringTable.Instance.GetEntry(CategoryProfile.PopupHeader);
		}

		protected override void OnDisable()
		{
			base.OnDisable();
			EventDispatcher.RemoveListener<ProfilePopupReadyEvent>(OnProfilePopupReady);

			// reset assets
			_closeButton.onClick.RemoveListener(OnCloseButton);
			_backButton.onClick.RemoveListener(OnBackButton);
            _forgotPasswordButton.onClick.RemoveListener(OnForgotPasswordButton);
		}

		private void OnProfilePopupReady(IEvent e)
		{
			var data = (ProfilePopupReadyEvent)e;
            _appVersion.text = StringTable.Instance.GetEntry(CategoryProfile.VersionLabel, data.appVersion);
            appVersion = data.appVersion;
			_accountPage.SetData(data);
			_withdrawPage.SetData(data);
		}

		public void ShowWithdrawPage()
		{
			_withdrawPage.gameObject.SetActive(true);
            _legalPage.gameObject.SetActive(false);
			_pageScroll.Init();
			_withdrawPage.ResetWithdrawState();
			ChangeAccountPage(WITHDRAW_PAGE);
            _headerText.text = StringTable.Instance.GetEntry(CategoryProfile.WithdrawHeader);
		}

		public void ShowLegalPage()
		{
            _legalPage.gameObject.SetActive(true);
            _withdrawPage.gameObject.SetActive(false);
			_pageScroll.Init();
			ChangeAccountPage(LEGAL_PAGE);
            _headerText.text = StringTable.Instance.GetEntry(CategoryProfile.LegalHeader);
		}

		public void LogOut()
		{
			OnHide();
			controller.Logout();
		}

		private void OnCloseButton()
		{
			OnHide();
		}

		private void OnBackButton()
		{
			ChangeAccountPage(_currentPage - 1);
            _headerText.text = StringTable.Instance.GetEntry(CategoryProfile.PopupHeader);
		}

        private void OnForgotPasswordButton()
        {
            controller.ShowResetPasswordPopup();
            OnHide();
        }

		private void ChangeAccountPage(int pageIndex)
		{
			_currentPage = pageIndex;
			if (pageIndex < 0)
				_currentPage = 0;

			_pageScroll.SetCurrentPage(_currentPage);

			if (pageIndex == 0)
				_backButton.gameObject.SetActive(false);
			else
				_backButton.gameObject.SetActive(true);
		}
	}
}