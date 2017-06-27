using UnityEngine;
using UnityEditor;
using System;
using System.Collections.Generic;
using System.Linq;
using GSN.Skill.Games.Common.Client.DebugMenu;
using GSN.Skill.Games.Common.AssemblyExtensionsWorkaround;

namespace GSN.Skill.Games.Common.Client
{
	/// Custom editor for  ArenaDebugMenuPresetButton
	/**
		This allows the editing of the preset list with a handy drop down of the options
	*/	
	[CustomEditor(typeof(ArenaDebugMenuPresetButton))] 
	public class ArenaDebugPresetEditor : UnityEditor.Editor 
	{
		private List<string> _keys = null;

	 	List<string> keys
		{
			get
			{
				if (_keys != null)
					return _keys;
		
				GameObject go = new GameObject("Temp");
				IEnumerable<Type> types = AppDomain.CurrentDomain.GetAssemblies().
				SelectMany(s => s.GetLoadableTypes()).
				Where(p => typeof(ArenaDebugMenu).IsAssignableFrom(p));

				Type type = types.First();
				if (type.Equals (typeof(ArenaDebugMenu)))
					type = types.Last ();

				ArenaDebugMenu arenaDebugMenu = (ArenaDebugMenu)go.AddComponent(type);
				_keys = arenaDebugMenu.OptionNames();

				GameObject.DestroyImmediate(go);

				return _keys;

			}
		}
		
		/// Draw the gui elements
		public override void OnInspectorGUI() 
		{
			ArenaDebugMenuPresetButton arenaDebugMenuPresetButton = (ArenaDebugMenuPresetButton) target;
			
			for (int x = 0;x < arenaDebugMenuPresetButton.presets.Count;++x)
			{
				GUILayout.BeginHorizontal();			
				
				// Drop down list of keys
				int selected  = keys.IndexOf(arenaDebugMenuPresetButton.presets[x].presetName);
				int selectedChange = EditorGUILayout.Popup("Key:", selected, keys.ToArray());
				if ( selected != selectedChange)
				{
					arenaDebugMenuPresetButton.presets[x].presetName = keys[selectedChange];
					EditorUtility.SetDirty(arenaDebugMenuPresetButton);
					break;
				}
				
				// Value
				arenaDebugMenuPresetButton.presets[x].presetValue = GUILayout.TextField(arenaDebugMenuPresetButton.presets[x].presetValue);
	
				// Remove
				if (GUILayout.Button("X", GUILayout.Width(30)))
				{
					arenaDebugMenuPresetButton.presets.RemoveAt(x);
					EditorUtility.SetDirty(arenaDebugMenuPresetButton);
					break;
				}
				GUILayout.EndHorizontal();
			} 
			
			GUILayout.Space(20);			
			
			// Add new preset button
			if(GUILayout.Button("Add Preset"))
			{
				arenaDebugMenuPresetButton.presets.Add( new PresetEntry(keys[0],"0"));
			}
			
			// Save it
			EditorUtility.SetDirty(arenaDebugMenuPresetButton);			
		}
	}
}
