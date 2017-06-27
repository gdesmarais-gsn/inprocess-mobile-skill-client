﻿using GSN.Skill.Events;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.View.Pool;
using GSN.Skill.Phoenix.Strings;
using System.Collections;
using System.Collections.Generic;

namespace GSN.Skill.Phoenix.View
{
	public class TournamentResultsPopupView : PopupView
	{
		private const string FREE_LABEL = "FREE";
		private const string STILL_OPEN = "Pending";
		private const string PLAYER_RESOURCE = "PANEL_PlayerStanding";
		private const string OTHER_PLAYER_RESOURCE = "PANEL_OtherPlayerStanding";
		private const string WAITING_PLAYER_RESOURCE = "PANEL_WaitingForPlayer";

		private const int TILE_OFFSET = 150;
		private const int WIN_IT_NOW_OFFSET = 220;

		private const int MAX_WAITING_SLOTS = 5;
		private const int MAX_PLAYERS_DEFAULT = 6;
		private const int MAX_OTHER_PLAYERS = 5;

		private const float TWEEN_STANDING_DOWN_TIME = .1f;
		private const float RANK_STAMP_TIME = .1f;

		[SerializeField]
		private ScrollRect _scrollRect;
		[SerializeField]
		private GameObject _matchDetailsPanel;
		[SerializeField]
		private Transform _standingsListParent;
		[SerializeField]
		private Transform _tournamentFlavorAnchor;
		private PooledGameObject _flavorIcon;
		[SerializeField]
		private GameObject _toggleHiddenEntriesPanel;
		[SerializeField]
		private Toggle _hiddenEntriesToggle;
		[SerializeField]
		private TextMeshProUGUI _gameName;
		[SerializeField]
		private TextMeshProUGUI _numPlayers;
		[SerializeField]
		private TextMeshProUGUI _fee;
		[SerializeField]
		private TextMeshProUGUI _startTime;
		[SerializeField]
		private TextMeshProUGUI _endTime;
		[SerializeField]
		private TextMeshProUGUI _tournamentID;

		[SerializeField]
		private Button _reEnterButton;
		[SerializeField]
		private TextMeshProUGUI _reEnterFee;
		[SerializeField]
		private Button _playAgainButton;
		[SerializeField]
		private TextMeshProUGUI _playAgainFee;

		[SerializeField]
		private Button _skipAnimationsButton;

		[SerializeField]
		private TextMeshProUGUI[] _themedText;
		[SerializeField]
		private Image _backgroundTint;
		[SerializeField]
		private Image _matchDetailsTint;

		[SerializeField]
		private LayoutElement _standingsLayout;

		[SerializeField]
		private Button _closeButton;

		private GameResource _gameResource;

		private int _tournID;
		private int _flavorID;
		private int _flavorTypeID;
		private int _gameID;
		private decimal _feeAmount;
		private decimal _winItNowFeeAmount;
		private decimal _purseAmount;

        private bool _winItNowActive = false;

		private Coroutine _animatedPlayerStandings = null;

		private Vector3 _scratchVector = Vector3.zero;

		private List<PlayerStandingsTile> _masterList = new List<PlayerStandingsTile>();
		private List<GameObject> _waitingForPlayerList = new List<GameObject>();
		private List<PlayerStandingsTile> _rankedPlayerStandings = new List<PlayerStandingsTile>(); // the list of ranked players

		// animation values
		private List<PlayerStandingsTile> _otherPlayerStandings = new List<PlayerStandingsTile>(); // list used purely for animations
		private PlayerStandingsTile _highScoreTile = new PlayerStandingsTile(); // player specific high score
		private int _playerHighScoreRank = 0;

		private GetTournResultsSuccessEvent.TournResultData _resultData = new GetTournResultsSuccessEvent.TournResultData();

		protected override void OnEnable()
		{
			base.OnEnable();

			SetInitialState();

			EventDispatcher.AddListener<GetTournResultsSuccessEvent>(OnGetTournamentResults);

			_closeButton.onClick.AddListener(OnCloseButton);

			_reEnterButton.onClick.AddListener(OnRenterClick);
			_playAgainButton.onClick.AddListener(OnPlayTypeAgainClick);

			_hiddenEntriesToggle.onValueChanged.AddListener(OnToggleUpdate);

			_skipAnimationsButton.onClick.AddListener(OnSkipAnimations);
		}

