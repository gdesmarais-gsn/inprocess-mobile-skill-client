using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using GSN.Skill.Utils;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;
using MsgPack.Serialization;
using MsgPack;
using GSN.Skill.TriPeaks.Requests.Game;
using System.Reflection;
using GSN.Skill.Games.Common;

namespace GSN.Skill.Requests
{
	/// <summary>
	/// The WebRequester is a Singleton class that leverages the UnityWebRequest and Coroutines to make Web Requests.
	/// It handles sending single requests, batch requests, and sequential requests. The Web Requests themselves
	/// manage their callbacks.
	/// 
	/// The WebRequester also updates its cookie session id so that all WorldWinner calls can work.
	/// 
	/// NOTE: The WebRequester should be refactored to be generic with a WorldWinner extension built on top.
	/// </summary>
	public class WebRequester : SingletonMonoBehaviour<WebRequester>
	{
		public const int DEFAULT_FORCE_REFRESH_IN_SECONDS = 0; // always refresh by default

		private enum RequestState
		{
			Success,
			UnityFail,
			WorldWinnerFail,
			WorldWinnerUserFail
		}

		// NOTE: Apparently it's safe to check against this string purely because
		// WorldWinner would collapse if this string ever changed.
		private const string WW_ERROR_MISSING_SESSION_ID_KEY = "Missing or expired session for session ID";
		private const string WW_ERROR_CODE_AUTH_REQUIRED_FOR_USER_TOKEN = "AUTH_REQUIRED_FOR_USER_TOKEN";
		private const string WW_ERROR_CALLING_API_WITH_INVALID_REQUEST_METHOD = "Calling API with invalid request method";

		private const string CONTENT_TYPE_KEY = "Content-Type";
		private const string CONTENT_TYPE_VALUE_JSON = "application/json";
		private const string AUTHZ_TOKEN_KEY = "Authorization";

		// referencing member in IWebRequest<T>
		private const string BACKEND_REQUEST_RESPONSE_KEY = "Response";

		// TODO: Discuss if we should expose these two constants to the backend
		private const float RETRY_BASE_DELAY = 1.0f;
		private const int MAX_RETRY_ATTEMPTS = 3;

		private bool _noSessionHandlerNotified = false;

		/// <summary>
		/// Interface to handle session. Currently there is only one session handler which handles WorldWinner sessions.
		/// </summary>
		private ISessionHandler _mainSessionHandler;

		/// <summary>
		/// Keep track of the requests currently being made. A request is removed from the list once it's done fetching.
		/// </summary>
		private Dictionary<IWebRequest, int> _currentRequests = new Dictionary<IWebRequest, int>();

		public void Init(ISessionHandler cookieHandler)
		{
			_mainSessionHandler = cookieHandler;
		}

		public ISessionHandler MainSessionHandler
		{
			get { return _mainSessionHandler; }
		}

#if DEBUG
		public void ClearSessionID()
		{
			_mainSessionHandler.ClearSessionID();
		}
#endif

		public bool HasConnection { get; private set; }

		/// <summary>
		/// Fetch a single WebRequest.
		/// </summary>
		/// <param name="request">Request.</param>
		public void FetchRequest(IWebRequest request)
		{
			ValidateMainSessionHandler();

			StartCoroutine(InternalFetchRequest(request));
		}

		public void FetchRequest(IWebRequest request, ISessionHandler sessionHandler)
		{
			ValidateMainSessionHandler();

			StartCoroutine(InternalFetchRequest(request, sessionHandler));
		}

		/// <summary>
		/// Fetch several WebRequests in sequential order.
		/// 
		/// If a single request fails, then the entire fetch will immediately stop.
		/// </summary>
		/// <param name="requests">Queue of WebRequests</param>
		public void SequentialFetchRequests(WebRequests requests)
		{
			requests.type = WebRequests.MultipleRequestType.Sequential;

			StartCoroutine(InternalSequentialFetchRequests(requests));
		}

