using System;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Model.Popups;
using GSN.Skill.Phoenix.Strings;
using GSN.Skill.Phoenix.Utils;
using GSN.Skill.Requests;
using GSN.Skill.Utils;
using UnityEngine;
namespace GSN.Skill.Phoenix.Model
{
	// TODO: Consider having only two error types: WebRequestError and UserError
	public enum ErrorType
	{
		Multiple, // multiple requests
		RestAPIDiscovery,
		RestAccount, // maybe we should be more granular?
		RestPayment, // maybe we should be more granular?
		RestTournament, // maybe we should be more granular?
		RestReward,
		Login,
		Register,
		Logout,
		ClientBalanceCheck,
		GamePlayError,
		MaxSignup,
		Gps,
		TaxWithholding,
		ClientVersionOutOfDate
	}

	public struct ErrorData
	{
		public ErrorType type;
		public List<string> message;
		public Action callback;
		public bool playerServicesMentioned;
		public string buttonText;
		public bool showCloseButton;
	}

	public class ErrorManager : SingletonMonoBehaviour<ErrorManager>
	{
		private const string PASSWORD_REQUIRED_KEY = "please enter your password";
		private const string PLAYER_SERVICES_PATTERN = "Player Services";
		private const string FRAUD_AND_FAIRNESS_PATTERN = "Fraud and Fairness";
		private const string FRAUD_AND_RISK_PATTERN = "Fraud and Risk";
		 

		private CurrentUser _currentUser;
		private ErrorData? _currentError;

		private Action _onSuccessCallback;

		public void Init(CurrentUser currentUser)
		{
			_currentUser = currentUser;
		}

		/// <summary>
		/// TODO: This function may be overkill. We can have the view just hit the callback it knows about already...
		/// </summary>
		public void HandleErrorCallback()
		{
			if (_currentError.HasValue && _currentError.Value.callback != null)
				_currentError.Value.callback();
		}

		public void ClearCurrentError()
		{
			if (!_currentError.HasValue)
			{
				GsnDebug.LogError("No error to clear.");
				return;
			}

			_currentError = null;
		}

		public void HandleWebRequestError(ErrorType type, IWebRequest request, bool allowRetry = false)
		{
			// TODO: Consider unique errors like Login or Register errors.
			// Maybe we should enum these errors so the view can handle them accordingly

			if (!ValidateError())
				return;

			WebRequestErrorData.Error[] errors = request.error.errors;

			var errorData = new ErrorData();

			errorData.type = type;
			errorData.message = new List<string>();

			PopulateErrorMessage(ref errorData, errors);

			if (allowRetry)
			{
				errorData.callback = () =>
				{
					// retry fetching the request if requested by the view
					WebRequester.Instance.FetchRequest(request);
				};
			}

			_currentError = errorData;

			PopupManager.Instance.SetPopup(new GenericErrorPopupModel(errorData));
		}

		public void HandleWebRequestsError(WebRequests requests, bool allowRetry = false)
		{
			if (!ValidateError())
				return;

			var errorData = new ErrorData();

			errorData.type = ErrorType.Multiple;
			errorData.message = new List<string>();

			// create a deep copy to not affect the original webrequest
			var requestsTemp = new Queue<IWebRequest>(requests);
			while (requestsTemp.Count > 0)
			{
				var request = requestsTemp.Dequeue();

				if (request.IsError)
					PopulateErrorMessage(ref errorData, request.error.errors);
			}

			if (allowRetry)
			{
				errorData.callback = () =>
				{
					// retry fetching the requests if requested by the view
					// TODO NOTE: if they retry an already successful request again it'll be ignored since it's been done already
					// this may be a problem for requests that NEED specific order so we may want to invalidate the data
					// in all the requests before retrying
					WebRequester.Instance.TryMultipleRequestsAgain(requests);
				};
			}

			_currentError = errorData;

			PopupManager.Instance.SetPopup(new GenericErrorPopupModel(errorData));
		}

		public void HandleWebRequestError(ErrorType type, string message, Action callback = null)
		{
			HandleUserError(type, message, callback);
		}

		public void HandleUserError(ErrorType type, string message, Action callback = null, string buttonText = "", bool showCloseButton = false)
		{
			if (!ValidateError())
				return;

			var errorData = new ErrorData();
			errorData.type = type;
			errorData.message = new List<string>() { message };
			errorData.callback = callback;
			errorData.buttonText = buttonText;
			errorData.showCloseButton = showCloseButton;

			GsnDebug.LogError("User Error Occurred: " + type.ToString() + " - " + message);

			_currentError = errorData;

			PopupManager.Instance.SetPopup(new GenericErrorPopupModel(errorData));
		}

		private bool ValidateError()
		{
			if (_currentError.HasValue)
			{
				GsnDebug.LogError("Already displaying error: " + _currentError.Value.type + " error = " + _currentError.Value.message);
				return false;
			}

			return true;
		}

