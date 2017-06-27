using UnityEngine;
using UnityEditor;
using System;

public class CreateTipData {

	[MenuItem("Assets/Create/Tip Asset")]
	private static void CreateScriptableObjectAssetMenuCommand(MenuCommand command)
	{
		// ask for a path to save the asset
		var path = EditorUtility.SaveFilePanelInProject("Save asset as .asset", "NewTip.asset", "asset", "Please enter a file name");
		
		// catch all exceptions when playing around with assets and files
		try
		{
			var inst = ScriptableObject.CreateInstance("Tip");
			AssetDatabase.CreateAsset(inst, path); 
		}
		catch (Exception e)
		{
			Debug.LogException(e);
		}
	}
}
