using UnityEngine;
using System;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Client.DebugMenu
{ 

	public class DebugMenu : BaseDebugMenu
	{
#if DEBUG
        public const int NATIVE_SIZE = 600;
		public const int MIN_CONTENT_WIDTH = 175;
		public Vector2 windowPos = new Vector2(0.02f, 0.02f);
		private Vector2 scrollPos;
		protected bool useScrollBars = false;
		protected bool minimized = true;
				
		public virtual void Awake()
		{
			GameObject speedGO = new GameObject("Speed");
			speedGO.AddComponent<SpeedDebugMenu>();
            speedGO.transform.parent = gameObject.transform;
            speedGO.SetActive(false);

            GameObject fpsGO = new GameObject("FPS");
			fpsGO.AddComponent<FPS>();
            fpsGO.transform.parent = gameObject.transform;
            fpsGO.SetActive(false);

			GameObject consoleExportGO = new GameObject("ConsoleLogExport");
			consoleExportGO.AddComponent<ConsoleLogExportMenu>();
			consoleExportGO.transform.parent = gameObject.transform;
			consoleExportGO.SetActive(false);	
		}
		
		void OnEnable()
		{
			DoScaledGUI((screenWidth,screenHeight) => {
				OnScaledGUI(screenWidth, screenHeight);
				windowRect.x = screenWidth * windowPos.x;
				windowRect.y = screenHeight * windowPos.y;
			});

		}
		
		static void DrawText(string msg, ref Rect rect, Color color)
		{
			GUI.color = color.grayscale > (1.0f/4.0f) ? Color.black : Color.white;
			GUI.Label(new Rect(rect.x+1, rect.y+1, rect.width, rect.height), msg);
			GUI.color = color;
			GUI.Label(rect, msg);
			rect = new Rect(rect.x, rect.y + rect.height * 0.5f, rect.width, rect.height);
		}

		protected override void OnScaledGUI(float screenWidth, float screenHeight)
		{
			if(minimized) 
            {
				windowRect.width = MIN_CONTENT_WIDTH;
				windowRect.height = 24;
			}

			base.OnScaledGUI (screenWidth, screenHeight);
		}

		public override void OnWindow(int windowID)
		{
			//DebugGUIUtils.DisableOtherClicksInWindow();
			if (minimized) 
            {
				windowRect.width = MIN_CONTENT_WIDTH;
				windowRect.height = 24;
			}
            
            if(minimized) 
            {
				GUI.Label(new Rect(30+2, 0, windowRect.width-30, 20), ":::");
			} 
            else 
            {
				GUI.Box(new Rect(2,20,windowRect.width-4,windowRect.height-2-20), GUIContent.none); // hack to make window more opaque
			}
			
			if(GUI.Button(new Rect(0, 0, 30, 20), minimized ? "v" : "^")) 
            {
				minimized = !minimized;
			}

			if(!minimized) 
            {
				GUI.color = new Color(2,0,0);
				if(GUI.Button(new Rect(windowRect.width - 30, 0, 30, 20), "X")) 
                {
					enabled = !enabled;
				}
				GUI.color = Color.white;
			}

			GUI.DragWindow(new Rect(0, 0, windowRect.width, 24));
			
			if(minimized) 
            {
				GUI.DragWindow(new Rect(0, 0, windowRect.width, windowRect.height));
				return;
			}

			FormatChildren ();


			GUI.DragWindow(new Rect(0, 0, windowRect.width, windowRect.height));
		}

		protected virtual void FormatChildren()
		{
			if (useScrollBars)
				scrollPos = GUILayout.BeginScrollView(scrollPos);
			float contentWidth = MIN_CONTENT_WIDTH;
			float contentHeight = 0;

			foreach(Transform childTransform in transform)
			{
				GameObject go = childTransform.gameObject;
				bool ok = false;
				foreach(MonoBehaviour mb in go.GetComponentsInChildren<MonoBehaviour>(true)) {
					if(mb) {
						ok = true;
					}
				}
				if(!ok) {
					continue;
				}
				string name = go.name;
				if(name.EndsWith(" (Immortal)")) {
					name = name.Substring(0, name.Length - " (Immortal)".Length);
				}
				bool oldOn = go.activeSelf;
				bool newOn = GUILayout.Toggle(oldOn, name);
				if(newOn != oldOn) {
					go.SetActive(newOn);
					if(newOn) {
						minimized = true; // auto-minimize menu upon opening a submenu
					}
				}
				Vector2 size = GUI.skin.toggle.CalcSize(new GUIContent(name));
				contentWidth = Mathf.Max(contentWidth, size.x + 24);
				contentHeight += size.y + 4;//MathUtil.Max(size.y, GUI.skin.toggle.lineHeight) + 4;
			}

			windowRect.width = Mathf.Max(50, contentWidth);
			windowRect.height = 24 + contentHeight;

			if (useScrollBars)
				GUILayout.EndScrollView();
		}
#else
		public virtual void Awake() {}
		public override void OnWindow(int windowID) {}
#endif 
	}
}
