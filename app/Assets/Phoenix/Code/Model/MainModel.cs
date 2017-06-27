using System.Collections.Generic;

using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.WebObject;
using GSN.Skill.Requests;
using GSN.Skill.Phoenix.Model.LoadFlows;
using GSN.Skill.Phoenix.Model.Popups;
using GSN.Skill.Phoenix.Strings;
using GSN.Skill.Phoenix.Utils;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Requests.Logging;
using GSN.Skill.Requests.Config;

namespace GSN.Skill.Phoenix.Model
{
	public class MainModel
	{
		// data
		private CurrentUser _currentUser;
		private GameListData _gameList;
		private DeviceData _deviceData;
		private StoredConfigData _storedConfigData;

		// managers
		private SceneManager _sceneManager; // NOTE: Try not to pass sceneManager around. Make main model completely responsible for managing scenes
		private ScreenManager _screenManager; // NOTE: Try not to pass screenManager around. Make main model completely responsible for managing screens
		private LoginFlowManager _loginFlowManager;
		private TournamentSignupManager _tournamentSignupManager;
		private DepositManager _depositManager;
		private PlayerProfileManager _playerProfileManager;
		private LocationManager _locationManager;
		private ResetPasswordManager _resetPasswordManager;
		private RewardManager _rewardManager;
		// reference to the object that handle web games.
		private WebGameObjectWrapper _webGame;

		public MainModel(SceneManager sceneManager)
		{
			// add an additional logger handler for error logs
			// HACK: Removing to unblock QA, there's an error when logging this when
			// connecting to the dev env, which causes an explosion of errors crashing the client.
			//GsnDebug.AddLogError(OnErrorLog);

			RequestManager.Instance.Init();
			_sceneManager = sceneManager;

			_currentUser = new CurrentUser();
			_storedConfigData = new StoredConfigData();
			_gameList = new GameListData(_storedConfigData);
			AnalyticsManager.Instance.Init(_currentUser, _gameList);

			_deviceData = new DeviceData();
			_webGame = new WebGameObjectWrapper();

			ErrorManager.Instance.Init(_currentUser);

			GameManager.Instance.Init(this, _sceneManager, _currentUser, _webGame);

			_locationManager = new LocationManager();
			_screenManager = new ScreenManager(_gameList);
			_loginFlowManager = new LoginFlowManager(_screenManager, _currentUser);
			_tournamentSignupManager = new TournamentSignupManager(_screenManager, _locationManager, _currentUser, _deviceData, _gameList, _storedConfigData);
			_depositManager = new DepositManager(_locationManager, _currentUser);
			_playerProfileManager = new PlayerProfileManager(_currentUser, _storedConfigData);
			_resetPasswordManager = new ResetPasswordManager();
			_rewardManager = new RewardManager(_currentUser, _depositManager);

			var sceneLoads = new Dictionary<SceneLoadType, ISceneLoad>();
			sceneLoads.Add(SceneLoadType.StartupLoad, new StartupLoad(_sceneManager, loginFlowManager));
			sceneLoads.Add(SceneLoadType.PhoenixLoad, new PhoenixLoad(_sceneManager));
			sceneLoads.Add(SceneLoadType.GameLoad, new GameLoad(_sceneManager, _webGame)); 
			_sceneManager.Init(sceneLoads);
		}

		public void Init()
		{
			AddListeners();

			_sceneManager.LoadScene(SceneLoadType.StartupLoad);
		}

		#region Public Functions (exposed for Controller)
		public RewardManager rewardManager
		{
			get { return _rewardManager; }
		}
		public LoginFlowManager loginFlowManager
		{
			get { return _loginFlowManager; }
		}

		public TournamentSignupManager tournamentSignupManager
		{
			get { return _tournamentSignupManager; }
		}

		public DepositManager depositManager
		{
			get { return _depositManager; }
		}
		public PlayerProfileManager playerProfileManager
		{
			get { return _playerProfileManager; }
		}
		public ResetPasswordManager resetPasswordManager
		{
			get { return _resetPasswordManager; }
		}
		public void HandleErrorCallback()
		{
			ErrorManager.Instance.HandleErrorCallback();
		}

		public void LoadComplete()
		{
			_sceneManager.FinishLoadScene();
		}

