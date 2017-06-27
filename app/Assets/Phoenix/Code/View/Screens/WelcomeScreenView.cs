using UnityEngine;
using UnityEngine.UI;

namespace GSN.Skill.Phoenix.View
{
	public class WelcomeScreenView : ScreenView {

		[SerializeField]
		private Button _loginButton;
		[SerializeField]
		private Button _registerButton;

		protected override void OnEnable()
		{
			_loginButton.onClick.AddListener(OnLoginButton);
			_registerButton.onClick.AddListener(OnRegisterButton);
		}

		protected override void OnDisable()
		{
			_loginButton.onClick.RemoveListener(OnLoginButton);
			_registerButton.onClick.RemoveListener(OnRegisterButton);
		}

		void OnLoginButton()
		{
			controller.ShowLogin();
		}

		void OnRegisterButton()
		{
			controller.ShowRegistration();
		}
	}
}