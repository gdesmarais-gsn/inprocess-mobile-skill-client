using System.Collections.Generic;

namespace GSN.Skill.Games.Common
{
	public static class VersionInfo
	{
        // This is changed by versionstamp.xml
	    public static readonly string BUILD_NUMBER = "local build"; 
        
		public struct GameVersionInfo
		{
			public string gameVersion;
			public string sDKVersion;
			public string buildNumber;

			public GameVersionInfo(string inGameVersion = "Not Set", string inSDKVersion = "Not Set", string inBuildNumber = "Local build")
			{
				gameVersion = inGameVersion;
				sDKVersion = inSDKVersion;
				buildNumber = inBuildNumber;
			}
		}

	    // This should be set by the SDK publish
	    static public readonly string sdkVersion = "v0_5_0"; // This should be stamped by build system on game side

	    // These are set from game code
		public static Dictionary<string, GameVersionInfo > gameVersions = new Dictionary<string,GameVersionInfo>();
	    
		public static void AddGameVersion(string gameKey, string gameVersion, string sDKVersion, string buildNumber)
	    {
	        if (gameVersions.ContainsKey(gameKey))
	        {
				GameVersionInfo gameVersionInfo = gameVersions[gameKey];
				gameVersionInfo.gameVersion = gameVersion;
				gameVersionInfo.sDKVersion = sDKVersion;
				gameVersionInfo.buildNumber = buildNumber;
				gameVersions[gameKey] = gameVersionInfo;
	        }
	        else
	        {
				gameVersions.Add(gameKey, new GameVersionInfo(gameVersion, sDKVersion, buildNumber));
	        }
	    }
	    
		public static GameVersionInfo GetGameVersion(string gameKey)
	    {
	        if (gameVersions.ContainsKey(gameKey))
	        {
	            return gameVersions[gameKey];
	        }
	        
			return new GameVersionInfo ();
	    }
	    
	    static public string build = "local build";
	}
}
