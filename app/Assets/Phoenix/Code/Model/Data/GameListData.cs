﻿﻿using System;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Requests.Tournament;
using GSN.Skill.Utils;
using GSN.Skill.Requests.Config;
using System.Linq;

namespace GSN.Skill.Phoenix.Model.Data
{
	public struct GameData
	{
		public string resourceName;
		public int gameID;
		public int mobileGameID;
		public string friendlyName;

		// for web games, this will be a url.
		// for native games, this will be a scene name.
		public string gameSite;

		// HACK: Native TriPeaks
		public bool isNativeGame { get { return gameID == 121; } }

	}

	public class GameListData
	{
		public Dictionary<int, GameData> gameData;

		private HashSet<int> _unsupportedPhoenixGames;
		private ListGameTypesRequestData _gameListData;

		private int _usersCurrentGameID;

		public GameListData(StoredConfigData storedConfigData)
		{
			gameData = new Dictionary<int, GameData>();
			EventDispatcher.AddListener<UnsupportedGameListUpdatedEvent>(OnUnsupportedGameListUpdated);
			_unsupportedPhoenixGames = storedConfigData.unsupportedPhoenixGames;
			RequestManager.Instance.OnGameListDataUpdate += OnGameListDataUpdate;
		}

		public int currentGameID
		{
			get { return UserSaveRestore.Global.SelectedGameID; }
		}

		public bool IsGameAvailable(int gametype_id)
		{
			return gameData.ContainsKey(gametype_id);
		}
		public GameData? GetGameData(int gameID)
		{
			if (gameData.ContainsKey(gameID))
				return gameData[gameID];
			return null;
		}
		public GameData? GetCurrentGame()
		{
			ValidateCurrentGame();

			return GetGameData(UserSaveRestore.Global.SelectedGameID);
		}

		public void SetCurrentGame(int gameID)
		{
			if (_unsupportedPhoenixGames.Contains(gameID))
			{
				GsnDebug.LogError("Unsupported game:", gameID, "attempted to be set.");
				return; // we do not allow for unsupported games
			}

			if (UserSaveRestore.Global.SelectedGameID == gameID)
				return;

			UserSaveRestore.Global.SelectedGameID = gameID;

			NotifySelectedGame();
		}

		public void NotifySelectedGame()
		{
			GameData? selectedGame = GetCurrentGame();
			if (selectedGame.HasValue)
			{
				EventDispatcher.DispatchEvent(new SelectedGameUpdateEvent(selectedGame.Value));
			}
			else
			{
				GsnDebug.LogError("GameData doesn't exist for gameID: ", UserSaveRestore.Global.SelectedGameID);
			}
		}


		private void OnUnsupportedGameListUpdated(IEvent evt)
		{
			UnsupportedGameListUpdatedEvent e = (UnsupportedGameListUpdatedEvent)evt;
			_unsupportedPhoenixGames = e.unsupportedPhoenixGames;
			// If we get here before we've fetched the game list for the first time, do nothing.
			if (_gameListData != null)
				OnGameListDataUpdate(_gameListData);
			GsnDebug.Log("UnsupportedGameListUpdated");
		}

		private void OnGameListDataUpdate(ListGameTypesRequestData listGameTypes)
		{
			gameData.Clear();
			_gameListData = listGameTypes;
			var gameTypes = listGameTypes.Response.result.gametypes;
			var gameMap = listGameTypes.Response.result.gameMap;
			foreach (var entry in gameTypes)
			{
				var data = new GameData();
				ListGameTypesData.GameType gameType = entry.Value;
				data.gameID = Convert.ToInt32(gameType.gametype_id);

				// We currently want to filter out one of the games from WW backend.  We will go back later post MVP and move 
				// this to be platform driven based on the application requesting this information.
				if (_unsupportedPhoenixGames.Contains(data.gameID))
					continue;

				data.resourceName = gameType.ocx_objectname;
				data.friendlyName = gameType.name;

				if (gameMap.ContainsKey(data.gameID.ToString()))
				{ // set mobile game id
					data.mobileGameID = Convert.ToInt32(gameMap[data.gameID.ToString()].mobile_gametype_id);
				}
				if (data.isNativeGame)
				{
					// HACK: Native TriPeaks
					data.gameSite = "TriPeaks";
				}
				else
				{
					data.gameSite = APIReference.Instance.apiInfo.GameLocationBaseURL + gameType.ocx_codebase+"/";
				}
				gameData.Add(data.gameID,data);
			}
		}

		private void ValidateCurrentGame()
		{
			// validate the current game and make sure it's legit
			if (_unsupportedPhoenixGames.Contains(UserSaveRestore.Global.SelectedGameID))
			{
				// we have an unsupported game set
				// set a supported game
				UserSaveRestore.Global.SelectedGameID = gameData.First().Key;
			}
		}
	}
}
