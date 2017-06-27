namespace GSN.Skill.Games.Common.Utils
{
	//Type of credit card
	public enum CreditCardType 
	{
		Invalid,          //Credit card number is too short or too long to be valid
		Unknown,          //Credit card number has at least 12 digits and not more than 19 digits and doesn't match regexp for any other category
		Visa,
		MasterCard,
		AmericanExpress,
		Discover,
		Diners,
		JCB,
		Maestro
	} 
}
