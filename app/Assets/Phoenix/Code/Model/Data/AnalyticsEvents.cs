using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Utils;
using System;
using GSN.Skill.Requests;
using System.Globalization;
#if (UNITY_IPHONE || UNITY_ANDROID)
using KochavaUnity;
#endif
namespace GSN.Skill.Phoenix.Model.Data
{
	public enum AnalyticMetaDataName
	{
		type,
		client_request_send_time
	}
	/// <summary>
	/// These are the analytics attribute names used with Vertica
	/// </summary>
	public enum AnalyticsAttributeName
	{
		event_name, 
		event_id, // this is set in analytics manager
		event_created_time, // this is set in analytics manager
		category,
		subcategory,
		token_balance, // Using this for reward point balance.
		background_screen,
		modal_name,
		tourn_id,
		tourn_type,
		total_number_of_app_launches,
		rememeber_me_login,
		gametype_id,
		flavor_id,
		step_number,
		error,
		client_id,
		loading_screen_start,
		loading_screen_complete,
		amount,
		device_id, // using this for clientID tracking
		user_name,
		user_id,
		gamecredit_balance,
		dollar_balance,
		login_type
	}

	/// <summary>
	/// This is where you specify the analytics events we want in the Phoenix app.
	/// 
	/// This is where we should listen to events occurring within the app
	/// </summary>
	public class AnalyticsEvents
	{
		private enum Category
		{
			Gameplay,
			Transactions,
			UserFunnels,
			UserExperience
		}

		private enum Subcategory
		{
			AllUserFunnel,
			AppLoad,
			AppAuthentication,
			AppPerformance,
			ExistingUserFunnel,
			GameStart,
			GameEnd,
			Install,
			NewUserFunnel,
			Notifications,
			Performance,
			Payment,
			Permissions,
			Ratings,
			Progression,
			ResourceAdjustment,
			UIInteraction,
			UINavigation,
			UserAppSettings,
			UserGameSettings
		}

		private readonly Dictionary<ScreenType, string> BACKGROUND_SCREEN_LOOK_UP_TABLE = new Dictionary<ScreenType, string>()
		{
			{ ScreenType.Welcome, "screen_welcome" },
			{ ScreenType.Home, "screen_home" },
			{ ScreenType.GameHistory, "screen_game_history" },
			{ ScreenType.TournamentSelect, "screen_tournament_select" },
		};

		private readonly Dictionary<PopupType, string> MODAL_NAME_LOOK_UP_TABLE = new Dictionary<PopupType, string>()
		{
			{ PopupType.ErrorGpsDenied, "popup_error_gps_denied" },
			{ PopupType.ErrorWebRequest, "popup_error_web_request" },
			{ PopupType.ErrorGpsPermission, "popup_error_gps_permission" },
			{ PopupType.ErrorVerifyPassword, "popup_error_verify_password" },
			{ PopupType.Login, "popup_login" },
			{ PopupType.Deposit, "popup_deposit" },
			{ PopupType.Registration, "popup_registration" },
			{ PopupType.Profile, "popup_profile" },
			{ PopupType.TournamentDetails, "popup_tournament_details" },
			{ PopupType.TournamentResult, "popup_tournament_result" },
			{ PopupType.ResetPassword, "popup_reset_password" },
			{ PopupType.Rewards, "popup_rewards" },
		};

		private enum EventName
		{
			appInstallAttribution,
			appLaunch,
			accountLogin,
			accountLogout,
			accountRegister,
			sessionStart,
			appPause,
			appResume,
			error,
			logError,
			gameStart,
			gameEnd,
			appInstall,
			techTiming,
			checkpoint, // not used yet
			install,
			loadStart,
			loadComplete,
			registerClick,
			registrationSubmit,
			welcomeClosed,
			p1GameSelect,
			p1GameStart,
			p1GameSignup,
			p1GameComplete,
			gameSelect,
			tournamentSelect,
			cashDeposit,
			cashWithdrawal,
			payment, // not used yet
			resourceAdjustment, // not used yet
			permission, // not used yet
			screenFocus, // not used yet
			appNotification, // not used yet
			pushNotification, // not used yet
			techSample, // not used yet
			segmentChange, // not used yet
			appInterface, // not used yet
			appSettings, // not used yet
			userGameSettings, // not used yet
		}

