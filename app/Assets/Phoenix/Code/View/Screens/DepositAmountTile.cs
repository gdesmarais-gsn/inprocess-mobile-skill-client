using UnityEngine;
using TMPro;
using GSN.Skill.Phoenix.Strings;
using UnityEngine.UI;
using GSN.Skill.Phoenix.View.Pool;

namespace GSN.Skill.Phoenix.View
{
	public class DepositAmountTile : PooledGameObject
	{
		[SerializeField]
		private TextMeshProUGUI _depositAmount;
		[SerializeField]
		private TextMeshProUGUI _gameCredits;
		[SerializeField]
		private GameObject _gameCreditsObject;
        [SerializeField]
        private Image _gameCreditsIcon;
        [SerializeField]
        private Sprite[] _cashIcons;

		[SerializeField]
		private Button _button;

		public DepositPopupView _depositPopupView;
        private GetDepositConfigDataSuccessEvent.DepositAmount _amount;

		void OnEnable()
		{
			_button.onClick.AddListener(OnDepositSelected);
            _gameCreditsObject.SetActive(false);
		}

		void OnDisable()
		{
			_button.onClick.RemoveListener(OnDepositSelected);
		}

		public void SetDepositAmountData(GetDepositConfigDataSuccessEvent.DepositAmount depositAmount)
		{
			_amount = depositAmount;
            _depositAmount.text = StringTable.Instance.GetEntry(CategoryTournament.PrizePoolValue, depositAmount.baseAmount.ToString("N0"));
			_gameCredits.text = StringTable.Instance.GetEntry(CategoryDeposit.GameCreditsDepositTile, depositAmount.bonusAmount.ToString("N0"));
			if (depositAmount.bonusAmount > 0)
			{
				_gameCreditsObject.SetActive(true);

                if (depositAmount.bonusAmount > 29)
                    _gameCreditsIcon.sprite = _cashIcons[0];
				else if (depositAmount.bonusAmount > 19)
					_gameCreditsIcon.sprite = _cashIcons[1];
                else
					_gameCreditsIcon.sprite = _cashIcons[0];
			}
		}

		void OnDepositSelected()
		{
			_depositPopupView.OnDepositAmountSelected(_amount);
        }
	}
}