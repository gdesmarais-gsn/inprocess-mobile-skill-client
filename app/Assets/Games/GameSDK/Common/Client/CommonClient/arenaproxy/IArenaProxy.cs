using System.Collections.Generic;
using System;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common {

	public interface IArenaProxy {

		void SetClientScore(int score);

		bool ValidationIsEnabled {
			get;
		}

		ITournamentSessionData TournamentSessionData
		{
			get;
		}


		IGameSession gameSession { get; set; }

		Action ReturnFromGameAction { set; }
		void ReturnFromGame();

		void SendEvent(string eventName, Dictionary<string, object> data);
	} 
}



