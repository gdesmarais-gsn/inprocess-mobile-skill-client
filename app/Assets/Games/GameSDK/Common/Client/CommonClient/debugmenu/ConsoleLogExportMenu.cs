using UnityEngine;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Client.DebugMenu
{
	public class ConsoleLogEntry
	{
		public string Message;
		public string StackTrace;
		public LogType EntryType;
	}
	
	public class ConsoleLogExportMenu : CloseableDebugMenu
	{
		#if DEBUG
		List<ConsoleLogEntry> logEntries;
		bool loggingOn = false;
		bool includeFullStackTrace = false;
		string[] yesNoToggleStrings = new string[]{"No", "Yes"};
		int yesNoToggleWidth = 100;
		
		static readonly string LOGGING_TOGGLE_PREF = "ConsoleLogExportMenu_Logging_On";
		static readonly string FULL_STACK_TRACE_TOGGLE_PREF = "ConsoleLogExportMenu_FullStackTrace_On";
		static readonly int MAX_LOG_ENTRIES = 100000;
		void Awake()
		{
			Application.logMessageReceived += handleLog;
			logEntries = new List<ConsoleLogEntry> ();
			
			if (!PlayerPrefs.HasKey (LOGGING_TOGGLE_PREF) || !PlayerPrefs.HasKey (FULL_STACK_TRACE_TOGGLE_PREF)) {
				PlayerPrefs.SetInt (LOGGING_TOGGLE_PREF, System.Convert.ToInt32 (loggingOn));
				PlayerPrefs.SetInt (FULL_STACK_TRACE_TOGGLE_PREF, System.Convert.ToInt32 (includeFullStackTrace));
			} else {
				loggingOn = System.Convert.ToBoolean (PlayerPrefs.GetInt (LOGGING_TOGGLE_PREF));
				includeFullStackTrace = System.Convert.ToBoolean (PlayerPrefs.GetInt (FULL_STACK_TRACE_TOGGLE_PREF));
			}
		}
		
		public override void OnWindow(int windowID)
		{
			if (logEntries == null) {
				logEntries = new List<ConsoleLogEntry> ();
			}
			
			GUILayout.BeginVertical();
			
			GUI.color = Color.white;
			
			GUILayout.BeginVertical();
			GUILayout.Label("Console Log Exporter");
			GUILayout.EndVertical();
			
			GUILayout.Space (5);
			
			GUILayout.BeginHorizontal();
			GUILayout.Label("Console Logging On");
			int loggingEnabledSelection = System.Convert.ToInt32(loggingOn);
			loggingEnabledSelection = GUILayout.SelectionGrid (loggingEnabledSelection, yesNoToggleStrings,2, GUILayout.Width(yesNoToggleWidth));
			bool newLoggingToggleVal = System.Convert.ToBoolean(loggingEnabledSelection);
			if (loggingOn != newLoggingToggleVal) {
				loggingOn = newLoggingToggleVal;
				PlayerPrefs.SetInt(LOGGING_TOGGLE_PREF, System.Convert.ToInt32(loggingOn));
			}
			GUILayout.EndHorizontal();
			
			GUILayout.BeginHorizontal();
			GUILayout.Label("Include Full Stack Trace?");
			int stackTraceSelection = System.Convert.ToInt32(includeFullStackTrace);
			stackTraceSelection = GUILayout.SelectionGrid (stackTraceSelection, yesNoToggleStrings,2, GUILayout.Width(yesNoToggleWidth));
			bool newStackTraceToggleVal = System.Convert.ToBoolean(stackTraceSelection);
			if (includeFullStackTrace != newStackTraceToggleVal) {
				includeFullStackTrace = newStackTraceToggleVal;
				PlayerPrefs.SetInt(FULL_STACK_TRACE_TOGGLE_PREF, System.Convert.ToInt32(includeFullStackTrace));
			}
			GUILayout.EndHorizontal();
			
			GUILayout.BeginVertical();
			GUILayout.Label(logEntries.Count + " Console Log Entries Captured");
			GUILayout.EndVertical();
			
			GUILayout.BeginHorizontal();
			if (GUILayout.Button("Export"))
			{
				buildAndSendTextFile();
			}
			
			GUILayout.Space (15);
			if (GUILayout.Button("Clear Log"))
			{	
				logEntries = new List<ConsoleLogEntry>();
			}
			GUILayout.EndHorizontal();
			
			GUILayout.Space (15);
			
			GUILayout.BeginVertical();
			GUILayout.Label("Max entries is " + MAX_LOG_ENTRIES + ". Currently at " + logEntries.Count + " / " + MAX_LOG_ENTRIES);
			GUILayout.EndVertical();
			
			GUILayout.EndVertical();
			base.OnWindow(windowID);
		}
		
		void handleLog(string logString, string stackTrace, LogType type) {
			if (loggingOn && logEntries.Count < MAX_LOG_ENTRIES) {
				logEntries.Add (new ConsoleLogEntry (){
					Message = logString,
					StackTrace = stackTrace,
					EntryType = type
				});
			}
		}
		
		void buildAndSendTextFile()
		{
			string text = "";
			for(int i = 0; i < logEntries.Count ; i++)
			{
				ConsoleLogEntry entry = logEntries[i];
				
				if(includeFullStackTrace == true)
				{
					text += System.String.Format("{0}\n{1}\n",entry.Message, entry.StackTrace);
				} else
				{
					text += System.String.Format("{0}\n{1}\n\n",entry.Message, entry.StackTrace.Split('\n')[0]);
				}
			}
			
			sendEmail("", "Arena Console Log File " + System.DateTime.Now, text);
		}
		
		void sendEmail(string email, string subject, string body)
		{
			Application.OpenURL("mailto:" + email + "?subject=" + EscapeURL(subject) + "&body=" + EscapeURL(body));
		}
		
		private static string EscapeURL(string _url)
		{
			return UnityEngine.WWW.EscapeURL(_url).Replace("+", "%20");
		}
		#endif
	}
}

