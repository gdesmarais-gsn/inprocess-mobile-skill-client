using UnityEngine;
using UnityEngine.UI;
using TMPro;
using GSN.Skill.Phoenix.Model;
using System.Text;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.View
{
	public class WebRequestErrorPopupView : PopupView
	{
		private static StringBuilder _stringBuilder = new StringBuilder();

		[SerializeField]
		private Button _closeButton;
		[SerializeField]
		private TextMeshProUGUI _errorHeaderText;
		[SerializeField]
		private TextMeshProUGUI _errorMessageText;
		[SerializeField]
		private Button _errorButton;
		[SerializeField]
		private TextMeshProUGUI _errorButtonText;
        [SerializeField]
        private Button _helpButton;
        [SerializeField]
        private TextMeshProUGUI _helpButtonText;

		private bool _closable = true;

		protected override void OnEnable()
		{
			_errorButton.onClick.AddListener(OnCTAButton);
			_helpButton.onClick.AddListener(OnHelpButton);
			_closeButton.onClick.AddListener(OnCloseButton);
			EventDispatcher.AddListener<WebRequestErrorEvent>(OnWebRequestError);
		}

		protected override void OnDisable()
		{
			_errorButton.onClick.RemoveListener(OnCTAButton);
			_helpButton.onClick.RemoveListener(OnHelpButton);
			_closeButton.onClick.RemoveListener(OnCloseButton);
			EventDispatcher.RemoveListener<WebRequestErrorEvent>(OnWebRequestError);
		}

		private void OnWebRequestError(IEvent e)
		{
			SetError(((WebRequestErrorEvent)e).error);
		}

		private void SetError(ErrorData errorData)
		{
			_errorHeaderText.text = StringTable.Instance.GetEntry(CategoryCommon.GenericErrorHeader);

			for (int i = 0; i < errorData.message.Count; ++i)
			{
				// build up string of error messages
				_stringBuilder.AppendLine(errorData.message[i]);
			}

			_errorMessageText.text = _stringBuilder.ToString();
            LayoutRebuilder.ForceRebuildLayoutImmediate(_errorMessageText.rectTransform); //This forces the layout to adjust to the size of the text

			// reset string builder
			_stringBuilder.Length = 0;

			if (!string.IsNullOrEmpty(errorData.buttonText))
			{
				_errorButtonText.text = errorData.buttonText;
			}
			else if (IsWebRequestRetry(errorData))
			{
				_errorButtonText.text = StringTable.Instance.GetEntry(CategoryCommon.GenericErrorRetryButton);
			}
			else
			{
				_errorButtonText.text = StringTable.Instance.GetEntry(CategoryCommon.GenericErrorOKButton);
			}
			_helpButtonText.text = StringTable.Instance.GetEntry(CategoryCommon.GenericErrorHelpButton);
			if (errorData.playerServicesMentioned)
				_helpButton.gameObject.SetActive(true);
			else
				_helpButton.gameObject.SetActive(false);

			_closeButton.gameObject.SetActive(errorData.showCloseButton);

			// There is one scenario where we never want to dismiss this popup.
			if (errorData.type == ErrorType.ClientVersionOutOfDate)
				_closable = false;
		}

		private bool IsWebRequestRetry(ErrorData errorData)
		{
			if (errorData.callback == null)
				return false;

			switch (errorData.type)
			{
				case ErrorType.RestAPIDiscovery:
				case ErrorType.RestTournament:
				case ErrorType.RestAccount:
				case ErrorType.RestPayment:
					return true;
				default:
					return false;
			}
		}

		protected override void Hide()
		{
			if(_closable)
			{
				controller.RemovePopup(_uid);
				Destroy(this.gameObject);
			}
		}

		void OnCTAButton()
		{
			controller.HandleErrorCallback();
			OnHide();
		}

		void OnCloseButton()
		{
			OnHide();
		}

		void OnHelpButton()
		{
			controller.Help();
			OnHide();
		}
	}
}