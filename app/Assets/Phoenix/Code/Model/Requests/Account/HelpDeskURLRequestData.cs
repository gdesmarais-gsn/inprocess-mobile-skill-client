using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Phoenix.Requests.Account
{
	public struct HelpDeskURLData
	{
		public Result result;

		public struct Result
		{
			public string url;
		}
	}

	/// <summary>
	/// This class generates a helpdesk url if the user needs to go to ZenDesk.  
	/// If you call it with a username (if you are logged in) it does some url construction on the back end 
	/// that ties the user's ww account over with the user's ZenDesk account.
	/// If username is not set, it returns a generic url to zendesk
	/// </summary>
	public class HelpDeskURLRequestData : WebPOSTRequest<HelpDeskURLData>
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Account;
		private const string URL_KEY = "generate_helpdesk_url";

		private const string REQUEST_BODY_USERNAME_KEY = "username";

		public override HelpDeskURLData Response { get; set; }

		public string Username { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/account/generate_helpdesk_url";
			}
		}


		public override JContainer RequestBody
		{
			get
			{
				JObject obj = new JObject();
				if (!string.IsNullOrEmpty(Username))
				{
					obj.Add(REQUEST_BODY_USERNAME_KEY, Username);
				}
				return obj;
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
					    'url': 'https://gamesbygsn1457707400.zendesk.com/access/jwt?jwt=eyJhbGciOiJIUzI1NiJ9.eyJlbWFpbCI6Imp3b29kQGdzbmdhbWVzLmNvbSIsInVzZXJfZmllbGRzIjp7ImNhc2hfdXNlcmlkIjoiMTA4MjcyMSIsImdzbl91c2VyaWQiOiI1NTA3MjQ2IiwiY2FzaF9zbGEiOiJnc25jYXNoX2ZyZWUiLCJjYXNoX2VtYWlsIjoiandvb2RAZ3NuZ2FtZXMuY29tIiwiY2FzaF91c2VybmFtZSI6InRoZWZhaXplIn0sImlhdCI6MTQ5MDA0NDgwMCwibmFtZSI6InRoZWZhaXplIiwianRpIjoiMTQ5MDA0NDgwMHRoZWZhaXplIn0.-Nse8Q-X7gTnWWjyHnbTB7rhet5FVZP5etzqtLIYDUs&return_to=https://gsnwebsandbox.zendesk.com'
					  }
					}
				";

				return data;
			}
		}
#endif // #if DEBUG
	}
}
