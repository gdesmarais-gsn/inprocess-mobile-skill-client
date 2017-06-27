using System.Collections.Generic;

namespace GSN.Skill.Games.Common
{
	public interface ITournamentSessionData
	{
		// tourn seed
		string TournamentSeed {
			get;
		}

		// tourn instance id
		string TournamentInstanceId {
			get;
		}

		// game name
		string GameName {
			get;
		}

		string TournamentFlavorName {
			get;
		}

		Dictionary<string, string> Strings {
			get;
		}

		IPrizeData[] Prizes { 
			get; 
		}


		decimal Fee { get; }
		int Players { get; }
		string Mode { get; }
		string Level { get; }

		// This is a score for a tournament that was computed by the client, it
		// was not validated.  This can be used by game code to allow the container
		// to get an idea of what the score is without waiting for the server in 
		// the event it wants to do that.
		int ClientCalculatedScore { get; set; }
	}
}