		protected override void OnDisable()
		{
			base.OnDisable();
			EventDispatcher.RemoveListener<GetTournResultsSuccessEvent>(OnGetTournamentResults);

			_closeButton.onClick.RemoveListener(OnCloseButton);

			_reEnterButton.onClick.RemoveListener(OnRenterClick);
			_playAgainButton.onClick.RemoveListener(OnPlayTypeAgainClick);

			_hiddenEntriesToggle.onValueChanged.RemoveListener(OnToggleUpdate);

			_skipAnimationsButton.onClick.RemoveListener(OnSkipAnimations);

            FreePooledObjects();
		}

		private void SetInitialState()
		{
			_skipAnimationsButton.gameObject.SetActive(false);
			_scrollRect.verticalNormalizedPosition = 1f;
			_matchDetailsPanel.SetActive(false);
			_reEnterButton.gameObject.SetActive(false);
			_playAgainButton.gameObject.SetActive(false);
			_masterList.Clear();
			_waitingForPlayerList.Clear();
			_otherPlayerStandings.Clear();
			_rankedPlayerStandings.Clear();
			_highScoreTile = new PlayerStandingsTile();
			_playerHighScoreRank = 0;
			_resultData = new GetTournResultsSuccessEvent.TournResultData();
            _winItNowActive = false;
			_hiddenEntriesToggle.isOn = false; // reset toggle button to be disabeld by default
            _tournamentFlavorAnchor.gameObject.SetActive(false);
		}

		private void OnGetTournamentResults(IEvent e)
		{
			_resultData = ((GetTournResultsSuccessEvent)e).results;

			GsnDebug.Log("Should animate tournament result popup:", ((GetTournResultsSuccessEvent)e).animate);

			ClearChildrenObjects(_standingsListParent);

            _winItNowActive = _resultData.canWinItNow;

            SetFlavorHeader(_resultData);

			int playersBestScoreIndex = -1; // track if we've found the player's best score

			// traverse the data and build up every single standings tile in order
			for (int i = 0; i < _resultData.players.Count; ++i)
			{
				GetTournResultsSuccessEvent.Player player = _resultData.players[i];
				string tileResource = string.Empty;

				if (playersBestScoreIndex == -1 && player.isLoggedInPlayer)
				{
					// player's highest score hasn't been set yet and we're the current player!
					tileResource = PLAYER_RESOURCE;
					playersBestScoreIndex = i;
				}
				else
				{
					tileResource = OTHER_PLAYER_RESOURCE;
				}

				PlayerStandingsTile tile = GameObjectPoolManager.Instance.GetObject<PlayerStandingsTile>(tileResource);
				tile.transform.SetParent(_standingsListParent, false);
				tile.SetPlayerData(_resultData, player);
				tile.tournamentResultsPopup = this;

				_masterList.Add(tile);

				tile.gameObject.SetActive(false);
			}

			//Add waiting for player slots
			int totalWaitingSlots = 0;
			if (_resultData.history.state == Requests.Tournament.GameHistoryData.TournamentState.InProgress)
				totalWaitingSlots = Math.Min(_resultData.history.maxPlayers - _resultData.players.Count, MAX_WAITING_SLOTS);

			for (int i = 0; i < totalWaitingSlots; i++)
			{
				GameObject waitingTile = GameObjectPoolManager.Instance.GetObject(WAITING_PLAYER_RESOURCE);
				waitingTile.transform.SetParent(_standingsListParent, false);
				_waitingForPlayerList.Add(waitingTile);

				waitingTile.gameObject.SetActive(false);
			}

			// building up official rank list of other players
			for (int i = 0; i < _masterList.Count; ++i)
			{
				var tile = _masterList[i];

				if (_rankedPlayerStandings.Count == MAX_OTHER_PLAYERS)
					break; // we've filled up our list, kick out

				if (i == playersBestScoreIndex)
					continue; // we'll be adding the player's best score separately

				if (tile.PlayerData.place == null &&
				    !tile.PlayerData.stillPlaying &&
				    !tile.PlayerData.notStarted)
				{
					// player isn't placed and the player has completed his/her game
					continue;
				}

				_rankedPlayerStandings.Add(tile);
				_otherPlayerStandings.Add(tile);
			}

			_highScoreTile = _masterList[playersBestScoreIndex];

			// insert the player into its correct rank spot or at the bottom if they didn't reach the list
			if (playersBestScoreIndex < _rankedPlayerStandings.Count)
			{
				GsnDebug.Log("Setting player index to:", playersBestScoreIndex);
				_rankedPlayerStandings.Insert(playersBestScoreIndex, _masterList[playersBestScoreIndex]);
				_playerHighScoreRank = playersBestScoreIndex;
			}
			else
			{
				GsnDebug.Log("Setting player index to bottom:", playersBestScoreIndex);
				_rankedPlayerStandings.Add(_masterList[playersBestScoreIndex]);
				_playerHighScoreRank = _rankedPlayerStandings.Count - 1;
			}

			// enable the toggle only if the master list has more than the ranked player standings list
			_toggleHiddenEntriesPanel.SetActive(_masterList.Count > _rankedPlayerStandings.Count);

			// setup the intro layout for animation preparations
			SetupIntroLayout();

			// populate all match data
			BuildMatchInfo();

			// Animate player standings
			_skipAnimationsButton.gameObject.SetActive(true);

			if (((GetTournResultsSuccessEvent)e).animate)
				_animatedPlayerStandings = StartCoroutine(AnimateTournamentPlayerStandings());
			else
				SkipPlayerStandingsAnimation();
		}

