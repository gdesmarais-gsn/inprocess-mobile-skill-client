using UnityEngine;
using GSN.Skill.Games.Common.Client;

namespace GSN.Skill.Games.Tripeaks
{
	internal class TriPeaksAnalytics :  GameAnalyticSender
	{
		public TriPeaksAnalytics ()
			:base(Debug.Log)
		{
		}

		public static new TriPeaksAnalytics instance 
		{ 
			get 
			{ 
				return (TriPeaksAnalytics)GameAnalyticSender.instance; 
			} 
		}

		private void ConstructEndStats( int timeRemaining, int scoreBase, int scoreStreak, int scoreTime)
		{
			_additionalData.Clear ();
			_additionalData["TimeRemaining"] = timeRemaining;
			_additionalData["ScoreBase"] = scoreBase;
			_additionalData["ScoreStreak"] = scoreStreak;
			_additionalData["ScoreTime"] = scoreTime;
		}

		protected override string getEndGameReason(int reason)
		{
			switch (reason) 
			{
				case (int)GameModel.EndGameReason.BOMB_EXPLODED:
					return "BombExploded";
				case (int)GameModel.EndGameReason.NO_MORE_MOVES:	
					return "NoMoreMoves";
				// this overrides the base as we want different information logged for tp.
				case (int)GameModel.BaseEndGameReason.NORMAL:
					return "BoardCleared";
				default:
					return base.getEndGameReason(reason);
			}
		}

		public void ReportLevelEnd(int levelID, int endReason, int totalScore, int timeRemaining, int scoreBase, int scoreStreak, int scoreTime, int scoreTotal)
		{
			ConstructEndStats (timeRemaining, scoreBase, scoreStreak, scoreTime);
			_additionalData ["LevelID"] = levelID;
			// Changed this to 0, because the back end is adding up all the scores. So this was doubling when report end game triggered
			SendLevelEnd(endReason , 0, _additionalData);
		}

		public void ReportGameEnd(int endReason, int totalScore, int timeRemaining, int scoreBase, int scoreStreak, int scoreTime, int scoreTotal)
		{
			ConstructEndStats (timeRemaining, scoreBase, scoreStreak, scoreTime);
			SendGameEnd(endReason , totalScore, _additionalData);
		}

		public void ReportTutorialView(string tutorialID, int step)
		{
			SendCheckpoint ("tutorial", tutorialID, step);
		}

		public void ReportCardCollected(int streakLevel)
		{
			_additionalData.Clear();
			_additionalData ["streakLevel"] = streakLevel;
			SendGameplayEvent ("CardCollected", _additionalData);
		}

		public void ReportCardDrawn(bool missedCards)
		{
			_additionalData.Clear();
			_additionalData ["missedCards"] = missedCards;
			SendGameplayEvent ("CardDrawn", _additionalData);
		}

		public void ReportWildUsed()
		{
			SendGameplayEvent ("WildUsed");
		}

		public void ReportHoldCellUsed(bool added)
		{
			_additionalData.Clear();
			_additionalData ["holdAction"] = added?"added":"removed";
			SendGameplayEvent ("HoldCellUsed", _additionalData);
		}

		public void ReportReshuffleActivatedUsed(int timeRemaining)
		{
			_additionalData.Clear();
			_additionalData["TimeRemaining"] = timeRemaining;
			SendGameplayEvent ("ReshuffleActivated", _additionalData);
		}
	}
}
