using UnityEngine;
using UnityEngine.UI;
using System;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;

using GSN.Skill.Games.Common.Client;
using GSN.Skill.Games.Common.Client.Game;
using GSN.Skill.Games.Common.Client.Session;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common.Model;

using Newtonsoft.Json.Linq;
using Newtonsoft.Json;
using System.Text;
using Gsn.AssetLoading;

#if UNITY_EDITOR
using UnityEditor;
#endif
using System.IO;

namespace GSN.Skill.Games.Common.Client.DebugMenu
{

	public static class ComponentExtensions{
		public static RectTransform getRectTransform(this Component cp){
			return cp.transform as RectTransform;
		}
	}
	public abstract class ArenaDebugMenu : MonoBehaviour 
	{		
		const string ADVANCEMODE_ID = "AdanvacedMode";

		protected Toggle _hideAllText;
        protected Toggle _mockSessionString;
		protected Toggle _useLocalResources;

		private Toggle _useNet;
		private Toggle _abortOnEndToggle;
		private InputField _netUrl;

		private Toggle _sendEmailWhenDone;
		private InputField _replayEmailTo;
		private InputField _replayEmailSmtpServer;
		private InputField _replayEmailSmtpPort;
		private InputField _replayEmailFromAddress;
		private InputField _replayEmailFromPassword;

		private MemoryStream _replayStream;
		private bool _playReplay = false;

		protected GameObject optionsGO;
		protected string _gameSceneToLoad;
		
		const string REPLAY_FILENAME = "replayFilename";
		const string NET_URL = "netUrl";

		private const int PANEL_WIDTH = 420;
		private const int PANEL_HEIGHT = 1600;

		private const int PANEL_ENTRIES = 30;
		private List<GameObject> _panels = new List<GameObject>();

		private GameObject _easyPanel = null;
		protected string _easyPanelName = null;

		private bool _useRecordOverrides = false;
		private string _startRecordOverride = "";
		private string _joinRecordOverride = "";

