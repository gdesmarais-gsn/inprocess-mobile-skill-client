using UnityEngine;
using System;
using GSN.Skill.Utils;
using GSN.Skill.Requests.Config;
using GSN.Skill.Phoenix.Build;

namespace GSN.Skill.Phoenix
{
	/// <summary>
	/// Static class for accessing player save/restore data.
	/// </summary>
	public static class UserSaveRestore
	{
		// organize the various settings by group
		public static GlobalSaveRestoreGroup Global = new GlobalSaveRestoreGroup();
		public static DeviceSaveRestoreGroup Device = new DeviceSaveRestoreGroup();
		public static UserSaveRestoreGroup User = new UserSaveRestoreGroup();
	}

	// TODO: consider implementing local caching rather than calling PlayerPrefs every time

	/// <summary>
	/// Base class for wrapping save/restore data access.
	/// </summary>
	public class SaveRestoreGroup
	{
		private const string ARRAY_SEPARATOR = ",";

		/// <summary>
		/// Does whatever processing on the access key is needed by any derived groups.
		/// </summary>
		/// <param name="key">the original key</param>
		/// <returns>the post-processed key</returns>
		protected virtual string ProcessKey(string key)
		{
			// by default, we just use the original key
			return key;
		}

		// wrappers for the getters
		protected float GetFloat(string key, float defaultValue)
		{
			return PlayerPrefs.GetFloat(ProcessKey(key), defaultValue);
		}
		protected int GetInt(string key, int defaultValue)
		{
			return PlayerPrefs.GetInt(ProcessKey(key), defaultValue);
		}
		protected string GetString(string key, string defaultValue)
		{
			return PlayerPrefs.GetString(ProcessKey(key), defaultValue);
		}
		protected bool GetBool(string key, bool defaultValue)
		{
			return PlayerPrefs.GetInt(ProcessKey(key), defaultValue ? 1 : 0) != 0;
		}
		protected int[] GetIntArray(string key)
		{
			string stringResult = PlayerPrefs.GetString(ProcessKey(key), string.Empty);
			if (stringResult == string.Empty)
			{
				return new int[0];
			}
			else
			{
				string[] results = stringResult.Split(new string[] { ARRAY_SEPARATOR }, StringSplitOptions.RemoveEmptyEntries);
				return Array.ConvertAll<string, int>(results, int.Parse);
			}
		}

		// wrappers for the setters
		protected void SetFloat(string key, float value)
		{
			PlayerPrefs.SetFloat(ProcessKey(key), value);
			PlayerPrefs.Save();
		}
		protected void SetInt(string key, int value)
		{
			PlayerPrefs.SetInt(ProcessKey(key), value);
			PlayerPrefs.Save();
		}
		protected void SetString(string key, string value)
		{
			PlayerPrefs.SetString(ProcessKey(key), value);
			PlayerPrefs.Save();
		}
		protected void SetBool(string key, bool value)
		{
			PlayerPrefs.SetInt(ProcessKey(key), value ? 1 : 0);
			PlayerPrefs.Save();
		}
		protected void SetIntArray(string key, int[] value)
		{
			PlayerPrefs.SetString(ProcessKey(key), string.Join(ARRAY_SEPARATOR,
					Array.ConvertAll<int, string>(value, x => x.ToString())));
			PlayerPrefs.Save();
		}
	}

	/// <summary>
	/// Group containing global settings shared by all users.
	/// </summary>
	public class GlobalSaveRestoreGroup : SaveRestoreGroup
	{
		// keys
		private const string ENVIRONMENT = "wwEnvironment";
		private const string PORT = "wwPort";

		private const string GUEST_USERNAME_KEY = "guestUsername";
		private const string GUEST_PASSWORD_KEY = "guestPassword";
		private const string LAST_LOGIN_KEY = "lastLoginUsername";
		private const string AUTH_TOKEN_KEY = "authenticationToken";
		private const string AUTH_USERNAME_KEY = "authenticationUsername";
		private const string AUTO_LOGIN_ENABLED_KEY = "autoLoginEnabled";
		private const string REMEMBER_ME_ENABLED_KEY = "rememberMeEnabled";
		private const string SELECTED_GAME_ID = "selectedGameID";
		private const string SFX_ENABLED_KEY = "sfxEnabled";
		private const string MUSIC_ENABLED_KEY = "musicEnabled";
		private const string CLIENT_ID_KEY = "clientID";

