using GSN.Skill.Events;
using UnityEngine;
using UnityEngine.UI;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.View
{
	public class RegistrationPopupView : PopupView
	{
		[SerializeField]
		private GsnInputField _usernameInput;
		[SerializeField]
		private GsnInputField _emailInput;
		[SerializeField]
		private GsnInputField _passwordInput;
		[SerializeField]
		private Button _submitButton;
		[SerializeField]
		private Button _closeButton;
		[SerializeField]
		private Button _termsAndConditionsButton;

		protected override void OnEnable()
		{
            _submitButton.interactable = false;
			EventDispatcher.AddListener<RegisterUserSuccessEvent>(OnRegistrationSuccess);

			_submitButton.onClick.AddListener(OnSubmitButton);
			_closeButton.onClick.AddListener(OnCloseButton);
			_termsAndConditionsButton.onClick.AddListener(OnTermsAndConditionsButton);

			_usernameInput.validateHandler += CheckValidInput;
            _emailInput.validateHandler += CheckValidInput;
			_passwordInput.validateHandler += CheckValidInput;
		}

		protected override void OnDisable()
		{
			EventDispatcher.RemoveListener<RegisterUserSuccessEvent>(OnRegistrationSuccess);

			// reset assets
			_submitButton.onClick.RemoveListener(OnSubmitButton);
			_closeButton.onClick.RemoveListener(OnCloseButton);
			_termsAndConditionsButton.onClick.RemoveListener(OnTermsAndConditionsButton);

			_usernameInput.validateHandler -= CheckValidInput;
			_emailInput.validateHandler -= CheckValidInput;
			_passwordInput.validateHandler -= CheckValidInput;

			_usernameInput.SetFieldText(string.Empty);
			_emailInput.SetFieldText(string.Empty);
			_passwordInput.SetFieldText(string.Empty);
		}

		void OnSubmitButton()
		{
			if (!string.IsNullOrEmpty(_usernameInput.GetFieldText()) &&
			    !string.IsNullOrEmpty(_emailInput.GetFieldText()) &&
			    !string.IsNullOrEmpty(_passwordInput.GetFieldText()))
			{
				controller.RegisterUser(_usernameInput.GetFieldText(), _emailInput.GetFieldText(), _passwordInput.GetFieldText());
			}
			else
			{
				Debug.LogError("It's empty");
			}
		}

		void OnTermsAndConditionsButton()
		{
			GsnDebug.Log("Showing T&C");
			controller.ShowTermsAndConditions();
		}

		private void OnRegistrationSuccess(IEvent e)
		{
			OnHide();
		}

		void OnCloseButton()
		{
			OnHide();
		}

		private void CheckValidInput()
		{
			_submitButton.interactable = HasAllRequiredInput();
		}

		private bool HasAllRequiredInput()
		{
			if (!_usernameInput.IsValid())
				return false;
            if (!_emailInput.IsValid())
				return false;
			if (!_passwordInput.IsValid())
				return false;

			return true;
		}
	}
}