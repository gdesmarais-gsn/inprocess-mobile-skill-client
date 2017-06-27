namespace GSN.Skill.Phoenix.Strings
{
	public static class PhoenixErrorLookupTable
	{
		/// <summary>
		/// The error translation should have the EXACT error coming from worldwinner, regardless of domain.
		/// The URL will be stripped out of the key.
		/// </summary>
		public static void SetTable()
		{
            StringTable.Instance.AddErrorTranslation(
                "We have detected invalid characters in your first name.  Please try again",
                InputFieldType.FirstName,
                CategoryDeposit.ErrorInvalidFirstName
            );

            StringTable.Instance.AddErrorTranslation(
                "We have detected invalid characters in your last name.  Please try again.",
                InputFieldType.LastName,
                CategoryDeposit.ErrorInvalidLastName
            );

            StringTable.Instance.AddErrorTranslation(
                "Please enter a valid expiration date for this card (such as 03/06 for March 2006).",
                InputFieldType.ExpirationDate,
                CategoryDeposit.ErrorInvalidExpirationDate
            );

			StringTable.Instance.AddErrorTranslation(
				"The expiration date for your credit card is not valid. Please check your card and try again. If you have questions, please contact <a target=\"_blank\" href=\"https://qa.worldwinner.com/cgi/help/index.html\" tabindex=\"-1\">Player Services</a>.",
				InputFieldType.ExpirationDate,
				CategoryDeposit.ErrorInvalidExpirationDate
			);

            StringTable.Instance.AddErrorTranslation(
                "We do not currently allow deposits from your country. We encourage you to continue playing in our free competitions.",
                InputFieldType.Country,
                CategoryDeposit.ErrorCountryDepositNotAllowed
            );

			StringTable.Instance.AddErrorTranslation(
				"The zip code that you provided belongs to a state that does not allow residents to participate in competitions for cash and merchandise prizes. Please confirm the state you have selected and your zip code. If you believe that the information you entered is correct, please contact <a target=\"_blank\" href=\"https://qa.worldwinner.com/cgi/help/index.html\" tabindex=\"-1\">Player Services</a>.",
				InputFieldType.None,
				CategoryDeposit.ErrorZipCodeDepositNotAllowed
			);

			StringTable.Instance.AddErrorTranslation(
				"You currently reside in a state that does not allow residents to participate in competitions for cash and merchandise prizes.",
				InputFieldType.None,
				CategoryDeposit.ErrorStateDepositNotAllowed
			);

			StringTable.Instance.AddErrorTranslation(
				"Please enter a Credit Card Verification Number to continue. If you have questions, please contact <a target=\"_blank\" href=\"https://qaweb2.worldwinner.com/cgi/help/index.html\" tabindex=\"-1\">Player Services</a>.",
				InputFieldType.CVN,
				CategoryDeposit.ErrorInvalidCVN
			);

			StringTable.Instance.AddErrorTranslation(
				"Please recheck your billing address. If you have received this message in error, please contact your bank for address verification.",
				InputFieldType.Address,
				CategoryDeposit.ErrorInvalidAddress
			);

			StringTable.Instance.AddErrorTranslation(
				"Please recheck your billing state. If you have received this message in error, please contact your bank for address verification.",
				InputFieldType.State,
				CategoryDeposit.ErrorInvalidState
			);

			StringTable.Instance.AddErrorTranslation(
				"Looks like the credit card number is invalid. Please check it again, and if you have questions feel free to contact us at <a target=\"_blank\" href=\"https://qaweb2.worldwinner.com/cgi/help/index.html\" tabindex=\"-1\">Player Services</a>.",
				InputFieldType.CreditCard,
				CategoryDeposit.ErrorInvalidCreditCard
			);

			StringTable.Instance.AddErrorTranslation(		                                         
				"Your balance is already high enough to play in our tournaments. For the protection of our players, we limit the total dollar amount of deposits a player can make on the site. You may not make an additional deposit at this time. If you have questions, please contact <a target=\"_blank\" href=\"https://qa.worldwinner.com/cgi/help/index.html\" tabindex=\"-1\">Player Services</a>.",
				InputFieldType.None,
				CategoryDeposit.DepositLimit
			);

			StringTable.Instance.AddErrorTranslation(
				"Sorry! You can only have 4 open tournaments at a time. Visit <a href=\"/game-history.html\">Game History</a> to finish playing!",
				InputFieldType.None,
				CategoryTournament.ErrorMaxSignup
			);

			StringTable.Instance.AddErrorTranslation(
				"We would love to have you play in this competition.  However it is not available to Guests.  You need to become a Member to participate in this competition. To become a Member, <a href=\"https://qaweb2.worldwinner.com/cgi/finance/deposit.pl\">click here.",
				InputFieldType.None,
				CategoryTournament.ErrorMembersOnly
			);
			StringTable.Instance.AddErrorTranslation(
				"Sorry! This tournament is below your skill level. Please select another one.  <a href=\"https://gsnweb.zendesk.com/hc/en-us/sections/201767556-Matching\">Learn more about fair matching.</a>",
				InputFieldType.None,
				CategoryTournament.ErrorBelowSkillLevel
			);
			StringTable.Instance.AddErrorTranslation(
				"show_tax_form",
				InputFieldType.None,
				CategoryTournament.ShowTaxForm
			);
			#region Login / Register handled input errors
			StringTable.Instance.AddErrorTranslation(
				"Your e-mail address is already used with a different account. Please sign in as a returning player or <a href=\"https://qa.worldwinner.com/cgi/lostPassword.pl\" tabindex=\"-1\">click here</a> to retrieve your username and/or password.",
				InputFieldType.Email,
				CategoryRegister.EmailInUse
			);
			StringTable.Instance.AddErrorTranslation(
				"Username unavailable.",
				InputFieldType.Username,
				CategoryRegister.UsernameUnavailable
			);
			StringTable.Instance.AddErrorTranslation(
				"Invalid Login",
				InputFieldType.PasswordLite,
				CategoryLogin.InvalidLogin
			);
			StringTable.Instance.AddErrorTranslation(
				"Your email address should be in the \"name@domain.com\" (no spaces) format.",
				InputFieldType.Email,
				CategoryRegister.EmailIncorrectFormat
			);
			StringTable.Instance.AddErrorTranslation(
				"There was an error redeeming the prize. The user is not eligible for this reward.",
				InputFieldType.None,
				CategoryRewards.ErrorNonCashUser
			);
			StringTable.Instance.AddErrorTranslation(
				"User_Withdraw_noAddress",
				InputFieldType.None,
				CategoryProfile.ErrorNonCashUser
			);
			#endregion
		}
	}
}
