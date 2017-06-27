using System;
using System.Text.RegularExpressions;

namespace GSN.Skill.Games.Common.Utils
{
	/// Utilities to work with credit cards related data
	public static class CreditCardUtils
	{
		public const uint MAX_CREDIT_CARD_NUMBER_LENGTH         = 19; //Max credit card number length as of April 2016
		public const uint MIN_CREDIT_CARD_NUMBER_LENGTH         = 14; //Min credit card number length as of April 2016 (Diners Club)
		public const uint MIN_UNKNOWN_CREDIT_CARD_NUMBER_LENGTH = 16; //Min credit card number length which doesn't match any regular pattern and should be accepted as unknown credit card type

		private const string CVV_CODE_REGULAR_EXPRESSION_PATTERN                   = @"^\d{3,4}$";                                  //Regular expression for checking CVV code
		private const string VISA_BEGINNING_REGULAR_EXPRESSION_PATTERN             = @"^4";                                         //Regular expression to check that number is likely to be part of Visa card number
		private const string MASTER_CARD_BEGINNING_REGULAR_EXPRESSION_PATTERN      = @"^5[1-5]|^2(?:2(?:2[1-9]|[3-9]\d)|[3-6]\d\d|7(?:[01]\d|20))"; //Regular expression to check that number is likely to be part of MasterCard card number
		private const string AMERICAN_EXPRESS_BEGINNING_REGULAR_EXPRESSION_PATTERN = @"^3[47]";                                     //Regular expression to check that number is likely to be part of American Express card number
		private const string DINERS_CLUB_BEGINNING_REGULAR_EXPRESSION_PATTERN      = @"^3(?:0[0-5]|[68])";                          //Regular expression to check that number is likely to be part of Diners Club card number
		private const string DISCOVER_BEGINNING_REGULAR_EXPRESSION_PATTERN         = @"^6(?:011|5|22(?:1(?:2[6-9]|[3-9]\d)|[2-8]\d{2}|9(?:[01]\d|2[0-5])))"; //Regular expression to check that number is likely to be part of Discover card number 
		private const string JCB_BEGINNING_REGULAR_EXPRESSION_PATTERN              = @"^(?:2131|1800|35)";                          //Regular expression to check that number is likely to be part of JCB card number
		private const string MAESTRO_BEGINNING_REGULAR_EXPRESSION_PATTERN          = @"^(?:5[0678]|6304|6390|67)";                  //Regular expression to check that number is likely to be part of Maestro card number
		private const string VISA_REGULAR_EXPRESSION_PATTERN                       = @"^4\d{15}(?:\d{3})?$";                        //Regular expression to check that number is Visa card number
		private const string MASTER_CARD_REGULAR_EXPRESSION_PATTERN                = @"^5[1-5]\d{14}$|^2(?:2(?:2[1-9]|[3-9]\d)|[3-6]\d\d|7(?:[01]\d|20))\d{12}$"; //Regular expression to check that number is MasterCard card number
		private const string AMERICAN_EXPRESS_REGULAR_EXPRESSION_PATTERN           = @"^3[47]\d{13}$";                              //Regular expression to check that number is American Express card number
		private const string DINERS_CLUB_REGULAR_EXPRESSION_PATTERN                = @"^3(?:0[0-5]|[68]\d)\d{11}$";                 //Regular expression to check that number is Diners Club card number (according to https://en.wikipedia.org/wiki/Bank_card_number this should have more ranges (i.e. 309, 39), but other resources either doesn't have such information or declares that this ranges is not supported anymore (for example http://www.richardsramblings.com/regex/credit-card-numbers/))
		private const string DISCOVER_REGULAR_EXPRESSION_PATTERN                   = @"^6(?:011\d{2}|5\d{4}|22(?:1(?:2[6-9]|[3-9]\d)|[2-8]\d{2}|9(?:[01]\d|2[0-5])))\d{10}(?:\d{3})?$"; //Regular expression to check that number is Discover card number 
		private const string JCB_REGULAR_EXPRESSION_PATTERN                        = @"^(?:2131|1800|35\d{3})\d{11}$";              //Regular expression to check that number is JCB card number (some sources states that 2131 and 1800 beginnings are valid and some that this beginnings are not valid)
		private const string MAESTRO_REGULAR_EXPRESSION_PATTERN                    = @"^(?:5[0678]\d\d|6304|6390|67\d\d)\d{12,15}$"; //Regular expression to check that number is Maestro card number

		private const uint AMERICAN_EXPRESS_CVV_LENGTH = 4; //CVV length of American Express cards as of April 2016
		private const uint DEFAULT_CVV_LENGTH          = 3; //CVV length of most credit cards

