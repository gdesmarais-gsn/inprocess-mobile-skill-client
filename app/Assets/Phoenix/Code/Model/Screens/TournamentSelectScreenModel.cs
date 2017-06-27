using System;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Requests.Tournament;
using GSN.Skill.Requests;
using System.Collections.Generic;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Model.Popups;

namespace GSN.Skill.Phoenix.Model.Screens
{
	public class TournamentSelectScreenModel : IScreenModel
	{
		private GameListData _gameListData;
		private ListFlavorsRequestData _listFlavor;

		// Holds a list of supported aux data types that we want to return to the view.
		private HashSet<AuxDataType> _supportedAuxDataTypes;

		private Dictionary<int,TournamentGameListEvent.TournamentData> _tournData;
		public TournamentSelectScreenModel(GameListData gameListData)
		{
			_gameListData = gameListData;
			_tournData = new Dictionary<int,TournamentGameListEvent.TournamentData>();
			// hold member reference to listFlavor
			_listFlavor = RequestManager.Instance.listFlavor;
			_listFlavor.OnBeginHandler += OnFetchTournamentSelectScreenBegin;
			_listFlavor.OnFailHandler += OnFetchTournamentSelectScreenFail;
			_listFlavor.OnCompleteHandler += OnFetchTournamentSelectScreenComplete;

			// For now, we only want to look at a subset of aux data to send to the view
			_supportedAuxDataTypes = new HashSet<AuxDataType>();
			_supportedAuxDataTypes.Add(AuxDataType.One_Card);
			_supportedAuxDataTypes.Add(AuxDataType.Three_Card);
			_supportedAuxDataTypes.Add(AuxDataType.Easy);
			_supportedAuxDataTypes.Add(AuxDataType.Hard);
		}

		public void OnPhoenixLoad()
		{
			// TODO: Handle anything that the tournament select screen would need to do when the main home screen is finally shown
		}

		public void HandleScreenFlow()
		{
			_listFlavor.gameTypeID = _gameListData.currentGameID;

			WebRequester.Instance.FetchRequest(_listFlavor);
		}

		public void ShowTournamentDetails(int flavorID)
		{
			if(_tournData.ContainsKey(flavorID))
			{
				PopupManager.Instance.SetPopup(new TournamentDetailsPopupModel(_tournData[flavorID],
                                                                               _listFlavor.Response.result.userPlayData.total_cash_games_played,
                                                                               _listFlavor.Response.result.userPlayData.total_game_specific_games_played));
			}
			else
			{
				GsnDebug.LogError("Tried to show details for a flavor that wasn't in the list.  This shouldn't happen.");
			}
		}

		private void OnFetchTournamentSelectScreenBegin(IWebRequest request)
		{
			EventDispatcher.DispatchEvent(new FetchScreenBeginEvent(ScreenType.TournamentSelect));
		}

