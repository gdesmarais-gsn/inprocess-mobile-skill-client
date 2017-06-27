using System;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common
{
	public class MockPrizeData : IPrizeData
	{
		private decimal _amount;
		private string _currency;
		private string _currencySymbol;
		private int _ranking;
		private Dictionary<string, string> _secondaryRewards;

		public MockPrizeData (decimal Amount, string Currency, string CurrencySymbol, int Ranking, Dictionary<string, string> SecondaryRewards)
		{
			_amount = Amount;
			_currency = Currency;
			_currencySymbol = CurrencySymbol;
			_ranking = Ranking;
			_secondaryRewards = SecondaryRewards;
		}

		public decimal Amount {
			get {
				return _amount;
			}
		}

		public string Currency {
			get {
				return _currency;
			}
		}

		public string CurrencySymbol {
			get {
				return _currencySymbol;
			}
		}

		public int Ranking {
			get {
				return _ranking;
			}
		}

		public Dictionary<string, string> SecondaryRewards {
			get {
				return _secondaryRewards;
			}
		}
	}
}