		private void PositionTile(GameObject tile, float yPos)
		{
			_scratchVector = tile.transform.localPosition;
			_scratchVector.y = yPos;
			tile.transform.localPosition = _scratchVector;
		}

        private void SetFlavorHeader(GetTournResultsSuccessEvent.TournResultData data)
        {
			string flavorTypeResource = "";

            switch (data.history.type)
			{
				case Requests.Tournament.TournamentType.Free:
				case Requests.Tournament.TournamentType.PracticeLimitedEntry:
					flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_FREE;
					break;
				case Requests.Tournament.TournamentType.LimitedEntry:
					flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_LIMITED;
					break;
				case Requests.Tournament.TournamentType.PremiumLimitedEntry:
					flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_PREMIUM;
					break;
				case Requests.Tournament.TournamentType.FixedPrizeUnlimitedEntry:
					flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_UNLIMITED;
					break;
				case Requests.Tournament.TournamentType.Progressive:
					flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_PROGRESSIVE;
					break;
				case Requests.Tournament.TournamentType.ProgressiveRush:
					flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_PROGRESSIVE_RUSH;
					break;
				case Requests.Tournament.TournamentType.SuperRewardsLimitedEntry:
					flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_SUPER_REWARDS;
					break;
			}

			if (!string.IsNullOrEmpty(flavorTypeResource))
			{
				_flavorIcon = GameObjectPoolManager.Instance.GetObject<PooledGameObject>(flavorTypeResource);
				_flavorIcon.transform.SetParent(_tournamentFlavorAnchor, false);
			}

            _tournamentFlavorAnchor.gameObject.SetActive(true);
        }

		private void SetupIntroLayout()
		{
			int tileOffset = 0;
			PlayerStandingsTile currentPlayerTile = null;

			for (int i = 0; i < _rankedPlayerStandings.Count; ++i)
			{
				var tile = _rankedPlayerStandings[i];

				if (tile.PlayerData.isLoggedInPlayer)
				{
					// there is only one current player tile. let's retrieve it and use it for later
					currentPlayerTile = tile;
					continue;
				}

				// we're not the current player. let's show and position ourselves!
				tile.gameObject.SetActive(true);
				PositionTile(tile.gameObject, -tileOffset);
				tileOffset += TILE_OFFSET;
			}

			// set current player's tile to the bottom
			currentPlayerTile.gameObject.SetActive(true);
			PositionTile(currentPlayerTile.gameObject, -tileOffset);
			tileOffset += TILE_OFFSET;

			// at least set one waiting for players
			if (_waitingForPlayerList.Count > 0)
			{
				int totalUsedWaitingTiles = 0;

				// set at least 1 waiting for player item, then add more if we have space
				do
				{
					var tile = _waitingForPlayerList[totalUsedWaitingTiles++];
					tile.gameObject.SetActive(true);
					PositionTile(tile, -tileOffset);
					tileOffset += TILE_OFFSET;
				}
				while (_rankedPlayerStandings.Count < MAX_PLAYERS_DEFAULT && // we're still below the max count we can show
						totalUsedWaitingTiles < _waitingForPlayerList.Count); // we still have some waiting for player tiles left
			}

			if (_winItNowActive)
			{
				tileOffset += WIN_IT_NOW_OFFSET;
			}

			// Expand standings layout to correct height
			_standingsLayout.minHeight = tileOffset;
		}

