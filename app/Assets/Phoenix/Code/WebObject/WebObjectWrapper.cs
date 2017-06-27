using System.Collections.Generic;
using Gree;
using GSN.Skill.Events;
using GSN.Skill.Utils;
using UnityEngine;

namespace GSN.Skill.Phoenix.WebObject
{
	public class WebObjectWrapper
	{
		public string url = string.Empty;

		protected GameObject unityObject;
		protected WebViewObject webViewObject;

		private Dictionary<string, string> _customHeaders = new Dictionary<string, string>();

		public void AddCustomHeader(string headerKey, string headerValue)
		{
			_customHeaders.Add(headerKey, headerValue);
		}

		public string GetCustomHeader(string headerKey)
		{
			return webViewObject.GetCustomHeaderValue(headerKey);
		}

		public void Attach(string i_unityObjectName)
		{
			unityObject = GameObject.Find(i_unityObjectName);
			if (null == unityObject)
			{
				GsnDebug.LogError(string.Format("Cannot find object [{0}] to attach web view to.",
												 i_unityObjectName));
			}
		}

		public void Attach(GameObject i_unityObject)
		{
			unityObject = i_unityObject;
			if (null == unityObject)
			{
				GsnDebug.LogError(string.Format("Cannot attach web view to a null game object."));
			}
		}

		public void Load()
		{
			if (null == unityObject)
			{
				GsnDebug.LogError("WebObjectWrapper.Load() called before WebObjectWrapper.Attach().  You must attach to a game object before loading a web view.");
				return;
			}

			webViewObject = unityObject.AddComponent<WebViewObject>();

			HandleLoad();

			SetCustomHeaders();

#if !UNITY_WEBPLAYER
			if (url.StartsWith("http"))
			{
				webViewObject.LoadURL(url);
			}
			else
			{
				GsnDebug.LogError("Unsupported protocol for WebObjectWrapper, must use http or one of its variants.");
			}
#endif
		}

		/// <summary>
		/// Close the window that's showing the web view and cleanup the
		/// Unity objects used for connecting to and rendering the web page.
		/// This does not destroy the Unity object specific in the Attach function,
		/// it only destroys components this class added to that object for the web view.
		/// </summary>
		public void Close()
		{
			if (null != webViewObject)
			{
				// NOTE: WebViewObject calls the native Destroy in its own OnDestroy.
				UnityEngine.Object.Destroy(webViewObject);
				webViewObject = null;
			}
		}

		/// <summary>
		/// Release the references to the Unity object we're attached to and to the
		/// object that maintains the web view.  This does not cleanup or destroys
		/// the objects like Close. this only removes our reference to them.  The game object
		/// and component life cycle is left to the user and Unity.
		/// </summary>
		public void Release()
		{
			unityObject = null;
			webViewObject = null;
		}

		/// <summary>
		/// Set the margin for each edge.  Each value is relative to the corresponding edge,
		/// don't think of this as an extents/coordinates rectangle.
		/// For example:
		///   If you want a full screen view, pass in (0,0,0,0).
		///   If you want top quarter of the screen, pass in (0,0,0, 3 * (screenHeight/4))
		/// </summary>
		public void SetMargins(int i_left, int i_top, int i_right, int i_bottom)
		{
			webViewObject.SetMargins(i_left, i_top, i_right, i_bottom);
		}

		public void SetVisibility(bool i_isVisible)
		{
			webViewObject.SetVisibility(i_isVisible);
		}

		protected virtual void HandleLoad()
		{
			webViewObject.Init
			(
				err: OnError,
				ld: OnWebViewLoaded,
				/*
				NOTE: we're using the older webview api to work around an audio bug.
				The WKWebView will play corrupt sound, the theory is that since that object
				runs as a separate process, there's contention for audio resources that don't
				exist with the older API.
				*/
				enableWKWebView: false
			);
		}

		protected void SetCustomHeaders()
		{
			foreach (var entry in _customHeaders)
			{
				GsnDebug.Log("Setting custom header:", entry.Key + "/" + entry.Value);
				webViewObject.AddCustomHeader(entry.Key, entry.Value);
			}

			_customHeaders.Clear();
		}

		protected void DispatchWebPageLoadedEvent(string i_msg)
		{
			var evt = new WebPageLoadedEvent();
			evt.url = i_msg;
			evt.webObj = this;
			EventDispatcher.DispatchEvent(evt);
		}

		protected virtual void OnWebViewLoaded(string i_msg)
		{
			DispatchWebPageLoadedEvent(i_msg);
		}

		protected void OnError(string i_msg)
		{
			GsnDebug.LogError(string.Format("WebObjectWrapper::CallOnError[{0}]", i_msg));
		}
	}
}
