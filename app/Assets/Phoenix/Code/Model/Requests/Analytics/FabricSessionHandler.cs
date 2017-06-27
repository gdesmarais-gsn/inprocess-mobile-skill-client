using System;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Requests;
using UnityEngine.Networking;

namespace GSN.Skill.Phoenix.Requests.Analytics
{
	public class FabricSessionHandler : ISessionHandler
	{
		private const string REQUEST_HEADER_AUTHORIZATION_KEY = "Authorization";

		public int retryCount { get; set; }

		public string AuthorizationToken;

#if DEBUG
		public void ClearSessionID()
		{
			// there is no session id we need to update from a fabric session
		}
#endif

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
				// update the request header with the analytics authorization token
				{ REQUEST_HEADER_AUTHORIZATION_KEY, AuthorizationToken }
			};
		}

		public IEnumerator RefreshSessionID(FetchHandler fetchFunction)
		{
			// there is no session id we need to update from a fabric session
			yield return null;
		}

		public void UpdateCookieData(UnityWebRequest unityRequest, IWebRequest request)
		{
			// there is no cookie data we need to extract from a fabric session
		}
	}
}