using System;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Phoenix.Requests.Account
{
	public struct CreditCardData
	{
		public Result result;

		public struct CreditCardInfo
		{
			public string customer_cc_expyr; // Expiration year ex : "2020"
			public string customer_cc_expmo; // Expiration month ex : "1"
			public string last4;  //Last 4 numbers of card;
			public string type;   // Visa || MasterCard
			public string id;     // id of card in db.  We also need to pass this in to look it up.
		}

		public struct Result
		{
			public User user;
			public CreditCardInfo cc_info;
		}
	}

	/// <summary>
	/// This class allows you to make a request to get a user's credit card info based on a credit card id.
	/// </summary>
	public class CreditCardRequestData : WebPOSTRequest<CreditCardData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Account;
		private const string URL_KEY = "get_credit_card_info";

		private const string REQUEST_BODY_CC_ID_KEY = "cc_id";

		public override CreditCardData Response { get; set; }

		public string creditCardID { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/account/get_credit_card_info";
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
				obj.Add(REQUEST_BODY_CC_ID_KEY, creditCardID);
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
					    'cc_info': {
					      'customer_cc_expyr': '2020',
					      'customer_cc_expmo': '1',
					      'last4': '2592',
					      'type': 'Visa',
					      'id': '27522'
					    },
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
					    }
					  }
					}
				";

				return data;
			}
		}
		#endif // #if DEBUG
	}
}
