using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using GSN.Skill.Phoenix;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Utils;
using UnityEngine.Networking;

namespace GSN.Skill.Requests
{
	public class WorldWinnerSessionHandler : ISessionHandler
	{
		private const string RESPONSE_HEADER_COOKIE_NAME = "Set-Cookie";
		private const string REQUEST_HEADER_COOKIE_NAME = "Cookie";

		/// <summary>
		/// The cookie container parses the CookieHeader provided by a WebRequest
		/// </summary>
		private CookieContainer _cookieContainer = new CookieContainer();
		private static KeyValuePair<string, string> _cookieSessionId;
		private RememberMeLoginRequestData _rememberMeLoginData;

		public int retryCount { get; set; }

#if DEBUG
		public void ClearSessionID()
		{
			_cookieSessionId = new KeyValuePair<string, string>(string.Empty, string.Empty);
		}
#endif

		public void UpdateCookieData(UnityWebRequest unityRequest, IWebRequest request)
		{
			string cookie = unityRequest.GetResponseHeader(RESPONSE_HEADER_COOKIE_NAME);

			if (cookie == null)
			{
				// Response Header had no cookies
				return;
			}

			if (string.IsNullOrEmpty(request.CookieSessionIDKey))
			{
				// the Session ID Cookie Name was not provided with this request
				return;
			}

			// extract the cookie value with CookieContainer and indexing into CookieCollection by cookie key
			Uri uri = new Uri(request.Url);
			_cookieContainer.SetCookies(uri, cookie);
			CookieCollection cookieCollection = _cookieContainer.GetCookies(uri);

			string sessionIdValue = string.Empty;
			if (cookieCollection[request.CookieSessionIDKey] != null)
			{
				sessionIdValue = cookieCollection[request.CookieSessionIDKey].Value;
			}
			else
			{
				GsnDebug.LogError("Cookie name \"" + request.CookieSessionIDKey + "\" does not exist in Response Header.");
			}

			// update the cookie session id based on the request's cookie name
			_cookieSessionId = new KeyValuePair<string, string>(request.CookieSessionIDKey, sessionIdValue);

			GsnDebug.Log("cookie session id key/value:", _cookieSessionId.Key + "/" + _cookieSessionId.Value);
		}

		public void SetRequestHeader(UnityWebRequest unityRequest)
		{
			var headers = GetRequestHeaders();
			foreach (var entry in headers)
			{
				unityRequest.SetRequestHeader(entry.Key, entry.Value);
			}
		}

		public Dictionary<string, string> GetRequestHeaders()
		{
			return new Dictionary<string, string>
			{
				// the cookie session id has been set properly. add it to the request header
				{ REQUEST_HEADER_COOKIE_NAME, _cookieSessionId.Key + "=" + _cookieSessionId.Value + ";" }
			};
		}

		public IEnumerator RefreshSessionID(FetchHandler fetchFunction)
		{
			// the session ID is missing. set the session ID again by reauthenticating
			if (!string.IsNullOrEmpty(UserSaveRestore.Global.AuthenticationToken))
			{
				GsnDebug.LogWarning("User has an auth token. Attempt to reauthenticate.");

				if (_rememberMeLoginData == null)
				{
					_rememberMeLoginData = RequestManager.Instance.rememberMe;
				}

				// reauthenticate with playerpref data
				_rememberMeLoginData.AuthToken = UserSaveRestore.Global.AuthenticationToken;
				_rememberMeLoginData.Username = UserSaveRestore.Global.AuthenticationUsername;

				// make the fetch and update the session id
				yield return fetchFunction(_rememberMeLoginData, this);

				// once complete, try the original request again
				if (retryCount == 0)
					retryCount++;
			}
			else
			{
				// we don't have an auth token. fail early
				retryCount = 0;
			}
		}
	}
}
