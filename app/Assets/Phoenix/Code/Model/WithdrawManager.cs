using System;
using GSN.Skill.Phoenix.Model.Data;
using System.Collections.Generic;
using GSN.Skill.Events;
using System.Text.RegularExpressions;
using GSN.Skill.Requests;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Model.Popups;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.Model
{
	public class WithdrawManager
	{
		#region Public Functions
		 
		public void Withdraw(decimal amount, string password)
		{
			// Register for success and fail callbacks;
			RequestManager.Instance.withdraw.OnCompleteHandler += OnWithdrawSuccess;
			RequestManager.Instance.withdraw.OnFailHandler += OnWithdrawFail;
			RequestManager.Instance.withdraw.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.withdraw.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.withdraw.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			// Set required data
			RequestManager.Instance.withdraw.amount = amount;
			RequestManager.Instance.withdraw.password = password;

			// Make the call
			WebRequester.Instance.FetchRequest(RequestManager.Instance.withdraw);
		}

		#endregion

		#region Web Callbacks
		/// <summary>
		/// Raises the withdraw success event.
		/// If we get a success, the data that is returned is simply user data.  No success flag or anything
		/// </summary>
		/// <param name="request">Request.</param>
		private void OnWithdrawSuccess(IWebRequest request)
		{
			RequestManager.Instance.withdraw.OnCompleteHandler -= OnWithdrawSuccess;
			RequestManager.Instance.withdraw.OnFailHandler -= OnWithdrawFail;
			RequestManager.Instance.withdraw.OnBeginHandler -= GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.withdraw.OnCompleteHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.withdraw.OnFailHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			EventDispatcher.DispatchEvent(new WithdrawSuccessEvent());
		}
		private void OnWithdrawFail(IWebRequest request)
		{
			RequestManager.Instance.withdraw.OnCompleteHandler -= OnWithdrawSuccess;
			RequestManager.Instance.withdraw.OnFailHandler -= OnWithdrawFail;
			RequestManager.Instance.withdraw.OnBeginHandler -= GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.withdraw.OnCompleteHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.withdraw.OnFailHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			ErrorTranslation? translation = ErrorManager.Instance.GetErrorTranslation(request);

			if (translation.HasValue)
			{
				ErrorManager.Instance.HandleUserError(ErrorType.RestPayment, translation.Value.message);
			}
			else
			{
				ErrorManager.Instance.HandleWebRequestError(ErrorType.RestPayment,request);
			}
		}
		#endregion
	}
}