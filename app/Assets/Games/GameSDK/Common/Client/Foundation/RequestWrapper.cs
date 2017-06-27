using System.Collections.Generic;
using System.Net;
using System.IO;
using System.Text;
using System;
using System.Linq;
using System.Threading;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Games.Common.Utils
{
	/// This class represents a web request that can be re-sent.
	/**
		Normally, web requests are a one-shot thing. Once you dispatch one, it's dead, and cannot be re-sent.
		This class knows how to build web requests, so each time you tell it to send, it re-builds your request.
		This is crucial for any code which wants to retry any request.
	*/
	public class RequestWrapper
	{
		public const string JSON_CONTENT = "application/json";
		public const string MSGPACK_CONTENT = "application/msgpack";

		public string url;
		public string httpMethod;
		public string queryParameters; //Overwritten if _queryParameters exists
		public string contentType = JSON_CONTENT; // default to JSON.

		public delegate void requestCustomizer(WebRequest request);

		//Default request customizer
		public static requestCustomizer globalCustomizeRequest = null;
		public requestCustomizer customizeRequest{get;set;}
		public JObject bodyJObject;
		/// this may be public, but it's overridden if you use addParameter.
		public string bodyParameters; //This is overwritten if bodyJObject exists!
													// You can set bodyBytes if you want to send binary.
		public byte[] bodyBytes ;		// This is overwritten by bodyParameters or bodyJObject if they exist
		public MemoryStream bodyStream ;	// This can be set and it will be used if bodyParameters, bodyJObject, and bodyBytes are all NULL.

		public static int wrapperCounter; // how many RequestWrappers we've constructed.

		public enum HttpMethod {
			GET,
			POST,
			DELETE,
			HEAD,
			PUT,
			TRACE,
			OPTIONS
		}

		public RequestWrapper(string url_ = null, HttpMethod method = HttpMethod.GET) {
			Dispatcher = new WebRequestDispatcher(GlobalActionQueue.instance);
			url = url_;
			httpMethod = method.ToString();
			addHeader("ReqID", (++wrapperCounter).ToString()); // every message gets a unique ReqID. This ID doesn't change on re-send or retry.
		}

		private WebRequest _request;
		private Dictionary<string, string> _headers;
		private Dictionary<string, string> _queryParameters;

		// This is a member because RequestWrapper is designed to be re-used to resend WebRequests. It's public so
		// that all information about the response is accessible to the user of RequestWrapper.
		public WebRequestDispatcher Dispatcher {get; private set;}

		public void addHeader(string key, string value)
		{
			if (_headers == null)
				_headers = new Dictionary<string, string> ();
			_headers.Add (key, value);
		}

		// call this if you don't need to deal with changing JWT during retries.
		public void addAuthHeader(string authToken)
		{
			addHeader ("Authorization", authToken);
		}

		public void addParameter(string key, JToken value)
		{
			if (bodyJObject == null)
				bodyJObject = new JObject();
			bodyJObject.Add (key, value);
		}

		public void addQueryParameter(string key, string value)
		{
			if (_queryParameters == null)
				_queryParameters = new Dictionary<string, string>();
			_queryParameters.Add(key, value);
		}

		// original, split callback.
		public void send(Action<string> successCallback, Action<string> failureCallback)
		{
			send(() => {
				if (Dispatcher.FailReason != null) {
					GsnDebug.Log("Fail Reason: " + Dispatcher.FailReason + " Status:" + Dispatcher.HttpStatusCode + " " + Dispatcher.HttpStatusDescription);
					failureCallback (Dispatcher.ResponseText);
				} else {
					GsnDebug.Log("Response: " + Dispatcher.ResponseText);
					successCallback (Dispatcher.ResponseText);
				}
			});
		}

		// new, unified callback.
		public void send(Action doneAction, int timeout = -1) {

			// here, we might populate the body from 4 different places! :
			// the bodyJObject JObject
			// the bodyParameters string
			// the bodyBytes array
			// the bodyStream MemoryStream.

			/* ultimately, what is passed to the WebRequestDispatcher is a byte array or a memory stream.
			*/

			// parameters in bodyJObject take precedence and overwrite the contents of bodyParameters
			bodyParameters = bodyJObject == null ? bodyParameters : bodyJObject.ToString(Formatting.None);

			// bodyParameters overrides bodyBytes.
			bodyBytes = bodyParameters == null ? bodyBytes : Encoding.UTF8.GetBytes(bodyParameters);

			// add the queryParameters to the url.
			if (_queryParameters != null)
			{
				StringBuilder str = new StringBuilder();
				foreach (KeyValuePair<string, string> kvp in _queryParameters)
				{
					str.AppendFormat("{0}={1}&", kvp.Key, kvp.Value);
				}
				queryParameters = str.ToString();
			}
			if (queryParameters != null && queryParameters != "") {
				url += "?" + queryParameters;
			}

			_request = WebRequestDispatcher.CreateRequest(url);

			_request.ContentType = contentType;
			// _request.Accept = accept;  		// _request is a WebRequest, not an HttpWebRequest. This allows us to use it to read and write local files.
			_request.Method = httpMethod;

			if (_headers != null) {
				foreach (KeyValuePair<string, string> kvp in _headers) {
					//MCF: Found _request.Headers is case-insensitive, but _headers is case-sensitive
					//Warn if we add two headers that _request.Headers thinks are equal.
					if (_request.Headers[kvp.Key] != null)
						GsnDebug.LogWarning("Adding duplicate header", kvp.Key, "(will create a comma-separated list of headers)");

					_request.Headers.Add (kvp.Key, kvp.Value);
				}
			}

			// deal with changeable JWT. Find out what the JWT is right now, rather than sticking with what was true when this RequestWrapper was created.
			if (globalCustomizeRequest != null) {
				globalCustomizeRequest(_request);
			}

			if (customizeRequest != null) {
				customizeRequest(_request);
			}

			// when the request completes, we call the callback, then we destroy the response.
			Dispatcher.DispatchRequest(_request, bodyBytes, bodyStream, doneAction, timeout);
		}
	}
}

