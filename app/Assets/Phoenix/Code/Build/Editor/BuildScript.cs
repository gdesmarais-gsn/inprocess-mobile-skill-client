using System.Collections.Generic;
using UnityEditor;
using System;

using GSN.Skill.Phoenix.Build;

class BuildScript{
	/**
	 * This script is utilized by Jenkins.
	 */
	static string[] SCENES = FindEnabledEditorScenes();
	
	static string APP_NAME = "PhoenixApp";
	static public string BUNDLE_IDENTIFIER_ARGUMENT_NAME = "-bundle_identifier";
	static string TARGET_DIR = "target";
	
	[MenuItem ("Custom/CI/Build Mac OS X")]
	static void PerformMacOSXBuild ()
	{
		PerformMacOSXBuild(BuildOptions.None);
	}

	[MenuItem ("Custom/CI/Build iOS")]
	static void PerformIOSBuild ()
	{
		PerformIOSBuild (BuildOptions.None);
	}

	[MenuItem ("Custom/CI/Build Android")]
	static void PerformAndroidBuild ()
	{
		PerformAndroidBuild (BuildOptions.None);
	}
	
	[MenuItem ("Custom/CI/Build Mac OS X Development")]
	static void PerformMacOSXBuildDevelopment ()
	{
		PerformMacOSXBuild (BuildOptions.Development);
	}
	
	[MenuItem ("Custom/CI/Build iOS Development")]
	static void PerformIOSBuildDevelopment ()
	{
		PerformIOSBuild (BuildOptions.Development);
	}
	
	[MenuItem ("Custom/CI/Build Android Development")]
	static void PerformAndroidBuildDevelopment ()
	{
		PerformAndroidBuild (BuildOptions.Development);
	}

	///////////////////////////////////////////////////
	// When running a build from the command line, switching the platform
	// does not perform all the work it needs to at first.  The missing work
	// is done at the next start of Unity when it gets a chance to do a re-import.
	//
	// To run from command line, first start Unity invoking only one of these 
	// functions.  When it's done, start Unity again by running one of the PerformXXXBuild
	// functions.

	static void SwitchPlatformToMacOS()
	{
		EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTarget.StandaloneOSXIntel);
	}
	static void SwitchPlatformToIOS()
	{
		EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTarget.iOS);
	}
	static void SwitchPlatformToAndroid()
	{
		EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTarget.Android);
	}
	///////////////////////////////////////////////////
	
	// Helper function for getting the command line arguments
	public static string GetArg(string name)
	{
		var args = System.Environment.GetCommandLineArgs();
		for (int i = 0; i < args.Length; i++)
		{
			if (args[i] == name && args.Length > i + 1)
			{
				return args[i + 1];
			}
		}
		return null;
	}

	static private void PerformMacOSXBuild (BuildOptions build_options)
	{
		string target_dir = APP_NAME + ".app";
		GenericBuild (SCENES, TARGET_DIR + "/" + target_dir, BuildTarget.StandaloneOSXIntel, build_options);
	}
	
	static private void PerformIOSBuild (BuildOptions build_options)
	{
		string target_dir = APP_NAME;

		PlayerSettings.iOS.buildNumber = BuildTimeValues.CLIENT_BUILD_NUMBER;

		GenericBuild (SCENES, TARGET_DIR + "/" + target_dir, BuildTarget.iOS, build_options, GetArg (BUNDLE_IDENTIFIER_ARGUMENT_NAME));
	}
	
	static private void PerformAndroidBuild (BuildOptions build_options)
	{
		string target_dir = APP_NAME + ".apk";

		Version ver = new Version(BuildTimeValues.CLIENT_BUILD_NUMBER);

		// The second component should be a git short hash, which is 32 bits.  Chop
		// that in half so we have something to link us back to the changeset, it 
		// should still be enough to find it.
		// Also note that the Android tool chain has a cap for the bundleVersionCode,
		// currently 2100000000. 
		// With the top 16 bits as the build number, we have a max build number of 32043.
		//Skorski 4-24-17
		PlayerSettings.Android.bundleVersionCode = 
			(ver.Major << 16)  | 
			((ver.Minor >> 16) & (1<<16)-1 );

		GenericBuild (SCENES, TARGET_DIR + "/" + target_dir, BuildTarget.Android, build_options, GetArg (BUNDLE_IDENTIFIER_ARGUMENT_NAME));
	}

	static void GenericBuild(string[] scenes, string target_dir, BuildTarget build_target, BuildOptions build_options, string bundle_identifier = null)
	{
		EditorUserBuildSettings.SwitchActiveBuildTarget(build_target);

		if (bundle_identifier != null) {
			//This will change bundle identifier in project folder. Actual change performed in BuildPipeline.BuildPlayer. 
			//I didn't found how to change it back without invoking BuildPipeline.BuildPlayer one more time. 
			//So this param shouldn't be passed when calling build not from temp folder or you will need to revert ProjectSettings.asset after build.
			PlayerSettings.bundleIdentifier = bundle_identifier;
		}

		string res = BuildPipeline.BuildPlayer(scenes,target_dir,build_target,build_options);
		if (res.Length > 0) {
			throw new Exception("BuildPlayer failure: " + res);
		}
	}

	private static string[] FindEnabledEditorScenes() {
		List<string> EditorScenes = new List<string>();
		foreach(EditorBuildSettingsScene scene in EditorBuildSettings.scenes) {
			if (!scene.enabled) continue;
			EditorScenes.Add(scene.path);
		}
		return EditorScenes.ToArray();
	}
}
