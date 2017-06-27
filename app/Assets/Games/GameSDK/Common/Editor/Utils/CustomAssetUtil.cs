using UnityEngine;
using UnityEditor;

//http://slides.com/cratesmith/how-to-use-unity#/16/3
public static class CustomAssetUtil
{
    public static void CreateAsset<T>() where T : ScriptableObject
    {
        T asset = ScriptableObject.CreateInstance<T>();
        
        string path = AssetDatabase.GetAssetPath(UnityEditor.Selection.activeObject);
        if (path == "") 
        {
            path = "Assets";
        } 
        else if (System.IO.Path.GetExtension(path) != "") 
        {
            path = path.Replace(System.IO.Path.GetFileName (UnityEditor.AssetDatabase.GetAssetPath (UnityEditor.Selection.activeObject)), "");
        }
        
        string assetPathAndName = UnityEditor.AssetDatabase.GenerateUniqueAssetPath(path + "/New " + typeof(T).ToString() + ".asset");
        
        AssetDatabase.CreateAsset(asset, assetPathAndName);
        
        AssetDatabase.SaveAssets();
    	EditorUtility.FocusProjectWindow();
		Selection.activeObject = asset;
	}
}
