
using GSN.Skill.Games.Common.Model;
using GSN.Skill.Games.Common;
using GSN.Skill.Games.Common.Client.Session;
using GSN.Skill.Games.Common.Utils;

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Newtonsoft.Json.Linq;
using System.Reflection;
using GSN.Skill.Games.Common.Client.DebugMenu;
using GSN.Skill.TriPeaks.Requests.Game;
using Newtonsoft.Json;
using UnityEngine.SceneManagement;
using System;
using GSN.Skill.Games.Common.Client.Game;


#if UNITY_EDITOR
using UnityEditor;
#endif

namespace GSN.Skill.Games.Common.Client
{
	public class TriPeaksWebEntry : MonoBehaviour

	{
#if UNITY_WEBGL
		const string TITLE_NAME = "TriPeaks"; // the name of the game that will be used by the verification service
		protected string _gameSceneToLoad;
		protected IGameSession _gameSession;
		protected SessionType _gameSessionType;

        void Awake()
        {
            //This mimics base functionality from Phoenix bootstrap to get events working. TODO: look at refactor in the future
            Phoenix.PhoenixEvents.RegisterEvents();
        }

		// Use this for initialization
		void Start ()
		{
			DontDestroyOnLoad (this);

#if DEBUG
			GsnDebug.AddLog (Debug.Log, true);
			GsnDebug.AddLogWarning (Debug.LogWarning, true);
			GsnDebug.AddLogError (Debug.LogError, true);
#endif // #if DEBUG

			// Let the browser determine the optimal framerate
			// See https://docs.unity3d.com/Manual/webgl-performance.html
			Application.targetFrameRate = -1;

			_gameSceneToLoad = "tripeaks";
			VersionInfo.AddGameVersion ("TriPeaks", "ArenaRelease", VersionInfo.sdkVersion, VersionInfo.BUILD_NUMBER);


			// TODO - examie the whole session setup - we don't need most of the live session

			_gameSessionType = SessionType.Real;

			_gameSession = Factory.CreateGameSession (_gameSessionType);
			ArenaProxy.instance.gameSession = _gameSession;

			ArenaProxy.instance.ReturnFromGameAction = ReturnFromGame;

			GsnDebug.Log ("Checking for web player");
			if (Application.platform == RuntimePlatform.WebGLPlayer) {
				GsnDebug.Log ("Game ready, passing control to browser gameReady()");
				Application.ExternalEval ("gameReady()");
			} else {
#if DEBUG
				// This format should trigger the web page embedded format of tournament data
				string joinDataJSON = getMockJoinPayload ();
				ReceiveJoinData (joinDataJSON);
#else
			GsnDebug.LogError ("Cannot start the web loader without browser loading");
#endif
			}
		}

		public void Update ()
		{
			GlobalActionQueue.instance.Process ();
		}

		// Games must implement this function, to create their GameSpecific datasafe plugin.
		// they should return null if they don't use a datasafe.
		protected IDataSafePlugin CreateDataSafePlugin (Dictionary<string, string> joinBody, Dictionary<string, string> joinRecord)
		{
			return null;
		}

		/**
	 	* The call back made by the loading page javascript to pass in join data
	 	* 
		*/

		public void ReceiveJoinData (string joinDataJSON)
		{
			GameSession.GameSetupOptions gameSetupOptions = SetupJoinDataFromJson (joinDataJSON);
			gameSetupOptions.token = "token";
			gameSetupOptions.titleName = getTitleName ();
			gameSetupOptions.modelHash = getModelHash ();

			_gameSession.JoinTournament (gameSetupOptions, () => {
				JoinGameComplete (gameSetupOptions);
			});
		}

		private GameSession.GameSetupOptions SetupJoinDataFromJson (string joinDataJSON)
		{
			return SetupJoinDataFromJson (JObject.Parse (joinDataJSON));
		}

