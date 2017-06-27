#if false
#define REF_REASONS
#endif

using System.Text;
using System.Net;
using System;
using System.IO;
using System.Threading;

namespace GSN.Skill.Games.Common.Utils
{

/// The WebRequestDispatcher makes it easy to dispatch HttpWebRequests asynchronously, providing a completion callback (Action) that will run on the main thread.
	/**

	The WebRequestDispatcher does not require the use of coroutines.

	The WebRequestDispatcher makes use of the ActionQueue class, which is its means 
	of causing the provided completion Action to run on the main thread.

	The WebRequestDispatcher can be re-used, dispatching additional HttpWebRequests once prior ones have been completed.

	The completion Action is provided to the DispatchRequest() call, and will run on the main thread (by means of an ActionQueue).

	There is a default Timeout for each request made. The default value can be altered by setting Timeout before calling DispatchRequest().

	When calling DispatchRequest(), you can temporarily override the default value of the Timeout, for one request.

	The completion Action is called on both success and failure (or time-out) of the request. You must deal with both success and failure in the 
	completion Action.

	Success is indicated by a non-null value for \ref Response.

	Failure is indicated by a null value of \ref Response.

	Aborting an incomplete request will cause it to complete immediately, but _not synchronously_. The completion Action 
	will be called in the case of abort, indicating either success or failure.

	Aborting a request does not necessarily cause the request to fail. _It may still succeed_.

	Here is some sample code which uses a WebRequestDispatcher:

\code


		// This example code is from GameSession.cs, the JoinTournament() method. 
		// The method accepts a "doneAction" Action argument, which is to be performed
		// on completion of an attempt to join a tournament.
		//
		// In the doneAction Action, the GameSession can be examined to discover the 
		// results of the attempt to join a tournament.

		public void JoinTournament(string tid, ///< The tournament ID desired. 
			Action doneAction					///< Action to call when the request succeeds, fails, or times out.
			) {

			if (!Done) {
				throw new SystemException("not done");
			}

			Done = false; // JoinTournament now in progress

			// Clear the game log. 
			gameLog = new GameLog();
			notaryStartIndex = 0;
			
			JoinRecord = null;
			StartRecord = null;
			ValidationResponse = null;

			// The GameSession object acts a lot like a WebRequestDispatcher object. Just as WebRequestDispatcher.DispatchRequest() accepts 
			// a completion Action as an argument, GameSession.JoinTournament() accepts a completion Action as an argument.

			// Just as the WebRequestDispatcher can be inspected to discover the results of the request, the GameSession can be inspected 
			// to discover the results of the call to JoinTournament.

			// make and send a join request.
			Dictionary<string, string> joinDict = new Dictionary<string, string> ();

			joinDict ["tournamenttype"] = tid;  // set the tournament id

			string jstring = JsonConvert.SerializeObject(joinDict);

			WebRequest req = WebRequestDispatcher.CreateRequest (Url + "jointournament/", WebRequestDispatcher.StrToBytes(jstring));

			// make the request.
			wrd.DispatchRequest (req , () => {

				// note that this code is running in the main thread, so setting Done here won't have any effect on those polling
				// it until this callback routine completes.
				Done = true; 
				Success = wrd.Response != null; // if it failed, we fail. If it succeeds, we succeed.

				// queue up the doneAction. it will not run until this anonymous function completes, because we are already on the main thread.
				actionQueue.QueueAction (doneAction);

				if (!Success) {
					FailReason = "JoinTournament failed: " + wrd.FailReason;
					return;
				}
				
				try { // attempt deserialization.
					JoinRecord = JsonConvert.DeserializeObject<Dictionary<string, string>> (wrd.ResponseText);
				}
				catch { // we failed.
					Success = false;
					FailReason = "JoinTournament failed: result not JSON: " + "\"" + wrd.ResponseText + "\"";
					return;
				}
				
				// the joinRecord contains just two things, a "data" and an "hmac". Get the "data"
				
				string joinData = null;
				
				JoinRecord.TryGetValue ("data", out joinData);
				
				if (joinData == null) {
					Success = false;
					FailReason = "join response has no 'data'";
					return;
				}
				
				// deserialize the joinData.
				try {
					// yes, overwrite the JoinRecord, because we don't need the hmac here.
					JoinRecord = JsonConvert.DeserializeObject<Dictionary<string, string>> ( joinData);
				}
				catch {
					Success = false;
					FailReason = "joininfo isn't JSON";
					return;
				}
				
				// try to get a gameid
				string gameid = null;
				
				JoinRecord.TryGetValue ("gameid", out gameid);
				
				if (gameid == null) {
					Success = false;
					FailReason = "join response has no gameid";
					return;
				}
				
				// everything's good.
				AddRecord ("join", wrd.ResponseText);

			});

		}

\endcode


	*/

