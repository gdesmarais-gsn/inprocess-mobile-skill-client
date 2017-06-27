using UnityEngine;
using System.Collections.Generic;
using System.Threading;

namespace GSN.Skill.Games.Common.Client.DebugMenu
{
	internal class FPS : BaseDebugMenu
	{
#if DEBUG
		GUIStyle style;
		public int fontSize = 24;
		float targetFPS;

		Timer fpsTimer;
		bool secondPassed = false;
		int frameCount;
		int visibleFrameCount;

		void OnEnable()
		{
			margins = new Vector4(72,30,117,0);
			DoScaledGUI((screenWidth,screenHeight) => {
				windowRect = new Rect(0,screenHeight-30,117,30);
			});

			targetFPS = Application.targetFrameRate;
			if(targetFPS <= 0) {
				targetFPS = 60f;
			}
			int vSync = QualitySettings.vSyncCount;
			if(vSync > 0) {
				targetFPS = Mathf.Min(targetFPS, 60f / vSync);
			}

			if (fpsTimer == null)
			{
				fpsTimer = new Timer (a => 
				{
					secondPassed = true;
				});

				fpsTimer.Change (0, 1000);
			}
		}

		void OnDisable()
		{
			fpsTimer.Change (Timeout.Infinite, Timeout.Infinite);
			fpsTimer.Dispose ();
			fpsTimer = null;
		}

		public override void OnWindow(int windowID)
		{
			if(style == null) 
			{
				style = new GUIStyle( GUI.skin.label );
				style.normal.textColor = Color.white;
				style.alignment = TextAnchor.MiddleCenter;
				style.fontSize = fontSize ;
			}
			Rect rect = windowRect;
			rect.x = 0;
			rect.y = 0;
			float fps = visibleFrameCount;
			float goodness = fps / targetFPS;
			GUI.color = new Color(2f - goodness, goodness * 2f, (goodness * 2f) - 1f);
			GUI.Label( new Rect(0, 0, rect.width, rect.height), fps.ToString("f1"), style );
			GUI.color = Color.white;
		}
		
		void Update()
		{
			frameCount++;
			if (secondPassed)
			{
				secondPassed = false;
				visibleFrameCount = frameCount;
				frameCount = 0;
			}
		}
#else
		public override void OnWindow(int windowID) {}
#endif
	}
}
