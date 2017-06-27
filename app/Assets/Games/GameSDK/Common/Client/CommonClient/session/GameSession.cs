using System.IO;
using System.Collections.Generic;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System.Text;
using System.Net;
using System.Linq;
using System;
using UnityEngine;
using MsgPack.Serialization;

using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common.Utils.WebLogging;
using GSN.Skill.Games.Common.Model;
using GSN.Skill.TriPeaks.Requests.Game;
using GSN.Skill.Requests;
using GSN.Skill.Games.Common.Client.Game;
using System.Collections;

namespace GSN.Skill.Games.Common.Client.Session {

	/// A GameSession is a MonoBehaviour which serves as a functional proxy for the back-end, specifically regarding game validation.
	/**

		The GameSession makes it easy for the game client to join a tournament, start a game, and collect game input in such a way
		that it can be passed to the back end for validation.

		The GameSession performs network communication with the back end on behalf of the game client.

	*/

	public abstract class GameSessionBase {

		protected GameLog gameLog; // store all relevant events for validation. 

		public enum FailReasons{
			Success,
			StartBeforeJoin,
			MissingGameID,
			MissingTournamentID,
			MissingStartSeed,
			ValidationServiceFailure,
			InvalidHost,
			APIFailure
		};
		public string ValidationHost { get; set; }
		public string WorldWinnerHost { get; set; }
		public string APIStartGamePath { get; set; }

		public int NotarizeOutstanding {
			get {
				return (null == gameLog) ? 0 : gameLog.NotarizeOutstanding;
			}
		}

		private string _authzToken = null;
		public string AuthzToken {
			get {
				return _authzToken;
			}
			protected set {
				_authzToken = value;
			}
		}

		public void WriteGameLogToFile(string fn, bool text = false) {

			//gameLog.Notarize ();
			gameLog.SaveLog(fn, text);
		}
		protected Dictionary<string, string> _joinRecord = null;
		protected Dictionary<string, string> _startRecord = null;

		protected Dictionary<string, string> _joinBody = null;
		protected Dictionary<string, string> _startBody = null;

		protected Dictionary<string, string> _setup = null;
		//		protected Dictionary<string, string> _options = null;

		protected byte[] _joinHunkHash;

		public Dictionary<string, string> JoinBody {
			get {
				return _joinBody;
			}
			protected set {
				_joinBody = value;
			}
		}

		public Dictionary<string, string> StartBody {
			get {
				return _startBody;
			}
			protected set {
				_startBody = value;
			}
		}

		public Dictionary<string, string> JoinRecord {
			get {
				/*
				if (null == _joinRecord && null != _options) {
					_joinRecord = _options;
				}
				*/
				return _joinRecord;
			}
			protected set {
				_joinRecord = value;
			}
		}

		public Dictionary<string, string> StartRecord {
			get {
				if (null == _startRecord && null != _setup) {
					_startRecord = _setup;
				}
				return _startRecord;
			}
			protected set {
				_startRecord = value;
			}
		}

		public Dictionary<string, string> Setup {
			get {
				return _setup;
			}
			set {
				// TODO - too many copies of this (well, references, but still)
				_setup = value;
				_startRecord = _setup;
			}
		}
		public abstract void JoinTournament (GameSession.GameSetupOptions gameSetupOptions, Action doneAction);
	}

	public class GameSession : GameSessionBase, IGameSession, IDataSafe {

 		public bool ActuallyValidate = true;	// Set this to true to use MessagePack.

 		public RequestWrapper ErrorRequestWrapper {
 			get; private set;
 		}

		public GameSession () {
			Url = "http://localhost:8000/1/";

			Done = true;
		}
		/// Whether the most recent request (JoinTournament, StartGame, or Validate) has been completed.
		/**
			You generally don't need to use this, because inside a completion Action, the request is definitely already done. 
		*/
		public bool Done {
			get; private set;
		}