		public virtual void Awake()
		{
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

			optionsGO = GameObject.Find ("Options");

			GameObject panel1 = CreatePanel (optionsGO, "Gameplay Options");
			CreateInputField (panel1, "GameTime", "", GameModelBase.OPTIONS_GAME_TIME, false, true);
			CreateInputField (panel1, "Seed", "", GameModelBase.SETUP_SEED, true);
			CreateInputField (panel1, "Instance Seeed", "", GameModelBase.OPTIONS_TI_SEED, true);
            CreateInputField (panel1, "Game Tip 1", "GenericTip1", GameModelBase.OPTIONS_GAME_TIP1, false, true);			
            CreateInputField (panel1, "Game Tip 2", "GenericTip2", GameModelBase.OPTIONS_GAME_TIP2, false, true);
			CreateInputField (panel1, "Game Tip 3", "GenericTip3", GameModelBase.OPTIONS_GAME_TIP3, false, true);			
            
			_hideAllText = CreateToggle (panel1, "Hide All Text", false, "HideAllText");
            _mockSessionString = CreateToggle (panel1, "Mock Session Strings", false, "MockSessionStrings");
			_useLocalResources = CreateToggle (panel1, "Use Local Resources", true, "UseLocalResources");
            
			Button btn = CreateButton (panel1, "Reset Options", "Reset Options");
			btn.gameObject.AddComponent<HorizontalLayoutGroup> ();
			btn.onClick.AddListener (ResetToDefault);

            CreateLabel(panel1, "Arena SDK Version", VersionInfo.sdkVersion);
            foreach (KeyValuePair<string,VersionInfo.GameVersionInfo> entry in VersionInfo.gameVersions)
            {
                CreateLabel(panel1, "Game", entry.Key);
                CreateLabel(panel1, "Game Version", entry.Value.gameVersion);
                CreateLabel(panel1, "Game SDK Version", entry.Value.sDKVersion);
                CreateLabel(panel1, "Build # Version", entry.Value.buildNumber);            
            }

			GameObject replayPanel = CreatePanel (optionsGO, "Replay");
			_abortOnEndToggle = CreateToggle (replayPanel, "Abort on End", false, "abortOnEnd");
			InputField fileName = CreateInputField (replayPanel, "Filename", "", "replayFilename");

			Button runReplay = CreateButton (replayPanel, "Dump Metrics", "Dump Metrics");
			runReplay.gameObject.AddComponent<HorizontalLayoutGroup> ();
			runReplay.onClick.AddListener (() => 
			{
				loadReplayStream(fileName.text, () =>
				{
					GameModelBase model = CreateModel();

					int excessRealTime;
					
					List<KeyValuePair<string, JToken>> l = model.HandleGameLog(_replayStream, out excessRealTime);
					if (l != null)
					{
						foreach(KeyValuePair<string, JToken> d in l)
						{
							GsnDebug.Log (d);
						}
					}
					GsnDebug.Log ("The score was " + model.GetScore());
					GsnDebug.Log ("The excessRealTime was " + excessRealTime);
				});
			});


#if UNITY_EDITOR
			Button replayFileButton = CreateButton(replayPanel, "replayFileBtn", "Choose Replay File");
			replayFileButton.gameObject.AddComponent<HorizontalLayoutGroup> ();
			replayFileButton.onClick.AddListener(() =>
			                                     {
				string path = EditorUtility.OpenFilePanel("Load replay", "", "");
				if (!String.IsNullOrEmpty(path))
				{
					fileName.text = "file://" + path;
				}
			});
#endif

			Button startReplayButton = CreateButton(replayPanel, "startReplay", "Start Replay");
			startReplayButton.gameObject.AddComponent<HorizontalLayoutGroup> ();
			startReplayButton.onClick.AddListener(() =>
            {
				loadReplayStream(fileName.text, StartGame);
			});
#if UNITY_EDITOR
			GameObject gameDataPanel = CreatePanel (optionsGO, "Game Data");
			InputField gameDatafileName = CreateInputField (gameDataPanel, "Filename", "", "gameDataFilename");
			Button gameDataFileButton = CreateButton(gameDataPanel, "gameDataFileButton", "Choose Game Data File");
			gameDataFileButton.gameObject.AddComponent<HorizontalLayoutGroup> ();
			gameDataFileButton.onClick.AddListener(() =>
			                                       {
				string path = EditorUtility.OpenFilePanel("Load Game Data", "", "");
				if (!String.IsNullOrEmpty(path))
				{
					gameDatafileName.text = path;
				}
			});
			Button startWithRandomGameData = CreateButton (gameDataPanel, "Start With Random Game Data", "Start With Random Game Data");
			startWithRandomGameData.gameObject.AddComponent<HorizontalLayoutGroup> ();
			startWithRandomGameData.onClick.AddListener (() => 
			{
				StartWithRandomGameData(gameDatafileName.text);
			});
#endif
			GameObject replayEmailPanel = CreatePanel (optionsGO, "Replay Email Settings");
			_replayEmailTo = CreateInputField (replayEmailPanel, "Emails To", "", "replayEmails");
			_replayEmailSmtpServer = CreateInputField (replayEmailPanel, "Smtp Address", "", "replayEmailSmtpServer");
			_replayEmailSmtpPort = CreateInputField (replayEmailPanel, "Smtp Port", "-1", "replayEmailSmtpPort");
			_replayEmailFromAddress = CreateInputField (replayEmailPanel, "Email From", "", "replayEmailFromAddress");
			_replayEmailFromPassword = CreateInputField (replayEmailPanel, "Email From Password", "", "replayEmailFromPassword");
			_replayEmailFromPassword.asteriskChar = '*';
			_replayEmailFromPassword.contentType = InputField.ContentType.Password;

			_sendEmailWhenDone = CreateToggle (replayPanel, "Send Replay Email", false, "SendReplayEmail");
			_sendEmailWhenDone.onValueChanged.AddListener (((bool b) => {replayEmailPanel.SetActive(b);}));
			replayEmailPanel.SetActive (_sendEmailWhenDone.isOn);

			GameObject useNetGO = GameObject.Find("UseNet");
			if (useNetGO != null)
			{
				_useNet = (Toggle)useNetGO.GetComponent<Toggle>();
				AddOptionJSONName(_useNet.gameObject, "useNet", false, false, false);
			}

			GameObject netUrlGO = GameObject.Find("neturl");
			if (netUrlGO != null)
			{
				_netUrl = (InputField)netUrlGO.GetComponent<InputField>();
			}

			AddCustomControls ();

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

			int contentWidth = PANEL_WIDTH * _panels.Count;
			GameObject content = GameObject.Find ("Content");

			RectTransform contentTransform = content.transform.getRectTransform();

			contentTransform.sizeDelta = new Vector2(contentWidth, 50 * maxEntries);
			contentTransform.localPosition = Vector2.zero;

			RectTransform optionsRT = optionsGO.GetComponent<RectTransform> ();
			optionsRT.sizeDelta = contentTransform.sizeDelta;
			optionsRT.localPosition = new Vector2(contentWidth / 2, -(50 * maxEntries) / 2);

			if (_easyPanelName  != null) 
			{
				GameObject canvas = GameObject.Find ("Canvas");
				_easyPanel = CreateCustomFromPrefab (_easyPanelName, canvas, "Easy Panel");

				GameObject header = GameObject.Find ("StartGame");
				
				Button simpleButton = CreateButton (header, "Simple", "Simple");
				
				simpleButton.onClick.AddListener (() => 
				                                  {
					_easyPanel.SetActive (true);
				});
			}
		}

