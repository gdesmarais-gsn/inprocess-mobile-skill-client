using UnityEngine;
using System.Collections.Generic;
using System.Threading;

namespace GSN.Skill.Games.Common.Client.DebugMenu
{
    [System.Obsolete]
	internal class VersionMenu : BaseDebugMenu
	{
#if DEBUG
        public override void OnWindow(int windowID)
		{	
            /*	
            FIXME: The VersionInfo struct doesn't work out well.  It was moved out
            of the DLL so we only have one definition w/o the SkillV### namespace,
            but that means the code build into the DLL can't use it.
            We could build that into an unversioned DLL, or making Version the
            responsibility of an arena service (Gsn.Ext.Game.SDK.DLL) might help.


			GUI.color = Color.white;
			
			GUILayout.BeginHorizontal ();
			GUILayout.Label ("SDK Version: " + VersionInfo.sdkVersion);
			GUILayout.EndHorizontal ();
            foreach (KeyValuePair<string,VersionInfo.GameVersionInfo> entry in VersionInfo.gameVersions)
            {
                GUILayout.BeginHorizontal ();
                GUILayout.Label ("Game Version info for " + entry.Key);
                GUILayout.EndHorizontal ();  
                GUILayout.BeginHorizontal ();
                GUILayout.Label ("    Game Version:" + entry.Value.gameVersion);
                GUILayout.EndHorizontal ();  
                GUILayout.BeginHorizontal ();
                GUILayout.Label ("    SDK Version:" + entry.Value.sDKVersion);
                GUILayout.EndHorizontal ();  
                GUILayout.BeginHorizontal ();
                GUILayout.Label ("    Build #:" + entry.Value.buildNumber);
                GUILayout.EndHorizontal ();  
            }

			GUILayout.BeginHorizontal ();
			GUILayout.Label ("Build: " + VersionInfo.build);			
			GUILayout.EndHorizontal ();
            */
		}
#else
        public override void OnWindow(int windowID) {}
#endif
	}
}
