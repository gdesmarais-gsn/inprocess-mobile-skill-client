using System.Collections.Generic;
using System;
using System.Text;
using System.Net;
using System.IO;
using MsgPack.Serialization;
using Newtonsoft.Json;
using GSN.Skill.Games.Common.Utils.WebLogging;
using GSN.Skill.TriPeaks.Requests.Game;
using GSN.Skill.Requests;

namespace GSN.Skill.Games.Common.Utils {


	/** 
		\brief The Notarizer takes notary hunks and notarizes them in the order received.

		The Notarizer processes the hunks in order, and finishes when it has processed all the hunks
		it has been given.

		You don't need to wait for it to finish before giving it more hunks to notarize. It queues them up.

		It restarts (continues the notarizing) if it is given a new hunk after it has finished.

	*/
	class Notarizer {

		private Queue<SecureHunk> inHunks; // where added hunks go before they are notarized.

		private List<SecureHunk> outHunks; // where notarized hunks end up.

		private OneHunkNotarizer oneHunkNotarizer; // that which does the notarizing work for us.

		private SecureHunk curHunk; // the hunk the OneHunkNotarizer is processing.

		private bool Failed;

		private int _notarizeOutstanding = 0;
		public int NotarizeOutstanding { 
			get {
				return _notarizeOutstanding;
			}
			//private set {
			//	_notarizeOutstanding = value;
			//}
		}

		static DateTime UnixStartTime = new DateTime(1970, 1, 1, 0, 0, 0, 0, System.DateTimeKind.Utc);

		// what time is it now?
		public static string UnixTimeStamp()
		{
			double diff = (TimeZoneInfo.ConvertTimeToUtc(DateTime.Now) - UnixStartTime).TotalSeconds;

			return ((uint)diff).ToString();
		}
		/// 
		public Notarizer(List<SecureHunk> outHunks_, string url, RequestWrapper.requestCustomizer customizeWrapper_, bool mocking_ = false) {
			inHunks = new Queue<SecureHunk>();
			outHunks = outHunks_;
			oneHunkNotarizer = new OneHunkNotarizer();
			curHunk = null;

			// Name = "Notarizer";

		}

		/// Give the Notarizer another hunk to notarize.
		public void AddHunk(SecureHunk hunk, Action<bool> doneAction = null) {

			inHunks.Enqueue(hunk);
			processHunksSync (doneAction);
		}

		public void processHunksSync(Action<bool> doneAction) {
			if (curHunk == null) {

				if (inHunks.Count == 0) {
					// there is nothing to do.
					doneAction(Failed);
				}

				curHunk = inHunks.Dequeue();

			}

			// we need to process curHunk

			oneHunkNotarizer.Setup(curHunk);

			_notarizeOutstanding++;
			oneHunkNotarizer.CustomStartSync((failed) => {
				if (failed) {
					_notarizeOutstanding--;
					/* TODO - replace this retry logic?
					if (_bullish) { // we went bullish after attempting a notarize which had a timeout. So when it fails, we just try some more.

						actionQueue.QueueAction(processHunks);
						return;
					}

					Failed = true;
					Finish();
					// note that curHunk is still non-null, just in case we want to retry.
					*/
					Failed = true;
					return;
				}

				#if DEBUG
				// hack it after we've notarized it.
				GameLog.HackHunk(curHunk);
				#endif

				outHunks.Add(curHunk);	// give the hunk to the output.

				curHunk = null;		// we are done with the hunk.

				_notarizeOutstanding--;

				// try to do more work.
				// TODO - do we need to do more work here?
				//actionQueue.QueueAction(processHunks);
				if (null != doneAction) doneAction(Failed);
			});

		}


		// copies unnotarized hunks into the ms
		public void GetUnnotarizedHunks(MemoryStream ms) {

			// curHunk, if non-null needs to be saved.
			if (curHunk != null) {

				ms.Write(GameLog.Serialize<SecureHunk>(curHunk));

			}

			Queue<SecureHunk> tempHunks = inHunks;

			inHunks = new Queue<SecureHunk>();

			// move the hunks back to inHunks, writing them to ms.
			while (tempHunks.Count != 0) {

				SecureHunk hunk = tempHunks.Dequeue();

				ms.Write(GameLog.Serialize<SecureHunk>(hunk));

				inHunks.Enqueue(hunk);

			}

		}

	}

	// This job notarizes a single hunk.
	class OneHunkNotarizer {

		private bool Failed;

		private SecureHunk hunk;		// the hunk we are working on.

		private RequestWrapper.requestCustomizer customizeWrapper; // for customizing requests.

		/// Constructor. Tell it the url for notarizing.
		public OneHunkNotarizer() {
		}

		/// Indicates what SecureHunk we'll work on, and what the prior hash was.
		public void Setup(SecureHunk hunk_) {
			hunk = hunk_;
		}

		public void CustomStartSync(Action<bool> doneAction) {
			TriPeaksNotaryRequestData notary = new TriPeaksNotaryRequestData ();
			notary.host = ArenaProxy.instance.gameSession.ValidationHost;
			// TODO - need to determine this token
			notary.SetTriPeaksNotaryData(hunk);
			Failed = false;
			notary.OnCompleteHandler += (request) => { 
				TriPeaksNotaryData.Result r2 = ((TriPeaksNotaryRequestData) request).Response.result;
				// TODO - consolidate error handling
				if (null == r2 || null == r2.hmac || null == r2.keyVersion || null == r2.timeStamp) {
					Failed = true;
				}
				else {
					hunk.hmac = r2.hmac;
					hunk.keyVersion = r2.keyVersion;
					hunk.timeStamp = r2.timeStamp;
				}
				doneAction(Failed);
			};
			WebRequester.Instance.FetchRequest(notary);
		}
	}
}