		public void Update()
		{
			GlobalActionQueue.instance.Process ();
		}

		protected virtual GameModelBase CreateModel()
		{
			return null;
		}

		protected virtual void AddCustomControls()
		{

		}

		byte[] convertToBinary(byte[] fileBytes)
		{
			byte[] binData;

			try {

				binData = (Encoding.UTF8.GetString (fileBytes)).HexToBytes();

				GsnDebug.Log ("stream is text");
			}
			catch {

				GsnDebug.Log ("stream is binary");
				binData = fileBytes;
			}
			return binData;
		}

		public void loadReplayStream(string url, Action doneAction)
		{
			if (String.IsNullOrEmpty(url))
				return;


			RequestWrapper wr = new RequestWrapper(url);	
			wr.send( () =>
			{
				if (wr.Dispatcher.FailReason != null)
				{
					GsnDebug.LogError("Failure to load " + url + ". Reason: " + wr.Dispatcher.FailReason);
					return;
				}

				byte[] binData = convertToBinary(wr.Dispatcher.ResponseBytes);

				_replayStream = new MemoryStream(binData);
				GsnDebug.Log("Replay Loaded" + url);
				_playReplay = true;
				GlobalActionQueue.instance.QueueAction(doneAction);
			});

		}

		public IEnumerator loadReplayData(string filename, Action doneAction)
		{
			_replayStream = null;
			// Start a download of the given URL
			WWW www = new WWW(filename);
			
			// Wait for the WWW object to return the data or an error.
			while (!www.isDone && www.error == null)
			{
				yield return null;
			}

			if (www.responseHeaders.Count > 0)
			{
				
				if (www.responseHeaders.ContainsKey("STATUS"))
				{
					string status = www.responseHeaders["STATUS"];
					if (status.IndexOf("200") == -1)
					{
						GsnDebug.LogError("Replay Error " + filename + " not found");
						yield break;
					}
				}
			}
			
			if (String.IsNullOrEmpty(www.error))
			{
				_replayStream = new MemoryStream(www.bytes);
				GsnDebug.Log("Replay Loaded" + filename);
				_playReplay = true;
				doneAction();
			}
			else
				GsnDebug.LogError("Replay Error " + www.error);
		}

		void Start () 
		{
			//Load any player PlayerPrefs
			LoadPlayerPrefs();
		}

		protected void SetTopLabel(string name="Top Label")
		{
			GameObject topLabel = GameObject.Find(name);
			Text topLabelText = topLabel.GetComponent<Text>();
			topLabelText.text = _gameSceneToLoad + " Debug Menu";
		}