		/// <summary>
		/// Fetch several WebRequests in a batch.
		/// </summary>
		/// <param name="requests">Queue of WebRequests</param>
		public void BatchFetchRequests(WebRequests requests)
		{
			ValidateMainSessionHandler();

			requests.type = WebRequests.MultipleRequestType.Batch;

			bool allSuccess = true;
			int completedRequests = 0;
			int totalRequests = requests.Count;

			Action SingleRequestDone = () =>
			{
				if (++completedRequests == totalRequests)
				{
					// we have completed all the requests
					HandleMultipleRequestsComplete(requests, allSuccess);
				}
			};

			SingleWebRequestComplete OnSingleWebRequestComplete = null;
			SingleWebRequestFail OnSingleWebRequestFail = null;

			OnSingleWebRequestComplete = (IWebRequest request) =>
			{
#pragma warning disable RECS0020 // Delegate subtraction has unpredictable result
				request.OnCompleteHandler -= OnSingleWebRequestComplete;
				request.OnFailHandler -= OnSingleWebRequestFail;
#pragma warning restore RECS0020 // Delegate subtraction has unpredictable result

				SingleRequestDone();
			};

			OnSingleWebRequestFail = (IWebRequest request) =>
			{
#pragma warning disable RECS0020 // Delegate subtraction has unpredictable result
				request.OnCompleteHandler -= OnSingleWebRequestComplete;
				request.OnFailHandler -= OnSingleWebRequestFail;
#pragma warning restore RECS0020 // Delegate subtraction has unpredictable result

				allSuccess = false;

				SingleRequestDone();
			};

			if (requests.OnRequestsBeginHandler != null)
				requests.OnRequestsBeginHandler(requests);

			// reference a deep copy clone of the queue
			var requestTemp = new Queue<IWebRequest>(requests);

			while (requestTemp.Count > 0)
			{
				var request = requestTemp.Dequeue();

				request.OnCompleteHandler += OnSingleWebRequestComplete;
				request.OnFailHandler += OnSingleWebRequestFail;

				StartCoroutine(InternalFetchRequest(request));
			}
		}

		public void TryMultipleRequestsAgain(WebRequests requests)
		{
			switch (requests.type)
			{
				case WebRequests.MultipleRequestType.Sequential:
					SequentialFetchRequests(requests);
					break;
				case WebRequests.MultipleRequestType.Batch:
					BatchFetchRequests(requests);
					break;
			}
		}

		private IEnumerator InternalFetchRequest(IWebRequest request, ISessionHandler sessionHandler = null)
		{
			if (sessionHandler == null)
			{
				sessionHandler = _mainSessionHandler;
			}

			if (_currentRequests.ContainsKey(request))
			{
				GsnDebug.LogWarning("This request is already being fetched:", request, "|", GetEndpointName(request.Url));

#if DEBUG
				foreach (var entry in _currentRequests)
				{
					GsnDebug.LogWarning("Current fetches key | value: ", entry.Key, "|", entry.Value);
				}
#endif
				yield break;
			}

			if (!request.IsStale)
			{
#if DEBUG
				GsnDebug.LogWarning("This request's data is still good. Finish fetch attempt.");
#endif
				if (request.OnCompleteHandler != null)
					request.OnCompleteHandler(request);
				yield break;
			}

			// set that we're fetching on this request with the amount of attempts left to fetch on it
			_currentRequests.Add(request, MAX_RETRY_ATTEMPTS);

			request.ClearError();

			if (request.OnBeginHandler != null)
				request.OnBeginHandler(request);

#if DEBUG
			if (request.useMockPayload)
			{
				yield return HandleMockPayload(request);
			}
			else
#endif // #if DEBUG
			{
				yield return HandleFetch(request, sessionHandler);
			}

			// we're done fetching on the key. remove it from the list
			_currentRequests.Remove(request);

			if (request.IsError)
			{
				if (request.OnFailHandler != null)
					request.OnFailHandler(request);
			}
		}

#if DEBUG
		private IEnumerator HandleMockPayload(IWebRequest request)
		{
			yield return Parse(request, request.mockPayload);

			if (!request.IsError)
			{
				// parsing was successful!
				if (request.OnCompleteHandler != null)
					request.OnCompleteHandler(request);
			}
			else
			{
				// an error was received during the parsing
				// This is a WorldWinner specific error
				GsnDebug.LogError(string.Format("WorldWinner Request Fail:  endpoint [{0}]   error [{1}]", GetEndpointName(request.Url), request.error.errors[0].error_message));
			}
		}
#endif // #if DEBUG