		private const int SELECTED_GAME_ID_DEFAULT = 1;

		public string Environment
		{
			get { return GetString(ENVIRONMENT, BuildTimeValues.ENVIRONMENT); }
			set { SetString(ENVIRONMENT, value); }
		}

		public int Port
		{
			get { return GetInt(PORT, APIInfoRequestData.INVALID_PORT); }
			set { SetInt(PORT, value); }
		}

		public string GuestUsername
		{ // username for the guest login account
			get { return GetString(GUEST_USERNAME_KEY, ""); }
			set { SetString(GUEST_USERNAME_KEY, value); }
		}

		public string GuestPassword
		{ // password for the guest login account
			get
			{ // decrypt the stored password (if it exists) and return it
				string password = GetString(GUEST_PASSWORD_KEY, string.Empty);
				return string.IsNullOrEmpty(password) ? password : CryptoUtility.Decrypt(password);
			}
			set
			{ // encrypt the password (if given) and store it
				SetString(GUEST_PASSWORD_KEY, string.IsNullOrEmpty(value) ? value : CryptoUtility.Encrypt(value));
			}
		}

		public string LastLogin
		{
			// the username of the last user to log in
			get { return GetString(LAST_LOGIN_KEY, string.Empty); }
			set { SetString(LAST_LOGIN_KEY, value); }
		}

		public string AuthenticationToken
		{
			get
			{
				// decrypt the stored authToken (if it exists) and return it
				string authToken = GetString(AUTH_TOKEN_KEY, string.Empty);
				// TODO: Re-enable encryption when debug menu starts working
				return authToken;//string.IsNullOrEmpty(authToken) ? authToken : CryptoUtility.Decrypt(authToken);
			}
			set
			{
				// encrypt the password (if given) and store it
				SetString(AUTH_TOKEN_KEY, value);//string.IsNullOrEmpty(value) ? value : CryptoUtility.Encrypt(value));
			}
		}

		public string AuthenticationUsername
		{
			get { return GetString(AUTH_USERNAME_KEY, string.Empty); }
			set { SetString(AUTH_USERNAME_KEY, value); }
		}
		public string ClientID
		{
			get { return GetString(CLIENT_ID_KEY, string.Empty); }
			set { SetString(CLIENT_ID_KEY, value); }
		}
		public bool AutoLoginEnabled
		{
			get { return GetBool(AUTO_LOGIN_ENABLED_KEY, false); }
			set { SetBool(AUTO_LOGIN_ENABLED_KEY, value); }
		}
		public bool RememberMeEnabled
		{
			get { return GetBool(REMEMBER_ME_ENABLED_KEY, true); }
			set { SetBool(REMEMBER_ME_ENABLED_KEY, value); }
		}

		public int SelectedGameID
		{ // the username of the last user to log in
			get { return GetInt(SELECTED_GAME_ID, SELECTED_GAME_ID_DEFAULT); }
			set { SetInt(SELECTED_GAME_ID, value); }
		}

		// TODO: should these be per user?
		public bool SFXEnabled
		{ // sfx toggle
			get { return GetBool(SFX_ENABLED_KEY, true); }
			set { SetBool(SFX_ENABLED_KEY, value); }
		}
		public bool MusicEnabled
		{ // music toggle
			get { return GetBool(MUSIC_ENABLED_KEY, true); }
			set { SetBool(MUSIC_ENABLED_KEY, value); }
		}
	}

	/// <summary>
	/// Group containing settings for the device.
	/// </summary>
	public class DeviceSaveRestoreGroup : SaveRestoreGroup
	{
		// keys
		private const string MAC_ADDRESS_KEY = "mac_address";
		private const string WINDOWS_ID_KEY = "windows_id";
		private const string CLIENT_ID_KEY = "client_id";
		private const string OWNER_ID_KEY = "owner_id";
		private const string PUSHIO_ID_KEY = "PushIOId";
		private const string REPORT_ANALYTICS = "reportAnalytics";
		private const string NUMBER_OF_LAUNCHES = "numberOfLaunches";

