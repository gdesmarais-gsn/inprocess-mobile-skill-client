using System.Collections.Generic;
using GSN.Skill.Utils;

namespace GSN.Skill.Games.Common.Client
{
    public class StringTable : Singleton<StringTable>
    {
        public StringTable()
        {
        }

        /// This boolean will mask all text in **** so you can tell what text isn't in a string table.
        public bool cheat = false;

        /// This is the list of string ids in the table.
		public List<string> stringIDs { get; private set;}

		private const string _nullID = "NULL";

		/// Dictionay of key to value that represents the strings a game uses.        
        public Dictionary<string, string> table
		{
			set
			{
                _table = value;
				stringIDs = new List<string>();
				stringIDs.Add (_nullID);
				foreach (string k in _table.Keys)
				{
                    stringIDs.Add (k);
                }                
            }
        }
        
        private Dictionary<string, string> _table = new Dictionary<string, string>();

        /// Get the keys associated with the Dictionary
		public Dictionary<string, string>.KeyCollection Keys
		{
			get
			{
				return _table.Keys;
			}
		}

		/// Get the entry key from the table.  if the cheat is on the result will be ****, if the key doesn't exist it will return an INVALID_KEY error.
		public string GetEntry(string key)
		{
			string value;
			if (_table.TryGetValue (key, out value))
			{
				if (cheat)
					return "*****";
				return value;
			}
			return "INVALID_KEY:" + key;
		}

        public void UpdateFromDictionary(Dictionary<string,string> sessionDict)
        {
            foreach (KeyValuePair<string,string> pair in sessionDict)
			{
				if( _table.ContainsKey(pair.Key))
                {
					_table[pair.Key] = pair.Value;
                }
				else
                {
                    stringIDs.Add (pair.Key);
					_table.Add(pair.Key, pair.Value);
                }
			}
        }
    }
}

