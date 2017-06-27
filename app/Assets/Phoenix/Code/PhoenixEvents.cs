using System;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.WebObject;
using GSN.Skill.Phoenix.Requests.Tournament;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix
{
	public static class PhoenixEvents
	{
		public static void RegisterEvents()
		{
			EventDispatcher.CreateScope(
				EventDispatcher.DEFAULT_SCOPE_ID,
				
				typeof(InitializePoolsEvent),
				typeof(PopupEvent),
				typeof(PopupCloseEvent),
				typeof(GameListEvent),
				typeof(TournamentGameListEvent),
				typeof(VerifyPasswordSuccessEvent),
				typeof(FetchScreenBeginEvent),
				typeof(FetchScreenCompleteEvent),
				typeof(HistoryTileSelectViewEvent),
				typeof(CashBalanceUpdateEvent),
				typeof(RewardPointsBalanceUpdateEvent),
				typeof(TournamentSignupSuccessEvent),
				typeof(TournamentSignupFailEvent),
				typeof(FetchGlobalBeginEvent),
				typeof(FetchGlobalCompleteEvent),
				typeof(FetchPopupBeginEvent),
				typeof(FetchPopupCompleteEvent),
				typeof(SelectedGameUpdateEvent),
				typeof(GetGameHistorySuccessEvent),
				typeof(LoginPopupInitEvent),
				typeof(GetTournResultsFailEvent),
				typeof(GetTournResultsSuccessEvent),
				typeof(GetPaginatedGameHistoryEvent),
				typeof(TournamentDetailsReadyEvent),
				typeof(WinItNowAcceptedSuccessEvent),
				typeof(LogErrorEvent),
				typeof(VersionCheckEvent),

				// P1 Related Events
				typeof(P1ExperienceStateChangeEvent),
				typeof(P1GameSelectedEvent),

				// GPS events
				typeof(GpsErrorEvent),
				typeof(GpsErrorPostAppPauseEvent),
				typeof(GpsLocationSuccessEvent),
				typeof(GpsLocationDepositAllowedEvent),

				// Transitions / progress
				typeof(SceneChangeEvent),
				typeof(UnitySceneProgressEvent),
                typeof(LoadSceneHiddenEvent),
				typeof(ScreenChangeEvent),
				typeof(ResetAppEvent),
				typeof(UnitySceneLoadCompleteEvent),
				typeof(SceneLoadBeginEvent),
				typeof(SceneLoadCompleteEvent),

				// Field Validation
				typeof(HandledInputErrorEvent),
				typeof(InputFieldValidEvent),

				// Account related events
				typeof(LoginSuccessEvent),
				typeof(AutoLoginSuccessEvent),
				typeof(ShowWelcomeScreenEvent),
				typeof(RegisterUserSuccessEvent),
				typeof(LogoutSuccessfulEvent),
				typeof(ClientIDSetEvent),

				// Reset Password Related Events
				typeof(ResetPasswordMultiAccountEvent),
				typeof(ResetPasswordSuccessEvent),
				typeof(ResetPasswordPopupReadyEvent),
				typeof(ResetPasswordErrorEvent),

				// Config Related Events
				typeof(UnsupportedGameListUpdatedEvent),

				// Web related events
				//     WebView (Games)
				typeof(WebGameReadyEvent),
				typeof(WebGameErrorEvent),
				typeof(WebGameEndedEvent),
				typeof(WebPageLoadedEvent),
				typeof(InitWebViewEvent),
				typeof(WebGameDisconnectMessageShowEvent),
				typeof(WebGameDisconnectMessageHideEvent),
				typeof(WebGameStartButtonClickedEvent),

				//     Requests
				typeof(WebRequestErrorEvent),


				// PAYMENT Related Events
				typeof(GetDepositConfigDataFailEvent),
				typeof(GetDepositConfigDataSuccessEvent),
				typeof(GetAllCreditCardsSuccessEvent),
				typeof(AddCreditCardFailEvent),
				typeof(MakeDepositSuccessEvent),
				typeof(WithdrawSuccessEvent),
				typeof(ProfilePopupReadyEvent),
				typeof(MakeDepositBeginEvent),
				typeof(MakeDepositFailEvent),
				typeof(AddCreditCardBeginEvent),

				// Reward related Events
				typeof(GetRewardsSuccessEvent),
				typeof(RewardRedeemSuccessEvent),

				// DEBUG ONLY EVENTS
#if DEBUG
				typeof(ForceRenderWebViewEvent),
				typeof(ToggleStringCheatEvent),

#endif



				// Dummy event, so you don't have to remember about adding an extra
				// comma before your new event.
				typeof(DummyEvent)
			);
		}
	}
#if DEBUG
	#region DEBUG EVENTS
	public class ForceRenderWebViewEvent : IEvent { }
	public class ToggleStringCheatEvent : IEvent { }
	#endregion
#endif
	public class DummyEvent : IEvent { }

	public class VersionCheckEvent : IEvent
	{
		public string url;
		public bool updateRequired;
		public VersionCheckEvent(bool updateRequired, string url)
		{
			this.url = url;
			this.updateRequired = updateRequired;
		}
	}
	public class InitializePoolsEvent : IEvent
	{
		public Action OnCompleteCallback;

		public InitializePoolsEvent(Action OnCompleteCallback)
		{
			this.OnCompleteCallback = OnCompleteCallback;
		}
	}
	public class UnsupportedGameListUpdatedEvent : IEvent
	{
		public HashSet<int> unsupportedPhoenixGames;
		public UnsupportedGameListUpdatedEvent (HashSet<int> unsupportedPhoenixGames)
		{
			this.unsupportedPhoenixGames = unsupportedPhoenixGames;
		}
	}

	public class SceneChangeEvent : IEvent
	{
		public PhoenixScene scene;

		public SceneChangeEvent(PhoenixScene scene)
		{
			this.scene = scene;
		}
	}

	public class UnitySceneProgressEvent : IEvent
	{
		public float progress;

		public UnitySceneProgressEvent(float progress)
		{
			this.progress = progress;
		}
	}

	public class ScreenChangeEvent : IEvent
	{
		public ScreenType type;

		public ScreenChangeEvent(ScreenType type)
		{
			this.type = type;
		}
	}

	public class PopupEvent : IEvent
	{
		public long popupUID;
		public PopupType type;

		public PopupEvent(long popupUID, PopupType type)
		{
			this.popupUID = popupUID;
			this.type = type;
		}
	}

	public class PopupCloseEvent : IEvent
	{
		public long popupUID;
		public PopupType type;

		public PopupCloseEvent(long popupUID, PopupType type)
		{
			this.popupUID = popupUID;
			this.type = type;
		}
	}

	public class AutoLoginSuccessEvent : IEvent { }

	public class ShowWelcomeScreenEvent : IEvent { }

	public class LoginPopupInitEvent : IEvent
	{
		public string username;
		public bool rememberMeEnabled;

		public LoginPopupInitEvent(string username, bool rememberMeEnabled)
		{
			this.username = username;
			this.rememberMeEnabled = rememberMeEnabled;
		}
	}

	public class LoginSuccessEvent : IEvent { 
		public bool autoLogin;
		public LoginSuccessEvent(bool autoLogin)
		{
			this.autoLogin = autoLogin;
		}
	}


	public class RegisterUserSuccessEvent : IEvent { }

	public class HandledInputErrorEvent : IEvent 
	{
		public ErrorTranslation errorTranslation;
		public HandledInputErrorEvent (ErrorTranslation errorTranslation)
		{
			this.errorTranslation = errorTranslation;
		}
	}

	public class InputFieldValidEvent : IEvent
	{
		public InputFieldType field;
		public InputFieldValidEvent(InputFieldType field)
		{
			this.field = field;
		}
	}

	public class LogoutSuccessfulEvent : IEvent { }

	public class ClientIDSetEvent : IEvent
	{
		public string clientID;
		public ClientIDSetEvent(string clientID)
		{
			this.clientID = clientID;
		}
	}


	#region Reset Password Events

	public class ResetPasswordMultiAccountEvent : IEvent
	{
		public List<string> usernames;
	}

	public class ResetPasswordSuccessEvent: IEvent
	{
		public string message;

		public ResetPasswordSuccessEvent(string message)
		{
			this.message = message;
		}
	}
	public class ResetPasswordPopupReadyEvent : IEvent{}

	public class ResetPasswordErrorEvent : IEvent
	{
		public string message;
		public ResetPasswordErrorEvent(string message)
		{
			this.message = message;
		}
	}

	#endregion

	public class GpsErrorEvent : IEvent
	{
		public Action callback;
		public Action cancelCallback;

		public GpsErrorEvent(Action callback, Action cancelCallback)
		{
			this.callback = callback;
			this.cancelCallback = cancelCallback;
		}
	}

	public class GpsErrorPostAppPauseEvent : IEvent { }

	public class GpsLocationSuccessEvent : IEvent { }

	public class GpsLocationDepositAllowedEvent : IEvent {
		public bool cardGamesAllowed;
		public bool allTournamentsAllowed;
		public GpsLocationDepositAllowedEvent(bool cardGamesAllowed, bool allTournamentsAllowed)
		{
			this.cardGamesAllowed = cardGamesAllowed;
			this.allTournamentsAllowed = allTournamentsAllowed;
		}
	}

	public class TournamentSignupSuccessEvent : IEvent
	{
		public bool isNativeGame;

		// for web games, this will be a url.
		// for native games, this will be the scene name.
		public string gameSite;

		public string flavorID;
		public string tournamentID;
		public string tournamentSessionID;
		public string clientID;
		public string gameID;

		// Only used for native games.  Web games contact the server for this data directly.
		public string joinRecord;
		
		// Web Game data
		public Dictionary<string, string> sessionStorageVariables;
	}
	public class TournamentSignupFailEvent : IEvent
	{

	}

	public class UnitySceneLoadCompleteEvent : IEvent { }

    public class LoadSceneHiddenEvent : IEvent { }

	public class WebRequestErrorEvent : IEvent
	{
		public ErrorData error;
		public WebRequestErrorEvent(ErrorData error)
		{
			this.error = error;
		}
	}

	public class FetchGlobalBeginEvent : IEvent { }
	public class FetchGlobalCompleteEvent : IEvent
	{
		public int numberOfActiveRequests;
		public FetchGlobalCompleteEvent(int activeRequests = 0)
		{
			this.numberOfActiveRequests = activeRequests;
		}
	}

	public class FetchScreenBeginEvent : IEvent
	{
		public ScreenType type;

		public FetchScreenBeginEvent(ScreenType type)
		{
			this.type = type;
		}
	}

	public class FetchScreenCompleteEvent : IEvent
	{
		public ScreenType type;

		public FetchScreenCompleteEvent(ScreenType type)
		{
			this.type = type;
		}
	}

	public class FetchPopupBeginEvent : IEvent
	{
		public PopupType type;

		public FetchPopupBeginEvent(PopupType type)
		{
			this.type = type;
		}
	}

	public class FetchPopupCompleteEvent : IEvent
	{
		public PopupType type;

		public FetchPopupCompleteEvent(PopupType type)
		{
			this.type = type;
		}
	}

	public class SelectedGameUpdateEvent : IEvent
	{
		public GameData selectedGame;

		public SelectedGameUpdateEvent(GameData selectedGame)
		{
			this.selectedGame = selectedGame;
		}
	}
	// Fired off when a user authenticates successfully after attempting to signup for a tournament and being challenge for a password.
	public class VerifyPasswordSuccessEvent : IEvent { }
	public class GameListEvent : IEvent
	{
		public Dictionary<int, GameData> list;

		public GameListEvent(Dictionary<int, GameData> gameData)
		{
			list = gameData;
		}
	}

	/// <summary>
	/// Tournament list event struct used for Tourn details and Tournament list.
	/// </summary>
	public class TournamentListEvent : IEvent
	{
		public struct TournamentData
		{
			public int numPlayers;
			public decimal totalPrizePool;
			public string tournamentName;
			public decimal fee;
			public int flavorID;
			public int flavorTypeID;
			public int gameID;
			public string gameResource;
			public TournamentType type;
			public string typeFriendlyName;
			public string gameFriendlyName;
			public int rewardsPointsBase;
			public int rewardPointsMultiplier;
            public int minCashGamesRequired;
            public int minGameSpecificPlaysRequired;
			public List<string> auxDataStrings;
			public List<decimal> prizes;
		}
	}

	public class TournamentGameListEvent : TournamentListEvent
	{
        public TournamentGameListEvent(int cashGamesPlays, int specificGamePlays)
        {
            numCashGamesPlays = cashGamesPlays;
            numSpecificGamePlays = specificGamePlays;
        }

		public List<TournamentData> data = new List<TournamentData>();
        public int numCashGamesPlays;
        public int numSpecificGamePlays;
	}

	public class TournamentDetailsReadyEvent : TournamentListEvent
	{
		public TournamentData details;
        public int totalCashGamePlays;
        public int totalSpecificGamePlays;
	}

	public class WinItNowAcceptedSuccessEvent : IEvent { }
	public class WinItNowAcceptedFailedEvent : IEvent { }
	public class WinItNowDeclinedSuccessEvent : IEvent { }
	public class WinItNowDeclinedFailedEvent : IEvent { }

	public class LogErrorEvent : IEvent 
	{
		public string error;
		public LogErrorEvent(string error)
		{
			this.error = error;
		}
	}


	/// <summary>
	/// Tournament history data used for GameHistory and TournamentResult
	/// </summary>
	public struct TournamentHistoryData
	{
		public decimal fee;
        public TournamentType type;
		public string typeFriendlyName;
		public string gameResource;
		public string gameFriendlyName;
		public bool closed;
		public bool playerWon;
		public decimal amountWon;
		public int tournID;
		public bool unfinished;
		public int? unplayedGameID;
		public int gameID;
		public int flavorID;
		public int flavorTypeID;
		public int numPlayers;
		public int maxPlayers;
		public decimal totalPrizePool;
		public DateTime startDate;
		public DateTime endDate;
		public GameHistoryData.TournamentState state;
	}

	public class GameHistoryDataEvent : IEvent
	{
		public List<TournamentHistoryData> closedSupportedTournaments = new List<TournamentHistoryData>();
		public bool moreAvailable;
	}

	public class GetGameHistorySuccessEvent : GameHistoryDataEvent
	{
		public List<TournamentHistoryData> unplayedUnsupportedTournaments = new List<TournamentHistoryData>();
		public List<TournamentHistoryData> unplayedSupportedTournaments = new List<TournamentHistoryData>();
		public List<TournamentHistoryData> openSupportedTournaments = new List<TournamentHistoryData>();
	}

	public class GetPaginatedGameHistoryEvent : GameHistoryDataEvent
	{

	}
	#region Payment Related Events
	// This struct is used inside of GetDepositConfigDataSuccessEvent and GetAllCreditCardsSuccessEvent
	public struct CreditCardDetails
	{
		public string type;
		public string last4;
		public int expYear;
		public int expMonth;
		public int id;
	}
	public class GetDepositConfigDataSuccessEvent : IEvent
	{
		public struct DepositAmount
		{
			public decimal baseAmount;
			public decimal bonusAmount;
		}

		public Dictionary<string, string> countries;
		public SortedDictionary<string, string> states;
		public SortedDictionary<string, string> provinces;
		public List<DepositAmount> depositAmounts;
		public bool showFirstTimeDepositBonus;
		public bool hasCard;
		public bool hasMultipleCards;
		public bool isPaypalUser;
		public int? lastCardUsedID;
		public Dictionary<int, CreditCardDetails> creditCards;

	}
	public class GetDepositConfigDataFailEvent : IEvent { }

	public class GetAllCreditCardsSuccessEvent : IEvent
	{
		public List<CreditCardDetails> creditCards;
	}
	public class GetAllCreditCardsFailedEvent : IEvent { }
	public class GetAllCreditCardsBeginEvent : IEvent { }

	public class AddCreditCardFailEvent : IEvent
    {
        public List<ErrorTranslation> allErrors;
    }

	public class AddCreditCardBeginEvent : IEvent { }

	public class MakeDepositBeginEvent : IEvent { }

	public class MakeDepositSuccessEvent : IEvent 
    {
        public int amount;
        public int userId;

        public MakeDepositSuccessEvent(int user, int amt)
        {
            amount = amt;
            userId = user;
        }
    }

	public class MakeDepositFailEvent : IEvent { }

	/// <summary>
	/// Withdraw success event.  The web request doesn't return anything special, so just fire off a blank event.
	/// </summary>
	public class WithdrawSuccessEvent : IEvent { }
	/// <summary>
	/// Withdraw popup ready event.  When we have the user's cashBalance and gameCreditBalance we can show the withdraw popup.
	/// </summary>
	public class ProfilePopupReadyEvent : IEvent
	{
		public decimal cashBalance;
		public decimal gameCreditBalance;
		public string username;
		public bool isCashPlayer;
		public string appVersion;
	}
	#endregion

	#region Reward Events
	public class RewardEvent : IEvent
	{
		public struct Reward
		{
			public int price;
			public decimal value;
			public bool canAfford;
			public int rewardID;
		}

		public List<Reward> rewards;
		public int playersRewardPointBalance;
	}

	public class GetRewardsSuccessEvent : RewardEvent {}

	public class RewardRedeemSuccessEvent : RewardEvent {}

	#endregion

	public class GetTournResultsSuccessEvent : IEvent
	{

		public struct Player
		{
			public int score;
			public decimal amountWon;
			public string username;
			public int? place;
			public bool isTied;
			public bool isBuyoutSlot;
			public bool isLoggedInPlayer;
			public bool stillPlaying;
			public bool notStarted;
		}

		public struct TournResultData
		{
			public bool showPlayTypeAgainButton;  // True when a user can not win it now, and tourn type is available.
			public bool showPlayAnotherTournButton; // True when a user can not win it now, the tournament type isn't available, and the tourn is not re-enterable
			public bool reEnterableByUser; // True when there are open slots in the tourn, and that tourn type allows re-entry.
			public bool p1Game;
			public bool canWinItNow;
			public decimal winItNowCost;
			public int winItNowRemainingSeconds; // If a user can win it now, there will be an extra piece of data that is returned that indicates how many seconds they have to decide
			public List<Player> players;
			public TournamentHistoryData history;
			public int minPlayerScore;
			public int maxPlayerScore;
			public int maxCurrentUserScore;
		}

		public TournResultData results;
		public bool animate;
	}
	public class GetTournResultsFailEvent : IEvent { }

	public class CashBalanceUpdateEvent : IEvent
	{
		public decimal cashBalance;
		public decimal gameCredits;
		public bool isCashPlayer;

		public CashBalanceUpdateEvent(decimal cashBalance, decimal gameCredits, bool isCashPlayer)
		{
			this.cashBalance = cashBalance;
			this.gameCredits = gameCredits;
			this.isCashPlayer = isCashPlayer;
		}
	}

	public class RewardPointsBalanceUpdateEvent : IEvent
	{
		public int rewardPointsBalance;

		public RewardPointsBalanceUpdateEvent(int rewardPointsBalance)
		{
			this.rewardPointsBalance = rewardPointsBalance;
		}
	}

	#region P1 Events

	public class P1ExperienceStateChangeEvent : IEvent
	{
		public bool showP1Experience;
		public P1ExperienceStateChangeEvent(bool showP1)
		{
			this.showP1Experience = showP1;
		}
	}

	public class P1GameSelectedEvent : IEvent
	{
		public int gametypeID;
		public P1GameSelectedEvent(int gametypeID)
		{
			this.gametypeID = gametypeID;
		}
	}
	#endregion
	 

	#region JS/web game events
	// All events we expect to come from a web page's JavaScript must inherit
	// from this event.
	public abstract class IJSEvent : IEvent
	{
		public string detail;             // Extra data from the JavaScript event
		public WebObjectWrapper webObj;   // The object managing the web page.
	}

	// The web game is ready to be played, we expect that all the page loading
	// and server connection to be complete at this point.
	public class WebGameReadyEvent : IJSEvent { }

	// The web game encountered an error, an error message will be in the detail member.
	// This will only be an explicitly handled error from the JavaScript.  Unhandled
	// errors (ex: access using a null reference) won't trigger this event.
	public class WebGameErrorEvent : IJSEvent { }

	// The game was ended, either the user exited early or completed and has hit
	// the 'end game' button at the score screen.
	public class WebGameEndedEvent : IJSEvent { }

	// If the game is having communication problems with the game server.  This gets fired.
	public class WebGameDisconnectMessageShowEvent : IJSEvent {}

	// If the game has resolved communication problems with the game server, this gets fired.
	public class WebGameDisconnectMessageHideEvent : IJSEvent {}

	public class WebGameStartButtonClickedEvent : IJSEvent{}

	// Fired when a WebObjectWrapper has it's page loaded callback called from the 
	// native layer.  The url may not be the same as the one you passed to WebObjectWrapper.Load;
	// the view may have navigated to a new page.
	// The webObj is the WebObjectWrapper used to manage the view that loaded this
	// page, and you can use that to distinguish between views/pages if you are using
	// multiple WebObjectWrappers at the same time.
	public class WebPageLoadedEvent : IEvent
	{
		public string url;
		public WebObjectWrapper webObj;
	}

	// Have the view put the web object into the scene
	public class InitWebViewEvent : IEvent
	{
		public WebObjectWrapper webObj;
	}

	public class ResetAppEvent : IEvent { }

	#endregion

	#region View events

	public class HistoryTileSelectViewEvent : IEvent
	{
		public string gameResourceName;

		public HistoryTileSelectViewEvent(string gameResourceName)
		{
			this.gameResourceName = gameResourceName;
		}
	}

	#endregion

	#region Model events
	public class SceneLoadBeginEvent : IEvent
	{
		public SceneLoadType sceneLoadType;
		public SceneLoadBeginEvent(SceneLoadType sceneLoadType)
		{
			this.sceneLoadType = sceneLoadType;
		}
	}
	public class SceneLoadCompleteEvent : IEvent
	{
		public SceneLoadType sceneLoadType;

		public SceneLoadCompleteEvent(SceneLoadType sceneLoadType)
		{
			this.sceneLoadType = sceneLoadType;
		}
	}

	#endregion
}