		private IEnumerator HandleFetch(IWebRequest request, ISessionHandler sessionHandler)
		{
			RequestState requestState = RequestState.UnityFail;

			float retryDelay = RETRY_BASE_DELAY;

			filter.Log(request, "sending request to " + request.Url + " = " + Environment.NewLine + ((null != request.RequestBody) ? request.RequestBody.ToString() : "<null>"));
			
			while (requestState != RequestState.Success)
			{
				using (UnityWebRequest unityRequest = CreateUnityWebRequest(request, sessionHandler))
				{
					if (unityRequest == null)
						break; // unity request couldn't be built up for some reason. kick out

					// TODO: show progress of the Send()
					yield return unityRequest.Send();


					if (!unityRequest.isError)
					{
						// we've received a response, which means we have a stable connection
						HasConnection = true;

						// we have received some kind of data from the web request
						// parse the data
						if (request is IMessagePackRequest)
						{
							byte[] bytes = unityRequest.downloadHandler.data;
							// This call actually returns a bool indicating success/failure (true/false)
							// But we don't need it here as the byproduct of unpacking the bytes sets 
							// the response values appropriately
							// TODO - move this into an interface to combine messagepack operations
							// into the same Parse call.  The unpack should also support being shoved off
							// to a co-routine
							((IMessagePackRequest)request).unpackMessagePack(bytes);
							yield return null;
						}
						else
						{
							yield return Parse(request, unityRequest.downloadHandler.text);
						}

						if (!request.IsError)
						{
							// parsing was successful!
							if (sessionHandler != null)
								sessionHandler.UpdateCookieData(unityRequest, request);

							requestState = RequestState.Success;

							// remember the last time we successfully fetched
							request.LastFetched = DateTime.Now;

							if (request.OnCompleteHandler != null)
								request.OnCompleteHandler(request);
						}
						else
						{
							requestState = RequestState.WorldWinnerFail;

							// join the array of errors
							int len = request.error.errors.Length;
							string str = string.Empty;
							for (int i = 0; i < len; ++i)
							{
								str += request.error.errors[i].error_message;

								if (i + 1 < len)
								{
									str += ",";
								}
							}

							// TODO: QA AUTOMATION: This error will fail tests even it's for
							// innocuous errors, like failing to reach Fabric backend
							
							Debug.LogError(string.Format("WorldWinner Request Fail: endpoint [{0}]   error [{1}]", GetEndpointName(request.Url), str));
							//										break;
						}
					}
					else
					{
						// The UnityWebRequest has received an error
						// This is a Unity specific error, which could be, but not limited to, one of the following:
						// - Socket errors
						// - Errors resolving DNS entries
						// - The redirect limit being exceeded
						GsnDebug.LogError(string.Format("Unity Request Fail: endpoint [{0}]   error [{1}]",  GetEndpointName(request.Url), unityRequest.error));

						// we received a Unity error, which means we have an unstable connection
						HasConnection = false;

						requestState = RequestState.UnityFail;

						// setup unity error data
						var errorData = new WebRequestErrorData();
						errorData.type = WebRequestErrorData.ErrorType.Unity;
						// package the unity error into our error format
						errorData.errors = new WebRequestErrorData.Error[1]
						{
							new WebRequestErrorData.Error(unityRequest.error, string.Empty, unityRequest.responseCode.ToString())
						};
						request.error = errorData;
					}
				}

				if (requestState != RequestState.Success)
				{
					// the request did not succeed

					switch (requestState)
					{
						case RequestState.UnityFail:
							// should just simply retry
							break;
						case RequestState.WorldWinnerFail:
							yield return HandleWorldWinnerError(request, sessionHandler);
							break;
					}

					// attempt to retry
					if (_currentRequests[request] <= 0)
						break; // we've reached our retry attempts

					// deduct a retry attempt
					_currentRequests[request]--;

					// clear the error for the retry step
					request.ClearError();

					GsnDebug.LogWarning("Attempting to retry request to ", GetEndpointName(request.Url), "in ", retryDelay, " seconds.");

					// try again in X seconds
					yield return new WaitForSeconds(retryDelay);

					// prepare next delay
					retryDelay = (retryDelay > 1.0f) ? retryDelay * retryDelay : retryDelay + retryDelay;
				}
			}
		}

