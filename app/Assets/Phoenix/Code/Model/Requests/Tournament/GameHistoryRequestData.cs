using GSN.Skill.Phoenix.Utils;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;

namespace GSN.Skill.Phoenix.Requests.Tournament
{
	public struct GameHistoryData
	{
		public enum TournamentState
		{
			None,
			CompleteWon,
			CompleteLost,
			NotStarted,
			InProgress,
			Refunded,
			UnsupportedOnMobile
		}


		public Result result;

		public struct Result
		{
			public HistoryItem[] tournaments;
		}
		public struct HistoryItem : ITournamentResultData
		{
			public string[] prizeValue { get; set; } // Array of prizes for each player
			public string unplayed_game_id { get; set; } // If a user never started a game, this value will be set.  It can be used to start the tournament again.
			public string Fee { get; set; }
			public string FlavorDescription { get; set; }
			public string FlavorTypeID { get; set; }
			public string GameID { get; set; } // Maps back to gametype_id { get; set; }
			public string StartDate { get; set; } // "Human readable start date ex: 2017-03-13 13:12:21"
			public bool closed { get; set; } // Possible values:  0 (open) and 1 (closed)
			public string MaxPlayers { get; set; }
			public string EndDate { get; set; } // Can be null if tournament is not closed.
			public string FlavorName { get; set; }
			public bool PlayerWon { get; set; } // Possible values 0 (no) || 1 (yes)
			public string NumPlayers { get; set; }
			public string Winnings { get; set; }  // Possible values:  null || Value || "None"
			public string GameName { get; set; }
			public string TotalPrizeAmount { get; set; }
			public string FlavorType { get; set; }

			// Winner declared is a string that can be the following values:
			// t => "Yes",        # (t)rue
			// f => "No",         # (f)alse
			// l => "Locked",     # (l)ocked (Probably for buyout)
			// b => "Win It Now", # (b)uyout
			// r => "Refunded"    # (r)efunded
			public string WinnerDeclared { get; set; }
			public string TournamentID { get; set; }
			public int? Unfinished { get; set; } // Possible values 1 for yes , null for no :(
		}
	}


	public class GameHistoryRequestData : WebGETRequest<GameHistoryData>
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Tournament;
		private const string URL_KEY = "list_competitions";

		public override GameHistoryData Response { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/tournament/list_competitions";
			}
		}

		#if DEBUG
		public override bool useMockPayload
		{
			get
			{
				return false;
			}
		}

		public override string mockPayload
		{
			get
			{
				string data = @"
				{
				  'result': {
				    'tournaments': [
				      {
				        'prizeValue': [
				          '0.00'
				        ],
				        'unplayed_game_id': '949721',
				        'Fee': '0.00',
				        'FlavorDescription': 'a free warm up tourn for cash players',
				        'FlavorTypeID': '0',
				        'GameID': '1',
				        'StartDate': '2017-03-13 13:12:21',
				        'closed': 0,
				        'EndDate': null,
				        'FlavorName': '2-player Cash Warm-Up Solitaire Rush',
				        'PlayerWon': 0,
				        'NumPlayers': '1',
				        'Winnings': null,
				        'GameName': 'Solitaire Rush',
				        'TotalPrizeAmount': '0.00',
				        'FlavorType': 'Warm-Up',
				        'WinnerDeclared': 'f',
				        'TournamentID': '2559437',
				        'Unfinished': 1,
				        'MaxPlayers': '2'
				      },
				      {
				        'prizeValue': [
				          '0.00'
				        ],
				        'unplayed_game_id': '949720',
				        'Fee': '0.00',
				        'FlavorTypeID': '0',
				        'GameID': '1',
				        'StartDate': '2017-03-14 12:34:05',
				        'closed': 1,
				        'EndDate': '2017-03-14 12:39:05',
				        'FlavorName': '1-Player Cash Warm-Up Solitaire Rush (automation)',
				        'PlayerWon': 0,
				        'NumPlayers': '1',
				        'Winnings': null,
				        'GameName': 'Solitaire Rush',
				        'TotalPrizeAmount': '0.00',
				        'FlavorType': 'Warm-Up',
				        'WinnerDeclared': 'f',
				        'TournamentID': '2559441',
				        'Unfinished': 1,
				        'MaxPlayers': '1'
				      },
				      {
				        'prizeValue': [
				          '0.00'
				        ],
				        'unplayed_game_id': null,
				        'Fee': '0.00',
				        'FlavorDescription': 'Kang &amp; Kodos',
				        'FlavorTypeID': '5',
				        'GameID': '115',
				        'StartDate': '2017-03-14 12:42:56',
				        'closed': 0,
				        'EndDate': null,
				        'FlavorName': 'Wheel of Fortune&reg; Mobil Full Practice',
				        'PlayerWon': 0,
				        'NumPlayers': '1',
				        'Winnings': null,
				        'GameName': 'Wheel of Fortune&reg;',
				        'TotalPrizeAmount': '0.00',
				        'FlavorType': 'Limited Entry',
				        'WinnerDeclared': 'f',
				        'TournamentID': '2559445',
				        'Unfinished': null,
				        'MaxPlayers': '2'
				      },
				      {
				        'prizeValue': [
				          '1.00'
				        ],
				        'unplayed_game_id': null,
				        'Fee': '0.50',
				        'FlavorTypeID': '5',
				        'GameID': '35',
				        'StartDate': '2017-03-14 12:40:49',
				        'closed': 0,
				        'EndDate': null,
				        'FlavorName': '2-Player SCRABBLE Cubes',
				        'PlayerWon': 0,
				        'NumPlayers': '1',
				        'Winnings': null,
				        'GameName': 'SCRABBLE Cubes',
				        'TotalPrizeAmount': '0.00',
				        'FlavorType': 'Limited Entry',
				        'WinnerDeclared': 'f',
				        'TournamentID': '2559444',
				        'Unfinished': null,
				        'MaxPlayers': '2'
				      },
				      {
				        'prizeValue': [
				          '1.00'
				        ],
				        'unplayed_game_id': null,
				        'Fee': '0.50',
				        'FlavorTypeID': '5',
				        'GameID': '35',
				        'StartDate': '2017-03-09 13:35:42',
				        'closed': 1,
				        'EndDate': '2017-03-14 12:44:31',
				        'FlavorName': '2-Player SCRABBLE Cubes',
				        'PlayerWon': 1,
				        'NumPlayers': '2',
				        'Winnings': 'None',
				        'GameName': 'SCRABBLE Cubes',
				        'TotalPrizeAmount': '0.00',
				        'FlavorType': 'Limited Entry',
				        'WinnerDeclared': 't',
				        'TournamentID': '2558826',
				        'Unfinished': null,
				        'MaxPlayers': '2'
				      }
				    ]
				  }
				}
				 ";

				return data;
			}
		}
		#endif // #if DEBUG
	}
}
