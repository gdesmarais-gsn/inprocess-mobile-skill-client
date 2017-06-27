using System;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils
{
 /*   
	public class SwipeHypeAnalytic : GameAnalytic
	{
		public static readonly AnalyticEventType sSwipeHypeEvent = new AnalyticEventType("SwipeHypeEvent");
		public SwipeHypeAnalytic(string key, string value)
			: base(GsnApplication.Instance.ActiveGameId, sSwipeHypeEvent, AnalyticEventVerb.On)
		{
			Key = key;
			Value = value;
		}

		public string Value
		{
			get
			{
				return GetData<string>("value", "");
			}

			private set
			{
				this["value"] = value;
			}
		}

		public string Key
		{
			get
			{
				return GetData<string>("key", "");
			}

			private set
			{
				this["key"] = value;
			}
		}
	}
 */   
	/// Utility functions with no better place to put them
	public static class GsnGameUtils
	{
		/// Returns the number of milliseconds since midnight
		static public uint GetMSSinceMidnight()
		{
			return (uint)DateTime.Now.TimeOfDay.TotalMilliseconds;
		}
		/// Currently, just logs out analytics dictionaries.  In the future, this should send analytics events to the backend server.
		static public void ReportAnalytic(Dictionary<string, int> data)
		{
		   // this function does nothing for now.
 //           if (GsnApplication.Instance == null)
 //           {
				// We are done!
				// Write
				foreach (string key in data.Keys)
				{
					GsnDebug.Log(key, "=", data[key]);
				}
				return;
//            }
//            foreach (string key in data.Keys)
//            {
//                GsnApplication.Instance.SendAnalyticsEvent(new SwipeHypeAnalytic(key, data[key]));
//            }
		}
	}
}
