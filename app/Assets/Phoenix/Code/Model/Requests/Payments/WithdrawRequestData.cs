using GSN.Skill.Requests;
using Newtonsoft.Json.Linq;
using GSN.Skill.Requests.Config;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Utils;
using GSN.Skill.Events;

namespace GSN.Skill.Phoenix.Requests.Payment
{
	public struct WithdrawData
	{
		public Result result;
		
		public struct Result
		{
			public User user;
		}
	}
	// Request for withdrawing.  On successful withdraw, you will just get a diet user object back.
	// An Error array will be provided if there is an issue with the withdraw. 
	public class WithdrawRequestData : WebPOSTRequest<WithdrawData>, IUserInfo
	{
		
		private const APIReference.Category API_CATEGORY = APIReference.Category.Payment;
		private const string URL_KEY = "withdraw";
		
		// All of the Required data for requesting a withdrawal
		private const string REQUEST_BODY_AMOUNT = "amount";
		private const string REQUEST_BODY_CLIENT_ID = "client_id"; // optional.  We will want to pass this in soon
		private const string REQUEST_BODY_PASSWORD = "password";
		
		
		public decimal amount {get; set;}
		public string password {get;set;}
		// Client ID is used to help differentiate WW mobile deposits VS Phoenix withdraws. 
		private string _clientID;

		public override WithdrawData Response { get; set; }
		
		public WithdrawRequestData():base()
		{
			EventDispatcher.AddListener<ClientIDSetEvent>(OnClientIDSet);
		}
		
		
		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/payment/withdraw";
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
				obj.Add(REQUEST_BODY_PASSWORD,password);
				if (!string.IsNullOrEmpty(_clientID))
					obj.Add(REQUEST_BODY_CLIENT_ID,_clientID);
				else
					GsnDebug.LogError("Withdrawing without a clientID");

				return obj;
			}
		}
		public override string CookieSessionIDKey
		{
			get { return null; }
		}
		/// <summary>
		/// Sets the client id for the withdraw.  This happens when the Device data set call is successful.
		/// </summary>
		/// <param name="deviceData">Device data.</param>
		private void OnClientIDSet(IEvent e)
		{
			EventDispatcher.RemoveListener<ClientIDSetEvent>(OnClientIDSet);
			_clientID = ((ClientIDSetEvent)e).clientID;
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
				  }
				}
				";
				
				return data;
			}
		}
		#endif // #if DEBUG
	}
	
}
