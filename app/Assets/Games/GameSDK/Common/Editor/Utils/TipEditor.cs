using UnityEngine;
using UnityEditor;
using GSN.Skill.Games.Common;
using GSN.Skill.Games.Common.Client;

#if UNITY_EDITOR
[CustomEditor(typeof(Tip))]
	public class TipEditor : Editor
	{
		private Tip _target;

		void Awake()
		{
		}
		
		void OnEnable()
		{
			// store the current target TextLabel instance
			_target = (Tip)target;
		}
		
		public override void OnInspectorGUI()
		{
			StringTable table = StringTable.instance;

			_target.sprite = (Sprite)EditorGUILayout.ObjectField("Tip Image", _target.sprite, typeof (Sprite), false);
          
			// get the index of the currently set string id (if set)
			int choice;
			if (string.IsNullOrEmpty(_target.id) || (choice = table.stringIDs.IndexOf(_target.id)) == -1)
				choice = 0; // default to the first item (NULL)
			
			// get the newly selected index from our dropdown
			choice = EditorGUILayout.Popup("String ID", choice, table.stringIDs.ToArray());
			
			// set the Tip's id to the currently selected choice
			_target.id = (choice > 0)?table.stringIDs[choice] : null;
			_target.text = table.GetEntry (_target.id);


			if (GUI.changed)
				EditorUtility.SetDirty(_target);
		}

	}
#endif
