using System;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Requests.Tournament;
using GSN.Skill.Requests;
using System.Collections.Generic;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Utils;

namespace GSN.Skill.Phoenix.Model.Screens
{
	// For game history, this is one of the screens that does double duty.  We want to be able to :
	// 1. Handle fetching data when we change screens (and the event returns a non-complete list of history back_
	// 2. Ask for additional history items that were fetched but not returned.
	// 3. Re-fetch data from the back end while on the game history screen.
	public class GameHistoryScreenModel : IScreenModel
	{
		private GameListData _gameListData;
		private GameHistoryRequestData _gameHistory;
		private const int PAGINATION_SIZE = 10;
		private int _startingIndex = 0;
		private List<TournamentHistoryData> _completedTournaments;

		public GameHistoryScreenModel(GameListData gameListData)
		{
			_gameListData = gameListData;
			_gameHistory = new GameHistoryRequestData();
			_completedTournaments = new List<TournamentHistoryData>();
			_gameHistory.OnBeginHandler += OnFetchGameHistoryScreenBegin;
			_gameHistory.OnCompleteHandler += OnFetchGameHistoryScreenComplete;
			_gameHistory.OnFailHandler += OnFetchGameHistoryScreenFail;
		}

		public void OnPhoenixLoad()
		{
			// TODO: Handle anything that the game history screen would need to do when the main home screen is finally shown
		}

		public void HandleScreenFlow()
		{
			_startingIndex = 0;
			WebRequester.Instance.FetchRequest(_gameHistory);
		}

		// If we need to show additional completed
		public void ShowAdditionalCompletedGameHistoryData()
		{
			int count = 0;
			GetPaginatedGameHistoryEvent historyEvent = new GetPaginatedGameHistoryEvent();
			historyEvent.moreAvailable = false;
			while (_completedTournaments.Count > 0 && count <= PAGINATION_SIZE)
			{
				count++;
				historyEvent.closedSupportedTournaments.Add(_completedTournaments[0]);
				_completedTournaments.RemoveAt(0);
			}
			if (_completedTournaments.Count > 0)
				historyEvent.moreAvailable = true;
			EventDispatcher.DispatchEvent(historyEvent);
		}

		public void RefreshGameHistory()
		{
			_startingIndex = 0;
			_gameHistory.SetStale();
			WebRequester.Instance.FetchRequest(_gameHistory);
		}

		private void OnFetchGameHistoryScreenBegin(IWebRequest request)
		{
			EventDispatcher.DispatchEvent(new FetchScreenBeginEvent(ScreenType.GameHistory));
		}
		private void OnFetchGameHistoryScreenFail(IWebRequest request)
		{
			ErrorManager.Instance.HandleWebRequestError(ErrorType.RestTournament, request);
		}

		/// <summary>
		/// OnFetchGameHistoryScreenComplete.  When we fetch history, we want to build 4 lists with it.
		/// </summary>
		/// <param name="request">Request.</param>
		private void OnFetchGameHistoryScreenComplete(IWebRequest request)
		{
			_completedTournaments.Clear();
			// dispatch info to view
			var historyEvent = new GetGameHistorySuccessEvent();
			var tournaments = _gameHistory.Response.result.tournaments;

			historyEvent.moreAvailable = false;

			int count = 0;
			for (int i = _startingIndex; i < tournaments.Length; i++)
			{
				var tournament = tournaments[i];
				int gameID = 0;
				int.TryParse(tournament.GameID, out gameID);

				TournamentHistoryData historyData = TournamentUtilities.BuildTournamentHistoryData(_gameListData, tournament);
				// If we have a game that isn't a mobile title, and is also shouldn't be displayed in unplayedUnsupportedTournaments, skip it
				if (!_gameListData.gameData.ContainsKey(gameID) && historyData.state !=  GameHistoryData.TournamentState.UnsupportedOnMobile )
				{
					continue;
				}
				switch (historyData.state)
				{
					// Always return a full list of not started and in progress history.
					case GameHistoryData.TournamentState.NotStarted:
						historyEvent.unplayedSupportedTournaments.Add(historyData);
						break;
					case GameHistoryData.TournamentState.InProgress:
						historyEvent.openSupportedTournaments.Add(historyData);
						break;
					case GameHistoryData.TournamentState.UnsupportedOnMobile:
						historyEvent.unplayedUnsupportedTournaments.Add(historyData);
						break;
					//Paginate closed tournament history.
					default:
						if (count < PAGINATION_SIZE)
						{
							count++;
							historyEvent.closedSupportedTournaments.Add(historyData);
						}
						// If we are paginating, we want to fill up a list so we don't have to parse over and over again.
						else
						{
							_completedTournaments.Add(historyData);
							historyEvent.moreAvailable = true;
						}
						break;
				}
			}
			EventDispatcher.DispatchEvent(historyEvent);
			EventDispatcher.DispatchEvent(new FetchScreenCompleteEvent(ScreenType.GameHistory));
		}
	}
}
