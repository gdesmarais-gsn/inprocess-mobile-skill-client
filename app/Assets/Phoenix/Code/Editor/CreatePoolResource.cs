using UnityEngine;
using UnityEditor;
using System;
using System.IO;
using GSN.Skill.Phoenix.View;

public class CreatePoolResource : MonoBehaviour
{
	[MenuItem("Assets/Create/Pool Resources")]
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
			string className = typeof(PoolResources).Name;

			string appendString = "";
			int i = 1;
			while (File.Exists(path + "/" + className + appendString + ".asset"))
			{
				appendString = i.ToString();
				i++;
			}

			var inst = ScriptableObject.CreateInstance(className);
			AssetDatabase.CreateAsset(inst, path + "/" + className + appendString + ".asset");
		}
		catch (Exception e)
		{
			Debug.LogException(e);
		}
	}
}
