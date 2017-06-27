using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Games.Tripeaks;

#if UNITY_EDITOR
[CanEditMultipleObjects]
[CustomEditor(typeof(PlayfieldRoot))]
public class PlayfieldRootInspector : Editor {

	static Dictionary<System.Type,bool> subTypesExpanded;
	public override void OnInspectorGUI()
	{
		if(GUILayout.Button("Save PlayfieldData"))
		{
			foreach(PlayfieldRoot tgt in targets)
			{
				tgt.SavePlayfieldData();
				//PlayfieldRoot.SavePlayfieldData(tgt);
			}
			AssetDatabase.SaveAssets();
		}

//		EditorGUIUtility.LookLikeInspector();
		DrawDefaultInspector();

		//List<PlayfieldData> dataTargetsList = new List<PlayfieldData>();
		//List<string> dataTargetPaths = new List<string>();
		Dictionary<System.Type,List<UnityEngine.Object>> subTargetsMap = new Dictionary<System.Type,List<UnityEngine.Object>>();
		foreach(PlayfieldRoot tgt in targets) {
			if(!tgt.playfieldData) {
				tgt.FindExistingPlayfieldData();
			}
			if(tgt.playfieldData) {
				//dataTargetsList.Add(tgt.playfieldData);
				string path = AssetDatabase.GetAssetPath(tgt.playfieldData);
				if(path != null && path.Length != 0) {
					//dataTargetPaths.Add(path);
					foreach(UnityEngine.Object obj in AssetDatabase.LoadAllAssetsAtPath(path)) {
						if (obj){
							System.Type type = obj.GetType();
							List<UnityEngine.Object> list;
							if(subTargetsMap.TryGetValue(type, out list)) {
								list.Add(obj);
							} else {
								subTargetsMap[type] = new List<UnityEngine.Object>{ obj };
							}
						}
					}
				}
			}
		}
		System.Type[] keys = new System.Type[subTargetsMap.Count];
		subTargetsMap.Keys.CopyTo(keys, 0);
		System.Array.Sort(keys, (a,b) => a.Name.CompareTo(b.Name));
		foreach(System.Type key in keys)
		{
			UnityEngine.Object[] subTargets = subTargetsMap[key].ToArray();
			//if(subTargets.Length != 0)
			{
				if(subTypesExpanded == null) {
					subTypesExpanded = new Dictionary<System.Type,bool>();
				}
				bool wasShow;
				if(!subTypesExpanded.TryGetValue(key, out wasShow)) {
					wasShow = true;
					subTypesExpanded.Add(key,wasShow);
				}
				//GUILayout.Box("", new GUILayoutOption[]{GUILayout.ExpandWidth(true), GUILayout.Height(1)});
				bool show = EditorGUILayout.InspectorTitlebar(wasShow, subTargets);
				if(show)
				{
					if(GUILayout.Button("Select"))
					{
						Selection.objects = subTargets;
					}
					EditorGUI.BeginChangeCheck();
					SerializedObject so = new SerializedObject(subTargets);
					SerializedProperty sp = so.GetIterator();
					bool allowRecurse = true;
					while(sp.NextVisible(allowRecurse))
					{
						EditorGUILayout.PropertyField(sp, true);
						allowRecurse = false;
					}
					if(EditorGUI.EndChangeCheck())
					{
						so.ApplyModifiedProperties();
					}
				}
				if(show != wasShow) {
					subTypesExpanded[key] = show;
				}
			}
		}
	}
}
#endif
