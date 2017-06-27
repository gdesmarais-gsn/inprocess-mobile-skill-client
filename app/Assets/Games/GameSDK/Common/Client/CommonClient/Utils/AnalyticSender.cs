using System;
using System.Collections.Generic;
using Newtonsoft.Json;

namespace GSN.Skill.Games.Common.Client
{
	using Analytic = Dictionary<string, object>;

	public class AnalyticSender : SingletonManual<AnalyticSender>
	{
		private Action<string> logFunction = null;
		
		public AnalyticSender( Action<string> logFunction = null)
		{
			this.logFunction = logFunction;
		}
		
		/// <summary>
		/// Send an analytic event to the back end.
		/// TODO: this really should be a common function
		/// </summary>
		/// <param name="type">name of the analytic event type</param>
		/// <param name="verb">name of the verb for the given type</param>
		/// <param name="attributes">dictionary of attributes (name to value mapping)</param>
		public void SendAnalytic(string type, Analytic attributes,  Analytic other = null)
		{
			if (other != null)
			{
				foreach (KeyValuePair<string, object> pair in other)
				{
					attributes.Add(pair.Key, pair.Value);
				}
			}
			
			ArenaProxy.instance.SendEvent(type, attributes);
			
			if (logFunction != null)
				logFunction("ANALYTIC EVENT:" + " " + type + " " + JsonConvert.SerializeObject(attributes));
		}
	}
}

