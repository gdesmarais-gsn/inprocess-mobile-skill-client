using UnityEngine;
using UnityEngine.UI;

namespace GSN.Skill.Phoenix.View
{
	public class LegalPageView : ScreenView
	{
		[SerializeField]
		private Button _TCButton;
		[SerializeField]
		private Button _TOSButton;
		[SerializeField]
		private Button _privacyPolicyButton;

		[SerializeField]
		private ProfilePopupView _profileView;

		protected override void OnEnable()
		{
			_TCButton.onClick.AddListener(OnTCButton);
			_TOSButton.onClick.AddListener(OnTOSButton);
            _privacyPolicyButton.onClick.AddListener(OnPrivacyPolicyButton);
		}

		protected override void OnDisable()
		{
            _TCButton.onClick.RemoveListener(OnTCButton);
			_TOSButton.onClick.RemoveListener(OnTOSButton);
			_privacyPolicyButton.onClick.RemoveListener(OnPrivacyPolicyButton);
		}

		private void OnTCButton()
		{
            controller.ShowTermsAndConditions();
		}

		private void OnTOSButton()
		{
            controller.ShowTermsofService();
		}

        private void OnPrivacyPolicyButton()
        {
            controller.ShowPrivacyPolicy();
        }
	}
}