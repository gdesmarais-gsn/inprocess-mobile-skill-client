using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client.Session
{
	// this Job is responsible for getting a game validated.
	// it's a really simple Job. But the main reason it exists as a job is that we want to start it in one place,
	// and wait for it to finish in another place. Jobs are great for that.
	class ValidateJob : Job {

		private GameSession gameSession;

		public ValidateJob(GameSession gameSession) {
			this.gameSession = gameSession;
		}

		protected override void CustomStart() {
			// this is all we do!
			gameSession.Validate(() => {

				Failed = !gameSession.Success;

			//	gameSession.WriteGameLogToFile("/Users/jpaquette/Documents/2015/gitStuff/arena-game-common/Utils/GLDump/bin/Debug/foo.bin");

				Finish();

			});
		}

		protected override void CustomAbort() {
			gameSession.AbortValidate();

		}

		protected override void CustomReset(bool hard) {
			// nothing yet.
		}
	}
}
