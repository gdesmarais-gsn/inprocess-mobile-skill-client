using GSN.Skill.Events;
using GSN.Skill.Phoenix.WebObject;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.View
{
	public class WebViewPopupView : PopupView
	{
		[SerializeField]
		private GameObject _webViewObject;

		[SerializeField]
		private GameObject _header;

		[SerializeField]
		private Button _closeButton;

		[SerializeField]
		private TextMeshProUGUI _headerText;

		[SerializeField]
		private int _headerHeight = 94;

		private const int MAX_WEB_URL_LENGTH = 22;

		private WebObjectWrapper webObj;

		private CanvasScaler _canvasScaler;

		public void Init(CanvasScaler canvasScaler)
		{
			_canvasScaler = canvasScaler;
		}

		protected override void OnEnable()
		{

			EventDispatcher.AddListener<InitWebViewEvent>(OnInitWebView);
			_closeButton.onClick.AddListener(OnClose);
		}

		protected override void OnDisable()
		{
			EventDispatcher.RemoveListener<InitWebViewEvent>(OnInitWebView);
			_closeButton.onClick.RemoveListener(OnClose);
		}

		private void OnClose()
		{
			webObj.SetVisibility(false);
			OnHide();
		}

		private void OnInitWebView(IEvent e)
		{
			var initEvt = e as InitWebViewEvent;
			webObj = initEvt.webObj;
			webObj.Attach(_webViewObject);
			webObj.Load();

			_headerText.text = webObj.url.Truncate(MAX_WEB_URL_LENGTH);

			webObj.SetVisibility(true);

			int topMargin = (int)(_headerHeight * _canvasScaler.scaleFactor);

			webObj.SetMargins(0, topMargin, 0, 0);
		}
	}
}
