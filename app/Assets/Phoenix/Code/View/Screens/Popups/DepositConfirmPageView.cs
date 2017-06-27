﻿using UnityEngine;
using UnityEngine.UI;
using TMPro;
using GSN.Skill.Phoenix.Strings;
using System;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Phoenix.View.Pool;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.View
{
	public class DepositConfirmPageView : ScreenView
	{
		[SerializeField]
		private TextMeshProUGUI _depositAmount;
		[SerializeField]
		private TextMeshProUGUI _bonusAmount;
		[SerializeField]
		private TextMeshProUGUI _addressInfo;
		[SerializeField]
		private GsnInputField _password;

		[SerializeField]
		private Transform _creditCardList;

        //[SerializeField]
        //private GameObject _creditCardPanel;
		[SerializeField]
		private GameObject _addressPanel;
		[SerializeField]
		private GameObject _passwordPanel;

        //TODO[DGD]: Hide the error panel once the user has left
        [SerializeField]
        private GameObject _creditCardErrorPanel;
        [SerializeField]
        private GameObject _addressErrorPanel;

		[SerializeField]
		private Button _editDepositAmount;
		[SerializeField]
		private Button _editBillingInfo;

		[SerializeField]
		private Button _confirmButton;

		[SerializeField]
		private DepositPopupView _depositPopupView;

		private const string CREDIT_CARD_PREVIEW_INFO = "CREDIT_CARD_PREVIEW_INFO";
		private const string BILLING_ADDRESS_PREVIEW_INFO = "BILLING_ADDRESS_PREVIEW_INFO";
		private const int LAST_FOUR_DIGITS_CREDIT_CARD = 4;

		private const string CREDIT_CARD_TILE = "PANEL_CreditCard";
        private const string SAVED_CREDIT_CARD_TILE = "PANEL_CreditCard_Saved";
		private const string ADD_NEW_CARD_TILE = "PANEL_AddNewCard";

		protected override void OnEnable()
		{
			_confirmButton.onClick.AddListener(OnConfirmButton);
			_editDepositAmount.onClick.AddListener(OnEditDepositAmount);
			_editBillingInfo.onClick.AddListener(OnEditBillingInfo);
            _password.validateHandler += CheckValidInput;

            EventDispatcher.AddListener<AddCreditCardFailEvent>(OnDepositFail);

            SetInitialState();
        }

		protected override void OnDisable()
		{
			_confirmButton.onClick.RemoveListener(OnConfirmButton);
			_password.validateHandler -= CheckValidInput;
			_editDepositAmount.onClick.RemoveListener(OnEditDepositAmount);
			_editBillingInfo.onClick.RemoveListener(OnEditBillingInfo);

            EventDispatcher.RemoveListener<AddCreditCardFailEvent>(OnDepositFail);
		}

        private void SetInitialState()
        {
            _depositAmount.text = "";
            _bonusAmount.text = "";
            _addressInfo.text = "";
            _password.SetFieldText("");
            SetBillingAddressErrorVisible(false);
            SetCreditCardErrorVisible(false);
            ClearChildrenObjects(_creditCardList);
        }

        public void SetCreditCardInfoUpdated()
        {
            SetCreditCardErrorVisible(false);
        }

        public void SetBillingInfoUpdated()
        {
            SetBillingAddressErrorVisible(false);
        }

        public void SetData(bool hasCard)
		{
			_depositAmount.text = _depositPopupView._selectedDepositAmount.baseAmount.ToString("C0");
			_bonusAmount.text = "+" + _depositPopupView._selectedDepositAmount.bonusAmount.ToString("C0") + " Bonus";

			_bonusAmount.gameObject.SetActive(_depositPopupView._selectedDepositAmount.bonusAmount > 0);

			ClearChildrenObjects(_creditCardList);
            SetBillingInfoUpdated();

			if (!hasCard)
			{
				AddNewCard(_depositPopupView.newCardData);

				_addressPanel.SetActive(true);
				_passwordPanel.SetActive(false);
				_password.SetFieldText("");
                _confirmButton.interactable = true;

				string[] addressInfo = new string[]
				{
					_depositPopupView.newCardData.firstName,
					_depositPopupView.newCardData.lastName,
					_depositPopupView.newCardData.address1,
					_depositPopupView.newCardData.city,
					_depositPopupView.newCardData.state,
					_depositPopupView.newCardData.zip
				};

				_addressInfo.text = StringTable.Instance.GetEntry(CategoryDeposit.BillingInfoPreview, addressInfo);
			}
			else
			{
				AddSavedCard(_depositPopupView._data.creditCards[_depositPopupView.ccID.Value], false);
				_addressPanel.SetActive(false);
				_passwordPanel.SetActive(true);

                _confirmButton.interactable = HasAllRequiredInputExistingCard();
			}

            LayoutRebuilder.ForceRebuildLayoutImmediate((RectTransform)_creditCardList);
		}

		private void AddNewCard(DepositManager.DepositWithNewCardData cardData)
		{
			string ccNum = cardData.ccNumber;
			if (ccNum.Length > LAST_FOUR_DIGITS_CREDIT_CARD)
				ccNum = ccNum.Substring(ccNum.Length - LAST_FOUR_DIGITS_CREDIT_CARD);

			string ccInfo = StringTable.Instance.GetEntry(CategoryDeposit.CreditCardInfoPreview, ccNum, cardData.expMonth, cardData.expYear);
			string editText = StringTable.Instance.GetEntry(CategoryDeposit.EditCard);

			CreditCardTile tile = GameObjectPoolManager.Instance.GetObject<CreditCardTile>(CREDIT_CARD_TILE);
			tile.transform.SetParent(_creditCardList, false);
			tile.SetCardInfo(ccInfo, editText, OnEditCreditCard, -1);
		}

		private void AddSavedCard(CreditCardDetails card, bool changingCard)
		{
			string ccNum = card.last4;

			string ccInfo = StringTable.Instance.GetEntry(CategoryDeposit.CreditCardInfoPreview, ccNum, card.expMonth, card.expYear);

            string cardResource = SAVED_CREDIT_CARD_TILE;
            if (!changingCard)
            {
                cardResource = CREDIT_CARD_TILE;
            }

			CreditCardTile tile = GameObjectPoolManager.Instance.GetObject<CreditCardTile>(cardResource);
			tile.transform.SetParent(_creditCardList, false);

			string selectText = StringTable.Instance.GetEntry(CategoryDeposit.SelectCard);
			string changeText = StringTable.Instance.GetEntry(CategoryDeposit.ChangeCard);

			if (changingCard)
				tile.SetCardInfo(ccInfo, selectText, OnSelectOldCard, card.id);
			else
				tile.SetCardInfo(ccInfo, changeText, OnChangeCreditCard, card.id);
		}

		private void AddNewCardButton()
		{ 
			AddNewCardTile tile = GameObjectPoolManager.Instance.GetObject<AddNewCardTile>(ADD_NEW_CARD_TILE);
			tile.transform.SetParent(_creditCardList, false);
			tile.SetButtonAction(OnAddNewCreditCard);
		}

		private void CheckValidInput()
		{
            UpdateConfirmButtonState();
		}

        private void UpdateConfirmButtonState()
        {
            // If the user had picked an existing card, then they just have to enter a password.
            // Otherwise, the confirm button's state is contigent on data filled in a couple of
            // information panels for new credit card data.
            if (_passwordPanel.activeSelf)
            {
                _confirmButton.interactable = HasAllRequiredInputExistingCard();
            }
            else
            {
                _confirmButton.interactable = HasAllRequiredInputNewCard();
            }
        }

		private bool HasAllRequiredInputNewCard()
		{
            if (!IsCreditCardErrorVisible() ||
                !IsBillingAddressErrorVisible())
            {
                return false;
            }
			return true;
		}

        private bool HasAllRequiredInputExistingCard()
        {
            return _password.IsValid();
        }

		private void OnEditDepositAmount()
		{
			_depositPopupView.EditDepositAmouunt();
		}

		public void OnEditCreditCard(int cardId = -1)
		{
			_depositPopupView.EditNewCard();
		}

		public void OnAddNewCreditCard()
		{
			_depositPopupView.EditNewCard();
		}

		public void OnSelectOldCard(int cardId)
		{
			_depositPopupView.ChangeActiveCard(cardId);
			ClearChildrenObjects(_creditCardList);
			AddSavedCard(_depositPopupView._data.creditCards[_depositPopupView.ccID.Value], false);

            LayoutRebuilder.ForceRebuildLayoutImmediate((RectTransform)_creditCardList);
		}

		public void OnChangeCreditCard(int cardId)
		{
			ClearChildrenObjects(_creditCardList);
			AddSavedCard(_depositPopupView._data.creditCards[_depositPopupView.ccID.Value], true);
			AddNewCardButton();

			Dictionary<int, CreditCardDetails> creditCards = _depositPopupView._data.creditCards;
			                 
			foreach(KeyValuePair<int, CreditCardDetails> card in creditCards)
			{
				if (card.Key != _depositPopupView.ccID.Value)
				{
					AddSavedCard(card.Value, true);
				}
			}

            LayoutRebuilder.ForceRebuildLayoutImmediate((RectTransform)_creditCardList);
		}

		private void OnEditBillingInfo()
		{
			_depositPopupView.EditBillingInfo();
		}

		private void OnConfirmButton()
		{
			_depositPopupView.MakeDeposit(_password.GetFieldText());
		}

        private void SetCreditCardErrorVisible(bool showError)
        {
            if (_creditCardErrorPanel)
            {
                _creditCardErrorPanel.SetActive(showError);
            }
        }

        private bool IsCreditCardErrorVisible()
        {
            if (_creditCardErrorPanel)
            {
                return _creditCardErrorPanel.activeSelf;
            }
            return false;
        }

        private void SetBillingAddressErrorVisible(bool showError)
        {
            if (_addressErrorPanel)
            {
                _addressErrorPanel.SetActive(showError);
            }
        }

        private bool IsBillingAddressErrorVisible()
        {
            if (_addressErrorPanel)
            {
                return _addressErrorPanel.activeSelf;
            }
            return false;
        }

        private void OnDepositFail(IEvent e)
        {
            GsnDebug.Log("Deposit failed!");

            AddCreditCardFailEvent depositFailEvent = (AddCreditCardFailEvent)e;
            foreach(ErrorTranslation thisError in depositFailEvent.allErrors)
            {
                //GsnDebug.Log("[DepositConfirmationPage][Error to report!][Input field:" + thisError.inputField.ToString() +
                //             "] msg = '" + thisError.message + "'.");

                switch (thisError.inputField)
                {
                    case InputFieldType.CreditCard:
                    case InputFieldType.ExpirationDate:
                    case InputFieldType.CVN:
                        //GsnDebug.Log("[DepositConfirmationPage] SHOW CREDIT CARD PANEL ERROR!");
                        SetCreditCardErrorVisible(true);
                        break;

                    case InputFieldType.FirstName:
                    case InputFieldType.LastName:
                    case InputFieldType.Country:
                    case InputFieldType.Address:
                    case InputFieldType.City:
                    case InputFieldType.State:
                    case InputFieldType.ZIP:
                        //GsnDebug.Log("[DepositConfirmationPage] SHOW ADDRESS PANEL ERROR!");
                        SetBillingAddressErrorVisible(true);
                        break;
                }
            }
            UpdateConfirmButtonState();
        }
	}
}