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
	public class ResetPasswordManager
	{
		#region Public Functions

		public void ResetPassword(string emailAddress, string username="")
		{
			RequestManager.Instance.resetPassword.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.resetPassword.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.resetPassword.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.resetPassword.OnFailHandler += OnResetPasswordFail;
			RequestManager.Instance.resetPassword.OnCompleteHandler += OnResetPasswordSuccess;

			RequestManager.Instance.resetPassword.email= emailAddress;
			RequestManager.Instance.resetPassword.username= username;
			WebRequester.Instance.FetchRequest(RequestManager.Instance.resetPassword);
		}
		public void ShowResetPasswordPopup()
		{
			PopupManager.Instance.SetPopup(new ResetPasswordPopupModel());
		}
		#endregion

		private void OnResetPasswordFail(IWebRequest request)
		{
			
			RequestManager.Instance.resetPassword.OnFailHandler -= OnResetPasswordFail;
			RequestManager.Instance.resetPassword.OnCompleteHandler -= OnResetPasswordSuccess;
			// On a failure, we want to check to see if it was because of multiAccounts
			// In this situation, the response looks like this:
			//{
			//	"result": {
			//		"multiAccounts": 1,
			//		"errors": [
			//			"thefaize",
			//			"thefaizep1",
			//		]
			//	}
			//}
			// If yes, let the front end know.
			if (RequestManager.Instance.resetPassword.Response.result.multiAccounts == true)
			{
				ResetPasswordMultiAccountEvent evt = new ResetPasswordMultiAccountEvent();
				evt.usernames = new List<string>();
				for (int i = 0; i < request.error.errors.Length; ++i)
				{
					evt.usernames.Add(request.error.errors[i].error_message);
				}
				EventDispatcher.DispatchEvent(evt);
			}
			else
			{
				// If we are able to get an error out of the error array, dispatch a ResetPasswordErrorEvent so the popup
				// can show that text in itself.
				if (request.error.errors.Length > 0)
				{
					EventDispatcher.DispatchEvent(new ResetPasswordErrorEvent(request.error.errors[0].error_message));
				}
				else
				{
					// If we get here, we had a bigger problem.  500 error, or no response from server.
					ErrorManager.Instance.HandleWebRequestError(ErrorType.RestAccount, request);
				}
			}
		}
		private void OnResetPasswordSuccess(IWebRequest request)
		{
			RequestManager.Instance.resetPassword.OnFailHandler -= OnResetPasswordFail;
			RequestManager.Instance.resetPassword.OnCompleteHandler -= OnResetPasswordSuccess;
			EventDispatcher.DispatchEvent(new ResetPasswordSuccessEvent(RequestManager.Instance.resetPassword.Response.result.Success));
		}
	}
}