		public void RemovePopup(long uid)
		{
			PopupManager.Instance.RemovePopup(uid);
		}

		public void SetScreen(ScreenType screen)
		{
			_screenManager.CurrentScreen = screen;
		}

		public void SetGameID(int gameID)
		{
			_gameList.SetCurrentGame(gameID);

			if (_currentUser.showP1Experience)
			{
				tournamentSignupManager.SignupForP1(gameID);
			}
			else
			{
				_screenManager.CurrentScreen = ScreenType.TournamentSelect;
			}
		}

		public void ShowTournamentResult(int tournamentID)
		{
			PopupManager.Instance.SetPopup(new TournamentResultPopupModel(_gameList, _currentUser, tournamentID));
		}

		public void ShowAdditionalCompletedGameHistoryData()
		{
			_screenManager.gameHistoryScreen.ShowAdditionalCompletedGameHistoryData();
		}
		public void RefreshGameHistory()
		{
			_screenManager.gameHistoryScreen.RefreshGameHistory();
		}
		public void ShowTournamentDetails(int flavorID)
		{
			_screenManager.tournamentSelectScreen.ShowTournamentDetails(flavorID);
		}

		public void VerifyPassword(string password)
		{
			ErrorManager.Instance.HandleVerifyPassword(password);
		}

		public void ValidateInputField(InputFieldType field, string text, bool allowEmpty)
		{
			FieldValidationUtilities.Instance.ValidateField(field, text, allowEmpty);
		}

		public void ShowTermsAndConditions()
		{
			WebViewManager.Instance.OpenNativeURL(_storedConfigData.TermsOfConditionsLink);
		}

		public void ShowPrivacyPolicy()
		{
			WebViewManager.Instance.OpenNativeURL(_storedConfigData.PrivacyPolicyLink);
		}

		public void ShowTermsOfService()
		{
			WebViewManager.Instance.OpenNativeURL(_storedConfigData.TermsOfServiceLink);
		}

		#endregion

		#region Private Functions

		private void OnLogout(IEvent e)
		{
			ResetPhoenixSceneData();
			_screenManager.CurrentScreen = ScreenType.Welcome;
			_currentUser.Reset();
			TournamentResultDataCache.Reset();
			EventDispatcher.DispatchEvent(new ResetAppEvent());
		}

		private void ResetPhoenixSceneData()
		{
			_screenManager.Reset();
			PopupManager.Instance.Reset();
		}

		private void AddListeners()
		{
			EventDispatcher.AddListener<SceneChangeEvent>(OnSceneChange);
			EventDispatcher.AddListener<SceneLoadCompleteEvent>(OnSceneLoadComplete);
			EventDispatcher.AddListener<LogoutSuccessfulEvent>(OnLogout);
			EventDispatcher.AddListener<VersionCheckEvent>(OnVersionCheckComplete);

		}

		/// <summary>
		/// TODO: Figure out where to remove listeners
		/// </summary>
		private void RemoveListeners()
		{
			EventDispatcher.RemoveListener<SceneLoadCompleteEvent>(OnSceneLoadComplete);
		}

		private void OnSceneChange(IEvent e)
		{
			// we're changing scenes!
			PhoenixScene scene = ((SceneChangeEvent)e).scene;

			switch (scene)
			{
				case PhoenixScene.Load:
					// we're transitioning somewhere. reset the phoenix scene data.
					ResetPhoenixSceneData();
					break;
			}
		}

		private void OnSceneLoadComplete(IEvent e)
		{
			switch (((SceneLoadCompleteEvent)e).sceneLoadType)
			{
				case SceneLoadType.StartupLoad:
					HandleStartupLoadComplete();
					break;
				case SceneLoadType.GameLoad:
					HandleGameLoadComplete();
					break;
				case SceneLoadType.PhoenixLoad:
					HandlePhoenixLoadComplete();
					break;
			}
		}