	// this class describes a fake response.
	public class FakeWebResponse {
		public FakeWebResponse(bool success_, byte [] bytes_, int httpStatusCode_ = 200) {
			success = success_;
			bytes = bytes_;
			httpStatusCode = httpStatusCode_;
			contentType = RequestWrapper.MSGPACK_CONTENT;

			if (bytes == null) {
				throw new Exception("no bytes!");
			}
		}

		public FakeWebResponse(bool success_, string text, int httpStatusCode_ = 200) : 
			this(success_, text == null ? null : Encoding.UTF8.GetBytes(text), httpStatusCode_) {
				contentType = RequestWrapper.JSON_CONTENT;
			}

		public bool success;
		public byte [] bytes;
		public int httpStatusCode;
		public string contentType;
	}

	public class WebRequestDispatcher {

		// these are enums indicating the state of the network. they are used to tell US what
		// the state of the network is.
		public enum NetworkReachableValue {
			NOT_REACHABLE,
			REACHABLE_BY_CDN,
			REACHABLE_BY_LAN
		}

		public delegate NetworkReachableValue getReachableFunc ();

		// By default, this function just says "yes, we are on the network, by LAN". 
		// To make it act smarter than that, the application must override it by providing a getReachableFunc which
		// actually returns good information.

		public static getReachableFunc GetNetworkReachability = () => {return WebRequestDispatcher.NetworkReachableValue.REACHABLE_BY_LAN;};

		private WebRequest theRequest; // the request. Passed into DispatchRequest

		private WebResponse _response;

		public bool Aborted
		{
			get; private set;
		}

		/// The response to the request. Only valid on completion of the request. Closed and set to null in DispatchRequest().
		/**
			It is recommended that after extracting information from \ref Response, that you call DestroyResponse(), which will Close
			\ref Response, and cause the WebRequestDispatcher to forget about it.

			DispatchRequest() calls DestroyResponse() as a last resort. Good form is to call DestroyResponse() yourself, when you are 
			done using \ref Response.

			If you wish to take ownership of \ref Response rather than destroy it, copy it into some variable of yours, and set \ref Response to null.
			If you do this, the WebRequestDispatcher will never Close \ref Response.

			Be sure, in the above case, to Close the WebResponse when you are done with it.

		*/
		public WebResponse Response {
			get {
				return _response;
			}
			set {
				if (theRequest != null) {
					throw new System.Exception( "Cannot change Response while request in progress.");
				}
				_response = value;
			}
		}
		
		/// a means of testing network activity by providing fake responses.
		/** 
			When you make a web request, you can provide a function which will construct a valid response for you. If you do,
			then the request won't actually be sent, and you'll receive the response you wanted. This makes having a server optional.
			Good for development.
		*/
		public delegate FakeWebResponse FakeResponseMaker (WebRequest wr, byte[] postBytes, Stream postStream);

		public static bool AllowFakeResponses = false; // Whether fake responses will be used if present.

		public static bool ForceFakeResponses = false;

		public FakeResponseMaker MakeFakeResponse = null;

		Action completionAction; // the action to perform when the request is completed.

		// if not null, it's a place to queue the completion Action, if the Action isn't null.
		private ActionQueue actionQueue;

		/// The default request Timeout, in milliseconds. You can change this, but do so _before_ calling DispatchRequest().
		/** On timing out, the request completes, but not successfully.

			Your completion Action will be queued so you can process the failure. */

		public int Timeout = 0; // default, no timeout. 
		private int timeoutThisTime = 0;

