using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

using GSN.Skill.Utils;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.WebObject;
using GSN.Skill.Phoenix.Model;

namespace GSN.Skill.Phoenix.View
{
	public class WebGameScreenView : ScreenView
	{
		public GameObject webViewObject;
		private WebObjectWrapper webObj;

#if UNITY_EDITOR
		private bool _loadComplete = false;
#endif

		protected override void OnEnable()
		{
#if !UNITY_EDITOR
			EventDispatcher.AddListener<InitWebViewEvent>(OnInitWebView);
#endif
			EventDispatcher.AddListener<SceneLoadCompleteEvent>(OnLoadComplete);
		}

		protected override void OnDisable()
		{
#if !UNITY_EDITOR
			EventDispatcher.RemoveListener<InitWebViewEvent>(OnInitWebView);
#endif
			EventDispatcher.RemoveListener<SceneLoadCompleteEvent>(OnLoadComplete);
		}

		private void OnInitWebView(IEvent evt)
		{
			var initEvt = evt as InitWebViewEvent;
			webObj = initEvt.webObj;
			webObj.Attach(webViewObject);
		}

		private void OnLoadComplete(IEvent evt)
		{
			if (((SceneLoadCompleteEvent)evt).sceneLoadType == SceneLoadType.GameLoad)
			{
				// we've transitioned out of the load screen and now displaying the web game screen. show the contents
#if UNITY_EDITOR
				_loadComplete = true;
#else
				webObj.SetVisibility(true);
				webObj.SetMargins(0, 0, 0, 0);
#endif
			}
		}

#if UNITY_EDITOR
		void OnGUI()
		{
			if (_loadComplete)
			{
				const int BUTTON_WIDTH = 500;
				const int BUTTON_HEIGHT = 500;
				const string BUTTON_TEXT = "Web Games don't work in Editor!\nReturn to Phoenix";

				int buttonX = (Screen.width - BUTTON_WIDTH) / 2;
				int buttonY = (Screen.height - BUTTON_WIDTH) / 2;

				if (GUI.Button(new Rect(buttonX, buttonY, BUTTON_WIDTH, BUTTON_HEIGHT), BUTTON_TEXT))
				{
					EventDispatcher.DispatchEvent(new WebGameEndedEvent());
				}
			}
		}
#endif
	}
}
