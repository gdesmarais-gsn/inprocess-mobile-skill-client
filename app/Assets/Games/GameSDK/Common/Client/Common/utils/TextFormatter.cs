using System;

namespace GSN.Skill.Games.Common.Utils
{
	public class TextFormatter
	{

		public TextFormatter ()
		{ }
		public static string commify(int intToAddCommasTo)
		{
			return string.Format("{0:n0}", intToAddCommasTo);
		}
	}
}
