using System;
using GSN.Skill.Events;
using GSN.Skill.Requests;
using GSN.Skill.Phoenix.Requests.Tournament;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Model.Data;
using System.Collections.Generic;
using GSN.Skill.Phoenix.Model.Popups;
using GSN.Skill.Phoenix.Strings;
using UnityEngine;

namespace GSN.Skill.Phoenix.Model
{
	public class TournamentSignupManager
	{
		private ScreenManager _screenManager;
		private LocationManager _locationManager;
		private TournamentSignupRequestData _tournamentSignupRequestData;
		private CurrentUser _currentUser;
		private DeviceData _deviceData;
		private GameListData _gameListData;
		private ListFlavorsRequestData _listFlavor;
		private StoredConfigData _storedConfigData;
		private int _gameID;

		private const string WW_ERROR_INVALID_CSRF_TOKEN = "Tournament_CSRFTokenInvalid";

		private const string SESSION_STORAGE_KEY_USER_ID = "user_id";
		private const string SESSION_STORAGE_KEY_TOURN_ID = "tourn_id";
		private const string SESSION_STORAGE_KEY_TOURN_SESSION_ID = "session_id";
		private const string SESSION_STORAGE_KEY_UNPLAYED_GAME_ID = "unplayed_game_id";
		private const string SESSION_STORAGE_KEY_GAMESERVER = "gameServer";

		// Things for supporting Win It Now
		private WinItNowRequestData _winItNowRequestData;

		public TournamentSignupManager(ScreenManager screenManager, LocationManager locationManager, CurrentUser currentUser, DeviceData deviceData, GameListData gameListData, StoredConfigData storedConfigData)
		{
			_screenManager = screenManager;
			_locationManager = locationManager;
			_tournamentSignupRequestData = RequestManager.Instance.tournSignup;
			_tournamentSignupRequestData.SetCurrentUser(currentUser);

			_winItNowRequestData = RequestManager.Instance.winItNow;
			_listFlavor = RequestManager.Instance.listFlavor;

			_currentUser = currentUser;
			_storedConfigData = storedConfigData;
			_deviceData = deviceData;
			_gameListData = gameListData;
		}

		#region Public Functions

		/// <summary>
		/// Signups for p1.  This requires us to first get a game list, and then see if a p1 flavor id exists in the results.
		/// </summary>
		/// <param name="gameID">Game I.</param>
		public void SignupForP1(int gameID)
		{
			// listen to when the p1 game completes
			EventDispatcher.AddListener<WebGameEndedEvent>(OnP1WebGameEnded);
			//TODO:  Add the WebGameEndedEvent for Native games

			_listFlavor.gameTypeID = gameID;
			_listFlavor.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			_listFlavor.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			_listFlavor.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			_listFlavor.OnCompleteHandler += OnTournListRequestSuccess;
			_listFlavor.OnFailHandler += OnTournListRequestFail;
			EventDispatcher.DispatchEvent(new P1GameSelectedEvent(gameID));
			WebRequester.Instance.FetchRequest(_listFlavor);
		}

		public void TournamentSignup(int flavorID, int flavorTypeID, int gameID, decimal fee, decimal purseAmount)
		{
			if (purseAmount == 0)
			{
				InternalTournamentSignup(flavorID, gameID, fee);
			}
			else
			{
				_locationManager.ValidateLocation(() =>
				{
					InternalTournamentSignup(flavorID, gameID, fee);
				}, OnValidateLocationFail, gameID, flavorTypeID);
			}
		}


		public void ReEnterTournament(int flavorID, int flavorTypeID, int tournID, int gameID, decimal fee, decimal purseAmount)
		{
			if (purseAmount == 0)
			{
				InternalReEnterTournament(flavorID, tournID, gameID, fee);
			}
			else
			{
				_locationManager.ValidateLocation(() =>
				{
					InternalReEnterTournament(flavorID, tournID, gameID, fee);
				}, OnValidateLocationFail, gameID, flavorTypeID);
			}
		}
		public void EnterPreviouslyUnplayedTournament(int flavorID, int flavorTypeID, int tournID, int unplayedGameID, int gameID, decimal fee, decimal purseAmount)
		{
			if (purseAmount == 0)
			{
				InternalEnterPreviouslyUnplayedTournament(flavorID, tournID, unplayedGameID, gameID, fee);
			}
			else
			{
				_locationManager.ValidateLocation(() =>
				{
					InternalEnterPreviouslyUnplayedTournament(flavorID, tournID, unplayedGameID, gameID, fee);
				}, OnValidateLocationFail, gameID, flavorTypeID);
			}
		}

