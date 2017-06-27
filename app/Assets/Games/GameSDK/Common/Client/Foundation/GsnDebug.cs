using System;
using System.Text;
using GSN.Skill.Games.Common.Utils.WebLogging;

namespace GSN.Skill.Games.Common.Utils
{
	// a set of three functions for logging
	public struct LogContext
	{
		public Action<string> log;
		public Action<string> logWarning;
		public Action<string> logError;

		public LogContext(Action<string> log, Action<string> logWarning, Action<string> logError)
		{
			this.log = log;
			this.logWarning = logWarning;
			this.logError = logError;
		}
	}

	/// Contains a logging function convienent for debug messages when Debug.Log is not accessible.
	public class GsnDebug
	{

		private const int NET_LOGGING_PERIOD = 10000;

		private static LogContext context; // the functions we will use for logging.

		private static int _recentLogSize = 100;

		// the log size can be changed. Should generally do it at startup, from a config param.
		public static int recentLogSize {
			get {
				return _recentLogSize;	
			}
			set {
				recentLog = null;
				_recentLogSize = value; 
			}
		}

		private static int nextLogPosition; // where in the string array we'll put the next log
		private static int firstLogPosition; // where the least recent string is.

		private static string[] recentLog; // array of strings representing the recent log.

		// this generally calls Crittercism
		private static Action<Exception> logHandledException;

		// for the consolidate function.
		private static StringBuilder _str = new StringBuilder();

		private static bool upLoading = false; // whether we are already in the process of sending up a log.

		private static ActionQueue actionQueue;

		private static ActionContext netLoggingContext;

		static GsnDebug() {

			actionQueue = GlobalActionQueue.instance;

			// This is where we make the default of logging to be true, but with a very weak strength.
			// so turning off logging in specific contexts is very easy.
			actionQueue.RootActionContext.SetLogging(true, ActionContext.SMALL_LOGGING_PREFERENCE);

			netLoggingContext = actionQueue.NewContext("NetLogging", 0);

		}

		// combines an argument list into a single string.
		public static string consolidate(params object[] args)
		{
			for (int i = 0; i < args.Length; ++i)
			{
				if (i != 0)
					_str.Append(" ");
				_str.Append(args[i] ?? "<null>");
			}

			string retval = _str.ToString();

			_str.Length = 0;

			return retval;
		}

		// Adds a range of strings from the recentLog array to a stringbuilder.
		// finish MUST be greater than start
		private static void appendLogRange(StringBuilder s, int start, int finish) {

			for (int i = start; i < finish; ++i) {
				s.Append(recentLog[i] + Environment.NewLine);
			}
		}

		// This function uploads the logs between firstLogPosition, up to nextLogPosition.
		// if they are the same, it logs every position.
		public static void UploadRecentLog(bool isError) {

			if (upLoading || !haveRecentLogs) {
				GsnDebug.Log("Not uploading recent logs");
				return;
			}

			upLoading = true; // ok, we are working now and we can't be interrupted.

			// DON'T USE GsnDebug.Log or its variants in this block VVVVVVVVVVVVVVVV

			// build a string from the recentLog;
			StringBuilder s = new StringBuilder();

			if (firstLogPosition < nextLogPosition) {
				appendLogRange(s, firstLogPosition, nextLogPosition);
			}
			else
			{
				appendLogRange(s, firstLogPosition, _recentLogSize);
				appendLogRange(s, 0, nextLogPosition);
			}

			// clear it out.
 			Array.Clear(recentLog, 0, _recentLogSize); // empty it.
			firstLogPosition = 0; // start at zero
			nextLogPosition = 0; // start at zero

			haveRecentLogs = false;

			// DON'T USE GsnDebug.Log or its variants in this block ^^^^^^^^^^^^^^^

			// Ok, the recent logs have been cleared out. We can now 
			if (isError) 
			{
				WebLogger.instance.logError(s.ToString());
			}
			else 
			{
				WebLogger.instance.logInfo(s.ToString());
			}

			upLoading = false;

		}

