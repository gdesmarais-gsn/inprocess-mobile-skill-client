using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;
using GSN.Skill.Phoenix.Requests.Account;

namespace GSN.Skill.Phoenix.Requests.Reward
{
	public struct GetRewardsData
	{
		public Result result;

		public struct Reward 
		{
			public string original_cost;
			public string disclaimer;  // Appears to always be none
			public string reward_id;
			public string can_afford;  // "no" , "yes"
			public string discount_cost;
			public string credit_amount;
			public string type;  // Always be "Game Credit"
			public string image;  // Relative path to a web image. ex:  "5_gameCR_play_app_wk.gif"
		}

		public struct Result
		{
			public User user;
			public Reward[] rewards;
		}
	}

	/// <summary>
	/// This lets you fetch all rewards that a user can redeem
	/// </summary>
	public class GetRewardsRequestData : WebGETRequest<GetRewardsData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Reward;
		private const string URL_KEY = "get_rewards";

		public override GetRewardsData Response { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//return "https://qa.worldwinner.com/api/reward/get_rewards";
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
					    'rewards': [
					      {
					        'original_cost': '3000',
					        'disclaimer': 'none',
					        'reward_id': '74',
					        'can_afford': 'no',
					        'discount_cost': '3000',
					        'credit_amount': '5.00',
					        'type': 'Game Credit',
					        'image': '5_gameCR_play_app_wk.gif'
					      },
					      {
					        'original_cost': '3500',
					        'disclaimer': 'none',
					        'reward_id': '1',
					        'can_afford': 'no',
					        'discount_cost': '3500',
					        'credit_amount': '5.00',
					        'type': 'Game Credit',
					        'image': '5_play_money.png'
					      },
					      {
					        'original_cost': '6600',
					        'disclaimer': 'none',
					        'reward_id': '2',
					        'can_afford': 'no',
					        'discount_cost': '6600',
					        'credit_amount': '10.00',
					        'type': 'Game Credit',
					        'image': '10_play_money.png'
					      },
					      {
					        'original_cost': '9400',
					        'disclaimer': 'none',
					        'reward_id': '3',
					        'can_afford': 'no',
					        'discount_cost': '9400',
					        'credit_amount': '15.00',
					        'type': 'Game Credit',
					        'image': '15_play_money.gif'
					      },
					      {
					        'original_cost': '12500',
					        'disclaimer': 'none',
					        'reward_id': '4',
					        'can_afford': 'no',
					        'discount_cost': '12500',
					        'credit_amount': '20.00',
					        'type': 'Game Credit',
					        'image': '20_play_money.png'
					      },
					      {
					        'original_cost': '15500',
					        'disclaimer': 'none',
					        'reward_id': '5',
					        'can_afford': 'no',
					        'discount_cost': '15500',
					        'credit_amount': '25.00',
					        'type': 'Game Credit',
					        'image': '25_play_money.gif'
					      },
					      {
					        'original_cost': '19500',
					        'disclaimer': 'none',
					        'reward_id': '6',
					        'can_afford': 'no',
					        'discount_cost': '19500',
					        'credit_amount': '30.00',
					        'type': 'Game Credit',
					        'image': '30_play_money.gif'
					      },
					      {
					        'original_cost': '22500',
					        'disclaimer': 'none',
					        'reward_id': '28',
					        'can_afford': 'no',
					        'discount_cost': '22500',
					        'credit_amount': '40.00',
					        'type': 'Game Credit',
					        'image': '40_play_money.gif'
					      },
					      {
					        'original_cost': '150000',
					        'disclaimer': 'none',
					        'reward_id': '71',
					        'can_afford': 'no',
					        'discount_cost': '150000',
					        'credit_amount': '50.00',
					        'type': 'Game Credit',
					        'image': '5_play_money.png'
					      },
					      {
					        'original_cost': '28500',
					        'disclaimer': 'none',
					        'reward_id': '29',
					        'can_afford': 'no',
					        'discount_cost': '28500',
					        'credit_amount': '50.00',
					        'type': 'Game Credit',
					        'image': '50_play_money.gif'
					      },
					      {
					        'original_cost': '36000',
					        'disclaimer': 'none',
					        'reward_id': '7',
					        'can_afford': 'no',
					        'discount_cost': '36000',
					        'credit_amount': '60.00',
					        'type': 'Game Credit',
					        'image': '60_play_money.gif'
					      },
					      {
					        'original_cost': '41000',
					        'disclaimer': 'none',
					        'reward_id': '30',
					        'can_afford': 'no',
					        'discount_cost': '41000',
					        'credit_amount': '75.00',
					        'type': 'Game Credit',
					        'image': '75_play_money.gif'
					      },
					      {
					        'original_cost': '54000',
					        'disclaimer': 'none',
					        'reward_id': '8',
					        'can_afford': 'no',
					        'discount_cost': '54000',
					        'credit_amount': '90.00',
					        'type': 'Game Credit',
					        'image': '90_play_money.gif'
					      },
					      {
					        'original_cost': '52500',
					        'disclaimer': 'none',
					        'reward_id': '31',
					        'can_afford': 'no',
					        'discount_cost': '52500',
					        'credit_amount': '100.00',
					        'type': 'Game Credit',
					        'image': '100_play_money.gif'
					      },
					      {
					        'original_cost': '67000',
					        'disclaimer': 'none',
					        'reward_id': '9',
					        'can_afford': 'no',
					        'discount_cost': '67000',
					        'credit_amount': '120.00',
					        'type': 'Game Credit',
					        'image': '120_play_money.gif'
					      }
					    ],
					    'user': {
					      'epid': '/C4AEi70TTCVSzuc6CfuIzIKsaw3vK1H1XdabPksNbAFsQkhX8AZtqxCwHXEGWy1\n',
					      'cash_balance': '337.37',
					      'pp_user': 'no',
					      'auth_token': '21a519bafe5bb14fa42ac39bd0f5fe77e8d4607ead3745cb5807ec06ae8e27c3',
					      'game_credits': '0.00',
					      'showP1Experience': 0,
					      'is_guest': 'no',
					      'username': 'thefaize',
					      'reward_points': '2148',
					      'createPasswordOnUpgrade': 'no',
					      'user_id': '1082721',
					      'cc_data': {
					        'multipleCards': 1,
					        'type': 'Visa',
					        'id': '27587'
					      },
					      'token': '6b50943971f42dfb60130511be24e95958845d91eeb6e08c5c3f106e'
					    }
					  }
					}";
				return data;
			}
		}
		#endif // #if DEBUG
	}
}
