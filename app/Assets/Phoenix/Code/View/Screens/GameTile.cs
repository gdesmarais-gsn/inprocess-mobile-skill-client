using UnityEngine;
using UnityEngine.UI;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model.Data;

namespace GSN.Skill.Phoenix.View
{
	public class GameTile : BaseView
	{
		[SerializeField]
		private Button _gameTileButton;
		[HideInInspector]
		public GameData gameData;


		void OnEnable()
		{
			_gameTileButton.onClick.AddListener(OnGameClick);

		}
		void OnDisable()
		{
			_gameTileButton.onClick.RemoveListener(OnGameClick);
		}

		void OnGameClick()
		{
			controller.SetCurrentGame(gameData.gameID);
		}	
		 
	}
}