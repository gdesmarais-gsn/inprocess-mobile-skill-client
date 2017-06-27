using System;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Requests;
using GSN.Skill.Utils;
using UnityEngine;

namespace GSN.Skill.Phoenix.Model
{
	public class HelpManager
	{
		private HelpDeskURLRequestData _helpDeskURLGenerator;

		public HelpManager()
		{
			_helpDeskURLGenerator = new HelpDeskURLRequestData();
		}

		public void Help(string username)
		{
			_helpDeskURLGenerator.Username = username;

			_helpDeskURLGenerator.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			_helpDeskURLGenerator.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			_helpDeskURLGenerator.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			_helpDeskURLGenerator.OnCompleteHandler += OnHelpURLGenerated;
			_helpDeskURLGenerator.OnFailHandler += OnHelpURLFail;

			WebRequester.Instance.FetchRequest(_helpDeskURLGenerator);
		}

		private void OnHelpURLGenerated(IWebRequest request)
		{
			_helpDeskURLGenerator.OnCompleteHandler -= OnHelpURLGenerated;
			_helpDeskURLGenerator.OnFailHandler -= OnHelpURLFail;

			string url = _helpDeskURLGenerator.Response.result.url;

			GsnDebug.Log("Successfully generated help url:", url);

			WebViewManager.Instance.OpenNativeURL(url);
		}

		private void OnHelpURLFail(IWebRequest request)
		{
			_helpDeskURLGenerator.OnCompleteHandler -= OnHelpURLGenerated;
			_helpDeskURLGenerator.OnFailHandler -= OnHelpURLFail;

			GsnDebug.LogError("Failed to generate help url");

			ErrorManager.Instance.HandleWebRequestError(ErrorType.RestAccount, request);
		}
	}
}