		// The GameSession object IS an IDataSafe.
		public IDataSafe DataSafe {
			get {
				return this;
			}
		}

		/// Dictionary containing the body of the join response
		public new Dictionary<string, string> JoinBody {
			get; private set;
		}

		/// Dictionary containing the joindata from the JoinBody
		public new Dictionary<string, string> JoinRecord {
			get; private set;
		}

		/// Dictionary containing the body of the start response
		public new Dictionary<string, string> StartBody {
			get; private set;
		}

		/// Dictionary containing the startdata from the startbody.
		public new Dictionary<string, string> StartRecord {
			get; private set;
		}

		/**
		 * Utility structure to carry around a number of options efficiently
		 * 
		*/
		public struct GameSetupOptions {
			public string userID;
			public string deviceID;
			public string clientID;
			public string gameID;
			public string txSessionID;
			public string tournID;
			public string wwUrlBase;
			public string wwStartGamePath;
			public string validationUrlBase;
			public string token; // TODO: Remove?
			public string titleName;
			public string modelHash;
			public string jwtAuthorizationToken;
			public string joinDataJSON;
			public Dictionary<string, string> setup;
			public Dictionary<string, string> options;
		}

		/// Dictionary containing the results of the Validate request.
		public Dictionary<string, string> ValidationResponse {
			get; private set;
		}

		/// Indicates whether the most recent request was successful.
		public bool Success {
			get; private set;
		}

		/// Indicates why the most recent request failed
		public FailReasons FailReason {
			get; set;
		}

		/// How long we should wait for the next request to complete.
		public int Timeout { 
			get;set;
		}

		/// Base url (including final slash) where we will send our requests.
		public string Url {
			set; private get; // Yes. Write-only.
		}

		private string notaryCompression = SecureHunk.HUNK_COMPRESSION_GZIP;

		private string _txsessionid;

		public string TxSessionID {
			get {
				return _txsessionid;
			}
			set {
				_txsessionid = value;
			}
		}

		private string _tournamentid;

		public string TournamentId {
			get {
				return _tournamentid;
			}
			set {
				_tournamentid = value;
			}
		}

		private string _gameid;

		public string GameId {
			get {
				return _gameid;
			}
			set {
				_gameid = value;
			}
		}

		private string _clientid;

		public string ClientId {
			get { 
				return _clientid;
			}
			set { 
				_clientid = value;
			}
		}

		private string _userid;

		public string UserId {
			get { 
				return _userid;
			}
			set { 
				_userid = value;
			}
		}

		public string NotaryCompression {

			get {
				return notaryCompression;
			} 
			set {
				notaryCompression = value;
				if (gameLog != null) {
					gameLog.NotaryCompression = value;
				}
			}
		}

		public RequestWrapper.requestCustomizer customizeRequest{
			get;set;
		}
        
        public GameSessionExitMode ExitMode 
        {
			get;set;
		}
		public GameValidationResult ValidationResult {
			get;
			set;
		}
		/// Joins a tournament. You pass in the tournament type id.
		/**

			On completion of the Join request, the following members are set, and are accessible within  the doneAction:

			Member | Meaning
			------|-----
			Success | Whether the Join request succeded
			FailReason | Why it failed, if it failed.
			JoinRecord | Results of the successful Join request.

			If this function succeeds, JoinRecord will be non-null when doneAction is called.

			JoinRecord is also added as an entry in the game log, for Notarization and Validation.

		*/

