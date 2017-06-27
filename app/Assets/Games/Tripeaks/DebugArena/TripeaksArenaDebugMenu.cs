using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using GSN.Skill.Games.Common;
using GSN.Skill.Games.Common.Client.DebugMenu;
using GSN.Skill.Games.Common.Model;

namespace GSN.Skill.Games.Tripeaks
{
	using ToggleList = List<Toggle>;

	public class TripeaksArenaDebugMenu : ArenaDebugMenu
	{
		private GameObject _easyPanel = null;
		const string ADVANCEMODE_ID = "AdanvacedMode";
		private ToggleList _gameOptions = new ToggleList ();
		private ToggleList _tikiOptions = new ToggleList ();
		private ToggleList _trapOptions = new ToggleList ();

		public override void Awake ()
		{
            VersionInfo.AddGameVersion("TriPeaks", "ArenaRelease", VersionInfo.sdkVersion, VersionInfo.BUILD_NUMBER);
			GameObject canvas = GameObject.Find ("Canvas");
			_easyPanel = CreateCustomFromPrefab ("PANEL_EasyMode", canvas, "Easy Panel");

			Screen.orientation = ScreenOrientation.Landscape;
			base.Awake ();
			_gameSceneToLoad = "tripeaks";

			SetTopLabel ();

			new TriPeaksStringTable ();
		} 

		protected override void AddCustomControls ()
		{
			GameObject gamePanel = CreatePanel (optionsGO, "Game Options");
			_gameOptions.Add (CreateToggle (gamePanel, "Reshuffle", true, GameModel.OPTIONS_RESHUFFLE_ID, false, true));
			_gameOptions.Add (CreateToggle (gamePanel, "Hold", false, GameModel.OPTIONS_HOLD_ID, false, true));
			_gameOptions.Add (CreateToggle (gamePanel, "One Shot Wild", true, GameModel.OPTIONS_ONE_SHOT_WILD_ID, false, true));
			Toggle allOptions = CreateToggle (gamePanel, "All", false, "", true, false);
			allOptions.onValueChanged.AddListener (OnAllOptions);

			CreateInputField (gamePanel, "Board Number", "", GameModel.OPTIONS_BOARD_ID, false, true);
			CreateInputField (gamePanel, "Background", "", GameModel.OPTIONS_BACKGROUND_ID, false, true);
			CreateInputField (gamePanel, "Background Difficulty", "", GameModel.OPTIONS_BACKGROUND_DIFFICULTY_ID, false, true);

			GameObject tikiPanel = CreatePanel (optionsGO, "Tiki Options");
			_tikiOptions.Add (CreateToggle (tikiPanel, "Red", false, GameModel.OPTIONS_RED_TIKI_ID, true, false));
			_tikiOptions.Add (CreateToggle (tikiPanel, "Black", false, GameModel.OPTIONS_BLACK_TIKI_ID, true, false));
			CreateInputField (tikiPanel, "Max Red/Black", "", GameModel.OPTIONS_REDBLACK_MAX_CARD_ID, true, false);
			_tikiOptions.Add (CreateToggle (tikiPanel, "Volcano", false, GameModel.OPTIONS_VOLCANO_TIKI_ID, true, false));
			CreateInputField (tikiPanel, "Max Volcano", "", GameModel.OPTIONS_VOLCANO_MAX_CARD_ID, true, false);
			_tikiOptions.Add (CreateToggle (tikiPanel, "Blossom", false, GameModel.OPTIONS_BLOSSOM_TIKI_ID, true, false));
			CreateInputField (tikiPanel, "Max Blossom", "", GameModel.OPTIONS_BLOSSOM_MAX_CARD_ID, true, false);
			_tikiOptions.Add (CreateToggle (tikiPanel, "Golden", false, GameModel.OPTIONS_GOLDEN_TIKI_ID, true, false));
			CreateToggle (tikiPanel, "Spawn All", false, GameModel.OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID, true, false);
			CreateToggle (tikiPanel, "Spawn 100", false, GameModel.OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID, true, false);
			Toggle allTiki = CreateToggle (tikiPanel, "All", false, "", true, false);
			allTiki.onValueChanged.AddListener (OnAllTiki);

			GameObject hazardPanel = CreatePanel (optionsGO, "Hazard Options");
			_trapOptions.Add (CreateToggle (hazardPanel, "Trap", false, GameModel.OPTIONS_TRAP_HAZARD_ID, true, false));
			_trapOptions.Add (CreateToggle (hazardPanel, "Shark", false, GameModel.OPTIONS_SHARK_HAZARD_ID, true, false));
			_trapOptions.Add (CreateToggle (hazardPanel, "Dynamite", false, GameModel.OPTIONS_DYNAMITE_HAZARD_ID, true, false));
			CreateInputField (hazardPanel, "Max Time", "", GameModel.OPTIONS_DYNAMITE_TIME_MAX_ID, true, false);
			CreateInputField (hazardPanel, "Max Turn", "", GameModel.OPTIONS_DYNAMITE_TURN_MAX_ID, true, false);
			CreateToggle (hazardPanel, "Use Time", false, GameModel.OPTIONS_DYNAMITE_USE_TIME_ID, true, false);
			Toggle allTraps = CreateToggle (hazardPanel, "All", false, "", true, false);
			allTraps.onValueChanged.AddListener (OnAllTraps);

			GameObject tutorialPanel = CreatePanel (optionsGO, "Tutorial Options");

			Toggle introToggle = CreateToggle (tutorialPanel, "Tutorial Intro", false, GameModel.OPTIONS_TUTORIAL_INTRO_ID, false, true);
			Toggle trapToggle = CreateToggle (tutorialPanel, "Tutorial Trap", false, GameModel.OPTIONS_TUTORIAL_TRAP_ID, false, true);
			Toggle sharkToggle = CreateToggle (tutorialPanel, "Tutorial Shark", false, GameModel.OPTIONS_TUTORIAL_SHARK_ID, false, true);
			Toggle dynamiteToggle = CreateToggle (tutorialPanel, "Tutorial Dynamite", false, GameModel.OPTIONS_TUTORIAL_DYNAMITE_ID, false, true);

			ToggleGroup tg = tutorialPanel.AddComponent<ToggleGroup> ();
			tg.allowSwitchOff = true;
			introToggle.group = trapToggle.group = sharkToggle.group = dynamiteToggle.group = tg;
			CreateInputField (tutorialPanel, "Tutoria lIntroCardOrder", "Intro Order", GameModel.OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID, false, true);

			GameObject header = GameObject.Find ("StartGame");
                       
			Button simpleButton = CreateButton (header, "Simple", "Simple");

			simpleButton.onClick.AddListener (() => 
			{
				_easyPanel.SetActive (true);
			});
		}

