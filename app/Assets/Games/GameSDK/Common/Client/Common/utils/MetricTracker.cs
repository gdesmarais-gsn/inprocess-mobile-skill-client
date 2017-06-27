using System.Collections.Generic;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Games.Common.Utils
{
	public class MetricTracker
	{
		private List<KeyValuePair<string, JToken>> _stream = new List<KeyValuePair<string, JToken>>();

		public void Add(string key, JToken value)
		{
			_stream.Add(new KeyValuePair<string, JToken>(key, value));
		}

		/// This function will list out all the analytics recorded. 
		public void Dispatch()
		{
			foreach (KeyValuePair<string, JToken> data in _stream)
			{
				//TRIGGER HERE!
			}
		}		

		/// This function will return a dictionary of all the analytics recorded. 
		public List<KeyValuePair<string, JToken>> Stream
		{
			get
			{
				return _stream;
			}
		}	
	}
}