		private ActionContext actionContext; // place to store the caller's context, so it can be restored on completion.

		/// You can poll this to find out if the WebRequestDispatcher's WebRequest has been completed. It's useful inside a coroutine.

		/** You don't need to use this at all if you provide a completion Action to DispatchRequest().

			In your completion Action, or if \ref Done is true, you can look at \ref Response, \ref FailReason, and \ref ResponseText.

			The use of a completion Action and an ActionQueue (rather than polling \ref Done) is recommended, but not mandatory.

			Typical use of \ref Done (inside a coroutine):
			\code

				// keep yielding until the request is done
				while(!myDispatcher.Done) {

					yield return null;		// not done yet.

				}
				// it's done now. 
				if (myDispatcher.FailReason != null) {
					// look at myDispatcher.FailReason
				} 
				else
				{
					// look at myDispatcher.ResponseText or myDispatcher.Response
				}

			\endcode

		 */

		public bool Done {
			get {
				return theRequest == null; // this var is set to null when theRequest has been completed.
			}
		}
		
		private byte[] _responseBytes;

		/// The text content of the response to the request.
		/** This OUTPUT variable is to be accessed only if the request has been COMPLETED (done is true); otherwise, it is not thread-safe. */
		public byte[] ResponseBytes
		{
			get {

				if (_responseBytes != null) 
					return _responseBytes; // nothing to do. Probably a fake response.

				if (_response != null) { // we have a way to get bytes

					using (Stream dataStream = _response.GetResponseStream()) { // the response Stream

						_responseBytes = dataStream.ToBytes();

					}

				} else {
					// no way to get bytes, set bytes to null.
					_responseBytes = null;

				}

				return _responseBytes;
			}

		} 

		public string ResponseText {
			get {

				if (ResponseBytes == null) {
					return null;
				}

				return Encoding.UTF8.GetString(ResponseBytes);
			}
		}

		/// Why it failed, if it failed. Only set on failure.
		/** This OUTPUT variable is to be accessed only if the request has been COMPLETED (done is true); otherwise, it is not thread-safe. */
		public string FailReason 
		{ 
			get; private set;
		}

		public int HttpStatusCode {
			get; private set;
		}

		public string HttpStatusDescription {
			get; private set;
		}

		public string ResponseContentType {
			get; private set;
		}

		public string RequestUri {
			get; private set;
		}

		public WebExceptionStatus ExceptionStatus {
			get; private set;
		}

		private void setResponseInfo() {
			if (_response is HttpWebResponse)
			{
				HttpStatusCode = (int)((HttpWebResponse)_response).StatusCode;
				HttpStatusDescription = ((HttpWebResponse)_response).StatusDescription;
				ResponseContentType = ((HttpWebResponse)_response).ContentType;
			}
			else
			{
				HttpStatusCode = -1;  // not an HttpWebResponse
				HttpStatusDescription = "";
				ResponseContentType = "";
			}
		}

		private void setWebExceptionInfo(WebException e) {
			// getting the request stream failed for some reason. Perhaps a fail to connect.
			FailReason = e.Message;

			// note that even if you fail, you STILL might have a response!
			_response = e.Response;

			ExceptionStatus = e.Status;

			if (e.Status == WebExceptionStatus.ProtocolError)
			{
				var r = _response as HttpWebResponse;
			        
				if (r != null)
				{
					HttpStatusCode = (int)r.StatusCode;
				} else {
					HttpStatusCode = -1;		// not an HttpWebResponse        	
				}
			 
			}
			else
			{
				HttpStatusCode = -1;		// not an HttpWebResponse        	
			}

			HttpStatusDescription = e.Message;
		}

		/// Provide an ActionQueue to the constructor if you want the WebRequestDispatcher to call an Action for you when the request completes.
		/** 
			Your completion Action, if provided to DispatchRequest(), will be called on the main thread.

			If you do not provide an ActionQueue to the constructor, your only way of knowing that an WebRequest is complete is to poll 
			the \ref Done property of the WebRequestDispatcher. 

		*/
		public WebRequestDispatcher(ActionQueue aqueue ///< the ActionQueue on which to queue completion Actions.
			) {
			actionQueue = aqueue;
			theRequest = null;
			_response = null;  // no response yet.
			_responseBytes = null;
			FailReason = null;
		}

