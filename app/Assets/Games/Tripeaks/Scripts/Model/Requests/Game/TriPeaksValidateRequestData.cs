using GSN.Skill.Requests;
using GSN.Skill.Utils;
using Newtonsoft.Json.Linq;
using GSN.Skill.Phoenix.Requests.Account;
//using Gsn.Games.SkillV_CUSTOM.Utils;
using System.Text;
using System.IO;
using UnityEngine;
using MsgPack.Serialization;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common;
using GSN.Skill.Games.Common.Client.Session;

namespace GSN.Skill.TriPeaks.Requests.Game
{
	public struct TriPeaksValidateData
	{
		public Result result;

		public class Result : TriPeaksResult
		{
			public bool accepted;
		}
	}

	public class TriPeaksValidateRequestData : TriPeaksRequestData<TriPeaksValidateData>, IMessagePackRequest
	{
		private const string CONTENT_TYPE_PARAM_NAME = "content_type";
		private const string GAME_LOG_PARAM_NAME = "game_log";

		private MemoryStream _game_log;

		public TriPeaksValidateRequestData() {
			path = "/validate/";
			ContentType = RequestWrapper.MSGPACK_CONTENT;
			OnFailHandler += (request) => {
				Log ("  Validate failure " + request.error.type.ToString());
				IGameSession gameSession = ArenaProxy.instance.gameSession;
				gameSession.FailReason = GameSession.FailReasons.ValidationServiceFailure;
				gameSession.ExitMode = GameSessionExitMode.FailedToStart;
				ArenaProxy.instance.ReturnFromGame();
			}; // TODO - better fail handling
		}

		private TriPeaksValidateData _response;
		public override TriPeaksValidateData Response { 
			get { return _response;}
			set { this._response = value;} 
		}
		public void setResponse(TriPeaksValidateData response) {
			_response = response;
		}
		/*
		public override string CookieSessionIDKey
		{
			get { return Response.result.env_vars.cookieName; }
		}
		*/
		public void SetTriPeaksValidateData(MemoryStream gameLog)
		{
			_game_log = gameLog;
		}
		public override Newtonsoft.Json.Linq.JContainer RequestBody {
			get {
				// TODO - how to set content type on the request
				// pwrj.Wrapper.contentType = RequestWrapper.MSGPACK_CONTENT;
				JObject body = new JObject();
				//body.Add(CONTENT_TYPE_PARAM_NAME, RequestWrapper.MSGPACK_CONTENT);
				if (null == _game_log) 
				{
					GSN.Skill.Games.Common.Utils.GsnDebug.LogError("Attempting to validate without game_log");
				} else {
					body.Add (GAME_LOG_PARAM_NAME, _game_log.ToArray());
				}
				return body;
			}
		}
		public byte[] RawBody {
			get {
				return (null == _game_log) ? null : _game_log.ToArray ();
			}
		}
		public bool unpackMessagePack (byte[] packedBytes) {

			ValidateResponse unpacked1 = GameLog.Deserialize <ValidateResponse> (packedBytes);
			TriPeaksValidateData.Result result = new TriPeaksValidateData.Result ();
			result.accepted = unpacked1.accepted;
			TriPeaksValidateData response = Response;
			response.result = result;
			setResponse (response);

			return result.accepted;
		}
		#if DEBUG
		// TODO - don't override this here - I am just enabling one web request
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
				// The hmac is hex encoded bytes
				string requestSpecificData = "";
				return constructMockPayload (requestSpecificData);
			}
		}
		#endif
	}
}
