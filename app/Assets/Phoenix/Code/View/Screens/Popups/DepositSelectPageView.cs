using GSN.Skill.Phoenix.View.Pool;
using UnityEngine;
using System.Collections.Generic;

namespace GSN.Skill.Phoenix.View
{
	public class DepositSelectPageView : ScreenView
	{
		[SerializeField]
		private Transform _depositListParent;
		[SerializeField]
		private DepositPopupView _depositPopupView;
        [SerializeField]
        private GameObject _firstTimeDepositPromo;

		private const string DEPOSIT_AMOUNT_TILE = "BTN_DepositAmountTile";

		protected override void OnEnable()
		{
			ClearChildrenObjects(_depositListParent);
            _firstTimeDepositPromo.SetActive(false);

        }

        public void UpdateDepositAmounts(List<GetDepositConfigDataSuccessEvent.DepositAmount> amounts, GetDepositConfigDataSuccessEvent depositData)
		{
			ClearChildrenObjects(_depositListParent);

			for (int i = 0; i < amounts.Count; i++)
			{
				DepositAmountTile tile = GameObjectPoolManager.Instance.GetObject<DepositAmountTile>(DEPOSIT_AMOUNT_TILE);
				tile.transform.SetParent(_depositListParent, false);
				tile.SetDepositAmountData(amounts[i]);
				tile._depositPopupView = _depositPopupView;
			}

            _firstTimeDepositPromo.SetActive(depositData.showFirstTimeDepositBonus);
        }
	}
}