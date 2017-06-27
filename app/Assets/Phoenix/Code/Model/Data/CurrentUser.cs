using System;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Utils;
using Newtonsoft.Json;

namespace GSN.Skill.Phoenix.Model.Data
{
	public class CurrentUser
	{
		public string promoTrackerID { get; private set; }
		public Dictionary<int, int> upgradeBonusAmount { get; private set; } // represnts bonus game credit if they deposit X amount
		public int userID { get; private set; }
		public bool isPaypalUser { get; private set; }
		public bool createPasswordOnUpgrade { get; private set; }
		public string authenticationToken { get; private set; }
		public bool isGuest { get; private set; }
		public string username { get; private set; }
		public decimal cashBalance { get; private set; }
		public decimal gameCredits { get; private set; }
		public int rewardPoints { get; private set; }
		public bool showP1Experience {get; set;} // We want to allow the client to control if the p1 experience should be shown so we let this be publicly set
		public string csrfToken { get; private set; }  // CSRF token (Cross-site request forgery)
		public User.CreditCardData? ccData { get; private set; }
		public bool wasPlayerAutoLoggedIn{get; set;}  // This is used to help send the right bi events.

		public CurrentUser()
		{
			upgradeBonusAmount = new Dictionary<int, int>();
			RequestManager.Instance.OnUserDataUpdate += OnUserDataUpdate;
		}

		public void NotifyUserInfo()
		{
			EventDispatcher.DispatchEvent(new CashBalanceUpdateEvent(cashBalance, gameCredits, !isGuest ));
			EventDispatcher.DispatchEvent(new RewardPointsBalanceUpdateEvent(rewardPoints));
		}

		public void Reset()
		{
			promoTrackerID = string.Empty;
			upgradeBonusAmount.Clear();
			userID = 0;
			isPaypalUser = false;
			createPasswordOnUpgrade = false;
			authenticationToken = string.Empty;
			isGuest = false;
			username = string.Empty;
			cashBalance = 0;
			gameCredits = 0;
			rewardPoints = 0;
			showP1Experience = false;
			csrfToken = string.Empty;
			ccData =null;
			wasPlayerAutoLoggedIn = false;
		}

		/// <summary>
		/// Handle updating the user data
		/// </summary>
		/// <param name="userData">User data.</param>
		private void OnUserDataUpdate(User userData)
		{
			// if it is not a "diet" user object
			// diet user = a slim block of data that doesn't include all user data
			if( null != userData.token )
			{
				bool previousShowP1Status = showP1Experience;
				if (previousShowP1Status != userData.showP1Experience)
				{
					EventDispatcher.DispatchEvent(new P1ExperienceStateChangeEvent(userData.showP1Experience));
				}
				showP1Experience = userData.showP1Experience;

				csrfToken = userData.token;
				promoTrackerID = userData.epid;
				isPaypalUser = userData.pp_user == WorldWinnerReferenceKeys.TRUE_KEY;
				createPasswordOnUpgrade = userData.createPasswordOnUpgrade == WorldWinnerReferenceKeys.TRUE_KEY;
				authenticationToken = userData.auth_token;
				isGuest = userData.is_guest == WorldWinnerReferenceKeys.TRUE_KEY;
				ccData = GetCreditCardData(userData.cc_data);

				if (userData.upgrade_bonus_amounts != null)
				{
					upgradeBonusAmount.Clear();
					foreach (var entry in userData.upgrade_bonus_amounts)
					{
						upgradeBonusAmount.Add(Convert.ToInt32(entry.Key), entry.Value);
					}
				}
			}



			userID = Convert.ToInt32(userData.user_id);
			username = userData.username;

			decimal prevCashBalance = cashBalance;
			decimal prevGameCredits = gameCredits;
			cashBalance = Convert.ToDecimal(userData.cash_balance);
			gameCredits = Convert.ToDecimal(userData.game_credits);
			if (prevCashBalance != cashBalance || prevGameCredits != gameCredits)
			{
				EventDispatcher.DispatchEvent(new CashBalanceUpdateEvent(cashBalance,gameCredits, !isGuest));
			}

			int prevRewardPoints = rewardPoints;
			rewardPoints = Convert.ToInt32(userData.reward_points);
			if (rewardPoints != prevRewardPoints)
			{
				EventDispatcher.DispatchEvent(new RewardPointsBalanceUpdateEvent(rewardPoints));
			}
		}

		private User.CreditCardData? GetCreditCardData(object cc_data)
		{
			if (cc_data is string || cc_data == null)
				return null;

			return JsonConvert.DeserializeObject<User.CreditCardData>(cc_data.ToString());
		}
	}
}

