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

namespace GSN.Skill.Phoenix.Model.Popups
{
	public class DepositPopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.Deposit; } }

		private DepositManager _depositManager;
		private CurrentUser _currentUser;

		private const string COUNTRY_CODE_UNITED_STATES = "US";
		private const string COUNTRY_CODE_CANADA = "CA";
		private Dictionary<string,bool> _supportedCountries;
		private GetDepositConfigDataSuccessEvent _depositConfigData;
		private const int MAX_NUMBER_OF_DEPOSIT_AMOUNTS = 6;

		public DepositPopupModel(CurrentUser currentUser, bool refetchData = true)
		{
			_currentUser = currentUser;
			_supportedCountries = new Dictionary<string, bool>();
			_supportedCountries.Add(COUNTRY_CODE_CANADA,true);
			_supportedCountries.Add(COUNTRY_CODE_UNITED_STATES,true);
		}

		public void OnOpen()
		{
			if (_depositConfigData != null)
			{
				// We have cached config data;
				EventDispatcher.DispatchEvent(_depositConfigData);
			}
			else 
			{
				// If this is the first time showing this popup, we need to get a bunch of config info.
				// We also want to wipe this out when we make a successful deposit, or add a credit card.
				WebRequests requests = new WebRequests();

				requests.OnRequestsBeginHandler += OnDepositConfigDataBegin;
				requests.OnRequestsFailHandler += OnDepositConfigDataFail;
				requests.OnRequestsCompleteHandler += OnDepositConfigDataReady;

				requests.Enqueue(RequestManager.Instance.configData);
				requests.Enqueue(RequestManager.Instance.upgradeAmounts);
				// Figure out if we need to make another request to get the last 4 digits of the cc number based off the id.
				if (_currentUser.ccData.HasValue)
				{
					//RequestManager.Instance.creditCardInfo.creditCardID = _currentUser.ccData.Value.id;
					requests.Enqueue(RequestManager.Instance.getAllCreditCards);
				}
				WebRequester.Instance.BatchFetchRequests(requests);
			}
		}

		public void OnClose()
		{
			// handle functionality when the popup is closing
		}

		private void OnDepositConfigDataBegin(WebRequests requests)
		{
			EventDispatcher.DispatchEvent(new FetchPopupBeginEvent(type));
		}
		private void OnDepositConfigDataReady(WebRequests requests)
		{
			GsnDebug.Log("Entering OnDepositConfigDataReady");
			requests.OnRequestsBeginHandler -= OnDepositConfigDataBegin;
			requests.OnRequestsFailHandler -= OnDepositConfigDataFail;
			requests.OnRequestsCompleteHandler -= OnDepositConfigDataReady;
			EventDispatcher.DispatchEvent(new FetchPopupCompleteEvent(type));

			if (_depositConfigData == null)
			{
				_depositConfigData = new GetDepositConfigDataSuccessEvent();
			}
			ConfigRequestData configDataRequest = (ConfigRequestData)requests.Dequeue();
			UpgradeBonusAmountRequestData bonusAmountsRequest = (UpgradeBonusAmountRequestData) requests.Dequeue();

			// Figure out if we need to make another request to get the last 4 digits of the cc number based off the id.
			BuildDepositPopupReadyEventData(configDataRequest.Response,bonusAmountsRequest.Response);
			if (_currentUser.ccData.HasValue)
			{
				GetAllCreditCardsRequestData ccData =(GetAllCreditCardsRequestData) requests.Dequeue();
				AddCreditCardDataToEvent(ccData.Response);
			}
			GsnDebug.Log("Dispatching _depositConfigData");
			EventDispatcher.DispatchEvent(_depositConfigData);
		}




		private void OnDepositConfigDataFail(WebRequests requests)
		{
			GsnDebug.Log("Entering OnDepositConfigDataFail");

			EventDispatcher.DispatchEvent(new FetchPopupCompleteEvent(type));
			requests.OnRequestsBeginHandler -= OnDepositConfigDataBegin;
			requests.OnRequestsFailHandler -= OnDepositConfigDataFail;
			requests.OnRequestsCompleteHandler -= OnDepositConfigDataReady;
			ErrorManager.Instance.HandleWebRequestsError(requests,true);
		}



		/// <summary>
		/// Builds the config event data.  Based off the multiple
		/// </summary>
		/// <param name="configData">Config data.</param>
		/// <param name="upgradeBonusData">Upgrade bonus data.</param>
		private void BuildDepositPopupReadyEventData(ConfigData configData, UpgradeBonusAmountsData upgradeBonusData)
		{
			GsnDebug.Log("Entering BuildDepositPopupReadyEventData");

			// HANDLE COUNTRIES
			// For now, I think it's a lot faster to just add the two countries we support instead of going through the whole list of countries we get back.
			// If we change deposits to support all countries in the future, lets look at this again.
			_depositConfigData.countries = new Dictionary<string, string>();
			_depositConfigData.countries.Add(COUNTRY_CODE_UNITED_STATES,configData.result.locations.Countries[COUNTRY_CODE_UNITED_STATES]);
			_depositConfigData.countries.Add(COUNTRY_CODE_CANADA,configData.result.locations.Countries[COUNTRY_CODE_CANADA]);

			_depositConfigData.states = configData.result.locations.States;
			_depositConfigData.provinces = configData.result.locations.Provinces;

			_depositConfigData.depositAmounts = new List<GetDepositConfigDataSuccessEvent.DepositAmount>();
			_depositConfigData.isPaypalUser = _currentUser.isPaypalUser;

			if (_currentUser.isGuest && _currentUser.upgradeBonusAmount != null && _currentUser.upgradeBonusAmount.Count > 0)
			{
				_depositConfigData.showFirstTimeDepositBonus = true;
				foreach (KeyValuePair<string, int> entry in upgradeBonusData.result.upgrade_bonus_amounts)
				{
					GetDepositConfigDataSuccessEvent.DepositAmount amount = new GetDepositConfigDataSuccessEvent.DepositAmount();
					amount.baseAmount = Convert.ToDecimal(entry.Key);
					amount.bonusAmount = Convert.ToDecimal(entry.Value) + Convert.ToDecimal(upgradeBonusData.result.bonus_conversion_dollars);
					_depositConfigData.depositAmounts.Add(amount);
				}
			}
			else
			{
				_depositConfigData.showFirstTimeDepositBonus = false;
				int count = 0;
				foreach (string depositStringAmount in configData.result.depositAmounts)
				{
					if (count < MAX_NUMBER_OF_DEPOSIT_AMOUNTS)
					{
						count++;
						GetDepositConfigDataSuccessEvent.DepositAmount amount = new GetDepositConfigDataSuccessEvent.DepositAmount();
						amount.baseAmount = Convert.ToDecimal(depositStringAmount);
						amount.bonusAmount =0;
						_depositConfigData.depositAmounts.Add(amount);
					}
					else 
						break;
				}
			}
		
		}
		private void AddCreditCardDataToEvent(GetAllCreditCardsData ccData)
		{
			// Check to see if this user has a card already on file
			if (_currentUser.ccData.HasValue)
			{
				try
				{
					_depositConfigData.hasCard = true;
					_depositConfigData.hasMultipleCards = _currentUser.ccData.Value.multipleCards;
					_depositConfigData.lastCardUsedID = Convert.ToInt32(_currentUser.ccData.Value.id);
					_depositConfigData.creditCards = new Dictionary<int, CreditCardDetails>();
					foreach (GetAllCreditCardsData.CreditCardInfo cc in ccData.result.cc_list)
					{
						CreditCardDetails card = new CreditCardDetails();
						card.type  = cc.type;
						card.last4 = cc.last4;
						card.expMonth  = Convert.ToInt32(cc.customer_cc_expmo);
						card.expYear = Convert.ToInt32(cc.customer_cc_expyr);
						card.id = Convert.ToInt32(cc.id);
						_depositConfigData.creditCards.Add(card.id,card);
					}
				}
				catch (Exception e)
				{
					_depositConfigData.hasCard = false;
					GsnDebug.LogError("Something went horribly wrong parsing card data for this user ", _currentUser.userID, e.ToString());
				}
			}
		}
	}
}