		/// Creates an WebRequest for you, but does not dispatch it. 
		/** This is just a convenience function&mdash;you don't need to call it. Instead you can directly call WebRequest.Create(), if you wish.

			After calling this function, you can further customize your WebRequest, before dispatching it.

			Do not write to the RequestStream for a Post request. Pass your Post data to DispatchRequest instead.

			\returns an WebRequest for you to customize before you dispatch it.

			*/

		public static WebRequest CreateRequest(
			string url,				///< where to send the request 
			string method = WebRequestMethods.Http.Get
			) {

			WebRequest req = WebRequest.Create (url); // create the request.
			req.Method = method;

			return req; // return it to the caller. Note we haven't dispatched it yet.
		}

		/// Causes immediate but not synchronous completion of the WebRequest (successful or not).
		/** Note that it may take some (very short amount of) time for the request to complete&mdash;Don't expect synchronous abort. 

			Note that the request _might succeed anyway!_ Don't depend on failure after calling Abort().

			Abort() simply hurries up request completion, without guaranteeing success or failure.

			On completion due to Abort(), your completion Action will be called, and \ref Done will be set to true.

			*/
		public void Abort() {

			if (theRequest != null) {

				Aborted = true;

				theRequest.Abort (); // complete early.
			}
		}

		/// Utility function to create a byte[] from a string. Handy for making Post requests.
		/**

			\returns UTF8-encoded bytes for your string.

		*/
		public static byte[] StrToBytes(
			string s ///< the string to encode. 
			) {

			return Encoding.UTF8.GetBytes (s);
		}

		// This routine aborts the request when the Timeout expires. Used below.
		private static void TimeoutCallback(object state, bool timedOut) { 
			if (timedOut) { // this function gets called even if the request doesn't time out, in which case "timedOut" is false.
				WebRequest request = (WebRequest)state;			
				request.Abort ();
			} 
		}

		/// Closes \ref Response, and forgets about it.
		/** 
			This function is called automatically by DispatchRequest(), but good form is to call it yourself when you are done extracting
			information from \ref Response.
		*/
		public void DestroyResponse() {

			_responseBytes = null;

			if (_response != null) {
				_response.Close(); // clean up the old response.
				_response = null;	// we don't have a response yet.
			}
		}
		
		// class to hold onto some automatic variables across threads.
		private class InterThreadState {
			public Action doneAction;
			public byte [] postBytes;
			public Stream postStream;

			public InterThreadState(byte [] postBytes_, Stream postStream_, Action doneAction_) {
				postBytes = postBytes_;
				postStream = postStream_;
				doneAction = doneAction_;
			}
		}

