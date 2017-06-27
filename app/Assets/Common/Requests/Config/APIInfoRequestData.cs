using System;
using GSN.Skill.Phoenix;
using GSN.Skill.Utils;

namespace GSN.Skill.Requests.Config
{
	public struct APIInfoData
	{
		public Result result;

		public struct Endpoint
		{
			public string name;
			public string requestMethod;
			public string path;
		}

		public struct Service
		{
			public string name;
			public string path;
			public Endpoint[] endpoints;
		}

		public struct Result
		{
			public Service[] services;
		}
	}

	/// <summary>
	/// This class represents the API Info's raw data.
	/// A helper class should be created to parse the raw data into a quick lookup table for other endpoints.
	/// 
	/// NOTE: This must be the first item called.
	/// 
	/// NOTE: Do NOT change the class name without explicitly notifying everyone.
	/// 
	/// </summary>
	public class APIInfoRequestData : WebGETRequest<APIInfoData>
	{
		public const int INVALID_PORT = -1;

		public enum EnvironmentOptions
		{
			Dev,
			QA,
			Staging,
			Production,
		}

		private const string DEFAULT_ENVIRONMENT = "QA";

		private string _environment;
		private string _port;

		public APIInfoRequestData()
		{
			_environment = UserSaveRestore.Global.Environment;

			if (string.IsNullOrEmpty(_environment) || _environment == "TARGET_ENVIRONMENT")
			{
				// CURRENT_ENVIRONMENT was not overwritten during build step. Default the environment
				_environment = DEFAULT_ENVIRONMENT;
			}

			if( INVALID_PORT != UserSaveRestore.Global.Port )
			{
				// dev environments require ports
				_port = ":" + UserSaveRestore.Global.Port;
			}
		}

		public override APIInfoData Response { get; set; }

		public override string Url
		{
			get
			{
				return GetBaseURL(_environment) + "/api/config/get_api_info";
			}
		}

		public string GameLocationBaseURL
		{
			get 
			{
				return GetBaseURL(_environment);
			}
		}

		public string WorldWinnerBaseURL
		{
			get
			{
				return GetBaseURL(_environment);
			}
		}

		private string GetBaseURL(string environmentString)
		{
			EnvironmentOptions env = (EnvironmentOptions)Enum.Parse(typeof(EnvironmentOptions), environmentString, true);

			switch (env)
			{
				case EnvironmentOptions.Production:
					return "https://www.worldwinner.com";
				case EnvironmentOptions.Staging:
					return "https://www-qa.worldwinner.com";
				case EnvironmentOptions.Dev:
					return "https://dev-ww-web301.worldwinner.com" + _port;
				case EnvironmentOptions.QA:
				default:
					// default to QA
					return "https://qa.worldwinner.com";
			}
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
