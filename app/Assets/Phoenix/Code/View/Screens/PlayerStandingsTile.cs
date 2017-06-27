﻿﻿﻿﻿using UnityEngine;
using UnityEngine.UI;
using TMPro;
using GSN.Skill.Utils;
using System.Collections;
using System;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.View
{
	public class PlayerStandingsTile : BaseView
	{

		[SerializeField]
		private TextMeshProUGUI _userName;
		[SerializeField]
		private TextMeshProUGUI _prizeWon;
		[SerializeField]
		private TextMeshProUGUI _score;
		[SerializeField]
		private TextMeshProUGUI _rank;
		[SerializeField]
		private Image _rankSprites;
		[SerializeField]
		private GameObject _winItNowPanel;
		[SerializeField]
		private Button _winItNowButton;
		[SerializeField]
		private Button _declineWinItNowButton;
		[SerializeField]
		private TextMeshProUGUI _winItNowFee;
		[SerializeField]
		private TextMeshProUGUI _winItNowPayout;
		[SerializeField]
		private TextMeshProUGUI _winItNowTime;

		[SerializeField]
		private Sprite[] _rankImages = new Sprite[4];

		[SerializeField]
		private RectTransform _scoreBar;

        [SerializeField]
        private AnimationCurve _rocketEase;

        [SerializeField]
        private Animator _animScorebar;
        [SerializeField]
        private Animator _animScorePop;
        [SerializeField]
        private Animator _animProfileShake;
        [SerializeField]
        private Animator _animProfileGlow;
        [SerializeField]
        private Animator _animRankStamp;
        [SerializeField]
        private Animator _animScorebarFlash;
        [SerializeField]
        private Animator _animPrize;

        //QUESTION: Will MIN_SCOREBAR tween to MIN_SCOREBAR_ANIMATED? All animations should start from their zero length (MIN_SCOREBAR) with their minimum end length being MIN_SCOREBAR_ANIMATED
        //Currently it looks like scorebar animation starts from MIN_SCOREBAR_ANIMATED
        private const float MIN_SCOREBAR = 185f;
        private const float MIN_SCOREBAR_ANIMATED = 225f;
        private const float MIN_SCOREBAR_ANIMATED_PRIZED = 325f;
		private const float MAX_SCOREBAR = 590f;
		private const float IDLE_SCOREBAR = 400f;

        private const string SCOREBAR_RANK1 = "Rank_1";
        private const string SCOREBAR_RANK2 = "Rank_2";
        private const string SCOREBAR_RANK3 = "Rank_3";
        private const string SCOREBAR_RANK1_END = "Rank_1_End";
        private const string SCOREBAR_RANK2_END = "Rank_2_End";
        private const string SCOREBAR_RANK3_END = "Rank_3_End";
        private const string SCOREBAR_RANK_OTHER = "Rank_Other";
        private const string SCOREBAR_RANK_OTHER_END = "Rank_Other_End";
        private const string SCORE_POP = "ANIMATION";
        private const string PROFILE_SHAKE = "ANIMATION";
        private const string PROFILE_GLOW = "ANIMATION";
        private const string RANK_STAMP = "ANIMATION1";
        private const string RANK_STAMP_END = "ANIMATION2";
        private const string SCOREBAR_FLASH = "ANIMATION";
        private const string FIRST_PRIZE_SLIDE_IN = "Prize_Rank_1";
        private const string FIRST_PRIZE_SLIDE_IN_END = "Prize_Rank_1_End";
        private const string PRIZE_SLIDE_IN = "Prize_Rank_Other";
        private const string PRIZE_SLIDE_IN_END = "Prize_Rank_Other_End";

        public const float BAR_TWEEN_TIME = 1.5f;
        public const float ROCKET_TWEEN_TIME = .5f;
        public const float MOVE_DOWN_TWEEN_TIME = .25f;

		private GetTournResultsSuccessEvent.Player _playerData;

        public bool canWinitNow = false;
        public bool _tournamentIsClosed = false;

		public TournamentResultsPopupView tournamentResultsPopup;

		public GetTournResultsSuccessEvent.Player PlayerData
		{
			get { return _playerData; }
		}

		void OnEnable()
		{
			if (_winItNowButton != null)
				_winItNowButton.onClick.AddListener(OnWinItNowClick);

            if (_declineWinItNowButton != null)
                _declineWinItNowButton.onClick.AddListener(OnDeclineWinItNowClick);

			Vector2 delta = _scoreBar.sizeDelta;
			delta.x = MIN_SCOREBAR;
			_scoreBar.sizeDelta = delta;
		}

		void OnDisable()
		{
			if (_winItNowButton != null)
				_winItNowButton.onClick.RemoveListener(OnWinItNowClick);

			if (_declineWinItNowButton != null)
				_declineWinItNowButton.onClick.RemoveListener(OnDeclineWinItNowClick);
		}

		public void SetPlayerData(GetTournResultsSuccessEvent.TournResultData resultData, GetTournResultsSuccessEvent.Player playerData)
		{
			_playerData = playerData;

			this.canWinitNow = resultData.canWinItNow;

			_tournamentIsClosed = resultData.history.state != Requests.Tournament.GameHistoryData.TournamentState.InProgress;

			_userName.text = _playerData.username;

			// default score text to 0
			_score.text = "0";

			_prizeWon.text = (_playerData.amountWon > 0) ? "<sup>$</sup>" + _playerData.amountWon.ToString("F2") : string.Empty;

			if (_winItNowPanel != null)
			{
				// this user is the main user! setup potential data
				_winItNowFee.text = resultData.winItNowCost.ToString("C");

				decimal winItNowPayout = resultData.history.totalPrizePool - resultData.winItNowCost;
				_winItNowPayout.text = "<sup>$</sup>" + winItNowPayout.ToString("F2");

				if (resultData.canWinItNow)
				{
					// TODO: Check when is the best time to trigger this
					StartCoroutine(CountDownWinItNow(resultData.winItNowRemainingSeconds));
				}
			}

			_rankSprites.gameObject.SetActive(true);

			if (_playerData.place != null)
			{
				int place = (int)_playerData.place - 1;
				if (place < 3)
				{
					_rankSprites.sprite = _rankImages[place];
					_rank.text = "";
				}
				else
				{
					_rankSprites.sprite = _rankImages[3];
					_rank.text = ((int)_playerData.place).ToOrdinal(); ;
				}
			}
			else
			{
				_rank.text = "--";

				if (_playerData.stillPlaying)
				{
					_rank.text = "";
					_rankSprites.gameObject.SetActive(false);
					_score.text = StringTable.Instance.GetEntry(CategoryTournamentResults.Playing);
				}

				if (_playerData.notStarted)
				{
					_rank.text = "";
					_rankSprites.gameObject.SetActive(false);
					_score.text = StringTable.Instance.GetEntry(CategoryTournamentResults.NotStarted);
				}
			}
		}

		public void AnimateScoreBar(int lowestScore, int highestScore)
		{
			float scorePercent = 1;
			if (highestScore != lowestScore)
                scorePercent = ((float)(_playerData.score - lowestScore)) / ((float)(highestScore - lowestScore));

            scorePercent = CheckMinScorePercent(scorePercent);

            float totalDuration = BAR_TWEEN_TIME * scorePercent;

			LeanTween.value(this.gameObject, OnBarUpdate, 0, scorePercent, totalDuration).setEase(LeanTweenType.linear).setOnComplete(AnimateBarEnd);
			LeanTween.value(this.gameObject, OnScoreUpdate, 0, _playerData.score, totalDuration);

            if (_animScorebar != null)
            {
                _animScorebar.Play(SCOREBAR_RANK1);

                if (_playerData.place == 1)
                    _animScorebar.Play(SCOREBAR_RANK1);
                else if (_playerData.place == 2)
                    _animScorebar.Play(SCOREBAR_RANK2);
                else if (_playerData.place == 3)
                    _animScorebar.Play(SCOREBAR_RANK3);
                else
                    _animScorebar.Play(SCOREBAR_RANK_OTHER);
            }
		}

        public void SkipAnimateScoreBar(int lowestScore, int highestScore)
        {
            float scorePercent = 1;
            if (highestScore != lowestScore)
                scorePercent = ((float)(_playerData.score - lowestScore)) / ((float)(highestScore - lowestScore));

            scorePercent = CheckMinScorePercent(scorePercent);

            float maxBar = MAX_SCOREBAR;
            float minBar = MIN_SCOREBAR;
            if (!_tournamentIsClosed)
                maxBar = IDLE_SCOREBAR;

            Vector2 delta = _scoreBar.sizeDelta;
            delta.x = (maxBar - minBar) * scorePercent + minBar;
            _scoreBar.sizeDelta = delta;

            if (_animScorebar != null)
            {
                _animScorebar.Play(SCOREBAR_RANK1_END);

                if (_playerData.place == 1)
                    _animScorebar.Play(SCOREBAR_RANK1_END);
                else if (_playerData.place == 2)
                    _animScorebar.Play(SCOREBAR_RANK2_END);
                else if (_playerData.place == 3)
                    _animScorebar.Play(SCOREBAR_RANK3_END);
                else
                    _animScorebar.Play(SCOREBAR_RANK_OTHER_END);
            }

			// skip score to end value only if the score is a legitimate value
			if (_score.text != StringTable.Instance.GetEntry(CategoryTournamentResults.Playing) &&
			    _score.text != StringTable.Instance.GetEntry(CategoryTournamentResults.NotStarted))
				_score.text = _playerData.score.ToString();
        }

        private float CheckMinScorePercent(float scorePercent)
        {
            float minAnimatedPercent = (MIN_SCOREBAR_ANIMATED - MIN_SCOREBAR) / (MAX_SCOREBAR - MIN_SCOREBAR);

            float minAnimatedPrizedPercent = (MIN_SCOREBAR_ANIMATED_PRIZED - MIN_SCOREBAR) / (MAX_SCOREBAR - MIN_SCOREBAR);

            // Ensure players that have score above zero have a slightly longer bar so text doesnt overlap
            if (_playerData.score > 0 && scorePercent < minAnimatedPercent)
                scorePercent = minAnimatedPercent;

            // Ensure prized players have a slightly longer bar so text doesnt overlap prize
            if (_playerData.amountWon > 0 && scorePercent < minAnimatedPrizedPercent)
                scorePercent = minAnimatedPrizedPercent;

            return scorePercent;
        }

        private void OnBarUpdate(float val)
		{
            float maxBar = MAX_SCOREBAR;
            float minBar = MIN_SCOREBAR;
            if (!_tournamentIsClosed)
                maxBar = IDLE_SCOREBAR;

			Vector2 delta = _scoreBar.sizeDelta;
			delta.x = (maxBar - minBar) * val + minBar;
			_scoreBar.sizeDelta = delta;
		}


		public void AnimateScoreBarWinItNow()
		{
			float scorePercent = 1;

			float totalDuration = BAR_TWEEN_TIME * scorePercent;

			LeanTween.value(this.gameObject, OnBarUpdateWinItNow, _scoreBar.sizeDelta.x, scorePercent, totalDuration).setEase(LeanTweenType.linear).setOnComplete(AnimateBarEnd);
            _animScorebar.Play(SCOREBAR_RANK1);
		}

		private void OnBarUpdateWinItNow(float val)
		{
			float maxBar = MAX_SCOREBAR;

			Vector2 delta = _scoreBar.sizeDelta;
			delta.x = maxBar* val;
			_scoreBar.sizeDelta = delta;
		}

		private void OnScoreUpdate(float val)
		{
			if (!_playerData.stillPlaying && !_playerData.notStarted)
			{
				_score.text = ((int)val).ToString();
			}
		}

		private void AnimateBarEnd()
		{
            if (_animProfileShake != null)
                _animProfileShake.Play(PROFILE_SHAKE);
		}

        public void AnimateRankStampIn()
        {
            if (_tournamentIsClosed)
            {
                if (_animRankStamp != null)
                    _animRankStamp.Play(RANK_STAMP);
            }
		}

        public void SkipAnimateRankStampIn()
        {
            if (_tournamentIsClosed)
            {
                if (_animRankStamp != null)
                    _animRankStamp.Play(RANK_STAMP_END);
            }
        }

        public void AnimatePrizeSlideIn()
		{
            if (_tournamentIsClosed && _playerData.amountWon > 0)
            {
                if (_animPrize != null)
                {
                    if (_playerData.place == 1)
                        _animPrize.Play(FIRST_PRIZE_SLIDE_IN);
                    else
                        _animPrize.Play(PRIZE_SLIDE_IN);
                }
            }
		}

        public void SkipAnimatePrizeSlideIn()
        {
            if (_tournamentIsClosed && _playerData.amountWon > 0)
            {
                if (_animPrize != null)
                {
                    if (_playerData.place == 1)
                        _animPrize.Play(FIRST_PRIZE_SLIDE_IN_END);
                    else
                        _animPrize.Play(PRIZE_SLIDE_IN_END);
                }
            }
        }

        public void AnimatePlayerRocket(int yPos)
        {
            StartCoroutine(PlayerRocket(yPos));
		}

        public void AnimatePlayerDown(int height)
        {
            LeanTween.value(this.gameObject, OnMoveDown, this.transform.localPosition.y, this.transform.localPosition.y -height, MOVE_DOWN_TWEEN_TIME).setEase(LeanTweenType.easeOutQuad);
        }

        public void AnimateExpandWinItNow()
        {
            //TODO: Add animation trigger for win it now and re-entry states
            _winItNowPanel.SetActive(true);
        }

		public void AnimateCollapseWinItNow()
		{
			//TODO: Add animation trigger for win it now and re-entry states
			_winItNowPanel.SetActive(false);
		}

        public void SkipAnimateExpandWinItNow()
        {
            _winItNowPanel.SetActive(true);
        }

        IEnumerator PlayerRocket(int yPos)
        {
			//TODO: Add animation trigger for playing rocket animation state
            LeanTween.value(this.gameObject, OnRocketUpdate, this.transform.localPosition.y, yPos, ROCKET_TWEEN_TIME).setEase(_rocketEase);
			yield return new WaitForSeconds(ROCKET_TWEEN_TIME);
            if (_tournamentIsClosed)
            {
                if (_animScorebarFlash != null)
                    _animScorebarFlash.Play(SCOREBAR_FLASH);

                yield return new WaitForSeconds(.1f);
                if (_animScorePop != null)
                    _animScorePop.Play(SCORE_POP);
            }
		}

        public void SkipPlayerRocket(int yPos)
        {
            Vector3 newPos = this.transform.localPosition;
            newPos.y = yPos;
            this.transform.localPosition = newPos;
        }

        public void SkipMoveDown(float height)
        {
            Vector3 newPos = this.transform.localPosition;
            newPos.y -= height;
            this.transform.localPosition = newPos;
        }

        private void OnRocketUpdate(float val)
		{
            Vector3 newPos = this.transform.localPosition;
            newPos.y = val;
            this.transform.localPosition = newPos;
		}

        private void OnMoveDown(float val)
        {
			Vector3 newPos = this.transform.localPosition;
			newPos.y = val;
			this.transform.localPosition = newPos;
        }

		IEnumerator CountDownWinItNow(int seconds)
		{
            TimeSpan time;
			while (seconds > 0)
			{
                time = TimeSpan.FromSeconds(seconds);
                string t = String.Format("{0:D1}:{1:D2}", time.Minutes, time.Seconds);
                _winItNowTime.text = StringTable.Instance.GetEntry(CategoryTournamentResults.WinItNowCountdown, t);
				yield return new WaitForSeconds(1f);
				seconds--;
			}

            //After countdown, disable win it now panel
            if (_winItNowPanel != null)
            {
                _winItNowPanel.SetActive(false);
                tournamentResultsPopup.OnDeclineWinItNow();
            }
		}

		private void OnWinItNowClick()
		{
			tournamentResultsPopup.OnWinItNow();
		}

		private void OnDeclineWinItNowClick()
		{
            tournamentResultsPopup.OnDeclineWinItNow();
		}
	}
}