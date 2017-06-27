using UnityEngine;
using TMPro;
using GSN.Skill.Phoenix.Strings;
using UnityEngine.UI;
using GSN.Skill.Phoenix.View.Pool;

namespace GSN.Skill.Phoenix.View
{
    public class RewardStoreItemTile : BaseView
	{
		[SerializeField]
		private TextMeshProUGUI _gameCreditAmount;
		[SerializeField]
		private TextMeshProUGUI _rewardsPointsFee;

        private int _rewardID;

		[SerializeField]
		private Button _button;

		void OnEnable()
		{
			_button.onClick.AddListener(OnRewardSelected);
		}

		void OnDisable()
		{
			_button.onClick.RemoveListener(OnRewardSelected);
		}

        public void SetRewardItemAmount(GetRewardsSuccessEvent.Reward reward)
		{
            _gameCreditAmount.text = reward.value.ToString("C0");
            _rewardsPointsFee.text = string.Format("{0:n0}", reward.price);
            _button.interactable = reward.canAfford;
            _rewardID = reward.rewardID;
		}

		void OnRewardSelected()
		{
            controller.RedeemReward(_rewardID);
        }
	}
}