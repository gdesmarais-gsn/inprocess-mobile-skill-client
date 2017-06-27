using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Utils;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UI.Extensions;
using System.Collections.Generic;
using TMPro;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.View
{
	public class DepositPopupView : PopupView
	{
		[SerializeField]
		private Button _closeButton;
		[SerializeField]
		private Button _backButton;
		[SerializeField]
		private HorizontalScrollSnap _pageScroll;

        [SerializeField]
        private TextMeshProUGUI _headerText;

		[SerializeField]
		private DepositSelectPageView _depositSelectPage;
		[SerializeField]
		private CreditCardPageView _creditCardPage;
		[SerializeField]
		private BillingAddressPageView _billingInfoPage;
		[SerializeField]
		private DepositConfirmPageView _depositConfirmPage;

        [SerializeField]
        private GameObject _partiallyIllegalStatePopup;
        [SerializeField]
        private Button _depositConfirmButton;
        [SerializeField]
        private Button _depositConfirmCloseButton;
        [SerializeField]
        private TextMeshProUGUI _illegalStateMessage;

        private string _illegalStatetext = "";

		[HideInInspector]
		public GetDepositConfigDataSuccessEvent.DepositAmount _selectedDepositAmount;
		[HideInInspector]
		public DepositManager.DepositWithNewCardData newCardData;
		[HideInInspector]
		public int? ccID;

		public GetDepositConfigDataSuccessEvent _data;

		private bool _isNewCard = false;
		private bool _cardGamesAllowed = false; // Steve will use this later to do confirmation popups at the end of the flow
		private bool _allTournamentsAllowed = false;  // Steve will use this later to do confirmation popups at the end of the flow
        private bool _needConfirmDeposit = false;

		private int _currentPage = 0;

        private string _password = "";

        private const int DEPOSIT_SELECT_PAGE = 0;
		private const int CREDIT_CARD_INFO_PAGE = 1;
		private const int BILLING_INFO_PAGE = 2;
		private const int DEPOSIT_CONFIRM_FIRST_TIME_USER = 3;
		private const int DEPOSIT_CONFIRM_RETURN_USER = 1;

		protected override void OnEnable()
		{
			base.OnEnable();
			SetInitialState();
			_closeButton.onClick.AddListener(OnCloseButton);
			_backButton.onClick.AddListener(OnBackButton);
            _depositConfirmButton.onClick.AddListener(OnDepositConfirmButton);
            _depositConfirmCloseButton.onClick.AddListener(OnDepositConfirmCloseButton);

            EventDispatcher.AddListener<GetDepositConfigDataSuccessEvent>(OnDepositDataSuccess);
			EventDispatcher.AddListener<MakeDepositSuccessEvent>(OnMakeDepositSuccess);
			EventDispatcher.AddListener<GpsLocationDepositAllowedEvent>(OnValidDepositLocation);
		}

		protected override void OnDisable()
		{
			base.OnDisable();

			_closeButton.onClick.RemoveListener(OnCloseButton);
			_backButton.onClick.RemoveListener(OnBackButton);
            _depositConfirmButton.onClick.RemoveListener(OnDepositConfirmButton);
            _depositConfirmCloseButton.onClick.RemoveListener(OnDepositConfirmCloseButton);

            EventDispatcher.RemoveListener<GetDepositConfigDataSuccessEvent>(OnDepositDataSuccess);
			EventDispatcher.RemoveListener<MakeDepositSuccessEvent>(OnMakeDepositSuccess);
			EventDispatcher.RemoveListener<GpsLocationDepositAllowedEvent>(OnValidDepositLocation);
		}

		private void SetInitialState()
		{
			_selectedDepositAmount = new GetDepositConfigDataSuccessEvent.DepositAmount();
			newCardData = new DepositManager.DepositWithNewCardData();
			ccID = null;
			_data = null;
			_isNewCard = false;
			_currentPage = 0;
			ChangeDepositPage(DEPOSIT_SELECT_PAGE);
            _needConfirmDeposit = false;
            _allTournamentsAllowed = false;
            _cardGamesAllowed = false;
			_partiallyIllegalStatePopup.SetActive(false);
            _headerText.text = StringTable.Instance.GetEntry(CategoryDeposit.DepositSelectHeader);
        }

		protected override void OnFetchPopupBeginEvent(IEvent e)
		{
			GsnDebug.Log("fetch occuring");
			if (((FetchPopupBeginEvent)e).type == PopupType.Deposit)
			{
				GsnDebug.Log("fetch deposit");
				ShowActivityIndicator();
			}
		}

		protected override void OnFetchPopupCompleteEvent(IEvent e)
		{
			if (((FetchPopupCompleteEvent)e).type == PopupType.Deposit)
			{
				HideActivityIndicator();
			}
		}

		private void OnDepositDataSuccess(IEvent e)
		{
			GetDepositConfigDataSuccessEvent data = (GetDepositConfigDataSuccessEvent)e;
			_data = data;
            _depositSelectPage.UpdateDepositAmounts(data.depositAmounts, _data);

			_billingInfoPage.UpdateLocationData(data.countries, data.states, data.provinces);

			_isNewCard = !data.hasCard;
			ccID = data.lastCardUsedID;
			newCardData = new DepositManager.DepositWithNewCardData();

			if (_isNewCard)
				SetAddCreditCardpages();
			else
				SetReturnUserPages();

			ChangeDepositPage(DEPOSIT_SELECT_PAGE);
		}

		private void OnMakeDepositSuccess(IEvent e)
		{
			//TODO: Add doobers and success stuff
			Hide();
		}

		private void SetReturnUserPages()
		{
			_creditCardPage.gameObject.SetActive(false);
			_billingInfoPage.gameObject.SetActive(false);

			_depositConfirmPage.SetData(true);
			_pageScroll.Init();
		}

		private void SetAddCreditCardpages()
		{
			_isNewCard = true;
			_creditCardPage.gameObject.SetActive(true);
			_billingInfoPage.gameObject.SetActive(true);
			_pageScroll.Init();
		}

		private void OnCloseButton()
		{
			OnHide();
		}

		private void OnBackButton()
		{
			ChangeDepositPage(_currentPage - 1);
		}

		private void ChangeDepositPage(int pageIndex)
		{
			_currentPage = pageIndex;
			if (pageIndex < 0)
				_currentPage = 0;

			_pageScroll.SetCurrentPage(_currentPage);

            if (pageIndex == DEPOSIT_SELECT_PAGE)
            {
                _backButton.gameObject.SetActive(false);
                _headerText.text = StringTable.Instance.GetEntry(CategoryDeposit.DepositSelectHeader);
            }
            else if (pageIndex == CREDIT_CARD_INFO_PAGE)
            {
                if (_isNewCard)
                    _headerText.text = StringTable.Instance.GetEntry(CategoryDeposit.EnterCreditCardHeader);
                else
                    _headerText.text = StringTable.Instance.GetEntry(CategoryDeposit.ConfirmHeader);
            }
            else if (pageIndex == BILLING_INFO_PAGE)
            {
                _headerText.text = StringTable.Instance.GetEntry(CategoryDeposit.EnterAddressHeader);
            }
            else if (pageIndex == DEPOSIT_CONFIRM_FIRST_TIME_USER)
            {
                _headerText.text = StringTable.Instance.GetEntry(CategoryDeposit.NewCardConfirmHeader);
            }
		}

		public void OnDepositAmountSelected(GetDepositConfigDataSuccessEvent.DepositAmount amount)
		{
			_selectedDepositAmount = amount;

			// validate the deposit location
			// if successful, the GpsLocationDepositAllowedEvent will trigger
			controller.ValidateDepositLocation();
		}

        private void OnValidDepositLocation(IEvent e)
        {
            newCardData.amount = (int)_selectedDepositAmount.baseAmount;
            _cardGamesAllowed = ((GpsLocationDepositAllowedEvent)e).cardGamesAllowed;
            _allTournamentsAllowed = ((GpsLocationDepositAllowedEvent)e).allTournamentsAllowed;

            int nextPage = CREDIT_CARD_INFO_PAGE;
            _headerText.text = StringTable.Instance.GetEntry(CategoryDeposit.EnterCreditCardHeader);
            if (!_isNewCard)
            {
                nextPage = DEPOSIT_CONFIRM_RETURN_USER;
                _depositConfirmPage.SetData(true);
            }

            ChangeDepositPage(nextPage);
            _backButton.gameObject.SetActive(true);

            if (!_cardGamesAllowed)
            {
                _illegalStatetext = StringTable.Instance.GetEntry(CategoryTournament.ErrorUnauthorizedGameCategory);
                _needConfirmDeposit = true;
            }

            if (!_allTournamentsAllowed)
            { 
                _illegalStatetext = StringTable.Instance.GetEntry(CategoryTournament.ErrorUnauthorizedTournamentFlavor);
                _needConfirmDeposit = true;
            }
        }

		public void OnCreditCardInfoEntered(string ccNumber, string expMonth, string expYear, string cvn)
		{
			newCardData.ccNumber = ccNumber;
			newCardData.expMonth = expMonth;
			newCardData.expYear = expYear;
			newCardData.ccv = cvn;

            _depositConfirmPage.SetCreditCardInfoUpdated();

			ChangeDepositPage(BILLING_INFO_PAGE);
		}

		public void OnBillingInfoEntered(string firstName, string lastName, string address1, string address2, string city, string state, string country, string zip)
		{
			newCardData.firstName = firstName;
			newCardData.lastName = lastName;
			newCardData.address1 = address1;
			newCardData.address2 = address2;
			newCardData.city = city;
			newCardData.state = state;
			newCardData.country = country;
			newCardData.zip = zip;

			_depositConfirmPage.SetData(false);
			ChangeDepositPage(DEPOSIT_CONFIRM_FIRST_TIME_USER);
		}

		private void MakeDepositWithNewCard()
		{
			controller.MakeDepositWithNewCard(newCardData);
		}

		private void MakeDepositWithExistingCard(string password)
		{
			controller.MakeDepositWithExistingCard(newCardData.amount, ccID.Value, password);
		}

		public void MakeDeposit(string password = "")
		{
            _password = password;
            if (_needConfirmDeposit)
            {
                _partiallyIllegalStatePopup.SetActive(true);
                _illegalStateMessage.text = _illegalStatetext;
                LayoutRebuilder.ForceRebuildLayoutImmediate(_illegalStateMessage.rectTransform); // This forces the layout to adjust to the size of the text
                return;
            }

			if (_isNewCard)
				MakeDepositWithNewCard();
			else
				MakeDepositWithExistingCard(_password);
		}

        private void OnDepositConfirmButton()
        {
            _needConfirmDeposit = false;
            MakeDeposit(_password);
        }

        private void OnDepositConfirmCloseButton()
        {
            _partiallyIllegalStatePopup.SetActive(false);
        }

        public void AddNewCard()
		{
			newCardData = new DepositManager.DepositWithNewCardData();
			SetAddCreditCardpages();
			ChangeDepositPage(CREDIT_CARD_INFO_PAGE);
		}

		public void EditNewCard()
		{
			SetAddCreditCardpages();
			ChangeDepositPage(CREDIT_CARD_INFO_PAGE);
		}

		public void ChangeActiveCard(int cardID)
		{
			ccID = cardID;
		}

		public void EditBillingInfo()
		{
			ChangeDepositPage(BILLING_INFO_PAGE);

		}

		public void EditDepositAmouunt()
		{
			ChangeDepositPage(DEPOSIT_SELECT_PAGE);
		}
	}
}