		private void BuildMatchInfo()
		{
			_gameName.text = StringExtensions.ReplaceRegisterTradmark(_resultData.history.gameFriendlyName);

			if (_resultData.history.maxPlayers != 0)
			{
				_numPlayers.text = StringTable.Instance.GetEntry(CategoryTournament.RequiredNumberPlays, _resultData.history.numPlayers, _resultData.history.maxPlayers);
			}
			else
			{
				_numPlayers.text = StringTable.Instance.GetEntry(CategoryTournament.InfinitySymbol);
			}

			string feeText = _resultData.history.fee.ToString("C");

			if (_resultData.history.fee == 0)
				feeText = FREE_LABEL;

			_fee.text = feeText;

			_startTime.text = _resultData.history.startDate.ToString("G");

			if (_resultData.history.endDate != DateTime.MinValue)
				_endTime.text = _resultData.history.endDate.ToString("G");
			else
				_endTime.text = STILL_OPEN;

			_tournamentID.text = _resultData.history.tournID.ToString();
			_tournID = _resultData.history.tournID;
			_flavorID = _resultData.history.flavorID;
			_flavorTypeID = _resultData.history.flavorTypeID;
			_gameID = _resultData.history.gameID;
			_feeAmount = _resultData.history.fee;
			_winItNowFeeAmount = _resultData.winItNowCost;
			_purseAmount = _resultData.history.totalPrizePool;

			_reEnterButton.gameObject.SetActive(_resultData.reEnterableByUser);
			_reEnterFee.text = feeText;

			_playAgainButton.gameObject.SetActive(_resultData.showPlayTypeAgainButton);
			_playAgainFee.text = feeText;
			_matchDetailsPanel.SetActive(true);
		}

		private void ShowExtra()
		{
			ShowList(_masterList);
		}

		private void ShowList(List<PlayerStandingsTile> list)
		{
			int tileOffset = 0;
			bool firstLoggedInPlayer = true;

			for (int i = 0; i < list.Count; ++i)
			{
				var tile = list[i];

				if (!tile.gameObject.activeSelf)
					tile.gameObject.SetActive(true);

				PositionTile(tile.gameObject, -tileOffset);

				if (tile.PlayerData.isLoggedInPlayer && firstLoggedInPlayer)
				{
					firstLoggedInPlayer = false;
					if (_winItNowActive)
					{
						// prepare offset for next tile
						tileOffset += WIN_IT_NOW_OFFSET;
						tile.SkipAnimateExpandWinItNow();
					}
				}

				tile.SkipAnimateScoreBar(_resultData.minPlayerScore, _resultData.maxPlayerScore);
				tile.SkipAnimateRankStampIn();
				tile.SkipAnimatePrizeSlideIn();

				// prepare offset for next tile
				tileOffset += TILE_OFFSET;
			}

			for (int i = 0; i < _waitingForPlayerList.Count; ++i)
			{
				var tile = _waitingForPlayerList[i];
				if (!tile.activeSelf)
					tile.SetActive(true);
				PositionTile(tile, -tileOffset);
				tileOffset += TILE_OFFSET;
			}

			// Expand standings layout to correct height
			_standingsLayout.minHeight = tileOffset;
		}

