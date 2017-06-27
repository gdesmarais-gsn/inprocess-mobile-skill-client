using GSN.Skill.Requests;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Requests.Account;
using System.Collections.Generic;
using GSN.Skill.Requests.Config;

namespace GSN.Skill.Phoenix.Requests.Config
{
	public struct UpgradeBonusAmountsData
	{
		public Result result;

		public struct Result
		{
			public User user;
			public SortedDictionary<string,int> upgrade_bonus_amounts;
			public string bonus_conversion_dollars;
		}
	}
	// Request for withdrawing.  On successful withdraw, you will just get a diet user object back.
	// An Error array will be provided if there is an issue with the withdraw. 
	public class UpgradeBonusAmountRequestData : WebGETRequest<UpgradeBonusAmountsData>, IUserInfo
	{

		private const APIReference.Category API_CATEGORY = APIReference.Category.Config;
		private const string URL_KEY = "get_upgrade_bonus_amounts";

		private DeviceData _deviceData;

		public override UpgradeBonusAmountsData Response { get; set; }


		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/config/get_upgrade_bonus_amounts";
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
				    'upgrade_bonus_amounts': {
				      '10': 10,
				      '20': 20,
				      '30': 30
				    },
				    'user': {
				      'epid': '/C4AEi70TTCVSzuc6CfuIzIKsaw3vK1H1XdabPksNbAFsQkhX8AZtqxCwHXEGWy1\n',
				      'cash_balance': '90.50',
				      'pp_user': 'no',
				      'auth_token': 'bX46bqTHaZiFP/TZbxeKgg',
				      'game_credits': '7.00',
				      'is_guest': 'no',
				      'username': 'thefaize',
				      'reward_points': '1108',
				      'createPasswordOnUpgrade': 'no',
				      'user_id': '1082721',
				      'cc_data': {
				        'multipleCards': 1,
				        'type': 'Visa',
				        'id': '27587'
				      },
				      'token': '7745fc0318c137f84ef94ea92bc70c748152b88d8f7d05bc363145bf'
				    },
				    'bonus_conversion_dollars': '1.00'
				  }
				}
				";

				return data;
			}
		}
		#endif // #if DEBUG
	}

}