		protected abstract string getTitleName();

		protected abstract string getModelHash();

		// Games must implement this function, to create their GameSpecific datasafe plugin.
		// they should return null if they don't use a datasafe.
		protected abstract IDataSafePlugin CreateDataSafePlugin(Dictionary<string, string> joinBody, Dictionary<string, string> joinRecord);

		public virtual void StartGame()
		{
			if (_easyPanel != null) 
			{
				PlayerPrefs.SetInt (ADVANCEMODE_ID, _easyPanel.activeSelf ? 0 : 1);	
			}

			bool useNet = _useNet != null? _useNet.isOn : false;

			// find all the text entries
			Dictionary<string, string> setup = new Dictionary<string, string> ();
			Dictionary<string, string> options = new Dictionary<string, string> ();
            Component[] inputs = GetComponentsInChildren<InputField>();
			foreach (InputField input in inputs)
			{
				OptionJSONName jsonName = input.GetComponent<OptionJSONName>();
				if (jsonName != null )
				{
					PlayerPrefs.SetString(jsonName._jSONName, input.text);	
					if (input.text != "")
					{
						// used in replay, but could be used on others				
						if (jsonName._overrideToggle != null && !jsonName._overrideToggle.isOn)
							continue;
						
						if (jsonName.startRecord)
							setup[jsonName._jSONName] = input.text;
						if (jsonName.joinRecord)
							options[jsonName._jSONName] = input.text;
					}
				}
			}
			
			// Toggles
			Component[] toggles = GetComponentsInChildren<Toggle>();
			foreach (Toggle toggle in toggles)
			{
				OptionJSONName jsonName = toggle.GetComponent<OptionJSONName>();
				if (jsonName != null)
				{
					string value = toggle.isOn?"1":"0";
					if (jsonName.startRecord)
						setup[jsonName._jSONName] = value;
					if (jsonName.joinRecord)
						options[jsonName._jSONName] = value;
					PlayerPrefs.SetInt(jsonName._jSONName, toggle.isOn?1:0);
				}
			}

			// For replay purposes, if the seed is set to 0, we need to choose the value now, so that the replay record, will be sent to the move log.
			string seed = null;
			if (!setup.TryGetValue (GameModelBase.SETUP_SEED, out seed))
				seed = "0";
			if (Convert.ToInt32(seed) == 0)
			{
				System.Random rand = new System.Random();
				setup[GameModelBase.SETUP_SEED] = rand.Next().ToString();
			}

			Session.SessionType sessionType = Session.SessionType.Mock;
			if (_playReplay)
			{
				_playReplay = false;
				sessionType = Session.SessionType.Replay;
			}
			else if (useNet)
				sessionType = Session.SessionType.Real;
			IGameSession session = Session.Factory.CreateGameSession(sessionType);
			ArenaProxy.instance.gameSession = session;

			switch (sessionType)
			{
				case Session.SessionType.Replay:
	                ReplayGameSession replaySession = (ReplayGameSession) session;
    	            replaySession.logStream = _replayStream;
                    replaySession.abortOnEnd = _abortOnEndToggle.isOn;
    	            break;
    	         case Session.SessionType.Mock:
					MockGameSession mockSession = (MockGameSession)session;
					mockSession.CreateDataSafePlugin = CreateDataSafePlugin;
					mockSession.Setup = setup;
					mockSession.Options = options;
					mockSession.ReplayEmailWhenDone = _sendEmailWhenDone.isOn;
					if (mockSession.ReplayEmailWhenDone)
					{
	                    mockSession.ReplayToEmails = _replayEmailTo.text;
						mockSession.ReplayEmailSmtpServer = _replayEmailSmtpServer.text;
						mockSession.ReplayEmailSmtpPort = Convert.ToInt32(_replayEmailSmtpPort.text);
						mockSession.ReplayEmailFromAddress = _replayEmailFromAddress.text;
						mockSession.ReplayEmailFromPassword = _replayEmailFromPassword.text;
                        if(!mockSession.checkReplayParams())
						{
							GsnDebug.LogError("Cannot start replay due to invalid parameters");
							return;
						}
					}
					if ( _useRecordOverrides)
					{
						mockSession.Setup = JsonConvert.DeserializeObject<Dictionary<string, string>>(_startRecordOverride);
						mockSession.Options = JsonConvert.DeserializeObject<Dictionary<string, string>>(_joinRecordOverride);
						_useRecordOverrides = false;
					}
					break;
				case Session.SessionType.Real:
					GameSession gameSession = (GameSession)session;
					if (_netUrl != null)
					{
						gameSession.Url = _netUrl.text;
						PlayerPrefs.SetString(NET_URL, _netUrl.text);
					}
					break;
            }


			// TODO - this debug needs to get the correct join json, and likely mock up the validation of that
			GameSession.GameSetupOptions gamesetupOptions = new GameSession.GameSetupOptions();
			gamesetupOptions.tournID = "1";
			gamesetupOptions.titleName = getTitleName();
			gamesetupOptions.gameID = "1";


			session.JoinTournament (gamesetupOptions, () =>
				{
					if (!session.Success) 
					{
						GsnDebug.LogError("Failed to join tournament: " + session.FailReason);
						return;
					}
				});


			ToggleHideText ();

			ToggleMockSessionText ();

			ToggleUseLocalResources();
            
            ArenaProxy.instance.ReturnFromGameAction = GoToArena;

   			UILoadData.instance.LoadNextScene(_gameSceneToLoad);

			// Create a scene helper, Arena client does this so we need to do something similar in standalone

			GameObject sceneHelper = GameObject.Find ("SceneHelper");
			if (sceneHelper == null) 
			{
				sceneHelper = new GameObject ("SceneHelper");
				sceneHelper.AddComponent<ArenaDebugSceneHelper> ();
				DontDestroyOnLoad (sceneHelper);
			}
        }

