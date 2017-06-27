
using GSN.Skill.Phoenix.Requests;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Phoenix.Requests.Payment;
using GSN.Skill.Phoenix.Requests.Tournament;
using GSN.Skill.Phoenix.Requests.Config;
using GSN.Skill.Requests;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Requests.Reward;

namespace GSN.Skill.Phoenix.Model
{
	public class RequestManager : Singleton<RequestManager>
	{
		public delegate void UserDataUpdate(User userData);
		public UserDataUpdate OnUserDataUpdate;

		public delegate void GameListDataUpdate(ListGameTypesRequestData gameListData);
		public GameListDataUpdate OnGameListDataUpdate;

		public delegate void DeviceDataSet(RegisterDeviceRequestData deviceData);
		public DeviceDataSet OnDeviceDataSet;

		#region Requests with User Data

		// ACCOUNT
		public LoginRequestData login { get; private set; }
		public CreateNewUserRequestData register { get; private set; }
		public RememberMeLoginRequestData rememberMe { get; private set; }
		public RegisterDeviceRequestData registerDevice { get; private set; } // do we really need to update the user when registering?
		public GetAllCreditCardsRequestData getAllCreditCards { get; private set; }
		public CreditCardRequestData creditCardInfo { get; private set; }
		public CompleteP1ExperienceRequestData completeP1 {get; private set; }
		public GetPlayerInfoRequestData getPlayerInfo {get; private set; }
		public ResetPasswordRequestData resetPassword {get; private set; }

		// PAYMENT
		public AddCreditCardRequestData addCreditCard { get; private set; }
		public DepositRequestData makeDeposit {get; private set;}
		public WithdrawRequestData withdraw {get; private set;}

		// TOURNAMENT
		public ListFlavorsRequestData listFlavor { get; private set; }
		public TournamentSignupRequestData signup { get; private set; }
		public WinItNowRequestData winItNow {get; private set; }
		public TournamentSignupRequestData tournSignup {get; private set;}
		//probably don't need "TournamentResultRequestData" results { get; private set; } // do we really need to update the user when fetching results?

		// CONFIG
		public UpgradeBonusAmountRequestData upgradeAmounts {get; private set; }
		public ConfigRequestData configData { get; private set; }

		// REWARD
		public GetRewardsRequestData getRewards{get; private set; }
		public RedeemRewardRequestData redeemReward{get; private set; }

		#endregion

		public ListGameTypesRequestData listGameTypes { get; private set; }

		// delaying the "constructor" to Init purely so that the instance is accessible to entire system
		public void Init()
		{
			// ACCOUNT
			login = new LoginRequestData();
			register = new CreateNewUserRequestData();
			rememberMe = new RememberMeLoginRequestData();
			registerDevice = new RegisterDeviceRequestData();
			getAllCreditCards = new GetAllCreditCardsRequestData();
			creditCardInfo = new CreditCardRequestData();
			completeP1 = new CompleteP1ExperienceRequestData();
			getPlayerInfo = new GetPlayerInfoRequestData();
			resetPassword = new ResetPasswordRequestData();

			// PAYMENT
			addCreditCard = new AddCreditCardRequestData();
			makeDeposit = new DepositRequestData();
			withdraw = new WithdrawRequestData();

			// TOURNAMENT
			listFlavor = new ListFlavorsRequestData();
			signup = new TournamentSignupRequestData();
			winItNow = new WinItNowRequestData();
			tournSignup = new TournamentSignupRequestData();

			// CONFIG
			upgradeAmounts = new UpgradeBonusAmountRequestData();
			configData = new ConfigRequestData();

			// REWARD
			getRewards = new GetRewardsRequestData();
			redeemReward = new RedeemRewardRequestData();

			// ACCOUNT
			login.OnCompleteHandler += OnUserUpdate;
			register.OnCompleteHandler += OnUserUpdate;
			rememberMe.OnCompleteHandler += OnUserUpdate;
			getAllCreditCards.OnCompleteHandler += OnUserUpdate;
			creditCardInfo.OnCompleteHandler += OnUserUpdate;
			completeP1.OnCompleteHandler += OnUserUpdate;
			getPlayerInfo.OnCompleteHandler += OnUserUpdate;

			// PAYMENT
			addCreditCard.OnCompleteHandler += OnUserUpdate;
			makeDeposit.OnCompleteHandler += OnUserUpdate;
			withdraw.OnCompleteHandler += OnUserUpdate;

			// TOURNAMENT
			listFlavor.OnCompleteHandler += OnUserUpdate;
			signup.OnCompleteHandler += OnUserUpdate;
			winItNow.OnCompleteHandler += OnUserUpdate;
			tournSignup.OnCompleteHandler += OnUserUpdate;

			// CONFIG
			upgradeAmounts.OnCompleteHandler += OnUserUpdate;

			// REWARD
			getRewards.OnCompleteHandler += OnUserUpdate;
			redeemReward.OnCompleteHandler += OnUserUpdate;

			listGameTypes = new ListGameTypesRequestData();
			listGameTypes.OnCompleteHandler += OnGameListUpdate;

			// TODO: how should we handle failure to register device?
			registerDevice.OnCompleteHandler += OnDeviceSet;
		}

		/// <summary>
		/// User data is received by several different endpoints.
		/// Notify the user manager to handle the updated user data
		/// </summary>
		/// <param name="request">Request.</param>
		private void OnUserUpdate(IWebRequest request)
		{
			User userData = ((IUserInfo)request).userData;

			if (userData != null && OnUserDataUpdate != null)
				OnUserDataUpdate(userData);
		}

		private void OnGameListUpdate(IWebRequest request)
		{
			if (OnGameListDataUpdate != null)
				OnGameListDataUpdate((ListGameTypesRequestData)request);
		}

		private void OnDeviceSet(IWebRequest request)
		{
			if (OnDeviceDataSet != null)
				OnDeviceDataSet((RegisterDeviceRequestData)request);
		}
	}
}

