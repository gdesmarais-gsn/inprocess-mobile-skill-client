using GSN.Skill.Events;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.View.Pool;
using System.Collections.Generic;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.View
{
    public class TournamentDetailsPopupView : PopupView
    {
        private struct RankSetPrize
        {
            public string rank;
            public decimal prize;
        }

        [SerializeField]
        private Transform _prizePoolList;
        [SerializeField]
        private GameObject _prizePoolItemTemplate;
        [SerializeField]
        private GameObject _prizePoolPanel;
        [SerializeField]
        private GameObject _matchDetailsPanel;
        [SerializeField]
        private Transform _tournamentFlavorAnchor;
        private PooledGameObject _flavorIcon;

        [SerializeField]
        private TextMeshProUGUI _rewardsPoints;
        [SerializeField]
        private TextMeshProUGUI _numPlayers;
        [SerializeField]
        private TextMeshProUGUI _fee;
        [SerializeField]
        private TextMeshProUGUI _totalPrizePool;

        [SerializeField]
        private TextMeshProUGUI _tournamentDescription;

        [SerializeField]
        private GameObject _unlockedPanel;

        [SerializeField]
        private GameObject _lockedPanel;

        [SerializeField]
        private TextMeshProUGUI _unlockRequirementMessage;

        [SerializeField]
        private TextMeshProUGUI _unlockRequirementBarText;

        [SerializeField]
        private Transform _progressBar;

        [SerializeField]
        private float _barStartOffSet = 520f;
        private Vector3 _scratchVector = Vector3.zero;

        [SerializeField]
        private Button _playNowButton;
        [SerializeField]
        private TextMeshProUGUI _playNowFee;

        [SerializeField]
        private TextMeshProUGUI[] _themedText;
        [SerializeField]
        private Image _backgroundTint;

        private GameResource _gameResource;

        private const string FREE_LABEL = "FREE";

        private int _flavorID = 0;
        private int _flavorTypeID = 0;
        private int _gameID = 0;
        private decimal _feeAmount;
        private decimal _purseAmount;

        [SerializeField]
        private Button _closeButton;

        protected override void OnEnable()
        {
            base.OnEnable();
            EventDispatcher.AddListener<TournamentDetailsReadyEvent>(OnGetTournamentDetails);

            _closeButton.onClick.AddListener(OnCloseButton);
            _playNowButton.onClick.AddListener(OnTournamentEnterButton);

            UpdateProgressBar(0.0f);
        }

        protected override void OnDisable()
        {
            base.OnDisable();
            EventDispatcher.RemoveListener<TournamentDetailsReadyEvent>(OnGetTournamentDetails);

            _closeButton.onClick.RemoveListener(OnCloseButton);
            _playNowButton.onClick.RemoveListener(OnTournamentEnterButton);

            FreePooledObjects();
        }

        private void OnGetTournamentDetails(IEvent e)
        {
            TournamentDetailsReadyEvent eventData = ((TournamentDetailsReadyEvent)e);
            var detailsData = eventData.details;
            int totalCashGamePlays = eventData.totalCashGamePlays;
            int totalSpecifcGamePlays = eventData.totalSpecificGamePlays;

            _gameResource = (GameResource)Resources.Load(detailsData.gameResource);

            _lockedPanel.SetActive(true);
            _unlockedPanel.SetActive(false);

            if (totalCashGamePlays < detailsData.minCashGamesRequired)
            {
                _lockedPanel.SetActive(true);
                _unlockedPanel.SetActive(false);
                _playNowButton.gameObject.SetActive(false);

                _unlockRequirementBarText.text = StringTable.Instance.GetEntry(CategoryTournament.RequiredCashGamePlays,
                                                                      totalCashGamePlays,
                                                                      detailsData.minCashGamesRequired);
                _unlockRequirementMessage.text = StringTable.Instance.GetEntry(CategoryTournament.RequiredCashGamePlaysMessage);

                float progress = (float)totalCashGamePlays / (float)detailsData.minCashGamesRequired;

                UpdateProgressBar(progress);
            }
            else if (totalSpecifcGamePlays < detailsData.minGameSpecificPlaysRequired)
            {
                _lockedPanel.SetActive(true);
                _unlockedPanel.SetActive(false);
                _playNowButton.gameObject.SetActive(false);

                _unlockRequirementBarText.text = StringTable.Instance.GetEntry(CategoryTournament.RequiredSpecificGamePlays,
                                                                      totalSpecifcGamePlays,
                                                                      detailsData.minGameSpecificPlaysRequired);
                _unlockRequirementMessage.text = StringTable.Instance.GetEntry(CategoryTournament.RequiredSpecificGamePlaysMessage,
                                                                               detailsData.gameFriendlyName);

                float progress = (float)totalSpecifcGamePlays / (float)detailsData.minGameSpecificPlaysRequired;

                UpdateProgressBar(progress);
            }
            else
            {
                // No message to display
                _lockedPanel.SetActive(false);
                _unlockedPanel.SetActive(true);
                _playNowButton.gameObject.SetActive(true);
            }

            
            SetTheme();

            _flavorID = detailsData.flavorID;
            _flavorTypeID = detailsData.flavorTypeID;
            _gameID = detailsData.gameID;

            string flavorTypeResource = "";

            switch (detailsData.type)
            {
                case Requests.Tournament.TournamentType.Free:
                case Requests.Tournament.TournamentType.PracticeLimitedEntry:
                    flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_FREE;
                    _tournamentDescription.text = StringTable.Instance.GetEntry(CategoryTournament.WarmUpTournamentDescription);
                    break;
                case Requests.Tournament.TournamentType.LimitedEntry:
                    flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_LIMITED;
                    _tournamentDescription.text = StringTable.Instance.GetEntry(CategoryTournament.LimitedTournamentDescription);
                    break;
                case Requests.Tournament.TournamentType.PremiumLimitedEntry:
                    flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_PREMIUM;
                    _tournamentDescription.text = StringTable.Instance.GetEntry(CategoryTournament.PremiumTournamentDescription);
                    break;
                case Requests.Tournament.TournamentType.FixedPrizeUnlimitedEntry:
                    flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_UNLIMITED;
                    _tournamentDescription.text = StringTable.Instance.GetEntry(CategoryTournament.UnlimitedTournamentDescription);
                    break;
                case Requests.Tournament.TournamentType.Progressive:
                    flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_PROGRESSIVE;
                    _tournamentDescription.text = StringTable.Instance.GetEntry(CategoryTournament.ProgressiveTournamentDescription);
                    break;
                case Requests.Tournament.TournamentType.ProgressiveRush:
                    flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_PROGRESSIVE_RUSH;
                    _tournamentDescription.text = StringTable.Instance.GetEntry(CategoryTournament.ProgressiveRushTournamentDescription);
                    break;
                case Requests.Tournament.TournamentType.SuperRewardsLimitedEntry:
                    flavorTypeResource = TournamentTile.FLAVOR_RESOURCE_SUPER_REWARDS;
                    _tournamentDescription.text = StringTable.Instance.GetEntry(CategoryTournament.SuperRewardsTournamentDescription);
                    break;
            }

            LayoutRebuilder.ForceRebuildLayoutImmediate(_tournamentDescription.rectTransform); //This forces the layout to adjust to the size of the text

            if (!string.IsNullOrEmpty(flavorTypeResource))
            {
                _flavorIcon = GameObjectPoolManager.Instance.GetObject<PooledGameObject>(flavorTypeResource);
                _flavorIcon.transform.SetParent(_tournamentFlavorAnchor, false);
            }

            _feeAmount = detailsData.fee;
            _numPlayers.text = detailsData.numPlayers.ToString();

            string feeText = detailsData.fee.ToString("C");

            if (detailsData.fee == 0)
                feeText = FREE_LABEL;

            _fee.text = feeText;
            _playNowFee.text = feeText;
            _purseAmount = detailsData.totalPrizePool;
            _totalPrizePool.text = _purseAmount.ToString("C");
            if (_purseAmount == 0)
                _totalPrizePool.text = "NO PRIZE";

            _rewardsPoints.text = detailsData.rewardsPointsBase.ToString();

            ClearChildrenObjects(_prizePoolList);

            List<RankSetPrize> details = GroupPrizesByRank(detailsData.prizes);
            for (int i = 0; i < details.Count; i++)
            {
                RankSetPrize rp = details[i];

                PrizePoolTile prizePoolItem = GameObjectPoolManager.Instance.GetObject<PrizePoolTile>(_prizePoolItemTemplate);
                prizePoolItem.transform.SetParent(_prizePoolList, false);
                prizePoolItem.SetPrizeData(rp.rank, rp.prize); // pass in data
                prizePoolItem.SetGameTheme(_gameResource);
            }
        }

        void UpdateProgressBar(float progress)
        {
            float barPos = _barStartOffSet * progress;

            _scratchVector = _progressBar.transform.localPosition;
            _scratchVector.x = barPos;
            _progressBar.transform.localPosition = _scratchVector;
        }

        private List<RankSetPrize> GroupPrizesByRank(List<decimal> prizes)
        {
            List<RankSetPrize> returnValue = new List<RankSetPrize>();

            decimal currentPrizeValue = 0;
            int firstRankInGroup = -1;
            for (int i = 0; i < prizes.Count; i++)
            {
                decimal prizeValue = prizes[i];
                if (prizeValue == currentPrizeValue)
                    continue;
                
                if (firstRankInGroup != -1)
                {
                    returnValue.Add(GetRankSetPrize(currentPrizeValue, firstRankInGroup, i - 1));
                }

                // we have a new rank group
                currentPrizeValue = prizeValue;
                firstRankInGroup = i;
            }

            // add the last item in the list
            returnValue.Add(GetRankSetPrize(currentPrizeValue, firstRankInGroup, prizes.Count - 1));

            return returnValue;
        }

        private RankSetPrize GetRankSetPrize(decimal currentPrizeValue, int firstRankInGroup, int lastRankInGroup)
        {
            RankSetPrize rp;
            rp.prize = currentPrizeValue;

            // set first rank in group
            rp.rank = (firstRankInGroup + 1).ToOrdinal();

            // set last rank in group if there is one
            if (firstRankInGroup != lastRankInGroup)
                rp.rank += "-" + (lastRankInGroup + 1).ToOrdinal();

            return rp;
        }

        void SetTheme()
        {
            for (int i = 0; i < _themedText.Length; i++)
            {
                _themedText[i].color = _gameResource.textColor;
            }

            _backgroundTint.color = _gameResource.tournamentFooterColor;
        }

        void OnCloseButton()
        {
            OnHide();
        }

        private void OnTournamentEnterButton()
        {
            controller.TournamentSignup(_flavorID, _flavorTypeID, _gameID, _feeAmount, _purseAmount);
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