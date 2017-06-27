using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Utils;

#if UNITY_EDITOR
using UnityEditor;
#endif
using System.IO;

namespace GSN.Skill.Games.Common.Client.DebugMenu
{
/*
	public static class ComponentExtensions2{
		public static RectTransform getRectTransform(this Component cp){
			return cp.transform as RectTransform;
		}
	}
*/
    public class ArenaMenu : SingletonMonoBehaviour<ArenaMenu> 
	{		
		public GameObject optionsGO;
        public Text topLabel;
		
		private const int PANEL_WIDTH = 420;
		private const int PANEL_HEIGHT = 1600;

		private const int PANEL_ENTRIES = 30;
		private List<GameObject> _panels = new List<GameObject>();

		public override void Awake()
		{
            base.Awake();

            if (Debug.isDebugBuild)
            {	
				GsnDebug.AddLog(Debug.Log, true);
				GsnDebug.AddLogWarning (Debug.LogWarning, true);
				GsnDebug.AddLogError (Debug.LogError, true);
            }
            
            Screen.autorotateToLandscapeLeft = true;
            Screen.autorotateToLandscapeRight = true;
            Screen.autorotateToPortrait = true;
            Screen.autorotateToPortraitUpsideDown = true;

            Screen.orientation = ScreenOrientation.AutoRotation;
        }

        public void AdjustScale()
        {
			int maxEntries = 0;
			for (int p = 0; p < _panels.Count; ++p)
			{
				GameObject panel = _panels[p];
				if (panel.transform.childCount > maxEntries)
					maxEntries = panel.transform.childCount;
			}

			for (int p = 0; p < _panels.Count; ++p)
			{
				GameObject panel = _panels[p];
				for (int i = panel.transform.childCount; i < maxEntries; ++i)
				{
					CreateCustomFromPrefab ("prefabs/GameplayOptionInputFiller", panel, "Filler");
				}
			}

            Debug.Log("Panels count" + _panels.Count);

			int contentWidth = PANEL_WIDTH * _panels.Count;
			GameObject content = GameObject.Find ("Content");

			RectTransform contentTransform = content.transform.getRectTransform();

			contentTransform.sizeDelta = new Vector2(contentWidth, 50 * maxEntries);
			contentTransform.localPosition = Vector2.zero;

			RectTransform optionsRT = optionsGO.GetComponent<RectTransform> ();
			optionsRT.sizeDelta = contentTransform.sizeDelta;
			optionsRT.localPosition = new Vector2(contentWidth / 2, -(50 * maxEntries) / 2);
		}

		public void Update()
		{
			GlobalActionQueue.instance.Process ();
		}

		void Start () 
		{
			//Load any player PlayerPrefs
          	//UILoadData.instance.PreloaderProgress = 100;
			//UILoadData.instance.PrefabLoadProgress = 100;

		}

		protected void SetTopLabel(string name)
		{
			topLabel.text = name + " Debug Menu";
		}
       
		public GameObject CreateCustomFromPrefab(string prefabName, GameObject parent, string name)
		{
			GameObject prefab = Resources.Load<GameObject> (prefabName);
            try
            {
    			GameObject newObject = GameObject.Instantiate<GameObject> (prefab);
    			newObject.name = name;
    			newObject.transform.SetParent(parent.transform, false);
    			newObject.transform.SetAsLastSibling ();
    //			newObject.transform.localScale = Vector3.one;
    //			newObject.transform.localPosition = Vector3.zero;
    			return newObject;
            }
            catch(Exception e)
            {
                Debug.LogError(e.Message);
                return null;
            }
		}

		public void AddOptionJSONName(GameObject o, string optionName, bool inStartRecord, bool inJoinRecord, object defaultValue)
		{
			OptionJSONName options = o.AddComponent<OptionJSONName> ();
			options._jSONName = optionName;
			options.startRecord = inStartRecord;
			options.joinRecord = inJoinRecord;
			options.defaultValue = defaultValue;
		}

