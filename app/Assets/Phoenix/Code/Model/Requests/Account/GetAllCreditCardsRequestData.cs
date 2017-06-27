using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Phoenix.Requests.Account
{
	public struct GetAllCreditCardsData
	{
		public Result result;

		public struct CreditCardInfo 
		{
			public string bill_zip;  // Zip code attached to card.
			public int cardCount; // number of cards a user has attached to their account.  (repeats in each object)
			public string customer_cc_expyr; // Expiration year ex : "2020"
			public string customer_cc_expmo; // Expiration month ex : "1"
			public string last4;  //Last 4 numbers of card;
			public string type;   // Visa || MasterCard
			public string id;     // id of card in db.  We also need to pass this in to look it up.
		}

		public struct Result
		{
			// If a user has no credit cards they actually get an error array back, which we will have to handle in the 
			// RequestFail handler.  We should only be calling this if the user has a cc_data returned as part of their login request.
			// If that doesn't exist, we want to add a cc for that user instead of fetch cards.
			public User user;
			public CreditCardInfo[] cc_list;
		}
	}

	/// <summary>
	/// This lets you fetch all of a users credit cards based off their session_id.
	/// </summary>
	public class GetAllCreditCardsRequestData : WebGETRequest<GetAllCreditCardsData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Account;
		private const string URL_KEY = "get_all_credit_cards";

		private const string REQUEST_BODY_CC_ID_KEY = "cc_id";

		public override GetAllCreditCardsData Response { get; set; }

		public string creditCardID { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//return "https://qaweb2.worldwinner.com/api/account/get_all_credit_cards";
			}
		}

		public User userData
		{
			get { return Response.result.user; }
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
					      'reward_points': '3015',
					      'cash_balance': '33.60',
					      'user_id': '1083482',
					      'game_credits': '24.65',
					      'username': 'thefaize2'
					    },
					    'cc_list': [
					      {
					        'bill_zip': '01960',
					        'customer_cc_expyr': '2019',
					        'customer_cc_expmo': '5',
					        'cardCount': 2,
					        'type': 'MasterCard',
					        'last4': '8150',
					        'id': '27569'
					      },
					      {
					        'bill_zip': '01960',
					        'customer_cc_expyr': '2020',
					        'customer_cc_expmo': '1',
					        'cardCount': 2,
					        'type': 'Visa',
					        'last4': '2592',
					        'id': '27522'
					      }
					    ]
					  }
					}
				";
				/* Example of a "failure" to get card info (User doesn't have any cards)
				{
				  'result': {
				    'errors': [
				      'No Valid Credit Cards found.'
				    ],
				    'user': {
				      'epid': '/C4AEi70TTCVSzuc6CfuIzIKsaw3vK1H1XdabPksNbAFsQkhX8AZtqxCwHXEGWy1\n',
				      'cash_balance': '0.00',
				      'upgrade_bonus_amounts': {
				        '10': 11,
				        '20': 21,
				        '30': 31
				      },
				      'pp_user': 'no',
				      'auth_token': 'bX46bqTHaZiFP/TZbxeKgg',
				      'game_credits': '0.00',
				      'is_guest': 'yes',
				      'username': 'thefaize',
				      'reward_points': '700',
				      'createPasswordOnUpgrade': 'no',
				      'user_id': '1082721',
				      'cc_data': 'none',
				      'token': '20911cabbf5617a7482e9219783c6d2f6525c45b835e546f18313c8b'
				    }
				  }
				}
				*/
				return data;
			}
		}
		#endif // #if DEBUG
	}
}
