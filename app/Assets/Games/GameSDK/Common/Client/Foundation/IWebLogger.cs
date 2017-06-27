// this file serves as the interface to Arena's WebLogger, for use by classes in Foundation, and Common

namespace GSN.Skill.Games.Common.Utils.WebLogging 
{
	public interface IWebLogger 
	{

		void logFatal(params object[] args);

		void logError(params object[] args);

		void logWarning(params object[] args);

		void logInfo(params object[] args);
		
		void logDebug(params object[] args);
		
		void logTrace(params object[] args);

	} 

	// this class is how higher-level code can give us their WebLogger to use.
	public class WebLogger 
	{
		private static IWebLogger _instance;

		// this is the fall-back mock if they do't call SetInstance
		private class MockWebLogger : IWebLogger 
		{
			public void logFatal(params object[] args){}

			public void logError(params object[] args){}

			public void logWarning(params object[] args){}

			public void logInfo(params object[] args){}
			
			public void logDebug(params object[] args){}
			
			public void logTrace(params object[] args){}

		}

		// the getter of the instance.
		public static IWebLogger instance 
		{
			get 
			{

				if (_instance == null) 
				{
					_instance = new MockWebLogger(); // A mock will do.
				}

				return _instance;
			}
		}

		// the setter of the instance. No I didn't want to make setting the instance as easy as getting it.
		public static void SetInstance (IWebLogger i) 
		{
			_instance = i;
		}
	} 
}
