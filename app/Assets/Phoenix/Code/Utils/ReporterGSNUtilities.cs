using System;

using GSN.Skill.Phoenix.Build;
using GSN.Skill.Phoenix.Controller;
using GSN.Skill.Requests.Config;
using GSN.Skill.Utils;
using UnityEngine;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Strings;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Requests;

namespace GSN.Skill.Phoenix.Utils
{
	public static class ReporterGSNUtilities
	{
		private const int DEFAULT_BUTTON_HEIGHT = 50;
		private const int BUTTON_WIDTH_PER_CHAR = 10;

		private const int DEFAULT_TEXTFIELD_WIDTH = 150;
		private const int DEFAULT_TEXTFIELD_HEIGHT = 50;

		private const int DEFAULT_LABEL_FONT_SIZE = 15;
		private static readonly Color DEFAULT_LABEL_FONT_COLOR = Color.black;

		private const int DEFAULT_SEPARATOR_SPACE = 10;

		private static bool _needRestart = false;

		private static string _currentEnvironment = UserSaveRestore.Global.Environment;
		private static string _currentPort = UserSaveRestore.Global.Port.ToString();

		#if DEBUG
		private static string _currentCountry = UserSaveRestore.Device.SpoofCountryCode;
		private static string _currentState = UserSaveRestore.Device.SpoofState;
		#else
		private static string _currentCountry;
		private static string _currentState;
		#endif // #if DEBUG

		public static MainController controller { private get; set; }

		public static void DrawGSNGUI()
		{
			/////////////////////////////////////////////////////
			// Restart Needed warning
			if (_needRestart)
			{
				Label("A significant change has been made." + Environment.NewLine 
				      + "Please restart the app to see the change.",  
				      20,
				      Color.red);
			}

			/////////////////////////////////////////////////////
			// Build Info
			string ver = "";

			GUILayout.BeginHorizontal();
			Label("App ver:   ", bold:true);  Label(Application.version);
			GUILayout.EndHorizontal();
			GUILayout.BeginHorizontal();
			Label("Build Ver: ", bold:true);  Label(BuildTimeValues.CLIENT_BUILD_NUMBER);
			GUILayout.EndHorizontal();
			GUILayout.BeginHorizontal();
			Label("Branch:    ", bold:true);  Label(BuildTimeValues.CLIENT_BRANCH_NAME);
			GUILayout.EndHorizontal();

			/////////////////////////////////////////////////////
			// Feature control
			Separator();

			if (ButtonClicked("Force Render WebView"))
			{
				#if DEBUG
				EventDispatcher.DispatchEvent(new ForceRenderWebViewEvent());
				#endif // #if DEBUG
			}

			Separator();

			/////////////////////////////////////////////////////
			// Tax Form cheat
			string taxFormURL	= "<unset>";
			if (null != RequestManager.Instance.configData &&
			    null != RequestManager.Instance.configData.Response.result.links )
			{
				taxFormURL = RequestManager.Instance.configData.Response.result.links["taxForm"];
			}

			if (ButtonClicked("Open Tax Form in WebView: " + taxFormURL))
			{
#if DEBUG
				WebViewManager.Instance.OpenNativeURL(taxFormURL);
#endif // #if DEBUG
			}

			Separator();

			if (ButtonClicked("Clear Session ID"))
			{
#if DEBUG
                WebRequester.Instance.ClearSessionID();
#endif // #if DEBUG
			}

			Separator();

			Label("Current Environment:" + _currentEnvironment + " | Current Port:" + _currentPort);

			Label("Quick Set Real Environments:");
			GUILayout.BeginHorizontal();
			EnvironmentConnectionButton("QA Environment", "QA", APIInfoRequestData.INVALID_PORT.ToString());
			EnvironmentConnectionButton("Staging Environment", "Staging", APIInfoRequestData.INVALID_PORT.ToString());
			EnvironmentConnectionButton("Production Environment", "Production", APIInfoRequestData.INVALID_PORT.ToString());

			GUILayout.EndHorizontal();

			Separator();

			/////////////////////////////////////////////////////
			// Server and connections
			Label("Set Dev Environment (Port [-1 means default dev environment]):");
			GUILayout.BeginHorizontal();
			_currentPort = TextField(_currentPort);
			EnvironmentConnectionButton("Dev Environment", "Dev", _currentPort);
			GUILayout.EndHorizontal();

			/////////////////////////////////////////////////////
			// Geo location
			Separator();

			Label("Set Geolocation ( Country[US/CA] / State Abbreviation ):");
			Label("NOTE: Clear both fields to use geolocation.");
			GUILayout.BeginHorizontal();

			_currentCountry = TextField(_currentCountry);
			_currentState = TextField(_currentState);
			if (ButtonClicked("Update Geolocation"))
			{
				#if DEBUG
				UserSaveRestore.Device.SpoofCountryCode = _currentCountry;
				UserSaveRestore.Device.SpoofState = _currentState;
				#endif // #if DEBUG
			}

			if (ButtonClicked("Clear Geolocation Spoof"))
			{
				_currentCountry = string.Empty;
				_currentState = string.Empty;
				#if DEBUG
				UserSaveRestore.Device.SpoofCountryCode = _currentCountry;
				UserSaveRestore.Device.SpoofState = _currentState;
				#endif // #if DEBUG
			}

			GUILayout.EndHorizontal();

			/////////////////////////////////////////////////////
			// Spoof Text
			Separator();

			StringTable.Instance.CheatEnabled = GUILayout.Toggle(StringTable.Instance.CheatEnabled, "Toggle Text Cheat (NOTE: Try to use this only at the beginning of using the app)", GUILayout.Width(200), GUILayout.Height(100));

			/////////////////////////////////////////////////////
		}

