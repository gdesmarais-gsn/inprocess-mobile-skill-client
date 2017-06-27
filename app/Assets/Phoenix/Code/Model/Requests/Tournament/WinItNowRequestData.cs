using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using GSN.Skill.Utils;
using Newtonsoft.Json.Linq;
using GSN.Skill.Phoenix.Model.Data;

namespace GSN.Skill.Phoenix.Requests.Tournament
{
	public struct WinItNowData
	{
		public Result result;

		public struct Result
		{
			public User user;
			public string action_performed; // Accepted or Declined
			public string status;  //Failure or Success
		}
	}
 
	public class WinItNowRequestData : WebPOSTRequest<WinItNowData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Tournament;
		private const string URL_KEY = "win_it_now";

		private const string REQUEST_BODY_TOURN_ID = "tourn_id";
		private const string REQUEST_BODY_ACTION_PERFORMED = "action_performed";

		private const string ACTION_PERFORMED_ACCEPT = "Accepted";
		private const string ACTION_PERFORMED_DECLINE = "Declined";

		public int tournID {get; set;}
		public bool accept {get; set;}

		public override WinItNowData Response { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/tournament/win_it_now";
			}
		}

		public User userData
		{
			get { return Response.result.user; }
		}

		public override string CookieSessionIDKey
		{
			get { return null; }
		}

		public override JContainer RequestBody {

			get {
				JObject body = new JObject();
				if (tournID <= 0)
				{
					GsnDebug.LogError("Attempting to win it now without tournID");
				}
				body.Add(REQUEST_BODY_TOURN_ID,tournID);
				if (accept)
					body.Add(REQUEST_BODY_ACTION_PERFORMED, ACTION_PERFORMED_ACCEPT);
				else 
					body.Add(REQUEST_BODY_ACTION_PERFORMED,ACTION_PERFORMED_DECLINE);
				return body;				 				
			}
		}

		#if DEBUG
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
				string data = @"
				{
				  'result': {
				    'action_performed': 'Accepted',
				    'status': 'Success',
				    'user': {
				      'reward_points': '1100',
				      'cash_balance': '87.00',
				      'user_id': '1082721',
				      'game_credits': '11.00',
				      'username': 'thefaize'
				    }
				  }
				}";

				return data;
			}
		}
		#endif // #if DEBUG
	}
}
