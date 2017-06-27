using UnityEditor;
using UnityEngine;
using GSN.Skill.Games.Common.Client;

[CustomEditor(typeof(StringBind), true)]
public class StringBindEditorBase : Editor
{
	private StringBind _bindTarget;
	
	void OnEnable() 
	{
		_bindTarget = (StringBind)target;
	}

	public override void OnInspectorGUI()
	{
		StringTable table = StringTable.instance;
		
		// get the index of the currently set string id (if set)
		int choice;
		if (string.IsNullOrEmpty(_bindTarget.id) || (choice = table.stringIDs.IndexOf(_bindTarget.id)) == -1)
			choice = 0; // default to the first item (NULL)
		
		// get the newly selected index from our dropdown
		choice = EditorGUILayout.Popup("String ID", choice, table.stringIDs.ToArray());
		
		// set the Tip's id to the currently selected choice
		_bindTarget.id = (choice > 0)?table.stringIDs[choice] : null;
		
		if (GUI.changed)
			EditorUtility.SetDirty(_bindTarget);
	}
}



