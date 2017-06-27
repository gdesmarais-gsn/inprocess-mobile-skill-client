using System;
using GSN.Skill.Phoenix.Strings;
using GSN.Skill.Events;
using GSN.Skill.Utils;
using System.Net.Mail;
using System.Text.RegularExpressions;

namespace GSN.Skill.Phoenix.Utils
{
	public class FieldValidationUtilities : Singleton<FieldValidationUtilities>
	{
		// Email Regex Check
		public const string EMAIL_REGEX = @"^(?!\.)(""([^""\r\\]|\\[""\r\\])*""|([-a-z0-9!#$%&'*+/=?^_`{|}~]|(?<!\.)\.)*)(?<!\.)@[a-z0-9][\w\.-]*[a-z0-9]\.[a-z][a-z\.]*[a-z]$";

		// Password Regex Checks
		public const string PASSWORD_COMPLEXITY_REGEX = "^.*(?=.{8,100})(?=.*[A-Z])(?=.*\\d)(?=.*[a-z]).*$";  // 8 - 100 chars.  1 upper, 1 lower, 1 number
		public const string PASSWORD_LENGTH_REGEX = "^.*(?=.{8,100}).*$";
		public const string PASSWORD_NUMBER_REGEX = "^.*(?=.*\\d).*$";
		public const string PASSWORD_UPPER_REGEX = "^.*(?=.*[A-Z]).*$";
		public const string PASSWORD_LOWER_REGEX = "^.*(?=.*[a-z]).*$";

		// Username Regex Checks
		public const int MIN_USERNAME_LENGTH = 3;
		public const int MAX_USERNAME_LENGTH = 32;
		public const string USERNAME_FOREIGN_CHAR_REGEX = "[^\\x20-\\x7F]";
		public const string USERNAME_ILLEGAL_CHAR_REGEX = "[^A-Za-z0-9_\\-]";

		// Zip Code Regex Checks
		public const string ZIP_CODE_US_REGEX = "^\\d{5}(?:[-\\s]\\d{4})?$";
		public const string POSTAL_CODE_CA_REGEX = "^[ABCEGHJKLMNPRSTVXY]{1}\\d{1}[A-Z]{1} *\\d{1}[A-Z]{1}\\d{1}$";

		// Credit Card Regex Check
		public const string CREDIT_CARD_REGEX = "(^5[1-5][0-9]{14})|^4[0-9]{12}(?:[0-9]{3})?$";

		// Credit Card CVN Regex Check
        // Note: Taken from: http://regexlib.com/Search.aspx?k=credit+card&AspxAutoDetectCookieSupport=1
        public const string CREDIT_CARD_CVN_REGEX = "^([0-9]{3})$";

        // NOTE: Maybe we won't need these? Just leaving month & year below for now in case we do.
        //public const string EXP_MONTH_REGEX = "^((0[1-9])|(1[0-2]))";
        //public const string EXP_YEAR_REGEX = "^\\d{4}$";