		public override void JoinTournament (GameSetupOptions gameSetupOptions, Action doneAction) {
			WebLogger.instance.logInfo ("[VAL] Joining Tournament ", gameSetupOptions);

			// Clear the game log. 
			//gameLog = new GameLog (Url, customizeRequest, false);
			// TODO - this is a lot of options - should there be all of them?
			gameLog = new GameLog ("", null, false);
			gameLog.NotaryCompression = notaryCompression;
			StartRecord = null;
			JoinBody = null;
			StartBody = null;
			_startRecord = null;

			// Start of with failure to ensure our exits before validation show the validation never happened
			ValidationResult = GameValidationResult.ValidationFailure;

			// Set the JWT authorization token
			AuthzToken = gameSetupOptions.jwtAuthorizationToken;

			ValidationHost = gameSetupOptions.validationUrlBase;
			WorldWinnerHost = gameSetupOptions.wwUrlBase;
			APIStartGamePath = (null == gameSetupOptions.wwStartGamePath) ? "/api/tournament/start_game/" : gameSetupOptions.wwStartGamePath;

			// TODO - JoinRecord needs to be the contents of game_data
			// game_data needs to have title_name, model_hash
			JoinRecord = gameSetupOptions.options; 

			gameLog.StartResponse = null;

			TxSessionID 	= gameSetupOptions.txSessionID;
			TournamentId 	= gameSetupOptions.tournID;		
			GameId 			= gameSetupOptions.gameID;
			ClientId 		= gameSetupOptions.clientID;
			UserId 			= gameSetupOptions.userID;

			TriPeaksStageRequestData joinGame = new TriPeaksStageRequestData ();
			joinGame.host = gameSetupOptions.validationUrlBase;
			joinGame.SetStage (TriPeaksStageRequestData.Stage.Join);
			joinGame.SetStageData (gameSetupOptions.joinDataJSON);

			joinGame.OnCompleteHandler += (request) => { 
				GsnDebug.Log ("TriPeaks Game Join Done."); 
				TriPeaksNotaryData.Result result = ((TriPeaksStageRequestData) request).Response.result;
				if (null == result.hmac) {
					FailReason = FailReasons.ValidationServiceFailure;
					ArenaProxy.instance.ReturnFromGame();
					// TODO - we have a failed join, need to implement error handline
				}
				else {
					SecureHunk hunk = joinGame.secureHunk;
					hunk.hmac = result.hmac;
					hunk.keyVersion = result.keyVersion;
					hunk.timeStamp = result.timeStamp;
					gameLog.JoinResponse = GameLog.Serialize<SecureHunk> (hunk);

					// Save this hunk's hash for start game initialization
					_joinHunkHash = hunk.hash;

					doneAction();
				}
			};
			WebRequester.Instance.FetchRequest(joinGame);

			Success = true;
		}

