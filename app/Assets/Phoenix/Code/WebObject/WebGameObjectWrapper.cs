﻿using System;
using System.Text;
using System.Collections.Generic;

using UnityEngine;

using GSN.Skill.Events;
using GSN.Skill.Utils;

using Gree;

namespace GSN.Skill.Phoenix.WebObject
{
	// Wrapper around a WebViewObject, which takes care of processing the web
	// page's input and rendering.  This class keeps references to Unity objects
	// and will create a component on the object specific in the Load function.
	//
	// When the url is done loading, a WebPageLoadedEvent will be dispatched.
	// This event can be dispatched multiple times even if you make only one Load call.
	// If the webpage allows the app user to go to other pages, you'll get a WebPageLoadedEvent
	// for every page change.
	//
	// You can add session and local storage keys using the public members, but they
	// must be added before you call LoadURL.
	public class 
	WebGameObjectWrapper : WebObjectWrapper
	{
		// HACK: We set local/session storage values by executing javascript after the page
		// have been loaded.  Since it's already loaded, the web code didn't have it so we have
		// to reload the page again for them to take effect.  
		// This is done because we don't know a way to set the storage values outside of javascript,
		// and executing the javascript before the LoadUrl code wasn't getting the values to stick.
		private int loadCount = 0;

		public Dictionary<string, string> sessionStorage = new Dictionary<string, string>();
		public Dictionary<string, string> localStorage = new Dictionary<string, string>();

		#region JavaScript 

		// These are the pieces involved with communicating between the webview's JavaScript
		// and Unity.  JavaScript will send events to Unity, and those events  have a 'detail'
		// property that can be used to send extra information.
		//
		// To listen to a new JS event:
		//   1) Create a class that inherits from IJSEvent.
		//   2) Add the event string to JSEvents, the value must be the same name as the event on the JS side.
		//   3) Add an entry to the js2Unity table, the key being your JSEvents string and the value being the Type of your IJSEvent.
		//	 4) Register a handler for your IJSEvent through the GSN.Skill.Events.EventDispatcher class 
		//      (this handler should be in a class somewhere else).

		// enumeration for the events that we listen to from the web game
		private class JSEvents
		{
			public const string GameReady = "gameReady";
			public const string GameError = "gameError";
			public const string GameEnded = "gameEnded";
			public const string GameDisconnectMessageShow = "gameDisconnectMessageShow";
			public const string GameDisconnectMessageHide = "gameDisconnectMessageHide";
			public const string GameStartButtonClicked = "gameStartButtonClicked";
		}
		// map of JS events to C# type that mirrors that event.
		// That type needs to inherit from IJSEvent
		public static readonly Dictionary<string, System.Type> JS2UnityMap =
			new Dictionary<string, System.Type>()
			{
				{ JSEvents.GameReady, typeof(WebGameReadyEvent) },
				{ JSEvents.GameError, typeof(WebGameErrorEvent) },
				{ JSEvents.GameDisconnectMessageShow, typeof(WebGameDisconnectMessageShowEvent) },
				{ JSEvents.GameDisconnectMessageHide, typeof(WebGameDisconnectMessageHideEvent) },
				{ JSEvents.GameEnded, typeof(WebGameEndedEvent) },
				{ JSEvents.GameStartButtonClicked, typeof(WebGameStartButtonClickedEvent) }
			};


		// string used to separate parts of an event from JS, I.E. separate the event name from its data.
		// The array is for passing the string to the String.Split function.
		private const string GAME_EVENT_PARTS_SEPERATOR = "|||";
		private string[] GAME_EVENT_PARTS_SEPERATOR_ARRAY = { GAME_EVENT_PARTS_SEPERATOR };

		// This is the JS code that allows JS events to be sent to us through our OnJS callback.  
		// Specific events are registered using the RegisterJS2UnityEvent function.
		//
		// For MacOS/iOS, there's a native plugin that uses a class called WKWebView.  The only
		// callbacks we really get from the loaded page with that class involve loading a URL.  The plugin
		// implements a protocol handler where if the url the page is going to is prefixed with 'unity:'
		// then it treats the rest of the string as a message to the Unity layer.
		//
		// We've added our own convention that any event sent to the Unity layer will have a payload property
		// that can be used to send us extra information.
		//
		// Android has the @JavascriptInterface annotation, so this first thunk is not needed here for that platform.
		// The native plugin uses that to set up a direct hook to JS that doesn't involve a protocol handler.
		private const string JS_UNITY_PROTOCOL_HANDLER_THUNK =
#if UNITY_ANDROID
		@"";
#else
		@"
				window.Unity = 
				{
					call: function(msg) 
					{
						window.location = 'unity:' + msg;
					}
				}
			";
#endif

		private const string JS_UNITY_EVENT_THUNK =
#if UNITY_ANDROID
			@"function(e) {Unity.call(event + '" + GAME_EVENT_PARTS_SEPERATOR + @"' + e.detail ); }";
#else
			@"function(e) {window.Unity.call(event + '" + GAME_EVENT_PARTS_SEPERATOR + @"' + e.detail );}";
#endif

		// This is the JS code that calls back into Unity.
		private const string JS_UNITY_EVENT_REGISTER_FUNC = @"
			function registerJS2UnityEvent(event)
			{
				document.addEventListener(event, " + JS_UNITY_EVENT_THUNK + @" );
			}
			";
		private static string RegisterJS2UnityEvent(string jsEvtName)
		{
			return "registerJS2UnityEvent('" + jsEvtName + "');";
		}

		#endregion

		public WebGameObjectWrapper()
		{
			// Make sure all the registered JS event types inherit from IJSEvent, if not
			// remove it from the dictionary so we won't process it.
			var keys = JS2UnityMap.Keys;
			foreach (string k in keys)
			{
				Type evtType = JS2UnityMap[k];
				if (!typeof(IJSEvent).IsAssignableFrom(evtType))
				{
					JS2UnityMap.Remove(k);
					GsnDebug.LogError(string.Format("Event [{0}] of type [{1}] is registered as a JavaScript event, but does not inherit from IJSEvent.  "
													+ "This event will not be sent to the Unity layer."),
													k,
													evtType.ToString());
				}
			}
		}

		protected override void HandleLoad()
		{
			webViewObject.Init
			(
				cb: OnJS,
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

			// HACK: reset the load count so we will be able to apply storage values.
			loadCount = 0;
		}

		protected override void OnWebViewLoaded(string i_msg)
		{
			++loadCount;
			GsnDebug.Log(string.Format("WebObjectWrapper::CallOnLoaded[{0}]  loadCount[{1}]", i_msg, loadCount));

			StringBuilder exec = new StringBuilder();

			// invoke the code that sets up the callbacks to Unity.
			exec.AppendLine(JS_UNITY_PROTOCOL_HANDLER_THUNK);
			exec.AppendLine(JS_UNITY_EVENT_REGISTER_FUNC);

			foreach (var elem in JS2UnityMap)
			{
				exec.AppendLine(RegisterJS2UnityEvent(elem.Key));
			}

			if (loadCount == 1)
			{
				if (null != sessionStorage)
				{
					foreach (var e in sessionStorage)
					{
						exec.AppendFormat("sessionStorage.setItem('{0}','{1}');" + Environment.NewLine, e.Key, e.Value);
					}
				}
				if (null != localStorage)
				{
					foreach (var e in localStorage)
					{
						exec.AppendFormat("localStorage.setItem('{0}','{1}');" + Environment.NewLine, e.Key, e.Value);
					}
				}

				// redirect to the original page, that way the page will re-process itself 
				// with the storage keys we just added.
				exec.AppendFormat(@"window.location='{0}';" + Environment.NewLine, url);
			}
			else
			{
				// We send this for every load but the first, that way the user doesn't have
				// to worry about our redirect hack for the storage keys.
				DispatchWebPageLoadedEvent(i_msg);
			}

			GsnDebug.Log("Executing JavaScript for web game:" + Environment.NewLine
							  + exec.ToString());
			webViewObject.EvaluateJS(exec.ToString());
		}

		private void OnJS(string i_msg)
		{
			GsnDebug.Log(string.Format("WebObjectWrapper::CallFromJS[{0}]", i_msg));

			string[] parts = i_msg.Split(GAME_EVENT_PARTS_SEPERATOR_ARRAY, StringSplitOptions.None);

			int numParts = parts.Length;
			int numExpectedParts = 2;

			if (numParts < numExpectedParts)
			{
				// We can't properly transfer the data to a C# event, bail out.
				GsnDebug.LogError(string.Format("JavaScript event only has {0} parts, expected {1} separated by '{2}'.",
												  numParts,
												  numExpectedParts,
												  GAME_EVENT_PARTS_SEPERATOR));
				return;
			}
			else if (numParts > numExpectedParts)
			{
				// Let the user know there's data we didn't expect, but keep on trucking.
				GsnDebug.LogWarning(string.Format("JavaScript event has {0} parts, expected {1} separated by '{2}'.",
												   numParts,
												   numExpectedParts,
												   GAME_EVENT_PARTS_SEPERATOR));
			}

			string evtName = parts[0];
			string detail = parts[1];

			System.Type evtType;
			if (JS2UnityMap.TryGetValue(evtName, out evtType))
			{
				// The ctor checks the types to make sure this cast is safe.
				IJSEvent evt = (IJSEvent)Activator.CreateInstance(evtType);
				evt.detail = detail;
				evt.webObj = this;

				EventDispatcher.DispatchEvent(evt);
			}
			else
			{
				GsnDebug.LogError(string.Format("Unexpected event [{0}] received from JavaScript.  The event will not be handled by the Unity layer.",
												 evtName));
			}
		}
	}
}
