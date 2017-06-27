using System;

namespace GSN.Skill.Games.Common.Trie
{
	public class GsnTrieWordInfo
	{
		public String _s;
		public int _si;
		public int _len;
		public GsnTrieWordInfo()
		{
		}
		public String getWord()
		{
			return _s.Substring(_si, _len); // Return Substring of length

			// This was
			//return _s.Slice(_si, _si+_len);
		}
	
	};
}
