﻿using System;
using System.Collections.Generic;

namespace GSN.Skill.Phoenix.Strings
{
	public enum CategoryCommon
	{
		Hello,
		Goodbye,
		Welcome,
		RequiredField,
		UsernameShort,
		UsernameLong,
		UsernameInvalidChars,
		UsernameRequired,
		GeneralCommunicationError,
		ClientVersionOutOfDate,
		GenericErrorHeader,
		GenericErrorOKButton,
		GenericErrorRetryButton,
		GenericErrorHelpButton,
	}

	public enum CategoryHUD
	{
		CashUpsell,
	}

	public enum CategoryGeoLocation
	{
		ErrorHeaderNoLocation,
		ErrorMessageNoLocation,
		ErrorHeaderAskForLocation,
		ErrorMessageAskForLocation,
		ErrorButtonCancel,
		ErrorButtonConfirm,
		ErrorButtonGoToSettings,
		IOSLocationUsageDescription,
	}
	public enum CategoryRegister
	{
		EmailInUse,
		EmailIncorrectFormat,
		UsernameUnavailable,
		PasswordComplexity,
		PasswordTooShort,  
		PasswordTooLong, 
		PasswordNoNumbers,  
		PasswordNoUpperCase,  
		PasswordNoLowerCase,
		UsernameLabel,
		PasswordLabel,
        EmailLabel,
        RegisterHeader,
        RegisterButton,
        TermsConditions,
        PasswordTooltip,
		PasswordRequired,
        Show,
        Hide
	}

	public enum CategoryWelcome
	{
		LoginButton,
        RegisterButton,
        HaveAccount
	}

	public enum CategoryTournament
	{
		Result,
		Fail,
		Score,
		LowBalanceSignup,
		LowBalanceWinItNow,
		ErrorMaxSignup,
		PlayButton,
        WarmUpTournamentIcon,
		LimitedTournamentIcon,
		UnlimitedTournamentIcon,
        PremiumTournamentIcon,
        ProgressiveTournamentIcon,
        ProgressiveRushTournamentIcon,
        SuperRewardsTournamentIcon,
		InfinitySymbol,
		FreeEntryFee,
		NoPrize,
		PrizePoolValue,
		PlayerSingular,
		Players,
		RewardsPoints,
		PrizePool,
		RisingPool,
		ErrorUnauthorizedTournamentFlavor,
		ErrorUnauthorizedGameCategory,
		ErrorUnauthorizedDeposit,
		ErrorMembersOnly,
		ErrorBelowSkillLevel,
		ErrorUnhandledDisconnect,
        WarmUp,
		ErrorFullyIllegalState,
        RequiredNumberPlays,
        RequiredCashGamePlays,
        RequiredSpecificGamePlays,
		ShowTaxForm,
        FreeButton,
        LockedButton,
        RequiredCashGamePlaysMessage,
        RequiredSpecificGamePlaysMessage,
        MatchInformationHeader,
        PrizePoolHeader,
        EntryFee,
        TotalPrizePool,
        LockedTournamentHeader,
        RewardsPointsInfo,
		WarmUpTournamentDescription,
		LimitedTournamentDescription,
		UnlimitedTournamentDescription,
		PremiumTournamentDescription,
		ProgressiveTournamentDescription,
		ProgressiveRushTournamentDescription,
		SuperRewardsTournamentDescription,
	}

	public enum CategoryTournamentHistory
	{
		PlayNow,
		WebOnly,
		InProgress,
		NotEntered,
		PlayerSingular,
		Players,
        Win,
        PendingPlayers
	}

	public enum CategoryTournamentResults
	{
		WinItNow,
		Payout,
		Game,
		Players,
		EntryFee,
		StartTime,
		EndTime,
		FlavorID,
		MatchInfo,
        ToggleHiddenEntries,
		ToggleHiddenEntriesToolTip,
		Decline,
        Open,
        Bought,
        WinItNowCountdown,
        Playing,
        NotStarted
	}

	public enum CategoryLogin
	{
		ErrorTempLockedAccount,
        PasswordResetMessage,
        ResetPasswordButton,
        MultiUserResetPasswordMessage,
        ConfirmButton,
        ResetPasswordheader,
		InvalidLogin,
        UsernameLabel,
        PasswordLabel,
        KeepMeSignedIn,
        LoginHeader,
        SignInButton,
        ForgotPassword
	}