		private IEnumerator InternalSequentialFetchRequests(WebRequests requests)
		{
			ValidateMainSessionHandler();

			bool allSuccess = true;

			SingleWebRequestComplete OnSingleWebRequestComplete = null;
			SingleWebRequestFail OnSingleWebRequestFail = null;
			OnSingleWebRequestComplete = (IWebRequest request) =>
			{
#pragma warning disable RECS0020 // Delegate subtraction has unpredictable result
				request.OnCompleteHandler -= OnSingleWebRequestComplete;
				request.OnFailHandler -= OnSingleWebRequestFail;
#pragma warning restore RECS0020 // Delegate subtraction has unpredictable result
			};

			OnSingleWebRequestFail = (IWebRequest request) =>
			{
#pragma warning disable RECS0020 // Delegate subtraction has unpredictable result
				request.OnCompleteHandler -= OnSingleWebRequestComplete;
				request.OnFailHandler -= OnSingleWebRequestFail;
#pragma warning restore RECS0020 // Delegate subtraction has unpredictable result

				allSuccess = false;
			};

			if (requests.OnRequestsBeginHandler != null)
				requests.OnRequestsBeginHandler(requests);

			var requestTemp = new Queue<IWebRequest>(requests);
			while (requestTemp.Count > 0)
			{
				var request = requestTemp.Dequeue();

				request.OnCompleteHandler += OnSingleWebRequestComplete;
				request.OnFailHandler += OnSingleWebRequestFail;

				yield return InternalFetchRequest(request);

				if (!allSuccess)
					break; // we failed a given request. since we're handling sequential requests we should kick out since there is most likely a dependency chain
			}

			HandleMultipleRequestsComplete(requests, allSuccess);
		}

		private void HandleMultipleRequestsComplete(WebRequests requests, bool allSuccess)
		{
			if (allSuccess)
			{
				// we successfully fetched all requests
				if (requests.OnRequestsCompleteHandler != null)
					requests.OnRequestsCompleteHandler(requests);
			}
			else
			{
				// we failed to fetch all requests
				if (requests.OnRequestsFailHandler != null)
					requests.OnRequestsFailHandler(requests);
			}
		}
		private void ValidateMainSessionHandler()
		{
			if (!_noSessionHandlerNotified)
			{
				if (_mainSessionHandler == null)
				{
					// notify whoever is using webrequester that they haven't set a session handler
					GsnDebug.LogWarning("No session handler was set for the Web Requester.");
				}

				_noSessionHandlerNotified = true;
			}
		}

