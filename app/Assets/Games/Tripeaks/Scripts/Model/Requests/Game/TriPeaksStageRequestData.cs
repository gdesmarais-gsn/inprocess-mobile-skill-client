using GSN.Skill.Requests;
using Newtonsoft.Json.Linq;
using System.Text;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common;
using GSN.Skill.Games.Common.Client.Session;
using UnityEngine;

namespace GSN.Skill.TriPeaks.Requests.Game
{
/*
 * This can be implemented as subclasses, but I already have join and start operations.
 * This is meant to address interaction with the notary service, as opposed to the WW api.
 * */
	public class TriPeaksStageRequestData : TriPeaksNotaryRequestData 
	{
		private string ParamName;

		private string _stageJSON;

		private Stage _stage;
		public enum Stage
		{
			Join,
			Start
		}

		public TriPeaksStageRequestData() {
			hunkType = SecureHunk.HUNK_TYPE_JOIN;
			ParamName = "JoinRecord";
			OnBeginHandler += (request) => {
				Log ("  Stage is " + _stage.ToString());
			};
			OnFailHandler += (request) => {
				Log ("  " + _stage.ToString() + " failure " + request.error.type.ToString());
				IGameSession gameSession = ArenaProxy.instance.gameSession;
				gameSession.FailReason = GameSession.FailReasons.ValidationServiceFailure;
				gameSession.ExitMode = GameSessionExitMode.FailedToStart;
				ArenaProxy.instance.ReturnFromGame();
			}; // TODO - better fail handling
		}
		public void SetStage(Stage stage) {
			_stage = stage;
			switch (stage) {
			case Stage.Join:
				hunkType = SecureHunk.HUNK_TYPE_JOIN;
				ParamName = "JoinRecord";
				break;

			case Stage.Start:
				hunkType = SecureHunk.HUNK_TYPE_START;
				ParamName = "StartRecord";
				break;
			}
		}

		public void SetStageData(string stageJSON)
		{
			SetStageData (stageJSON, null);
		}
		public void SetStageData(string stageJSON, byte[] currentHash)
		{
			_stageJSON = WrapStageData(stageJSON);

			SecureHunk ah = new SecureHunk ();
			ah.timeStamp = Encoding.UTF8.GetBytes (Notarizer.UnixTimeStamp ());
			ah.type = hunkType;
			ah.SetBody (Encoding.UTF8.GetBytes (_stageJSON), SecureHunk.HUNK_COMPRESSION_NONE, (null == currentHash) ? GameLog.InitialHash : currentHash);
			SetTriPeaksNotaryData(ah);
		}
		private string WrapStageData(string json) {
			string wrap = (_stage == Stage.Start) ? "start_data" : "join_data";
			return GameLog.WrapJson(wrap, json);
		}
		public override Newtonsoft.Json.Linq.JContainer RequestBody {
			get {
				JObject body = new JObject();
				if (string.IsNullOrEmpty (_stageJSON)) {
					GSN.Skill.Games.Common.Utils.GsnDebug.LogError ("Attempting to record empty stage data");
				} else {
					body.Add (ParamName, _stageJSON);
				}
				return body;
			}
		}	
		#if DEBUG
		// The mock payload is not currently correct - it should be a message packed notary response
		// Don't change it without changing the way the join data is generated for debug mode of the 
		// game.
		public override string mockPayload {
			get {
				return "requires implementation";
			}
		}
		#endif
	}
}
