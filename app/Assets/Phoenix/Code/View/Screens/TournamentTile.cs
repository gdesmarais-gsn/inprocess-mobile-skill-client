﻿using UnityEngine;
using UnityEngine.UI;
using TMPro;
using GSN.Skill.Phoenix.Strings;
using GSN.Skill.Phoenix.View.Pool;

namespace GSN.Skill.Phoenix.View
{
	public class TournamentTile : BaseView
	{
		[SerializeField]
		private TextMeshProUGUI _prizePoolValue;
		[SerializeField]
		private TextMeshProUGUI _fee;
		[SerializeField]
		private TextMeshProUGUI _additionalInfo;
		[SerializeField]
		private TextMeshProUGUI _rewardsPointsValue;
		[SerializeField]
		private TextMeshProUGUI _rewardsPointsExplanation;
		[SerializeField]
		private TextMeshProUGUI _prizePoolText;

		[SerializeField]
		private Transform _flavorIconAnchor;
		private PooledGameObject _flavorIcon;

		[SerializeField]
		private Button _enterTournamentButton;
		[SerializeField]
		private Button _lockedTournamentButton;
		[SerializeField]
		private Button _enterFreeTournamentButton;
		[SerializeField]
		private Button _detailsButton;

        [SerializeField]
        private GameObject _unlockedPanel;
		[SerializeField]
		private GameObject _lockedPanel;
        [SerializeField]
        private GameObject _freePanel;

		private int _flavorID = 0;
		private int _flavorTypeID = 0;
		private int _gameID = 0;
		private decimal _feeAmount;
		private decimal _purseAmount;

		public const string FLAVOR_RESOURCE_FREE = "PANEL_TournamentFlavor_Warmup";
		public const string FLAVOR_RESOURCE_LIMITED = "PANEL_TournamentFlavor_Limited";
		public const string FLAVOR_RESOURCE_PREMIUM = "PANEL_TournamentFlavor_Premium";
		public const string FLAVOR_RESOURCE_PROGRESSIVE = "PANEL_TournamentFlavor_Progressive";
		public const string FLAVOR_RESOURCE_PROGRESSIVE_RUSH = "PANEL_TournamentFlavor_ProgressiveRush";
		public const string FLAVOR_RESOURCE_SUPER_REWARDS = "PANEL_TournamentFlavor_SuperRewards";
		public const string FLAVOR_RESOURCE_UNLIMITED = "PANEL_TournamentFlavor_Unlimited";

		void OnEnable()
		{
			_enterTournamentButton.onClick.AddListener(OnTournamentEnterButton);
            _lockedTournamentButton.onClick.AddListener(OnTournamentDetailsButton);
            _enterFreeTournamentButton.onClick.AddListener(OnTournamentEnterButton);
			_detailsButton.onClick.AddListener(OnTournamentDetailsButton);

			_prizePoolValue.text = "";
			_fee.text = "";
			_additionalInfo.text = "";
			_rewardsPointsValue.text = "";
			_prizePoolText.text = StringTable.Instance.GetEntry(CategoryTournament.PrizePool);
			_rewardsPointsValue.transform.parent.gameObject.SetActive(true);
		}

		void OnDisable()
		{
			_enterTournamentButton.onClick.RemoveListener(OnTournamentEnterButton);
			_detailsButton.onClick.RemoveListener(OnTournamentDetailsButton);
            _lockedTournamentButton.onClick.RemoveListener(OnTournamentDetailsButton);
            _enterFreeTournamentButton.onClick.RemoveListener(OnTournamentEnterButton);

			FreePooledObjects();
		}

