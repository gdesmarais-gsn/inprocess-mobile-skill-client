using System;
using System.Collections.Generic;
using GSN.Skill.Requests;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Requests.Config;
using UnityEngine;
using GSN.Skill.Events;
using System.Linq;


namespace GSN.Skill.Phoenix.Model.Data
{
	/// <summary>
	/// StoredConfigData is meant to be a place where we can ask for data from the back end and keep it alive for the duration of a sessoin.
	/// </summary>
	public class StoredConfigData
	{
		private const string MIN_CLIENT_VERSION_KEY = "MinClientVersion";
		private const string APP_STORE_URL_KEY = "AppStoreURL";
		private const string UNSUPPORTED_GAME_LIST_KEY = "GameExcludeList";
		private const string TAX_FORM_URL = "taxUrl";
		private const string TERMS_OF_SERVICE_URL = "TermsOfServiceUrl";
		private const string PRIVACY_POLICY_URL = "PrivacyPolicyUrl";
		private const string TERMS_OF_CONDITIONS_URL = "TermsOfConditionsUrl";

		public string TaxFormLink { get; private set; }
		public string TermsOfServiceLink { get; private set; }
		public string PrivacyPolicyLink { get; private set; }
		public string TermsOfConditionsLink { get; private set; }

		public Dictionary<string, string> ConfigItems;
		public HashSet<int> unsupportedPhoenixGames { get; private set; } // We control the unsupported games from the Native App Config Tool.
		public string ApplicationVersion { get; private set; }

		public StoredConfigData()
		{
			RequestManager.Instance.configData.OnCompleteHandler += OnConfigUpdated;
			ConfigItems = new Dictionary<string, string>();
			unsupportedPhoenixGames = new HashSet<int>();
			ApplicationVersion = Application.version;
		}
		// Set the tax form link
		private void OnConfigUpdated(IWebRequest r)
		{
			ConfigItems.Clear();
			foreach (ConfigData.PhoenixConfigItem item in RequestManager.Instance.configData.Response.result.phoenixConfig)
			{
				ConfigItems.Add(item.key, item.value);
			}
			CheckMinVersion();
			PopulateUnsupportedGameList();

			if (ConfigItems.ContainsKey(TAX_FORM_URL))
				TaxFormLink = ConfigItems[TAX_FORM_URL];
			else
				GsnDebug.LogError("Couldn't get TaxFormLink out of the config data. It should be something like: https://m.worldwinner.com/login.html?post_login_location=/desktop/cgi/tax/tax_reporting.html. Use the WW Native App Config Tool to add it.");

			if (ConfigItems.ContainsKey(TERMS_OF_SERVICE_URL))
				TermsOfServiceLink = ConfigItems[TERMS_OF_SERVICE_URL];
			else
				GsnDebug.LogError("Couldn't get TermsOfServiceLink out of the config data. It should be something like: https://gsngamesnetwork.com/terms.html. Use the WW Native App Config Tool to add it.");

			if (ConfigItems.ContainsKey(PRIVACY_POLICY_URL))
				PrivacyPolicyLink = ConfigItems[PRIVACY_POLICY_URL];
			else
				GsnDebug.LogError("Couldn't get PrivacyPolicyLink out of the config data. It should be something like: https://gsngamesnetwork.com/privacy.html. Use the WW Native App Config Tool to add it.");

			if (ConfigItems.ContainsKey(TERMS_OF_CONDITIONS_URL))
				TermsOfConditionsLink = ConfigItems[TERMS_OF_CONDITIONS_URL];
			else
				GsnDebug.LogError("Couldn't get TermsOfConditionsLink out of the config data. It should be something like: https://www.worldwinner.com/cgi/legal/terms.html. Use the WW Native App Config Tool to add it.");
		}