		private UnityWebRequest CreateUnityWebRequest(IWebRequest request, ISessionHandler sessionHandler)
		{
			if (string.IsNullOrEmpty(request.Url))
			{
				GsnDebug.LogWarning("Request has an empty URL. Kick out.");
				return null;
			}

			UnityWebRequest unityRequest = null;
			byte[] bodyRaw;
			string contentType = (null == request.ContentType) ? CONTENT_TYPE_VALUE_JSON : request.ContentType;
			string authz = null;

			if (null != ArenaProxy.instance.gameSession)
			{
				authz = ArenaProxy.instance.gameSession.AuthzToken;
			}

			string targetUrl = request.Url;
#if UNITY_WEBGL
			// This is a workaround because in WebGL, the headers aren't being
			// set correctly
			if (null != authz) {
				targetUrl += targetUrl.Contains("?") ? "&" : "?";
				targetUrl += AUTHZ_TOKEN_KEY + "=" + authz;
			}
			else {
				Debug.Log ("Authorization not present"); 
			}
#endif // if UNITY_WEBGL
			Debug.Log ("Request submission to "+targetUrl); 

			switch (request.HttpMethod)
			{
				case HttpMethod.GET:
					unityRequest = UnityWebRequest.Get(targetUrl);
					break;
				case HttpMethod.POST:
					unityRequest = UnityWebRequest.Post(targetUrl, string.Empty);
					// TODO - pull rawbody into IWebRequest - everyone should just return bytes
					if (request is IMessagePackRequest)
					{
						bodyRaw = ((IMessagePackRequest)request).RawBody;
					}
					else
					{
						bodyRaw = Encoding.UTF8.GetBytes(request.RequestBody.ToString());
					}
					unityRequest.uploadHandler = new UploadHandlerRaw(bodyRaw);
					break;
				case HttpMethod.PUT:
					unityRequest = UnityWebRequest.Put(targetUrl, string.Empty);
					bodyRaw = Encoding.UTF8.GetBytes(request.RequestBody.ToString());
					unityRequest.uploadHandler = new UploadHandlerRaw(bodyRaw);
					break;
				default:
					GsnDebug.LogError("Unhandled HttpMethod: " + request.HttpMethod.ToString());
					break;
			}

			if (unityRequest != null)
			{
				unityRequest.SetRequestHeader(CONTENT_TYPE_KEY, contentType);

				if (null != authz)
				{
					unityRequest.SetRequestHeader(AUTHZ_TOKEN_KEY, authz);
				}

				// set the request header based on the provided session handler
				if (sessionHandler != null)
					sessionHandler.SetRequestHeader(unityRequest);
			}

			return unityRequest;
		}

		private IEnumerator Parse(IWebRequest request, string data)
		{
			filter.Log(request, "Parsing request: " + request.Url + " = " + data);
			using (Parser parser = new Parser(request, data))
			{
				if (Application.platform == RuntimePlatform.WebGLPlayer)
				{
					parser.Parse();
					yield return null;
				}
				else
				{
					Thread t = new Thread(new ThreadStart(parser.Parse));
					t.Start();

					while (!parser.ParseComplete) { yield return null; }
				}
			}
		}
#region Parse Thread

		private class Parser : IDisposable
		{
			protected interface IErrorParsingData
			{
				bool HasData { get; }
			}

			protected struct ErrorParsingDataType1 : IErrorParsingData
			{
				public Error error;

				public struct Error
				{
					public string msg;
				}

				public bool HasData
				{
					get
					{
						return !string.IsNullOrEmpty(error.msg);
					}
				}
			}

			protected struct ErrorParsingDataType2 : IErrorParsingData
			{
				public Result result;
				public struct Result
				{
					public string[] errors;
				}

				public bool HasData
				{
					get
					{
						return result.errors != null;
					}
				}
			}

			protected struct ErrorParsingDataType3 : IErrorParsingData
			{
				public Result result;

				public struct Result
				{
					public WebRequestErrorData.Error[] errors;
				}

				public bool HasData
				{
					get
					{
						return result.errors != null;
					}
				}
			}

			/// <summary>
			/// By default C# List's, Dictionary's, etc APPEND rather than overwrite the current response
			/// All of our response data works on the assumption that it's current data.
			/// Therefore, we are explictly setting to replace
			/// </summary>
			protected static JsonSerializerSettings _jsonSerializerSettings = new JsonSerializerSettings { };//{ ObjectCreationHandling = ObjectCreationHandling.

			/// <summary>
			/// Used to rebuild the passed in data string
			/// </summary>
			protected static StringBuilder _stringBuilder = new StringBuilder();

			protected IWebRequest _request;
			protected string _data;

			public bool ParseComplete { get; protected set; }

			public Parser(IWebRequest request, string data)
			{
				ParseComplete = false;

				_request = request;
				_data = data;
			}

