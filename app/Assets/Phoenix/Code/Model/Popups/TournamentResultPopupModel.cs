using System;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Requests.Tournament;
using GSN.Skill.Phoenix.Utils;
using GSN.Skill.Requests;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.Model.Popups
{
	public static class TournamentResultDataCache
	{
		private static Dictionary<int, GetTournResultsSuccessEvent> _cachedTournamentResultData = new Dictionary<int, GetTournResultsSuccessEvent>();

		public static GetTournResultsSuccessEvent GetResultData(int tournamentID)
		{
			if (!_cachedTournamentResultData.ContainsKey(tournamentID))
				return null; // it's not even cached

			return _cachedTournamentResultData[tournamentID];
		}

		public static void AddTournament(int tournamentID, GetTournResultsSuccessEvent evt)
		{
			_cachedTournamentResultData.Add(tournamentID, evt);
		}

		public static void UpdateTournament(int tournamentID, GetTournResultsSuccessEvent evt)
		{
			_cachedTournamentResultData[tournamentID] = evt;
		}

		public static void Reset()
		{
			_cachedTournamentResultData.Clear();
		}
	}

	public class TournamentResultPopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.TournamentResult; } }

		private GameListData _gameListData;
		private CurrentUser _currentUser;
		private int _tournamentID;

		public TournamentResultPopupModel(GameListData gameListData, CurrentUser currentUser, int tournamentID)
		{
			_gameListData = gameListData;
			_currentUser = currentUser;
			_tournamentID = tournamentID;
		}

		public void OnOpen()
		{
			/// pseudo code:
			/// VALIDATE CACHE: check if the tournament is in the cache
			/// 	if it is cached
			/// 		check if it's still open
			/// 			FETCH
			/// 		check if it's closed
			/// 			if it is, then we show the cached value and !ANIMATE
			/// 			DONE
			/// 	if it is not cached
			/// 		FETCH
			/// FETCH: once fetch is complete, we have two scenarios:
			/// 1) Cached version only
			/// 	we've been cached before, !ANIMATE and !CACHE
			/// 2) No cached version and only have latest version
			/// 	CACHE and ANIMATE
			/// 3) Cached version and latest version
			/// 	if now closed
			/// 		UPDATE CACHE and ANIMATE
			/// 	if still open
			/// 		if user's cached version score is lower than user's latest version score, CACHE and ANIMATE
			/// 		if user's cached version score is higher than user's latest version score, !ANIMATE and !CACHE
			/// DONE

			GetTournResultsSuccessEvent cachedResultEventData = TournamentResultDataCache.GetResultData(_tournamentID);

			if (cachedResultEventData != null && IsClosed(cachedResultEventData))
			{
				// we have a cached state of this tournament result and it's closed, continue to the oncomplete state
				HandleTournamentResultData(cachedResultEventData);
			}
			else
			{
				// we need to fetch because the cache isn't up to date or there's no cache
				var tournamentResult = new TournamentResultRequestData(_tournamentID);
				tournamentResult.OnBeginHandler += OnTournamentResultBegin;
				tournamentResult.OnFailHandler += OnTournamentResultFail;
				tournamentResult.OnCompleteHandler += OnTournamentResultComplete;
				WebRequester.Instance.FetchRequest(tournamentResult);
			}
		}

		public void OnClose()
		{
			// handle functionality when the popup is closing
		}

		private bool IsClosed(GetTournResultsSuccessEvent evt)
		{
			switch (evt.results.history.state)
			{
				case GameHistoryData.TournamentState.CompleteWon:
				case GameHistoryData.TournamentState.CompleteLost:
				case GameHistoryData.TournamentState.Refunded:
					return true;
				default:
					return false;
			}
		}

		private void OnTournamentResultBegin(IWebRequest request)
		{
			EventDispatcher.DispatchEvent(new FetchPopupBeginEvent(type));
		}

		private void OnTournamentResultComplete(IWebRequest request)
		{
			EventDispatcher.DispatchEvent(new FetchPopupCompleteEvent(type));

			request.OnBeginHandler -= OnTournamentResultBegin;
			request.OnFailHandler -= OnTournamentResultFail;
			request.OnCompleteHandler -= OnTournamentResultComplete;

			GetTournResultsSuccessEvent evt = BuildTournamentResultEvent((TournamentResultRequestData)request);

			HandleTournamentResultData(evt);
		}

		private void HandleTournamentResultData(GetTournResultsSuccessEvent evt)
		{
			GetTournResultsSuccessEvent cachedEvtData = TournamentResultDataCache.GetResultData(_tournamentID);

			if (evt == cachedEvtData)
			{
				// we're referencing already closed cached data.
				// send them the event without animating
				evt.animate = false;
			}
			else
			{
				if (cachedEvtData == null)
				{
					// we've never cached before. cache it and animate it!
					evt.animate = true;
					TournamentResultDataCache.AddTournament(_tournamentID, evt);
				}
				else
				{
					// we've cached before. let's compare the data

					if (evt.results.history.closed)
					{
						// this tournament was recently closed! update cache and animate it
						evt.animate = true;
						TournamentResultDataCache.UpdateTournament(_tournamentID, evt);
					}
					// we're still open. let's compare the data
					else if (evt.results.maxCurrentUserScore > cachedEvtData.results.maxCurrentUserScore)
					{
						// the new data has a higher current user score than our cached data. update!
						// NOTE: This is separate from the logic above to provide clarity
						evt.animate = true;
						TournamentResultDataCache.UpdateTournament(_tournamentID, evt);
					}
					else
					{
						// new data has a lower current user score than our cached data. don't animate and don't update
						evt.animate = false;
					}
				}
			}

			EventDispatcher.DispatchEvent(evt);
		}

		private void OnTournamentResultFail(IWebRequest request)
		{
			EventDispatcher.DispatchEvent(new FetchPopupCompleteEvent(type));

			ErrorManager.Instance.HandleWebRequestError(ErrorType.RestTournament, request);
		}

		private GetTournResultsSuccessEvent BuildTournamentResultEvent(TournamentResultRequestData tournamentResult)
		{
			var evt = new GetTournResultsSuccessEvent();

			var result = tournamentResult.Response.result;

			evt.results.history = TournamentUtilities.BuildTournamentHistoryData(_gameListData, result.tournament);
			evt.results.history.flavorID = Convert.ToInt32(result.flavor.FlavorID);
			evt.results.showPlayTypeAgainButton = result.tournament.showPlayTypeAgainButton;
			evt.results.showPlayAnotherTournButton = result.tournament.showPlayAnotherTournButton;
			evt.results.reEnterableByUser = result.tournament.reEnterableByUser;
			evt.results.p1Game = result.tournament.is_P1 == WorldWinnerReferenceKeys.TRUE_KEY;
			evt.results.canWinItNow = result.tournament.canWinItNow;
			evt.results.winItNowRemainingSeconds = result.tournament.winItNowRemainingSeconds;
			evt.results.winItNowCost = (evt.results.history.maxPlayers - evt.results.history.numPlayers) * evt.results.history.fee;

			int len = result.tournament.PlayerData.Length;
			evt.results.players = new List<GetTournResultsSuccessEvent.Player>();//new GetTournResultsSuccessEvent.Player[Convert.ToInt32(result.tournament.NumPlayers)]; // build out the player data based on the total number of players we have
			HashSet<string> playerCheck = new HashSet<string>();

			evt.results.minPlayerScore = int.MaxValue;
			evt.results.maxPlayerScore = 0;
			evt.results.maxCurrentUserScore = 0;

			for (int i = 0; i < len; ++i)
			{
				var playerData = result.tournament.PlayerData[i];
				// If we don't have a username, don't include the user in the list.
				if (string.IsNullOrEmpty(playerData.Username))
					continue;

				var player = new GetTournResultsSuccessEvent.Player();
				try
				{
					player.isBuyoutSlot = false;
					// This can be "Win it now" or a score.
					player.score = Convert.ToInt32(playerData.Score);
				}
				catch
				{
					player.score = 0;
					if (TournamentUtilities.IsBuyout(result.tournament.WinnerDeclared))
						player.isBuyoutSlot = true;
				}

				// As we are looping over the players, update the max and min player scores
				if (player.score > evt.results.maxPlayerScore)
				{
					evt.results.maxPlayerScore = player.score;
				}
				if (player.score < evt.results.minPlayerScore)
				{
					evt.results.minPlayerScore = player.score;
				}

				player.username = playerData.Username;
				if (player.username == _currentUser.username)
				{
					player.isLoggedInPlayer = true;

					if (player.score > evt.results.maxCurrentUserScore)
					{
						// we found a higher current user score
						evt.results.maxCurrentUserScore = player.score;
					}
				}
				// The data is returned in a weird way.  Amount won is the total the player has won if they entered multiple times.
				// Ex:  If the player won first and second prizes ( 1.00, .50), both the first and second place amountWon values would be "1.50".
				// We also can't trust the prizePool data because of ties.  We have to do some manipulation before it gets to the view.
				if (playerCheck.Contains(player.username))
				{
					player.amountWon = 0;
				}
				else
				{
					playerCheck.Add(player.username);
					player.amountWon = playerData.Won == null ? 0 : Convert.ToDecimal(playerData.Won);
				}
				player.place = null;

				try
				{
					if (playerData.Place == WorldWinnerReferenceKeys.NO_PLACEMENT)
					{
						switch (playerData.Score)
						{
							case WorldWinnerReferenceKeys.TOURN_RESULTS_STILL_PLAYING:
								player.stillPlaying = true;
								break;
							case WorldWinnerReferenceKeys.TOURN_RESULTS_NOT_PLAYED:
								player.notStarted = true;
								break;
						}
					}
					else
					{
						// Ties are returned in a the format of place (tie).  Ex:   2 (tie).  This handles that and makes sure we don't have an issue converting to an int.
						if (playerData.Place.Contains(WorldWinnerReferenceKeys.TOURN_RESULTS_TIE_SUFFIX))
						{
							player.isTied = true;
							player.place = Convert.ToInt32(playerData.Place.Replace(WorldWinnerReferenceKeys.TOURN_RESULTS_TIE_SUFFIX, ""));
						}
						else
						{
							player.place = Convert.ToInt32(playerData.Place);
						}
					}
				}
				catch
				{
					GsnDebug.LogError("Got an unsupported player place back from the server.  Place:", playerData.Place, "tournament_id", _tournamentID);
				}
				evt.results.players.Add(player);
			}

			return evt;
		}
	}
}