		private void HideExtra()
		{
			int tileOffset = 0;

			for (int i = 0; i < _masterList.Count; ++i)
			{
				var tile = _masterList[i];

				if (_rankedPlayerStandings.Contains(tile))
				{
					if (!tile.gameObject.activeSelf)
						tile.gameObject.SetActive(true);

					PositionTile(tile.gameObject, -tileOffset);

					if (tile.PlayerData.isLoggedInPlayer && _winItNowActive)
					{
						tileOffset += WIN_IT_NOW_OFFSET;
					}

					tileOffset += TILE_OFFSET;
				}
				else
				{
					if (tile.gameObject.activeSelf)
						tile.gameObject.SetActive(false);
				}
			}

			// at least set one waiting for players if we have one
			if (_waitingForPlayerList.Count > 0)
			{
				int totalUsedWaitingTiles = 0;

				// set at least 1 waiting for player item, then add more if we have space
				do
				{
					var tile = _waitingForPlayerList[totalUsedWaitingTiles++];
					tile.SetActive(true);
					PositionTile(tile, -tileOffset);
					tileOffset += TILE_OFFSET;
				}
				while (_rankedPlayerStandings.Count < MAX_PLAYERS_DEFAULT && // we're still below the max count we can show
						totalUsedWaitingTiles < _waitingForPlayerList.Count); // we still have some waiting for player tiles left

				for (int i = totalUsedWaitingTiles; i < _waitingForPlayerList.Count; ++i)
				{
					// hide the rest of the waiting for player items
					var tile = _waitingForPlayerList[i];
					if (tile.activeSelf)
						tile.SetActive(false);
				}
			}

			// Expand standings layout to correct height
			_standingsLayout.minHeight = tileOffset;
		}

		private void OnToggleUpdate(bool isOn)
		{
			if (isOn)
			{
				ShowExtra();
			}
			else
			{
				HideExtra();
			}
		}

		public void SetTheme(string gameResourceName)
		{
			_gameResource = (GameResource)Resources.Load(gameResourceName);

			for (int i = 0; i < _themedText.Length; i++)
			{
				_themedText[i].color = _gameResource.textColor;
			}

			_backgroundTint.color = _gameResource.tournamentFooterColor;
			_matchDetailsTint.color = _gameResource.tournamentFooterColor;
		}

		IEnumerator AnimateTournamentPlayerStandings()
		{
			// Initial delay before animations start
			yield return new WaitForSeconds(.5f);

			// Start bar fill animations
			for (int i = 0; i < _otherPlayerStandings.Count; i++)
			{
				_otherPlayerStandings[i].AnimateScoreBar(_resultData.minPlayerScore, _resultData.maxPlayerScore);
			}

			_highScoreTile.AnimateScoreBar(_resultData.minPlayerScore, _resultData.maxPlayerScore);

			yield return new WaitForSeconds(PlayerStandingsTile.BAR_TWEEN_TIME + .25f);

			// Start player rocker animation
			_highScoreTile.AnimatePlayerRocket(_playerHighScoreRank * -TILE_OFFSET);

			yield return new WaitForSeconds(PlayerStandingsTile.ROCKET_TWEEN_TIME);

			// nudge other players down once rocket lands
			for (int i = _playerHighScoreRank; i < _otherPlayerStandings.Count; i++)
			{
				_otherPlayerStandings[i].AnimatePlayerDown(TILE_OFFSET);
				yield return new WaitForSeconds(TWEEN_STANDING_DOWN_TIME);
			}

			yield return new WaitForSeconds(_otherPlayerStandings.Count * TWEEN_STANDING_DOWN_TIME);

			yield return new WaitForSeconds(.25f);

			// Animate rank stamp in
			for (int i = 0; i < _rankedPlayerStandings.Count; i++)
			{
				_rankedPlayerStandings[i].AnimateRankStampIn();
				yield return new WaitForSeconds(RANK_STAMP_TIME);
			}

			yield return new WaitForSeconds(_rankedPlayerStandings.Count * RANK_STAMP_TIME);

			// Animate prize slide in
			for (int i = 0; i < _rankedPlayerStandings.Count; i++)
			{
				_rankedPlayerStandings[i].AnimatePrizeSlideIn();
				yield return new WaitForSeconds(RANK_STAMP_TIME);
			}

			yield return new WaitForSeconds(_rankedPlayerStandings.Count * RANK_STAMP_TIME);

			// Animate showing win it now
            if (_winItNowActive)
			{
				_highScoreTile.AnimateExpandWinItNow();

				// nudge other players down once rocket lands
				for (int i = _playerHighScoreRank; i < _otherPlayerStandings.Count; i++)
				{
					_otherPlayerStandings[i].AnimatePlayerDown(WIN_IT_NOW_OFFSET);
					yield return new WaitForSeconds(TWEEN_STANDING_DOWN_TIME);
				}

				// TODO: traverse active waiting for players tiles and make sure they animate down
			}

			_skipAnimationsButton.gameObject.SetActive(false);
		}


		void SkipPlayerStandingsAnimation()
		{
			LeanTween.cancelAll();
			_skipAnimationsButton.gameObject.SetActive(false);

			ShowList(_rankedPlayerStandings);
		}