        private void GoToArena()
        {
            ArenaProxy.instance.ReturnFromGameAction = null;

   			UILoadData.instance.LoadNextScene("DebugArena");
        }
		
		protected virtual void LoadPlayerPrefs()
		{
			if (_netUrl != null)
				_netUrl.text = PlayerPrefs.GetString (NET_URL);
			
			ToggleHideText ();

			ToggleUseLocalResources();

			if (_easyPanel != null)
			{
				int advancedPref = PlayerPrefs.GetInt (ADVANCEMODE_ID);
				_easyPanel.SetActive (advancedPref == 0);
			}
		}


		public void ToggleHideText()
		{
			if (_hideAllText != null)
				StringTable.instance.cheat = _hideAllText.isOn;
		}

		public void ToggleUseLocalResources()
		{
			//if (_useLocalResources != null)
			//	AssetBundleServiceInitializer.instance.forceLocalAssetMode = _useLocalResources.isOn;
		}


		protected GameObject CreateCustomFromPrefab(string prefabName, GameObject parent, string name)
		{
			GameObject prefab = Resources.Load<GameObject> (prefabName);
			GameObject newObject = GameObject.Instantiate<GameObject> (prefab);
			newObject.name = name;
			newObject.transform.SetParent(parent.transform, false);
			newObject.transform.SetAsLastSibling ();
//			newObject.transform.localScale = Vector3.one;
//			newObject.transform.localPosition = Vector3.zero;
			return newObject;
		}

		private void AddOptionJSONName(GameObject o, string optionName, bool inStartRecord, bool inJoinRecord, object defaultValue)
		{
			OptionJSONName options = o.AddComponent<OptionJSONName> ();
			options._jSONName = optionName;
			options.startRecord = inStartRecord;
			options.joinRecord = inJoinRecord;
			options.defaultValue = defaultValue;
		}

		protected virtual InputField CreateInputField(GameObject parent, string label, string defaultValue, string optionName, bool inStartRecord = false, bool inJoinRecord = false)
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


		protected Toggle CreateToggle(GameObject parent, string label, bool defaultValue, string optionName="", bool inStartRecord = false, bool inJoinRecord = false)
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

