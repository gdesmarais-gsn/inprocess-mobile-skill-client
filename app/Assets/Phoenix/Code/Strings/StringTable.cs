using System;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.Strings
{
	public enum InputFieldType
	{
		None,
		CreditCard,
		ExpirationDate,
		Address,
		City,
		State,
		ZIP,
		CVN,
		Email,
		Username,
		Password,
		UsernameLite, // Useful for doing almost no client-side Username validation and letting the server handle it.
		PasswordLite, // Useful for doing almost no client-side PW validation and letting the server handle it.
		Address2, // Optional field for additional address information (apt #, floor #, etc.)
		Country,
		FirstName,
		LastName,
		WithdrawAmount
	}

	public struct ErrorTranslation
	{
		public Enum entryKey;
		public string message;
		public InputFieldType inputField;

		public ErrorTranslation(InputFieldType inputField, Enum entryKey)
		{
			this.entryKey = entryKey;
			this.message = StringTable.Instance.GetEntry(this.entryKey);
			this.inputField = inputField;
		}
	}

	public class StringTable : Singleton<StringTable>
	{
		private const string NULL_ID = "NULL";
		private const string NULL_VALUE = "NULL";
		private const string CHEAT_VALUE = "****";

		private Dictionary<string, Dictionary<string, string>> _stringLookupTable;
		private Dictionary<string, ErrorTranslation> _errorLookupTable = new Dictionary<string, ErrorTranslation>();

		private bool _cheatEnabled = false;

		/// This is the list of string ids in the table.
		public List<string> StringIDs { get; private set; }
		public bool CheatEnabled
		{
			get { return _cheatEnabled; }
			set
			{
				_cheatEnabled = value;

#if DEBUG
				EventDispatcher.DispatchEvent(new ToggleStringCheatEvent());
#endif
			}
		}

		public StringTable()
		{
			StringIDs = new List<string>();
		}

		public Dictionary<string, Dictionary<string, string>> Table
		{
			set
			{
				if (_stringLookupTable != null)
				{
					Update(value);
				}
				else
				{
					_stringLookupTable = value;
				}

				StringIDs.Clear();
				StringIDs.Add(NULL_ID);
				foreach (string groupKey in _stringLookupTable.Keys)
				{
					foreach (string key in _stringLookupTable[groupKey].Keys)
					{
						// add the group key and key with a slash, which Unity will parse as a submenu in the Editor
						StringIDs.Add(groupKey + "/" + key);
					}
				}
			}
		}

		/// <summary>
		/// Get entry by stringID key. This usually is called by Unity Editor script.
		/// </summary>
		/// <returns>The entry.</returns>
		/// <param name="key">Key.</param>
		public string GetEntry(string key)
		{
			if (string.IsNullOrEmpty(key))
				key = NULL_ID;

			string[] keys = key.Split('/');

			string groupKey = keys[0];
			string entryKey = keys.Length == 2 ? keys[1] : string.Empty;

			return GetEntry(groupKey, entryKey);
		}

		/// <summary>
		/// Get entry by enum and entry key pair. This is usually called within the code.
		/// </summary>
		/// <returns>The entry.</returns>
		/// <param name="entryKey">Entry key.</param>
		public string GetEntry(Enum entryKey)
		{
			return GetEntry(entryKey.GetType().ToString(), entryKey.ToString());
		}

		/// <summary>
		/// Get entry by enum and entry key pair. This is usually called within the code.
		/// Additional args can be passed in to format the string entry.
		/// </summary>
		/// <returns>The entry.</returns>
		/// <param name="key">Key.</param>
		/// <param name="arg0">Arg0.</param>
		public string GetEntry(Enum key, object arg0)
		{
			return string.Format(GetEntry(key), arg0);
		}
		public string GetEntry(Enum key, object arg0, object arg1)
		{
			return string.Format(GetEntry(key), arg0, arg1);
		}
		public string GetEntry(Enum key, object arg0, object arg1, object arg2)
		{
			return string.Format(GetEntry(key), arg0, arg1, arg2);
		}
		public string GetEntry(Enum key, object[] args)
		{
			return string.Format(GetEntry(key), args);
		}

		public ErrorTranslation? GetErrorTranslation(string wwErrorMsg)
		{
			wwErrorMsg = wwErrorMsg.StripHtmlUrl();

			if (_errorLookupTable.ContainsKey(wwErrorMsg))
				return _errorLookupTable[wwErrorMsg];

			return null;
		}

		public void AddErrorTranslation(string msg, InputFieldType inputType, Enum key)
		{
			_errorLookupTable.Add(msg.StripHtmlUrl(), new ErrorTranslation(inputType, key));
		}

		private bool HasEntry(string groupKey, string entry)
		{
			if (!_stringLookupTable.ContainsKey(groupKey))
				return false;

			if (!_stringLookupTable[groupKey].ContainsKey(entry))
				return false;

			// we have a key
			return true;
		}

		/// <summary>
		/// Get entry. Handle Four levels:
		/// - Cheat to see what strings are using the string table
		/// - Entry Key is null
		/// - Group key and entry key combination is not found
		/// - Group Key and entry key exists
		/// </summary>
		/// <returns>The get entry.</returns>
		/// <param name="groupKey">Group key.</param>
		/// <param name="entry">Entry key.</param>
		private string GetEntry(string groupKey, string entry)
		{
#if DEBUG
			if (CheatEnabled)
			{
				// we're using the cheat to validate whether or not a string is using the string table system.
				return CHEAT_VALUE;
			}
#endif

			if (string.IsNullOrEmpty(entry))
				entry = NULL_ID;

			if (HasEntry(groupKey, entry))
			{
				// we have a key
				return _stringLookupTable[groupKey][entry];
			}

			// the group key or the entry doesn't exist
			return "<INVALID KEY:" + groupKey + "/" + entry + ">";
		}

		/// <summary>
		/// Helper function to update the current table.
		/// </summary>
		/// <returns>The update.</returns>
		/// <param name="updateDictionary">Update dictionary.</param>
		private void Update(Dictionary<string, Dictionary<string, string>> updateDictionary)
		{
			// alias local members to provide clarity
			var a = _stringLookupTable;
			var b = updateDictionary;

			// updating dictionary A from dictionary B
			foreach (var bGroup in b)
			{
				if (!a.ContainsKey(bGroup.Key))
				{
					// group doesn't exist, create it
					a[bGroup.Key] = new Dictionary<string, string>();
				}

				var aEntries = _stringLookupTable[bGroup.Key];
				foreach (var bEntry in updateDictionary[bGroup.Key])
				{
					if (!aEntries.ContainsKey(bEntry.Key))
					{
						// a brand new entry is being made. add it to the list
						StringIDs.Add(bGroup.Key + "/" + bEntry.Key);
					}

					aEntries[bEntry.Key] = bEntry.Value;
				}
			}
		}
	}
}

