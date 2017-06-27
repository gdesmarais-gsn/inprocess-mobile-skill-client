using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model.Data;
using System;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.View
{
	public class HUDView : BaseView
	{
		[SerializeField]
		private TextMeshProUGUI _rewardsPointsBalance;
		[SerializeField]
		private TextMeshProUGUI _cashBalance;

		[SerializeField]
		private Button _depositButton;
		[SerializeField]
		private Button _rewardsButton;
		[SerializeField]
		private Button _profileButton;

		private int _currentRewardsPoints = -1;
		private decimal _currentCashBalance = -1;

		private const float TWEEN_TIME = 0.5f;

		void OnEnable()
		{
			_depositButton.onClick.AddListener(OnDepositButton);
			_profileButton.onClick.AddListener(OnProfileButton);
            _rewardsButton.onClick.AddListener(OnRewardsButton);
			EventDispatcher.AddListener<ResetAppEvent>(OnResetApp);
			EventDispatcher.AddListener<CashBalanceUpdateEvent>(OnCashBalanceUpdate);
			EventDispatcher.AddListener<RewardPointsBalanceUpdateEvent>(OnRewardsPointsBalanceUpdate);
            _rewardsPointsBalance.text = "";
            _cashBalance.text = "";

        }

		void OnDisable()
		{
			_depositButton.onClick.RemoveListener(OnDepositButton);
			_profileButton.onClick.RemoveListener(OnProfileButton);
            _rewardsButton.onClick.RemoveListener(OnRewardsButton);
			EventDispatcher.RemoveListener<ResetAppEvent>(OnResetApp);
			EventDispatcher.RemoveListener<CashBalanceUpdateEvent>(OnCashBalanceUpdate);
			EventDispatcher.RemoveListener<RewardPointsBalanceUpdateEvent>(OnRewardsPointsBalanceUpdate);
		}

		private void HandleBalanceUpdate(float currentBalance, float newBalance, Action<float> OnUpdate)
		{
			if ((int)currentBalance == -1)
			{
				OnUpdate((float)newBalance);
			}
			else
			{
				LeanTween.value(this.gameObject, OnUpdate, currentBalance, newBalance, TWEEN_TIME);
			}
		}

		private void OnResetApp(IEvent e)
		{
			// reset balances
			_currentRewardsPoints = -1;
			_currentCashBalance = -1;
		}

		private void OnRewardsPointsBalanceUpdate(IEvent e)
		{
			RewardPointsBalanceUpdateEvent evt = ((RewardPointsBalanceUpdateEvent)e);
			HandleBalanceUpdate((float)_currentRewardsPoints, (float)evt.rewardPointsBalance,
            (val) =>
			{
				_currentRewardsPoints = (int)val;
				_rewardsPointsBalance.text = string.Format("{0:n0}", val);
			});
		}

		private void OnCashBalanceUpdate(IEvent e)
		{
			CashBalanceUpdateEvent evt = ((CashBalanceUpdateEvent)e);

            if (evt.isCashPlayer)
            {
                HandleBalanceUpdate((float)_currentCashBalance, (float)evt.cashBalance + (float)evt.gameCredits,
                (val) =>
                {

                    _currentCashBalance = (decimal)val;
                    _cashBalance.text = StringTable.Instance.GetEntry(CategoryTournament.PrizePoolValue, val.ToString());
                });
            }
            else
                _cashBalance.text = StringTable.Instance.GetEntry(CategoryHUD.CashUpsell);
		}

		void OnDepositButton()
		{
			controller.ShowDeposit();
		}

		void OnRewardsButton()
		{
            controller.ShowRewardPopup();
		}

		void OnProfileButton()
		{
			controller.ShowPlayerProfile();
		}
	}
}