		private static GUIStyle labelStyle = new GUIStyle();
		private static void Label(string text, int fontSize = DEFAULT_LABEL_FONT_SIZE, Color? fontColor = null, bool bold = false )
		{
			if( null == fontColor ) fontColor = DEFAULT_LABEL_FONT_COLOR;

			labelStyle.fontSize = fontSize;
			labelStyle.normal.textColor = fontColor.Value;
			labelStyle.margin.top = 10;
			labelStyle.fontStyle = bold ? FontStyle.Bold : FontStyle.Normal;
			labelStyle.stretchWidth = false;
			GUILayout.Label(text, labelStyle);
		}

		private static string TextField(string defaultText, int height = DEFAULT_TEXTFIELD_HEIGHT, int width = DEFAULT_TEXTFIELD_WIDTH)
		{
			return GUILayout.TextField(defaultText, GUILayout.Width(DEFAULT_TEXTFIELD_WIDTH), GUILayout.Height(height));
		}

		private static bool ButtonClicked(string text, int btnHeight = DEFAULT_BUTTON_HEIGHT)
		{
			return GUILayout.Button(text, GUILayout.Width(text.Length * BUTTON_WIDTH_PER_CHAR), GUILayout.Height(btnHeight));
		}

		private static void Separator()
		{
			GUILayout.Space(DEFAULT_SEPARATOR_SPACE);
		}

		private static void EnvironmentConnectionButton(string btnLabel, string environment, string port)
		{
			if (ButtonClicked(btnLabel)) // port changed
			{
				_currentPort = port;
				_currentEnvironment = environment;

				int iport;
				if (!Int32.TryParse(port, out iport))
				{
					GsnDebug.LogError("Cannot set port to [" + port + "], using [" + APIInfoRequestData.INVALID_PORT + "] instead/");
					iport = APIInfoRequestData.INVALID_PORT;
				}

				if (iport != UserSaveRestore.Global.Port ||
					_currentEnvironment != UserSaveRestore.Global.Environment)
				{
					UserSaveRestore.Global.Port = iport;
					UserSaveRestore.Global.Environment = _currentEnvironment;
					_needRestart = true;
				}
			}
		}
	}
}