			/// <summary>
			/// Function that will be called from a separate thread to handle parsing the JSON data.
			/// </summary>
			public virtual void Parse()
			{
				bool hasWorldWinnerError = (TryParseWorldWinnerError(_request, _data));
				/*				{
						// we have received a WorldWinner Error
						ParseComplete = true;
						return;
					}
	*/
				// we have no WorldWinner errors! handle the data

				// NOTE: Since we always contain our response data within the web request object, we need to insert
				//		 the root key into the response data to allow us to pass the request object directly
				//		 and populate the response data (this works for both JSON objects and array of JSON objects).
				// NOTE: List<T> cannot be used as an appropriate array container due to an obscure AOT optimization bug.
				_stringBuilder.Length = 0;
				_stringBuilder.Append("{\"");
				_stringBuilder.Append(BACKEND_REQUEST_RESPONSE_KEY);
				_stringBuilder.Append("\":");
				_stringBuilder.Append(_data);
				_stringBuilder.Append("}");

				string data = _stringBuilder.ToString();
				_stringBuilder.Length = 0;
				try
				{
					JsonConvert.PopulateObject(data, _request, _jsonSerializerSettings);
					ParseComplete = true;
				}
				catch (Exception e)
				{
					if (hasWorldWinnerError)
					{
						// We've already parsed a world winner error so we don't need to create our own
						ParseComplete = true;
						return;
					}

					GsnDebug.LogWarning("Problem doing JsonConvert.PopulateObject on data returned from: ", _request.Url, e.ToString(), data);

					WebRequestErrorData errorData = new WebRequestErrorData();
					errorData.type = WebRequestErrorData.ErrorType.WorldWinner;

					var msg = new WebRequestErrorData.Error();
					// TODO: Get official message and then allow the client to decide on what to show to the user by using the Error Translation system.
					// TODO: Make this message a constant owned by the Error Translation system?
					msg.error_message = "Fatal World Winner Error";

					errorData.errors = new WebRequestErrorData.Error[] { msg };
					_request.error = errorData;

					ParseComplete = true;
				}
			}

			/// <summary>
			/// Tries to parse the error data.
			/// </summary>
			/// <returns><c>true</c>, if error was parsed, <c>false</c> otherwise.</returns>
			/// <param name="request">Request.</param>
			/// <param name="data">Data.</param>
			private bool TryParseWorldWinnerError(IWebRequest request, string data)
			{
				WebRequestErrorData errorData = new WebRequestErrorData();
				errorData.type = WebRequestErrorData.ErrorType.None;

				// attempt to parse any potential error data that could be in the passed in data

				var error1 = new ErrorParsingDataType1();
				if (TryParseError(ref error1, data))
				{
					// we have received an error with a single message. package the error data
					errorData.type = WebRequestErrorData.ErrorType.WorldWinner;

					var msg = new WebRequestErrorData.Error();
					msg.error_message = error1.error.msg;

					errorData.errors = new WebRequestErrorData.Error[] { msg };
					request.error = errorData;

					return true;
				}

				var error2 = new ErrorParsingDataType2();
				if (TryParseError(ref error2, data))
				{
					// we have received a user error. package the errordata
					errorData.type = WebRequestErrorData.ErrorType.WorldWinner;

					string[] rawErrors = error2.result.errors;
					var errors = new WebRequestErrorData.Error[rawErrors.Length];
					for (int i = 0; i < rawErrors.Length; ++i)
					{
						var msg = new WebRequestErrorData.Error();
						msg.error_message = rawErrors[i];

						errors[i] = msg;
					}

					errorData.errors = errors;
					request.error = errorData;

					return true;
				}

				var error3 = new ErrorParsingDataType3();
				if (TryParseError(ref error3, data))
				{
					errorData.type = WebRequestErrorData.ErrorType.WorldWinner;
					errorData.errors = error3.result.errors;
					request.error = errorData;

					return true;
				}

				return false;
			}

			private bool TryParseError<T>(ref T errorData, string data) where T : IErrorParsingData
			{
				try
				{
					if (!string.IsNullOrEmpty(data))
					{
						// try to parse error data if it exists
						errorData = JsonConvert.DeserializeObject<T>(data, _jsonSerializerSettings);
					}
				}
				catch (Exception e)
				{
					GsnDebug.LogWarning(string.Format("Error parsing error data: {0}. Data: {1}", e.Message, data));
					// error doesn't exist in this parse
					return false;
				}

				return errorData.HasData;
			}

