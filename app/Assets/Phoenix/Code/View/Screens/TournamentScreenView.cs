using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model;
using UnityEngine.UI;
using TMPro;
using GSN.Skill.Phoenix.View.Pool;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.View
{
	public class TournamentScreenView : ScrollableScreenView {

		[SerializeField]
		private Transform _tournamentListParent;
		[SerializeField]
		private Transform _gameHeader;
		[SerializeField]
		private TextMeshProUGUI _gameDescription;
		[SerializeField]
		private Image _footerBackground;

		private GameResource _gameResource;

		private const string TOURNAMENT_TILE_RESOURCE = "PANEL_TournamentTile";

		public TournamentScreenView()
		{
			// Example for setting custom screen animation times
			AnimateScreenInTime = 1.0f;
			AnimateScreenOutTime = 0.0f;
		}

		protected override void OnEnable()
		{
			base.OnEnable();
			EventDispatcher.AddListener<TournamentGameListEvent>(OnTournamentListEvent);
		}

		protected override void OnDisable()
		{
			base.OnDisable();
			EventDispatcher.RemoveListener<TournamentGameListEvent>(OnTournamentListEvent);
			FreePooledObjects();
		}


		void FreePooledObjects()
		{
			// can't use for or foreach, Free edits the child list by changing the parent of the object.
			Transform parent = _tournamentListParent.transform;
			Transform child;
			while (0 < parent.childCount)
			{
				child = parent.GetChild(0);
				child.gameObject.GetComponent<TournamentTile>().Free();
			}
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

		public void SetTheme(GameResource gameResource)
		{
			_gameResource = gameResource;

            // Clear out old game data
            ClearChildrenObjects(_tournamentListParent);
            ClearChildrenObjects(_gameHeader);

			GameObject headerObj = (GameObject)Instantiate(gameResource.tournamentHeader);
			headerObj.transform.SetParent(_gameHeader, false);

			_gameDescription.color = gameResource.textColor;
			_gameDescription.text = StringTable.Instance.GetEntry(gameResource.tournamentHeaderText);
			_footerBackground.color = gameResource.tournamentFooterColor;
		}

		private void OnTournamentListEvent(IEvent e)
		{
            TournamentGameListEvent eventData = (TournamentGameListEvent)e;
            UpdateTournamentTiles(eventData.data, eventData.numCashGamesPlays, eventData.numSpecificGamePlays);
		}

		private void UpdateTournamentTiles(List<TournamentGameListEvent.TournamentData> tournamentData,
                                           int numCashGamePlays,
                                           int numSpecificGamePlays)
		{
			ClearChildrenObjects(_tournamentListParent);

			for (int i = 0; i < tournamentData.Count; i++)
			{
				TournamentTile tournamentTile = GameObjectPoolManager.Instance.GetObject<TournamentTile>(TOURNAMENT_TILE_RESOURCE);
				tournamentTile.transform.SetParent(_tournamentListParent, false);
                tournamentTile.SetTournamentData(tournamentData[i], numCashGamePlays, numSpecificGamePlays); // pass in data
				tournamentTile.SetGameTheme(_gameResource);
			}
		}

		public override void OnCentered()
		{
			controller.SetScreen(ScreenType.TournamentSelect);
		}

		protected override void OnFetchScreenBeginEvent(IEvent e)
		{
			if (((FetchScreenBeginEvent)e).type == ScreenType.TournamentSelect)
			{
				ShowActivityIndicator();
				//ClearChildrenObjects(_tournamentListParent);
			}
		}

		protected override void OnFetchScreenCompleteEvent(IEvent e)
		{
			if (((FetchScreenCompleteEvent)e).type == ScreenType.TournamentSelect)
			{
				HideActivityIndicator();
			}
		}
	}
}