using System;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Requests.Tournament;
using GSN.Skill.Utils;
using System.Collections.Generic;

namespace GSN.Skill.Phoenix.Utils
{
	public interface ITournamentResultData
	{
		string[] prizeValue { get; set; } // Array of prizes for each player
		string unplayed_game_id { get; set; } // If a user never started a game, this value will be set.  It can be used to start the tournament again.
		string Fee { get; set; }
		string FlavorDescription { get; set; }
		string FlavorTypeID { get; set; }
		string GameID { get; set; } // Maps back to gametype_id { get; set; }
		string StartDate { get; set; } // "Human readable start date ex: 2017-03-13 13:12:21"
		bool closed { get; set; } // Possible values:  0 (open) and 1 (closed)
		string MaxPlayers { get; set; }
		string EndDate { get; set; } // Can be null if tournament is not closed.
		string FlavorName { get; set; }
		bool PlayerWon { get; set; } // Possible values 0 (no) || 1 (yes)
		string NumPlayers { get; set; }
		string Winnings { get; set; }  // Possible values:  null || Value || "None"
		string GameName { get; set; }
		string TotalPrizeAmount { get; set; }
		string FlavorType { get; set; }

		// Winner declared is a string that can be the following values:
		// t => "Yes",        # (t)rue
		// f => "No",         # (f)alse
		// l => "Locked",     # (l)ocked (Probably for buyout)
		// b => "Win It Now", # (b)uyout
		// r => "Refunded"    # (r)efunded
		string WinnerDeclared { get; set; }
		string TournamentID { get; set; }
		int? Unfinished { get; set; } // Possible values 1 for yes , null for no :(
	}

	public static class TournamentUtilities
	{
		private const string WinnerDeclaredTrue  = "t";
		private const string WinnerDeclaredFalse = "f";
		private const string WinnerDeclaredBuyout = "b";
		private const string WinnerDeclaredLocked = "l";
		private const string WinnerDeclaredRefunded = "r";
		// There is a problem with the TCT and programming where sometimes free tournaments need to be programmed with a fee
		// This is fine and displays correctly at tournament signup time.  It does not display correctly at tourn results time.
		// This is a client side fix so that we can show zero fee here.
		private static HashSet<TournamentType> displayAsFreeTypes = new HashSet<TournamentType>{
			{TournamentType.Free}, 
			{TournamentType.PracticeLimitedEntry},
			{TournamentType.Provisional1PracticeLimitedEntry}
		};
		public static GameHistoryData.TournamentState GetTournamentState(bool playerWon, bool unfinished, string winnerDeclared, int gameID, GameListData gameListData )
		{
			GameHistoryData.TournamentState state = GameHistoryData.TournamentState.None;
			switch(winnerDeclared)
			{
				// For Winner declared = (t)rue OR (b)uyout.  Figure out if the player won or lost.
				case WinnerDeclaredTrue: 
				case WinnerDeclaredBuyout:
					if (playerWon)
						state = GameHistoryData.TournamentState.CompleteWon;
					else
						state = GameHistoryData.TournamentState.CompleteLost;
					break;
					// For Winner declared = (f)alse OR (l)ocked.  Show In progress or unplayed appropriately.  
				case WinnerDeclaredFalse:
				case WinnerDeclaredLocked:
					if (unfinished)
					{
						if (gameListData.IsGameAvailable(gameID))
							state = GameHistoryData.TournamentState.NotStarted;
						else 
							state = GameHistoryData.TournamentState.UnsupportedOnMobile;
					}
					else 
						state = GameHistoryData.TournamentState.InProgress;
					break;
					// For Winner declared = (r)efunded.  Show that state;
				case WinnerDeclaredRefunded :
					state = GameHistoryData.TournamentState.Refunded;
					break;
				default:
					GsnDebug.LogWarning("We encountered a History state we were not expecting.  WinnerDeclared:", winnerDeclared);
					break;
			}
			return state;
		}

		public static bool IsBuyout(string winnerDeclared)
		{
			if (winnerDeclared == WinnerDeclaredBuyout)
				return true;
			return false;
		}

		public static TournamentHistoryData BuildTournamentHistoryData(GameListData gameListData, ITournamentResultData tournament)
		{
			var historyData = new TournamentHistoryData();

			try
			{
				historyData.flavorID = Convert.ToInt32(tournament.FlavorTypeID);
				historyData.flavorTypeID = Convert.ToInt32(tournament.FlavorTypeID);
				historyData.gameID = Convert.ToInt32(tournament.GameID);
				// There is a problem with the TCT and programming where sometimes free tournaments need to be programmed with a fee
				// This is fine and displays correctly at tournament signup time.  It does not display correctly at tourn results time.
				// This is a client side fix so that we can show zero fee here.
				if (displayAsFreeTypes.Contains((TournamentType)historyData.flavorID ))
					historyData.fee = 0;
				else
					historyData.fee = Convert.ToDecimal(tournament.Fee);
				historyData.typeFriendlyName = tournament.FlavorType;
                historyData.type = (TournamentType)Convert.ToInt32(tournament.FlavorTypeID);
				if (gameListData.GetGameData(historyData.gameID).HasValue)
				{
					historyData.gameResource = gameListData.GetGameData(historyData.gameID).Value.resourceName;
					historyData.gameFriendlyName = gameListData.GetGameData(historyData.gameID).Value.friendlyName;
				}

				// calculate the total prize pool based on the prize value array
				historyData.totalPrizePool = 0;
				for (int i = 0; i < tournament.prizeValue.Length; ++i)
				{
					historyData.totalPrizePool += Convert.ToDecimal(tournament.prizeValue[i]);
				}

				historyData.closed = tournament.closed;
				historyData.playerWon = tournament.PlayerWon;
				historyData.numPlayers = Convert.ToInt32(tournament.NumPlayers);
				historyData.maxPlayers = Convert.ToInt32(tournament.MaxPlayers);
				historyData.startDate = Convert.ToDateTime(tournament.StartDate);

				// end date may not exist since the tournament may still be open
				historyData.endDate = string.IsNullOrEmpty(tournament.EndDate) ? DateTime.MinValue : Convert.ToDateTime(tournament.EndDate);

				if (string.IsNullOrEmpty(tournament.Winnings) ||
				    tournament.Winnings == WorldWinnerReferenceKeys.WINNINGS_NONE)
				{
					historyData.amountWon = 0;
				}
				else
				{
					try
					{
						historyData.amountWon = Convert.ToDecimal(tournament.Winnings);
					}
					catch
					{
						GsnDebug.LogError("Problem converting winnings to a number, tourn_id:",tournament.TournamentID,"Winnings:",tournament.Winnings);
						historyData.amountWon =0;
					}
				}
				historyData.tournID = Convert.ToInt32(tournament.TournamentID);
				bool unfinished = false;
				if (tournament.Unfinished.HasValue)
				{
					unfinished = Convert.ToBoolean(tournament.Unfinished.Value);
				}
				historyData.unfinished = unfinished;
				if (unfinished)
				{
					historyData.unplayedGameID = Convert.ToInt32(tournament.unplayed_game_id);
				}
				historyData.state = GetTournamentState(tournament.PlayerWon, unfinished, tournament.WinnerDeclared, historyData.gameID,gameListData);
			}
			catch (Exception e)
			{
				GsnDebug.LogError("Problem setting up history data tourn_id: ", tournament.TournamentID, e.ToString());
			}

			return historyData;
		}
	}
}

