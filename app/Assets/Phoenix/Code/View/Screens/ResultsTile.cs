using UnityEngine;
using UnityEngine.UI;
using TMPro;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Strings;
using GSN.Skill.Phoenix.View.Pool;

namespace GSN.Skill.Phoenix.View
{
	public class ResultsTile : BaseView
	{

		[SerializeField]
		private TextMeshProUGUI _prizeWon;

		[SerializeField]
		private Transform _gameTileAnchor;
		[SerializeField]
        private Transform _flavorTypeAnchor;
        private PooledGameObject _flavorIcon;
		[SerializeField]
		private TextMeshProUGUI _tournamentState;
		[SerializeField]
		private Button _resultsButton;

        [SerializeField]
        private GameObject _winCashPanel;
		[SerializeField]
		private GameObject _winPanel;

		[SerializeField]
		private GameObject _playNowButton;
		[SerializeField]
		private GameObject _webOnlyButton;

		private int _tournID = 0;
		private int _gameID = 0;
		private int _unplayedGameID = 0;
		private int _flavorID = 0;
		private int _flavorTypeID = 0;
		private decimal _feeAmount;
		private string _gameResourceName;
		private decimal _purseAmount;

        private const string DARK_SUFFIX = "_Dark";

		void OnEnable()
		{
            if (_resultsButton != null)
			    _resultsButton.onClick.AddListener(OnViewResultsButton);

			if (_playNowButton != null)
				_playNowButton.SetActive(true);
			if (_webOnlyButton != null)
				_webOnlyButton.SetActive(false);

            if (_winCashPanel != null)
                _winCashPanel.SetActive(false);
            if (_winPanel != null)
                _winPanel.SetActive(false);
		}

		void OnDisable()
		{
            if (_resultsButton != null)
			    _resultsButton.onClick.RemoveListener(OnViewResultsButton);

            FreePooledObjects();
		}

		public void SetHistoryData(TournamentHistoryData historyData)
		{
			_gameResourceName = historyData.gameResource;

			_gameID = historyData.gameID;
			_tournID = historyData.tournID;
			_flavorID = historyData.flavorID;
			_flavorTypeID = historyData.flavorTypeID;
			_feeAmount = historyData.fee;
			_purseAmount = historyData.totalPrizePool;
			if (historyData.unplayedGameID.HasValue)
				_unplayedGameID = historyData.unplayedGameID.Value;

            string numPlayers = historyData.maxPlayers.ToString();
            string playersText = "";

            if (historyData.maxPlayers == 0)
                playersText = StringTable.Instance.GetEntry(CategoryTournament.InfinitySymbol);


			string flavorTypeResource = "";
			switch (historyData.type)
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

            switch (historyData.state)
            {
				case Requests.Tournament.GameHistoryData.TournamentState.InProgress:
				case Requests.Tournament.GameHistoryData.TournamentState.NotStarted:
                case Requests.Tournament.GameHistoryData.TournamentState.UnsupportedOnMobile:
					flavorTypeResource += DARK_SUFFIX;
                    break;
            }

			if (!string.IsNullOrEmpty(flavorTypeResource))
			{
				_flavorIcon = GameObjectPoolManager.Instance.GetObject<PooledGameObject>(flavorTypeResource);
				_flavorIcon.transform.SetParent(_flavorTypeAnchor, false);
			}

            if (historyData.state == Requests.Tournament.GameHistoryData.TournamentState.InProgress)
			{
				playersText = StringTable.Instance.GetEntry(CategoryTournamentHistory.PendingPlayers, historyData.numPlayers.ToString(), historyData.maxPlayers.ToString());
			}
            else
			{
				if (historyData.maxPlayers > 1)
				{
					playersText = StringTable.Instance.GetEntry(CategoryTournamentHistory.Players, historyData.maxPlayers.ToString());
				}
				else
				{
					playersText = StringTable.Instance.GetEntry(CategoryTournamentHistory.PlayerSingular, historyData.maxPlayers.ToString());
				}
				
			}

			if (historyData.maxPlayers == 0)
                playersText = StringTable.Instance.GetEntry(CategoryTournamentHistory.Players, StringTable.Instance.GetEntry(CategoryTournament.InfinitySymbol));
            
            _tournamentState.text = playersText;
			
            if (_prizeWon != null)
				_prizeWon.text = StringTable.Instance.GetEntry(CategoryTournament.PrizePoolValue, historyData.amountWon.ToString("F2"));

            if (historyData.playerWon)
            {
                if (historyData.amountWon > 0)
                {
					if (_winCashPanel != null)
						_winCashPanel.SetActive(true);
                }
                else
                {
					if (_winPanel != null)
						_winPanel.SetActive(true);
                }
            }

            if (string.IsNullOrEmpty(historyData.gameResource))
            {
                if (_playNowButton != null)
                    _playNowButton.SetActive(false);
                if (_webOnlyButton != null)
                    _webOnlyButton.SetActive(true);
            }
            else
            {
                if (_playNowButton != null)
                    _playNowButton.SetActive(true);
                if (_webOnlyButton != null)
                    _webOnlyButton.SetActive(false);

                SetGameTheme(historyData.gameResource);
            }
		}

		private void SetGameTheme(string gameResourceName)
		{
			GameResource gameResource = (GameResource)Resources.Load(gameResourceName);
			if (gameResource != null)
			{
				GameObject gameTile = (GameObject)Instantiate(gameResource.gameTile);
				gameTile.transform.SetParent(_gameTileAnchor, false);
			}
		}

		private void OnViewResultsButton()
		{
			EventDispatcher.DispatchEvent(new HistoryTileSelectViewEvent(_gameResourceName));

			if (_unplayedGameID != 0)
				controller.EnterPreviouslyUnplayedTournament(_flavorID, _flavorTypeID ,_tournID, _unplayedGameID, _gameID, _feeAmount, _purseAmount);
			else
				controller.ShowTournamentResults(_tournID);
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