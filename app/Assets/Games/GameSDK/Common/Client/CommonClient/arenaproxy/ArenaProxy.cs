using System.Collections.Generic;
using System;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common
 {

	// this class is how higher-level code can give us their WebLogger to use.
	public class ArenaProxy 
    {
		private static IArenaProxy _instance;

		// this is the fall-back mock if they do't call SetInstance
		private class MockArenaProxy : IArenaProxy
        {
            MockTournamentSessionData _mockTournamentSessionData;
			public void SetClientScore(int score)  {}

			public bool ValidationIsEnabled 
            {
				get {
					return false;
				}
			}

            public ITournamentSessionData TournamentSessionData
            {
                get
                {
                    if (_mockTournamentSessionData == null)
                        _mockTournamentSessionData = new MockTournamentSessionData();
                    return _mockTournamentSessionData;
                }
            }

            public void SendEvent(string eventName, Dictionary<string, object> data) {} 

			IGameSession _gameSession;
			public IGameSession gameSession 
			{ 
				get
				{
					return _gameSession;
				}
				set
				{
					_gameSession = value;
				}
			}

			IDataSafe _dataSafe;
			public IDataSafe dataSafe 
			{ 
				get
				{
					return _dataSafe;
				}
				set
				{
					_dataSafe = value;
				}
			}

			Action _returnFromGame;
			public Action ReturnFromGameAction 
			{
				set
				{
					_returnFromGame = value;
				}
			}

			public void ReturnFromGame()
			{

				if (_returnFromGame != null)
					_returnFromGame ();
			}
		}

		// the getter of the instance.
		public static IArenaProxy instance {
			get {

				if (_instance == null) {
					_instance = new MockArenaProxy(); // A mock will do.
				}

				return _instance;
			}
		}

		// the setter of the instance. No I didn't want to make setting the instance as easy as getting it.
		public static void SetInstance (IArenaProxy i) {
			_instance = i;
		}
	} 
}



