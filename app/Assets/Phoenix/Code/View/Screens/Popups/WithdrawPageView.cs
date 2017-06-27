using System;
using GSN.Skill.Events;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using GSN.Skill.Phoenix.Strings;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.View
{
	public class WithdrawPageView : ScreenView
	{
		[SerializeField]
		private TextMeshProUGUI _gameCreditsValue;
		[SerializeField]
		private TextMeshProUGUI _cashValue;
		[SerializeField]
		private TextMeshProUGUI _balanceValue;

		[SerializeField]
		private TextMeshProUGUI _passwordMessage;

		[SerializeField]
		private TextMeshProUGUI _successMessage;

		[SerializeField]
		private GsnInputField _withdrawAmount;
		[SerializeField]
		private GsnInputField _passwordInput;

		[SerializeField]
		private GameObject _passwordPanel;
		[SerializeField]
		private GameObject _withdrawPanel;
		[SerializeField]
		private GameObject _withdrawSuccessPanel;

		[SerializeField]
		private Button _withdrawButton;
		[SerializeField]
		private Button _verifyPasswordButton;

		[SerializeField]
		private Button _closeVerifyPasswordButton;
        [SerializeField]
        private Button _FAQButton;

        private decimal _withdrawAmountValue;

		protected override void OnEnable()
		{
			EventDispatcher.AddListener<WithdrawSuccessEvent>(OnWithdrawSuccess);
			EventDispatcher.AddListener<CashBalanceUpdateEvent>(OnBalanceUpdate);
			_withdrawAmount.validateHandler += CheckValidInput;
			_withdrawButton.onClick.AddListener(OnWithdrawButton);
			_verifyPasswordButton.onClick.AddListener(OnVerifyPassword);
            _closeVerifyPasswordButton.onClick.AddListener(OnCloseVerifyPasswordButton);
            _FAQButton.onClick.AddListener(OnFAQButton);


            _passwordPanel.SetActive(false);
            _withdrawAmount.SetFieldText("");
			_passwordInput.SetFieldText("");
			ResetWithdrawState();
			_withdrawButton.interactable = false;
		}

		protected override void OnDisable()
		{
			EventDispatcher.RemoveListener<WithdrawSuccessEvent>(OnWithdrawSuccess);
			EventDispatcher.RemoveListener<CashBalanceUpdateEvent>(OnBalanceUpdate);

			_withdrawButton.onClick.RemoveListener(OnWithdrawButton);
			_verifyPasswordButton.onClick.RemoveListener(OnVerifyPassword);
            _closeVerifyPasswordButton.onClick.RemoveListener(OnCloseVerifyPasswordButton);
            _FAQButton.onClick.AddListener(OnFAQButton);

            _withdrawAmount.validateHandler -= CheckValidInput;
		}

		public void ResetWithdrawState()
		{
			_withdrawPanel.SetActive(true);
			_withdrawSuccessPanel.SetActive(false);
		}

		public void SetData(ProfilePopupReadyEvent data)
		{
			_gameCreditsValue.text = data.gameCreditBalance.ToString("C");
			_cashValue.text = data.cashBalance.ToString(("C"));
			_balanceValue.text = (data.cashBalance + data.gameCreditBalance).ToString("C");
		}

		private void CheckValidInput()
		{
			_withdrawButton.interactable = HasValidWithdraw();
		}

		private bool HasValidWithdraw()
		{
			return _withdrawAmount.IsValid();
		}

		private void OnWithdrawButton()
		{
			if (!string.IsNullOrEmpty(_withdrawAmount.GetFieldText()))
			{
				try
				{
					_withdrawAmountValue = Convert.ToDecimal(_withdrawAmount.GetFieldText());
					_passwordPanel.SetActive(true);
					_passwordMessage.text = StringTable.Instance.GetEntry(CategoryProfile.WithdrawPasswordMessage, _withdrawAmountValue.ToString("C"));
				}
				catch
				{
                    GsnDebug.LogError("Trying to withdraw a non decimal value :", _withdrawAmount.GetFieldText());
				}

			}
		}

		private void OnVerifyPassword()
		{
            controller.Withdraw(_withdrawAmountValue, _passwordInput.GetFieldText());
			_passwordPanel.SetActive(false);
			_passwordInput.SetFieldText("");
		}

		private void OnWithdrawSuccess(IEvent e)
		{
			_withdrawPanel.SetActive(false);
			_withdrawSuccessPanel.SetActive(true);
            _withdrawAmount.SetFieldText("");
            _successMessage.text = StringTable.Instance.GetEntry(CategoryProfile.WithdrawSuccessMessage, _withdrawAmountValue.ToString("C"));
		}

		private void OnCloseVerifyPasswordButton()
		{
            _passwordPanel.SetActive(false);
		}

		private void OnBalanceUpdate(IEvent e)
		{
			CashBalanceUpdateEvent data = ((CashBalanceUpdateEvent)e);
			_gameCreditsValue.text = data.gameCredits.ToString("C");
			_cashValue.text = data.cashBalance.ToString(("C"));
			_balanceValue.text = (data.cashBalance + data.gameCredits).ToString("C");
		}

        private void OnFAQButton()
        {
            controller.Help();
        }
	}
}