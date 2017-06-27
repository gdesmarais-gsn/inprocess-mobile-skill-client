using GSN.Skill.Phoenix.Model;
using GSN.Skill.Phoenix.Requests.Payment;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.Controller
{
	public class MainController
	{
		public MainModel model { private get; set; }

		public void HandleErrorCallback()
		{
			model.HandleErrorCallback();
		}

		public void LoadComplete()
		{
			model.LoadComplete();
		}

		public void ShowLogin()
		{
			model.loginFlowManager.ShowLogin();
		}
		// Reset Password always takes an email.  It also supports a username if the user has more than 1 account associated with that email.
		public void ResetPassword(string emailAddress, string username="")
		{
			model.resetPasswordManager.ResetPassword(emailAddress,username);
		}
		public void ShowResetPasswordPopup()
		{
			model.resetPasswordManager.ShowResetPasswordPopup();
		}

		public void ShowRegistration()
		{
			model.loginFlowManager.ShowRegistration();
		}

		public void RegisterUser(string username, string email, string password)
		{
			model.loginFlowManager.RegisterUser(username, email, password);
		}

		public void Login(string username, string password, bool autoLoginEnabled)
		{
			model.loginFlowManager.Login(username, password, autoLoginEnabled);
		}

		public void Logout()
		{
			model.playerProfileManager.Logout();
		}

		public void ShowTermsAndConditions()
		{
			model.ShowTermsAndConditions();
		}
		public void ShowTermsofService()
		{
			model.ShowTermsOfService();
		}
		public void ShowPrivacyPolicy()
		{
			model.ShowPrivacyPolicy();
		}

		public void RemovePopup(long uid)
		{
			model.RemovePopup(uid);
		}

		public void SetScreen(ScreenType type)
		{
			model.SetScreen(type);
		}

		public void SetCurrentGame(int i)
		{
			model.SetGameID(i);
		}

		public void ValidateInputField(InputFieldType field, string text, bool allowEmpty = false)
		{
			model.ValidateInputField(field,text, allowEmpty);
		}

		#region Tournament Signup functions
	 

		/// <summary>
		/// Singup for a tournament
		/// </summary>
		/// <param name="flavorID">Flavor identifier.</param>
		/// <param name="gameID">Game identifier.</param>
		public void TournamentSignup(int flavorID, int flavorTypeID, int gameID, decimal fee, decimal purseAmount)
		{
			model.tournamentSignupManager.TournamentSignup(flavorID, flavorTypeID, gameID, fee, purseAmount);
		}

		/// <summary>
		/// Re enters tournament.
		/// </summary>
		/// <param name="flavorID">Flavor ID</param>
		/// <param name="tournID">Tourn ID</param>
		public void ReEnterTournament(int flavorID, int flavorTypeID, int tournID, int gameID, decimal fee, decimal purseAmount)
		{
			model.tournamentSignupManager.ReEnterTournament(flavorID, flavorTypeID,tournID, gameID, fee, purseAmount);
		}

		/// <summary>
		/// Enters the previously unplayed tournament.  Users can have up to 4 unplayed tournaments in their history
		/// </summary>
		/// <param name="flavorID">Flavor ID</param>
		/// <param name="tournID">Tourn ID</param>
		/// <param name="unplayedGameID">Unplayed game ID</param>
		public void EnterPreviouslyUnplayedTournament(int flavorID, int flavorTypeID, int tournID, int unplayedGameID, int gameID, decimal fee, decimal purseAmount)
		{
			model.tournamentSignupManager.EnterPreviouslyUnplayedTournament(flavorID, flavorTypeID, tournID, unplayedGameID, gameID, fee, purseAmount);
		}
		/// <summary>
		/// This should be called from the TournamentSignupPasswordChallengePopup.  It takes a password, and attempts to 
		/// log the user in, and retrys tournament signup.
		/// </summary>
		/// <param name="password">Password.</param>
		public void VerifyPassword(string password)
		{
			model.VerifyPassword(password);
		}
		#endregion

		#region Deposit functions

		public void ShowDeposit()
		{
			model.depositManager.ShowDeposit();
		}
		public void ValidateDepositLocation()
		{
			model.depositManager.ValidateDepositLocation();
		}
		public void MakeDepositWithExistingCard(int amount, int ccID, string password)
		{
			model.depositManager.MakeDepositWithExistingCard(amount, ccID, password);
		}
		public void MakeDepositWithNewCard(DepositManager.DepositWithNewCardData ccData)
		{
			model.depositManager.MakeDepositWithNewCard(ccData);
		}
		 
		#endregion

		#region Player Profile functions
		/// <summary>
		/// Shows the withdraw popup.
		/// </summary>
		public void ShowPlayerProfile()
		{
			model.playerProfileManager.ShowPlayerProfile();
		}
		/// <summary>
		/// Attempts to withdraw funds.
		/// </summary>
		/// <param name="amount">Amount.</param>
		/// <param name="password">Password.</param>
		public void Withdraw(decimal amount, string password)
		{
			model.playerProfileManager.Withdraw(amount,password);
		}

		public void Help()
		{
			model.playerProfileManager.Help();
		}

		#endregion

		#region Reward Functions
		public void ShowRewardPopup()
		{
			model.rewardManager.ShowRewardPopup();
		}
		public void RedeemReward(int rewardID)
		{
			model.rewardManager.RedeemReward(rewardID);
		}

		#endregion

		public void ShowTournamentResults(int tournamentID)
		{
			model.ShowTournamentResult(tournamentID);
		}
		public void ShowAdditionalCompletedGameHistoryData()
		{
			model.ShowAdditionalCompletedGameHistoryData();
		}
		public void RefreshGameHistory()
		{
			model.RefreshGameHistory();
		}
		public void ShowTournamentDetails(int flavorID)
		{
			model.ShowTournamentDetails(flavorID);
		}
		public void WinItNowAccept(int tournID, decimal fee)
		{
			model.tournamentSignupManager.WinItNow(tournID, true, fee);
		}
		public void WinItNowDecline(int tournID)
		{
			model.tournamentSignupManager.WinItNow(tournID, false);
		}
	}
}