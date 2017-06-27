﻿using System;
using GSN.Skill.Phoenix.Model.Data;
using System.Collections.Generic;
using GSN.Skill.Events;
using System.Text.RegularExpressions;
using GSN.Skill.Requests;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Model.Popups;
using GSN.Skill.Phoenix.Utils;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.Model
{
	public class RewardManager
	{
		private CurrentUser _currentUser;
		private DepositManager _depositManager;
		private WebRequests _requests;

		private RewardsPopupModel _popup; // track the popup instance

		public RewardManager(CurrentUser currentUser, DepositManager depositManager)
		{
			_currentUser = currentUser;
			_depositManager = depositManager;
		}

		#region Public Functions
		public void ShowRewardPopup()
		{
			_popup = new RewardsPopupModel(_currentUser);
			PopupManager.Instance.SetPopup(_popup);
		}
		public void RedeemReward(int rewardID)
		{
			_requests = new WebRequests();

			_requests.OnRequestsBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			_requests.OnRequestsCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			_requests.OnRequestsFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			_requests.OnRequestsFailHandler += OnRedeemFail;
			_requests.OnRequestsCompleteHandler += OnRedeemSuccess;

			RequestManager.Instance.redeemReward.rewardID = rewardID;
			_requests.Enqueue(RequestManager.Instance.redeemReward);
			_requests.Enqueue(RequestManager.Instance.getRewards);
			WebRequester.Instance.SequentialFetchRequests(_requests);
		}
		#endregion



		#region Web Callbacks
		// On redeem fail, show an error popup
		private void OnRedeemFail(WebRequests requests)
		{
			_requests.OnRequestsFailHandler -= OnRedeemFail;
			_requests.OnRequestsCompleteHandler -= OnRedeemSuccess;

			// check the redeem reward and see if it's an error that we've translated
			ErrorTranslation? errorTranslation = ErrorManager.Instance.GetErrorTranslation(RequestManager.Instance.redeemReward);
			if (errorTranslation.HasValue &&
			    errorTranslation.Value.entryKey.GetType() == typeof(CategoryRewards))
			{
				switch ((CategoryRewards)errorTranslation.Value.entryKey)
				{
					case CategoryRewards.ErrorNonCashUser:
						// a non-cash user attempted to redeem. redirect them to the deposit flow
						ErrorManager.Instance.HandleUserError(ErrorType.RestReward, errorTranslation.Value.message, HandleShowDeposit, StringTable.Instance.GetEntry(CategoryRewards.MakeDeposit), true);
						break;
				}
			}
			else
			{
				ErrorManager.Instance.HandleWebRequestsError(requests);
			}
		}

		/// <summary>
		/// Handles hiding the redeem and error popups and showing the deposit
		/// </summary>
		private void HandleShowDeposit()
		{
			PopupManager.Instance.RemovePopup(_popup); // hide the rewards popup. NOTE: This may conflict with the visual popup removal flow. TODO: Check once we have visual popup animations
			_depositManager.ShowDeposit(); // show the deposit popup
			// NOTE: the error popup will be resolved after this error callback stack is completed, which means
			// the deposit popup will be queued
		}

		// On redeem success, fire a success event for the view
		private void OnRedeemSuccess(WebRequests requests)
		{
			_requests.OnRequestsFailHandler -= OnRedeemFail;
			_requests.OnRequestsCompleteHandler -= OnRedeemSuccess;
			GetRewardsSuccessEvent newData= RewardsUtilities.BuildRewardPopupReadyEventData(RequestManager.Instance.getRewards.Response.result.rewards, Convert.ToInt32(RequestManager.Instance.getRewards.Response.result.user.reward_points));
			RewardRedeemSuccessEvent successEvent = new RewardRedeemSuccessEvent();
			successEvent.rewards = newData.rewards;
			successEvent.playersRewardPointBalance = newData.playersRewardPointBalance;
			EventDispatcher.DispatchEvent(successEvent);

		}

		#endregion
	}
}