		private void OnFetchTournamentSelectScreenComplete(IWebRequest request)
		{
			_tournData.Clear();
			// dispatch info to view
            var tournamentGameListEvent = new TournamentGameListEvent(_listFlavor.Response.result.userPlayData.total_cash_games_played,
                                                                      _listFlavor.Response.result.userPlayData.total_game_specific_games_played);

			var flavors = _listFlavor.Response.result.flavors;

			// Check to see if there are any reward multipliers active.  
			int rewardMultiplier = 1;
			if (_listFlavor.Response.result.rewardMultiplier.HasValue)
			{
				rewardMultiplier = Convert.ToInt32(_listFlavor.Response.result.rewardMultiplier.Value.multiplier);
			}
			// If we have a p1_flavor_id, we are going sign up the player for a tournament
			if (!String.IsNullOrEmpty(_listFlavor.Response.result.p1_flavor_id))
			{
				GsnDebug.Log("TODO:  We are in the P1.  Signup for tournament.");
			}
			// Otherwise, return the flavor list.
			else
			{
				string gameFriendlyName = "";
				if( _gameListData.GetCurrentGame().HasValue )
				{
					gameFriendlyName = _gameListData.GetCurrentGame().Value.friendlyName;
				}

				for (int i = 0; i < flavors.Length; ++i)
				{
					var flavor = flavors[i];
					TournamentType flavorType = (TournamentType)Convert.ToInt32(flavor.FlavorTypeID);
					if (flavor.Permissions == -1 )
					{
						continue;
					}
					// OK, there is another weird situation we need to check for in here.  If we have unlimited entry tournaments, we get back
					// A bunch of flavors that have a FlavorParentTemplateID.  This indicates there are multiple divisions of a single Unlimited entry
					// tournament.  There was a client side fix for html5 ww : https://jira.worldwinner.com/browse/WP-6157
					// We will want to omit the parent, and only show the single division the user is entering.  This is to fix https://jira.worldwinner.com/browse/SKI-168
					if (!string.IsNullOrEmpty(flavor.FlavorParentTemplateID) && flavor.FlavorParentTemplateID == flavor.FlavorID)
					{
						continue;
					}

					TournamentGameListEvent.TournamentData data = new TournamentGameListEvent.TournamentData();
					data.fee = Convert.ToDecimal(flavor.Fee);
					data.numPlayers = Convert.ToInt32(flavor.MaxPlayers);

					data.tournamentName = flavor.FlavorName;
					data.flavorID = Convert.ToInt32(flavor.FlavorID);
					data.flavorTypeID = Convert.ToInt32(flavor.FlavorTypeID);
					data.type = flavorType;
					data.typeFriendlyName = flavor.FlavorType;
					data.gameFriendlyName = gameFriendlyName;
					data.gameID = Convert.ToInt32(flavor.GametypeID);
					data.gameResource = _gameListData.GetGameData(data.gameID).Value.resourceName;

                    data.minCashGamesRequired = flavor.min_cash_games_required;
                    data.minGameSpecificPlaysRequired = flavor.min_game_specific_plays_required;

					// if there are no reward points, we receive "None" instead of 0
					data.rewardsPointsBase = (flavor.reward_points == WorldWinnerReferenceKeys.ZERO_REWARD_POINTS_KEY) ? 0 : Convert.ToInt32(flavor.reward_points);

					// Not all flavors are eligable for multipliers
					data.rewardPointsMultiplier = (flavor.multiplierEligible == WorldWinnerReferenceKeys.TRUE_KEY) ? rewardMultiplier : 1;

					// We want to check AUX_DATA for specific types, and build a display string based on if we care about that data.
					List<string> auxDataStrings = new List<string>();
					foreach (ListFlavorsData.Aux_Data auxDataItem in flavor.aux_data)
					{
						try
						{
							if(_supportedAuxDataTypes.Contains((AuxDataType)Enum.Parse(typeof(AuxDataType), auxDataItem.type)))
							{
								auxDataStrings.Add(auxDataItem.text);
							}
						}
						catch(Exception e)
						{
							GsnDebug.LogError("Failed to parse auxData type " + auxDataItem.text, e.ToString());
						}
					}
					data.prizes = new List<decimal>();
					data.totalPrizePool = 0;
					foreach (string amount in flavor.prizeValue)
					{
						decimal prizeAmount = Convert.ToDecimal(amount);
						data.prizes.Add(prizeAmount);
						data.totalPrizePool += prizeAmount;
					}

					data.auxDataStrings = auxDataStrings;
					// Store the data so we can use it later when we need to create a popup.
					_tournData.Add(data.flavorID,data);
					tournamentGameListEvent.data.Add(data);
				}
				EventDispatcher.DispatchEvent(tournamentGameListEvent);
				EventDispatcher.DispatchEvent(new FetchScreenCompleteEvent(ScreenType.TournamentSelect));
			}
		}

		private void OnFetchTournamentSelectScreenFail(IWebRequest request)
		{
			EventDispatcher.DispatchEvent(new FetchScreenCompleteEvent(ScreenType.TournamentSelect));
			ErrorManager.Instance.HandleWebRequestError(ErrorType.RestTournament, request);
		}
	}
}