		#region public functions
		public void ValidateField(InputFieldType field, string text, bool allowEmpty = false)
		{
			Enum errorEntryKey = CategoryCommon.RequiredField;
			bool fieldIsValid = true;

			// First check to see if it is empty.
			if (!allowEmpty && string.IsNullOrEmpty(text))
			{
				fieldIsValid = false;
				errorEntryKey = CategoryCommon.RequiredField;
			}

            // Now do any input field specific checking.
			switch (field)
			{
				case InputFieldType.CreditCard:
                    fieldIsValid &= ValidateCreditCard(text, field, ref errorEntryKey);
					break;

				case InputFieldType.ZIP:
                    fieldIsValid &= ValidateZip(text, field, ref errorEntryKey);
					break;

				case InputFieldType.CVN:
                    fieldIsValid &= ValidateCVN(text, field, ref errorEntryKey);
					break;

				case InputFieldType.Email:
                    fieldIsValid &= ValidateEmail(text, field, ref errorEntryKey);
					break;

				case InputFieldType.Username:
                    fieldIsValid &= ValidateUsername(text, field, ref errorEntryKey);
					break;

				case InputFieldType.Password:
                    fieldIsValid &= ValidatePasswordComplexity(text, field, ref errorEntryKey);
					break;

				case InputFieldType.UsernameLite: // TODO: Does this need to exist? (Does !allowEmpty already handle this?)
                    fieldIsValid &= ValidateLiteUsername(text, field, ref errorEntryKey);
					break;

				case InputFieldType.PasswordLite: // TODO: Does this need to exist? (Does !allowEmpty already handle this?)
                    fieldIsValid &= ValidateLitePassword(text, field, ref errorEntryKey);
					break;

                case InputFieldType.Address: // Just not empty
                    fieldIsValid &= ValidateAddress(text, field, ref errorEntryKey);
                    break;

                case InputFieldType.City: // Just not empty
                    fieldIsValid &= ValidateCity(text, field, ref errorEntryKey);
                    break;

                case InputFieldType.FirstName: // Just not empty
                    fieldIsValid &= ValidateFirstName(text, field, ref errorEntryKey);
                    break;

                case InputFieldType.LastName: // Just not empty
                    fieldIsValid &= ValidateLastName(text, field, ref errorEntryKey);
                    break;

				case InputFieldType.WithdrawAmount:
					fieldIsValid &= ValidateWithdrawAmount(text, field, ref errorEntryKey);
					break;

				case InputFieldType.ExpirationDate: // Choices pre-filtered & provided by picker. Month & Year are two fields
                                                    // but the error-reporting handles them as one right now.                             
				case InputFieldType.State: // Choices pre-filtered & provided by picker.
				case InputFieldType.Address2: // Completely optional
				case InputFieldType.Country: // Choices pre-filtered & provided by picker.
				default:
					break; // Deliberate no-op
			}

            // Finally, do event notification based on the final validity evaluation result.
            if (fieldIsValid)
            {
                SendInputValidEvent(field);
            }
            else
            {
                SendInputErrorEvent(field, errorEntryKey);
            }
		}
		#endregion


		#region Supporting private functions that send events and do regex checks
		private void SendInputErrorEvent(InputFieldType field, Enum entryKey)
		{
			EventDispatcher.DispatchEvent(new HandledInputErrorEvent(new ErrorTranslation(field, entryKey)));
		}

		private void SendInputValidEvent(InputFieldType field)
		{
			EventDispatcher.DispatchEvent(new InputFieldValidEvent(field));
		}

		private bool IsRegexMatch(string text, string pattern, RegexOptions regexOptions = RegexOptions.None)
		{
			Match m = Regex.Match(text, pattern, regexOptions);

			return m.Success;
		}
		#endregion

		#region fieldValidationLogic

        private bool ValidateFirstName(string firstName, InputFieldType field, ref Enum errorEntryKey)
        {
            if (firstName.Length > 0)
            {
                return true;
            }

            errorEntryKey = CategoryDeposit.FirstNameRequired;
            return false;
        }

        private bool ValidateLastName(string lastName, InputFieldType field, ref Enum errorEntryKey)
        {
            if (lastName.Length > 0)
            {
                return true;
            }

            errorEntryKey = CategoryDeposit.LastNameRequired;
            return false;
        }

        private bool ValidateAddress(string address, InputFieldType field, ref Enum errorEntryKey)
        {
            if (address.Length > 0)
            {
                return true;
            }

            errorEntryKey = CategoryDeposit.AddressRequired;
            return false;
        }

        private bool ValidateCity(string city, InputFieldType field, ref Enum errorEntryKey)
        {
            if (city.Length > 0)
            {
                return true;
            }

            errorEntryKey = CategoryDeposit.CityRequired;
            return false;
        }

		private bool ValidateEmail(string email, InputFieldType field, ref Enum errorEntryKey)
		{
			if (IsRegexMatch(email, EMAIL_REGEX, RegexOptions.IgnoreCase))
			{
				return true;
			}

			errorEntryKey = CategoryRegister.EmailIncorrectFormat;
			return false;
		}

