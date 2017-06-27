using System;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Trie
{
	public class GsnTrieNode
	{
		protected int _terminal; // a BITFIELD with 1 bit for each letter that ENDS a word.
		public List< GsnTrieNode > _children; // vector of child nodes, for the continuation of words.
		private const int ACODE = 65;
		private const int COMMACODE = 44;

		/**
		 * each GsnTrieNode is the root of a tree of encoded character strings. If all the strings are of length 1, the trienode has
		 * no children. Each trienode can encode up to 26 one-letter strings, all by itself. If we allow for children, it can encode 2 and more
		 * letter words. With just two trienodes, we can encode "A" "I" "IS" "IT" "IF" "IN" "ID". So each trienode stands for the last 
		 * letter of up to 26 words, and its children stand for even more words.
		 * 
		 */

		static GsnTrieNode() {
#if DEBUG
			if (ACODE != "A".CharCodeAt(0))
			{
				throw new Exception("Guh?");
			}
			if (COMMACODE != ",".CharCodeAt(0))
			{
				throw new Exception("Gwah?");
			}
#endif //DEBUG
			
		}

		public GsnTrieNode()
		{
            _children = new List< GsnTrieNode >(26); // a child means that words CONTINUE from this letter.
            for (int x = 0; x < _children.Capacity; ++x)
                _children.Add(null);
            _terminal = 0; // indicates whether there are words which END with the given letter.
		}

		/**
		 * adds to the node, the letters in s, starting at startIndex.  This function walks down the trie. 
		 * @param s
		 * @param startIndex 		index into the string of the first letter.
		 * @param endIndex 			index one beyond that of the last letter to add.
		 *
		 * The difference between the indices is the number of letters to be added.
		 */
		public void AddLetters(string s, int startIndex, int endIndex)
		{
            int i;
			int letterCode;
			GsnTrieNode node;
			
			node = this;
			// for all but the last letter
			for(i = startIndex; i<endIndex-1; ++i)
			{
				letterCode = s.CharCodeAt(i) - ACODE;

				// deal with small letters.
				if (letterCode > 25)
					letterCode -= 32; 

                // it's not the last letter. we may need a child node.
                // Find or make the node for the letter.
                if (null == node._children[letterCode])
				{
					node._children[letterCode] = new GsnTrieNode();
				}

				// move to the letter's node.
				node = node._children[letterCode];
			}

			// i is currently the index of the last letter
			letterCode = s.CharCodeAt(i)-ACODE;

			// set the right terminal bit in the second-to-last letter's node.
			node._terminal |= 1<<letterCode;
		}

        /**
		 * Adds a vector of words 
		 * @param v
		 * 
		 */
        public void AddWordVector(List< string > v) 
		{
			int i;
			int len;
			string str;
			
			len = v.Count;
			for(i = 0; i<len; i++)
			{
				str = v[i];
				AddLetters(str.ToUpper(), 0, str.Length);
			}
		}

		/**
		 * checks to see if a word between si and ei in s is in the trie 
		 * @param s the string to look at.
		 * @param si start index
		 * @param ei end index (AFTER the index of the last letter!)
		 * @return 
		 * 
		 */
		public Boolean IsWord(string s, int si = 0, int ei = -1)
		{
			int i;
			int letterCode;
			GsnTrieNode node;
			
			// index into the word
			if (ei==-1)
			{
				ei = GsnMath.MAX_INT;
			}
			if (ei>s.Length) // fix ei if it is too big.
			{
				ei = s.Length;
			}
			--ei; // we'll do the next loop for ALL BUT the last letter, because we don't require the last letter
			// to have a child.
			// ei now points us to the last letter, rather than the letter AFTER the last.
			// the code of the letter we are at.
			node = this; // this node will walk down the tree.
			for(i = si; i<ei; ++i) // for all but the last letter.
			{ // get the index.
				letterCode = s.CharCodeAt(i)-ACODE;
				node = node._children[letterCode]; // get the child.
				if (node==null)
				{
					return false; // no child! It's not a word.
				}
			}
			// i now equals ei. It points to the last letter.
			letterCode = s.CharCodeAt(i)-ACODE;
			// return true if this letter terminates a word.
			return (0!=(node._terminal & (1<<letterCode)));
		}

        /**
		 * find the length of the longest word starting at si in s, and not in notIn. 
		 * @param s input string
		 * @param si start index in the string
		 * @param notIn trie of words that we will not consider as viable.
		 * @return length of the longest word found.
		 * 
		 */
        public int GetLongestWordLength(string s, int si, GsnTrieNode notIn) 
		{
			int foundWordAt;
			int i;
			int len;
			int letterCode;
			GsnTrieNode node;
			
			// index into the word
			len = s.Length; // length of the string
			node = this;
			foundWordAt = si-1; // si would mean a length of 1. So si - 1 means a length of zero (nothing found).
			for(i = si; i<len; ++i)
			{ // get letter at position i
				letterCode = s.CharCodeAt(i)-ACODE;
				if (0!=(node._terminal & (1<<letterCode))) // it ends a word
				{
					if (!notIn.IsWord(s, si, i+1)) // the word it ends is not in notIn
					{
						foundWordAt = i; // remember the index of the last letter
					}
				}
				node = node._children[letterCode]; // keep looking
				if (node==null)
				{
					break;
				}
			}
			// No more words.
			return foundWordAt-si+1; // return the length of the word.
		}

        /**
		 * Find the longest word in a string. Word must span mustIndex. Word must not be in notIn
		 * 
		 * @param twi input string, with output si and len.
		 * @param mustIndex index of a letter that must be in the word
		 * @param notIn set of words that do not apply
		 * @return true if we found a word. false if we did not find a word
		 * 
		 */
        public Boolean GetBestWord(GsnTrieWordInfo twi, int mustIndex, GsnTrieNode notIn) 
		{
			int bestLen;
			int bestLenIndex;
			int slen;
			int startIndex;
			int wlen;
			
			// for each index into the string, find the length of the longest word starting
			// at that index.
			slen = twi._s.Length;
			bestLen = 0;
			bestLenIndex = 0;
			for(startIndex = 0; startIndex<=mustIndex; ++startIndex)
			{ // find longest word at startIndex, not in notIn
				wlen = GetLongestWordLength(twi._s, startIndex, notIn);
				// mustIndex is the index of a letter that must be in the word.
				if (startIndex+wlen>mustIndex && wlen>=bestLen) // is this word longer than others we've found?
				{
					bestLenIndex = startIndex;
					bestLen = wlen;
				}
			}
			twi._len = bestLen;
			twi._si = bestLenIndex;
			return bestLen>0;
		}

		/**
		 * Add commma-SEPARATED words to the trie.
		 * @param s
		 * 
		 */
		public void AddWords(string s)
		{
			int dictLength;
			int i;
			int letterCode;
			GsnTrieNode node;
			Boolean temp;
			int terminatorCode;
			int terminatorIndex;
			int wordStart;
			
			terminatorIndex = 0;
			wordStart = 0;
			dictLength = s.Length;
			temp = true;
			do // NaN converts to zero as an int.
			{
				terminatorCode = s.CharCodeAt(terminatorIndex);
				if (terminatorCode==0 || terminatorCode==COMMACODE) // here's a comma. Add the word.
				{
					#if G__DEBUG
						if (terminatorIndex==wordStart)
						{
							throw new Exception("empty word");
						}
					#endif
					node = this;
					for(i = wordStart; i<terminatorIndex-1; i++)
					{
						letterCode = s.CharCodeAt(i)-ACODE;
						// it's not the last letter. we may need a child node.
						if (null==node._children[letterCode])
						{
							node._children[letterCode] = new GsnTrieNode();
						}
						node = node._children[letterCode];
					}
					// i is the index of the last letter
					letterCode = s.CharCodeAt(i)-ACODE;
					node._terminal |= 1<<letterCode;
					if (terminatorCode==0)
					{
						break;
					}
					wordStart = terminatorIndex+1;
				}
				terminatorIndex++;
			}
			while(temp);
		}

        /**
		 * Is the string passed in the beginning (or entirety) of any word(s)? 
		 * @param string to be checked
		 * @return whether the string is the beginning of any word(s)
		 * 
		 */
        public Boolean IsValidPrefixstring(string prefix) 
		{
			int aboLength;
			int flag;
			int i;
			int letterCode;
			GsnTrieNode node;
			
			aboLength = prefix.Length-1; // all-but-one length.
			node = this;
			for(i = 0; i<aboLength; ++i) // spin through all but the last letter.
			{
				letterCode = prefix.CharCodeAt(i)-ACODE;
				node = node._children[letterCode];
				if (node==null)
				// there are no words starting with the string so far.
				{
					return false;
				}
			}
			// get the last letter.
			letterCode = prefix.CharCodeAt(i)-ACODE;
			if (node._children[letterCode]!=null)
			{
				return true; // some words continue after the last latter.
			}
			flag = node._terminal & (1<<letterCode);
			if (flag!=0)
			{
				return true; // it's the last letter of a word.
			}
			return false; // the last letter isn't the end of a word, nor does it lead to more words.
		}
	
	};
}