		protected override GameModelBase CreateModel()
		{
			return new GameModel ("");
		}

		private void OnAllOptions (bool state)
		{
			for (int i = 0; i < _gameOptions.Count; ++i) {
				_gameOptions [i].isOn = state;
			}
		}

		private void OnAllTiki (bool state)
		{
			for (int i = 0; i < _tikiOptions.Count; ++i) {
				_tikiOptions [i].isOn = state;
			}
		}

		private void OnAllTraps (bool state)
		{
			for (int i = 0; i < _trapOptions.Count; ++i) {
				_trapOptions [i].isOn = state;
			}
		}

		protected override void LoadPlayerPrefs ()
		{
			base.LoadPlayerPrefs ();
			
			int advancedPref = PlayerPrefs.GetInt (ADVANCEMODE_ID);
			_easyPanel.SetActive (advancedPref == 0);
		}
			
		override public List<string> OptionNames ()
		{
			List<string> baseNames = base.OptionNames ();
			baseNames.AddRange (System.Enum.GetNames (typeof(OptionName)));
			return baseNames;
		}

		override public void StartGame ()
		{
   			Screen.orientation = ScreenOrientation.Landscape;  
			PlayerPrefs.SetInt (ADVANCEMODE_ID, _easyPanel.activeSelf ? 0 : 1);	
			base.StartGame ();
		}

        protected override string getTitleName()
        {
            return "tripeaks";
        }

        protected override string getModelHash()
        {
            return null;
        }

		protected override IDataSafePlugin CreateDataSafePlugin(Dictionary<string, string> joinBody, Dictionary<string, string> joinRecord)
		{
			return null;
		}
	}
}
