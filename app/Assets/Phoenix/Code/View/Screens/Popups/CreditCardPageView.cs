using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections.Generic;

// TODO[Doug]: Remove these two references once the KLUDGE for the client month/year validation in this file had been replaced with a proper fix.
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Strings;
//

namespace GSN.Skill.Phoenix.View
{
	public class CreditCardPageView : ScreenView
	{
		[SerializeField]
		private GsnInputField _creditCardNumber;
        [SerializeField]
		private GsnPickerField _expMonth;
        [SerializeField]
		private GsnPickerField _expYear;
        [SerializeField]
        private GsnInputField _cvn;

		[SerializeField]
        private Button _playerServicesButton;
        [SerializeField]
        private Button _nextButton;

	    [SerializeField]
		private DepositPopupView _depositPopupView;

		private const int STARTING_MONTH = 1;
		private const int NUM_MONTHS = 12;
		private const int NUM_EXP_YEARS = 15;

		// NOTE: Part of KLUDGE to fix month/year validation for now.
		private bool forceFailExpirationDateOnNextUpdate = false;

        protected override void OnEnable()
        {
			_nextButton.interactable = false;

			_nextButton.onClick.AddListener(OnNextButton);
            _playerServicesButton.onClick.AddListener(OnPlayerServicesButton);

            _creditCardNumber.validateHandler += CheckValidInput;
			_cvn.validateHandler += CheckValidInput;

			// =========================
			// KLUDGE: Once Kludge for Month/Year is fixed, these validateHandlers should go back to just calling "CheckValidInput."
			_expMonth.validateHandler += CheckExpDateValidInput;
			_expYear.validateHandler += CheckExpDateValidInput;
			// =========================

            // Updates to one part of the date may clear the error over the other field.
            _expMonth.SetRevalidateOnVisibleErrorTarget(_expYear);
            _expYear.SetRevalidateOnVisibleErrorTarget(_expMonth);

			SetInitialState();

			HasAllRequiredInput();
	    }

        protected override void OnDisable()
        {
			_nextButton.onClick.RemoveListener(OnNextButton);
            _playerServicesButton.onClick.RemoveListener(OnPlayerServicesButton);

            _creditCardNumber.validateHandler -= CheckValidInput;
			_expMonth.validateHandler -= CheckValidInput;
			_expYear.validateHandler -= CheckValidInput;
			_cvn.validateHandler -= CheckValidInput;
	    }

	    private void SetInitialState()
	    {
			_creditCardNumber.SetFieldText(string.Empty);
			_cvn.SetFieldText(string.Empty);

			DateTime currentDate = DateTime.Now;

			// Feed in valid month range.
			List<string> monthEntries = new List<string>();
			GSNPicker.GeneratePickerListForNumberRange(ref monthEntries, STARTING_MONTH, NUM_MONTHS);
			_expMonth.SetPickerRowData(monthEntries, (currentDate.Month - 1));

			// Feed in valid year range.
			List<string> yearEntries = new List<string>();
			GSNPicker.GeneratePickerListForNumberRange(ref yearEntries, currentDate.Year, NUM_EXP_YEARS);
			_expYear.SetPickerRowData(yearEntries);
        }

		// =========================================================================================== //
		// KLUDGE: These methods are being used to temporarily fix an issue where we need month
		// and year data to be validated together even though they are two separate fields. Post-MVP
		// Steve Haines has some UI re-working in mind to utilize a multi-column picker and that will
		// help us more cleanly deal with the month/year validation as one field.
		private void CheckExpDateValidInput()
		{
			int selectedMonth = Convert.ToInt32(_expMonth.GetFieldText());
			int selectedYear = Convert.ToInt32(_expYear.GetFieldText());

			// If the year the user has selected is the current year, then we're going to circumvent
			// FieldValidationUtilies and do our own custom checking that combines month & year.
			DateTime currentDate = DateTime.Now;
			if (selectedYear == currentDate.Year)
			{
				if (selectedMonth < currentDate.Month)
				{
					forceFailExpirationDateOnNextUpdate = true;
				}
			}
			CheckValidInput(); // NOW do the rest of the follow-up updating.
		}

		void Update()
		{
			if (forceFailExpirationDateOnNextUpdate)
			{
				EventDispatcher.DispatchEvent(new HandledInputErrorEvent(new ErrorTranslation(InputFieldType.ExpirationDate, CategoryDeposit.ErrorInvalidExpirationDate)));
				forceFailExpirationDateOnNextUpdate = false;
			}
		}
		// ====================================== End of KLUDGE ====================================== //

		private void CheckValidInput()
		{
			_nextButton.interactable = HasAllRequiredInput();
		}

        private bool HasAllRequiredInput()
        {
            if (!_creditCardNumber.IsValid() ||
			    !_expMonth.IsValid() ||
			    !_expYear.IsValid() ||
			    !_cvn.IsValid())
			{
				return false;
			}
			return true;
        }

        private void OnPlayerServicesButton()
        {
            controller.Help();
        }

        private void OnNextButton()
        {
			_depositPopupView.OnCreditCardInfoEntered(_creditCardNumber.GetFieldText(),
			                                          _expMonth.GetFieldText(),
			                                          _expYear.GetFieldText(),
			                                          _cvn.GetFieldText());
        }
	}
}