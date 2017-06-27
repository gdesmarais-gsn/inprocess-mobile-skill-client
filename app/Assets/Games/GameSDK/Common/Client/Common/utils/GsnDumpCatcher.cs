using System;
using System.Diagnostics;

namespace GSN.Skill.Games.Common.Utils
{
	/** \brief A sink for text output, for the sake of verifying that a series of tests generates some specific output. Good for smoke tests.
	*/
	public class GsnDumpCatcher
	{
		private string _dumpString;


		/// Constructs an empty GsnDumpCatcher
		public GsnDumpCatcher()
		{
			_dumpString = "";
		}

		/// Catches dumped output.
		public void 
		CatchDump( 			
			int id, 			///< identifier of the source of the string
			string s) 			///< the string to be appended to what has been "caught".
		{
			_dumpString += (id).ToString()+":"+s+"\n";
		}

		/// Empties the GsnDumpCatcher
		public void Reset()
		{
			_dumpString = "";
		}
		/// Gets all the text caught so far.
		/** 
			\returns the text caught so far.
		*/
		public string GetDumpString() 
		{
			return _dumpString;
		}

		/// Outputs the caught text to the console.
		public void Dump()
		{
			Trace.WriteLine(_dumpString);
		}

		/// Tests what has been caught, against a reference string passed in.
		/** 
			The strings must match exactly.

			\returns true if and only if s is identical to the text caught so far.
		*/
		public bool Require(
			string s, 				//< string to check against.
			bool clearIt = true	//< whether to empty the GsnDumpCatcher after checking, regardless of success
			)
		{
			bool result = true;

			if (_dumpString!=s)
			{
				Trace.WriteLine("Test failed. Wanted:\n"+s+"Got:\n"+_dumpString);
				result = false;
			}
			if (clearIt)
			{
				Reset();
			}
			return result;
		}
	
	};
}
