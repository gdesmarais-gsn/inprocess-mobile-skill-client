using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model;
using TMPro;
using System;
using UnityEngine.UI.Extensions;
using GSN.Skill.Phoenix.View.Pool;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.View
{
	public class GameHistoryScreenView : ScrollableScreenView
	{
		[SerializeField]
		private Transform _notStartedListAnchor;
		[SerializeField]
		private Transform _openListAnchor;
		[SerializeField]
		private Transform _completedListAnchor;
		[SerializeField]
		private GameObject _swipeIndicator;

		[SerializeField]
		private ScrollRectEx _scrollRect;

		private DateTime _lastDateBannerDate;

		private bool _morePages = false;

		private const string HISTORY_TILE_COMPLETED_RESOURCE = "PANEL_GameHistory_Completed";
		private const string HISTORY_TILE_OPEN_RESOURCE = "PANEL_GameHistory_Open";
		private const string HISTORY_TILE_NOT_STARTED_RESOURCE = "PANEL_GameHistory_NotStarted";
		private const string BANNER_RESOURCE = "PANEL_GameHistoryBanner";

		public GameHistoryScreenView()
		{
			// Example for setting custom screen animation times
			AnimateScreenInTime = 1.0f;
			AnimateScreenOutTime = 0.0f;
		}

		protected override void OnEnable()
		{
			base.OnEnable();
			EventDispatcher.AddListener<GetGameHistorySuccessEvent>(OnGameHistoryEvent);
			EventDispatcher.AddListener<GetPaginatedGameHistoryEvent>(OnGetPaginatedGameHistoryEvent);

			_scrollRect.onScrollPastTop.AddListener(OnScrollPastTop);
			_scrollRect.onScrollPastBottom.AddListener(OnScrollPastBottom);
			_swipeIndicator.SetActive(false);
		}

		protected override void OnDisable()
		{
			base.OnDisable();
			EventDispatcher.RemoveListener<GetGameHistorySuccessEvent>(OnGameHistoryEvent);
			EventDispatcher.RemoveListener<GetPaginatedGameHistoryEvent>(OnGetPaginatedGameHistoryEvent);

			_scrollRect.onScrollPastTop.RemoveListener(OnScrollPastTop);
			_scrollRect.onScrollPastBottom.RemoveListener(OnScrollPastBottom);
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
			//TODO: Does the history screen have a theme?
		}

		private void OnGameHistoryEvent(IEvent e)
		{
			UpdateHistoryTiles(((GetGameHistorySuccessEvent)e).unplayedUnsupportedTournaments, _notStartedListAnchor);

			// we only want to instantiate a new not started banner if we haven't made the list yet (from unplayed unsupported tournaments)
			bool showNotStartedBanner = _notStartedListAnchor.childCount == 0;
			UpdateHistoryTiles(((GetGameHistorySuccessEvent)e).unplayedSupportedTournaments, _notStartedListAnchor, true, showNotStartedBanner);
			UpdateHistoryTiles(((GetGameHistorySuccessEvent)e).openSupportedTournaments, _openListAnchor);
			UpdateHistoryTiles(((GetGameHistorySuccessEvent)e).closedSupportedTournaments, _completedListAnchor);

			_morePages = ((GetGameHistorySuccessEvent)e).moreAvailable;

			_swipeIndicator.SetActive(_morePages);
		}

		private void OnGetPaginatedGameHistoryEvent(IEvent e)
		{
			UpdateHistoryTiles(((GetPaginatedGameHistoryEvent)e).closedSupportedTournaments, _completedListAnchor, true);
			_morePages = ((GetPaginatedGameHistoryEvent)e).moreAvailable;

			_swipeIndicator.SetActive(_morePages);
		}

		private void UpdateHistoryTiles(List<TournamentHistoryData> historyData, Transform listAnchor, bool paginationUpdate = false, bool createNotStartedBanner = true)
		{
			if (!paginationUpdate)
				ClearChildrenObjects(listAnchor);

			if (historyData.Count == 0)
			{
				//TODO:  Empty State Handling
			}
			else
			{
				historyData = SortDecending(historyData);

				if (!paginationUpdate)
					_lastDateBannerDate = DateTime.MinValue;

				bool createPendingBanner = true;

				for (int i = 0; i < historyData.Count; i++)
				{
					string templateObj = null;

					switch (historyData[i].state)
					{
						case Requests.Tournament.GameHistoryData.TournamentState.CompleteWon:
							templateObj = HISTORY_TILE_COMPLETED_RESOURCE;
							break;
						case Requests.Tournament.GameHistoryData.TournamentState.CompleteLost:
							templateObj = HISTORY_TILE_COMPLETED_RESOURCE;
							break;
						case Requests.Tournament.GameHistoryData.TournamentState.InProgress:
							templateObj = HISTORY_TILE_OPEN_RESOURCE;
							break;
						case Requests.Tournament.GameHistoryData.TournamentState.NotStarted:
							templateObj = HISTORY_TILE_NOT_STARTED_RESOURCE;
							break;
						case Requests.Tournament.GameHistoryData.TournamentState.UnsupportedOnMobile:
							templateObj = HISTORY_TILE_NOT_STARTED_RESOURCE;
							break;
						case Requests.Tournament.GameHistoryData.TournamentState.Refunded:
							templateObj = HISTORY_TILE_COMPLETED_RESOURCE;
							break;
					}

					if (listAnchor == _notStartedListAnchor && createNotStartedBanner)
					{
						AddBanner(listAnchor, StringTable.Instance.GetEntry(CategoryTournamentHistory.NotEntered));
						createNotStartedBanner = false;
					}

					if (listAnchor == _openListAnchor && createPendingBanner)
					{
						AddBanner(listAnchor, StringTable.Instance.GetEntry(CategoryTournamentHistory.InProgress, historyData.Count.ToString()));
						createPendingBanner = false;
					}

					// Only add a Date Banner if we are a completed tourament
					if (listAnchor == _completedListAnchor)
					{
						// Add banner if it's the first or if the day has changed
						if (_lastDateBannerDate == DateTime.MinValue || _lastDateBannerDate.Day != historyData[i].endDate.Day)
							AddBanner(listAnchor, historyData[i].endDate.ToString("dddd - MM/dd/yyyy"));
					}

					// Add game history tile
					if (templateObj != null)
					{
						ResultsTile historyTile = GameObjectPoolManager.Instance.GetObject<ResultsTile>(templateObj);
						historyTile.transform.SetParent(listAnchor, false);
						historyTile.SetHistoryData(historyData[i]); // pass in data
					}

					_lastDateBannerDate = historyData[i].endDate;
				}
			}
		}

		private List<TournamentHistoryData> SortDecending(List<TournamentHistoryData> historyData)
		{
			historyData.Sort((a, b) => b.endDate.CompareTo(a.endDate));
			return historyData;
		}

		private void AddBanner(Transform parentList, string bannerText)
		{
			GameObject historyBanner = GameObjectPoolManager.Instance.GetObject(BANNER_RESOURCE);
			TextMeshProUGUI bannerTextObj = historyBanner.GetComponentInChildren<TextMeshProUGUI>();
			if (bannerTextObj != null)
				bannerTextObj.text = bannerText;

			historyBanner.transform.SetParent(parentList, false);
		}

		public void OnScrollPastTop()
		{
			controller.RefreshGameHistory();
		}

		public void OnScrollPastBottom()
		{
			if (_morePages)
				controller.ShowAdditionalCompletedGameHistoryData();
		}

		public override void OnCentered()
		{
			controller.SetScreen(ScreenType.GameHistory);
		}

		protected override void OnFetchScreenBeginEvent(IEvent e)
		{
			if (((FetchScreenBeginEvent)e).type == ScreenType.GameHistory)
			{
				ShowActivityIndicator();
			}
		}

		protected override void OnFetchScreenCompleteEvent(IEvent e)
		{
			if (((FetchScreenCompleteEvent)e).type == ScreenType.GameHistory)
			{
				HideActivityIndicator();
			}
		}
	}
}