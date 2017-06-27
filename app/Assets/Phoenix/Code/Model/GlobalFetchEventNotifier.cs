using GSN.Skill.Events;
using GSN.Skill.Requests;
using System.Collections.Generic;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.Model
{
	// This class sends the messages that let the View know when to show / hide the activity indicator.
	public static class GlobalFetchEventNotifier
	{
		private static HashSet<object> _currentFetches = new HashSet<object>();

		public static void OnBeginFetch(object request)
		{
			if (_currentFetches.Contains(request))
			{
				GsnDebug.Log("Key already exists:", request);
			}
			else
			{
				_currentFetches.Add(request);
			}

			EventDispatcher.DispatchEvent(new FetchGlobalBeginEvent());
		}

		public static void OnBeginFetch(IWebRequest request)
		{
			_currentFetches.Add(request);
			EventDispatcher.DispatchEvent(new FetchGlobalBeginEvent());
		}

		public static void OnBeginFetch(WebRequests requests)
		{
			_currentFetches.Add(requests);
			EventDispatcher.DispatchEvent(new FetchGlobalBeginEvent());
		}

		public static void OnFetchCompleteOrFail(IWebRequest request)
		{
			if (_currentFetches.Contains(request))
				_currentFetches.Remove(request);

			request.OnBeginHandler -= OnBeginFetch;
			request.OnCompleteHandler -= OnFetchCompleteOrFail;
			request.OnFailHandler -= OnFetchCompleteOrFail;

			EventDispatcher.DispatchEvent(new FetchGlobalCompleteEvent(_currentFetches.Count));
		}

		public static void OnFetchCompleteOrFail(WebRequests requests)
		{
			if (_currentFetches.Contains(requests))
				_currentFetches.Remove(requests);

			requests.OnRequestsBeginHandler -= OnBeginFetch;
			requests.OnRequestsCompleteHandler -= OnFetchCompleteOrFail;
			requests.OnRequestsFailHandler -= OnFetchCompleteOrFail;

			EventDispatcher.DispatchEvent(new FetchGlobalCompleteEvent(_currentFetches.Count));
		}

		public static void OnFetchCompleteOrFail(object request)
		{
			if (_currentFetches.Contains(request))
				_currentFetches.Remove(request);

			EventDispatcher.DispatchEvent(new FetchGlobalCompleteEvent(_currentFetches.Count));
		}
	}
}
