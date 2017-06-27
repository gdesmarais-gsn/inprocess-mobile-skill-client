using GSN.Skill.Events;
using GSN.Skill.Requests;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Phoenix.Model.Popups;
using GSN.Skill.Phoenix.Utils;
using GSN.Skill.Phoenix.Strings;
using UnityEngine;

namespace GSN.Skill.Phoenix.Model
{
	public class LoginFlowManager
	{
		private ScreenManager _screenManager;
		private CurrentUser _currentUser;

		public LoginFlowManager(ScreenManager screenManager, CurrentUser currentUser)
		{
			_screenManager = screenManager;
			_currentUser = currentUser;
		}

		#region Public Functions

		public bool autoLoginEnabled
		{
			get
			{
				return UserSaveRestore.Global.AutoLoginEnabled && // auto login enabled
					!string.IsNullOrEmpty(UserSaveRestore.Global.AuthenticationUsername) && // has user
					!string.IsNullOrEmpty(UserSaveRestore.Global.AuthenticationToken); // has authtoken
			}
		}

		public void AutoLogin(SingleWebRequestComplete OnComplete, SingleWebRequestFail OnFail)
		{
			GsnDebug.Log("Model Login Flow Start with credentials: " + UserSaveRestore.Global.AuthenticationUsername + "/" + UserSaveRestore.Global.AuthenticationToken + " | AutoLogin: " + UserSaveRestore.Global.AutoLoginEnabled);

			// user is auto logged in! let's log in bro
			var rememberMeLogin = RequestManager.Instance.rememberMe;

			rememberMeLogin.Username = UserSaveRestore.Global.AuthenticationUsername;
			rememberMeLogin.AuthToken = UserSaveRestore.Global.AuthenticationToken;

			// NOTE: Do not need to define the global fetch event notifier because we're on the loading screen
			// and the user hasn't been able to provide input yet.

			rememberMeLogin.OnCompleteHandler += OnAutoLoginComplete;
			rememberMeLogin.OnFailHandler += OnAutoLoginFail;

			if (OnComplete != null)
				rememberMeLogin.OnCompleteHandler += OnComplete;

			if (OnFail != null)
				rememberMeLogin.OnFailHandler += OnFail;

			GsnDebug.Log("Model Login Fetch Remember Me");

			WebRequester.Instance.FetchRequest(rememberMeLogin);
		}

		public void ShowWelcomeScreen()
		{
			_screenManager.CurrentScreen = ScreenType.Welcome;
		}

		public void ShowLogin()
		{
			PopupManager.Instance.SetPopup(new LoginPopupModel(UserSaveRestore.Global.AuthenticationUsername, UserSaveRestore.Global.RememberMeEnabled));
		}

		public void ShowRegistration()
		{
			PopupManager.Instance.SetPopup(new RegisterPopupModel());
		}

		public void RegisterUser(string username, string email, string password)
		{
			var register = RequestManager.Instance.register;

			register.username = username;
			register.password = password;
			register.email = email;

			register.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			register.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			register.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			register.OnCompleteHandler += OnRegisterUserSuccess;
			register.OnFailHandler += OnRegisterUserFail;

			WebRequester.Instance.FetchRequest(register);
		}

		public void Login(string username, string password, bool autoLoginEnabled)
		{
			var login = RequestManager.Instance.login;

			login.username = username;
			login.password = password;

			GsnDebug.Log("Set AutoLoginEnabled to: " + autoLoginEnabled);
			UserSaveRestore.Global.AutoLoginEnabled = autoLoginEnabled;
			UserSaveRestore.Global.RememberMeEnabled = autoLoginEnabled; // this button tracks the state of the button on the login screen

			login.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			login.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			login.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			login.OnCompleteHandler += OnLoginComplete;
			login.OnFailHandler += OnLoginFail;

			WebRequester.Instance.FetchRequest(login);
		}

		#endregion

		private void HandleSuccessfulLogin()
		{
			EventDispatcher.DispatchEvent(new SceneLoadCompleteEvent(SceneLoadType.StartupLoad));
		}

		private void OnRegisterUserSuccess(IWebRequest request)
		{
			GsnDebug.Log("Model User Registration Complete");

			var register = RequestManager.Instance.register;
			register.OnCompleteHandler -= OnRegisterUserSuccess;
			register.OnFailHandler -= OnRegisterUserFail;

			// user has officially registered! let's keep them logged in by default
			GsnDebug.Log("setting auto login to true");
			UserSaveRestore.Global.AutoLoginEnabled = true;
			UserSaveRestore.Global.AuthenticationUsername = _currentUser.username;
			UserSaveRestore.Global.AuthenticationToken = _currentUser.authenticationToken;

			EventDispatcher.DispatchEvent(new RegisterUserSuccessEvent());
			HandleSuccessfulLogin();
		}

