using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Phoenix.Requests.Account
{
	// NOTE: This class uses the same set of data as AccountLoginRequestData. Just a different URL

	public class RememberMeLoginRequestData : WebPOSTRequest<AccountLoginData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Account;
		private const string URL_KEY = "remember_me_login";

		private const string REQUEST_BODY_AUTH_TOKEN_KEY = "auth_token";
		private const string REQUEST_BODY_USERNAME_KEY = LoginRequestData.REQUEST_BODY_USERNAME_KEY;

		private string _username = string.Empty;
		private string _authToken = string.Empty;

		public override AccountLoginData Response { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/account/remember_me_login";
			}
		}

		public User userData
		{
			get { return Response.result.user; }
		}

		public string AuthToken
		{
			set { _authToken = value; }
		}

		public string Username
		{
			set { _username = value; }
		}

		public override JContainer RequestBody
		{
			get
			{
				JObject body = new JObject();
				body.Add(REQUEST_BODY_AUTH_TOKEN_KEY, _authToken);
				body.Add(REQUEST_BODY_USERNAME_KEY, _username);

				return body;
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
