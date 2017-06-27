using System;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Requests.Tournament;
using GSN.Skill.Utils;
using System.Collections.Generic;
using GSN.Skill.Phoenix.Requests.Reward;
using GSN.Skill.Events;

namespace GSN.Skill.Phoenix.Utils
{
	 
	public static class RewardsUtilities
	{
		public static GetRewardsSuccessEvent BuildRewardPopupReadyEventData(GetRewardsData.Reward[] rewards, int rewardPoints)
		{
			GetRewardsSuccessEvent rewardsReadyEvent = new GetRewardsSuccessEvent();
			rewardsReadyEvent.rewards = new List<GetRewardsSuccessEvent.Reward>();
			foreach (GetRewardsData.Reward reward in rewards)
			{
				try
				{
					GetRewardsSuccessEvent.Reward convertedReward = new GetRewardsSuccessEvent.Reward();
					convertedReward.rewardID = Convert.ToInt32(reward.reward_id);
					convertedReward.price = Convert.ToInt32(reward.discount_cost);
					convertedReward.value = Convert.ToDecimal(reward.credit_amount);
					if (reward.can_afford != WorldWinnerReferenceKeys.CAN_NOT_AFFORD_AWARD_KEY)
						convertedReward.canAfford = true;
					rewardsReadyEvent.rewards.Add(convertedReward);
				}
				catch
				{
					GsnDebug.LogError("Problem parsing data for reward : " + reward.reward_id);
				}
			}
			rewardsReadyEvent.playersRewardPointBalance = rewardPoints;
			return rewardsReadyEvent;
		}
	}
}

