using System.Collections.Generic;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Phoenix.Requests.Account
{
	public class User
	{
		public string epid;
		public string cash_balance;
		public Dictionary<string, int> upgrade_bonus_amounts;
		public string pp_user;
		public string auth_token;
		public string game_credits;
		public string is_guest;
		public string username;
		public string reward_points;
		public string createPasswordOnUpgrade;
		public string user_id;
		public string token;
		public object cc_data; // This is really bad.  It will either return a CreditCardData Struct, or the string "none"
		public bool showP1Experience;

		public struct CreditCardData
		{
			public bool multipleCards;
			public string type;
			public string id;
		}
	}
	public struct CaptchaFailedAttemptResponse
	{
		public bool inject;
		public string[] message;
		public string code;
	}
	public struct AccountLoginData
	{
		public Result result;

		public struct LightFeatures
		{
			public int mobilePromoPage;
		}

		public struct EnvVars
		{
			public LightFeatures light_features;
			public string cookieName;
		}

		public struct Result
		{
			public EnvVars env_vars;
			public User user;
			public CaptchaFailedAttemptResponse? info;
		}
	}

	/// <summary>
	/// This class represents the API Info's raw data.
	/// A helper class should be created to parse the raw data into a quick lookup table for other endpoints.
	/// 
	/// NOTE: This must be the first item called.
	/// </summary>
	public class LoginRequestData : WebPOSTRequest<AccountLoginData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Account;
		private const string URL_KEY = "login";

		public const string REQUEST_BODY_USERNAME_KEY = "username";
		public const string REQUEST_BODY_PASSWORD_KEY = "password";

		public override AccountLoginData Response { get; set; }

		public string username { get; set; }
		public string password { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/Account/login";
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
				obj.Add(REQUEST_BODY_USERNAME_KEY, username);
				obj.Add(REQUEST_BODY_PASSWORD_KEY, password);
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
