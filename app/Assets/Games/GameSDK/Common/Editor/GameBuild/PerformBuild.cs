using UnityEditor.Callbacks;
using UnityEditor;
using UnityEngine;
using System.Collections.Generic;
using System.IO;
using System;

namespace GSN.Skill.Games.Common.Build
{
	class PerformBuild
	{
		static string[] GetBuildScenes()
		{
			List<string> names = new List<string>();

			foreach(EditorBuildSettingsScene e in EditorBuildSettings.scenes)
			{
				if(e==null)
					continue;

				if(e.enabled)
					names.Add(e.path);
			}
			return names.ToArray();
		}

		static string GetBuildPath()
		{
			return "../build_tmp/iPhone";
		}

		[UnityEditor.MenuItem("GSN Tools/Build/Test Command Line Build Step")]
		static void CommandLineBuild ()
		{
			Debug.Log("Command line build\n------------------\n------------------");

			string[] scenes = GetBuildScenes();
			string path = GetBuildPath();
			if(scenes == null || scenes.Length==0 || path == null)
				return;

			Debug.Log(string.Format("Path: \"{0}\"", path));
			for(int i=0; i<scenes.Length; ++i)
			{
				Debug.Log(string.Format("Scene[{0}]: \"{1}\"", i, scenes[i]));
			}
			

			Debug.Log("Starting Build!");
			Debug.Log("Path:"+path);
			Debug.Log("scenes:"+scenes);

			EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTarget.iOS);
			BuildPipeline.BuildPlayer(scenes, path, BuildTarget.iOS, BuildOptions.None);
		}

		static string GetBuildPathAndroid()
		{
			return "build/android";
		}

		[UnityEditor.MenuItem("GSN Tools/Build/Test Command Line Build Step Android")]
		static void CommandLineBuildAndroid ()
		{
			Debug.Log("Command line build android version\n------------------\n------------------");

			string[] scenes = GetBuildScenes();
			string path = GetBuildPathAndroid();
			if(scenes == null || scenes.Length==0 || path == null)
				return;

			Debug.Log(string.Format("Path: \"{0}\"", path));
			for(int i=0; i<scenes.Length; ++i)
			{
				Debug.Log(string.Format("Scene[{0}]: \"{1}\"", i, scenes[i]));
			}

			Debug.Log("Starting Android Build!");
			BuildPipeline.BuildPlayer(scenes, path, BuildTarget.Android, BuildOptions.None);
		}
	}

	public class ScarletPostProcessor {

		[PostProcessBuild(1500)] // We should try to run last
		public static void OnPostProcessBuild(BuildTarget target, string path)
		{
			Debug.Log("Start PostProcessing");

			#if UNITY_IPHONE
			if (target != BuildTarget.iOS) {
				return; // How did we get here?
			}
			
			UnityEngine.Debug.Log("ScarletPostProcessor: Enabling Objective-C modules");
			string pbxproj = path + "/Unity-iPhone.xcodeproj/project.pbxproj";
			
			// Looking for the buildSettings sections of the pbxproj
			string insertKeyword = "buildSettings = {";
			string foundKeyword = "CLANG_ENABLE_MODULES"; // for checking if it's already inserted
			string modulesFlag = "				CLANG_ENABLE_MODULES = YES;";
			
			List<string> lines = new List<string>();
			
			foreach (string str in File.ReadAllLines(pbxproj)) {
				if (!str.Contains(foundKeyword)) { 
					lines.Add(str);
				}
				if (str.Contains(insertKeyword)) {
					lines.Add(modulesFlag);
				}
			}
			
			// Clear the file
			// http://stackoverflow.com/questions/16212127/add-a-new-line-at-a-specific-position-in-a-text-file
			using (File.Create(pbxproj)) {}
			
			foreach (string str in lines) {
				File.AppendAllText(pbxproj, str + Environment.NewLine);
			}
			
			#endif
		}
		
	}
}
