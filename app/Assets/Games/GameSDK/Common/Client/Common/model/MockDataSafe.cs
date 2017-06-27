using GSN.Skill.Games.Common.Utils;
using System;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Client.Session;

namespace GSN.Skill.Games.Common.Model {

	public class MockDataSafe : IDataSafe {

		private IDataSafePlugin gsPlugin; // where we'll really be getting data from. Game-specific.

		IGameSession gameSession; // where we'll be storing data history

		byte [] request; // the serialized request.

		Dictionary<string, string> response; // the unserialized response.

		Action<Dictionary<string, string> > doneAction; // where to send the response.

		// for simulating network delay.
		TimeoutDispatcher td = new TimeoutDispatcher(GlobalActionQueue.instance);

		public MockDataSafe(IDataSafePlugin gsPlugin, IGameSession gameSession){

			this.gameSession = gameSession;
			this.gsPlugin = gsPlugin;

		}

		// this is how the model requests data from the datasafe.
		public void FetchData(Dictionary<string, string> request, Action<Dictionary<string, string> > doneAction) {

			this.request = GameLog.Serialize(request); // remember the request.
			this.doneAction = doneAction; // remember what to do when done.

			// fetch data from the game-specific plugin
			gsPlugin.FetchData(request, handleDataResponse);

		}

		// Deal with data coming from game-specific plugin
		protected void handleDataResponse(Dictionary<string, string> response) {

			// hold onto the response so finish can use it.
			this.response = response;

			// put the data into the data history which is in the gamelog inside the gamesession.
			gameSession.AddData(request);
			gameSession.AddData(GameLog.Serialize<Dictionary<string, string>>(response));

			// time delay to emulate network latency.
			td.DispatchTimeout(750, finish);

		}

		private void finish() {
			doneAction(response); // dictionary is returned.
		}
	}
}
