using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
namespace GSN.Skill.Phoenix.Requests.Tournament
{
	// Enum of our tournament types.  This list reflects all the tournament types that are currently being returned through ww apis.
	// The numberes matter.  They map back to FlavorTypeID
	public enum TournamentType
	{
		Free = 0,
		LimitedEntry = 1,
		Progressive = 2, // currently unsuported 
		PracticeLimitedEntry = 5,
		FixedPrizeUnlimitedEntry = 8, // currently unsuported 
		Provisional1PracticeLimitedEntry = 37,
		PremiumLimitedEntry = 65,
		DoubleDiamondLimitedEntry = 129, // currently unsuported 
		SuperRewardsLimitedEntry = 257, // currently unsuported 
		BCRFCharityLimitedEntry = 16385, // currently unsuported 
		CharityOTMLimitedEntry = 131073, // currently unsuported 
		CharityOTMMerchandise = 131080, // currently unsuported 
		ProgressiveRush = 524288   // currently unsuported 
	};

	public enum AuxDataType
	{
		One_Card,
		Three_Card,
		Easy,
		Hard,
		Bullet,
		Sun_Set,
		Runner,
		Ticket,
		Stretch,
		Free,
		Up_Arrow,
		Coin
	}
	public struct ListFlavorsData
	{

		public Result result;

		public struct Result
		{
			public string p1_flavor_id; // This is set if the user is in P1 mode.  No other data is returned if user is in P1 mode.
			public RewardMultiplier? rewardMultiplier; // This can be null if no multiplier is active for this game
			public UserPlayData userPlayData;
			public string stateBanned;  // Valid responses: "0", "1"
			public User user;
			public Flavor[] flavors;
		}

		// There are certain times where there will be a reward point multiplier active for a specific 
		// game in worldwinner.  When a RewardMultiplier is set for a game, this structure is set.  
		// It will be null when a multiplier is not set.
		public struct RewardMultiplier
		{
			public int expiration; //ex: 1489550400
			public int start_date; //ex: 1489377600
			public string multiplier; // an integer that we multiply a flavor reward point value with.
		}

		// AUX data is set in the tournament creation tool.  It is a list of visual elements that we show in the html5 site
		public struct Aux_Data
		{
			public string text;
			public string position; // sort order
			public string type;
		}

		// Because some of the tournaments are locked based on how many cash tournaments or how many
		// tournaments for a specific game are played, the ww api returns extra data to help the client
		// make decisions.
		public struct UserPlayData
		{
			public int total_cash_games_played;
			public int total_game_specific_games_played;
		}
		public struct Flavor
		{
			public string[] prizeValue;
			public string multiplierEligible; // yes || no
			public string Fee;
			public string FlavorID;
			public string reward_points;
			public string FlavorDescription;
			public string FlavorParentTemplateID; // Can be null or a string
			public string FlavorTypeID;
			public int Permissions;
			public int min_cash_games_required;
			public string FlavorName;
			public int max_cash_games_permitted;
			public int max_game_specific_plays_permitted;
			public int min_game_specific_plays_required;
			public string GametypeName;
			//public string FlavorPurse;   // We shouldn't use this.  It can be a percentage or a dollar value.  We will need to iterate over the prize data to construct the purse.
			public string GameOCXObjectName;
			public Aux_Data[] aux_data;
			public string FlavorType;
			public string GametypeID;
			public string MaxPlayers;
		}
	}


	public class ListFlavorsRequestData : WebGETRequest<ListFlavorsData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Tournament;
		private const string URL_KEY = "list_flavors";

		public int gameTypeID { get; set; }

		public ListFlavorsRequestData()
		{
		}

