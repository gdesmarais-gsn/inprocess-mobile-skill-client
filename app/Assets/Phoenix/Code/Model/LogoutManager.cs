using System;
using GSN.Skill.Phoenix.Model.Data;
using System.Collections.Generic;
using GSN.Skill.Events;
using System.Text.RegularExpressions;
using GSN.Skill.Requests;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Model.Popups;


namespace GSN.Skill.Phoenix.Model
{
	public class LogoutManager
	{

		private LogoutRequestData _logout;
		#region Public Functions

		public void Logout()
		{
			if (_logout == null)
				_logout = new LogoutRequestData();
			_logout.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			_logout.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			_logout.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			_logout.OnCompleteHandler += OnLogoutComplete;
			_logout.OnFailHandler += OnLogoutFail;

			WebRequester.Instance.FetchRequest(_logout);
		}
		#endregion

		#region Web Callbacks
		private void OnLogoutComplete(IWebRequest request)
		{
			// reset player prefs
			UserSaveRestore.Global.AuthenticationUsername = string.Empty;
			UserSaveRestore.Global.AuthenticationToken = string.Empty;
			UserSaveRestore.Global.AutoLoginEnabled = false;

			_logout.OnCompleteHandler -= OnLogoutComplete;
			_logout.OnFailHandler -= OnLogoutFail;

			if (_logout.LogoutSuccessful())
			{
				EventDispatcher.DispatchEvent(new LogoutSuccessfulEvent());
			}
			else
			{
				// something went wrong
				OnLogoutFail(request);
			}
		}

		private void OnLogoutFail(IWebRequest request)
		{
			_logout.OnCompleteHandler -= OnLogoutComplete;
			_logout.OnFailHandler -= OnLogoutFail;

			ErrorManager.Instance.HandleWebRequestError(ErrorType.Logout, request);
		}
		#endregion
	}
}