		private enum LoginType
		{
			AutoLogin,
			NormalLogin
		}

		// Defines the enums for the AllUser Funnel.  The corresponding int is the step number we want to pass through with the event data.
		private enum AllUserFunnelEvent
		{
			install = 1, 
			loadStart = 2, 
			loadComplete= 3
		}
		// Defines the enums for the New User Funnel.  The corresponding int is the step number we want to pass through with the event data.
		private enum NewUserFunnelEvent
		{
			registerClick = 1, 
			registrationSubmit = 2, 
			registrationSuccessful = 3,
			welcomeClosed= 4,
			p1GameSelect = 5,
			p1GameSignup = 6,
			p1GameStart = 7,
			p1GameComplete = 8
		}
		// Defines the enums for the New User Funnel.  The corresponding int is the step number we want to pass through with the event data.
		private enum ExistingUserFunnelEvent
		{
			loginClick = 1, 
			loginComplete = 2, 
			welcomeClosed = 3,
			gameSelect = 4,
			tournamentSelect = 5,
			gameStart = 6,
			gameComplete = 7
		}
		public delegate void SendEventFunction(AnalyticsAttributes attributes);

		/// <summary>
		/// The function that handles sending the analytics event
		/// </summary>
		private SendEventFunction __sendEventFunction;

		private decimal _rewardPointsBalance;
		private string _backgroundScreen = string.Empty;
		private List<PopupType> _popups = new List<PopupType>();
		private string _modalContent = string.Empty; // TODO: figure out what to use modal content for (deposit pages?)
		private CurrentUser _currentUser;
		private GameListData _gameList;
		public AnalyticsEvents(SendEventFunction sendEvent, CurrentUser currentUser, GameListData gameList)
		{
			_currentUser = currentUser;
			_gameList = gameList;
			if (sendEvent == null)
			{
				GsnDebug.LogError("Send event function must be set.");
			}

			__sendEventFunction = sendEvent;

			SetEventListeners();
			// Do the check to see if this is the first time we launched the app.
			if (UserSaveRestore.Device.NumberOfLaunches == 0)
				SendAppInstallEvent();
			SendAppLaunchedEvent();
		}

		private void SetEventListeners()
		{
			EventDispatcher.AddListener<ScreenChangeEvent>(OnScreenChangeEvent);
			EventDispatcher.AddListener<PopupEvent>(OnPopupEvent);
			EventDispatcher.AddListener<PopupCloseEvent>(OnPopupCloseEvent);
			EventDispatcher.AddListener<CashBalanceUpdateEvent>(OnCashBalanceUpdate);
			EventDispatcher.AddListener<RewardPointsBalanceUpdateEvent>(OnRewardPointsBalanceUpdate);
			EventDispatcher.AddListener<RegisterUserSuccessEvent>(OnRegisterUserSuccess);
			EventDispatcher.AddListener<LoginSuccessEvent>(OnLoginSuccess);
			EventDispatcher.AddListener<LogoutSuccessfulEvent>(OnLogout);
			EventDispatcher.AddListener<WebGameStartButtonClickedEvent>(OnWebGameStart);
			EventDispatcher.AddListener<WebGameEndedEvent>(OnWebGameEnd);
			EventDispatcher.AddListener<TournamentSignupSuccessEvent>(OnTournamentSignupSuccessEvent);
			EventDispatcher.AddListener<P1GameSelectedEvent>(OnP1GameSelectedEvent);
			EventDispatcher.AddListener<SceneLoadCompleteEvent>(OnSceneLoadComplete);
			EventDispatcher.AddListener<SceneLoadBeginEvent>(OnSceneLoadBegin);
			EventDispatcher.AddListener<FetchScreenBeginEvent>(OnFetchScreenBeginEvent);
			RequestManager.Instance.register.OnBeginHandler += OnRegistrationSubmit;
			RequestManager.Instance.withdraw.OnCompleteHandler += OnWithdrawSuccess;

			EventDispatcher.AddListener<ShowWelcomeScreenEvent>(OnShowWelcomeScreenEvent);
			EventDispatcher.AddListener<LogErrorEvent>(OnLogErrorEvent);
			EventDispatcher.AddListener<WebRequestErrorEvent>(OnUserFacingError);
            EventDispatcher.AddListener<MakeDepositSuccessEvent>(OnMakeDepositSuccessEvent);

		}

