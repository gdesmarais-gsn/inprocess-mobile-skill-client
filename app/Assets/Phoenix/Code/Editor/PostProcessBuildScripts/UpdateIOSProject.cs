using UnityEditor;
using UnityEditor.Callbacks;
#if UNITY_IOS
using UnityEditor.iOS.Xcode;
#endif
using System.IO;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill
{
	public class UpdateIOSInfoPlist
	{
		[PostProcessBuild]
		public static void ChangeXcodePlist(BuildTarget buildTarget, string pathToBuiltProject)
		{
#if UNITY_IOS
			if (buildTarget == BuildTarget.iOS)
			{
				// Get plist
				string plistPath = pathToBuiltProject + "/Info.plist";
				PlistDocument plist = new PlistDocument();
				plist.ReadFromString(File.ReadAllText(plistPath));

				// Get root
				PlistElementDict rootDict = plist.root;


				// Add NSLocationWhenInUseUsageDescription in Xcode plist
				var key = "NSLocationWhenInUseUsageDescription";

				// access phoenix string table to get the correct string
				PhoenixStringTable.SetTable();
				var val = StringTable.Instance.GetEntry(CategoryGeoLocation.IOSLocationUsageDescription);

				rootDict.SetString(key, val);

				// Write to file
				File.WriteAllText(plistPath, plist.WriteToString());
			}
#endif
		}
	}

    public class UpdateIOSProjectFile
    {
        [PostProcessBuild]
        public static void AddDependencies(BuildTarget buildTarget, string pathToBuildProject)
        {
#if UNITY_IOS
            if (buildTarget == BuildTarget.iOS)
            {
                string projPath = pathToBuildProject + "/Unity-iPhone.xcodeproj/project.pbxproj";

                PBXProject proj = new PBXProject();
                proj.ReadFromString(File.ReadAllText(projPath));

                string targetGUID = proj.TargetGuidByName("Unity-iPhone");

                // This is rquired by the Kochava SDK.
                proj.AddFrameworkToProject(targetGUID, "AdSupport.framework", false);

                File.WriteAllText(projPath, proj.WriteToString());
            }
#endif
        }
    }
}
