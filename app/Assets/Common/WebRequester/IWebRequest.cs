using System;
using System.Collections.Generic;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Requests
{
	public delegate void SingleWebRequestBegin(IWebRequest request);
	public delegate void SingleWebRequestComplete(IWebRequest request);
	public delegate void SingleWebRequestFail(IWebRequest request);
	public delegate void WebRequestsComplete(WebRequests requests);
	public delegate void WebRequestFail(WebRequests requests);
	public delegate void WebRequestsBegin(WebRequests request);

	public enum HttpMethod
	{
		GET,
		POST,
		DELETE,
		HEAD,
		PUT,
		TRACE,
		OPTIONS
	}

	/// <summary>
	/// This handles WorldWinner JSON Error Data
	/// </summary>
	public struct WebRequestErrorData
	{
		public enum ErrorType
		{
			None,
			Unity,
			WorldWinner
		}

		public ErrorType type;
		public Error[] errors;

		public struct Error
		{
			public string error_message;
			public string status;
			public string error_code;

			public Error(string error_message, string status, string error_code)
			{
				this.error_message = error_message;
				this.status = status;
				this.error_code = error_code;
			}
		}
	}

	/// <summary>
	/// The base interface used to define all needs for a used abstract class
	/// 
	/// TODO: Should we just swap this to be an abstract class?
	/// </summary>
	public interface IWebRequest
	{
		HttpMethod HttpMethod { get; }

		int RefreshDataSeconds { get; }
		DateTime LastFetched { get; set; }
		bool IsStale { get; }
		void SetStale();

		SingleWebRequestBegin OnBeginHandler { get; set; }
		SingleWebRequestComplete OnCompleteHandler { get; set; }
		SingleWebRequestFail OnFailHandler { get; set; }

		bool IsError { get; }

		void ClearError();

		/// <summary>
		/// This represents a WorldWinner JSON error object
		/// </summary>
		/// <value>The error.</value>
		WebRequestErrorData error { get; set; }

		string Url { get; }             // the full endpoint url

		JContainer RequestBody { get; }    // the request body data

		string CookieSessionIDKey { get; }

		string ContentType { get; set; }


#if DEBUG
		bool useMockPayload { get; }    // use mock data for requests? (debug only)
		string mockPayload { get; }     // mock payload to use for requests (debug only)
#endif
	}

	/// <summary>
	/// Base generic interface used to define the minimum needed to make a platform endpoint call.
	/// NOTE: this should NOT be used directly, use one of the derived abstract classes below.
	/// 
	/// TODO: Should we just swap this to be an abstract class?
	/// </summary>
	/// <typeparam name="T">the response type which represents the endpoint response structure</typeparam>
	public interface IWebRequest<T> : IWebRequest
	{
		T Response { get; set; }        // the data structure to populate/set
	}

	public abstract class WebRequest<T> : IWebRequest<T> where T : struct
	{
		public SingleWebRequestBegin OnBeginHandler { get; set; }
		public SingleWebRequestComplete OnCompleteHandler { get; set; }
		public SingleWebRequestFail OnFailHandler { get; set; }

		public virtual int RefreshDataSeconds { get { return WebRequester.DEFAULT_FORCE_REFRESH_IN_SECONDS; } }
		private DateTime _lastFetched = DateTime.MinValue;
		public DateTime LastFetched
		{
			get { return _lastFetched; }
			set { _lastFetched = value; }
		}
		public bool IsStale { get { return DateTime.Now > _lastFetched.AddSeconds(RefreshDataSeconds); } }
		public void SetStale() { _lastFetched = DateTime.MinValue; }

		public abstract HttpMethod HttpMethod { get; }

		public abstract T Response { get; set; }        // the data structure to populate/set

		public abstract string Url { get; }             // the full endpoint url

		public abstract string CookieSessionIDKey { get; }

		public string ContentType { get; set; }

		public abstract JContainer RequestBody { get; }    // the request body data

		public void ClearError() { error = new WebRequestErrorData(); }
		public bool IsError { get { return error.type != WebRequestErrorData.ErrorType.None; } }
		public WebRequestErrorData error { get; set; }

#if DEBUG
		public abstract bool useMockPayload { get; }    // use mock data for requests? (debug only)
		public abstract string mockPayload { get; }     // mock payload to use for requests (debug only)
#endif
	}

	/// <summary>
	/// Specifically for GET requests.
	/// </summary>
	public abstract class WebGETRequest<T> : WebRequest<T> where T : struct
	{
		public override HttpMethod HttpMethod { get { return HttpMethod.GET; } }

		// cookie session id will never come from a GET
		public override string CookieSessionIDKey { get { return string.Empty; } }

		// the request body is not needed for a GET
		public override JContainer RequestBody { get { return null; } }
	}

	/// <summary>
	/// Specifically for POST requests.
	/// </summary>
	public abstract class WebPOSTRequest<T> : WebRequest<T> where T : struct
	{
		public override HttpMethod HttpMethod { get { return HttpMethod.POST; } }
	}

	/// <summary>
	/// Specifically for PUT requests.
	/// </summary>
	public abstract class WebPUTRequest<T> : WebRequest<T> where T : struct
	{
		public override HttpMethod HttpMethod { get { return HttpMethod.PUT; } }

		// cookie session id will never come from a PUT
		public override string CookieSessionIDKey { get { return string.Empty; } }
	}

	public sealed class WebRequests : Queue<IWebRequest>
	{
		public enum MultipleRequestType
		{
			Sequential,
			Batch
		}

		public MultipleRequestType type = MultipleRequestType.Sequential;

		public WebRequestsBegin OnRequestsBeginHandler { get; set; }
		public WebRequestsComplete OnRequestsCompleteHandler { get; set; }
		public WebRequestFail OnRequestsFailHandler { get; set; }
	}
}