		private void Send(AnalyticsAttributes attributes)
		{
			SetAdditionalAttributes(attributes);

			__sendEventFunction(attributes);
		}

		private AnalyticsAttributes SetMainAttributes(Category category, Subcategory subCategory, Enum eventName)
		{
			var attributes = new AnalyticsAttributes();
			attributes.Add(AnalyticsAttributeName.category, category.ToString());
			attributes.Add(AnalyticsAttributeName.subcategory, subCategory.ToString());
			attributes.Add(AnalyticsAttributeName.event_name, eventName.ToString());
			return attributes;
		}
		private AnalyticsAttributes SetFunnelAttributes(Category category, Subcategory subCategory, Enum eventName)
		{
			var attributes = SetMainAttributes(category, subCategory, eventName);
			attributes.Add(AnalyticsAttributeName.step_number, (Convert.ToInt32(eventName)).ToString());
			return attributes;
		}

		private void SetAdditionalAttributes(AnalyticsAttributes attributes)
		{
			attributes.Add(AnalyticsAttributeName.background_screen, _backgroundScreen);
			attributes.Add(AnalyticsAttributeName.modal_name, GetTopPopupModalName());
			if (_currentUser.userID > 0)
			{
				attributes.Add(AnalyticsAttributeName.user_id, _currentUser.userID.ToString() );
				attributes.Add(AnalyticsAttributeName.dollar_balance, _currentUser.cashBalance.ToString());
				attributes.Add(AnalyticsAttributeName.gamecredit_balance, _currentUser.gameCredits.ToString());
				attributes.Add(AnalyticsAttributeName.token_balance, _rewardPointsBalance.ToString());
				if(_currentUser.wasPlayerAutoLoggedIn)
					attributes.Add(AnalyticsAttributeName.login_type, LoginType.AutoLogin.ToString());
				else
					attributes.Add(AnalyticsAttributeName.login_type, LoginType.NormalLogin.ToString());
			}
			if (!String.IsNullOrEmpty(_currentUser.username))
				attributes.Add(AnalyticsAttributeName.user_name, _currentUser.username);
			string clientID = UserSaveRestore.Global.ClientID;
			if (!String.IsNullOrEmpty(clientID))
				attributes.Add(AnalyticsAttributeName.client_id,clientID);
			
			// TODO: Add modal_content
		}

		private void OnCashBalanceUpdate(IEvent e)
		{
			//var evt = (CashBalanceUpdateEvent)e;
		}

		private void OnRewardPointsBalanceUpdate(IEvent e)
		{
			var evt = (RewardPointsBalanceUpdateEvent)e;
			_rewardPointsBalance = evt.rewardPointsBalance;
		}

		private void OnScreenChangeEvent(IEvent e)
		{
			ScreenType type = ((ScreenChangeEvent)e).type;
			_backgroundScreen = BACKGROUND_SCREEN_LOOK_UP_TABLE.ContainsKey(type) ? BACKGROUND_SCREEN_LOOK_UP_TABLE[type] : string.Empty;
		}

		private string GetTopPopupModalName()
		{
			if (_popups.Count == 0)
				return string.Empty;
			PopupType type = _popups[_popups.Count - 1];
			return MODAL_NAME_LOOK_UP_TABLE.ContainsKey(type) ? MODAL_NAME_LOOK_UP_TABLE[type] : string.Empty;
		}

		/// <summary>
		/// On the popup event.
		/// </summary>
		/// <param name="e">E.</param>
		private void OnPopupEvent(IEvent e)
		{
			PopupType popupType = ((PopupEvent)e).type;

			_popups.Add(popupType);

			GsnDebug.Log("Popup event triggered", popupType);

			switch (popupType)
			{
				case PopupType.Registration:
					OnRegistrationClick();
					break;
				case PopupType.Login:
					OnLoginClick();
					break; 
				default:
					break;
			}
		}