	public enum CategoryDeposit
	{
		GameCreditsDepositTile,
		ErrorInvalidCVN,
		ErrorInvalidAddress,
		ErrorInvalidCity,
		ErrorInvalidState,
		ErrorInvalidCreditCard,
		ErrorInvalidZip,
		ErrorInvalidWithdrawAmount,
		ErrorStateDepositNotAllowed,
		ErrorZipCodeDepositNotAllowed,
		CreditCardInfoPreview,
		BillingInfoPreview,
		EditCard,
		ChangeCard,
		SelectCard,
		DepositLimit,
		CardType,
        DepositButton,
        DepositSelectHeader,
        EnterCreditCardHeader,
        EnterAddressHeader,
        NewCardConfirmHeader,
        ConfirmHeader,
        PartiallyIllegalStateHeader,
        EnterCreditCard,
        FirstNameRequired,
        LastNameRequired,
        AddressRequired,
        CityRequired,
        ErrorInvalidFirstName,
        ErrorInvalidLastName,
        ErrorInvalidExpirationDate,
        ErrorCountryDepositNotAllowed,
        EnterExpirationDate,
        CVN,
        CCHold,
        CCHoldLink,
        NextButton,
        Zip,
        State,
        Country,
        DepositAmountLabel,
        CreditCardLabel,
        BillingAddressLabel,
        Terms,
        PasswordLabel,
        CreditCardInfoError,
        BillingInfoError,
        GameCredits,
	}

	public enum CategoryProfile
	{
		PopupHeader,
		Settings,
		Music,
		SoundFX,
		GameCredits,
		Cash,
		Balance,
		LogOutButton,
		WithdrawButton,
        LegalButton,
        HelpButton,
		DepositButton,
		ConfirmWithdrawButton,
		WithdrawAmount,
		WithdrawInfo,
		WithdrawPasswordMessage,
		WithdrawSuccessMessage,
		WithdrawConfirmHeader,
		PasswordInput,
		ErrorNonCashUser,
        VersionLabel,
        TermsAndConditionsButton,
        TermsOfServiceButton,
        PrivacyPolicyButton,
        WithdrawHeader,
        LegalHeader
	}

	public enum CategoryRewards
	{
		RewardsHeader,
        RedeemButton,
        GameCredits,
		ErrorNonCashUser,
		MakeDeposit,
        RewardsDescription,
	}

	public enum CategoryWebGame
	{
		ResultsProblem,
	}

    public enum CategoryGameDescription
    {
        Scrabble,
        SolitaireRush,
        TriPeaks,
        WheelOfFortune,
        Catch21,
        Plinko,
    }

