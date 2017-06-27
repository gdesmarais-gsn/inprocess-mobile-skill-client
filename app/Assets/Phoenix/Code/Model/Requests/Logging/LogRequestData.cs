using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace GSN.Skill.Phoenix.Requests.Logging
{

	public struct LogData
	{
		public struct Result
		{
			public bool log_status;
		}

		public Result result;
	}


	public class LogRequestData : WebPOSTRequest<LogData>
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Logging;
		private const string URL_KEY = "log";

		public enum LogLevel
		{
			trace,
			info,
			debug,
			warn,
			error,
			fatal
		}

		public string Log { get; set; }

		private LogLevel _logLevel;

		public override LogData Response { get; set; }

		public void SetLogLevel(LogLevel level)
		{
			_logLevel = level;
		}

		public override string Url
		{
			get { return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY); }
		}

		public override JContainer RequestBody
		{
			get
			{
				var obj = new JObject();
				obj.Add("level", _logLevel.ToString());
				obj.Add("message", Log);

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
			get { return string.Empty; }
		}
		#endif // #if DEBUG
	}
}