		/// <summary>
		/// CheckMinVersion checks the application.version against what the min client version is in the Native App Config Tool. https://qa.worldwinner.com/cgi/dbadmin/NativeAppProc.pl
		/// It sends a version check event upon completion.
		/// </summary>
		private void CheckMinVersion()
		{
			bool haveNecessaryData = true;
			bool updateRequired = false;

			if (!ConfigItems.ContainsKey(APP_STORE_URL_KEY))
			{
				GsnDebug.LogError("Didn't find", APP_STORE_URL_KEY, "in the phoenix config data.  Use the WW Native App Config Tool to add it.");
				haveNecessaryData = false;
			}
			if (!ConfigItems.ContainsKey(MIN_CLIENT_VERSION_KEY))
			{
				GsnDebug.LogError("Didn't find", MIN_CLIENT_VERSION_KEY, "in the phoenix config data.  Use the WW Native App Config Tool to add it.");
				haveNecessaryData = false;
			}
			if (!haveNecessaryData)
			{
				// If we are misconfigured, don't halt the app.  Let it continue.  Send a Version Check Event where we are not requiring a force update.
				GsnDebug.LogError("Version Check not possible.  User is playing the app in version", ApplicationVersion);
				EventDispatcher.DispatchEvent(new VersionCheckEvent(false, String.Empty));
			}
			else
			{
				List<int> minClientVersionArray;
				List<int> currentVersionArray;
				try
				{
					minClientVersionArray = ConfigItems[MIN_CLIENT_VERSION_KEY].Split('.').Select(Int32.Parse).ToList();
				}
				catch
				{
					GsnDebug.LogError("Couldn't decode", MIN_CLIENT_VERSION_KEY, ConfigItems[MIN_CLIENT_VERSION_KEY], ".  Should be in a '.' separated format, all numbers.");
					// If we are misconfigured, don't halt the app.  Let it continue.  Send a Version Check Event where we are not requiring a force update.
					EventDispatcher.DispatchEvent(new VersionCheckEvent(false, String.Empty));
					return;
				}
				try
				{
					currentVersionArray = ApplicationVersion.Split('.').Select(Int32.Parse).ToList();
				}
				catch
				{
					GsnDebug.LogError("Couldn't decode Application.version", ApplicationVersion, ".  Should be in a '.' separated format, all numbers.");
					// If we are misconfigured, don't halt the app.  Let it continue.  Send a Version Check Event where we are not requiring a force update.
					EventDispatcher.DispatchEvent(new VersionCheckEvent(false, String.Empty));
					return;
				}
				for (int i = 0; i < minClientVersionArray.Count; i++)
				{
					if (currentVersionArray.Count > i)
					{
						// As we go through, if we encounter a level of currentVersionArray > minClientVersionArray, we know we don't need to upgrade.
						// EX:   if we are on the first loop through:
						//    min client version = 2.1.11
						//    current version    = 2.5
						//  First compare 2 = 2 No Action
						//  When we get to the second compare   5 > 1.  We are done no update required.
						if (currentVersionArray[i] > minClientVersionArray[i])
						{
							break;
						}
						if (currentVersionArray[i] < minClientVersionArray[i])
						{
							updateRequired = true;
							break;
						}
					}
					// If we get here, we've matched all the version numbers up to the currentVersion numbers total value.
					else if (currentVersionArray.Count < minClientVersionArray.Count)
					{
						// If we get here min client version is longer than currentVersion, and the entire length of currentVersion has been evaluated and is equal to min client version to this point.
						// Example :
						// Min Client version = 1.0.1
						// Current Version = 1.0
						updateRequired = true;
						break;
					}
					// If we go through the whole loop, our version is equal to the min version.
				}
				// Send the event.  StartupLoad.cs is listening, and will clear the load gate if we don't need to update.
				GsnDebug.Log("Version Check complete.  currentVersion = ", ApplicationVersion, "minVersion = ", ConfigItems[MIN_CLIENT_VERSION_KEY]);
				EventDispatcher.DispatchEvent(new VersionCheckEvent(updateRequired, ConfigItems[APP_STORE_URL_KEY]));
			}
		}
		private void PopulateUnsupportedGameList()
		{
			if (!ConfigItems.ContainsKey(UNSUPPORTED_GAME_LIST_KEY))
			{
				GsnDebug.LogError("Didn't find", UNSUPPORTED_GAME_LIST_KEY, "in the phoenix config data.  Use the WW Native App Config Tool to add it.");
			}
			else
			{
				List<int> unsupportedGames;
				try
				{
					unsupportedPhoenixGames.Clear();
					unsupportedGames = ConfigItems[UNSUPPORTED_GAME_LIST_KEY].Split(',').Select(Int32.Parse).ToList();
					for (int i = 0; i < unsupportedGames.Count; i++)
					{
						unsupportedPhoenixGames.Add(unsupportedGames[i]);
					}
					EventDispatcher.DispatchEvent(new UnsupportedGameListUpdatedEvent(unsupportedPhoenixGames));
				}
				catch
				{
					GsnDebug.LogError("Couldn't decode", UNSUPPORTED_GAME_LIST_KEY, ConfigItems[UNSUPPORTED_GAME_LIST_KEY], ".  Should be in a ',' separated format, all numbers, no spaces.");
				}
			}
		}
	}
}