    public static class PhoenixStringTable
	{
		public static void SetTable()
		{
			StringTable.Instance.Table = new Dictionary<string, Dictionary<string, string>>()
			{
				{
					typeof(CategoryCommon).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum, string>()
						{
							{CategoryCommon.Hello, "Bonjour"},
							{CategoryCommon.Goodbye, "Au Revoir"},
							{CategoryCommon.Welcome, "Bienvenue"},
							{CategoryCommon.RequiredField, "Required"},
							{CategoryCommon.UsernameShort, "Username must be at least 3 characters."},
							{CategoryCommon.UsernameLong, "Username must be no more than 32 characters."},
							{CategoryCommon.UsernameInvalidChars, "Username may only contain letters, numbers, dashes and underscores."},
							{CategoryCommon.UsernameRequired, "Please provide a username."},
							{CategoryCommon.GeneralCommunicationError, "We were unable to process your request. Please check your Internet connection and try again. For help, contact Player Services."},
							{CategoryCommon.ClientVersionOutOfDate, "Update Required. Get the latest version of WorldWinner to continue playing."},
							{CategoryCommon.GenericErrorHeader, "Error"},
							{CategoryCommon.GenericErrorOKButton, "OK"},
							{CategoryCommon.GenericErrorRetryButton, "RETRY"},
							{CategoryCommon.GenericErrorHelpButton, "GET HELP"},
						}
					)
				},
				{
					typeof(CategoryRegister).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum, string>()
						{
							{CategoryRegister.EmailInUse, "Email is already in use."},
							{CategoryRegister.UsernameUnavailable, "Username unavailable."},
							{CategoryRegister.EmailIncorrectFormat, "Email is invalid.  Expected format: \"name@domain.com\"."},
							{CategoryRegister.PasswordComplexity, "Password must be at least 8 characters and contain 1 number, 1 lowercase character and 1 upper case character. "},
							{CategoryRegister.PasswordTooShort, "Password must be at least 8 characters."},
							{CategoryRegister.PasswordTooLong, "Password can't be over 100 characters."},
							{CategoryRegister.PasswordNoNumbers, "Password must contain a number"},
							{CategoryRegister.PasswordNoUpperCase, "Password must contain at least one upper case character."},
							{CategoryRegister.PasswordNoLowerCase, "Password must contain at least one lower case character."},
                            {CategoryRegister.UsernameLabel, "Username"},
                            {CategoryRegister.EmailLabel, "Email"},
                            {CategoryRegister.PasswordLabel, "Password"},
                            {CategoryRegister.RegisterHeader, "Create Account"},
                            {CategoryRegister.RegisterButton, "Create Account"},
                            {CategoryRegister.TermsConditions, "By creating an account you agree to <u>WorldWinner's terms & conditions</u>."},
                            {CategoryRegister.PasswordTooltip, "Passwords Require:\n• 8+ Characters\n• 1 Number\n• Upper & Lowercase Letters"},
							{CategoryRegister.PasswordRequired, "Please provide a password."},
                            {CategoryRegister.Show, "show"},
                            {CategoryRegister.Hide, "hide"},
						}
					)
				},
				{
                    typeof(CategoryHUD).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum, string>()
						{
                            {CategoryHUD.CashUpsell, "Play For Prizes"},
						}
					)
				},
				{
                    typeof(CategoryWelcome).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum, string>()
						{
                            {CategoryWelcome.LoginButton, "Log in."},
                            {CategoryWelcome.HaveAccount, "Have an account?"},
                            {CategoryWelcome.RegisterButton, "Join Now!"},
						}
					)
				},
				{
					typeof(CategoryGeoLocation).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum, string>()
						{
							{CategoryGeoLocation.ErrorHeaderAskForLocation, "Access Real-Money Tournaments"},
							{CategoryGeoLocation.ErrorMessageAskForLocation, "We need your location to determine which tournaments you can legally play."},
							{CategoryGeoLocation.ErrorHeaderNoLocation, "Turn ON Location Services"},
							{CategoryGeoLocation.ErrorMessageNoLocation, "Due to legal requirements, we must check your location before playing real-money matches."},
							{CategoryGeoLocation.ErrorButtonCancel, "Not Now"},
							{CategoryGeoLocation.ErrorButtonConfirm, "Give Access"},
							{CategoryGeoLocation.ErrorButtonGoToSettings, "Go To Settings"},
							{CategoryGeoLocation.IOSLocationUsageDescription, "Before you can play in real-money matches, we need to determine your location."}
						}
					)
				},
				{
					typeof(CategoryTournament).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum, string>()
						{
							{CategoryTournament.Result, "Check out your results:"},
							{CategoryTournament.Score, "You won {0} points and got {1} place."},
							{CategoryTournament.LowBalanceSignup, "You will need to deposit at least {0} to play the selected Match."},
							{CategoryTournament.LowBalanceWinItNow, "You will need to deposit at least {0} to Win it Now."},
							{CategoryTournament.ErrorMaxSignup, "Sorry! You can only have 4 open tournaments at a time. Visit Game History to finish playing!"},
							{CategoryTournament.ErrorUnauthorizedTournamentFlavor, "You currently reside in a state that only allows residents to participate in Progressive and Fixed Prize Unlimited Entry Tournaments."},
							{CategoryTournament.ErrorUnauthorizedGameCategory, "Sorry! You’re playing in a state that doesn’t allow cash tournaments for card games, but you can still enjoy free, Warm-Up versions of this game."},
							{CategoryTournament.ErrorFullyIllegalState, "You currently reside in a state that does not allow residents to participate in competitions for cash and merchandise prizes."},
							{CategoryTournament.ErrorUnauthorizedDeposit, "You currently reside in a state that does not allow residents to participate in competitions for cash and merchandise prizes."},
							{CategoryTournament.ErrorMembersOnly, "We would love to have you play in this competition. However it is not available to Guests. You need to become a Member to participate in this competition.  To become a member, make a deposit."},
							{CategoryTournament.ErrorBelowSkillLevel, "Sorry! This tournament is below your skill level. Please select another one." },
							{CategoryTournament.ErrorUnhandledDisconnect, "Sorry! Looks like we lost connection to the game."},
							{CategoryTournament.PlayButton, "Play" },
                            {CategoryTournament.LockedButton, "Keep Training" },
                            {CategoryTournament.FreeButton, "Play for Free" },
							{CategoryTournament.LimitedTournamentIcon, "LIMITED ENTRY" },
							{CategoryTournament.UnlimitedTournamentIcon, "UNLIMITED ENTRY" },
                            {CategoryTournament.PremiumTournamentIcon, "PREMIUM" },
                            {CategoryTournament.ProgressiveTournamentIcon, "PROGRESSIVE" },
                            {CategoryTournament.ProgressiveRushTournamentIcon, "PROGRESSIVE RUSH" },
                            {CategoryTournament.SuperRewardsTournamentIcon, "SUPER REWARDS" },
                            {CategoryTournament.WarmUpTournamentIcon, "WARM-UP" },
							{CategoryTournament.InfinitySymbol, "<size=130%>∞<size=100%>" },
							{CategoryTournament.FreeEntryFee, "FREE" },
							{CategoryTournament.NoPrize, "" }, //we intentionally set this to empty for the art comp
							{CategoryTournament.PrizePoolValue, "<sup>$</sup>{0}"},
							{CategoryTournament.PlayerSingular, "{0} Player{1}" },
							{CategoryTournament.Players, "{0} Players{1}" },
							{CategoryTournament.RewardsPoints, "<size=70%><voffset=0.55em>+</voffset></size><space=0.3em>{0}" },
							{CategoryTournament.PrizePool, "PRIZE POOL" },
							{CategoryTournament.RisingPool, "Prizes Rising With\nEach Entry" },
                            {CategoryTournament.WarmUp, "Warm-Up" },
                            {CategoryTournament.RequiredNumberPlays, "{0} of {1}" },
                            {CategoryTournament.RequiredCashGamePlays, "{0}/{1} Cash Games Played" },
                            {CategoryTournament.RequiredSpecificGamePlays, "{0}/{1} Games Played"},
							{CategoryTournament.ShowTaxForm, "Due to your big winnings, federal law requires you fill out a W-9 Tax Form before playing additional games for cash. Click OK to fill that out and get back to winning!"},
                            {CategoryTournament.RequiredCashGamePlaysMessage, "All players are required to build up some experience before unlocking larger tournaments. Keep playing to gain access!"},
                            {CategoryTournament.RequiredSpecificGamePlaysMessage, "All players are required to build up some experience with {0} before unlocking larger tournaments. Keep playing more {0} to gain access!"},
                            {CategoryTournament.MatchInformationHeader, "Match Information"},
                            {CategoryTournament.PrizePoolHeader, "Prize Pool"},
                            {CategoryTournament.TotalPrizePool, "Total Prize Pool"},
                            {CategoryTournament.EntryFee, "Entry Fee"},
                            {CategoryTournament.LockedTournamentHeader, "Tournament Locked"},
                            {CategoryTournament.RewardsPointsInfo , "Rewards Points"},
	                        {CategoryTournament.WarmUpTournamentDescription , "Practice for free before competing for cash. Available to all players."},
	                        {CategoryTournament.LimitedTournamentDescription , "Predetermined number of entries, opponents, and prizes. Tournament closes once the last player completes their game."},
	                        {CategoryTournament.PremiumTournamentDescription , "Higher entry fee, more Rewards Points, and bigger prize payouts. Predetermined number of entries, opponents, and prizes."},
	                        {CategoryTournament.UnlimitedTournamentDescription , "Fixed entry fees and predetermined, fixed prizes that are not directly funded by the entry fees spent or number of participants. These tournaments may award prizes in cash or merchandise and may have unique game content such as special themes/boards."},
	                        {CategoryTournament.ProgressiveTournamentDescription , "Prize pools start big and increase with each new entry! Progressives start and end at specified times, with no limits on total entries. Players enter as many times as they'd like, and only their highest score determines their final standing. Players are placed in different skill divisions, each with separate standings, prize pools, and payouts."},
	                        {CategoryTournament.SuperRewardsTournamentDescription , "Same as Limited Entry tournaments (predetermined number of entries, opponents, and prizes), but you’ll earn more Rewards Points per entry."},
	                        {CategoryTournament.ProgressiveRushTournamentDescription , "A hybrid of Limited Entry and Progressive tournaments. Players enter as many times as they’d like, and the prize pool grows with each new entry. Tournament duration varies, from 30 minutes to 24 hours. In the Final Countdown stage, no new players can enter, and only players who previously entered can re-enter."},
                        }
					)
				},
				{
					typeof(CategoryTournamentHistory).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum, string>()
						{
							{CategoryTournamentHistory.PlayNow, "Play Now"},
							{CategoryTournamentHistory.WebOnly, "Web Only"},
							{CategoryTournamentHistory.InProgress, "In Progress ({0})"},
							{CategoryTournamentHistory.NotEntered, "Entered & Not Started (Max 4)"},
							{CategoryTournamentHistory.PlayerSingular, "{0} Player" },
							{CategoryTournamentHistory.Players, "{0} Players" },
                            {CategoryTournamentHistory.Win, "WIN" },
                            {CategoryTournamentHistory.PendingPlayers, "{0} of {1} Players" },
						}
					)
				},
				{
					typeof(CategoryTournamentResults).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum, string>()
						{
							{CategoryTournamentResults.WinItNow, "Win It Now"},
							{CategoryTournamentResults.Payout, "Payout:"},
							{CategoryTournamentResults.Players, "Players"},
							{CategoryTournamentResults.EntryFee, "Entry Fee"},
							{CategoryTournamentResults.StartTime, "Start Time"},
							{CategoryTournamentResults.EndTime, "End Time"},
							{CategoryTournamentResults.FlavorID, "ID"},
							{CategoryTournamentResults.MatchInfo, "Match Information"},
							{CategoryTournamentResults.ToggleHiddenEntries, "Show Repeat Entries"},
							{CategoryTournamentResults.ToggleHiddenEntriesToolTip, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut massa auctor, consectetur ipsum quis, mattis lorem."},
							{CategoryTournamentResults.Game, "Game"},
                            {CategoryTournamentResults.Decline, "Decline"},
                            {CategoryTournamentResults.Open, "Open"},
                            {CategoryTournamentResults.Bought, "Bought"},
                            {CategoryTournamentResults.WinItNowCountdown, "{0} to Buy out All Open Slots and Get"},
                            {CategoryTournamentResults.Playing, "Playing"},
                            {CategoryTournamentResults.NotStarted, "Not Started"},
						}
					)
				},
				{
					typeof(CategoryLogin).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum,string>()
						{
							{CategoryLogin.ErrorTempLockedAccount, "Your account has been locked due to too many failed login attempts.  Please wait 60 seconds before trying again, or reset your password."},
                            {CategoryLogin.PasswordResetMessage, "You must provide your email address to reset your password."},
                            {CategoryLogin.MultiUserResetPasswordMessage, "There are multiple usernames associated with the email address entered. Please select one."},
                            {CategoryLogin.ResetPasswordButton, "Reset Password"},
                            {CategoryLogin.ConfirmButton, "OK"},
                            {CategoryLogin.ResetPasswordheader, "Forgot Password?"},
							{CategoryLogin.InvalidLogin, "Invalid username / password combo"},
	                        {CategoryLogin.UsernameLabel, "Username"},
	                        {CategoryLogin.PasswordLabel, "Password"},
	                        {CategoryLogin.KeepMeSignedIn, "Keep Me Logged In"},
	                        {CategoryLogin.SignInButton, "Log In"},
	                        {CategoryLogin.LoginHeader, "Log In"},
                            {CategoryLogin.ForgotPassword, "Forgot Password?"},
						}
					)
				},
				{
					typeof(CategoryDeposit).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum, string>()
						{
							{CategoryDeposit.GameCreditsDepositTile, "+<sup>$</sup>{0}"},
							{CategoryDeposit.ErrorInvalidCVN,"CVN Problem"},
							{CategoryDeposit.ErrorInvalidAddress,"Address Problem"},
							{CategoryDeposit.ErrorInvalidCity,"City Problem"},
							{CategoryDeposit.ErrorInvalidState,"State Problem"},
							{CategoryDeposit.ErrorInvalidCreditCard,"Credit Card Problem"},
							{CategoryDeposit.ErrorInvalidZip,"Invalid Zip"},
							{CategoryDeposit.ErrorInvalidWithdrawAmount,"Invalid Value"},
							{CategoryDeposit.CreditCardInfoPreview, "**** **** **** {0}\nExp: {1}/{2}"},
							{CategoryDeposit.BillingInfoPreview, "{0} {1}\n{2}\n{3}, {4} {5}"},
							{CategoryDeposit.EditCard, "Edit"},
							{CategoryDeposit.ChangeCard, "Change"},
							{CategoryDeposit.SelectCard, "Select"},
							{CategoryDeposit.DepositLimit, "Your balance is already high enough to play in our tournaments. For the protection of our players, we limit the total dollar amount of deposits a player can make on the site. You may not make an additional deposit at this time. If you have questions, please contact Player Services."},
							{CategoryDeposit.CardType, "We only accept Visa and MasterCard."}, 
                            {CategoryDeposit.DepositButton, "Deposit & Play"},
                            {CategoryDeposit.DepositSelectHeader, "Choose Deposit Amount"},
	                        {CategoryDeposit.EnterCreditCardHeader, "Step 1 of 3: Credit Card"},
	                        {CategoryDeposit.EnterAddressHeader, "Step 2 of 3: Billing Address"},
	                        {CategoryDeposit.NewCardConfirmHeader, "Step 3 of 3: Confirm "},
                            {CategoryDeposit.ConfirmHeader, "Confirm"},
                            {CategoryDeposit.PartiallyIllegalStateHeader, "Confirm Deposit"},
                            {CategoryDeposit.EnterCreditCard, "Card Number"},
                            {CategoryDeposit.CVN, "CVN"},
                            {CategoryDeposit.EnterExpirationDate, "Expiration Date"},
                            {CategoryDeposit.FirstNameRequired, "First Name"},
                            {CategoryDeposit.LastNameRequired, "Last Name"},
                            {CategoryDeposit.AddressRequired, "Address"},
                            {CategoryDeposit.CityRequired, "City"},
                            {CategoryDeposit.State, "State"},
                            {CategoryDeposit.Zip, "Postal Code"},
                            {CategoryDeposit.Country, "Country"},
                            {CategoryDeposit.ErrorInvalidFirstName, "Invalid first name"},
                            {CategoryDeposit.ErrorInvalidLastName, "Invalid last name"},
                            {CategoryDeposit.ErrorInvalidExpirationDate, "Invalid expiration date"},
							{CategoryDeposit.ErrorCountryDepositNotAllowed, "Deposits not allowed in country"},
							{CategoryDeposit.ErrorStateDepositNotAllowed, "Deposits not allowed in your state"},
							{CategoryDeposit.ErrorZipCodeDepositNotAllowed, "Deposits not allowed in your state"},
                            {CategoryDeposit.CCHold, "There may be a $1 authorization hold when entering credit/debit card information. This is used to verify billing info and should disappear within several business days."},
                            {CategoryDeposit.CCHoldLink, "Questions? <b><u><color=white>Contact Player Services</b></u></color>"},
                            {CategoryDeposit.NextButton, "Next"},
                            {CategoryDeposit.DepositAmountLabel, "Deposit Amount"},
                            {CategoryDeposit.CreditCardLabel, "Credit Card"},
                            {CategoryDeposit.BillingAddressLabel, "Billing Address"},
                            {CategoryDeposit.Terms, "By pressing “Deposit & Play” you agree that you are 18 YEARS OF AGE or older, do not have another WorldWinner account and agree to WorldWinner’s <u><b><color=white>Terms & Conditions.</color></u></b>"},
                            {CategoryDeposit.PasswordLabel, "Enter Password"},
                            {CategoryDeposit.CreditCardInfoError, "There was a problem with your credit card"},
                            {CategoryDeposit.BillingInfoError, "There was a problem with your billing address"},
                            {CategoryDeposit.GameCredits, "GAME CREDITS"},
                        }
					)
				},
				{
					typeof(CategoryProfile).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum, string>()
						{
							{CategoryProfile.PopupHeader, "Settings"},
                            {CategoryProfile.WithdrawHeader, "Withdraw"},
                            {CategoryProfile.LegalHeader, "Legal"},
							{CategoryProfile.Settings, "Settings"},
							{CategoryProfile.Music, "Music"},
							{CategoryProfile.SoundFX, "Sound Effects"},
							{CategoryProfile.GameCredits, "Game Credits:"},
							{CategoryProfile.Cash, "Real Money:"},
							{CategoryProfile.Balance, "Balance:"},
							{CategoryProfile.LogOutButton, "Log Out"},
							{CategoryProfile.WithdrawButton, "Withdraw"},
                            {CategoryProfile.HelpButton, "Help"},
                            {CategoryProfile.LegalButton, "Legal"},
							{CategoryProfile.DepositButton, "Deposit"},
							{CategoryProfile.ConfirmWithdrawButton, "Withdraw"},
							{CategoryProfile.WithdrawAmount, "Amount"},
                            {CategoryProfile.WithdrawInfo, "You'll receive winnings via the last payment method used to make a deposit.\n\nWinnings are typically received in 2-7 business days (4-6 weeks for checks).\n\nCredit/debit card deposits and withdrawals requested on the same calendar day are balanced out before charges or credits are processed on our end.\n\nQuestions? <u><color=white>Read our withdrawal FAQs.</color></u>"},
							{CategoryProfile.WithdrawPasswordMessage, "Enter your password to confirm your {0} withdraw."},
                            {CategoryProfile.WithdrawSuccessMessage, "Your {0} withdrawal was successful. you'll receive an email in 24-48 hours with more information."},
							{CategoryProfile.WithdrawConfirmHeader, "Confirm Withdraw"},
							{CategoryProfile.PasswordInput, "Password:"},
							{CategoryProfile.ErrorNonCashUser, "You need to be a cash user to withdraw."},
                            {CategoryProfile.VersionLabel, "<b>Version</b>: {0}"},
                            {CategoryProfile.TermsOfServiceButton, "Terms of Service"},
                            {CategoryProfile.TermsAndConditionsButton, "Terms & Conditions"},
                            {CategoryProfile.PrivacyPolicyButton, "Privacy Policy"},
                        }                            
					)
				},
				{
                    typeof(CategoryRewards).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum, string>()
						{
                            {CategoryRewards.RewardsHeader, "Rewards Store"},
                            {CategoryRewards.RedeemButton, "Redeem"},
                            {CategoryRewards.GameCredits, "Game Credits"},
							{CategoryRewards.ErrorNonCashUser, "You need to be a cash user to redeem. Deposit now!"},
							{CategoryRewards.MakeDeposit, "Make Deposit"},
                            {CategoryRewards.RewardsDescription, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi ut massa auctor, consectetur ipsum quis, mattis lorem. Curabitur sit amet pellentesque massa. Nunc volutpat dapibus leo, in semper ex tempor ac. Suspendisse augue purus, eleifend eget tempus non, vehicula a nulla. Curabitur in augue pretium, sollicitudin enim sed, feugiat orci. Suspendisse enim odio, pellentesque eu enim eu, placerat volutpat neque. Duis cursus, orci eu dignissim suscipit, elit nisl porttitor sapien, eu placerat purus mi at lacus. In sit amet mauris enim. Cras vulputate efficitur augue, a sagittis mi consequat tincidunt."},
						}
					)
				},
				{
					typeof(CategoryWebGame).ToString(),
					CreateCategoryStringTable(
						new Dictionary<Enum, string>()
						{
							{CategoryWebGame.ResultsProblem, "Sorry, there was a problem getting results. Please try again later."},
						}
					)
				},
                {
                    typeof(CategoryGameDescription).ToString(),
                    CreateCategoryStringTable(
                        new Dictionary<Enum, string>()
                        {
                            {CategoryGameDescription.Scrabble, "Ready for vocabulary victory? Check out this spin on a word-whiz favorite."},
                            {CategoryGameDescription.SolitaireRush, "Outscore your opponents in this tournament take on a classic card game."},
                            {CategoryGameDescription.TriPeaks, "Defend your surf turf in this tropical reshuffle of a classic card game."},
                            {CategoryGameDescription.WheelOfFortune, "Spin, solve, and score big in our new take \n on an iconic TV game show."},
                            {CategoryGameDescription.Catch21, "Speed through the deck in our tournament version of a game show favorite."},
                            {CategoryGameDescription.Plinko, "Ready for a tournament spin on a TV favorite? Drop Chips and aim for big prizes!"},
                        }
                    )
                }
            };
		}

		private static Dictionary<string, string> CreateCategoryStringTable(Dictionary<Enum, string> strings)
		{
			var retval = new Dictionary<string, string>();

			foreach (var entry in strings)
			{
				retval.Add(entry.Key.ToString(), entry.Value);
			}

			return retval;
		}
	}
}