		/// Dispatches an WebRequest.
		/** 
		 	Each WebRequestDispatcher supports only one concurrent outstanding WebRequest.

			The completion Action will be called, on the main thread, when the WebRequest is done, whether due to success, 
			failure, abortion, or Timeout.

			Once the request is complete, you should check \ref FailReason.  If it is null, the request was successful.

			If the request was successful, you can use \ref ResponseText (and the members of \ref Response), otherwise, you can use \ref FailReason.

			If you are doing a Post request, use \ref postBytes or \ref postStream to provide your postData. Do not try to set the postData on your request yourself, 
			as doing so can cause premature network activity.

			When you are done using \ref Response and \ref ResponseText, call \ref DestroyResponse to release resources. If you don't, they will
			be released the next time you call \ref DispatchRequest.

		 */
		public void DispatchRequest(
			WebRequest wr, 		///< the WebRequest to be dispatched
			byte [] postBytes, ///< send a null if you are not doing a POST (set postBytes OR postStream--not both)
			Stream postStream, ///< send a null if you are not doing a POST (set postBytes OR postStream--not both)
			Action a, 		///< the completion Action, to be run on the main thread when the response comes back (or we time out).
			int timeout_ = -1 ///< optional custom Timeout for this request. 0 means "forever". -1 means use the default \ref Timeout
			) {

			HttpStatusCode = -1;
			HttpStatusDescription = "";
			
			RequestUri = wr.RequestUri.OriginalString;

			if (theRequest != null) {
				// request already in progress. Don't do that.
				throw new System.Exception( "Cannot dispatch two requests at once.");
			}

			Aborted = false;

			FailReason = null; // we have not failed yet.

			DestroyResponse(); // clean up any old response.

			completionAction = a; // remember the ultimate completion Action.

			// remember the context of who is dispatching. So we can restore it on completion.
			// NOTE THAT THIS IS WHERE WE ADD A REF TO THE CONTEXT.
			actionContext = actionQueue.Context.AddRef(
				#if REF_REASONS
				"DispatchRequest"
				#endif
				);

			// -1 means use default Timeout
			timeoutThisTime = timeout_ == -1 ? Timeout : timeout_;
			
			theRequest = wr; // remember the request.

			logCurl(postBytes, postStream);

			if (ForceFakeResponses && MakeFakeResponse == null) {
				GsnDebug.Log("<color=#ff0000ff>MISSING A FAKERESPONSEMAKER</color>");

				FailReason = "no fake response";

				_responseBytes = null;

				HttpStatusCode = 400;

				theRequest = null;

				// Don't add a ref here, because we already added one.
				actionQueue.QueueActionWithoutAddRef(completionAction, actionContext);
				return;

			}

			if (AllowFakeResponses && MakeFakeResponse != null) {

				FakeWebResponse fwr = MakeFakeResponse(wr, postBytes, postStream);

				if (fwr != null) { // we got a fake response.

					GsnDebug.Log(Environment.NewLine + GsnDebug.COLOR_PINK +  "FAKING WEB RESPONSE TO: " + theRequest.RequestUri.OriginalString + GsnDebug.END_COLOR);

					FailReason = fwr.success ? null : "fake failure";

					if (fwr.bytes == null) {
						throw new Exception("WE HAVE A PROBLEM");
					}

					_responseBytes = fwr.bytes;

					ResponseContentType = fwr.contentType;

					HttpStatusCode = fwr.httpStatusCode;

					theRequest = null; // indicate we are done with this request.

					// don't add a ref here, because we already added one.
					actionQueue.QueueActionWithoutAddRef(completionAction, actionContext);
					return;					
				} else {
					throw new Exception("FakeResponseMaker failed.");
				}

			}

			if (GetNetworkReachability() == NetworkReachableValue.NOT_REACHABLE) {

				FailReason = "Network not reachable";
				HttpStatusCode = -1;  // not an HttpWebResponse
				HttpStatusDescription = "";
				ResponseContentType = "";
				theRequest = null;

				// don't add a ref here.
				actionQueue.QueueActionWithoutAddRef(completionAction, actionContext);
				return;					

			}

			if (postBytes != null || postStream != null) {

				if (postBytes != null && postStream != null) {
					throw new System.Exception("Cannot post from both bytes and stream");
				}

				/* 
					This is nutty, and it's the Mono runtime's fault. Doing a Post request is a two-step process:

					- writing the post data
					- getting a response to the request

					Each of these steps has a BeginGet/EndGet pair of function calls, to support asynchronous operation.
					It happens, though, that BeginGetRequestStream is poorly behaved in that it performs some synchronous
					I/O that could actually take minutes to complete. So BeginGetRequestStream is a half-baked attempt at 
					being asynchronous.

					To make up for this crappiness, we need to call BeginGetRequestStream on a secondary thread. Only in this
					way can we make fully asynchronous web requests.

				*/

				// before going into the secondary thread, add a ref to the context
				actionContext.AddRef(
					#if REF_REASONS
					"WRD pre-secondary thread"
					#endif
					);

				// we have to go into a secondary thread here.  Put automatic variables into a state object. We could store
				// them in the WebRequestDispatcher, but that would require cleanup later.
				InterThreadState state = new InterThreadState(postBytes, postStream, doActualRequest);

				// setPostData needs to run on a secondary thread, because it's not fully asynchronous.
				ThreadPool.QueueUserWorkItem(setPostData, state);
			}
			else
			{
				// No postData. go on to the actual request.

				// This QueueAction WILL add another ref, and remove it when doActualRequest completes.
				actionQueue.QueueAction(doActualRequest, actionContext);
			}
		}