		// This function handles both the accept the win it now state (Which should get triggered by the user on a win it now button click.
		// It also handles the silent decline win it now when a user closes the popup.
		public void WinItNow(int tournID, bool accept = true, decimal fee = 0)
		{
			// If accepting win it now, do a balance check and fire up the activity indicators
			if (accept)
			{
				if (!CheckAndHandleLowBalance(fee, CategoryTournament.LowBalanceWinItNow))
				{
					return;
				}
				_winItNowRequestData.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
				_winItNowRequestData.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
				_winItNowRequestData.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			}
			_winItNowRequestData.accept = accept;
			_winItNowRequestData.tournID = tournID;
			_winItNowRequestData.OnCompleteHandler += OnWinItNowSuccess;
			_winItNowRequestData.OnFailHandler += OnWinItNowFail;

			WebRequester.Instance.FetchRequest(_winItNowRequestData);

		}

		#endregion

		// If we are returning from a game, we want to check to see if we are in the p1 experience and force clear it.
		private void OnP1WebGameEnded(IEvent e)
		{
			RequestManager.Instance.completeP1.OnCompleteHandler += OnCompleteP1Success;
			WebRequester.Instance.FetchRequest(RequestManager.Instance.completeP1);
		}
		private void OnCompleteP1Success(IWebRequest request)
		{
			RequestManager.Instance.completeP1.OnCompleteHandler -= OnCompleteP1Success;
			// The user object that comes back as part of this doesn't have updated p1 logic in it, so lets just set this to false when it comes back.
			_currentUser.showP1Experience = false;
			EventDispatcher.RemoveListener<WebGameEndedEvent>(OnP1WebGameEnded);
		}

		private void InternalTournamentSignup(int flavorID, int gameID, decimal fee)
		{
			if (InitTournSignupRequest(_tournamentSignupRequestData, fee))
			{
				_gameID = gameID;
				_tournamentSignupRequestData.SetSignupForTournamentData(flavorID.ToString(), _currentUser.csrfToken, _deviceData.clientID, gameID);
				WebRequester.Instance.FetchRequest(_tournamentSignupRequestData);
			}
		}

		private void InternalReEnterTournament(int flavorID, int tournID, int gameID, decimal fee)
		{
			if (InitTournSignupRequest(_tournamentSignupRequestData, fee))
			{
				_gameID = gameID;
				_tournamentSignupRequestData.SetReEnterTournamentData(flavorID.ToString(), _currentUser.csrfToken, tournID.ToString(), _deviceData.clientID, gameID);
				WebRequester.Instance.FetchRequest(_tournamentSignupRequestData);
			}
		}

		private void InternalEnterPreviouslyUnplayedTournament(int flavorID, int tournID, int unplayedGameID, int gameID, decimal fee)
		{
			if (InitTournSignupRequest(_tournamentSignupRequestData, fee))
			{
				_gameID = gameID;
				_tournamentSignupRequestData.SetSignupForUnplayedTournamentData(flavorID.ToString(), _currentUser.csrfToken, tournID.ToString(), unplayedGameID.ToString(), _deviceData.clientID, gameID);
				WebRequester.Instance.FetchRequest(_tournamentSignupRequestData);
			}
		}

		private void OnValidateLocationFail(LocationFailReason reason)
		{
			GsnDebug.LogError("Cannot validate location due to reason:", reason);

			switch (reason)
			{
				case LocationFailReason.UnauthorizedTournamentFlavor:
					ErrorManager.Instance.HandleUserError(ErrorType.Gps, StringTable.Instance.GetEntry(CategoryTournament.ErrorUnauthorizedTournamentFlavor));
					break;
				case LocationFailReason.UnauthorizedGame:
					ErrorManager.Instance.HandleUserError(ErrorType.Gps, StringTable.Instance.GetEntry(CategoryTournament.ErrorUnauthorizedGameCategory));
					break;
				case LocationFailReason.StateFullyIllegal:
					ErrorManager.Instance.HandleUserError(ErrorType.Gps, StringTable.Instance.GetEntry(CategoryTournament.ErrorFullyIllegalState));
					break;
			}
		}

		private bool InitTournSignupRequest(IWebRequest request, decimal fee)
		{
            GsnDebug.Log("[TournamentSignupManager] InitTournSignupRequest...");
			if (CheckAndHandleLowBalance(fee, CategoryTournament.LowBalanceSignup))
			{
				AddListeners(request);
				return true;
			}
			return false;
		}