		private void OnRegisterUserFail(IWebRequest request)
		{
			GsnDebug.Log("Model User Registration Fail");

			var register = RequestManager.Instance.register;
			register.OnCompleteHandler -= OnRegisterUserSuccess;
			register.OnFailHandler -= OnRegisterUserFail;
			//Check to see if we hit one of our fail conditions.
			ErrorTranslation? errorTranslation = ErrorManager.Instance.GetErrorTranslation(request);
			bool dialogHandledError = false;
			if (errorTranslation.HasValue)
			{
				if (errorTranslation.Value.entryKey.GetType() == typeof(CategoryRegister))
				{
					switch ((CategoryRegister)errorTranslation.Value.entryKey)
					{
						case CategoryRegister.UsernameUnavailable:
						case CategoryRegister.EmailInUse:
						case CategoryRegister.EmailIncorrectFormat:
							dialogHandledError = true;
							EventDispatcher.DispatchEvent(new HandledInputErrorEvent(errorTranslation.Value));
							break;
					}
				}
			}
			if (!dialogHandledError)
				ErrorManager.Instance.HandleWebRequestError(ErrorType.Register, request);
		}

		private void OnLoginComplete(IWebRequest request)
		{
			GsnDebug.Log("Model Login Complete");

			var login = RequestManager.Instance.login;
			login.OnCompleteHandler -= OnLoginComplete;
			login.OnFailHandler -= OnLoginFail;
			// There is a special situation that happens if a user has multiple bad login attempts.  In HTML5 they are presented with
			// Captcha.  It is not caught as an error.  We will get a info object inside the response if this is the situation.
			if(LoginUtilities.HandleCaptchaError(login.Response.result))
			{
				return;
			}

			// TODO: Make sure this is safe. we're updating the current user after listening to the oncomplete of the same request
			UserSaveRestore.Global.AuthenticationUsername = _currentUser.username;
			UserSaveRestore.Global.AuthenticationToken = _currentUser.authenticationToken;

			// now that we're logged in we're done with the startup flow. notify the model
			EventDispatcher.DispatchEvent(new LoginSuccessEvent(false));
			HandleSuccessfulLogin();
		}

		private void OnLoginFail(IWebRequest request)
		{
			var login = RequestManager.Instance.login;

			login.OnCompleteHandler -= OnLoginComplete;
			login.OnFailHandler -= OnLoginFail;
			bool dialogHandledError = false;
			ErrorTranslation? errorTranslation = ErrorManager.Instance.GetErrorTranslation(request);
			if (errorTranslation.HasValue)
			{
				if (errorTranslation.Value.entryKey.GetType() == typeof(CategoryLogin))
				{
					switch ((CategoryLogin)errorTranslation.Value.entryKey)
					{
						case CategoryLogin.InvalidLogin:
							dialogHandledError = true;
							EventDispatcher.DispatchEvent (new HandledInputErrorEvent (errorTranslation.Value));

							// KLUDGE[Doug]: Added this as a quick hack to dispatch two events from the same web error to two
							// different input fields in the view. This allows us to show the same error message over more
							// than one input field in this specific case, though ultimately we'll want to remove this and
							// replace it with a better solution, possibly? (For instance, talking with Brian, it sounded like
							// we may want pop-ups to be able to fall back on an error pop-up for cases where we want to report
							// a general error without directing it at a specific input field.)
							//GsnDebug.LogError("[OnLoginFail] Running duplicate message KLUDGE to username input field!");
							ErrorTranslation copyOfErrorTranslation = new ErrorTranslation(InputFieldType.UsernameLite, errorTranslation.Value.entryKey);
							EventDispatcher.DispatchEvent (new HandledInputErrorEvent (copyOfErrorTranslation));
							// END OF KLUDGE
							break;
					}
				}
			}
			if (!dialogHandledError)
				ErrorManager.Instance.HandleWebRequestError(ErrorType.RestAccount, request);
		}

		private void OnAutoLoginComplete(IWebRequest request)
		{
			var rememberMeLogin = RequestManager.Instance.rememberMe;
			rememberMeLogin.OnCompleteHandler -= OnAutoLoginComplete;
			rememberMeLogin.OnFailHandler -= OnAutoLoginFail;
			EventDispatcher.DispatchEvent(new LoginSuccessEvent(true));
			_currentUser.wasPlayerAutoLoggedIn = true;
		}

		private void OnAutoLoginFail(IWebRequest request)
		{
			GsnDebug.Log("Auto Login Fail");

			var rememberMeLogin = RequestManager.Instance.rememberMe;
			rememberMeLogin.OnCompleteHandler -= OnAutoLoginComplete;
			rememberMeLogin.OnFailHandler -= OnAutoLoginFail;
		}
	}
}
