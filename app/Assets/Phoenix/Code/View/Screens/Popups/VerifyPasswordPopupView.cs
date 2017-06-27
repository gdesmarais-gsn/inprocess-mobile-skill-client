using GSN.Skill.Events;
using UnityEngine;
using UnityEngine.UI;

namespace GSN.Skill.Phoenix.View
{
	public class VerifyPasswordPopupView : PopupView
	{
        [SerializeField]
        private Button _submitButton;
		[SerializeField]
		private Button _closeButton;
		[SerializeField]
		private Button _forgotPasswordButton;

		[SerializeField]
		private InputField _passwordField;

		protected override void OnEnable()
		{
			base.OnEnable();

            EventDispatcher.AddListener<VerifyPasswordSuccessEvent>(OnVerifyPassword);
            _submitButton.onClick.AddListener(OnSubmitButton);
            _closeButton.onClick.AddListener(OnCloseButton);
            _forgotPasswordButton.onClick.AddListener(OnForgotPasswordButton);

            _passwordField.text = "";
        }

		protected override void OnDisable()
		{
			base.OnDisable();

            EventDispatcher.RemoveListener<VerifyPasswordSuccessEvent>(OnVerifyPassword);
            _submitButton.onClick.RemoveListener(OnSubmitButton);
			_closeButton.onClick.RemoveListener(OnCloseButton);
			_forgotPasswordButton.onClick.RemoveListener(OnForgotPasswordButton);
		}

		void OnSubmitButton()
		{
            if (!string.IsNullOrEmpty(_passwordField.text))
            {
                controller.VerifyPassword(_passwordField.text);
            }
            else
            {
                Debug.LogError("It's empty");
            }
        }

        void OnCloseButton()
        {
            OnHide();
        }

        void OnForgotPasswordButton()
        {
            controller.ShowResetPasswordPopup();
            OnHide();
        }

        void OnVerifyPassword(IEvent e)
        {
            OnHide();
        }
    }
}