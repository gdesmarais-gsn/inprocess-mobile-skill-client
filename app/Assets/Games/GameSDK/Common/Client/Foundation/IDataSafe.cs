using System;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils
{

	// The IDataSafe object is responsible for recording its responses in the GameSession.
	public interface IDataSafe {

		/*

			A MockDataSafe will fetch data locally.
			A GameSession (qua IDataSafe) will fetch data over the Internet.
			A ReplayDataSafe will fetch data from the data history.

		*/

		void FetchData(Dictionary<string, string> request, Action<Dictionary<string, string> > doneAction);
	}
}