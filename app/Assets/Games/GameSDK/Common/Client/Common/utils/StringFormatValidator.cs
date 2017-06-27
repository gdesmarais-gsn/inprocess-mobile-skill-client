using System;
using System.Text.RegularExpressions;

namespace GSN.Skill.Games.Common.Utils
{
	/// Methods to check that string contains valid data of some type
	public static class StringFormatValidator
	{
		private const string EMAIL_ADDRESS_REGULAR_EXPRESSION_PATTERN = @"^\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*$";  //regular expression for checking email correctness
		private const string ZIP_CODE_REGULAR_EXPRESSION_PATTERN      = @"^\d{5}";                                          //Regular expression for checking zip code correctness

		/// Check email address string correctness
		public static bool IsEmailValid(string emailAddress) 
		{
			return Regex.IsMatch(emailAddress, EMAIL_ADDRESS_REGULAR_EXPRESSION_PATTERN);
		}

		/// check zip code for validity
		/// TODO this code doesn't check for US zip code validity (allow only 5 an 9 digit zip codes) and should be used only for generic check 
		/// for any zip code in the world (however it is possible that some countries allows letters in zip codes, so this check will return false negative)
		public static bool IsZipCodeCorrect(string zipCode) 
		{
			return Regex.IsMatch(zipCode, ZIP_CODE_REGULAR_EXPRESSION_PATTERN);
		}
	}
}
