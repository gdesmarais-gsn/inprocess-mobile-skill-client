using System.Collections.Generic;

namespace GSN.Skill.Phoenix.Model
{
	public class GameMaps
	{
		// TODO: Get this from config data
		private static Dictionary <string, string> modelHashMap = 
			new Dictionary <string, string> () 
			{
				{"TriPeaks", "0789fd0bd89b6c36"},
			};

		public static string GetModelHash(string titleName) {

			if (modelHashMap.ContainsKey(titleName)) {
				return modelHashMap[titleName];
			} else {
				return "0000000000000000";
			}
		}

		/// Set the Hash value for a particular key.  This does nothing in non-debug builds.
		public static void SetModelHash( string key, string hash )
		{
		#if DEBUG
			modelHashMap[key] = hash;
		#endif
		}
		
		public static Dictionary<string, string>.KeyCollection ModelHashKeys
		{
			get
			{
				return modelHashMap.Keys;
			}
		}
	}
}
