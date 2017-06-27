using GSN.Skill.Requests;
using Newtonsoft.Json.Linq;
using GSN.Skill.Requests.Config;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Events;

namespace GSN.Skill.Phoenix.Requests.Payment
{
	public struct DepositData
	{
		public Result result;

		public struct Result
		{
			public User user;
		}
	}

	public class DepositRequestData : WebPOSTRequest<DepositData>, IUserInfo
	{


		private const APIReference.Category API_CATEGORY = APIReference.Category.Payment;
		private const string URL_KEY = "make_deposit";

		// Client ID is used to help differentiate WW mobile deposits VS Phoenix deposits. 
		private string _clientID;

		// All of the Required data for adding a credit card.
		private const string REQUEST_BODY_AMOUNT = "amount";
		private const string REQUEST_BODY_CC_ID = "id";
		private const string REQUEST_BODY_CLIENT_ID = "client_id"; // optional.  We will want to pass this in soon
		private const string REQUEST_BODY_PASSWORD = "password";


		public int amount {get; set;}
		public int creditCardID {get; set;}
		public string password {get;set;}

		public override DepositData Response { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/payment/make_deposit";
			}
		}
		// When we build this object, we want to listen for the device data being set, and get the clientID from that response data.
		public DepositRequestData():base()
		{
			EventDispatcher.AddListener<ClientIDSetEvent>(OnClientIDSet);
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
				obj.Add(REQUEST_BODY_CC_ID,creditCardID);
				if (!string.IsNullOrEmpty(_clientID))
					obj.Add(REQUEST_BODY_CLIENT_ID,_clientID);
				else
					GsnDebug.LogError("Depositing without a clientID");
				return obj;
			}
		}
			
		public override string CookieSessionIDKey
		{
			get { return null; }
		}
		/// <summary>
		/// Sets the client id for the deposit.  This happens when the Device data set call is successful.
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