			/// <summary>
			/// Releases all resource used by the <see cref="T:WebRequester.Parser"/> object.
			/// </summary>
			/// <remarks>Call <see cref="Dispose"/> when you are finished using the <see cref="T:WebRequester.Parser"/>. The
			/// <see cref="Dispose"/> method leaves the <see cref="T:WebRequester.Parser"/> in an unusable state. After calling
			/// <see cref="Dispose"/>, you must release all references to the <see cref="T:WebRequester.Parser"/> so the garbage
			/// collector can reclaim the memory that the <see cref="T:WebRequester.Parser"/> was occupying.</remarks>
			public void Dispose()
			{
				_request = null;
			}
		}

#endregion


#region WorldWinner Errors

		private bool ValidateWorldWinnerSessionIDError(WebRequestErrorData.Error error)
		{
			string errorMessage = error.error_message;
			string errorCode = error.error_code;

			if (errorMessage.Contains(WW_ERROR_MISSING_SESSION_ID_KEY))
				return true; // we received a message that states we have a missing session id

			if (errorCode == WW_ERROR_CODE_AUTH_REQUIRED_FOR_USER_TOKEN)
				return true; // we received an error code that states we need a session id

			return false; 
		}

		// TODO: Interface to handle all worldwinner errors separately
		private IEnumerator HandleWorldWinnerError(IWebRequest request, ISessionHandler sessionHandler)
		{
			for (int i = 0; i < request.error.errors.Length; ++i)
			{
				WebRequestErrorData.Error error = request.error.errors[i];

				if (ValidateWorldWinnerSessionIDError(error))
				{
					if (sessionHandler != null)
						yield return HandleMissingSessionIDError(request, sessionHandler);
				}
				else
				{
					// by default we stop attempting multiple requests for any world winner errors
					// if something needs to have a retry, then add the handling
					_currentRequests[request] = 0;
				}

				if (_currentRequests[request] == 0)
					break;
			}
		}

		private IEnumerator HandleMissingSessionIDError(IWebRequest request, ISessionHandler sessionHandler)
		{
			// pass the session handler the current retry count
			sessionHandler.retryCount = _currentRequests[request];

			yield return sessionHandler.RefreshSessionID(InternalFetchRequest);

			// get the updated retry count after the session handler attempted to refresh the session id
			_currentRequests[request] = sessionHandler.retryCount;
		}

#endregion

#region Logging Utils

		// A class used to perform actions on certain web requests and not others.
	  private class RequestFilter
		{
			public HashSet<System.Type> typeBlacklist = new HashSet<System.Type>();

			public void Log(IWebRequest request, string str)
			{
				System.Type t = request.GetType();
				// Filter out logs for requests about logs.  Logging this would be way to meta.
				if ( !typeBlacklist.Contains(t) )
				{
					GsnDebug.Log( str );
				}
			}
		}

		private RequestFilter filter = new RequestFilter();

		/// prevent informative logs (GsnDebug.Log level) logging for this particular request type.
		/// This only works for requests that were instantiated as this type.  It does not
		/// squelch logs for requests that inherit from this type.
		public void SquelchInfoLog<WEBREQ_TYPE>() where WEBREQ_TYPE : IWebRequest
		{
			filter.typeBlacklist.Add(typeof(WEBREQ_TYPE));
		}

		private static string GetEndpointName(string url)
		{
			int slashIdx = url.LastIndexOf('/');
			string endpoint = (0 <= slashIdx) ? url.Substring(slashIdx+1) : "<null>";

			// if the last char is a slash, endpoint will be an empty string.  
			// Look for the text after the second to last slash instead
			if (String.IsNullOrEmpty(endpoint))
			{
				slashIdx = url.LastIndexOf('/', Math.Max(slashIdx-1, 0));
				endpoint = (0 <= slashIdx) ? url.Substring(slashIdx+1) : "<null>";
			}

			return endpoint;
		}
	}

#endregion
}