		/// Starts the game for a tournament you have already joined.
		public void StartGame (Action doneAction)
		{
			GsnDebug.Log ("GameSession::StartGame");
			if (!Done) {
				GsnDebug.Log ("operation already in progress");
				throw new SystemException ("operation already in progress");
			}
			gameLog.AddSync();

			Done = false;

			// make sure we've joined a tournament first, and have not started a game yet.
			if (JoinRecord == null || StartRecord != null) {
				FailReason = FailReasons.StartBeforeJoin;
				GsnDebug.Log (FailReason);
				GsnDebug.Log (JoinRecord);
				GsnDebug.Log (StartRecord);
				return;
			}

			if (_gameid == null) {
				FailReason = FailReasons.MissingGameID;
				GsnDebug.Log (FailReason);
				return;
			}

			WebLogger.instance.logInfo ("[VAL] Starting Game ", _gameid);

			if (_tournamentid == null) {
				FailReason = FailReasons.MissingTournamentID;
				GsnDebug.Log (FailReason);
				return;
			}


			GsnDebug.Log ("Preparing start game data");
			TriPeaksStartGameRequestData startGame = new TriPeaksStartGameRequestData ();
			startGame.host = WorldWinnerHost;
			startGame.path = APIStartGamePath;

			// TODO - what is token

			startGame.SetTriPeaksStartGameData (
				_txsessionid,
				_clientid,
				_userid,
				_gameid, 
				_tournamentid
			);

			startGame.OnFailHandler += (request) => {
				Debug.Log ("startGame failure: " + ((TriPeaksStartGameRequestData)request).error.type.ToString());
				//IGameSession gameSession = ArenaProxy.instance.gameSession;
				FailReason = FailReasons.APIFailure;
				ExitMode = GameSessionExitMode.FailedToStart;
				ArenaProxy.instance.ReturnFromGame();
			}; // TODO - better fail handling

			startGame.OnCompleteHandler += (request) => { 
				Debug.Log ("TriPeaks Game Start Done."); 
				// TODO - error handling
				TriPeaksStartGameData.Result result = ((TriPeaksStartGameRequestData)request).Response.result;

				TriPeaksStartGameData.TriPeaksStartData start_data = (TriPeaksStartGameData.TriPeaksStartData)result.start_data;
				string seed = start_data.Seed;


				if (seed == null || seed.Length == 0 || Convert.ToUInt32 (seed) == 0) {
					Success = false;
					FailReason = FailReasons.MissingStartSeed;
					return;
				}

				string startJSON = JsonConvert.SerializeObject(start_data);
				JObject startObj = JObject.Parse(startJSON);

				//Dictionary<string, string> startDict = new Dictionary<string, string>();
				//startDict.Add("start_data", startObj.ToObject<Dictionary<string, string>>());
				//startDict.Add("start_data", startJSON);
				StartRecord = startObj.ToObject<Dictionary<string, string>>();
				//StartRecord = startDict;

				TriPeaksStageRequestData notarizeStartGame = new TriPeaksStageRequestData ();
				notarizeStartGame.host = ValidationHost;
				notarizeStartGame.SetStage (TriPeaksStageRequestData.Stage.Start);
				notarizeStartGame.SetStageData (startJSON, _joinHunkHash);

				notarizeStartGame.OnCompleteHandler += (nrequest) => { 
					Debug.Log ("TriPeaks Start Game Notarize Done."); 
					TriPeaksNotaryData.Result nr = ((TriPeaksStageRequestData) nrequest).Response.result;
					if (null == nr.hmac) {
						Success = false;
						FailReason = FailReasons.ValidationServiceFailure;
						Done = true;
						// TODO - how to drop out with correct failure
						return;
					}
					SecureHunk hunk = notarizeStartGame.secureHunk;
					hunk.hmac = nr.hmac;
					hunk.keyVersion = nr.keyVersion;
					hunk.timeStamp = nr.timeStamp;
					gameLog.StartResponse = GameLog.Serialize<SecureHunk> (hunk);

					Done = true;
					doneAction();
				};
				WebRequester.Instance.FetchRequest(notarizeStartGame);
			};
			WebRequester.Instance.FetchRequest (startGame);
		}
		/// Adds a record of the specified type to the game log. Each record is just a string. Generally it is serialized JSON.

		/// Adds a record to the game log.
		public void AddRecord(string type, byte [] s, int time) {
			// TODO - possibly block records coming in if the last sync has happened
			gameLog.Add (type, s, time);
		}

		public void AddData(byte [] data) {
			gameLog.AddData (data);
		}
		
		/// Validates the game log. Sends it to the validation server for Validation and official results.
		/// It needs to wait until all notarizations are complete
		public void Validate (Action doneAction 		///< Action to call on completion of Validation.
		)
		{
			gameLog.ValidateSync (doneAction);
		}


		// call this if you think validation is taking too long.
		public void AbortValidate() {
		}

		/// Call this function when you are done with this GameSession. Typically this is after you've gotten the validation results out of it.
		public void Retire() {
		}
		
		public void Abandon()
		{
		}

		private ValidateJob validateJob;

		public Job ValidateJob {
			get {
				if (validateJob == null) { // if we don't have one, make one.
					validateJob = new ValidateJob(this);
				}
				return validateJob;
			}
		}

		private byte [] currentFakeHash; 

