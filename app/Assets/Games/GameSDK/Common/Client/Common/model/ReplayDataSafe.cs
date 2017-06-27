using System.Collections.Generic;
using System.IO;
using System.Linq;
using System;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Model {

	// this class is used for validation and replay. It gets its data from a game log.
	// more specifically, a dataHistoryHunk from a game log.
	public class ReplayDataSafe : IDataSafe {

		private MemoryStream dataStream;

		private ActionQueue actionQueue;

		uint startTimeStamp; // The time at which the game was started. A unix timestamp, from the start hunk.

		public int badTimingCount; // how many times we got a data request that didn't have proper timing.

		public ReplayDataSafe(SecureHunk dataHistoryHunk, ActionQueue actionQueue, uint startTimeStamp) {

			this.actionQueue = actionQueue; // the MovePlayer's actionQueue.

			this.startTimeStamp = startTimeStamp;

			dataStream = new MemoryStream();

			dataHistoryHunk.GetUncompressedBody(dataStream);

			dataStream.Seek(0, SeekOrigin.Begin); // set the history up for reading.

		}

		// This function fields datasafe requests by using the data from the dataHistoryHunk.
		public void FetchData(Dictionary<string, string> request, Action<Dictionary<string, string> > doneAction) {

			byte [] requestBytes = GameLog.Serialize(request); // get the bytes which would represent the request.

			byte [] storedBytes = new byte[requestBytes.Length]; // create a buffer the same length as the requestBytes.

			int bytesRead = dataStream.Read(storedBytes, 0, requestBytes.Length); // copy bytes out of the dataStream to fill storedBytes.

			if (bytesRead != requestBytes.Length) { // make sure we got all the bytes we want.
				throw new Exception("DataSafe read error");
			}

			Dictionary<string, string> response; // what we'll return the response in.

			if (requestBytes.SequenceEqual(storedBytes)) {

				// the stored request exactly matches the actual request. As it should.

				// fetch a dictionary out of the stream. This is the response for the foregoing request. 
				response = GameLog.Deserialize<Dictionary< string, string > >(dataStream);

				// get the _stateTime from the request, and the _timeStamp from the response.
				// _stateTime is in milliseconds. _timeStamp is in seconds.
				int stateTime = Int32.Parse(request["_stateTime"]); // the request should have a _stateTime in it.

				uint timeStamp = UInt32.Parse(response["_timeStamp"]); // the response should have a _timeStamp in it.

				// how far into the game the SERVER thinks the request is. This is plus or minus 1000ms, because
				// timeStamp is only accurate to the second, and we are subtracting two of those inaccurate
				// time values.
				int tsDiff = (int)((timeStamp - startTimeStamp) * 1000); 

				int offset = stateTime - tsDiff;

				// 
				if (offset < 0) {
					offset = -offset;
				}

				if (offset > 1500) // we can totally tolerate 1000ms of error. Above that, things get iffy.
					++badTimingCount;

				// note that this is NOT the globalActionQueue. It's the one in the MovePlayer.
				// we do this here to avoid making the stack get deep.
				actionQueue.QueueAction(() => {doneAction(response);});

			}
			else
			{
				throw new Exception("DataSafe read error");
			}
		}
	}
}