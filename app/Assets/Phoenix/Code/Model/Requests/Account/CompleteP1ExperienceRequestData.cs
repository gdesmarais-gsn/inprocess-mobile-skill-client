using System;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Phoenix.Requests.Account
{
	public struct CompleteP1ExperienceData
	{
		public Result result;

		 
		public struct Result
		{
			public User user;
			public bool account_changed;
			public string message;
		}
	}

	/// <summary>
	/// This class allows you to make a request to get a user's credit card info based on a credit card id.
	/// </summary>
	public class CompleteP1ExperienceRequestData : WebPOSTRequest<CreditCardData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Account;
		private const string URL_KEY = "complete_p1";
		public override CreditCardData Response { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/account/complete_p1";
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
					  'result':  
						{
					    'user': {
					      'epid': '/C4AEi70TTCVSzuc6CfuI4bw9594R9Ffz3I9Q4a1U7eDIgX8Kno1xTN4kHDAf3qA\n',
					      'cash_balance': '23.60',
					      'pp_user': 'no',
					      'auth_token': 'CEoIGsUjRPgEcG6p72piqw',
					      'game_credits': '24.65',
					      'is_guest': 'no',
					      'username': 'thefaize2',
					      'reward_points': '3015',
					      'createPasswordOnUpgrade': 'no',
					      'user_id': '1083482',
					      'cc_data': {
					        'multipleCards': 0,
					        'type': 'Visa',
					        'id': '27522'
					      },
					      'token': '7f6f06bec5d062f7270edd67fc93e3193701fd9293008a8592ba76af'
					    },
						'account_changed' : 1,
						'message' : 'Something changed'
					  }
					}
				";

				return data;
			}
		}
		#endif // #if DEBUG
	}
}