		public readonly int INVALID_CLIENT_ID = -1; // for testing validity of the stored setting

#if DEBUG
		private const string SPOOF_COUNTRY = "spoofCountry";
		private const string SPOOF_STATE = "spoofState";

		public string SpoofCountryCode
		{
			get { return GetString(SPOOF_COUNTRY, string.Empty); }
			set { SetString(SPOOF_COUNTRY, value); }
		}

		public string SpoofState
		{
			get { return GetString(SPOOF_STATE, string.Empty); }
			set { SetString(SPOOF_STATE, value); }
		}
#endif

		public string MACAddress
		{
			get { return GetString(MAC_ADDRESS_KEY, string.Empty); }
			set { SetString(MAC_ADDRESS_KEY, value); }
		}

		public string WindowsID
		{
			get { return GetString(WINDOWS_ID_KEY, string.Empty); }
			set { SetString(WINDOWS_ID_KEY, value); }
		}

		public int ClientID
		{
			get { return GetInt(CLIENT_ID_KEY, INVALID_CLIENT_ID); }
			set { SetInt(CLIENT_ID_KEY, value); }
		}

		public string OwnerID
		{
			get { return GetString(OWNER_ID_KEY, string.Empty); }
			set { SetString(OWNER_ID_KEY, value); }
		}

		public bool ReportAnalytics
		{
			get { return GetBool(REPORT_ANALYTICS, false); }
			set { SetBool(REPORT_ANALYTICS, value); }
		}
		public int NumberOfLaunches
		{ // used to track if this is the first time we are launching the app
			get { return GetInt(NUMBER_OF_LAUNCHES, 0);}
			set { SetInt(NUMBER_OF_LAUNCHES,value);}
		}
	}

	/// <summary>
	///  Group containing settings tied to specific users.
	/// </summary>
	public class UserSaveRestoreGroup : SaveRestoreGroup
	{
		// keys
		private const string CASH_GAMES_PLAYED_KEY = "cashGamesPlayed";
		private const string LOGIN_COUNT = "loginCount";
		private const string CLOSED_TOURNAMENTS_NOT_SEEN_KEY = "closedTournamentNotSeen";
		private const string OPEN_TOURNAMENT_IDS_KEY = "openTournamentIDs";

		private const string USER_KEY_SEPARATOR = "_"; // used to concatenate the user key to the setting keys

		public string userKey { get; set; } // unique identifier tied to the user whose settings are to be accessed

		/// <summary>
		/// Overriden to concatenate the unique user key to the setting keys before accessing.
		/// </summary>
		/// <param name="key">the original key</param>
		/// <returns>the key tied to the specific user</returns>
		protected override string ProcessKey(string key)
		{
			if (string.IsNullOrEmpty(userKey))
			{ // a user key must first be set before accessing user specific settings
				Debug.LogError(string.Format("No active user for key '{0}'!", key));
				return null;
			}

			// return the user key concatenated with the given setting key
			return userKey + USER_KEY_SEPARATOR + key;
		}

		public int LoginCount
		{ // the number of times this user has logged into the app
			get { return GetInt(LOGIN_COUNT, 0); }
			set { SetInt(LOGIN_COUNT, value); }
		}

		public int ClosedTournamentNotSeen
		{ // number of tournaments that have closed but the user has not reviewed on the game history screen
			get { return GetInt(CLOSED_TOURNAMENTS_NOT_SEEN_KEY, 0); }
			set { SetInt(CLOSED_TOURNAMENTS_NOT_SEEN_KEY, value); }
		}

		public int[] OpenTournamentIDs
		{ //array of each tournament id that the user has completed and has not closed out
			get { return GetIntArray(OPEN_TOURNAMENT_IDS_KEY); }
			set { SetIntArray(OPEN_TOURNAMENT_IDS_KEY, value); }
		}

	}
}
