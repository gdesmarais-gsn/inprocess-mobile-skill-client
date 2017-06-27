using GSN.Skill.Requests;
using Newtonsoft.Json.Linq;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.TriPeaks.Requests.Game
{
	public struct TriPeaksStartGameData 
	{
		public Result result;

		public class Result : TriPeaksResult
		{
			public TriPeaksStartData start_data;
		}
		public class TriPeaksStartData {
			public string Seed;
			public string RedTiki;
			public string BlackTiki;
			public string BolcanoTiki;
			public string BlossomTiki;
			public string GoldenTiki;
			public string SpawnAllTikisDebug;
			public string TikiSpawnChance100Debug;
			public string TrapHazard;
			public string SharkHazard;
			public string DynamiteHazard;
			public string DynamiteUseTime;
		}
	}

	public class TriPeaksStartGameRequestData : TriPeaksRequestData<TriPeaksStartGameData>
	{
		private const string TX_SESSION_ID_NAME 	= "txSession_id";
		private const string CLIENT_ID_PARAM_NAME 	= "client_id";
		private const string USER_ID_PARAM_NAME 	= "user_id";
		private const string GAME_ID_PARAM_NAME 	= "game_id";
		private const string TOURN_ID_PARAM_NAME 	= "tournament_id";

		private string _txSession_id;
		private string _client_id;
		private string _user_id;
		private string _game_id;
		private string _tournament_id;

		public override TriPeaksStartGameData Response { get; set; }

		public TriPeaksStartGameRequestData() {
			path = "/api/tournament/start_game/";
		}


		public void SetTriPeaksStartGameData(string txSession_id , string client_id, string user_id, string game_id, string tournament_id)
		{
			_txSession_id 	= txSession_id;
			_client_id 		= client_id;
			_user_id 		= user_id;
			_game_id 		= game_id;
			_tournament_id 	= tournament_id;
		}

		public override Newtonsoft.Json.Linq.JContainer RequestBody {
			get {
				JObject body = new JObject();
				if (string.IsNullOrEmpty (_txSession_id)) {
					GsnDebug.LogError ("Attempting to start TriPeaks without txSession_id");
				} else {
					body.Add (TX_SESSION_ID_NAME, _txSession_id);
				}

				if (string.IsNullOrEmpty (_client_id)) {
					GsnDebug.LogError ("Attempting to start TriPeaks without client_id");
				} else {
					body.Add (CLIENT_ID_PARAM_NAME, _client_id);
				}

				if (string.IsNullOrEmpty (_user_id)) {
					GsnDebug.LogError ("Attempting to start TriPeaks without user_id");
				} else {
					body.Add (USER_ID_PARAM_NAME, _user_id);
				}

				if (string.IsNullOrEmpty (_game_id)) {
					GsnDebug.LogError ("Attempting to start TriPeaks without game_id");
				} else {
					body.Add (GAME_ID_PARAM_NAME, _game_id);
				}

				if (string.IsNullOrEmpty (_tournament_id)) {
					GsnDebug.LogError ("Attempting to start TriPeaks without tournament_id");
				} else {
					body.Add (TOURN_ID_PARAM_NAME, _tournament_id);
				}
					
				return body;
			}
		}

		/*
		public override string CookieSessionIDKey
		{
			get { return Response.result.env_vars.cookieName; }
		}
		*/

		#if DEBUG
		public override string mockPayload
		{
			get
			{
				string requestSpecificData = @"
					'start_data': {
					  	'Seed': '872', 
					  	'RedTiki': '0',
					  	'BlackTiki': '0',
					  	'VolcanoTiki': '0',
					  	'BlossomTiki': '0',
					  	'GoldenTiki': '0',
					  	'SpawnAllTikisDebug': '0',
					  	'TikiSpawnChance100Debug': '0',
					  	'TrapHazard': '0',
					  	'SharkHazard': '0',
					  	'DynamiteHazard': '0',
				    	'DynamiteUseTime': '0',
				   	}";
				return constructMockPayload (requestSpecificData);
			}
		}
		#endif
	}
}