		public void SetTournamentData(TournamentGameListEvent.TournamentData tournamentData,
                                      int numCashGamesPlays,
                                      int numSpecificGamePlays)
		{
			_flavorID = tournamentData.flavorID;
			_flavorTypeID = tournamentData.flavorTypeID;
			_gameID = tournamentData.gameID;
			_feeAmount = tournamentData.fee;
			_purseAmount = tournamentData.totalPrizePool;
			_prizePoolValue.text = StringTable.Instance.GetEntry(CategoryTournament.PrizePoolValue, tournamentData.totalPrizePool.ToString("F2"));
			_rewardsPointsValue.text = StringTable.Instance.GetEntry(CategoryTournament.RewardsPoints, (tournamentData.rewardsPointsBase * tournamentData.rewardPointsMultiplier).ToString());
			_prizePoolText.text = StringTable.Instance.GetEntry(CategoryTournament.PrizePool);

            bool currentUserNeedsMoreCashGamePlays = (tournamentData.minCashGamesRequired > numCashGamesPlays);
            bool currentUserNeedsMoreSpecificGamePlays = (tournamentData.minGameSpecificPlaysRequired > numSpecificGamePlays);

            if (currentUserNeedsMoreCashGamePlays || currentUserNeedsMoreSpecificGamePlays)
            {
                _lockedPanel.SetActive(true);
                _freePanel.SetActive(false);
                _unlockedPanel.SetActive(false);
            }
            else
            {
                _lockedPanel.SetActive(false);
                if (tournamentData.fee > 0)
                {
					_freePanel.SetActive(false);
					_unlockedPanel.SetActive(true);
                }
                else
                {
					_freePanel.SetActive(true);
					_unlockedPanel.SetActive(false);
                }
            }

			string info = "";
			for (int i = 0; i < tournamentData.auxDataStrings.Count; i++)
			{
				info += " | " + tournamentData.auxDataStrings[i];
			}

			if (tournamentData.rewardsPointsBase == 0)
				_rewardsPointsValue.transform.parent.gameObject.SetActive(false);

			if (tournamentData.totalPrizePool == 0)
				_prizePoolValue.text = StringTable.Instance.GetEntry(CategoryTournament.NoPrize);
			_fee.text = tournamentData.fee.ToString("C");
			if (tournamentData.fee == 0)
				_fee.text = StringTable.Instance.GetEntry(CategoryTournament.FreeEntryFee);
			string players = "";
			if (tournamentData.numPlayers == 0)
				players = StringTable.Instance.GetEntry(CategoryTournament.InfinitySymbol);
			else
				players = tournamentData.numPlayers.ToString();

			CategoryTournament playerStringKey = tournamentData.numPlayers == 1 ? CategoryTournament.PlayerSingular : CategoryTournament.Players;

			_additionalInfo.text = StringTable.Instance.GetEntry(playerStringKey, players, info);

			string flavorTypeResource = "";
			switch (tournamentData.type)
			{
				case Requests.Tournament.TournamentType.Free:
				case Requests.Tournament.TournamentType.PracticeLimitedEntry:
					flavorTypeResource = FLAVOR_RESOURCE_FREE;
					_prizePoolValue.text = StringTable.Instance.GetEntry(CategoryTournament.NoPrize);
                    _prizePoolText.text = "";
					break;
				case Requests.Tournament.TournamentType.LimitedEntry:
					flavorTypeResource = FLAVOR_RESOURCE_LIMITED;
					break;
				case Requests.Tournament.TournamentType.PremiumLimitedEntry:
					flavorTypeResource = FLAVOR_RESOURCE_PREMIUM;
					break;
				case Requests.Tournament.TournamentType.FixedPrizeUnlimitedEntry:
					flavorTypeResource = FLAVOR_RESOURCE_UNLIMITED;
					break;
				case Requests.Tournament.TournamentType.Progressive:
					flavorTypeResource = FLAVOR_RESOURCE_PROGRESSIVE;
					_prizePoolValue.text = StringTable.Instance.GetEntry(CategoryTournament.RisingPool);
					_prizePoolText.text = "";
					break;
				case Requests.Tournament.TournamentType.ProgressiveRush:
					_prizePoolValue.text = StringTable.Instance.GetEntry(CategoryTournament.RisingPool);
                    _prizePoolText.text = "";
					flavorTypeResource = FLAVOR_RESOURCE_PROGRESSIVE_RUSH;
					break;
				case Requests.Tournament.TournamentType.SuperRewardsLimitedEntry:
					flavorTypeResource = FLAVOR_RESOURCE_SUPER_REWARDS;
					break;
			}

			if (!string.IsNullOrEmpty(flavorTypeResource))
			{
				_flavorIcon = GameObjectPoolManager.Instance.GetObject<PooledGameObject>(flavorTypeResource);
				_flavorIcon.transform.SetParent(_flavorIconAnchor, false);
			}
		}

		public void SetGameTheme(GameResource gameResource)
		{
			_additionalInfo.color = gameResource.textColor;
            _rewardsPointsValue.color = gameResource.textColor;
            _rewardsPointsExplanation.color = gameResource.textColor;
		}

		private void OnTournamentEnterButton()
		{
			controller.TournamentSignup(_flavorID, _flavorTypeID,_gameID, _feeAmount, _purseAmount);
		}

		private void OnTournamentDetailsButton()
		{
			controller.ShowTournamentDetails(_flavorID);
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