using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client.Session 
{
	/// Enum for the types of sessions we are going to have
	public enum SessionType
	{
		Mock,
		Replay,
		Real,
	}

	public class Factory
	{
		/// This function will take a \ref SessionType and create a session of that type.  It will also add it to this object as a child
		public static IGameSession CreateGameSession(SessionType type)
		{
			IGameSession gameSession = null;

			switch( type )
			{
				case SessionType.Replay:
					gameSession = new ReplayGameSession();
					break;
				case SessionType.Mock:
					gameSession = new MockGameSession();
					break;
				case SessionType.Real:
					gameSession = new GameSession();
					break;
			}

			return gameSession;
		}
	}
}
