﻿using GSN.Skill.Events;
using UnityEngine;
using UnityEngine.UI;

namespace GSN.Skill.Phoenix.View
{
	public class LoginPopupView : PopupView
	{
		[SerializeField]
		private GsnInputField _usernameInput;
		[SerializeField]
		private GsnInputField _passwordInput;
		[SerializeField]
		private Toggle _rememberMeToggle;
		[SerializeField]
		private Button _submitButton;
		[SerializeField]
		private Button _closeButton;

        [SerializeField]
        private Button _forgotPasswordButton;

		protected override void OnEnable()
		{
            base.OnEnable();

            _submitButton.interactable = false;
			EventDispatcher.AddListener<LoginSuccessEvent>(OnLoginSuccess);
			EventDispatcher.AddListener<LoginPopupInitEvent>(PrepopulateLogin);

            // Link the error validation so changes to one panel will force the other
            // panel to validate so errors deliberately displayed on both field can
            // potentially clear if the user corrects one field.
            _usernameInput.SetRevalidateOnVisibleErrorTarget(_passwordInput);
            _passwordInput.SetRevalidateOnVisibleErrorTarget(_usernameInput);

            _usernameInput.validateHandler += CheckValidInput;
            _passwordInput.validateHandler += CheckValidInput;

			_submitButton.onClick.AddListener(OnSubmitButton);
			_closeButton.onClick.AddListener(OnCloseButton);
            _forgotPasswordButton.onClick.AddListener(OnForgotPassword);
		}

		protected override void OnDisable()
		{
            base.OnDisable();

			EventDispatcher.RemoveListener<LoginSuccessEvent>(OnLoginSuccess);
			EventDispatcher.RemoveListener<LoginPopupInitEvent>(PrepopulateLogin);

            _usernameInput.validateHandler -= CheckValidInput;
            _passwordInput.validateHandler -= CheckValidInput;

			// reset assets
			_submitButton.onClick.RemoveListener(OnSubmitButton);
			_closeButton.onClick.RemoveListener(OnCloseButton);
            _forgotPasswordButton.onClick.RemoveListener(OnForgotPassword);

			_usernameInput.SetFieldText(string.Empty);
			_passwordInput.SetFieldText(string.Empty);
			_rememberMeToggle.isOn = false;
		}

		private void PrepopulateLogin(IEvent e)
		{
			var evt = (LoginPopupInitEvent)e;

			if (!string.IsNullOrEmpty(evt.username))
				_usernameInput.SetFieldText(evt.username);
			_rememberMeToggle.isOn = evt.rememberMeEnabled;
		}

		private void CheckValidInput()
		{
			_submitButton.interactable = HasAllRequiredInput();
		}

        private bool HasAllRequiredInput()
        {
            if (!_usernameInput.IsValid())
                return false;
            if (!_passwordInput.IsValid())
				return false;

            return true;
        }

		private void OnSubmitButton()
		{
			// TODO[Doug]: Shouldn't this be changed to call HasAllRequiredInput() instead? (Looks like old code before fix.)
			if (!string.IsNullOrEmpty(_usernameInput.GetFieldText()) && !string.IsNullOrEmpty(_passwordInput.GetFieldText()))
			{
				controller.Login(_usernameInput.GetFieldText(), _passwordInput.GetFieldText(), _rememberMeToggle.isOn);
			}
			else
			{
				Debug.LogError("It's empty");
			}
		}

		private void OnLoginSuccess(IEvent e)
		{
			OnHide();
		}

        private void OnForgotPassword()
        {
            controller.ShowResetPasswordPopup();
            OnHide();
        }

		private void OnCloseButton()
		{
			OnHide();
		}
	}
}