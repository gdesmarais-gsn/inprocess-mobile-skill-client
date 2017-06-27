using UnityEditor;
using System;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Build
{
	public static class BuildHelpers {
		#region Fields
		private static string seperator = String.Empty.PadRight(80,'-') ;
		#endregion
		
		#region Logging
		/// <summary>
		/// Log a blank line
		/// </summary>
		public static void Log() {
			Log(string.Empty);
		}
		
		/// <summary>
		/// Log a dividing line
		/// </summary>
		public static void LogSeperator() {
			Log (seperator) ;
		}
		
		/// <summary>
		/// Log a dividing line of a specified length
		/// </summary>
		public static void LogSeperator(int width) {
			Log (seperator.Substring(0,Math.Min (width,seperator.Length) )) ;
		}
		
		/// <summary>
		/// Log a message.
		/// </summary>
		/// <param name='message'>
		/// The message to log
		/// </param>
		public static void Log(string message) {
			System.Console.WriteLine(message) ;
		}
		
		/// <summary>
		/// Log a message with arguments
		/// </summary>
		/// <param name='format'>
		/// The message format string
		/// </param>
		/// <param name='args'>
		/// The arguments for the message format string
		/// </param>
		public static void Log(string format,params object [] args) {
			Log(string.Format(format,args)) ;
		}
		
		/// <summary>
		/// Log an error message with arguments
		/// </summary>
		/// <param name='format'>
		/// The error message format stirng
		/// </param>
		/// <param name='args'>
		/// The arguments for the message format string
		/// </param>
		private static void LogError(string format,params object [] args) {
			Log("ERROR: {0}",string.Format(format,args)) ;
		}
		
		/// <summary>
		/// Log an error message and exception
		/// </summary>
		/// <param name='message'>
		/// The error message
		/// </param>
		/// <param name='exception'>
		/// The exception associated with the error
		/// </param>
		public static void LogError(string message,Exception exception) {
			Log("ERROR: {0}: {1}",message,exception.Message) ;
		}
		
		/// <summary>
		/// Log an exception
		/// </summary>
		/// <param name='exception'>
		/// The exception to log
		/// </param>
		public static void LogError(Exception exception) {
			Log("ERROR: {0}",exception) ;
		}
		#endregion



		public const string IOS = "ios";
		public const string ANDROID = "android";
		#region Argument Processing
		/// <summary>
		///	This method is not used by this script, but is useful for other scripts which don't need the args
		/// cooked as much as we do
		/// </summary>
		/// <returns>
		/// The arguments as a <see cref="IPropertySet"/>
		/// </returns>
		/// <param name='args'>
		/// the command-line arguments
		/// </param>
		public static Dictionary<string,string> ParseArguments(string [] args) {
			Dictionary<string,string> arguments = new Dictionary<string, string>(StringComparer.InvariantCultureIgnoreCase) ;
				
			foreach(string arg in args) {
				if (arg.Length == 0)
					continue ;
				
				if (arg[0] != '+') 
					continue ;
				
				KeyValuePair<string,string> argPair = ParseArgument(arg) ;
				arguments.Add(argPair.Key,argPair.Value) ;
			}
			
			return arguments ;
		}
		
		/// <summary>
		/// Parse an argument into a Key/Value pair
		/// </summary>
		/// <returns>
		/// The argument as a <see cref="KeyValuePair[string,string]"/>
		/// </returns>
		/// <param name='arg'>
		/// The command-line argument
		/// </param>
		/// <exception cref='ArgumentException'>
		/// Is thrown when an argument passed to a method is invalid.
		/// </exception>
		/// <remarks>
		/// Expected format of argument is: +{key}:{value}
		/// </remarks>
		public static KeyValuePair<string,string> ParseArgument(string arg) {
			if (String.IsNullOrEmpty(arg))
			{
				throw new ArgumentException("Invalid argument.  It cannot be null") ;
			}
			if (arg[0] != '+') {
				throw new ArgumentException("Expecting argument to have '+' prefix") ;
			}
			
			int startOfValue = arg.IndexOf(':') ;
			
			if (startOfValue == -1) {
				throw new ArgumentException("Invalid argument syntax, expected '+{arg}:{value}'") ;
			}
			
			string argName = arg.Substring(1,startOfValue-1) ;
			string argValue = (startOfValue+1 < arg.Length) ? arg.Substring(startOfValue+1) : string.Empty ;

			return new KeyValuePair<string, string>(argName,argValue) ;
		}
		#endregion
		
		/// <summary>
		/// Translate <see cref="MobilePlatform"/> => <see cref="UnityEngine.BuildTarget"/>
		/// </summary>
		/// <returns>
		/// The appropriate value of <see cref="UnityEngine.BuildTarget"/>
		/// </returns>
		/// <param name='platform'>
		/// The platform
		/// </param>
		/// <exception cref='ArgumentException'>
		/// Is thrown when an argument passed to a method is invalid.
		/// </exception>
		public static BuildTarget GetBuildTarget(string platform) {
			switch(platform) {
				case IOS:
					return BuildTarget.iOS ;
				case ANDROID:
					return BuildTarget.Android ;
				default:
					throw new ArgumentException(string.Format("Platform '{0}' is not supported",platform)) ;
			}
		}
		
		/// <summary>
		/// Translate <see cref="MobilePlatform"/> => <see cref="UnityEngine.BuildTargetGroup"/>
		/// </summary>
		/// <returns>
		/// The appropriate value of <see cref="UnityEngine.BuildTargetGroup"/>
		/// </returns>
		/// <param name='platform'>
		/// The platform
		/// </param>
		/// <exception cref='ArgumentException'>
		/// Is thrown when an argument passed to a method is invalid.
		/// </exception>
		public static BuildTargetGroup GetBuildTargetGroup(string platform) {
			switch(platform) {
				case IOS:
					return BuildTargetGroup.iOS ;
				case ANDROID:
					return BuildTargetGroup.Android ;
				default:
					throw new ArgumentException(string.Format("Platform '{0}' is not supported",platform)) ;
			}
		}
	}
}