		/// <summary>
		/// Handle Post Login. NOTE: Both login AND autologin go through this flow
		/// </summary>
		private void HandleStartupLoadComplete()
		{
			// handle requests that need to be done BEFORE going into the home screen

			WebRequests requests = new WebRequests();
			requests.OnRequestsBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			requests.OnRequestsCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			requests.OnRequestsFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			// call home screen once we're done starting up
			requests.OnRequestsCompleteHandler += OnPostLoginRequestsComplete;

			requests.Enqueue(RequestManager.Instance.listGameTypes);

			WebRequester.Instance.BatchFetchRequests(requests);
		}

		private void OnPostLoginRequestsComplete(WebRequests requests)
		{
			requests.OnRequestsCompleteHandler -= OnPostLoginRequestsComplete;

			// We want to register a device after login
			// We don't need to block going to the home screen while we are posting device data.
			// Request Manager handles the onComplete handling of registerDevice.
			// Only do this if we can't get the clientID from the cache.
			if (string.IsNullOrEmpty(UserSaveRestore.Global.ClientID))
			{
				WebRequester.Instance.FetchRequest(RequestManager.Instance.registerDevice);
			}
			else
			{
				// If we get clientID out of the cache, fire an event with the client id in it.  Device data is listening.
				EventDispatcher.DispatchEvent(new ClientIDSetEvent(UserSaveRestore.Global.ClientID));
			}
			InitializeMainScreen(ScreenType.Home);
		}

		private void HandleGameLoadComplete()
		{
			// NOTE: Don't need anything for now
		}

		private void HandlePhoenixLoadComplete()
		{
			// figure out what the returning screen type is based on the success or failure of the web game (decided by the manager)
			ScreenType returningScreenType = GameManager.Instance.ReturningScreenType;

			// we need to resolve the main screen items before handling post web game stuff
			InitializeMainScreen(returningScreenType);

			// resolve the completed game
			GameManager.Instance.HandleCompletedGame();
		}

		private void InitializeMainScreen(ScreenType screen)
		{
			_gameList.NotifySelectedGame(); // notify about selected game, which needs to be globally known
			_currentUser.NotifyUserInfo();

			_screenManager.CurrentScreen = screen;
			_screenManager.HandleMainScreenPhoenixLoad();
		}

		#endregion


		#region Error Logging

		private const string LOG_ERROR_TEMPLATE = "Phoenix Client <User ID: {0}: {1}";

		private void OnErrorLog(string log)
		{
			if (!APIReference.Instance.HasData)
				return; // we haven't completed api discovery endpoint yet, which means we can't send logs
			
			if (!WebRequester.Instance.HasConnection)
				return; // if we don't have a stable connection then don't attempt to log

			var logging = new LogRequestData();

			// make http request method to notify that an error log has been made
			logging.SetLogLevel(LogRequestData.LogLevel.error);
			logging.Log = string.Format(LOG_ERROR_TEMPLATE, _currentUser.userID.ToString(), log);

			logging.OnCompleteHandler += OnLogComplete;
			logging.OnFailHandler += OnLogFail;
			EventDispatcher.DispatchEvent(new LogErrorEvent(logging.Log));
			WebRequester.Instance.FetchRequest(logging);
		}

		private void OnLogComplete(IWebRequest request)
		{
			// we've successfully sent the log (do we need to log this?)
			request.OnCompleteHandler -= OnLogComplete;
			request.OnFailHandler -= OnLogFail;

			GsnDebug.Log("Logging Error successfully:", ((LogRequestData)request).Log);
		}

		private void OnLogFail(IWebRequest request)
		{
			// we've failed to send the error log (do we need to log this?)
			request.OnCompleteHandler -= OnLogComplete;
			request.OnFailHandler -= OnLogFail;

			GsnDebug.Log("Logging Error failed:", ((LogRequestData)request).Log);
		}

		#endregion

		/// <summary>
		/// We listen for this event to display the force update message to a user.
		/// </summary>
		private void OnVersionCheckComplete(IEvent evt)
		{
			VersionCheckEvent versionCheckEvent = (VersionCheckEvent)evt;
			if(versionCheckEvent.updateRequired)
			{

				ErrorManager.Instance.HandleUserError(ErrorType.ClientVersionOutOfDate, 
					StringTable.Instance.GetEntry(CategoryCommon.ClientVersionOutOfDate),
					()=>
					{
						WebViewManager.Instance.OpenNativeURL(versionCheckEvent.url);
					}
				);
			}
		}
	}
}
