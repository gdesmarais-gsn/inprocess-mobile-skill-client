using System.Collections.Generic;
using GSN.Skill.Events;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using GSN.Skill.Phoenix.View.Pool;

namespace GSN.Skill.Phoenix.View
{
	public class ForgotPasswordPopupView : PopupView
	{
        [SerializeField]
        private Button _submitButton;
		[SerializeField]
		private Button _dismissButton;
		[SerializeField]
		private Button _closeButton;
        [SerializeField]
        private GsnInputField _emailField;
        [SerializeField]
        private Transform _usernameList;
        [SerializeField]
        private ToggleGroup _toggleGroup;

        private List<Toggle> _toggles;
        private List<string> _usernames;

        [SerializeField]
        private GameObject _emailPanel;
		[SerializeField]
		private GameObject _multiUserPanel;
		[SerializeField]
		private GameObject _messagePanel;

        [SerializeField]
        private TextMeshProUGUI _messageText;

        private bool _hasMultiUsers = false;

        private const string USERNAME_TOGGLE_RESOURCE = "PANEL_Username";


		protected override void OnEnable()
		{
			base.OnEnable();

            _submitButton.interactable = false;
            EventDispatcher.AddListener<ResetPasswordSuccessEvent>(OnResetPasswordSuccess);
            EventDispatcher.AddListener<ResetPasswordErrorEvent>(OnResetPasswordFail);
            EventDispatcher.AddListener<ResetPasswordMultiAccountEvent>(OnMultiAccount);

            _submitButton.onClick.AddListener(OnSubmitButton);
            _dismissButton.onClick.AddListener(OnDismissButton);
            _closeButton.onClick.AddListener(OnDismissButton);

            _emailField.validateHandler += CheckValidInput;

			_emailField.SetFieldText(string.Empty);

            _hasMultiUsers = false;
            _toggles = new List<Toggle>();
            _usernames = new List<string>();

			_emailPanel.SetActive(true);
			_multiUserPanel.SetActive(false);
			_messagePanel.SetActive(false);

            ClearChildrenObjects(_usernameList);

			_dismissButton.gameObject.SetActive(false);
			_submitButton.gameObject.SetActive(true);
            _closeButton.gameObject.SetActive(true);
        }

		protected override void OnDisable()
		{
			base.OnDisable();

            EventDispatcher.RemoveListener<ResetPasswordSuccessEvent>(OnResetPasswordSuccess);
            EventDispatcher.RemoveListener<ResetPasswordErrorEvent>(OnResetPasswordFail);
            EventDispatcher.RemoveListener<ResetPasswordMultiAccountEvent>(OnMultiAccount);

            _emailField.validateHandler -= CheckValidInput;

            _submitButton.onClick.RemoveListener(OnSubmitButton);
            _dismissButton.onClick.RemoveListener(OnDismissButton);
            _closeButton.onClick.RemoveListener(OnDismissButton);
		}

		private void CheckValidInput()
		{
			_submitButton.interactable = HasAllRequiredInput();
		}

		private bool HasAllRequiredInput()
		{
            if (!_emailField.IsValid())
				return false;

			return true;
		}

		void OnSubmitButton()
		{
			if (!string.IsNullOrEmpty(_emailField.GetFieldText()))
            {
                if (!_hasMultiUsers)
					controller.ResetPassword(_emailField.GetFieldText());
                else
					controller.ResetPassword(_emailField.GetFieldText(), SelectedUsername());
            }
            else
            {
                Debug.LogError("It's empty");
            }
        }

        void OnDismissButton()
        {
            Hide();
        }

        string SelectedUsername()
        {
            string user = "";
            for (int i = 0; i < _toggles.Count; i++)
            {
                if (_toggles[i].isOn)
                    user = _usernames[i];
            }

            Debug.Log("Seleceted User: " + user);
            return user;
        }

        void OnResetPasswordSuccess(IEvent e)
        {
            _messageText.text = ((ResetPasswordSuccessEvent)e).message;

			_emailPanel.SetActive(false);
            _multiUserPanel.SetActive(false);
			_messagePanel.SetActive(true);
            _dismissButton.gameObject.SetActive(true);
            _submitButton.gameObject.SetActive(false);
            _closeButton.gameObject.SetActive(false);
        }

		void OnResetPasswordFail(IEvent e)
		{
            _messageText.text = ((ResetPasswordErrorEvent)e).message;

			_emailPanel.SetActive(false);
            _multiUserPanel.SetActive(false);
			_messagePanel.SetActive(true);
			_dismissButton.gameObject.SetActive(true);
			_submitButton.gameObject.SetActive(false);
            _closeButton.gameObject.SetActive(false);
		}

		void OnMultiAccount(IEvent e)
		{
            _hasMultiUsers = true;

            ResetPasswordMultiAccountEvent evt = (ResetPasswordMultiAccountEvent)e;
            _usernames = evt.usernames;

            for (int i = 0; i < _usernames.Count; i++)
            {
                PasswordResetUsernameTile usernameToggle = GameObjectPoolManager.Instance.GetObject<PasswordResetUsernameTile>(USERNAME_TOGGLE_RESOURCE);
                usernameToggle.transform.SetParent(_usernameList, false);
                usernameToggle.username.text = _usernames[i];
                usernameToggle.toggle.group = _toggleGroup;
                _toggles.Add(usernameToggle.toggle);
            }

            _emailPanel.SetActive(false);
            _multiUserPanel.SetActive(true);
            _messagePanel.SetActive(false);

			_dismissButton.gameObject.SetActive(false);
			_submitButton.gameObject.SetActive(true);
            _closeButton.gameObject.SetActive(true);
		}
    }
}