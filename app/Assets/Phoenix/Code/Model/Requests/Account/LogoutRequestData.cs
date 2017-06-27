using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Phoenix.Requests.Account
{
	public struct LogoutData
	{
		public Result result;
		 
		public struct Result
		{
			public string info; // Should contain text "Logout was successful";
		}
	}

	/// <summary>
	/// This class represents the API Info's raw data.
	/// A helper class should be created to parse the raw data into a quick lookup table for other endpoints.
	/// 
	/// NOTE: This must be the first item called.
	/// </summary>
	public class LogoutRequestData : WebPOSTRequest<LogoutData>
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Account;
		private const string URL_KEY = "logout";

		public override LogoutData Response { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/account/logout";
			}
		}

		public bool LogoutSuccessful()
		{
			return Response.result.info == WorldWinnerReferenceKeys.LOGOUT_SUCCESSFUL_STRING;
		}

		public override JContainer RequestBody
		{
			get
			{
				return new JObject();
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
			get
			{
				string data = @"
					{
					  'result': {
					    'info': 'Logout was successful'
					  }
					}
				";

				return data;
			}
		}
		#endif // #if DEBUG
	}
}