		protected Button CreateButton(GameObject parent, string name, string label)
		{
			GameObject go = CreateCustomFromPrefab("prefabs/CustomButton", parent, name);
			Button button = go.GetComponentInChildren<Button>();
			Text labelText = go.GetComponentInChildren<Text> ();
			labelText.text = label;
			return button;

		}

		virtual public List<string> OptionNames() 
		{
			return new List<string>(System.Enum.GetNames(typeof(BaseOptionName)));
		}

		protected GameObject CreatePanel(GameObject parent, string panelName) 
		{
			GameObject panel = CreateCustomFromPrefab ("prefabs/GameplayOptionsPanel", parent, panelName + "Panel");
			GameObject title = CreateCustomFromPrefab ("prefabs/GameplayOptionsTitle", panel, panelName + "Title");
			title.GetComponentInChildren<Text>().text = panelName;
			_panels.Add (panel);
			return panel;
        }
        protected virtual void CreateLabel(GameObject parent, string labelName, string value)
        {
            GameObject labelFieldGO = CreateCustomFromPrefab("prefabs/GameplayOptionsTitle", parent, "GameOption" + labelName);
            Text text = labelFieldGO.GetComponentInChildren<Text>();
            text.text = labelName + ":"+ value;
        }
        
        protected void ToggleMockSessionText ()
		{
			if (_mockSessionString.isOn) 
			{
				ITournamentSessionData tournamentSession = ArenaProxy.instance.TournamentSessionData;
				for (int x = 0; x < StringTable.instance.stringIDs.Count; ++x) 
				{
					if (!string.IsNullOrEmpty (StringTable.instance.stringIDs [x])) 
					{
						if (!tournamentSession.Strings.ContainsKey (StringTable.instance.stringIDs [x])) 
						{
							tournamentSession.Strings.Add (StringTable.instance.stringIDs [x], "Sessions String");
						} 
						else 
						{					
							tournamentSession.Strings [StringTable.instance.stringIDs [x]] = "Sessions String";
						}
					}
				}                
                
				// String tables can be set up before this is called.
				StringTable.instance.UpdateFromDictionary (tournamentSession.Strings);    
			}
		}

		void StartWithRandomGameData(string gameDatafileName)
		{
			string json = "";
			if (File.Exists(gameDatafileName))
			{
				using (StreamReader streamReader = new StreamReader(@gameDatafileName))
				{
					json = streamReader.ReadToEnd();
				}
			}

			if ( string.IsNullOrEmpty(json))
			{
				GsnDebug.Log("Invalid file:"+gameDatafileName);
				return;
			}

			JArray dectileArray = JArray.Parse(json);
			if (dectileArray.Count <= 0) 
			{
				GsnDebug.Log("Invalid JSON, No dectiles");
				return;
			}

			JArray gameDataArray = (JArray)dectileArray [UnityEngine.Random.Range (0, dectileArray.Count)];

			if (gameDataArray.Count <= 0 )
			{
				GsnDebug.Log("Invalid JSON, No game data");
				return;
			}

			JObject gameData = (JObject)gameDataArray [UnityEngine.Random.Range (0, gameDataArray.Count)];

			Dictionary<string,string> data = gameData.ToObject<Dictionary<string,string>>();
			_useRecordOverrides = true;
			_startRecordOverride = data ["startRecord"];
			_joinRecordOverride = data ["joinRecord"];

			StartGame ();

			_useRecordOverrides = false;
		}
		void ResetToDefault()
		{
            Component[] inputs = GetComponentsInChildren<InputField>();
			foreach (InputField input in inputs)
			{
				OptionJSONName jsonName = input.GetComponent<OptionJSONName>();
				if (jsonName == null )
					continue;
				input.text = (string)jsonName.defaultValue;
			}

			Component[] toggles = GetComponentsInChildren<Toggle>();
			foreach (Toggle toggle in toggles)
			{
				OptionJSONName jsonName = toggle.GetComponent<OptionJSONName>();
				if (jsonName == null )
					continue;
				toggle.isOn = (bool)jsonName.defaultValue;
			}

        }
        
	}
}
