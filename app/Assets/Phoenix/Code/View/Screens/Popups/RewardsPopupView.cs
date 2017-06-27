using GSN.Skill.Events;
using UnityEngine;
using GSN.Skill.Phoenix.View.Pool;
using UnityEngine.UI;
using GSN.Skill.Phoenix.Model;
using System.Collections.Generic;

namespace GSN.Skill.Phoenix.View
{
	public class RewardsPopupView : PopupView
    {
        [SerializeField]
        private Transform _rewardListParent;

        [SerializeField]
        private Button _closeButton;

        private const string REWARD_STORE_TILE = "BTN_RewardStore_Item";
        private int MAX_REWARDS_ITEMS = 6;

		protected override void OnEnable()
		{
			base.OnEnable();
			EventDispatcher.AddListener<GetRewardsSuccessEvent>(OnGetRewardsSuccessEvent);
            EventDispatcher.AddListener<RewardRedeemSuccessEvent>(OnRewardRedeemSuccessEvent);
            _closeButton.onClick.AddListener(OnCloseButton);
            ClearChildrenObjects(_rewardListParent);
		}

		protected override void OnDisable()
		{
			base.OnDisable();
			EventDispatcher.RemoveListener<GetRewardsSuccessEvent>(OnGetRewardsSuccessEvent);
            EventDispatcher.RemoveListener<RewardRedeemSuccessEvent>(OnRewardRedeemSuccessEvent);
            _closeButton.onClick.RemoveListener(OnCloseButton);
		}

        private void OnGetRewardsSuccessEvent(IEvent e)
        {
            var evt = (RewardEvent)e;

            UpdateRewardList(evt.rewards);
        }

		private void OnRewardRedeemSuccessEvent(IEvent e)
		{
			var evt = (RewardEvent)e;

			//TODO: add success specific animaton

			UpdateRewardList(evt.rewards);
		}

        void UpdateRewardList(List<RewardEvent.Reward> rewards)
        {
			ClearChildrenObjects(_rewardListParent);

			for (int i = 0; i < MAX_REWARDS_ITEMS; i++)
			{
				RewardStoreItemTile tile = GameObjectPoolManager.Instance.GetObject<RewardStoreItemTile>(REWARD_STORE_TILE);
				tile.transform.SetParent(_rewardListParent, false);
				tile.SetRewardItemAmount(rewards[i]);
			}
        }

		private void OnCloseButton()
		{
			OnHide();
		}

		protected override void OnFetchPopupBeginEvent(IEvent e)
		{
            if (((FetchPopupBeginEvent)e).type == PopupType.Rewards)
			{
				ShowActivityIndicator();
			}
		}

		protected override void OnFetchPopupCompleteEvent(IEvent e)
		{
            if (((FetchPopupCompleteEvent)e).type == PopupType.Rewards)
			{
				HideActivityIndicator();
			}
		}
	}
}