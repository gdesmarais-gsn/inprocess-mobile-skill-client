using GSN.Skill.Events;
using GSN.Skill.Phoenix.WebObject;

namespace GSN.Skill.Phoenix.Model.Popups
{
	public class WebViewPopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.WebView; } }

		private WebObjectWrapper _webObj;

		public WebViewPopupModel(WebObjectWrapper webObj)
		{
			_webObj = webObj;
		}

		public void OnClose()
		{
			// handle functionality when the popup is closing
		}

		public void OnOpen()
		{
			InitWebViewEvent evt = new InitWebViewEvent();
			evt.webObj = _webObj;
			EventDispatcher.DispatchEvent(evt);
		}
	}
}
