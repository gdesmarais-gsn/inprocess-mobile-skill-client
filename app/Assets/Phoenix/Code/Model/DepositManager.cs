using GSN.Skill.Phoenix.Model.Data;
using System.Collections.Generic;
using GSN.Skill.Events;
using System.Text.RegularExpressions;
using GSN.Skill.Requests;
using GSN.Skill.Phoenix.Model.Popups;
using GSN.Skill.Phoenix.Strings;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.Model
{
	public class DepositManager
	{
		private LocationManager _locationManager;
		private CurrentUser _currentUser;
		private DepositPopupModel _depositPopup;
        private int _lastDepositRequestAmount = 0;

		public struct DepositWithNewCardData
		{
			public int amount;
			public string address1;
			public string city;
			public string country;
			public string state;
			public string zip;
			public string ccv;
			public string expMonth;
			public string expYear;
			public string ccNumber;
			public string firstName;
			public string lastName;
			public string password;
			public string address2;
		}

		public DepositManager(LocationManager locationManager, CurrentUser currentUser)
		{
			_locationManager = locationManager;
			_currentUser = currentUser;

		}
		#region Public Functions

		public void ShowDeposit()
		{
			if (_depositPopup == null)
			{
				_depositPopup = new DepositPopupModel(_currentUser);
				// Add a listener for user logout.  We want to clear the _depositPopup when we detect a logout has happened.
				EventDispatcher.AddListener<LogoutSuccessfulEvent>(OnUserLogout);
			}

			PopupManager.Instance.SetPopup(_depositPopup);
		}

		public void ValidateDepositLocation()
		{
			_locationManager.ValidateLocation(OnValidateLocationSuccess, OnValidateLocationFail);
		}

		public void MakeDepositWithExistingCard(int amount, int ccID, string password)
		{
			// Register for success and fail callbacks;
			RequestManager.Instance.makeDeposit.OnCompleteHandler += OnDepositSuccess;
			RequestManager.Instance.makeDeposit.OnFailHandler += OnDepositFail;
			RequestManager.Instance.makeDeposit.OnBeginHandler += OnDepositBegin;
			RequestManager.Instance.makeDeposit.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.makeDeposit.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.makeDeposit.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			// Set required data
			RequestManager.Instance.makeDeposit.amount = amount;
			RequestManager.Instance.makeDeposit.creditCardID = ccID;
			RequestManager.Instance.makeDeposit.password = password;

            _lastDepositRequestAmount = amount;

			// Make the call
			WebRequester.Instance.FetchRequest(RequestManager.Instance.makeDeposit);
		}
		public void MakeDepositWithNewCard(DepositWithNewCardData data)
		{
			// Register for success and fail callbacks.
			RequestManager.Instance.addCreditCard.OnCompleteHandler += OnAddCreditCardSuccess;
			RequestManager.Instance.addCreditCard.OnFailHandler += OnAddCreditCardFail;
			RequestManager.Instance.addCreditCard.OnBeginHandler += OnAddCreditCardBegin;
			RequestManager.Instance.addCreditCard.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.addCreditCard.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.addCreditCard.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			// Set all the required data
			RequestManager.Instance.addCreditCard.amount = data.amount;
			RequestManager.Instance.addCreditCard.address1 = data.address1;
			RequestManager.Instance.addCreditCard.city = data.city;
			RequestManager.Instance.addCreditCard.country = data.country;
			RequestManager.Instance.addCreditCard.state = data.state;
			RequestManager.Instance.addCreditCard.zip = data.zip;
			RequestManager.Instance.addCreditCard.ccv = data.ccv;
			RequestManager.Instance.addCreditCard.expirationMonth = data.expMonth;
			RequestManager.Instance.addCreditCard.expirationYear = data.expYear;
			RequestManager.Instance.addCreditCard.ccNumber = data.ccNumber;

            _lastDepositRequestAmount = data.amount;

            // Set the optional data
            RequestManager.Instance.addCreditCard.password = data.password;
			RequestManager.Instance.addCreditCard.firstName = data.firstName;
			RequestManager.Instance.addCreditCard.lastName = data.lastName;
			RequestManager.Instance.addCreditCard.address2 = data.address2;

			// Make the call;
			WebRequester.Instance.FetchRequest(RequestManager.Instance.addCreditCard);
		}

		#endregion

		#region Geolocation Callbacks

		private void OnValidateLocationSuccess()
		{
			EventDispatcher.DispatchEvent(new GpsLocationDepositAllowedEvent(_locationManager.areCardGamesAllowed().Value,_locationManager.areAllTournTypesAllowed().Value));
		}

		private void OnValidateLocationFail(LocationFailReason reason)
		{
			switch (reason)
			{
				case LocationFailReason.StateFullyIllegal:
					ErrorManager.Instance.HandleUserError(ErrorType.Gps, StringTable.Instance.GetEntry(CategoryTournament.ErrorUnauthorizedDeposit));
					break;
			}
		}

		#endregion

		/// <summary>
		/// OnUserLogout is called when the user logs out.  We need to clear the _depositPopup to clear out all the user data.
		/// </summary>
		/// <param name="e">IEvent</param>
		private void OnUserLogout(IEvent e)
		{
			_depositPopup = null;
			EventDispatcher.RemoveListener<LogoutSuccessfulEvent>(OnUserLogout);
		}

		#region Web Callbacks
		private void OnDepositBegin(IWebRequest request)
		{
			EventDispatcher.DispatchEvent(new MakeDepositBeginEvent());
		}

		private void OnDepositSuccess(IWebRequest request)
		{
			RequestManager.Instance.makeDeposit.OnCompleteHandler -= OnDepositSuccess;
			RequestManager.Instance.makeDeposit.OnFailHandler -= OnDepositFail;
			RequestManager.Instance.makeDeposit.OnBeginHandler -= OnDepositBegin;
			RequestManager.Instance.makeDeposit.OnBeginHandler -= GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.makeDeposit.OnCompleteHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.makeDeposit.OnFailHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			// Set the deposit Popup to null so next time we get all our config data fresh;
			_depositPopup = null;

            EventDispatcher.DispatchEvent(new MakeDepositSuccessEvent(_currentUser.userID, _lastDepositRequestAmount));

            UpdateLastUsedCardData();
		}
		private void OnDepositFail(IWebRequest request)
		{
            GsnDebug.Log("[DepositManager] ON DEPOSIT FAIL Message received!");
			RequestManager.Instance.makeDeposit.OnCompleteHandler -= OnDepositSuccess;
			RequestManager.Instance.makeDeposit.OnFailHandler -= OnDepositFail;
			RequestManager.Instance.makeDeposit.OnBeginHandler -= OnDepositBegin;
			RequestManager.Instance.makeDeposit.OnBeginHandler -= GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.makeDeposit.OnCompleteHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.makeDeposit.OnFailHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			EventDispatcher.DispatchEvent(new MakeDepositFailEvent());
			ErrorManager.Instance.HandleWebRequestError(ErrorType.RestPayment, request);
		}
		private void OnAddCreditCardBegin(IWebRequest request)
		{
			EventDispatcher.DispatchEvent(new AddCreditCardBeginEvent());
		}
		private void OnAddCreditCardSuccess(IWebRequest request)
		{
			RequestManager.Instance.addCreditCard.OnCompleteHandler -= OnAddCreditCardSuccess;
			RequestManager.Instance.addCreditCard.OnFailHandler -= OnAddCreditCardFail;
			RequestManager.Instance.addCreditCard.OnBeginHandler -= OnAddCreditCardBegin;
			RequestManager.Instance.addCreditCard.OnBeginHandler -= GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.addCreditCard.OnCompleteHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.addCreditCard.OnFailHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			// Set the deposit Popup to null so next time we get all our config data fresh;
			_depositPopup = null;
            EventDispatcher.DispatchEvent(new MakeDepositSuccessEvent(_currentUser.userID, _lastDepositRequestAmount));

            UpdateLastUsedCardData();
		}

		private void OnAddCreditCardFail(IWebRequest request)
		{
            GsnDebug.Log("[DepositManager] CREDIT CARD FAIL web request returned!");

			RequestManager.Instance.addCreditCard.OnCompleteHandler -= OnAddCreditCardSuccess;
			RequestManager.Instance.addCreditCard.OnFailHandler -= OnAddCreditCardFail;
			RequestManager.Instance.addCreditCard.OnBeginHandler -= OnAddCreditCardBegin;
			RequestManager.Instance.addCreditCard.OnBeginHandler -= GlobalFetchEventNotifier.OnBeginFetch;
			RequestManager.Instance.addCreditCard.OnCompleteHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			RequestManager.Instance.addCreditCard.OnFailHandler -= GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			// Parse errors and get all error types. Send these to the view. (DepositConfirmPageView is intended target.)
			AddCreditCardFailEvent newCCFailEvent = new AddCreditCardFailEvent();
			newCCFailEvent.allErrors = new List<ErrorTranslation>();
			ErrorManager.Instance.GetAllErrorTranslations(request.error.errors, ref newCCFailEvent.allErrors);

			if (newCCFailEvent.allErrors.Count == 0)
			{
				ErrorManager.Instance.HandleWebRequestError(ErrorType.RestPayment, request);
			}
			else if (newCCFailEvent.allErrors.Count == 1 && newCCFailEvent.allErrors[0].inputField == InputFieldType.None)
			{
				// we have an error that we need to display an error popup for
				ErrorManager.Instance.HandleUserError(ErrorType.RestPayment, newCCFailEvent.allErrors[0].message);
			}
			else
			{
				for (int i = 0; i < newCCFailEvent.allErrors.Count; ++i)
				{
					//GsnDebug.Log("[DepositManager][ErrorTranslation][" + i + "][Input field:" + newCCFailEvent.allErrors[i].inputField.ToString() +
					//             "] msg = '" + newCCFailEvent.allErrors[i].message + "'.");
					EventDispatcher.DispatchEvent(new HandledInputErrorEvent(newCCFailEvent.allErrors[i]));
				}
				
				EventDispatcher.DispatchEvent(newCCFailEvent);
			}
		}

		#endregion

		private void UpdateLastUsedCardData()
		{
			// Quietly ask for the full user object again so we get up to date player info with all the new card data.
			RequestManager.Instance.getPlayerInfo.Username = _currentUser.username;
			WebRequester.Instance.FetchRequest(RequestManager.Instance.getPlayerInfo);
		}
	}
}