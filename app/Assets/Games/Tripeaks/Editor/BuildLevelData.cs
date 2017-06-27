// C# example
using UnityEditor;
using System.IO;
using System.Collections;
using UnityEngine;
using System.Collections.Generic;
using GSN.Skill.Games.Tripeaks;

class BuildLevelData
{
	[UnityEditor.MenuItem("GSN Tools/TriPeaks/Build Level Data")]
	static void GenerateLevelData ()
	{
		PlayfieldDataDB db = AssetDatabase.LoadAssetAtPath<PlayfieldDataDB>("Assets/TriPeaksBundle/Playfields/PlayfieldDataDB.asset");
		db.generateLevelData ();
	}

}
