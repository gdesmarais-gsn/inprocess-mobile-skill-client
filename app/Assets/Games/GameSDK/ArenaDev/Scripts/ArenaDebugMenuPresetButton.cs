using UnityEngine;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Client.DebugMenu;
using UnityEngine.UI;

namespace GSN.Skill.Games.Common.Client
{
	[System.Serializable]
	public class PresetEntry
	{
		[SerializeField]
		public string presetName;
		[SerializeField]
		public string presetValue;
		
		public PresetEntry(string inPresetName, string inPresetValue)
		{
			presetName = inPresetName;
			presetValue = inPresetValue;
		}
	}
		
	/// Component that allows setting of preset option keys used on the Arena Debug menu. 
	/**
		This starts a game with a list of preset values.
	*/	
	public class ArenaDebugMenuPresetButton : MonoBehaviour 
	{	
		// unity does not like to serialize Dictionarys..
		[SerializeField]
		public List<PresetEntry> presets = new List<PresetEntry>(); 
		
		
		/// Called when the button is pressed
		public void OnHit()
		{
			ArenaDebugMenu arenaDebugMenu = (ArenaDebugMenu)GameObject.FindObjectOfType(typeof(ArenaDebugMenu));
			if ( arenaDebugMenu != null)
			{
				// Go through the presets and force the input fields to these values. Doing it this way will allow the user to verify the value are correct
				// on the next play through in the advance screen.
				
				// Text inputs
				Component[] inputs = arenaDebugMenu.GetComponentsInChildren<InputField>();
				foreach (InputField input in inputs)
				{
					OptionJSONName jsonName = input.GetComponent<OptionJSONName>();
					if (jsonName != null )
					{
						string value = GetValueForPresetName(jsonName._jSONName);
						if ( !string.IsNullOrEmpty(value))
							input.text = value;
					}
				}
				// Toggles
				Component[] toggles = arenaDebugMenu.GetComponentsInChildren<Toggle>();
				foreach (Toggle toggle in toggles)
				{
					OptionJSONName jsonName = toggle.GetComponent<OptionJSONName>();
					if (jsonName != null)
					{
						string value = GetValueForPresetName(jsonName._jSONName);
						if ( !string.IsNullOrEmpty(value))
						{
							toggle.isOn = ( value != "0");		
						}
					}
				}
				
				// Start the game as normal. Whatever is not preset will be left as is. 
				
				arenaDebugMenu.StartGame();
			}
		}
		
		/// help function to get a value for a preset, returns null if not set
		private string GetValueForPresetName(string presetName)
		{
			for (int x = 0;x < presets.Count;++x)
			{
				if ( presets[x].presetName == presetName)
					return presets[x].presetValue; 
			}
			
			return null;
		}
	}
	

}