		// this runs on a secondary thread. We now have TWO refs added to the context.
		void setPostData (object state_) {

			InterThreadState state = (InterThreadState)state_;

			try 
			{

				if ( theRequest.Method == WebRequestMethods.Http.Get )
				{
					throw new Exception("Attempting to set POST data on a GET request.");
				}


				// try to get the request stream. Strange that we use the Begin/End pairs here even though we
				// are already on a secondary thread. The WebRequest API is half-assed. It wants us to 
				// call the Begin/End pair on a secondary thread to avoid blocking.
				IAsyncResult result = (IAsyncResult) theRequest.BeginGetRequestStream(handleRequestStream, state);

				// the same timeout is used for two different timeouts if you are doing a post. Oh well. Not ideal, but not bad.
				// just means that each STEP of the Post request gets a timeout. So total possible timeout is double.
				if (timeoutThisTime != 0) { // zero means NEVER TIME OUT.
					// this line implements the Timeout.
					// if the request times out, the callback fires and the request gets aborted
					// On success, the TimeoutCallback will also be called, but "timedOut" will be false.
					ThreadPool.RegisterWaitForSingleObject (result.AsyncWaitHandle, new WaitOrTimerCallback(TimeoutCallback), theRequest, timeoutThisTime, true);
				}
			}
			catch(System.Net.WebException e)
			{
				setWebExceptionInfo(e);

				// this takes us to doActualRequest. We'll continue failing there.
				actionQueue.QueueActionWithoutAddRef(state.doneAction, actionContext);
			}
		}

		// secondary thread code. runs in response to BeginGetRequestStream
		void handleRequestStream(IAsyncResult asynchronousResult) {

			InterThreadState state = (InterThreadState)asynchronousResult.AsyncState; // automatic vars from DispatchRequest

			try
			{
				// see if we actually got a stream
				Stream postStream = theRequest.EndGetRequestStream(asynchronousResult);

				if (state.postBytes != null) {
					// write from the byte array
					postStream.Write (state.postBytes); // write the postBytes
				} else {

					// write from the state's postStream
					state.postStream.Seek(0, SeekOrigin.Begin);
					state.postStream.CopyTo(postStream);

				}

				postStream.Close(); // close when done. Otherwise we'll run out of connections.

			}
			catch(System.Net.WebException e)
			{
				setWebExceptionInfo(e);
			}

			// continue to maybe do the actual request, or continue failing.
			actionQueue.QueueActionWithoutAddRef(state.doneAction, actionContext);

		}

		// we have either succeeded or failed at getting our post data in the postStream. 
		// we are back on the main thread.
		void doActualRequest () {

			if (FailReason != null) { // setting post data failed. bail.
				theRequest = null;
				actionQueue.QueueActionWithoutAddRef(completionAction, actionContext);
				return;
			}

			try {
				// Actually dispatch the request, asynchronously. It will work in a different thread.
				IAsyncResult result = (IAsyncResult) theRequest.BeginGetResponse (handleResponse, theRequest);
				
				if (timeoutThisTime != 0) {
					// this line implements the Timeout.
					// if the request times out, the callback fires and the request gets aborted
					// On success, the TimeoutCallback will also be called, but "timedOut" will be false.
					ThreadPool.RegisterWaitForSingleObject (result.AsyncWaitHandle, new WaitOrTimerCallback(TimeoutCallback), theRequest, timeoutThisTime, true);					
				}
			}
			catch(System.Net.WebException e) 
			{
				setWebExceptionInfo(e);

				theRequest = null;
				actionQueue.QueueActionWithoutAddRef(completionAction, actionContext);
			}
		}

		// this function is called when the request completes OR TIMES OUT or is aborted
		// SECONDARY thread code.
		void handleResponse(IAsyncResult result) {

			try {

				WebRequest req = (WebRequest)result.AsyncState; // should be identical to theRequest
				
				_response = req.EndGetResponse (result); // the WebResponse

				setResponseInfo();

				FailReason = null; // we have the response!
				
			}
			catch(System.Net.WebException e) {

				setWebExceptionInfo(e);

			}
			theRequest = null; // We are now "done" with this request. The results are in "Response" and "FailReason".

			// actions get queued AFTER we are "done". "done" DOES NOT MEAN THE QUEUED ACTIONS ARE COMPLETE.
			// done means that queued actions can look at the result, or queue another request.
			actionQueue.QueueActionWithoutAddRef(completionAction, actionContext);
		}