		private void AddListeners(IWebRequest request)
		{
			request.OnCompleteHandler += OnTournamentSignupSuccess;
			request.OnFailHandler += OnTournamentSignupFail;
			request.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			request.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			request.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
		}
		// Do a client side check to see if the player has enough cash to get this started.
		// If they don't, popup a message.
		// TODO:  Make this init the deposit flow on user request?
		private bool CheckAndHandleLowBalance(decimal fee, CategoryTournament ErrorKey)
		{
			decimal balance = _currentUser.cashBalance + _currentUser.gameCredits;
			if (balance >= fee)
				return true;
			else
			{
				string errorMessage = StringTable.Instance.GetEntry(ErrorKey, "$" + (Math.Abs(fee - balance)).ToString());

				ErrorManager.Instance.HandleUserError(ErrorType.ClientBalanceCheck, errorMessage);
				return false;
			}
		}

		private void OnTournListRequestSuccess(IWebRequest request)
		{
			_listFlavor.OnCompleteHandler -= OnTournListRequestSuccess;
			_listFlavor.OnFailHandler -= OnTournListRequestFail;
			_listFlavor.OnBeginHandler -= GlobalFetchEventNotifier.OnBeginFetch;
			_listFlavor.OnCompleteHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			_listFlavor.OnFailHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			ListFlavorsData data = _listFlavor.Response;
			// If we dont have a p1 flavor id, something is wrong.  Attempt to course correct by sending the P1ExperienceStateChangeEvent.
			if (string.IsNullOrEmpty(data.result.p1_flavor_id))
			{
				GsnDebug.LogWarning("Trying to show p1 experience, but the user has already completed it");
				EventDispatcher.DispatchEvent(new P1ExperienceStateChangeEvent(false));
			}
			else
			{
				// we're signing up for a P1 tournament
				TournamentSignup(Convert.ToInt32(data.result.p1_flavor_id), 0,_listFlavor.gameTypeID, 0, 0);
			}
		}
		private void OnTournListRequestFail(IWebRequest request)
		{
			_listFlavor.OnCompleteHandler -= OnTournListRequestSuccess;
			_listFlavor.OnFailHandler -= OnTournListRequestFail;
			_listFlavor.OnBeginHandler -= GlobalFetchEventNotifier.OnBeginFetch;
			_listFlavor.OnCompleteHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			_listFlavor.OnFailHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			ErrorManager.Instance.HandleWebRequestError(ErrorType.RestTournament, request);

		}
		private void OnTournamentSignupSuccess(IWebRequest request)
		{
			_gameListData.SetCurrentGame(_gameID);

			GsnDebug.Log("Model Tourn Signup Complete");
			_tournamentSignupRequestData.OnCompleteHandler -= OnTournamentSignupSuccess;
			_tournamentSignupRequestData.OnFailHandler -= OnTournamentSignupFail;
			_tournamentSignupRequestData.OnBeginHandler -= GlobalFetchEventNotifier.OnBeginFetch;
			_tournamentSignupRequestData.OnCompleteHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			_tournamentSignupRequestData.OnFailHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			var gameData = _tournamentSignupRequestData.Response.result.game_data;

			TournamentSignupSuccessEvent tournSignupSuccessEvent = new TournamentSignupSuccessEvent();
			
			// Check to see if we can actually play this game from this platform.
			GameData? gd = _gameListData.GetGameData(_gameID);
			if (!gd.HasValue)
			{
				GsnDebug.LogError("Can't play game on this platform.  GameID:", _gameID);
				//TODO: Error popup
				return;
			}
			
			// This will hold the data we need to set session storage for web games.
			// for native games, we'll leave this empty.
			Dictionary<string, string> sessionStorageVars = new Dictionary<string, string>();

			// this will be the URL to a web game, or a Unity scene name for a native game.
			string gameSite = gd.Value.gameSite;

			if (!gd.Value.isNativeGame)
			{
				gameSite += "?tourn_id=" + gameData.tourn_id;
				
				// Build up the things we need to dump in session storage.
				sessionStorageVars.Add(SESSION_STORAGE_KEY_GAMESERVER, gameData.gameServer);
				sessionStorageVars.Add(SESSION_STORAGE_KEY_TOURN_SESSION_ID, gameData.tourn_session_id);
				sessionStorageVars.Add(SESSION_STORAGE_KEY_TOURN_ID, gameData.tourn_id);
				sessionStorageVars.Add(SESSION_STORAGE_KEY_USER_ID, _currentUser.userID.ToString());
				if (string.IsNullOrEmpty(gameData.unplayed_game_id))
				{
					sessionStorageVars.Add(SESSION_STORAGE_KEY_UNPLAYED_GAME_ID, gameData.unplayed_game_id);
				}
			}

			tournSignupSuccessEvent.isNativeGame = gd.Value.isNativeGame;
			tournSignupSuccessEvent.gameSite = gameSite;
			tournSignupSuccessEvent.flavorID = _tournamentSignupRequestData.flavorID;
			tournSignupSuccessEvent.tournamentID = gameData.tourn_id;
			tournSignupSuccessEvent.tournamentSessionID = gameData.tourn_session_id;
			tournSignupSuccessEvent.clientID = _deviceData.clientID;
			tournSignupSuccessEvent.gameID = _tournamentSignupRequestData.gameID.ToString();
			tournSignupSuccessEvent.joinRecord = gameData.join_record;
			tournSignupSuccessEvent.sessionStorageVariables = sessionStorageVars;

			EventDispatcher.DispatchEvent(tournSignupSuccessEvent);
		}
		/// <summary>
		/// OnTournamentSignupFail If we've failed to signup for a tournament, there could be a bunch of reasons.  
		/// One special case reason we need to deal with is that the user isn't fully authenticated.  This failure handler
		/// checks that special case, and handles showing a verify password popup if we get into that condition.
		/// </summary>
		/// <param name="request">Request.</param>
		private void OnTournamentSignupFail(IWebRequest request)
		{
			GsnDebug.Log("Model Tourn Signup Fail");
			_tournamentSignupRequestData.OnCompleteHandler -= OnTournamentSignupSuccess;
			_tournamentSignupRequestData.OnFailHandler -= OnTournamentSignupFail;
			_tournamentSignupRequestData.OnBeginHandler -= GlobalFetchEventNotifier.OnBeginFetch;
			_tournamentSignupRequestData.OnCompleteHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			_tournamentSignupRequestData.OnFailHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			ErrorTranslation? errorTranslation = ErrorManager.Instance.GetErrorTranslation(request);

			if (errorTranslation.HasValue)
			{
                GsnDebug.Log("[TournamentError] type: " + errorTranslation.Value.entryKey.GetType() +
                             ", message: " + errorTranslation.Value.message);

				if (errorTranslation.Value.entryKey.GetType() == typeof(CategoryTournament))
				{
					switch ((CategoryTournament)errorTranslation.Value.entryKey)
					{
						case CategoryTournament.ErrorMaxSignup:
							ErrorManager.Instance.HandleUserError(
								ErrorType.MaxSignup,
								errorTranslation.Value.message,
								() =>
							{
								_screenManager.CurrentScreen = ScreenType.GameHistory;
							}
							);
							break;
						case CategoryTournament.ShowTaxForm:
							ErrorManager.Instance.HandleUserError(
								ErrorType.TaxWithholding,
								errorTranslation.Value.message,
								() =>
								{
									WebViewManager.Instance.OpenNativeURL(_storedConfigData.TaxFormLink);
								}
							);
							break;

						default: 
							ErrorManager.Instance.HandleWebRequestError(ErrorType.RestTournament, request);
							EventDispatcher.DispatchEvent(new TournamentSignupFailEvent());
							break;
					}
				}
			}
			else if (ErrorManager.Instance.ValidateVerifyPassword(request))
			{
				ErrorManager.Instance.ShowVerifyPassword(
					() =>
					{
						AddListeners(_tournamentSignupRequestData);
						WebRequester.Instance.FetchRequest(request);
					}
				);
			}
			else
			{
				ErrorManager.Instance.HandleWebRequestError(ErrorType.RestTournament, request);
				EventDispatcher.DispatchEvent(new TournamentSignupFailEvent());
			}
		}

		private void OnWinItNowSuccess(IWebRequest request)
		{

			_winItNowRequestData.OnCompleteHandler -= OnWinItNowSuccess;
			_winItNowRequestData.OnFailHandler -= OnWinItNowFail;
			if (_winItNowRequestData.accept)
				EventDispatcher.DispatchEvent(new WinItNowAcceptedSuccessEvent());

		}
		private void OnWinItNowFail(IWebRequest request)
		{
			GsnDebug.Log("Model Win it now Fail");
			_winItNowRequestData.OnCompleteHandler -= OnWinItNowSuccess;
			_winItNowRequestData.OnFailHandler -= OnWinItNowFail;
			if (_winItNowRequestData.accept)
				ErrorManager.Instance.HandleWebRequestError(ErrorType.RestTournament, request);
		}
	}
}
