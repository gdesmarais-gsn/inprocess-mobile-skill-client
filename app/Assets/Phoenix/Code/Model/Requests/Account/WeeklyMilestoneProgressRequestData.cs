using System.Collections.Generic;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;

namespace GSN.Skill.Phoenix.Requests.Account
{
	public struct WeeklyMilestoneProgressData
	{
		public Result result;

		public class Level
		{
			public int level;
			public int points;
			public int games_left;
			public int games_required;
		}

		public class Result
		{
			public Level[] levels;
			public int end_week;
			public User user;
			public int games_played;
			public int current_level;
			public int begin_week;
		}
	}

	public class AccountWeeklyMilestoneProgressRequestData : WebGETRequest<WeeklyMilestoneProgressData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Account;
		private const string URL_KEY = "get_weekly_milestone_progress";

		public override WeeklyMilestoneProgressData Response { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/account/get_weekly_milestone_progress";
			}
		}

		public User userData
		{
			get { return Response.result.user; }
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
						'services': [{
							'name': 'Account',
							'path': 'https://dev-ww101.worldwinner.com:44382/api/Account',
							'endpoints': [{
								'name': 'get_users_push_devices',
								'requestMethod': 'GET',
								'path': 'https://dev-ww101.worldwinner.com:44382/api/Account/get_users_push_devices'
							}, {
								'name': 'change_password',
								'requestMethod': 'POST',
								'path': 'https://dev-ww101.worldwinner.com:44382/api/Account/change_password'
							}]
						}]
					}
				}
				";

				return data;
			}
		}
		#endif // #if DEBUG
	}
}