		public void DumpResult() {

			GsnDebug.AddLog (AppendStringToFile);

			if (FailReason != null) {
				GsnDebug.Log(GsnDebug.COLOR_ORANGE + "Failed Request " + RequestUri + GsnDebug.END_COLOR, "Reason: \"" + FailReason + "\"", "ExceptionStatus:", ExceptionStatus, "HttpStatus:", HttpStatusCode, HttpStatusDescription);
			} 
			else 
			{
				GsnDebug.Log(GsnDebug.COLOR_GREEN + "Successful Request " + RequestUri + GsnDebug.END_COLOR, ResponseBytes.Length, "bytes received. HttpStatus:", HttpStatusCode, HttpStatusDescription);

				if (ResponseContentType == RequestWrapper.MSGPACK_CONTENT) {
					GsnDebug.Log("Response Content:",GetByteArrayString(ResponseBytes));
				}
				else
				{
					GsnDebug.Log("Response Content: \"" + ResponseText + "\"");					
				}
			}

			GsnDebug.RemoveLog (AppendStringToFile);

		}

		private void logCurl(byte[] postBytes, Stream postStream)
		{

			StringBuilder curl = new StringBuilder();

			curl.AppendFormat(GsnDebug.COLOR_YELLOW + "Request of {0}" + GsnDebug.END_COLOR + " curl" , RequestUri);

			// read the headers from the actual request
			WebHeaderCollection headers = theRequest.Headers;

			for (int i = 0; i < headers.Count; ++i) {
				string header = headers.GetKey(i);

				string[] values = headers.GetValues(header);

				if (values.Length > 0) {
					curl.AppendFormat(" -H '{0}:", header);

					for (int j = 0; j < values.Length; ++j) {
						curl.AppendFormat(" {0}", values[j]);
					}

					curl.Append("'");

				}

			}

			if (theRequest.Method != WebRequestMethods.Http.Get) {
				curl.AppendFormat(" -X {0}", theRequest.Method);

				if (theRequest.ContentType == RequestWrapper.MSGPACK_CONTENT) {
					if (postBytes != null) {
						curl.AppendFormat(" --data-binary '{0}'", WebRequestDispatcher.GetByteArrayString(postBytes));
					} else if (postStream != null) {
						curl.AppendFormat(" --data-binary '{0}'", WebRequestDispatcher.GetByteArrayString(postStream.ToBytes()));
					}
				} else { // treat it as text.
					if (postBytes != null) {
						curl.AppendFormat(" -d '{0}'", Encoding.UTF8.GetString(postBytes));
					} else if (postStream != null) {
						curl.AppendFormat(" -d '{0}'", Encoding.UTF8.GetString(postStream.ToBytes()));
					}
				}
			}

			curl.AppendFormat(" {0}", RequestUri);

			curl.Append(Environment.NewLine + "From context " + actionQueue.Context.Trace);

			string s = curl.ToString();

			GsnDebug.Log (s);

			// WebRequestDispatcher.AppendStringToFile(s);
		}

		public static string GetByteArrayString(byte [] array) {

			if (array == null) 
				return "null";

			int i;

			StringBuilder sb = new StringBuilder();

			for (i = 0; i < array.Length; i++)
			{
				if (i != 0 && (i % 4) == 0) sb.Append(" ");
				sb.Append(String.Format("{0:X2}", array[i]));
			}
			return sb.ToString();
		}

		public static void AppendStringToFile(string s) {
//			using (FileStream outfile = new FileStream("crapfile.txt", FileMode.Append)) {
//				outfile.Write(Encoding.UTF8.GetBytes(s));
//				outfile.Write(Encoding.UTF8.GetBytes(Environment.NewLine));
//				outfile.Write(Encoding.UTF8.GetBytes(Environment.NewLine));
//			}
		}

	}
}