		private void OnPopupCloseEvent(IEvent e)
		{
			PopupType type = ((PopupCloseEvent)e).type;
			if (!_popups.Remove(type))
				GsnDebug.LogWarning("Attempted to remove a popup that wasn't in the list:", type);
		}
		private void OnLoginClick()
		{
			AnalyticsAttributes attributes = SetFunnelAttributes(Category.UserExperience, Subcategory.ExistingUserFunnel, ExistingUserFunnelEvent.loginClick);
			Send(attributes);
		}
		private void OnRegistrationClick()
		{
			AnalyticsAttributes attributes = SetFunnelAttributes(Category.UserExperience, Subcategory.NewUserFunnel, NewUserFunnelEvent.registerClick);
			Send(attributes);
		}
		private void SendAppInstallEvent()
		{
			AnalyticsAttributes attributes = SetMainAttributes(Category.UserFunnels, Subcategory.Install, EventName.appInstall);
			Send(attributes);
			// Send an additional event in the All User Funnel
			attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.AllUserFunnel, AllUserFunnelEvent.install);
			Send(attributes);
		}
		/// <summary>
		/// This event should fire when communication is happening between the app and a vendor such as Kochava with 
		/// regards to attributing the install.
		/// </summary>
		/// 
		// Attribution callback:
		// For iOS, you must use the sample method below to receive a callback (simply copy and paste it into your app where you'd like to use it, but do not change the name).
		// For Android, copy the sample method below or create one with the same signature. Within Kochava.cs un-comment the following line and pass it as such: Tracker.Android.SetAttributionHandler(KochavaAttributionListener);
		void KochavaAttributionListener(string msg)
		{
		    // do something with the attribution data:
#if (UNITY_IPHONE || UNITY_ANDROID)
			AnalyticsAttributes attributes = SetMainAttributes(Category.UserFunnels, Subcategory.Install, EventName.appInstallAttribution);
			Send(attributes);
#endif
		}
		private void OnMakeDepositSuccessEvent(IEvent e)
        {
            MakeDepositSuccessEvent evt = (MakeDepositSuccessEvent)e;

            // Forward to Kochava.
#if (UNITY_IPHONE || UNITY_ANDROID)
            KochavaEvent ev = new KochavaEvent(KochavaEventType.Purchase);
            ev.userId = evt.userId.ToString();
            ev.price = evt.amount;
            Tracker.SendEvent(ev);
#endif

			// Send to Fabric
			AnalyticsAttributes attributes = SetMainAttributes(Category.Transactions, Subcategory.ResourceAdjustment, EventName.cashDeposit);
			attributes.Add(AnalyticsAttributeName.amount, evt.amount.ToString());
			Send(attributes);

        }
		private void OnWithdrawSuccess(IWebRequest request)
		{
			AnalyticsAttributes attributes = SetMainAttributes(Category.Transactions, Subcategory.ResourceAdjustment, EventName.cashWithdrawal);
			attributes.Add(AnalyticsAttributeName.amount, RequestManager.Instance.withdraw.amount.ToString());
			Send(attributes);
		}
		private void SendAppLaunchedEvent()
		{
			AnalyticsAttributes attributes = SetMainAttributes(Category.UserFunnels, Subcategory.AppLoad, EventName.appLaunch);
			attributes.Add(AnalyticsAttributeName.total_number_of_app_launches, UserSaveRestore.Device.NumberOfLaunches.ToString());
			Send(attributes);
			// Send an additional event for AllUserFunnel 
			attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.AllUserFunnel, AllUserFunnelEvent.loadStart);
			Send(attributes);
		}
		private void OnRegistrationSubmit (IWebRequest request)
		{
			// Send the extra event for the new user funnel.
			AnalyticsAttributes attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.NewUserFunnel, NewUserFunnelEvent.registrationSubmit);
			Send(attributes);
		}
		private void OnRegisterUserSuccess(IEvent evt)
		{
			AnalyticsAttributes attributes = SetMainAttributes(Category.UserFunnels, Subcategory.Install, EventName.accountRegister);
			Send(attributes);

			// Send the extra event for the new user funnel.
			attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.NewUserFunnel, NewUserFunnelEvent.registrationSuccessful);
			Send(attributes);

			SendSessionStart(); // Also send session start after successful registration.
		}
		private void OnLoginSuccess(IEvent evt)
		{
			LoginSuccessEvent loginEvent = (LoginSuccessEvent)evt;
			// Send the main login event in the appload sub category
			AnalyticsAttributes attributes = SetMainAttributes(Category.UserFunnels, Subcategory.AppLoad, EventName.accountLogin);
			Send(attributes);

			// Send the event in the Existing User funnel
			attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.ExistingUserFunnel, ExistingUserFunnelEvent.loginComplete);
			Send(attributes);

			SendSessionStart(); // Also send session start after successful login.
		}
		/// <summary>
		/// From Google Spreadsheet:  
		/// Session should start when user logs in - if your credentials are saved and you're auto logged in this would be the start. 
		/// Should there be a session.  Session end after 20 min inactivity 
		/// </summary>
		private void SendSessionStart()
		{
			AnalyticsAttributes attributes = SetMainAttributes(Category.UserFunnels, Subcategory.AppLoad, EventName.sessionStart);
			Send(attributes);
		}

		private void OnLogout(IEvent evt)
		{
			AnalyticsAttributes attributes = SetMainAttributes(Category.UserFunnels, Subcategory.AppLoad, EventName.accountLogout);
			Send(attributes);
		}

		private void OnApplicationPause(bool pauseStatus)
		{
			AnalyticsAttributes attributes;
			if (pauseStatus)
				attributes = SetMainAttributes(Category.UserFunnels, Subcategory.AppLoad, EventName.appPause);
			else
				attributes = SetMainAttributes(Category.UserFunnels, Subcategory.AppLoad, EventName.appResume);
			Send(attributes);
		}
		// Send the normal game start event as well as funnel data events.
		private void OnWebGameStart(IEvent evt)
		{
			AnalyticsAttributes attributes;
			if (_currentUser.showP1Experience)
			{
				attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.NewUserFunnel, NewUserFunnelEvent.p1GameStart);
				Send(attributes);

			}
			else
			{
				attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.ExistingUserFunnel, ExistingUserFunnelEvent.gameStart);
				Send(attributes);
			}
			attributes = SetMainAttributes(Category.Gameplay, Subcategory.GameStart, EventName.gameStart);
			Send(attributes);
		}
		// Send the normal game end event as well as the funnel game events
		private void OnWebGameEnd(IEvent evt)
		{
			AnalyticsAttributes attributes;
			if (_currentUser.showP1Experience)
			{
				attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.NewUserFunnel, NewUserFunnelEvent.p1GameComplete);
				Send(attributes);
			}
			else
			{
				attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.ExistingUserFunnel, ExistingUserFunnelEvent.gameComplete);
				Send(attributes);
			}
			attributes = SetMainAttributes(Category.Gameplay, Subcategory.GameEnd, EventName.gameEnd);
			Send(attributes);
		}
		 
		// This will handle sending the p1 game start event OR the tournament select event based off the user's p1 flag.
		private void OnTournamentSignupSuccessEvent(IEvent evt)
		{
			AnalyticsAttributes attributes;
			TournamentSignupSuccessEvent tournEvent = (TournamentSignupSuccessEvent)evt;
			if (_currentUser.showP1Experience)
				attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.NewUserFunnel, NewUserFunnelEvent.p1GameSignup);
			else 
				attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.ExistingUserFunnel, ExistingUserFunnelEvent.tournamentSelect);
			attributes.Add(AnalyticsAttributeName.flavor_id, tournEvent.flavorID);
			attributes.Add(AnalyticsAttributeName.tourn_id, tournEvent.tournamentID);
			Send(attributes);

		}
		private void OnP1GameSelectedEvent(IEvent evt)
		{
			AnalyticsAttributes attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.NewUserFunnel, NewUserFunnelEvent.p1GameSelect);
			attributes.Add(AnalyticsAttributeName.gametype_id, ((P1GameSelectedEvent)evt).gametypeID.ToString());
			Send(attributes);
		}
		private void OnSceneLoadComplete(IEvent evt)
		{
			switch (((SceneLoadCompleteEvent)evt).sceneLoadType)
			{
				// Fire off any special case events necessary
				case SceneLoadType.StartupLoad:
					OnAtGameSelectScreen();
					break;
				default:
					break;
			}
			OnLoadScreenComplete(((SceneLoadCompleteEvent)evt).sceneLoadType);
		}
		private void OnSceneLoadBegin(IEvent evt)
		{
			switch (((SceneLoadBeginEvent)evt).sceneLoadType)
			{
				// Fire off any special case events necessary
				case SceneLoadType.StartupLoad:
					OnStartupLoadBegin();
					break;
				default:
					break;
			}
			OnLoadScreenStart(((SceneLoadBeginEvent)evt).sceneLoadType);

		}
		private void OnLoadScreenStart(SceneLoadType screen)
		{
			AnalyticsAttributes attributes = SetMainAttributes(Category.UserFunnels, Subcategory.Performance, EventName.techTiming);
			attributes.Add(AnalyticsAttributeName.loading_screen_start, screen.ToString());
			Send(attributes);
		}
		private void OnLoadScreenComplete(SceneLoadType screen)
		{
			AnalyticsAttributes attributes = SetMainAttributes(Category.UserFunnels, Subcategory.Performance, EventName.techTiming);
			attributes.Add(AnalyticsAttributeName.loading_screen_complete, screen.ToString());
			Send(attributes);
		}
		private void OnStartupLoadBegin()
		{
			AnalyticsAttributes attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.AllUserFunnel, AllUserFunnelEvent.loadStart);
			Send(attributes);
		}
		private void OnAtGameSelectScreen()
		{
			AnalyticsAttributes attributes;
			// If it is a p1 player, fire the welcomeClosed event.  (We will fire the load complete separately for p1 users)
			if (_currentUser.showP1Experience)
				attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.NewUserFunnel, NewUserFunnelEvent.welcomeClosed);
			// If the user wasn't logged in automatically, fire the bi the welcomeClosed event.  (We will have fired load complete separately in this case.
			else if (!_currentUser.wasPlayerAutoLoggedIn)
				attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.ExistingUserFunnel, ExistingUserFunnelEvent.welcomeClosed);
			// If the user did a autologin, wait until autologin succeeds before firing load complete.  They never saw the welcome screen so don't fire the event.
			else
				attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.AllUserFunnel, AllUserFunnelEvent.loadComplete);

			Send(attributes);
		}
		private void OnShowWelcomeScreenEvent(IEvent evt)
		{
			AnalyticsAttributes attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.AllUserFunnel, AllUserFunnelEvent.loadComplete);
			Send(attributes);
		}
		private void OnFetchScreenBeginEvent(IEvent evt)
		{
			switch (((FetchScreenBeginEvent)evt).type)
			{
				case ScreenType.TournamentSelect:
					OnGameSelected();
					break;
			}
		}
		// Only fire this event if we are an existing user.
		private void OnGameSelected()
		{
			if (_currentUser.showP1Experience)
				return;
			AnalyticsAttributes attributes = SetFunnelAttributes(Category.UserFunnels, Subcategory.ExistingUserFunnel, ExistingUserFunnelEvent.gameSelect);
			attributes.Add(AnalyticsAttributeName.gametype_id, _gameList.currentGameID.ToString());
			Send(attributes);
		}
		private void OnLogErrorEvent(IEvent evt)
		{
#if !UNITY_EDITOR
			AnalyticsAttributes attributes = SetMainAttributes(Category.UserExperience, Subcategory.AppPerformance, EventName.logError);
			attributes.Add(AnalyticsAttributeName.error, ((LogErrorEvent)evt).error);
			Send(attributes);
#endif
		}
		private void OnUserFacingError(IEvent evt)
		{
			AnalyticsAttributes attributes = SetMainAttributes(Category.UserExperience, Subcategory.AppPerformance, EventName.error);
			attributes.Add(AnalyticsAttributeName.error, ((WebRequestErrorEvent)evt).error.message[0]);
			Send(attributes);
		}
	}
}
