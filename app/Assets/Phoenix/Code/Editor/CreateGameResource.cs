using UnityEngine;
using System.Collections;
using UnityEditor;
using System;
using System.IO;

public class CreateGameResource : MonoBehaviour {

	[MenuItem("Assets/Create/Game Resource")]
	private static void CreateScriptableObjectAssetMenuCommand(MenuCommand command)
	{
		string path = "Assets";
		foreach (UnityEngine.Object obj in Selection.GetFiltered(typeof(UnityEngine.Object), SelectionMode.Assets))
		{
			path = AssetDatabase.GetAssetPath(obj);
			if (File.Exists(path))
			{
				path = Path.GetDirectoryName(path);
			}
			break;
		}

		// catch all exceptions when playing around with assets and files
		try
		{
			string appendString = "";
			int i = 1;
			while (File.Exists(path + "/GameResource" + appendString + ".asset"))
			{
				appendString = i.ToString();
				i++;
			}

			var inst = ScriptableObject.CreateInstance("GameResource");
			AssetDatabase.CreateAsset(inst, path + "/GameResource" + appendString + ".asset"); 
		}
		catch (Exception e)
		{
			Debug.LogException(e);
		}
	}
}