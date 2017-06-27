using UnityEngine;
using UnityEditor;
using System;
using GSN.Skill.Games.Common;

public class CreateAnimCurve {
	
	[MenuItem("Assets/Create/Animation Curve Asset")]
	private static void CreateScriptableObjectAssetMenuCommand(MenuCommand command)
	{
		// ask for a path to save the asset
		var path = EditorUtility.SaveFilePanelInProject("Save asset as .asset", "NewTip.asset", "asset", "Please enter a file name");
		
		// catch all exceptions when playing around with assets and files
		try
		{
			AnimCurve inst = ScriptableObject.CreateInstance<AnimCurve>();
			AssetDatabase.CreateAsset(inst, path); 
		}
		catch (Exception e)
		{
			Debug.LogException(e);
		}
	}
}
