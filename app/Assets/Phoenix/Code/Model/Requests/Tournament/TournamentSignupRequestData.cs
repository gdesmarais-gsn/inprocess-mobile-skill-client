using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using GSN.Skill.Utils;
using Newtonsoft.Json.Linq;
using GSN.Skill.Phoenix.Model.Data;

namespace GSN.Skill.Phoenix.Requests.Tournament
{
	public struct TournamentSignupData
	{
		public Result result;

		public struct Result
		{
			public AccountLoginData.EnvVars env_vars;
			public User user;
			public RequiredGameStartData game_data;
		}

		public struct RequiredGameStartData
		{
			public string tourn_session_id;
			public string tourn_id;
			public string unplayed_game_id; // Can be null
			public string gameServer;
			public string join_record;
		}
	}

	public enum TournamentSignupType
	{
		REENTER,
		NORMAL,
		PREVIOUSLY_UNPLAYED
	}

	public class TournamentSignupRequestData : WebPOSTRequest<TournamentSignupData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Tournament;
		private const string URL_KEY = "signup_for_tournament";

		private const string FLAVOR_ID_PARAM_NAME = "flavor_id";
		private const string TOKEN_PARAM_NAME = "token";
		private const string TOURN_ID_PARAM_NAME = "tourn_id";
		private const string UNPLAYED_GAME_ID_PARAM_NAME = "unplayed_game_id";
		private const string CLIENT_ID_PARAM_NAME = "client_id";
		private const string SERVER_TYPE_PARAM_NAME = "server_type";
		private const string NODE_SERVER_TYPE = "node";
		private const string MONO_SERVER_TYPE = "mono";
		private const string UNDEF_SERVER_TYPE = "";
		private const string ASYNC_SERVER_TYPE = "async";

		public string flavorID{get;private set;}
		private string _token; // This needs to point to the token data that gets returned after a user successfully logs in.
		private string _tournID;
		private string _unplayedGameID;
		private int    _gameID;
		public  int    gameID { get { return _gameID; } }

		public override TournamentSignupData Response { get; set; }

		private TournamentSignupType _signupType;
		private DeviceData _deviceData;
		private string _client_id;

		private CurrentUser _currentUser;

		public void SetCurrentUser(CurrentUser currentUser)
		{
			_currentUser = currentUser;
		}

		public void SetSignupForTournamentData(string flavor_id, string token, string client_id, int game_id)
		{
			_signupType = TournamentSignupType.NORMAL;
			flavorID = flavor_id;
			_token = token;
			_client_id = client_id;
			_tournID = null;
			_unplayedGameID = null;
			_gameID = game_id;
		}
		public void SetReEnterTournamentData(string flavor_id, string token, string tourn_id, string client_id, int game_id)
		{
			_signupType = TournamentSignupType.REENTER;
			flavorID = flavor_id;
			_token = token;
			_tournID = tourn_id;
			_client_id = client_id;
			_unplayedGameID = null;
			_gameID = game_id;
		}
		public void SetSignupForUnplayedTournamentData(string flavor_id, string token, string tourn_id, string unplayed_game_id, string client_id, int game_id)
		{
			_signupType = TournamentSignupType.PREVIOUSLY_UNPLAYED;
			flavorID = flavor_id;
			_token = token;
			_tournID = tourn_id;
			_unplayedGameID = unplayed_game_id;
			_client_id = client_id;
			_gameID = game_id;
		}


		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/tournament/signup_for_tournament";

			}
		}

		public User userData
		{
			get { return Response.result.user; }
		}

		public override string CookieSessionIDKey
		{
			get { return Response.result.env_vars.cookieName; }
		}

		public override JContainer RequestBody {
			/* Here is what the WW API is expecting as a request body.  Depending on which optional values
			 {
				"flavor_id" : "value",
				"token" : "value",
				"client_id" : "optional",
				"server_type" : "optional", // **
				"tourn_id" : "optional",
				"unplayed_game_id" : "optional"
			 } 

			 // ** Server type can be:
			         node       = used for most html5 games
			         left blank = flash games
			         mono       = used for tetris
			         async      = games that use the Sparcade era validation server.
			*/

			get {
				JObject body = new JObject();
				if (string.IsNullOrEmpty(flavorID))
				{
					GsnDebug.LogError("Attempting to signup for tournament without flavor id");
				}
				if (string.IsNullOrEmpty(_currentUser.csrfToken))
				{
					GsnDebug.LogError("Attempting to signup for tournament without token");
				}

				body.Add(FLAVOR_ID_PARAM_NAME, flavorID);
				body.Add(TOKEN_PARAM_NAME, _currentUser.csrfToken);

				// HACK: Native Tripeaks
				// For web games, we may also need to be able to decide if the server type is mono or node, too
				if(121 == _gameID)
				{
					body.Add(SERVER_TYPE_PARAM_NAME,ASYNC_SERVER_TYPE);
				}
				else
				{
					body.Add(SERVER_TYPE_PARAM_NAME,NODE_SERVER_TYPE);
				}
				// If we have a client_id set, attach it.
				if (!string.IsNullOrEmpty(_client_id))
				{
					body.Add(CLIENT_ID_PARAM_NAME,_client_id);
				}
				else
				{
					GsnDebug.LogError("Signing up for a tournament without client_id set.  Call RegisterDeviceData to get a client id and set it before calling this.");
				}
				switch(_signupType)
				{
					// We will want to allow players to play previously paid for but unstarted tournaments.
					// The request needs a tourn id and an unplayed game_id.  The WW API knows what to do when it gets these params in the signup call.
					case TournamentSignupType.PREVIOUSLY_UNPLAYED:
						body.Add(TOURN_ID_PARAM_NAME, _tournID);
						body.Add(UNPLAYED_GAME_ID_PARAM_NAME, _unplayedGameID);
						break;
					// Similarly, if we want to re-enter a tournament, we add a tourn_id to the request. 
					case TournamentSignupType.REENTER:
						body.Add(TOURN_ID_PARAM_NAME, _tournID);
						break;
					// Otherwise, we don't have any additional params to add to the request
					case TournamentSignupType.NORMAL:
						break;
					default:
						GsnDebug.LogError("Attempting to signup for tournament with invalid signup type " + _signupType);
						break;
				}
				return body;
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
				    'game_data': {
				      'tourn_session_id': 'Ebv6ePRw',
				      'tourn_id': '2559451',
				      'unplayed_game_id': null,
				      'gameServer': 'qa2gs2.worldwinner.com:9001'
				    },
				    'env_vars': {
				      'light_features': {
				        'mobilePromoPage': 1
				      },
				      'cookieName': 'qaweb2.worldwinner.comSID_'
				    },
				    'user': {
				      'reward_points': '700',
				      'cash_balance': '0.00',
				      'user_id': '1082721',
				      'game_credits': '0.00',
				      'username': 'thefaize'
				    }
				  }
				}";

				return data;
			}
		}
		#endif // #if DEBUG
	}
}
