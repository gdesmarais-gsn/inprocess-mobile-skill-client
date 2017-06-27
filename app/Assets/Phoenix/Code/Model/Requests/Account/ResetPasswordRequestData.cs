using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Phoenix.Requests.Account
{
	public struct ResetPasswordData
	{
		public Result result;
	 
		public struct Result
		{
			// multiAccounts is a bool that only exists when we have an error condition that the user has multiple usernames tied to the same email.
			// In the situation where multiAccounts is returned, we also unfortunately get an errors array of strings.  Each string is a username tied to that user.
			// For MVP I don't think we want to show that list to the user.  Just pop a contact player services error message.
			public bool multiAccounts;   
			public string Success; // A message to show the user.  Only returns when reset password was successful.
			public string[] errors; // I can't believe this is a thing
		}
	}

	/// <summary>
	/// This class represents the API Info's raw data.
	/// A helper class should be created to parse the raw data into a quick lookup table for other endpoints.
	/// 
	/// NOTE: This must be the first item called.
	/// </summary>
	public class ResetPasswordRequestData : WebPOSTRequest<ResetPasswordData>
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Account;
		private const string URL_KEY = "reset_password";

		private const string REQUEST_BODY_USERNAME_KEY = "username";
		private const string REQUEST_BODY_EMAIL_KEY = "email";

		public override ResetPasswordData Response { get; set; }

		public string username { get; set; }
		public string email { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/Account/reset_password";
			}
		}


		public override JContainer RequestBody
		{
			/* This is the structure the server expects for the POST.
			 * So email is required, however, if a username is provided, the email address is ignored.
			 * If username is not provided and the user has multiple accounts tied to a single email address
			 * then we have response that includes an errors array of usernames.  
			{
				"email" : "value",
				"username" : "optional"
			}
			*/
			get
			{
				JObject obj = new JObject();
				// If the username is set, add that to the request as well.
				if (!string.IsNullOrEmpty(username))
				{
					obj.Add(REQUEST_BODY_USERNAME_KEY, username); 
				}
				obj.Add(REQUEST_BODY_EMAIL_KEY, email); 
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
					    'Success': 'An e-mail has been sent to your account with reset instructions.'
					  }
					}
				";
				// Example of multiple usernames, same email address response:
				/*
				{
					'result': {
						'multiAccounts': 1,
						'errors': [
							'jwood1',
							'jwoodp1',
							'jwood.sb',
						]
					}
				}
				*/
				return data;
			}
		}
		#endif // #if DEBUG
	}
}
