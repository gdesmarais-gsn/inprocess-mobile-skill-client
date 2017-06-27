#if UNITY_EDITOR
using GSN.Skill.Phoenix.Strings;
using UnityEditor;
using UnityEngine;

namespace GSN.Skill.Phoenix.Strings
{
	[CustomEditor(typeof(TextMeshProStringBind))]
	public class TextMeshProStringBindEditor : Editor
	{
		private TextMeshProStringBind _bindTarget;

		void OnEnable()
		{
			// store the current target TextLabel instance
			_bindTarget = (TextMeshProStringBind)target;
		}

		public override void OnInspectorGUI()
		{
			StringTable table = StringTable.Instance;

			// get the index of the currently set string id (if set)
			int choice;
			if (string.IsNullOrEmpty(_bindTarget.id) || (choice = table.StringIDs.IndexOf(_bindTarget.id)) == -1)
				choice = 0; // default to the first item (NULL)

			// get the newly selected index from our dropdown
			choice = EditorGUILayout.Popup("String ID", choice, table.StringIDs.ToArray());

			// set the Tip's id to the currently selected choice
			_bindTarget.id = (choice > 0) ? table.StringIDs[choice] : null;

			StringTable.Instance.CheatEnabled = EditorGUILayout.Toggle("Enable Global Cheat ",StringTable.Instance.CheatEnabled);

			if (GUI.changed)
				EditorUtility.SetDirty(_bindTarget);
		}
	}
}
#endif
