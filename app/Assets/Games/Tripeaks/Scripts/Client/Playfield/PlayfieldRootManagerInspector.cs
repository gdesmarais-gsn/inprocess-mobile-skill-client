using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif

using System.Collections;
using GSN.Skill.Games.Tripeaks;

#if UNITY_EDITOR
[CustomEditor(typeof(PlayfieldRootManager))]
public class PlayfieldRootManagerInspector : Editor {

	public override void OnInspectorGUI()
	{
		if(GUILayout.Button("Save All PlayfieldData"))
		{
			((PlayfieldRootManager)target).SaveAllPlayfieldData();
			//PlayfieldRoot.SavePlayfieldData(target);
		}
		
		if(GUILayout.Button("Load All PlayfieldData Into PlayfieldDataDB"))
		{
			((PlayfieldRootManager)target).LoadAllPlayfieldDataIntoDB();
			//PlayfieldRoot.SavePlayfieldData(target);
		}

//		EditorGUIUtility.LookLikeInspector();
		DrawDefaultInspector();
	}
}
#endif
