using System.Text;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;

namespace GSN.Skill.Phoenix.Requests.Config
{
	public struct FabricEventTokenData
	{
		public struct Result
		{
			public string fabric_token;
			public string eventEndpoint;
		}

		public Result result;
	}

	public class FabricEventTokenRequestData : WebGETRequest<FabricEventTokenData>
	{
		public enum TokenType
		{
			device,
			user
		}

		private const APIReference.Category API_CATEGORY = APIReference.Category.Config;
		private const string URL_KEY = "get_fabric_event_token";

		public TokenType tokenType;
		public string applicationPlatform;
		public string vendorID; // required for iOS
		public string applicationVersion;
		public string advertisingID;
		public string installID;
		public string macAddress;

		// unsure android variables
		public string androidID;
		public string googleAdID;

		public override FabricEventTokenData Response { get; set; }

		public override string Url
		{
			get
			{
				//https://dev-ww-web301.worldwinner.com:44382/api/config/get_fabric_event_token?application_platform=IOS&idfv=loll&token_type=device&android_id=few&application_version=few&google_ad_id=few&idfa=few&install_id=ew&mac=few
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY) + BuildURLSuffix();
			}
		}

		#if DEBUG
		public override bool useMockPayload
		{
			get { return false; }
		}

		public override string mockPayload
		{
			get
			{
				string data = @"
				{
				  'result': {
				    'fabric_token': 'JWT eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJqdGkiOiJkMjUxZTc4NS05MmRlLTQ4MWMtYTI5Ni0xOThkNmQ0YzMyOTQiLCJuYmYiOjE0OTM2NjkzMjQsImlhdCI6MTQ5MzY2OTM4NCwiZXhwIjoxNDkzNjcyOTg0LCJzdWIiOiJza2lsbC1hcHAtZGV2OjM4OWY5MWU5LWU4MTktNDdiNy1iYmFmLWQyMzM3Y2Q1M2UxOSIsImlzcyI6ImF1dGhvcml6YXRpb24tc2VydmljZS1mYWJzdGFnZSIsImZhdHQiOiJkZXZpY2UiLCJmYXRkdiI6IjEiLCJmYXRkIjoidlhiMGZQVE40bnVRRWJVeSt0dmhEcFVmMENvL0Fwd1kxR3owSVc2UVg0UmN0WnRzaVZ0Rzhla0tOazdOZUV5MEkvSVZQeDMralpYZFExK3AveVdWTjBOc0t5bnFiOFNvbzRmYjN2S1VRKzltOUV5eGYwVUZvaUdxTEhCRFU2Wm42T2kxdGVpa0NtT1RNQURGQUxqMGVSajRBUkNmUHNUMkFRSGV6NDZhUWZtU2J4MzNuQ25Vd2ZuZDZLcmpRYnlFMklqZldYbDVyUEN1UTNudytTYS9NS0hxc2Jlcmh6RWFtOEhXeGFCOXpHZHA0YzU2cExSQVVNR09VdWNTMmFhZHNQSldwMCtxR052WWRyajU5S0xsUW5nb2t5WTZETFVaQXIrc09tQ3djMFVSQ3EzQkNCbHhrNlNPOFp4UU1BU0JXc1pDQWdXL2kvbG9yNFNpdnFJSCtDeDIxZ3R5d2l6cmdXT1REMTBKbDk4PSJ9.xORIQeBNZSSdPl2i22koL-6vA9a8viEdbdjfbW-hIG4',
				    'eventEndpoint': 'https://event-service-fabstage.devfabric.gsngames.com/event'
				  }
				}
				";

				return data;
			}
		}
		#endif // #if DEBUG

		private string BuildURLSuffix()
		{
			StringBuilder sb = new StringBuilder();

			sb.Append("?");
			AddGETParameter(sb, "token_type", tokenType.ToString());
			AddGETParameter(sb, "application_platform", applicationPlatform);
			AddGETParameter(sb, "idfv", vendorID);
			AddGETParameter(sb, "application_version", applicationVersion);
			AddGETParameter(sb, "idfa", advertisingID);
			AddGETParameter(sb, "install_id", installID);
			AddGETParameter(sb, "mac", macAddress);
			AddGETParameter(sb, "android_id", androidID);
			AddGETParameter(sb, "google_ad_id", googleAdID);

			return sb.ToString();
		}

		private void AddGETParameter(StringBuilder sb, string parameter, string val)
		{
			if (string.IsNullOrEmpty(val))
				return;
			
			if (sb.Length > 1)
				sb.Append("&"); // an additional parameter has already been added beforehand
			
			sb.Append(parameter);
			sb.Append("=");
			sb.Append(val);
		}
	}
}
