using GSN.Skill.Requests;
using Newtonsoft.Json.Linq;
using GSN.Skill.Requests.Config;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Utils;
using GSN.Skill.Events;

namespace GSN.Skill.Phoenix.Requests.Reward
{
	public struct RedeemRewardData
	{
		public Result result;

		public struct Result
		{
			public User user;
			public string redemption_status; //"success"
		}
	}
	// Request for withdrawing.  On successful withdraw, you will just get a diet user object back.
	// An Error array will be provided if there is an issue with the withdraw. 
	public class RedeemRewardRequestData : WebPOSTRequest<RedeemRewardData>, IUserInfo
	{

		private const APIReference.Category API_CATEGORY = APIReference.Category.Reward;
		private const string URL_KEY = "redeem_reward";

		// All of the Required data for requesting a withdrawal
		private const string REQUEST_BODY_REWARD_ID= "reward_id";

		public int rewardID {get; set;}

		public override RedeemRewardData Response { get; set; }


		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qa.worldwinner.com/api/reward/redeem_reward";
			}
		}

		public User userData
		{
			get { return Response.result.user; }
		}

		public override JContainer RequestBody
		{
			get
			{
				JObject obj = new JObject();
				obj.Add(REQUEST_BODY_REWARD_ID, rewardID);
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
				    'user': {
				      'reward_points': '1100',
				      'cash_balance': '88.00',
				      'user_id': '1082721',
				      'game_credits': '11.00',
				      'username': 'thefaize'
				    }
					'redemption_status' : 'success'
				  }
				}
				";

				return data;
			}
		}
		#endif // #if DEBUG
	}

}
