using GSN.Skill.Requests;
using Newtonsoft.Json.Linq;
using GSN.Skill.Games.Common.Utils;
using System.IO;
using MsgPack;
using MsgPack.Serialization;
using System.Text;
using UnityEngine;
using System.Collections.Generic;
using GSN.Skill.Games.Common;
using GSN.Skill.Games.Common.Client.Session;

namespace GSN.Skill.TriPeaks.Requests.Game
{
	public struct TriPeaksNotaryData
	{
		public Result result;

		public class Result : TriPeaksResult
		{
			public byte[] hmac;
			public byte[] keyVersion;
			public byte[] timeStamp;
		}
	}

	public class TriPeaksNotaryRequestData : TriPeaksRequestData<TriPeaksNotaryData>, IMessagePackRequest
	{
		private const string CONTENT_TYPE_PARAM_NAME = "content_type";
		private const string GAME_NAME_PARAM_NAME = "game_name";
		private const string HUNK_PARAM_NAME = "hunk";

		private readonly static byte[] NOTARY_REQUEST_TYPE_JOIN = new byte[] { 0x0 };
		private readonly static byte[] NOTARY_REQUEST_TYPE_START = new byte[] { 0x1 };
		private readonly static byte[] NOTARY_REQUEST_TYPE_NOTARY = new byte[] { 0x2 };

		private readonly Dictionary<byte[], byte[]> NOTARY_REQUEST_TYPES = new Dictionary<byte[], byte[]> {
			{ SecureHunk.HUNK_TYPE_JOIN, NOTARY_REQUEST_TYPE_JOIN },
			{ SecureHunk.HUNK_TYPE_START, NOTARY_REQUEST_TYPE_START },
			{ SecureHunk.HUNK_TYPE_NOTARY, NOTARY_REQUEST_TYPE_NOTARY },
		};

		//private SecureHunk _hunk;
		// This will only be used by some of the base classes
		public SecureHunk secureHunk {get; private set;}
		protected byte[] hunkType = SecureHunk.HUNK_TYPE_NOTARY;

		private TriPeaksNotaryData _response;
		public override TriPeaksNotaryData Response { 
			get { return _response;}
			set { this._response = value;} 
		}
		public void setResponse(TriPeaksNotaryData response) {
			_response = response;
		}


		public TriPeaksNotaryRequestData() {
			path = "/notary/";
			ContentType = RequestWrapper.MSGPACK_CONTENT;
		}

		public void SetTriPeaksNotaryData(SecureHunk hunk)
		{
			secureHunk = hunk;
		}
		public override Newtonsoft.Json.Linq.JContainer RequestBody {
			get {
				JObject body = new JObject();
				if (null == secureHunk) 
				{
					GSN.Skill.Games.Common.Utils.GsnDebug.LogError("Attempting to notarize without hunk");
				} else {
					NotaryRequest nr = new NotaryRequest();
					secureHunk.type = hunkType;
					nr.hash = secureHunk.hash;
					body.Add(HUNK_PARAM_NAME, GameLog.Serialize<NotaryRequest>(nr));
				}
				return body;
			}
		}
		public byte[] RawBody {
			get {
				byte[] bytes = null;
				if (null == secureHunk) {
					GSN.Skill.Games.Common.Utils.GsnDebug.LogError("Attempting to notarize without hunk");
				}
				if (ContentType == RequestWrapper.MSGPACK_CONTENT) {
					NotaryRequest nr = new NotaryRequest ();
					nr.hash = secureHunk.hash;
					MemoryStream ms = new MemoryStream ();
					ms.Write (NOTARY_REQUEST_TYPES[hunkType]);
					byte[] glBytes = GameLog.Serialize<NotaryRequest> (nr);
					ms.Write (glBytes);
					bytes = ms.ToBytes ();
				} else {
					bytes = Encoding.UTF8.GetBytes (RequestBody.ToString ());
				}
				return bytes;
			}
		}
		public bool unpackMessagePack (byte[] packedBytes) {

			NotaryResponse unpacked1 = GameLog.Deserialize <NotaryResponse> (packedBytes);
			TriPeaksNotaryData.Result result = new TriPeaksNotaryData.Result ();
			if (null == unpacked1.hmac) {
				string response_string = Encoding.UTF8.GetString(packedBytes);
				// Evaluate in debug mode if needed
				GsnDebug.LogError(response_string);
				// This is a problem, and we need to kick out right away
				IGameSession gameSession = ArenaProxy.instance.gameSession;
				gameSession.FailReason = GameSession.FailReasons.ValidationServiceFailure;
				gameSession.ExitMode = GameSessionExitMode.FailedToStart;
				ArenaProxy.instance.ReturnFromGame();

			}
			result.hmac = unpacked1.hmac;
			result.keyVersion = unpacked1.keyVersion;
			result.timeStamp = unpacked1.timeStamp;

			TriPeaksNotaryData response = Response;
			response.result = result;
			setResponse(response);

			return true;
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
				string requestSpecificData = ""+
					"\"status\" : \"success\","+
					"\"hmac\" : \"123ABC\","+
					"\"keyVersion\" : \"1\","+
					"\"timeStamp\" : \"123456789\"";
				return constructMockPayload (requestSpecificData);
			}
		}
		#endif
	}
}
