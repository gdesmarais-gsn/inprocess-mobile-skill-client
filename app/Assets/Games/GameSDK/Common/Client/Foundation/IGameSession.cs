using System;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Client.Session;

namespace GSN.Skill.Games.Common.Utils
{
    public enum GameSessionExitMode
    {
        GameCompleteNormal,
        Tutorial,
        AbortAtStart,
        AbortAtStartPaused,        
        FailedToStart
    }
	public enum GameValidationResult 
	{
		ValidationSuccess,
		ValidationFailure
	}
    
	public interface IGameSession 
    {

		bool Success { get; }
		GameSessionBase.FailReasons FailReason { get; set; }
		string ValidationHost { get; set; }
		string WorldWinnerHost { get; set; }

		string AuthzToken { get; }

		int Timeout { get; set; }
		string Url {set;}
		string NotaryCompression {set; get;}
		GameValidationResult ValidationResult {set; get;}
        GameSessionExitMode ExitMode {set; get;}

        RequestWrapper ErrorRequestWrapper {get;}

		RequestWrapper.requestCustomizer customizeRequest {set;}
		void JoinTournament (GameSession.GameSetupOptions gameSetupOptions, Action doneAction);
			
		void StartGame (Action a);

		Job ValidateJob {
			get;
		}

		string TournamentId {
			get;
			set;
		}

		string GameId {
			get;
			set;
		}

		void WriteGameLogToFile(string name, bool text = false);

		Dictionary<string, string> JoinBody { get; }
		Dictionary<string, string> StartBody { get; }
		Dictionary<string, string> JoinRecord { get; }
		Dictionary<string, string> StartRecord { get; }

		int NotarizeOutstanding { get; }

		void AddRecord (string type, byte [] s, int time);
		void AddData(byte [] data);
		void Validate(Action doneAction);


		IDataSafe DataSafe {
			get;
		}
	}
}