		private void PopulateErrorMessage(ref ErrorData errorData, WebRequestErrorData.Error[] errors)
		{
			for (int i = 0; i < errors.Length; ++i)
			{
				string msg = errors[i].error_message;
				ErrorTranslation? translation = GetErrorTranslation(msg);
				if (translation.HasValue)
				{
					msg = translation.Value.message;
				}
				if (msg.Contains(PLAYER_SERVICES_PATTERN) || msg.Contains(FRAUD_AND_FAIRNESS_PATTERN) || msg.Contains(FRAUD_AND_RISK_PATTERN))
					errorData.playerServicesMentioned = true;
				errorData.message.Add(msg.StripHTMLTags());
			}
		}

		#region Parsing World Winner Errors

		public ErrorTranslation? GetErrorTranslation(IWebRequest request)
		{
			if (request.error.errors.Length != 1)
				return null;
			
			return GetErrorTranslation(request.error.errors[0].error_message);
		}

		public ErrorTranslation? GetErrorTranslation(string wwErrorMsg)
		{
			return StringTable.Instance.GetErrorTranslation(wwErrorMsg);
		}

        public void GetAllErrorTranslations(WebRequestErrorData.Error[] errors, ref List<ErrorTranslation> translations)
        {
            for (int i = 0; i < errors.Length; ++i)
            {
                string msg = errors[i].error_message;
                ErrorTranslation? translation = GetErrorTranslation(msg);
                //GsnDebug.Log(">>> [ErrorManager]: Parsing error string [" + i + "]: " + msg);
                if (translation.HasValue)
                {
                    translations.Add(translation.Value);
                }
            }
        }

		#endregion

		#region Gps Errors

		public void ShowGpsPermission(Action OnCallback, Action OnCancelCallback)
		{
			PopupManager.Instance.SetPopup(new GpsPermissionPopupModel(OnCallback, OnCancelCallback));
		}

		public GpsDeniedPopupModel ShowGpsDenied(Action OnCallback, Action OnCancelCallback)
		{
			var locationDeniedPopup = new GpsDeniedPopupModel(OnCallback, OnCancelCallback);
			PopupManager.Instance.SetPopup(locationDeniedPopup);

			return locationDeniedPopup;
		}

		#endregion

		#region Verify Password Error

		public bool ValidateVerifyPassword(IWebRequest request)
		{
			if (request.error.errors.Length != 1)
				return false;

			return request.error.errors[0].error_message.Contains(PASSWORD_REQUIRED_KEY);
		}

		/// <summary>
		/// Shows the verify password popup. The success callback will be called if the verification succeeds.
		/// </summary>
		/// <param name="OnSuccessCallback">On success callback.</param>
		public void ShowVerifyPassword(Action OnSuccessCallback)
		{
			_onSuccessCallback = OnSuccessCallback;

			PopupManager.Instance.SetPopup(new VerifyPasswordPopupModel());
		}

		public void HandleVerifyPassword(string password)
		{
			if (PopupManager.Instance.GetTopPopupType() != PopupType.ErrorVerifyPassword)
			{
				GsnDebug.LogError("Attempting to verify a password when the Verify Password Popup isn't showing.");
				return;
			}

			RequestManager.Instance.login.OnCompleteHandler += OnVerifyPasswordLoginSuccess;
			RequestManager.Instance.login.OnFailHandler += OnVerifyPasswordLoginFail;
			RequestManager.Instance.login.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.login.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.login.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.login.username = _currentUser.username;
			RequestManager.Instance.login.password = password;
			WebRequester.Instance.FetchRequest(RequestManager.Instance.login);
		}

		private void OnVerifyPasswordLoginSuccess(IWebRequest request)
		{
			RequestManager.Instance.login.OnCompleteHandler -= OnVerifyPasswordLoginSuccess;
			RequestManager.Instance.login.OnFailHandler -= OnVerifyPasswordLoginFail;
			RequestManager.Instance.login.OnBeginHandler -= GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.login.OnCompleteHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.login.OnFailHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			// If we encountered a captcha error, this function displays the error, we also don't want to continue.
			if (!LoginUtilities.HandleCaptchaError(RequestManager.Instance.login.Response.result))
			{
				EventDispatcher.DispatchEvent(new VerifyPasswordSuccessEvent());

				if (_onSuccessCallback != null)
					_onSuccessCallback();

				_onSuccessCallback = null;
			}
		}

		private void OnVerifyPasswordLoginFail(IWebRequest request)
		{
			RequestManager.Instance.login.OnCompleteHandler -= OnVerifyPasswordLoginSuccess;
			RequestManager.Instance.login.OnFailHandler -= OnVerifyPasswordLoginFail;
			RequestManager.Instance.login.OnBeginHandler -= GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.login.OnCompleteHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.login.OnFailHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			ErrorManager.Instance.HandleWebRequestError(ErrorType.RestAccount, request);
		}

		#endregion

		/// <summary>
		/// When we resume, get the latest config data.  When we do that we force a min client version check to occur.
		/// </summary>
		private void OnApplicationPause(bool paused)
		{
			if (!paused)
			{
				WebRequester.Instance.FetchRequest(RequestManager.Instance.configData);
			}

		}

	}
}
