using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Phoenix.Requests.Account
{
	// NOTE: This class uses the same set of data as AccountLoginRequestData. Just a different URL
	public class CreateNewUserRequestData : WebPOSTRequest<AccountLoginData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Account;
		private const string URL_KEY = "create_new_user";

		private const string REQUEST_BODY_USERNAME_KEY = "username";
		private const string REQUEST_BODY_PASSWORD_KEY = "password";
		private const string REQUEST_BODY_CONF_PASSWORD_KEY = "conf_password";
		private const string REQUEST_BODY_EMAIL_KEY = "email";
		public override AccountLoginData Response { get; set; }

		public string username { get; set; }
		public string password { get; set; }
		public string email    { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/Account/create_new_user";
			}
		}

		public User userData
		{
			get { return Response.result.user; }
		}

		public override JContainer RequestBody
		{
			/* This is what the create_new_user endpoint expects for values.
			 * For now we are focused on the required fields only.  
			 {
				"conf_password" : "value",
				"email" : "value",
				"password" : "value",
				"username" : "value",
				"advertiser_id" : "optional",
				"gametype_id" : "optional",
				"partnertag" : "optional",
				"portal" : "optional"
			 }
			*/
			get
			{
				JObject obj = new JObject();
				obj.Add(REQUEST_BODY_CONF_PASSWORD_KEY, password);
				obj.Add(REQUEST_BODY_USERNAME_KEY, username);
				obj.Add(REQUEST_BODY_PASSWORD_KEY, password);
				obj.Add(REQUEST_BODY_EMAIL_KEY,email);
				return obj;
			}
		}

		public override string CookieSessionIDKey
		{
			get { return Response.result.env_vars.cookieName; }
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
						'env_vars': {
							'light_features': {
								'mobilePromoPage': 1
							},
							'cookieName': 'dev-ww101.worldwinner.comSID_82'
						},
						'user': {
							'epid': '/C4AEi70TTCVSzuc6CfuIxlLTI0QC9C/uorFkqzzmnjA1L2a4So8RrzE7oC317PB\n',
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
							'reward_points': '14',
							'createPasswordOnUpgrade': 'no',
							'user_id': '16393250',
							'cc_data': 'none',
							'token': '73e219a5d59f7f8b7ae214079d956055df4fb56f86e49333458887d3'    
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