		private static void maybeSendNetLogs() {

			if (netLoggingTimeoutDispatcher.Aborted)
				return;

			UploadRecentLog(false);

			netLoggingTimeoutDispatcher.DispatchTimeout(NET_LOGGING_PERIOD, maybeSendNetLogs);

		}

		private static TimeoutDispatcher netLoggingTimeoutDispatcher;

		public static bool NetLogging {
			get {

				return netLoggingTimeoutDispatcher != null;

			}
			set {

				if (value) {

					if (netLoggingTimeoutDispatcher != null)
						return;

					GsnDebug.Log("Turning on NetLogging".ToRed());

					// start the netLogging TimeoutDispatcher
					netLoggingTimeoutDispatcher = new TimeoutDispatcher(GlobalActionQueue.instance);

					actionQueue.CallActionInContext(maybeSendNetLogs, netLoggingContext);

				} 
				else
				{
					if (netLoggingTimeoutDispatcher == null)
						return;

					netLoggingTimeoutDispatcher.Abort();

					netLoggingTimeoutDispatcher = null;
				}
			}
		}

		private static bool haveRecentLogs;

		private static void UploadRecentLog()
		{
			UploadRecentLog(false);
		}

		private static void addToRecentLog(string s) {

			if (recentLog == null) {
				recentLog = new string[_recentLogSize]; // create it fresh.
				nextLogPosition = 0; // it's empty.
				firstLogPosition = 0;
			}

			haveRecentLogs = true; // we have stuff to send.

			recentLog[nextLogPosition++] = s; // add the string.

			if (nextLogPosition == _recentLogSize) // if we're at the end
				nextLogPosition = 0;				// go to the beginning.

			if (nextLogPosition == firstLogPosition) // if we're full
			{
				if (NetLogging) {
					actionQueue.CallActionInContext(UploadRecentLog, netLoggingContext);
				}
				else
				{
					if (++firstLogPosition == _recentLogSize) // throw one away. If we're at the end. . .
						firstLogPosition = 0; // go to the beginning.
				}
			}
		}

		public static void Log(params object[] args)
		{
			if (!actionQueue.Context.LoggingEnabled)
				return;

			string s = consolidate(args);

			//s += actionQueue.Context.Trace;

			addToRecentLog(s);

			if (context.log == null) 
				return;

			context.log(s);
		}

		public static void LogWarning(params object[] args)
		{

			if (!actionQueue.Context.LoggingEnabled)
				return;

			string s = consolidate(args);

			addToRecentLog(s);

			if (context.logWarning == null)
				return;

			context.logWarning(s);
		}

		public static void LogError(params object[] args)
		{
			if (!actionQueue.Context.LoggingEnabled)
				return;

			string s = consolidate(args);
			if (null == s) {
				return;
			}

			addToRecentLog(s);

			if (context.logError == null)
				return;

			context.logError (s);
		}

		public static void AddLog(Action<string> f, bool onlyIfNull = false)
		{
			if (onlyIfNull && context.log != null)
				return;
			
			context.log += f;
		}

		public static void RemoveLog(Action<string> f)
		{
			context.log -= f;
		}

		public static void AddLogWarning(Action<string> f, bool onlyIfNull = false)
		{
			if (onlyIfNull && context.logWarning != null)
				return;

			context.logWarning += f;
		}

		public static void RemoveLogWarning(Action<string> f)
		{
			context.logWarning -= f;
		}

		public static void AddLogError(Action<string> f, bool onlyIfNull = false)
		{
			if (onlyIfNull && context.logError != null)
				return;

			context.logError += f;
		}

		public static void RemoveLogError(Action<string> f)
		{
			context.logError -= f;
		}

		public static void AddLogHandledException(Action<Exception> f)
		{
			logHandledException += f;
		}

		public static void LogHandledException(Exception e) {
			if (logHandledException == null)
				return;

			logHandledException(e);
		}

		public static LogContext GetContext()
		{
			return context;
		}

		public static void SetContext(LogContext c)
		{
			context = c;
		}

