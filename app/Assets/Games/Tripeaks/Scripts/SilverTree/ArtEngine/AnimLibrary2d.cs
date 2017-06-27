using System;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif

public class AnimLibrary2d : ScriptableObject
{
	public AnimLayer2d[] layers;

#if UNITY_EDITOR
    //MenuItem("Tracker/Create New AnimLibrary2d")]
    //static void Create() {
    public static AnimLibrary2d Create(AnimLayer2d[] layers, string name) {
		AnimLibrary2d obj = ScriptableObject.CreateInstance<AnimLibrary2d>();
		if(layers == null)
			Debug.LogWarning("creating AnimLibrary2d with null layers: " + name, obj);
		//else
		//	Debug.Log("creating AnimLibrary2d: " + name, obj);
		obj.layers = layers;
		string dir = "Assets/Games/tripeaks/Art/LibrariesAnim2d";
		System.IO.Directory.CreateDirectory(System.IO.Path.GetDirectoryName(dir + "/" + name));
		string path = AssetDatabase.GenerateUniqueAssetPath(dir + "/" + name + "_anims.asset");
        AssetDatabase.CreateAsset(obj, path);
        AssetDatabase.SaveAssets();
        EditorGUIUtility.PingObject(obj);
        return obj;
    }
    public static AnimLibrary2d FindExisting(string name) {
		string dir = "Assets/Games/tripeaks/Art/LibrariesAnim2d";
		System.IO.Directory.CreateDirectory(System.IO.Path.GetDirectoryName(dir + "/" + name));
		string path = AssetDatabase.GenerateUniqueAssetPath(dir + "/" + name + "_anims.asset");
        return AssetDatabase.LoadAssetAtPath(path, typeof(AnimLibrary2d)) as AnimLibrary2d;
    }
#endif
}
