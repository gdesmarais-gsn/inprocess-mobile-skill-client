using System;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Phoenix.Model.Popups;
using GSN.Skill.Phoenix.Requests.Config;
using GSN.Skill.Requests;
using GSN.Skill.Events;
using System.Collections.Generic;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Requests.Reward;
using GSN.Skill.Phoenix.Utils;

namespace GSN.Skill.Phoenix.Model.Popups
{
	public class RewardsPopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.Rewards; } }

		private CurrentUser _currentUser;

		public RewardsPopupModel(CurrentUser currentUser)
		{
			_currentUser = currentUser;
		}

		// When we open the popup, make a request to get the rewards
		public void OnOpen()
		{
			RequestManager.Instance.getRewards.OnBeginHandler += OnGetRewardsBegin;
			RequestManager.Instance.getRewards.OnFailHandler += OnGetRewardsFail;
			RequestManager.Instance.getRewards.OnCompleteHandler += OnGetRewardsSuccess;
			WebRequester.Instance.FetchRequest(RequestManager.Instance.getRewards);
		}

		public void OnClose()
		{
			// handle functionality when the popup is closing
		}

		private void OnGetRewardsBegin(IWebRequest request)
		{
			EventDispatcher.DispatchEvent(new FetchPopupBeginEvent(type));
		}
		private void OnGetRewardsSuccess(IWebRequest requests)
		{
			RequestManager.Instance.getRewards.OnBeginHandler -= OnGetRewardsBegin;
			RequestManager.Instance.getRewards.OnFailHandler -= OnGetRewardsFail;
			RequestManager.Instance.getRewards.OnCompleteHandler -= OnGetRewardsSuccess;
			EventDispatcher.DispatchEvent(RewardsUtilities.BuildRewardPopupReadyEventData(RequestManager.Instance.getRewards.Response.result.rewards, Convert.ToInt32( RequestManager.Instance.getRewards.Response.result.user.reward_points)));
			EventDispatcher.DispatchEvent(new FetchPopupCompleteEvent(type));
		}
		private void OnGetRewardsFail(IWebRequest request)
		{
			RequestManager.Instance.getRewards.OnBeginHandler -= OnGetRewardsBegin;
			RequestManager.Instance.getRewards.OnFailHandler -= OnGetRewardsFail;
			RequestManager.Instance.getRewards.OnCompleteHandler -= OnGetRewardsSuccess;
			EventDispatcher.DispatchEvent(new FetchPopupCompleteEvent(type));
			ErrorManager.Instance.HandleWebRequestError(ErrorType.RestReward,request);
		}
		 
		 
	}
}