		// color variables. We need light colors in editor, and dark colors on device.
		public static string END_COLOR {get; private set;}

		public static string COLOR_RED {get; private set;}
		public static string COLOR_GREEN {get; private set;}
		public static string COLOR_BLUE {get; private set;}

		public static string COLOR_YELLOW {get; private set;}
		public static string COLOR_CYAN {get; private set;}
		public static string COLOR_MAGENTA {get; private set;}

		public static string COLOR_ORANGE {get; private set;}
		public static string COLOR_SPRING_GREEN {get; private set;}
		public static string COLOR_VIOLET {get; private set;}

		public static string COLOR_CANARY {get; private set;}
		public static string COLOR_ROYAL_BLUE {get; private set;}
		public static string COLOR_PINK {get; private set;}


		public static void SetLightColors() 
		{

			END_COLOR = 	"</color>";

			COLOR_RED = 			"<color=#ff0000ff>"; 
			COLOR_GREEN = 			"<color=#00ff00ff>"; 
			COLOR_BLUE = 			"<color=#8080ffff>"; 

			COLOR_YELLOW = 			"<color=#ffff00ff>"; 
			COLOR_CYAN = 			"<color=#00ffffff>"; 
			COLOR_MAGENTA = 		"<color=#ff00ffff>"; 

			COLOR_ORANGE = 			"<color=#ff8000ff>"; 
			COLOR_SPRING_GREEN =	"<color=#00ff80ff>"; 
			COLOR_VIOLET = 			"<color=#C080ffff>"; 

			COLOR_CANARY = 			"<color=#A0ff00ff>"; 
			COLOR_ROYAL_BLUE = 		"<color=#0080ffff>"; 
			COLOR_PINK = 			"<color=#ff0080ff>"; 

//			ShowColors();

		}

		public static void SetDarkColors() {

			END_COLOR = 	"</color>";

			COLOR_RED = 			"<color=#400000ff>"; 
			COLOR_GREEN = 			"<color=#004000ff>"; 
			COLOR_BLUE = 			"<color=#000080ff>"; 

			COLOR_YELLOW = 			"<color=#404000ff>"; 
			COLOR_CYAN = 			"<color=#004040ff>"; 
			COLOR_MAGENTA = 		"<color=#400040ff>"; 

			COLOR_ORANGE = 			"<color=#402000ff>"; 
			COLOR_SPRING_GREEN =	"<color=#004020ff>"; 
			COLOR_VIOLET = 			"<color=#400080ff>"; 

			COLOR_CANARY = 			"<color=#284000ff>"; 
			COLOR_ROYAL_BLUE = 		"<color=#002040ff>"; 
			COLOR_PINK = 			"<color=#400020ff>"; 

//			ShowColors();

		}

		public static void ShowColors() {

			GsnDebug.Log(COLOR_RED + 		"RED" + END_COLOR);
			GsnDebug.Log(COLOR_GREEN + 		"GREEN" + END_COLOR);
			GsnDebug.Log(COLOR_BLUE + 		"BLUE" + END_COLOR);
			GsnDebug.Log(COLOR_YELLOW + 	"YELLOW" + END_COLOR);
			GsnDebug.Log(COLOR_CYAN + 		"CYAN" + END_COLOR);
			GsnDebug.Log(COLOR_MAGENTA +	"MAGENTA" + END_COLOR);

			GsnDebug.Log(COLOR_ORANGE +			"ORANGE" + END_COLOR);
			GsnDebug.Log(COLOR_SPRING_GREEN +	"SPRING_GREEN" + END_COLOR);
			GsnDebug.Log(COLOR_VIOLET +			"VIOLET" + END_COLOR);
			GsnDebug.Log(COLOR_CANARY +			"CANARY" + END_COLOR);
			GsnDebug.Log(COLOR_ROYAL_BLUE +		"ROYAL_BLUE" + END_COLOR);
			GsnDebug.Log(COLOR_PINK +			"PINK" + END_COLOR);

		}
	}
}
