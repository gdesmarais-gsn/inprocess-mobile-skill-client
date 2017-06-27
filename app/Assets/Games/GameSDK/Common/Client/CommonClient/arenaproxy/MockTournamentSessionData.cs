using System;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Client.Session;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common
{
	public class MockTournamentSessionData : ITournamentSessionData
	{
		private Dictionary<string, string> _strings = new Dictionary<string, string>();

		private IGameSession _gameSession;

		public MockTournamentSessionData ()
		{
			_strings.Add ("MOCK_STRING", "This is a mock string.");
		}

		// tourn seed
		public string TournamentSeed {
			get { 
				return "12345";
			}
		}

		public void start () {
			// no op
		}

		public void notarize () {
			// no op?
		}

		public void finish () {
			// no op
		}

		public void abandon () {
			
		}

		public IGameSession gameSession {
			get {
				if (_gameSession == null) {
					_gameSession = new MockGameSession ();
				}
				return _gameSession;
			}
		}
		public String TournamentFlavorName {
			get {
				return "Mock Tournament Flavor";
			}
		}

		public IPrizeData[] Prizes {
			get {
				IPrizeData[] returnPrizes = new IPrizeData[10];

				Dictionary<string, string> rewards = new Dictionary<string, string> ();
				rewards.Add ("Fame", "100");
				rewards.Add ("Tokens", "50");
				returnPrizes [0] = new MockPrizeData (5.00m, "USD", "$", 1, rewards);

				rewards = new Dictionary<string, string> ();
				rewards.Add("Fame", "50");
				returnPrizes [1] = new MockPrizeData (2.00m, "USD", "$", 2, rewards);

				returnPrizes [2] = new MockPrizeData (1.00m, "USD", "$", 3, null);
                returnPrizes [3] = new MockPrizeData (1.00m, "USD", "$", 4, null);
                returnPrizes [4] = new MockPrizeData (1.00m, "USD", "$", 5, null);
                returnPrizes [5] = new MockPrizeData (1.00m, "USD", "$", 6, null);
                returnPrizes [6] = new MockPrizeData (1.00m, "USD", "$", 7, null);
                returnPrizes [7] = new MockPrizeData (1.00m, "USD", "$", 8, null);
                returnPrizes [8] = new MockPrizeData (1.00m, "USD", "$", 9, null);
                returnPrizes [9] = new MockPrizeData (1.00m, "USD", "$", 10, null);

					
				return returnPrizes;
			}
		}

		// tourn instance id
		public string TournamentInstanceId {
			get {
				return "1";
			}
		}

		public Dictionary<string, string> Strings {
			get {
				return _strings;
			}
		}

		public decimal Fee {
			get {
				return 5.00m;
			}
		}

		public int Players {
			get {
				return 10;
			}
		}

		// game name
		public string GameName {
			get {
				return "Test Game";
			}
		}

		public string Mode {
			get {
				return "Classic";
			}
		}

		public string Level {
			get {
				return "Difficult";
			}
		}

		public int ClientCalculatedScore { get; set; }
	}
}

