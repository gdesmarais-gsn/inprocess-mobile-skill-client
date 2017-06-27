using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Phoenix.Utils;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;

namespace GSN.Skill.Phoenix.Requests.Tournament
{
	public struct TournamentResultData
	{
		public Result result;

		public struct Result
		{
			public TournamentResult tournament;
			public User user;
			public string fb_app_id;
			public ListFlavorsData.Flavor flavor;
		}
		public struct PlayerData
		{
			public string Score;
			public string Won;  // Actually the amount of money won.  Is null if no money won.
			public string Username;
			public string UserID;
			// The following map to game status
			// "0"  Not Started
			// "1"  Completed
			// "2"  Still Playing
			// "3"  ?
			// "--" Open Slot
			public string GameStatus;
			public string Place; // Can be a number "1" or "2" or a "--" 
		}
		public struct TournamentResult : ITournamentResultData
		{
			// Specific new stuff in results
			public bool showPlayTypeAgainButton;  // True when a user can not win it now, and tourn type is available.
			public bool showPlayAnotherTournButton; // True when a user can not win it now, the tournament type isn't available, and the tourn is not re-enterable
			public bool reEnterableByUser; // True when there are open slots in the tourn, and that tourn type allows re-entry.
			public PlayerData[] PlayerData;
			public PlayerData userHighScoreData; // This indicates the highest score the logged in user got across all his entries for this tournament. 
			public string is_P1; // "no" || "yes"
			public bool canWinItNow;
			public int winItNowRemainingSeconds; // If a user can win it now, there will be an extra piece of data that is returned that indicates how many seconds they have to decide


			// SHARED WITH Game History
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

	public class TournamentResultRequestData : WebGETRequest<TournamentResultData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Tournament;
		private const string URL_KEY = "view_standings";

		public override TournamentResultData Response { get; set; }

		private int _tournament_id;

		public TournamentResultRequestData(int tournament_id) : base()
		{
			_tournament_id = tournament_id;
		}

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY) + "?tourn_id=" + _tournament_id;//return "https://qaweb2.worldwinner.com/api/tournament/view_standings?tourn_id=" + _tournament_id;
			}
		}

		public User userData
		{
			get { return Response.result.user; }
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
				    'tournament': {
				      'prizeValue': [
				        '1.00'
				      ],
				      'unplayed_game_id': null,
				      'showPlayTypeAgainButton': 1,
				      'PlayerData': [
				        {
				          'Score': '6',
				          'Won': null,
				          'Username': 'thefaize',
				          'UserID': '1082721',
				          'GameStatus': '1',
				          'Place': '1'
				        },
				        {
				          'Score': '--',
				          'Won': null,
				          'Username': '',
				          'UserID': '-1',
				          'GameStatus': '--',
				          'Place': 2
				        }
				      ],
				      'Fee': '0.50',
				      'userHighScoreData': {
				        'Score': '6',
				        'Won': null,
				        'Username': 'thefaize',
				        'UserID': '1082721',
				        'GameStatus': '1',
				        'Place': '1'
				      },
				      'is_P1': 'no',
				      'reEnterableByUser': 1,
				      'FlavorTypeID': '5',
				      'GameID': '35',
				      'StartDate': '2017-03-15 11:24:12',
				      'closed': 0,
				      'EndDate': null,
				      'FlavorName': '2-Player SCRABBLE Cubes',
				      'PlayerWon': 0,
				      'NumPlayers': '1',
				      'Winnings': null,
				      'GameName': 'SCRABBLE Cubes',
				      'TotalPrizeAmount': '0.00',
				      'canWinItNow': 0,
				      'FlavorType': 'Limited Entry',
				      'WinnerDeclared': 'f',
				      'TournamentID': '2559464',
				      'Unfinished': null,
				      'MaxPlayers': '2',
				      'showPlayAnotherTournButton': 0
				    },
				    'user': {
				      'reward_points': '700',
				      'cash_balance': '0.00',
				      'user_id': '1082721',
				      'game_credits': '0.00',
				      'username': 'thefaize'
				    },
				    'fb_app_id': '646832802073674',
				    'flavor': {
				      'prizeValue': [
				        '1.00'
				      ],
				      'multiplierEligible': 'yes',
				      'Fee': '0.00',
				      'FlavorID': '25669',
				      'reward_points': 'None',
				      'FlavorParentTemplateID': null,
				      'FlavorTypeID': '5',
				      'Permissions': 1,
				      'min_cash_games_required': 0,
				      'FlavorName': '2-Player SCRABBLE Cubes',
				      'max_cash_games_permitted': 99999999,
				      'max_game_specific_plays_permitted': 99999999,
				      'min_game_specific_plays_required': 0,
				      'GametypeName': 'SCRABBLE Cubes',
				      'FlavorPurse': '1.00',
				      'GameOCXObjectName': 'scrabblecubes',
				      'aux_data': [],
				      'FlavorType': 'Limited Entry',
				      'GametypeID': '35',
				      'MaxPlayers': '2'
				    }
				  }
				}
				 ";

				return data;
			}
		}
		#endif // #if DEBUG
	}
}
