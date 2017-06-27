using GSN.Skill.Phoenix.View.Pool;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System;

namespace GSN.Skill.Phoenix.View
{
	public class BillingAddressPageView : ScreenView
	{
        [SerializeField]
        private GsnInputField _firstName;
        [SerializeField]
        private GsnInputField _lastName;
        [SerializeField]
        private GsnInputField _address1;
        [SerializeField]
        private GsnInputField _address2;
        [SerializeField]
        private GsnInputField _city;
		[SerializeField]
		private GsnPickerField _state;
		[SerializeField]
		private GsnPickerField _country;

        [SerializeField]
        private GsnInputField _zip;

        [SerializeField]
        private Button _nextButton;

        [SerializeField]
		private DepositPopupView _depositPopupView;

		private List<string> _validCountries = new List<string>();
		private List<string> _validStates = new List<string>();
		private List<string> _validProvinces = new List<string>();

        protected override void OnEnable()
        {
            _nextButton.interactable = false;
            _nextButton.onClick.AddListener(OnNextButton);

			_firstName.validateHandler += CheckValidInput;
			_lastName.validateHandler += CheckValidInput;
			_address1.validateHandler += CheckValidInput;
			_address2.validateHandler += CheckValidInput;
			_city.validateHandler += CheckValidInput;
			_zip.validateHandler += CheckValidInput;
			_country.validateHandler += OnCountryChanged;
			_state.validateHandler += CheckValidInput;

            SetInitialState();
        }

        protected override void OnDisable()
        {
            _nextButton.onClick.RemoveListener(OnNextButton);

			_firstName.validateHandler -= CheckValidInput;
			_lastName.validateHandler -= CheckValidInput;
			_address1.validateHandler -= CheckValidInput;
			_address2.validateHandler -= CheckValidInput;
			_city.validateHandler -= CheckValidInput;
			_zip.validateHandler -= CheckValidInput;
			_country.validateHandler -= OnCountryChanged;
			_state.validateHandler -= CheckValidInput;
        }

        private void SetInitialState()
        {
			_firstName.SetFieldText("");
			_lastName.SetFieldText("");
			_address1.SetFieldText("");
			_address2.SetFieldText("");
			_city.SetFieldText("");
			_zip.SetFieldText("");
        }

		public void UpdateLocationData(Dictionary<string,string> countries,
		                               SortedDictionary<string,string> states,
		                               SortedDictionary<string,string> provinces)
		{
			// Initialize country picker.
			_validCountries = new List<string> (countries.Keys);
			_country.SetPickerRowData(_validCountries);

			// Initialize state/province picker.
			_validStates = new List<string> (states.Keys);
			_validProvinces = new List<string> (provinces.Keys);
			UpdatePickerLists();
		}

		private void UpdatePickerLists()
		{
			// NOTE: The "ConfigRequestData" object that provides the list of countries, states, & provinces doesn't
			// actually provide the relationship of country=>what list to use. So, for now, this code will make the
			// assumption of: US=>List of states, CA=>List of provinces.
			if (_country.GetFieldText() == "CA")
			{
				_state.SetPickerRowData(_validProvinces);
			}
			else
			{
				_state.SetPickerRowData(_validStates);
			}
		}

		private void OnCountryChanged()
		{
			UpdatePickerLists();
			CheckValidInput();
		}

		private void CheckValidInput()
		{
			_nextButton.interactable = HasAllRequiredInput();
		}

        private bool HasAllRequiredInput()
        {
            // NOTE[Doug]: Address 2 is a completely optional field that is "valid" even if it contains
            // empty string. Unfortunately, our GsnInputField objects default to "valid = false", so if
            // we check address 2 here and the player hasn't tried to edit address 2, the "next" button
            // will be greyed-out until the user finally clicks in the address 2 field to force a
            // validity update! We could force an initial validity check, and make it "quiet" so we don't
            // immediately trigger all of the error messages above every field. However, in situations where
            // we have two fields that share the same InputFieldType because we want the error messaging
            // directed to both fields as one message (such as credit card expiration month & year), the
            // second of those fields that Unity enables is going to send out its validity check but both
            // components will handle it. So if we try to hold back the error popup for the first validity
            // check, one of the two fields that share the same inputFieldType is going to get a second
            // validity check match (because we match on InputFieldType) and will have its error popup fire
            // off. To fix that issue, we'd need the error messaging to at least include a GUID for the
            // intended target other than just the InputFieldType (such as gameObject.GetInstanceID().)
			if (!_firstName.IsValid() ||
			    !_lastName.IsValid() ||
			    !_address1.IsValid() ||
			    !_city.IsValid() ||
			    !_state.IsValid() ||
			    !_country.IsValid() ||
			    !_zip.IsValid())
			{
				return false;
			}
            return true;
        }

        private void OnNextButton()
        {
			_depositPopupView.OnBillingInfoEntered(_firstName.GetFieldText(),
			                                       _lastName.GetFieldText(),
			                                       _address1.GetFieldText(),
			                                       _address2.GetFieldText(),
			                                       _city.GetFieldText(),
			                                       _state.GetFieldText(),
			                                       _country.GetFieldText(),
			                                       _zip.GetFieldText());
        }
	}
}