		private FakeWebResponse MakeFakeJoinResponse(WebRequest request, byte[] postBytes, Stream postStream) {

			SecureHunk hunk = new SecureHunk();

			hunk.type = SecureHunk.HUNK_TYPE_JOIN;
			hunk.timeStamp = Encoding.UTF8.GetBytes("some time");
			hunk.keyVersion = Encoding.UTF8.GetBytes("1");

			// copy the body of the Join request.
			Dictionary<string, string> jbody = (Dictionary<string, string>) GameLog.Deserialize<Dictionary < string, string > >(postBytes);

			Dictionary<string, string> jdata = new Dictionary<string, string>();

			string jstring = JsonConvert.SerializeObject(jdata);

			jbody.Add("game_id", "500");
			jbody.Add("tournament_id", "34");

			jbody.Add("join_data", jstring);

			jstring = JsonConvert.SerializeObject(jbody);

			hunk.SetBody(Encoding.UTF8.GetBytes(jstring), SecureHunk.HUNK_COMPRESSION_NONE, GameLog.InitialHash);

			currentFakeHash = hunk.hash;

			return new FakeWebResponse(true, GameLog.Serialize<SecureHunk>(hunk), 200);

		}

		private FakeWebResponse MakeFakeStartResponse(WebRequest request, byte[] postBytes, Stream postStream) {

			SecureHunk hunk = new SecureHunk();

			hunk.type = SecureHunk.HUNK_TYPE_START;
			hunk.timeStamp = Encoding.UTF8.GetBytes("some time");
			hunk.keyVersion = Encoding.UTF8.GetBytes("1");

			Dictionary<string, string> sdata = new Dictionary<string, string>();

			sdata.Add("Seed", "500");

			string sstring = JsonConvert.SerializeObject(sdata);

			Dictionary<string, string> sbody = new Dictionary<string, string>();

			sbody.Add("start_data", sstring);

			sstring = JsonConvert.SerializeObject(sbody);

			hunk.SetBody(Encoding.UTF8.GetBytes(sstring), SecureHunk.HUNK_COMPRESSION_NONE, currentFakeHash);

			return new FakeWebResponse(true, GameLog.Serialize<SecureHunk>(hunk), 200);

		}

		// This function EITHER calls the doneAction, or it calls the public dataRequestFailAction.
		// TODO - re-implement this operation if needed

		public void FetchData(Dictionary<string, string> request, Action<Dictionary<string, string> > doneAction) {
			/*

			byte [] dataRequest; // binary version of the request.

			Dictionary<string, string> dataResponse = null; // dictionary form of the response

			// action to exit unsuccessfully.
			Action failout = () => {
				dataResponse = null;
				actionQueue.EndContext();
			};

			// Push context, and create an action to exit successfully.
			actionQueue.BeginContext("GS:FetchData", 0, () => {

				// MsgPack up the request, and send it off.
				dataRequest = GameLog.Serialize<Dictionary<string, string> >(request);

				PerseverantWebRequestJob pwrj = new PerseverantWebRequestJob();

				pwrj.Wrapper.url = Url + "data_request/" + titleName;
				pwrj.Wrapper.customizeRequest = customizeRequest;	// set the request customizer.
				pwrj.Wrapper.httpMethod = WebRequestMethods.Http.Post;
				pwrj.Wrapper.contentType = RequestWrapper.MSGPACK_CONTENT;

				pwrj.Wrapper.bodyBytes = dataRequest; // set the request bytes.

				pwrj.Start(() => {

					if (pwrj.Failed) {
						failout();
					}
					else
					{
						byte [] response = pwrj.Wrapper.Dispatcher.ResponseBytes;

						dataResponse = (Dictionary<string, string> )GameLog.Deserialize<Dictionary<string, string> >(response);

						AddData(dataRequest);
						AddData(response);

						actionQueue.EndContext();
					}
				}, "fetchData");

			}, failout, () => {
				doneAction(dataResponse);
			});

		*/
		}
	}
}
