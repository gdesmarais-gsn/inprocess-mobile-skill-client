using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Networking;

namespace GSN.Skill.Requests
{
	public delegate IEnumerator FetchHandler(IWebRequest request, ISessionHandler sessionHandler = null);

	public interface ISessionHandler
	{
		int retryCount { get; set; }
		void UpdateCookieData(UnityWebRequest unityRequest, IWebRequest request);
		void SetRequestHeader(UnityWebRequest unityRequest);
		Dictionary<string, string> GetRequestHeaders();

		/// <summary>
		/// Refreshes the session identifier.
		/// The fetch handler is given to the caller that we will use to refresh the session.
		/// 
		/// The caller gives us the implementation to make our fetch.
		/// </summary>
		/// <returns>The session identifier.</returns>
		/// <param name="fetchFunction">Fetch function.</param>
		IEnumerator RefreshSessionID(FetchHandler fetchFunction);

#if DEBUG
		void ClearSessionID();
#endif
	}
}