		public override ListFlavorsData Response { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY) + "?gametype_id=" + gameTypeID;//return "https://qaweb2.worldwinner.com/api/tournament/list_flavors?gametype_id=" + _gametype_id;
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
				    'userPlayData': {
				      'total_cash_games_played': 0,
				      'total_game_specific_games_played': 0
				    },
				    'rewardMultiplier': {
				      'expiration': 1489550400,
				      'start_date': 1489377600,
				      'multiplier': '5'
				    },
				    'flavors': [
				      {
				        'prizeValue': [
				          '0.00'
				        ],
				        'multiplierEligible': 'yes',
				        'Fee': '0.00',
				        'FlavorID': '28144',
				        'reward_points': 'None',
				        'FlavorDescription': 'Solitaire Rush P1 - Winter Something Theme',
				        'FlavorParentTemplateID': null,
				        'FlavorTypeID': '37',
				        'Permissions': -1,
				        'min_cash_games_required': 0,
				        'FlavorName': 'Solitaire Rush P1 - Winter Something Theme',
				        'max_cash_games_permitted': 0,
				        'max_game_specific_plays_permitted': 999999,
				        'min_game_specific_plays_required': 0,
				        'GametypeName': 'Solitaire Rush',
				        'FlavorPurse': '0.00',
				        'GameOCXObjectName': 'solitairerush',
				        'aux_data': [],
				        'FlavorType': 'Limited Entry',
				        'GametypeID': '1',
				        'MaxPlayers': '1'
				      },
				      {
				        'prizeValue': [
				          '6000.00',
				          '2666.67',
				          '1333.33'
				        ],
				        'multiplierEligible': 'yes',
				        'Fee': '1000.00',
				        'FlavorID': '28183',
				        'reward_points': 'None',
				        'FlavorParentTemplateID': null,
				        'FlavorTypeID': '1',
				        'Permissions': '0',
				        'min_cash_games_required': 0,
				        'FlavorName': '2-Player Solitaire Rush L51',
				        'max_cash_games_permitted': 0,
				        'max_game_specific_plays_permitted': 999999,
				        'min_game_specific_plays_required': 0,
				        'GametypeName': 'Solitaire Rush',
				        'FlavorPurse': '10000.00',
				        'GameOCXObjectName': 'solitairerush',
				        'aux_data': [
				          {
				            'text': 'Experience: 20 Games',
				            'position': '1',
				            'type': 'Bullet'
				          }
				        ],
				        'FlavorType': 'Limited Entry',
				        'GametypeID': '1',
				        'MaxPlayers': '15'
				      },
				      {
				        'prizeValue': [
				          '1.00'
				        ],
				        'multiplierEligible': 'yes',
				        'Fee': '0.00',
				        'FlavorID': '28402',
				        'reward_points': 'None',
				        'FlavorParentTemplateID': null,
				        'FlavorTypeID': '5',
				        'Permissions': 1,
				        'min_cash_games_required': 0,
				        'FlavorName': '2-Player Solitaire Rush (3-Card Draw) PL',
				        'max_cash_games_permitted': 0,
				        'max_game_specific_plays_permitted': 99999999,
				        'min_game_specific_plays_required': 0,
				        'GametypeName': 'Solitaire Rush',
				        'FlavorPurse': '1.00',
				        'GameOCXObjectName': 'solitairerush',
				        'aux_data': [
				          {
				            'text': '3-Card Draw',
				            'position': '1',
				            'type': 'Three_Card'
				          }
				        ],
				        'FlavorType': 'Limited Entry',
				        'GametypeID': '1',
				        'MaxPlayers': '2'
				      },
				      {
				        'prizeValue': [
				          '100.00',
				          '75.00',
				          '25.00',
				          '20.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00',
				          '5.00'
				        ],
				        'multiplierEligible': 'yes',
				        'Fee': '1.00',
				        'FlavorID': '28575',
				        'reward_points': '5',
				        'FlavorDescription': 'Test',
				        'FlavorParentTemplateID': '28575',
				        'FlavorTypeID': '8',
				        'Permissions': '0',
				        'min_cash_games_required': 0,
				        'FlavorName': 'Solitaire Rush (3-Card Draw) $1,500 Daily Delight FPUE TEST',
				        'max_cash_games_permitted': 999999999,
				        'max_game_specific_plays_permitted': 999999999,
				        'min_game_specific_plays_required': 0,
				        'GametypeName': 'Solitaire Rush',
				        'FlavorPurse': '1500.00',
				        'GameOCXObjectName': 'solitairerush',
				        'aux_data': [],
				        'FlavorType': 'Unlimited Entry',
				        'GametypeID': '1',
				        'MaxPlayers': null
				      }
				    ],
				    'user': {
				      'reward_points': '300',
				      'cash_balance': '0.00',
				      'user_id': '1082721',
				      'game_credits': '0.00',
				      'username': 'thefaize'
				    },
				    'stateBanned': '0'
				  }
				}";

				return data;
			}
		}
		#endif // #if DEBUG
	}
}
