using GSN.Skill.Requests;
using Newtonsoft.Json.Linq;
using GSN.Skill.Requests.Config;
using GSN.Skill.Phoenix.Requests.Account;

namespace GSN.Skill.Phoenix.Requests.Payment
{
	public struct AddCreditCardData
	{
		public Result result;

		// In the situation we have a successful Add Credit Card, we get back a user object that has updated balances
		// and cc_data object
		public struct Result
		{
			public User user;
		}
	}

	public class AddCreditCardRequestData : WebPOSTRequest<AddCreditCardData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Payment;
		private const string URL_KEY = "add_credit_card";

		// All of the Required data for adding a credit card.
		private const string REQUEST_BODY_AMOUNT = "amount";
		private const string REQUEST_BODY_BILL_ADDRESS_1 = "bill_address1";
		private const string REQUEST_BODY_BILL_CITY = "bill_city";
		private const string REQUEST_BODY_BILL_COUNTRY = "bill_country";
		private const string REQUEST_BODY_BILL_STATE = "bill_state";
		private const string REQUEST_BODY_BILL_ZIP = "bill_zip";
		private const string REQUEST_BODY_CCV = "customer_cc_cv_number";
		private const string REQUEST_BODY_EXPIRATION_MONTH = "customer_cc_expmo";
		private const string REQUEST_BODY_EXPIRATION_YEAR = "customer_cc_expyr";
		private const string REQUEST_BODY_CC_NUMBER = "customer_cc_number";

		// All of the non-required data for adding a credit card
		private const string REQUEST_BODY_BILL_ADDRESS_2 = "bill_address2";
		private const string REQUEST_BODY_CUSTOMER_FIRSTNAME = "customer_firstname";
		private const string REQUEST_BODY_CUSTOMER_LASTNAME = "customer_lastname";
		private const string REQUEST_BODY_PASSWORD = "password";


	
		public int amount {get; set;}
		public string address1 {get; set;}
		public string city {get; set;}
		public string country {get; set;} 
		public string state {get; set;}
		public string zip {get; set;}
		public string ccv {get; set;}
		public string expirationMonth {get; set;}
		public string expirationYear {get; set;}
		public string ccNumber {get; set;}
		public string address2 {get; set;} // optional
		public string firstName {get; set;} //optional for people that have never added a credit card
		public string lastName {get; set;}  //optional for people that have never added a credit card
		public string password {get; set;} //optional unless you are in a remember me login

		public override AddCreditCardData Response { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/payment/add_credit_card";
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
				obj.Add(REQUEST_BODY_AMOUNT, amount);
				obj.Add(REQUEST_BODY_BILL_ADDRESS_1,address1);
				obj.Add(REQUEST_BODY_BILL_CITY,city);
				obj.Add(REQUEST_BODY_BILL_COUNTRY,country);
				obj.Add(REQUEST_BODY_BILL_STATE,state);
				obj.Add(REQUEST_BODY_BILL_ZIP,zip);
				obj.Add(REQUEST_BODY_CCV,ccv);
				obj.Add(REQUEST_BODY_EXPIRATION_MONTH,expirationMonth);
				obj.Add(REQUEST_BODY_EXPIRATION_YEAR,expirationYear);
				obj.Add(REQUEST_BODY_CC_NUMBER,ccNumber);
				if (!string.IsNullOrEmpty(address2))
					obj.Add(REQUEST_BODY_BILL_ADDRESS_2,address2);
				if (!string.IsNullOrEmpty(firstName))
					obj.Add(REQUEST_BODY_CUSTOMER_FIRSTNAME,firstName);
				if (!string.IsNullOrEmpty(lastName))
					obj.Add(REQUEST_BODY_CUSTOMER_LASTNAME,lastName);
				if (!string.IsNullOrEmpty(password))
					obj.Add(REQUEST_BODY_PASSWORD,password);
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
				      'epid': '/C4AEi70TTCVSzuc6CfuIzIKsaw3vK1H1XdabPksNbAFsQkhX8AZtqxCwHXEGWy1\n',
				      'cash_balance': '10.00',
				      'pp_user': 'no',
				      'auth_token': 'bX46bqTHaZiFP/TZbxeKgg',
				      'game_credits': '11.00',
				      'is_guest': 'no',
				      'username': 'thefaize',
				      'reward_points': '1000',
				      'createPasswordOnUpgrade': 'no',
				      'user_id': '1082721',
				      'cc_data': {
				        'multipleCards': 0,
				        'type': 'MasterCard',
				        'id': '27584'
				      },
				      'token': '262facbd97d18cdd1e3f731adba52f5b341cdbdc8a48d850a608d141'
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
