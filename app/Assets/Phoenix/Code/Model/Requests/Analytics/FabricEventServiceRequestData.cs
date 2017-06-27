using GSN.Skill.Requests;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.Requests.Analytics
{
	public struct FabricEventServiceData
	{
		public struct EventStatus
		{
			public string statusCode;

			public string message; // TODO: figure out the possible values
			public string exception; // TODO: figure out the possible values
			public string retryable; // TODO: figure out the possible values
		}

		public struct Links
		{
			public Self self;
		}

		public struct Self
		{
			public string href;
		}

		// all cases
		public string message;

		// values for success case
		public bool? success;
		public EventStatus[] eventStatuses;
		public Links? _links;

		// values for invalid authorization fail case
		public string timestamp;
		public int? status;
		public string error;
		public string path;
	}

	public class FabricEventServiceRequestData : WebPOSTRequest<FabricEventServiceData>
	{
		public override FabricEventServiceData Response { get; set; }

		private string _url;
		private JArray _requestBody;

		public void SetEndpoint(string endpoint)
		{
			_url = endpoint;
		}

		public void SetRequestBody(JArray body)
		{
			_requestBody = body;
			//GsnDebug.Log("Analytics Send Body:",JsonConvert.SerializeObject(_requestBody));
		}

		public override string Url
		{
			get { return _url; }
		}

		public override JContainer RequestBody
		{
			get
			{
				return _requestBody;
			}
		}

		public override string CookieSessionIDKey
		{
			get { return null; }
		}

		#if DEBUG
		public override bool useMockPayload
		{
			get { return false; }
		}

		public override string mockPayload
		{
			get { return string.Empty; }
		}
		#endif // #if DEBUG
	}
}
