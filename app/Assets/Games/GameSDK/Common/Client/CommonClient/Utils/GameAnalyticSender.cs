using System;
using System.Collections.Generic;
using Newtonsoft.Json;

namespace GSN.Skill.Games.Common.Client
{
	using SendAnalyticFunc = Action<string, Dictionary<string, object>>;
	using Analytic = Dictionary<string, object>;
	using GSN.Skill.Games.Common.Client.Audio;
	using GSN.Skill.Games.Common.Model;

	public class GameAnalyticSender : AnalyticSender
    {
		// scratch dictionaries for storing analytic data
		private Analytic _analyticData = new Analytic();
		protected Analytic _additionalData = new Analytic();

		// analytic event type names
		private const string GAME_PLAY_EVENT = "gameplay";
		private const string GAME_START_EVENT = "gameStart";
		private const string GAME_END_EVENT = "gameEnd";
		private const string LEVEL_START_EVENT = "levelStart";
		private const string LEVEL_END_EVENT = "levelEnd";
		private const string TAB_NAVIGATION_EVENT = "tabNavigation";
		private const string USER_GAME_SETTINGS_EVENT = "userGameSettings";
		private const string CHECKPOINT_EVENT = "checkpoint";
		private const string STARTSCREENLOAD_EVENT = "startScreenLoad";
		private const string STARTSCREENEXIT_EVENT = "startScreenExit";

		public static new GameAnalyticSender instance 
		{ 
			get 
			{ 
				return (GameAnalyticSender) AnalyticSender.instance; 
			} 
		}

		public GameAnalyticSender (Action<string> logFunction = null)
			:base(logFunction)
        {
        }

		/// <summary>
		/// 
		/// </summary>
		/// <param name="tabID">TabSelectedTabID (Tips, Details, Settings)</param>
		public void SendTabSelected(string from, string to, Analytic other = null)
		{
			_analyticData.Clear();
			_analyticData["from"] = from;
			_analyticData["to"] = to;
			
			
			SendAnalytic(TAB_NAVIGATION_EVENT, _analyticData, other);
		}
		
		public void SendUserGameSettings(string type, string from, string to, Analytic other = null)
		{
			_analyticData.Clear();
			_analyticData ["type"] = type;
			_analyticData["from"] = from;
			_analyticData["to"] = to;
			
			
			SendAnalytic(USER_GAME_SETTINGS_EVENT, _analyticData, other);
		}
		
		/// <summary>
		/// 
		/// </summary>
		/// <param name="controlSetting">LevelStartControlSetting (SmartControls, SwipeControls)</param>
		/// <param name="soundSetting">LevelStartSoundSetting (On, Off)</param>
		/// <param name="musicSetting">LevelStartMusicSetting (On, Off)</param>
		/// <param name="backgroundID"></param>
		public void SendLevelStart(int levelID, Analytic other = null)
		{
			_analyticData.Clear();
			_analyticData["LevelID"] = levelID;
			
			SendAnalytic(LEVEL_START_EVENT, _analyticData, other);
		}
		
		public void SendStartScreenLoad(Analytic other = null)
		{
			_analyticData.Clear();
			
			SendAnalytic(STARTSCREENLOAD_EVENT, _analyticData, other);
		}
		
		public void SendStartScreenExit(Analytic other = null)
		{
			_analyticData.Clear();
			
			SendAnalytic(STARTSCREENEXIT_EVENT, _analyticData, other);
		}
		
		public void SendGameStart(string reason, Analytic other = null)
		{
			bool musicOn = AudioFactory.instance.ChannelIsEnabled(SoundChannels.CHAN_MUSIC);
			bool sfxOn = AudioFactory.instance.ChannelIsEnabled(SoundChannels.CHAN_SFX);
			
			_analyticData.Clear();
			_analyticData["SoundSetting"] = (sfxOn?"on":"off");
			_analyticData["MusicSetting"] = (musicOn?"on":"off");
			_analyticData["reason"] = reason;
			
			SendAnalytic(GAME_START_EVENT, _analyticData, other);
		}