		public virtual InputField CreateInputField(GameObject parent, string label, string defaultValue, string optionName, bool inStartRecord = false, bool inJoinRecord = false)
		{
			GameObject inputFieldGO = CreateCustomFromPrefab ("prefabs/GameplayOptionInput", parent, "GameOption" + optionName);
			Text text = inputFieldGO.GetComponentInChildren<Text>();
			text.text = label;
			InputField input = inputFieldGO.GetComponentInChildren<InputField>();
			SetupInputField (input, defaultValue, optionName, inStartRecord, inJoinRecord);
			return input;
		}

		protected virtual InputField FindInputField(string name, string defaultValue, string optionName, bool inStartRecord = false, bool inJoinRecord = false)
		{
			GameObject inputGO = GameObject.Find(name);
			InputField input = (InputField)inputGO.GetComponent<InputField>();
			SetupInputField (input, defaultValue, optionName, inStartRecord, inJoinRecord);
			return input;
		}

		private void SetupInputField(InputField input, string defaultValue, string optionName, bool inStartRecord = false, bool inJoinRecord = false)
		{
			string value = defaultValue;
			if (PlayerPrefs.HasKey(optionName))
				value = PlayerPrefs.GetString(optionName);
			
			AddOptionJSONName(input.gameObject, optionName, inStartRecord, inJoinRecord, defaultValue);
			int intValue = 0;
			bool isInteger = int.TryParse(value, out intValue);
			if (isInteger) {
				input.contentType = InputField.ContentType.IntegerNumber;
			} else {
				input.contentType = InputField.ContentType.Standard;
			}
			input.text = value;
		}


		public Toggle CreateToggle(GameObject parent, string label, bool defaultValue, string optionName="", bool inStartRecord = false, bool inJoinRecord = false)
		{
			GameObject option = CreateCustomFromPrefab ("prefabs/GameplayOptionToggle", parent, "GameOption" + optionName);
			Text text = option.GetComponentInChildren<Text>();
			text.text = label;
			Toggle toggle = option.GetComponentInChildren<Toggle>();
			SetupToggle (toggle, defaultValue, optionName, inStartRecord, inJoinRecord);
			return toggle;
		}

		protected Toggle FindToggle(string name, bool defaultValue, string optionName="", bool inStartRecord = false, bool inJoinRecord = false)
		{
			GameObject toggleGO = GameObject.Find(name);
			Toggle toggle = (Toggle)toggleGO.GetComponent<Toggle>();

			SetupToggle (toggle, defaultValue, optionName, inStartRecord, inJoinRecord);
			return toggle;
		}

		private void SetupToggle(Toggle toggle, bool defaultValue, string optionName, bool inStartRecord, bool inJoinRecord)
		{
			bool value = defaultValue;
			if (PlayerPrefs.HasKey(optionName))
				value = PlayerPrefs.GetInt(optionName) == 1?true:false;
			
			AddOptionJSONName(toggle.gameObject, optionName, inStartRecord, inJoinRecord, defaultValue);
			toggle.isOn = value;
		}

		public Button CreateButton(GameObject parent, string name, string label)
		{
			GameObject go = CreateCustomFromPrefab("prefabs/CustomButton", parent, name);
			Button button = go.GetComponentInChildren<Button>();
			Text labelText = go.GetComponentInChildren<Text> ();
			labelText.text = label;
			return button;

		}

		public GameObject CreatePanel(GameObject parent, string panelName) 
		{
			GameObject panel = CreateCustomFromPrefab ("prefabs/GameplayOptionsPanel", parent, panelName + "Panel");
			GameObject title = CreateCustomFromPrefab ("prefabs/GameplayOptionsTitle", panel, panelName + "Title");
			title.GetComponentInChildren<Text>().text = panelName;
			_panels.Add (panel);
			return panel;
        }
        public virtual void CreateLabel(GameObject parent, string labelName, string value)
        {
            GameObject labelFieldGO = CreateCustomFromPrefab("prefabs/GameplayOptionsTitle", parent, "GameOption" + labelName);
            Text text = labelFieldGO.GetComponentInChildren<Text>();
            text.text = labelName + ":"+ value;
        }

        public void ClearPanels()
        {
            _panels.Clear();
        }

        public void AddPanel(GameObject panel)
        {
            _panels.Add(panel);
        }
	}
}