		private bool ValidatePasswordComplexity(string password, InputFieldType field, ref Enum errorEntryKey)
		{
			if (IsRegexMatch(password, PASSWORD_COMPLEXITY_REGEX))
			{
				return true;
			}

            if (!IsRegexMatch(password, PASSWORD_LENGTH_REGEX))
            {
                errorEntryKey = (password.Length < 8) ? CategoryRegister.PasswordTooShort : CategoryRegister.PasswordTooLong;
            }
            else if (!IsRegexMatch(password, PASSWORD_NUMBER_REGEX))
            {
                errorEntryKey = CategoryRegister.PasswordNoNumbers;
            }
            else if (!IsRegexMatch(password, PASSWORD_UPPER_REGEX))
            {
                errorEntryKey = CategoryRegister.PasswordNoUpperCase;
            }
            else if (!IsRegexMatch(password, PASSWORD_LOWER_REGEX))
            {
                errorEntryKey = CategoryRegister.PasswordNoLowerCase;
            }
            else
            {
                // We shouldn't really ever get here.  Just in case.
                errorEntryKey = CategoryRegister.PasswordComplexity;
            }
			return false;
		}

		private bool ValidateLitePassword(string password, InputFieldType field, ref Enum errorEntryKey)
		{
			if (password.Length > 0)
			{
				return true;
			}

			errorEntryKey = CategoryRegister.PasswordRequired;
			return false;
		}

        private bool ValidateUsername(string username, InputFieldType field, ref Enum errorEntryKey)
		{
            if (username.Length < MIN_USERNAME_LENGTH)
            {
                errorEntryKey = CategoryCommon.UsernameShort;
                return false;
            }
            else if (username.Length > MAX_USERNAME_LENGTH)
            {
                errorEntryKey = CategoryCommon.UsernameLong;
                return false;
            }
            else if (IsRegexMatch(username, USERNAME_ILLEGAL_CHAR_REGEX) || IsRegexMatch(username, USERNAME_FOREIGN_CHAR_REGEX))
            {
                errorEntryKey = CategoryCommon.UsernameInvalidChars;
                return false;
            }

            return true;
		}

        private bool ValidateLiteUsername(string username, InputFieldType field, ref Enum errorEntryKey)
		{
			if (username.Length > 0)
			{
				return true;
			}

            errorEntryKey = CategoryCommon.UsernameRequired;
            return false;
		}

        private bool ValidateCreditCard(string ccNumber, InputFieldType field, ref Enum errorEntryKey)
		{
            if (IsRegexMatch(ccNumber, CREDIT_CARD_REGEX))
            {
                return true;
            }

            errorEntryKey = CategoryDeposit.CardType;
            return false;
		}

        private bool ValidateZip(string zip, InputFieldType field, ref Enum errorEntryKey)
		{
			bool passesUSRegex = IsRegexMatch(zip, ZIP_CODE_US_REGEX);
			bool passesCARegex = IsRegexMatch(zip, POSTAL_CODE_CA_REGEX);
			//GsnDebug.Log("[FieldValidate][ZipCodes] passesUSRegex = " + passesUSRegex.ToString() +
			//			 ", passesCARegex = " + passesCARegex.ToString());
			if (passesUSRegex || passesCARegex)
            {
                return true;
            }

            errorEntryKey = CategoryDeposit.ErrorInvalidZip;
            return false;
		}

        private bool ValidateCVN(string cvn, InputFieldType field, ref Enum errorEntryKey)
		{
            if (IsRegexMatch(cvn, CREDIT_CARD_CVN_REGEX))
            {
                return true;
            }
			
            errorEntryKey = CategoryDeposit.ErrorInvalidCVN;
            return false;
		}

		private bool ValidateWithdrawAmount(string withdrawAmount, InputFieldType field, ref Enum errorEntryKey)
		{
			decimal amount;
			if (!Decimal.TryParse(withdrawAmount, out amount))
			{
				// invalid value
				errorEntryKey = CategoryDeposit.ErrorInvalidWithdrawAmount;
				return false;
			}

			// we have a valid decimal
			return true;
		}
		#endregion

	}
}

