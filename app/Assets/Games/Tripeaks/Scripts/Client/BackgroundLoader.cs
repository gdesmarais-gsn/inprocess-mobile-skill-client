using UnityEngine;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Client.Game;

namespace GSN.Skill.Games.Tripeaks
{

	public class BackgroundLoader: MonoBehaviour 
	{
		public bool loaded
		{
			get ; private set;
		}
		
		private List<string> _backgroundResources = new List<string> { 	"loc_AlohaHarbor",
																		"loc_CaneField",
																		"loc_CoconutGrove",
																		"loc_FlowerLagoon",
																		"loc_island7_01",
																		"loc_island7_02",
																		"loc_island8_01",
																		"loc_island8_02",
																		"loc_island9_01",
																		"loc_island9_02",
																		"loc_island10_01",
																		"loc_island10_02",
																		"loc_island11_01",
																		"loc_Lanai",
																		"loc_LimeStoneHill",
																		"loc_TidePool",
																		"loc_TikiBeach",
																		"loc_TikiTorchCorner",
																		"loc_TurtleBeach",
																		"loc_underwater",
																		"loc_VolcanoFootForest",
																		"loc_CutScene" };

		private List<string> _timeOfDay = new List<string> { 	"day",
																"sunset",
																"night" };

		public static int NUM_TIMES_OF_DAY = 3;

        private SceneryChanger _sceneryChanger;
		public const string BACKGROUND_ASSET_BUNDLE_NAME = "tripeaks.backgrounds.assetbundle";

		public void loadBackground(int backgroundIndex, int timeIndex)
		{
            View view = (View)ViewBase.Instance;

            loaded = false;
			// if out of range use a random
			if (backgroundIndex < 0 || backgroundIndex >= _backgroundResources.Count)
				backgroundIndex = UnityEngine.Random.Range(0, 10);

			string backgroundScene = _backgroundResources[backgroundIndex];

			GameObject background = view.LoadAsset<GameObject> (BACKGROUND_ASSET_BUNDLE_NAME, backgroundScene);
			Instantiate(background, Vector3.zero, Quaternion.identity); // apparently this game object is called "SceneryChanger". Consider holding a reference.

            changeTimeOfDay(timeIndex);
			loaded = true;
		}

		public void changeTimeOfDay(int timeIndex)
		{
			GameObject sceneryChangerObj =  GameObject.Find("SceneryChanger");
			_sceneryChanger = (SceneryChanger)sceneryChangerObj.GetComponent<SceneryChanger>();
			_sceneryChanger.Action(_timeOfDay[timeIndex]);
		}
		

    }
}
