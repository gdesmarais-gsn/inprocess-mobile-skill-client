using GSN.Skill.Phoenix.WebObject;
using GSN.Skill.Utils;

using GSN.Skill.Phoenix.Model.Popups;
using GSN.Skill.Requests;
using UnityEngine;

namespace GSN.Skill.Phoenix.Model
{
	public class WebViewManager : SingletonMonoBehaviour<WebViewManager>
	{
		private const string REQUEST_HEADER_COOKIE_NAME = "Cookie";
		private const string MOBILE_COOKIE = "is_phoenix=1;";

		private WebObjectWrapper _webObj = new WebObjectWrapper();

		public void OpenURL(string url)
		{
			_webObj.url = url; // Test url for tax form: "https://qa.worldwinner.com/desktop/cgi/tax/tax_reporting.html";

			// extract the request headers we typically set for worldwinner webrequests and inject it into the webview via custom headers.
			var headers = WebRequester.Instance.MainSessionHandler.GetRequestHeaders();

			if (headers.ContainsKey(REQUEST_HEADER_COOKIE_NAME))
			{
				// concatenate additional cookie to this header
				headers[REQUEST_HEADER_COOKIE_NAME] += MOBILE_COOKIE;
			}

			foreach (var entry in headers)
			{
				_webObj.AddCustomHeader(entry.Key, entry.Value);
			}

			PopupManager.Instance.SetPopup(new WebViewPopupModel(_webObj));
		}
		public void OpenNativeURL(string url)
		{
			if (!string.IsNullOrEmpty(url))
				Application.OpenURL(url);
		}
	}
}