		/// Get possible credit card type from partial credit card number
		public static CreditCardType GuessCreditCardType(string creditCardNumber) 
		{
			if (String.IsNullOrEmpty(creditCardNumber) || creditCardNumber.Length > CreditCardUtils.MAX_CREDIT_CARD_NUMBER_LENGTH) 
			{
				return CreditCardType.Invalid;
			}

			if (Regex.IsMatch(creditCardNumber, VISA_BEGINNING_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.Visa;
			}
			if (Regex.IsMatch(creditCardNumber, MASTER_CARD_BEGINNING_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.MasterCard;
			}
			if (Regex.IsMatch(creditCardNumber, AMERICAN_EXPRESS_BEGINNING_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.AmericanExpress;
			}
			if (Regex.IsMatch(creditCardNumber, DINERS_CLUB_BEGINNING_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.Diners;
			}
			if (Regex.IsMatch(creditCardNumber, DISCOVER_BEGINNING_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.Discover;
			}
			if (Regex.IsMatch(creditCardNumber, JCB_BEGINNING_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.JCB;
			}
			if (Regex.IsMatch(creditCardNumber, MAESTRO_BEGINNING_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.Maestro;
			}

			return CreditCardType.Unknown;
		}

		/// Get credit card type from credit card number
		public static CreditCardType GetCreditCardType(string creditCardNumber) 
		{
			//TODO? this code doesn't perform checksum validation of credit card number, just simple regexp match
			//TODO? this code doesn't return invalid card type if card number begins with some type pattern but has not compatible length for this pattern (for example if card number begins with 4 like Visa card but has only 12 digits)
			//this checks not implemented to minimize risk of code will block future card types
			if (String.IsNullOrEmpty(creditCardNumber) || creditCardNumber.Length > CreditCardUtils.MAX_CREDIT_CARD_NUMBER_LENGTH || creditCardNumber.Length < CreditCardUtils.MIN_CREDIT_CARD_NUMBER_LENGTH) 
			{
				return CreditCardType.Invalid;
			}

			if (Regex.IsMatch(creditCardNumber, VISA_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.Visa;
			}
			if (Regex.IsMatch(creditCardNumber, MASTER_CARD_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.MasterCard;
			}
			if (Regex.IsMatch(creditCardNumber, AMERICAN_EXPRESS_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.AmericanExpress;
			}
			if (Regex.IsMatch(creditCardNumber, DINERS_CLUB_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.Diners;
			}
			if (Regex.IsMatch(creditCardNumber, DISCOVER_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.Discover;
			}
			if (Regex.IsMatch(creditCardNumber, JCB_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.JCB;
			}
			if (Regex.IsMatch(creditCardNumber, MAESTRO_REGULAR_EXPRESSION_PATTERN)) 
			{
				return CreditCardType.Maestro;
			}

			if (creditCardNumber.Length >= MIN_UNKNOWN_CREDIT_CARD_NUMBER_LENGTH)
			{
				return CreditCardType.Unknown;
			}

			return CreditCardType.Invalid;
		}

		/// check expiration date for validity
		public static bool IsExpirationDateCorrect(string monthStr, string yearStr) 
		{
			if (monthStr.Length == 0 || yearStr.Length != 2) 
			{
				return false;
			}

			try 
			{
				return IsExpirationDateCorrect(new DateTime(2000 + int.Parse(yearStr), int.Parse(monthStr), 1));
			}
			catch 
			{
				return false;
			}
		}

		/// check expiration date for validity
		public static bool IsExpirationDateCorrect(DateTime expDate) 
		{
			DateTime currentDate = DateTime.Now;

			if (expDate.Year > currentDate.Year) 
			{
				return true;
			}
			if (expDate.Year == currentDate.Year && currentDate.Month <= expDate.Month) 
			{
				return true;
			}
			return false;
		}

		/// check cvv code for validity
		/// TODO this code doesn't check correctness of cvv code length depending of credit card type, because official documentation on this topic was not found
		public static bool IsCvvCodeCorrect(string cvvCode) 
		{
			return Regex.IsMatch(cvvCode, CVV_CODE_REGULAR_EXPRESSION_PATTERN);
		}

		/// get cvv length for credit card type
		public static uint CvvLengthForCreditCardType(CreditCardType creditCardType) 
		{
			if (creditCardType == CreditCardType.AmericanExpress)
			{
				return AMERICAN_EXPRESS_CVV_LENGTH;
			}
			else
			{
				return DEFAULT_CVV_LENGTH;
			}
		}
	}
}
