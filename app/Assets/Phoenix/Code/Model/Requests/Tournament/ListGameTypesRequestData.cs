using System;
using System.Collections.Generic;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Phoenix.Requests.Tournament
{
	public struct ListGameTypesData
	{
		public Result result;

		public struct GameMap
		{
			public string desktop_gametype_id;
			public string mobile_gametype_id;
		}

		public struct GameType
		{
			public string game_release_status;
			public string name;
			public string icon_uri;
			public string promo_short;
			public string category;
			public string gametype_id;
			public string ocx_objectname;
			public string ocx_codebase;
		}

		public struct Result
		{
			public Dictionary<string, GameMap> gameMap;
			public Dictionary<string, GameType> gametypes;
		}
	}

	public class ListGameTypesRequestData : WebGETRequest<ListGameTypesData>
	{
		private const int REFRESH_DATA_SECONDS_ONE_DAY = 86400;

		private const APIReference.Category API_CATEGORY = APIReference.Category.Tournament;
		private const string URL_KEY = "list_game_types";
		private const string CATEGORY_PARAM = "category";
		private const string MOBILEAPP_CATEGORY = "mobileapp";

		public override ListGameTypesData Response { get; set; }


		public override int RefreshDataSeconds
		{
			get { return REFRESH_DATA_SECONDS_ONE_DAY; }
		}

		public override string Url
		{
			get
			{
				//"https://qaweb2.worldwinner.com/api/tournament/list_game_types";
				return String.Format("{0}?{1}={2}", APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY), CATEGORY_PARAM, MOBILEAPP_CATEGORY);
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
				    'user': {
				      'epid': '/C4AEi70TTCVSzuc6CfuIx4TX6UOeFohClys5ti7efjN1oDffIm39ncjMLS3PITZ\\n',
				      'cash_balance': '0.00',
				      'upgrade_bonus_amounts': {
				        '10': 11,
				        '20': 21,
				        '30': 31
				      },
				      'pp_user': 'no',
				      'auth_token': '2a0e15ac536ff0a2727ac2e13986c2be1617eb968306dc66ed447ce0de9d1618',
				      'game_credits': '0.00',
				      'showP1Experience': 1,
				      'is_guest': 'yes',
				      'username': 'rskorski',
				      'reward_points': '14',
				      'createPasswordOnUpgrade': 'no',
				      'user_id': '16393311',
				      'cc_data': 'none',
				      'token': '2204fe8fb237d2d6d1037c1b3a9428b40a3000f173383d76350a90d3'
				    },
				    'gameMap': {
				      '1': {
				        'desktop_gametype_id': '1',
				        'mobile_gametype_id': '1'
				      },
				      '30': {
				        'desktop_gametype_id': '30',
				        'mobile_gametype_id': '115'
				      },
				      '35': {
				        'desktop_gametype_id': '35',
				        'mobile_gametype_id': '116'
				      },
				      '83': {
				        'desktop_gametype_id': '83',
				        'mobile_gametype_id': '113'
				      }
				    },
				    'gametypes': {
				      '1': {
				        'game_release_status': 'live',
				        'name': 'Solitaire Rush',
				        'icon_uri': 'img/gameIcons/SolitaireRush.svg',
				        'promo_short': 'Play NOW!',
				        'category': 'Card',
				        'gametype_id': '1',
				        'ocx_objectname': 'solitairerushhtml5',
				        'ocx_codebase': '/mobilegames/solitairerushhtml5'
				      },
				      '35': {
				        'game_release_status': 'alpha',
				        'name': 'SCRABBLE Cubes',
				        'icon_uri': 'img/gameIcons/ScrabbleCubes.jpg',
				        'promo_short': 'ALPHA',
				        'category': 'Word',
				        'gametype_id': '35',
				        'ocx_objectname': 'scrabblecubeshtml5',
				        'ocx_codebase': '/mobilegames/scrabblecubeshtml5'
				      },
				      '83': {
				        'game_release_status': 'alpha',
				        'name': 'Catch-21',
				        'icon_uri': '/img/gameIcons/Catch21.jpg',
				        'promo_short': 'Play NOW!',
				        'category': 'Card',
				        'gametype_id': '83',
				        'ocx_objectname': 'catch21html5',
				        'ocx_codebase': '/mobilegames/catch21html5'
				      },
				      '115': {
				        'game_release_status': 'live',
				        'name': 'Wheel of Fortune&reg;',
				        'icon_uri': 'img/gameIcons/WheelofFortune.jpg',
				        'promo_short': 'NEWTEST',
				        'category': 'Word',
				        'gametype_id': '115',
				        'ocx_objectname': 'wheeloffortunehtml5',
				        'ocx_codebase': '/mobilegames/wheeloffortunehtml5'
				      },
				      '117': {
				        'game_release_status': 'live',
				        'name': 'Plinko HTML5',
				        'icon_uri': 'img/gameIcons/Plinko.jpg',
				        'promo_short': 'Televisions most popular game show is now available on WorldWinner!',
				        'category': 'Game Show',
				        'gametype_id': '117',
				        'ocx_objectname': 'plinkohtml5',
				        'ocx_codebase': '/mobilegames/plinkohtml5'
				      },
				      '118': {
				        'game_release_status': 'live',
				        'name': 'Big Money',
				        'icon_uri': 'img/gameIcons/BigMoney.jpg',
				        'promo_short': 'Big Money short promo text',
				        'category': 'Arcade',
				        'gametype_id': '118',
				        'ocx_objectname': 'bigmoneyhtml5',
				        'ocx_codebase': '/mobilegames/bigmoneyhtml5'
				      },
				      '121': {
				        'game_release_status': 'live',
				        'name': 'Tripeaks Solitaire',
				        'icon_uri': 'img/gameIcons/BigMoney.jpg',
				        'promo_short': 'Tripeaks Solitaire short promo text',
				        'category': 'Card',
				        'gametype_id': '121',
				        'ocx_objectname': 'tripeakssolitaire',
				        'ocx_codebase': '/cgi/games/tripeakswebgl.html'
				      }
				    }
				  }
				}";

				return data;
			}
		}
#endif // #if DEBUG
	}
}
