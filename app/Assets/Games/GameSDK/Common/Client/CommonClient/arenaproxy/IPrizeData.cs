using System.Collections.Generic;

namespace GSN.Skill.Games.Common
{
	public interface IPrizeData
	{
		decimal Amount { get; }
		string Currency { get; }
		string CurrencySymbol { get; }
		int Ranking { get; }
		Dictionary<string, string> SecondaryRewards { get; }
	}
}

