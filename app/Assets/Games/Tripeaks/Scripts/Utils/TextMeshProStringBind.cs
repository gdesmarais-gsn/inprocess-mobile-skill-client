using System;
#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;
using TMPro;
using GSN.Skill.Games.Common.Client;

namespace GSN.Skill.Games.Tripeaks
{
	public class TextMeshProStringBind : StringBind
    {
        void Start()
		{
			SetComponentText( StringTable.instance.GetEntry (id));
		}
        
		protected override void SetComponentText(string s)
		{
			TextMeshPro tmPro = GetComponent<TextMeshPro>();
			if (tmPro != null)
				tmPro.text = s;
			else
			{
				TextMeshProUGUI tmProGUI = GetComponent<TextMeshProUGUI>();
				if (tmProGUI != null)
					tmProGUI.text = s;
				else
				{
					base.SetComponentText(s);
				}
			}
		}
    }

#if UNITY_EDITOR
	[CustomEditor(typeof(TextMeshProStringBind))]
	public class StringBindEditor : Editor
	{
		private TextMeshProStringBind _bindTarget;
	
		void OnEnable() 
	    {
	        // store the current target TextLabel instance
			_bindTarget = (TextMeshProStringBind)target;
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
#endif
}

