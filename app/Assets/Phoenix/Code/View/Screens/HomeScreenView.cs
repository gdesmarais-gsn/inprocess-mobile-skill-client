using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.View.Pool;

namespace GSN.Skill.Phoenix.View
{
	public class HomeScreenView : ScrollableScreenView {

		[SerializeField]
		private Transform _gameListParent;

        [SerializeField]
        private Image _promoBanner;

		// Note: This number is to indicate how many game slots SHOULD appear in the list of games to display.
		// 		 If we don't have enough games to fill all of these spaces, the rest will be filled with
		//		 "Coming Soon" static panel displays.
		private const int NUM_GAMES_TO_DISPLAY = 6; 
		private const string COMING_SOON_RESOURCE_NAME = "GameTile_ComingSoon";

		public HomeScreenView()
		{
			// Example for setting custom screen animation times
			AnimateScreenInTime = 1.0f;
			AnimateScreenOutTime = 0.0f;
		}
			
		protected override void OnEnable()
		{
			base.OnEnable();
			EventDispatcher.AddListener<GameListEvent>(OnGameListEvent);
		}

		protected override void OnDisable()
		{
			base.OnDisable();
			EventDispatcher.RemoveListener<GameListEvent>(OnGameListEvent);
		}

		protected override IEnumerator AnimateScreenOut()
		{
			// Add screen specific build out animations here
			yield return base.AnimateScreenOut();
		}

		protected override IEnumerator AnimateScreenIn()
		{
			// Add screen specific build in animations here
			yield return base.AnimateScreenIn();
		}

		private void OnGameListEvent(IEvent e)
		{
			UpdateGameTiles(((GameListEvent)e).list);
		}

		private void UpdateGameTiles(Dictionary<int,GameData> gameData)
		{
			ClearChildrenObjects(_gameListParent);

			int tileCount = 0;
			foreach(GameData item in gameData.Values)
			{
				GameResource obj = (GameResource)Resources.Load(item.resourceName);
				if (obj != null)
				{
					GameTile gameTile = GameObjectPoolManager.Instance.GetObject<GameTile>(obj.gameTileButton);
					gameTile.transform.SetParent(_gameListParent, false);
					gameTile.gameData = item;
					++tileCount;
				}
			}

			for (int i = tileCount; i < NUM_GAMES_TO_DISPLAY; ++i)
			{
				GameObject comingSoonFillerObj = GameObjectPoolManager.Instance.GetObject(COMING_SOON_RESOURCE_NAME);
				if (comingSoonFillerObj)
				{
					comingSoonFillerObj.transform.SetParent(_gameListParent, false);
				}
			}
		}

        public void SetPromoResource(Sprite promo)
        {
            _promoBanner.sprite = promo;
        }

		public override void OnCentered()
		{
			controller.SetScreen(ScreenType.Home);
		}

		private void OnLogout()
		{
			controller.Logout();
		}

		protected override void OnFetchScreenBeginEvent(IEvent e)
		{
			if (((FetchScreenBeginEvent)e).type == ScreenType.Home)
			{
				ShowActivityIndicator();
			}
		}

		protected override void OnFetchScreenCompleteEvent(IEvent e)
		{
			if (((FetchScreenCompleteEvent)e).type == ScreenType.Home)
			{
				HideActivityIndicator();
			}
		}
	}
}