		IEnumerator WinItNowAnimation()
		{
			_highScoreTile.AnimateCollapseWinItNow();

			int tileOffset = 0;

			// nudge other players up
			for (int i = _playerHighScoreRank; i < _otherPlayerStandings.Count; i++)
			{
				tileOffset -= WIN_IT_NOW_OFFSET;
				_otherPlayerStandings[i].AnimatePlayerDown(-WIN_IT_NOW_OFFSET);
				yield return new WaitForSeconds(TWEEN_STANDING_DOWN_TIME);
			}

			// TODO: traverse active waiting for players tiles and make sure they animate down

			// Expand standings layout to correct height
			_standingsLayout.minHeight = tileOffset;

			_highScoreTile.AnimateScoreBarWinItNow();

			yield return new WaitForSeconds(PlayerStandingsTile.BAR_TWEEN_TIME + .25f);

			// Start player rocker animation
			_highScoreTile.AnimatePlayerRocket(_playerHighScoreRank * -TILE_OFFSET);

			yield return new WaitForSeconds(PlayerStandingsTile.ROCKET_TWEEN_TIME);

			// Animate rank stamp in
			for (int i = 0; i < _rankedPlayerStandings.Count; i++)
			{
				_rankedPlayerStandings[i].AnimateRankStampIn();
				yield return new WaitForSeconds(RANK_STAMP_TIME);
			}

			yield return new WaitForSeconds(_rankedPlayerStandings.Count * RANK_STAMP_TIME);

			// Animate prize slide in
			for (int i = 0; i < _rankedPlayerStandings.Count; i++)
			{
				_rankedPlayerStandings[i].AnimatePrizeSlideIn();
				yield return new WaitForSeconds(RANK_STAMP_TIME);
			}
		}

        IEnumerator DeclineWinItNowAnimation()
        {
            _highScoreTile.AnimateCollapseWinItNow();

            int tileOffset = 0;

			// nudge other players down once rocket lands
			for (int i = _playerHighScoreRank; i < _otherPlayerStandings.Count; i++)
			{
                tileOffset -= WIN_IT_NOW_OFFSET;
				_otherPlayerStandings[i].AnimatePlayerDown(-WIN_IT_NOW_OFFSET);
				yield return new WaitForSeconds(TWEEN_STANDING_DOWN_TIME);
			}

			// Expand standings layout to correct height
			_standingsLayout.minHeight = tileOffset;
        }

		void OnCloseButton()
		{
			// If we are showing a win it now, try to decline win it now when we close the popup.
			if (_resultData.canWinItNow)
			{
				controller.WinItNowDecline(_tournID);
			}

			OnHide();
		}

		public void OnDeclineWinItNow()
		{
			controller.WinItNowDecline(_tournID);
			_playAgainButton.gameObject.SetActive(true);
            _winItNowActive = false;
            StartCoroutine(DeclineWinItNowAnimation());
		}

		public void OnWinItNow()
		{
			controller.WinItNowAccept(_tournID, _winItNowFeeAmount);
            _winItNowActive = false;
            StartCoroutine(WinItNowAnimation());
		}

		private void OnRenterClick()
		{
			controller.ReEnterTournament(_flavorID, _flavorTypeID, _tournID, _gameID, _feeAmount, _purseAmount);
		}

		private void OnPlayTypeAgainClick()
		{
			controller.TournamentSignup(_flavorID, _flavorTypeID, _gameID, _feeAmount, _purseAmount);
		}

		private void OnSkipAnimations()
		{
			StopCoroutine(_animatedPlayerStandings);
			SkipPlayerStandingsAnimation();
		}

		protected override void OnFetchPopupBeginEvent(IEvent e)
		{
			if (((FetchPopupBeginEvent)e).type == PopupType.TournamentResult)
			{
				ClearChildrenObjects(_standingsListParent);
				ShowActivityIndicator();
			}
		}

		protected override void OnFetchPopupCompleteEvent(IEvent e)
		{
			if (((FetchPopupCompleteEvent)e).type == PopupType.TournamentResult)
			{
				HideActivityIndicator();
			}
		}

		private void FreePooledObjects()
		{
			if (_flavorIcon != null)
			{
				_flavorIcon.Free();
				_flavorIcon = null;
			}
		}
	}
}