		public void SendLevelEnd(int endReason, int totalScore, Analytic other = null)
		{
			_analyticData.Clear();
			_analyticData ["reason"] = getLevelEndReason(endReason);
			_analyticData["TotalScore"] = totalScore;

			SendAnalytic(LEVEL_END_EVENT, _analyticData, other);
		}

		public void SendGameEnd(int endReason, int totalScore, Analytic other = null)
		{
			_analyticData.Clear();
			_analyticData["reason"] = getEndGameReason (endReason);
			_analyticData["TotalScore"] = totalScore;
			
			SendAnalytic(GAME_END_EVENT, _analyticData, other);
		}

		protected virtual string getLevelEndReason (int reason)
		{
			return getEndGameReason (reason);
		}

		protected virtual string getEndGameReason(int reason)
		{
			switch (reason) 
			{
				case (int)GameModelBase.BaseEndGameReason.TIMEOUT:
					return "TimeUp";
				case (int)GameModelBase.BaseEndGameReason.EARLY_EXIT:
					return "EarlyExit";
				case (int)GameModelBase.BaseEndGameReason.NORMAL:
					return "NormalEnd";
				default:
					return "unknownReason";
			}
		}

		/// <summary>
		/// 
		/// </summary>
		/// <param name="tutorialID"></param>
		/// <param name="step"></param>
		public void SendCheckpoint(string category, string subcategory, int step, Analytic other =null)
		{
			_analyticData.Clear();
			_analyticData["category"] = category;
			_analyticData["subcategory"] = subcategory;
			_analyticData ["sequenceid"] = step;
			
			SendAnalytic(CHECKPOINT_EVENT, _analyticData, other);
		}

		public void SendGameplayEvent(string subtype, Analytic other = null)
		{
			_analyticData.Clear();
			_analyticData ["subtype"] = subtype;

			SendAnalytic(GAME_PLAY_EVENT, _analyticData, other);
		}
    }

	// For backwards compatibility
	[System.Obsolete("Do not use any more. Use GameAnalyticSender")]
	public class BaseAnalytics<T> : GameAnalyticSender where T : new()
	{
		static T _instance;
		static new public T instance
		{
			get
			{
				if (_instance == null)
					_instance = new T ();
				return _instance;
			}
		}
		public BaseAnalytics(Action<string> logFunction = null)
			:base(logFunction)
		{

		}
		public void ReportGameStart(string reason, Analytic other = null)
		{
			SendGameStart (reason, other);
		}

		public void ReportCheckpoint(string category, string subcategory, int step, Analytic other =null)
		{
			SendCheckpoint (category, subcategory, step, other);
		}

		public void ReportGameEnd(int endReason, int totalScore, Analytic other = null)
		{
			SendGameEnd (endReason, totalScore, other);
		}

		public void ReportStartScreenLoad(Analytic other = null)
		{
			SendStartScreenLoad (other);
		}
			
		public void ReportStartScreenExit(Analytic other = null)
		{
			SendStartScreenExit (other);
		}

		public void ReportLevelStart(int levelID, Analytic other = null)
		{
			SendLevelStart (levelID, other);
		}

		public void ReportLevelEnd(int endReason, int totalScore, Analytic other = null)
		{
			SendLevelEnd (endReason, totalScore, other);
		}

		public void ReportGameplayEvvent(string subtype, Analytic other = null)
		{
			SendGameplayEvent (subtype, other);
		}

		public void ReportUserGameSettings(string type, string from, string to, Analytic other = null)
		{
			SendUserGameSettings (type, from, to, other);
		}

		public void ReportTabSelected(string from, string to, Analytic other = null)
		{
			SendTabSelected (from, to, other);
		}
	}
}