		private GameSession.GameSetupOptions SetupJoinDataFromJson (JObject jbody)
		{
			GameSession.GameSetupOptions gameSetupOptions = new GameSession.GameSetupOptions ();

			gameSetupOptions.jwtAuthorizationToken = (string)jbody ["validate_jwt"];

			gameSetupOptions.userID 			= (string)jbody ["result"] ["game_data"] ["userID"];
			gameSetupOptions.deviceID 			= (string)jbody ["result"] ["game_data"] ["deviceID"];
			gameSetupOptions.clientID 			= (string)jbody ["result"] ["game_data"] ["clientID"];
			gameSetupOptions.gameID 			= (string)jbody ["result"] ["game_data"] ["gameID"];
			gameSetupOptions.txSessionID 		= (string)jbody ["result"] ["game_data"] ["txSessionID"];
			gameSetupOptions.tournID 			= (string)jbody ["result"] ["game_data"] ["tournID"];
			gameSetupOptions.wwUrlBase 			= (string)jbody ["result"] ["game_data"] ["wwUrlBase"];
			gameSetupOptions.validationUrlBase 	= (string)jbody ["result"] ["game_data"] ["validationUrlBase"];
			gameSetupOptions.wwStartGamePath 	= (string)jbody ["result"] ["game_data"] ["startGamePath"];

			//Insert the game_id into the options
			// This could be done with the WW setup data passed into join

			jbody ["result"] ["game_data"] ["options_data"] ["device_id"] = gameSetupOptions.deviceID;
			jbody ["result"] ["game_data"] ["options_data"] ["user_id"] = gameSetupOptions.userID;
			jbody ["result"] ["game_data"] ["options_data"] ["game_id"] = gameSetupOptions.gameID;
			jbody ["result"] ["game_data"] ["options_data"] ["tourn_id"] = gameSetupOptions.tournID;
			jbody ["result"] ["game_data"] ["options_data"] ["model_hash"] = getModelHash ();
			jbody ["result"] ["game_data"] ["options_data"] ["title_name"] = getTitleName ();

			gameSetupOptions.joinDataJSON = jbody ["result"] ["game_data"] ["options_data"].ToString();

			gameSetupOptions.options = jbody ["result"] ["game_data"] ["options_data"].ToObject<Dictionary<string, string>> ();

			return gameSetupOptions;
		}

		private void JoinGameComplete (GameSession.GameSetupOptions gameSetupOptions)
		{
			LoadGameScene (gameSetupOptions);
		}


		private void LoadGameScene (GameSession.GameSetupOptions gameSetupOptions)
		{
            StartCoroutine(InternalLoadSceneAsync(_gameSceneToLoad, LoadSceneMode.Additive, OnGameSceneProgress, OnGameSceneLoaded));
		}

		private IEnumerator InternalLoadSceneAsync(string sceneName, LoadSceneMode loadSceneMode, Action<float> progressCallback, Action completeCallback)
		{
			AsyncOperation asyncOperation = UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(sceneName, loadSceneMode);
			while (!asyncOperation.isDone)
			{
				progressCallback(asyncOperation.progress);
				yield return null;
			}

			completeCallback();
		}

		private void OnGameSceneProgress(float progress)
		{
            Skill.Events.EventDispatcher.DispatchEvent(new Phoenix.UnitySceneProgressEvent(progress / 3.0f));
		}

		private void OnGameSceneLoaded()
		{
			Skill.Events.EventDispatcher.DispatchEvent(new Phoenix.UnitySceneProgressEvent(.33f));
		}

		protected string getTitleName ()
		{
			return TITLE_NAME;
		}

		protected string getModelHash ()
		{
			return GSN.Skill.Phoenix.Model.GameMaps.GetModelHash("TriPeaks");
		}

		private void ReturnFromGame ()
		{
			GsnDebug.Log ("Returned from game, passing control to browser gameExited()");
			string result = (_gameSession.ValidationResult == GameValidationResult.ValidationSuccess) ?
			GameSessionBase.FailReasons.Success.ToString () : _gameSession.FailReason.ToString (); 
			// Use the enum for success to protect against drifting strings
			Application.ExternalCall ("gameExited", result);

		}

#if DEBUG
		public string getMockJoinPayload ()
		{
			// seems like multiline strings don't like embedded/escaped double quotes?

			string requestSpecificData = "\"game_data\" : {" +
				"   \"userID\": \"33773741\"," +
			    "   \"deviceID\": \"none\"," +
				"   \"gameID\": \"116792\"," +
			    "   \"clientID\": \"0\"," +
				"   \"txSessionID\": \"YAhCkBNw\"," +
				"   \"tournID\": \"790226154\"," +
			    "   \"wwUrlBase\": \"mock\"," +
				//"   \"wwUrlBase\": \"https://dev-ww-web301.worldwinner.com:44390\"," +
				//"   \"validationUrlBase\": \"https://gdesmarais-validation.skillqa.worldwinner.com\"," + // use localhost if in local dev
			    "   \"validationUrlBase\": \"http://localhost:8000\"," + // use localhost if in local dev
				"   \"options_data\": {"+
			    "         \"GameTime\": \"120\"," +
			    "         \"BoardID\": \"133\"," + // 186 works, 133 failing
			    "         \"Reshuffle\": \"1\"," +
			    "         \"Hold\": \"0\"," +
			    "         \"OneShotWild\": \"1\"," +
				"   }" +
			    "}" ;
			return TriPeaksStageRequestData.constructMockPayload (requestSpecificData);
		}
#endif // DEBUG
#endif // if UNITY_WEBGL
	}

}

