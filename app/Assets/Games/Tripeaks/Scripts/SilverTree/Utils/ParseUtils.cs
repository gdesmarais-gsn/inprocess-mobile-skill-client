using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Reflection;
namespace Stm.V1_1 { 

// helper functions for parsing C# or possibly other types of text.
// minimizes memory allocations (including string concatenation or substring) where reasonable.
// most functions operate on slices of strings between startIndex inclusive and endIndex exclusive. 
public static partial class ParseUtils
{
	// str[startIndex] should be the opening bracket/paren/etc. before the comma-separated list of args
	public static int CountArgs(string str, int startIndex, int endIndex, char commaChar=',', bool assumeMatchingAngledBrackets=false)
	{
		int count = (endIndex > startIndex) ? 1 : 0;
		if(endIndex > startIndex + 1) {
			int argStartIndex = startIndex + 1;
			while(argStartIndex < endIndex)
			{
				int commaIndex = GetCommaIndex(str, argStartIndex, endIndex, commaChar, assumeMatchingAngledBrackets);
				if(commaIndex == -1) {
					break;
				}
				argStartIndex = commaIndex + 1;
				count++;
			}
		}
		return count;
	}
	
	
	public static int GetIdentifierEndIndex(string str, int startIndex, int endIndex)
	{
		if(startIndex < endIndex && IsIdentifierStartChar(str[startIndex])) {
			startIndex++;
			while(startIndex < endIndex && IsIdentifierChar(str[startIndex])) {
				startIndex++;
			}
		}
		return startIndex;
	}

	public static int GetNumberEndIndex(string str, int startIndex, int endIndex)
	{
		int origStartIndex = startIndex;
		if(startIndex < endIndex && IsNumberPrefixChar(str[startIndex])) {
			startIndex++;
		}
		if(startIndex < endIndex && IsNumberChar(str[startIndex])) {
			startIndex++;
			while(true) {
				while(startIndex < endIndex && IsNumberChar(str[startIndex])) {
					startIndex++;
				}
				if(startIndex < endIndex) {
					char c = str[startIndex];
					if(c == 'e' || c == 'E') {
						startIndex++;
						if(startIndex < endIndex) {
							c = str[startIndex];
							if(c == '+' || c == '-') {
								startIndex++;
							}
						}
						continue;
					}
				}
				break;
			}
			if(str[startIndex - 1] == '.') {
				startIndex--;
			}
		} else {
			startIndex = origStartIndex; // couldn't parse as number
		}
		return startIndex;
	}

//	public static bool SkipSpacesAndDidEnd(string str, ref int startIndex, int endIndex)
//	{
//		while(startIndex < endIndex && str[startIndex] == ' ') {
//			startIndex++;
//		}
//		return (startIndex == endIndex);
//	}

	// skips whitespace and comments
	public static int GetNextTokenStartIndex(string str, int startIndex, int endIndex)
	{
		while(startIndex < endIndex) {
			char c = str[startIndex];
			if(c == ' ' || c == '\t' || c == '\r' || c == '\n') {
				startIndex++;
			} else if(c == '/' && SkipComment(str, ref startIndex, endIndex)) {
				continue;
			} else {
				break;
			}
		}
		return startIndex;
	}

	// given string slice must begin with bracketStartChar, otherwise will return startIndex
	public static int GetBracketEndIndex(string str, int startIndex, int endIndex, char bracketStartChar, char bracketEndChar)
	{
		int depth = 0;
		while(startIndex < endIndex) {
			char c = str[startIndex];
			if(c == bracketStartChar) {
				depth++;
			} else if(c == bracketEndChar) {
				depth--;
			} else if(c == '\'') {
				int idx = GetStringEndIndex(str, startIndex, endIndex, '\'');
				if(idx > startIndex) {
					startIndex = idx;
				}
			} else if(c == '\"') {
				int idx = GetStringEndIndex(str, startIndex, endIndex, '\"');
				if(idx > startIndex) {
					startIndex = idx;
				}
			} else if(c == '@') {
				int idx = GetRawStringEndIndex(str, startIndex, endIndex, '\"');
				if(idx > startIndex+1) {
					startIndex = idx;
				}
			} else if(c == '/') {
				if(SkipComment(str, ref startIndex, endIndex)) {
					continue;
				}
			}
			if(depth == 0) {
				break;
			}
			startIndex++;
		}
		return startIndex;
	}
	
	public static bool SkipComment(string str, ref int startIndex, int endIndex)
	{
		if(str[startIndex] == '/' && startIndex+1 < endIndex)
		{
			if(str[startIndex+1] == '*')
			{
				startIndex = str.IndexOf("*/", startIndex+2) + 1;
				if(startIndex == 0) {
					startIndex = endIndex;
				}
				return true;
			}
			if(str[startIndex+1] == '/')
			{
				startIndex = str.IndexOf('\n', startIndex+2);
				if(startIndex == -1) {
					startIndex = endIndex;
				}
				return true;
			}
		}
		return false;
	}
	
	public static int GetCommaIndex(string str, int startIndex, int endIndex, char commaChar=',', bool assumeMatchingAngledBrackets=false)
	{
		int depth = 0;
		while(startIndex < endIndex) {
			char c = str[startIndex];
			if(c == commaChar) {
				if(depth == 0) {
					return startIndex;
				}
			} else if(c == '(' || c == '[' || c == '{' || (c == '<' && assumeMatchingAngledBrackets)) {
				depth++;
			} else if(c == ')' || c == ']' || c == '}' || (c == '>' && assumeMatchingAngledBrackets)) {
				depth--;
			} else if(c == '\'') {
				int idx = GetStringEndIndex(str, startIndex, endIndex, '\'');
				if(idx > startIndex) {
					startIndex = idx;
				}
			} else if(c == '\"') {
				int idx = GetStringEndIndex(str, startIndex, endIndex, '\"');
				if(idx > startIndex) {
					startIndex = idx;
				}
			} else if(c == '@') {
				int idx = GetRawStringEndIndex(str, startIndex, endIndex, '\"');
				if(idx > startIndex+1) {
					startIndex = idx;
				}
			} else if(c == '/') {
				if(SkipComment(str, ref startIndex, endIndex)) {
					continue;
				}
			}
			if(depth < 0) {
				break;
			}
			startIndex++;
		}
		return -1;
	}
	
	public static int GetStringEndIndex(string str, int startIndex, int endIndex, char quoteChar='\"')
	{
		if(startIndex < endIndex && str[startIndex] == quoteChar) {
			startIndex++;
			bool escaped = false;
			while(startIndex < endIndex) {
				char c = str[startIndex];
				if(escaped) {
					escaped = false;
				} else {
					if(c == quoteChar) {
						return startIndex;
					}
					if(c == '\\') {
						escaped = true;
					}
				}
				startIndex++;
			}
		}
		return -1;
	}
	
	public static int GetRawStringEndIndex(string str, int startIndex, int endIndex, char quoteChar='\"')
	{
		if(startIndex < endIndex && str[startIndex] == '@') {
			startIndex++;
			if(startIndex < endIndex && str[startIndex] == quoteChar) {
				bool inQuotes = false;
				while(startIndex < endIndex) {
					char c = str[startIndex];
					if(c == quoteChar) {
						inQuotes = !inQuotes;
					} else if(!inQuotes) {
						return startIndex-1;
					}
					startIndex++;
				}
				if(startIndex == endIndex && str[startIndex-1] == quoteChar) {
					return startIndex-1;
				}
			}
		}
		return -1;
	}
	
	public static int GetStatementEndIndex(string str, int startIndex, int endIndex, char semicolonChar=';')
	{
		int depth = 0;
		while(startIndex < endIndex) {
			char c = str[startIndex];
			if(c == '(' || c == '[' || c == '{') {
				depth++;
			} else if(c == ')' || c == ']' || c == '}') {
				depth--;
			} else if(c == '\'') {
				int idx = GetStringEndIndex(str, startIndex, endIndex, '\'');
				if(idx > startIndex) {
					startIndex = idx;
				}
			} else if(c == '\"') {
				int idx = GetStringEndIndex(str, startIndex, endIndex, '\"');
				if(idx > startIndex) {
					startIndex = idx;
				}
			} else if(c == '@') {
				int idx = GetRawStringEndIndex(str, startIndex, endIndex, '\"');
				if(idx > startIndex+1) {
					startIndex = idx;
				}
			} else if(c == '/') {
				if(SkipComment(str, ref startIndex, endIndex)) {
					continue;
				}
			}
			if(depth == 0 && (c == '}' || c == semicolonChar)) {
				break;
			}
			startIndex++;
		}
		return startIndex;
	}
	
	public static bool IsIdentifierChar(char c)
	{
		return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_';
	}

	public static bool IsIdentifierStartChar(char c)
	{
		return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_';
	}
	
	static bool IsNumberChar(char c)
	{
		return (c >= '0' && c <= '9') || c == '.' || c == 'f' || c == 'F';
	}
	
	static bool IsNumberPrefixChar(char c)
	{
		return c == '-' || c == '+';
	}

	public static bool IsIdentifierOrDotChar(char c)
	{
		return IsIdentifierChar(c) || c == '.';
	}

	// skips to the first non-whitespace non-comment character of a following line.
	// (may return a commented-out result if startIndex is already within a multi-line comment)
	public static int GetNextLineIndex(string str, int startIndex, int endIndex)
	{
		while(startIndex < endIndex) {
			char c = str[startIndex];
			if(c == '\n' || c == '\r') {
				break;
			} else if(c == '/' && SkipComment(str, ref startIndex, endIndex)) {
				continue;
			}
			startIndex++;
		}
		return GetNextTokenStartIndex(str, startIndex, endIndex);
	}

	// note: if startIndex is partway through an identifier, then wholeWord really means endOfWord
	public static bool StartsWith(string str, int startIndex, int endIndex, string substr, bool wholeWord)
	{
		int lastIndex = startIndex + substr.Length;
		if(lastIndex > endIndex) {
			return false;
		}
		if(wholeWord && lastIndex < endIndex) {
			if(IsIdentifierChar(str[lastIndex])) {
				return false;
			}
		}
		endIndex = lastIndex;
		for(int i = startIndex, j = 0 ; i < endIndex ; i++, j++) {
			if(str[i] != substr[j]) {
				return false;
			}
		}
		return true;
	}
	public static bool StartsWithIgnoringCase(string str, int startIndex, int endIndex, string substr, bool wholeWord)
	{
		int lastIndex = startIndex + substr.Length;
		if(lastIndex > endIndex) {
			return false;
		}
		if(wholeWord && lastIndex < endIndex) {
			if(IsIdentifierChar(str[lastIndex])) {
				return false;
			}
		}
		endIndex = lastIndex;
		for(int i = startIndex, j = 0 ; i < endIndex ; i++, j++) {
			if(char.ToUpper(str[i]) != char.ToUpper(substr[j])) {
				if(j != 0 && char.IsWhiteSpace(str[i-1]) && char.IsWhiteSpace(str[j-1])) {
					// ignore extra whitespace
					bool iWhite = char.IsWhiteSpace(str[i]);
					bool jWhite = char.IsWhiteSpace(str[j]);
					if(iWhite || jWhite) {
						if(!iWhite) {
							i--;
						}
						if(!jWhite) {
							j--;
						}
						continue;
					}
				}
				return false;
			}
		}
		return true;
	}

	// note: returns -1 if the searchChar is not found
	// unlike string.IndexOf, this won't return a commented-out result,
	// as long as startIndex isn't already inside a comment.
	public static int IndexOf(string str, int startIndex, int endIndex, char searchChar)
	{
		while(startIndex < endIndex)
		{
			char c = str[startIndex];
			if(c == searchChar) {
				return startIndex;
			} else if(c == '/' && SkipComment(str, ref startIndex, endIndex)) {
				continue;
			}
			startIndex++;
		}
		return -1;
	}

	// note: returns -1 if the substring is not found
	// unlike string.IndexOf, this won't return a commented-out result,
	// as long as startIndex isn't already inside a comment.
	public static int IndexOf(string str, int startIndex, int endIndex, string substr)
	{
		int substrLen = substr.Length;
		if(substrLen == 0) {
			return startIndex;
		}
		char firstChar = substr[0];
		while(startIndex <= endIndex - substrLen)
		{
			char c = str[startIndex];
			if(c == firstChar && StartsWith(str, startIndex, endIndex, substr, false)) {
				return startIndex;
			} else if(c == '/' && SkipComment(str, ref startIndex, endIndex)) {
				continue;
			}
			startIndex++;
		}
		return -1;
	}
	public static int IndexOfIgnoringCase(string str, int startIndex, int endIndex, string substr)
	{
		int substrLen = substr.Length;
		if(substrLen == 0) {
			return startIndex;
		}
		char firstChar = char.ToUpper(substr[0]);
		while(startIndex <= endIndex - substrLen)
		{
			char c = str[startIndex];
			if(char.ToUpper(c) == firstChar && StartsWithIgnoringCase(str, startIndex, endIndex, substr, false)) {
				return startIndex;
			} else if(c == '/' && SkipComment(str, ref startIndex, endIndex)) {
				continue;
			}
			startIndex++;
		}
		return -1;
	}

	public static int GetMultiIdentifierEndIndex(string str, int startIndex, int endIndex)
	{
		if(startIndex < endIndex && IsIdentifierStartChar(str[startIndex])) {
			startIndex++;
			while(startIndex < endIndex && IsIdentifierOrDotChar(str[startIndex])) {
				startIndex++;
			}
		}
		return startIndex;
	}

//	public static int GetExpressionEndIndex(string str, int startIndex, int endIndex)
//	{
//		int depth = 0;
//		while(startIndex < endIndex) {
//			char c = str[startIndex];
//			if(c == '(' || c == '[' || c == '{') {
//				depth++;
//			} else if(c == ')' || c == ']' || c == '}') {
//				depth--;
//			} else if(c == '\'') {
//				int idx = GetStringEndIndex(str, startIndex, endIndex, '\'');
//				if(idx > startIndex) {
//					startIndex = idx;
//				}
//			} else if(c == '\"') {
//				int idx = GetStringEndIndex(str, startIndex, endIndex, '\"');
//				if(idx > startIndex) {
//					startIndex = idx;
//				}
//			} else if(c == '@') {
//				int idx = GetRawStringEndIndex(str, startIndex, endIndex, '\"');
//				if(idx > startIndex+1) {
//					startIndex = idx;
//				}
//			} else if(c == '/') {
//				if(SkipComment(str, ref startIndex, endIndex)) {
//					continue;
//				}
//			} else if(depth == 0 && (c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == ';')) {
//				break;
//			}
//			startIndex++;
//		}
//		return startIndex;
//	}



	public static string UnescapeString(string s)
	{
		int endIndex = s.Length;
		int escapeIndex = s.IndexOf('\\');
		while(escapeIndex != -1 && escapeIndex + 1 < endIndex) {
			char nextChar = s[escapeIndex + 1];
			string middle;
			int afterIndex = escapeIndex + 2;
			switch(nextChar)
			{
				case '\'': middle = "\'"; break;
				case '\"': middle = "\""; break;
				case '\\': middle = "\\"; break;
				case 'a': middle = "\a"; break;
				case 'b': middle = "\b"; break;
				case 'f': middle = "\f"; break;
				case 'n': middle = "\n"; break;
				case 'r': middle = "\r"; break;
				case 't': middle = "\t"; break;
				case 'u': middle = UnescapeUnicode(s, ref afterIndex, 4); break;
				case 'U': middle = UnescapeUnicode(s, ref afterIndex, 8); break;
				case '0': middle = "\0"; break;
				case 'x': middle = UnescapeUnicodeVariableLength(s, ref afterIndex); break;
				case 'v': middle = "\v"; break;
				default: middle = nextChar.ToString(); break;
			}
			if(afterIndex > endIndex) {
				afterIndex = endIndex;
			}
			int lengthDiff = middle.Length + escapeIndex - afterIndex;
			s = s.Substring(0, escapeIndex) + middle + s.Substring(afterIndex);
			afterIndex += lengthDiff;
			endIndex += lengthDiff;
			escapeIndex = (afterIndex < endIndex) ? s.IndexOf('\\', afterIndex) : -1;
		}
		return s;
	}
	
	static string UnescapeUnicode(string s, ref int index, int length)
	{
		if(length <= 0 || index + length > s.Length) {
			return s.Substring(index-2, 2);
		}
		string codePoint = s.Substring(index, length);
		index += length;
		int code = int.Parse(codePoint, System.Globalization.NumberStyles.HexNumber);
		return char.ConvertFromUtf32(code).ToString();
	}
	
	static string UnescapeUnicodeVariableLength(string s, ref int index)
	{
		int endIndex = s.Length;
		int length = 0;
		while(index+length < endIndex && length < 4 && IsHex(s[index+length])) {
			length++;
		}
		return UnescapeUnicode(s, ref index, length);
	}
	
	static bool IsHex(char c)
	{
		return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
	}


//	public static string EscapeString(string s)
//	{
//		if(s == null) {
//			return null;
//		}
//		int len = s.Length;
//		if(len == 0) {
//			return s;
//		}
//		System.Text.StringBuilder sb = new System.Text.StringBuilder();
//		char[] chars = s.ToCharArray();
//		for(int i = 0 ; i < len ; i++) {
//			char c = chars[i];
//			int ci = (int)c;
//			if(ci < 0x20) {
//				if(c == '\n') {
//					sb.Append("\\n");
//				} else if(c == '\t') {
//					sb.Append("\\t");
//				} else {
//					sb.AppendFormat("\\u{0:x4}", ci);
//				}
//			} else if(ci >= 0x7F) {
//				sb.AppendFormat((ci > 0xFFFF) ? "\\U{0:x8}" : "\\u{0:x4}", ci);
//			} else {
//				sb.Append(c);
//			}
//		}
//		return sb.ToString();
//	}


#if UNITY_EDITOR
	// for now, these aren't used at runtime, so we might as well not compile them outside of the editor

	public static int SkipPreprocessors(string str, int startIndex, int endIndex)
	{
		while(startIndex < endIndex) {
			char c = str[startIndex];
			if(c == '/' && SkipComment(str, ref startIndex, endIndex)) {
				continue;
			} else if(c == '#') {
				startIndex = GetNextLineIndex(str, startIndex, endIndex);
			} else if(c == ' ' || c == '\t' || c == '\r' || c == '\n') {
				startIndex++;
			} else {
				break;
			}
		}
		return startIndex;
	}

	static FastList<int> tempStack;

	// returns the index of the #if that is surrounding "index",
	// or returns startIndex if none.
	// startIndex must be before the first #if in the file (at the start of the file is usually best)
	public static int GetCurrentPreprocessorBlockStart(string str, int startIndex, int endIndex, int index)
	{
		if(index < startIndex) { index = startIndex; }
		if(index > endIndex) { index = endIndex; }
		int origStartIndex = startIndex;
		startIndex = GetNextTokenStartIndex(str, startIndex, endIndex);
		if(tempStack == null) {
			tempStack = new FastList<int>();
		} else {
			tempStack.Clear();
		}
		while(startIndex < index) {
			char c = str[startIndex];
			if(c == '/' && SkipComment(str, ref startIndex, endIndex)) {
				continue;
			} else if(c == '#') {
				if(StartsWith(str, startIndex, endIndex, "#if", true)) {
					tempStack.Add(startIndex);
				} else if(StartsWith(str, startIndex, endIndex, "#elif", true) || StartsWith(str, startIndex, endIndex, "#else", true)) {
					if(tempStack.Count != 0) {
						tempStack[tempStack.Count-1] = startIndex;
					}
				} else if(StartsWith(str, startIndex, endIndex, "#endif", true)) {
					if(tempStack.Count != 0) {
						tempStack.RemoveAt(tempStack.Count-1);
					}
				}
			}
			startIndex = GetNextLineIndex(str, startIndex, endIndex);
		}
		if(tempStack.Count != 0) {
			return tempStack[tempStack.Count-1];
		}
		return origStartIndex;
	}

	// returns the index of the #endif/#else/#elif at the end of what's surrounding "index",
	// or returns endIndex if none.
	// endIndex must be greater than or equal to the index you are searching for.
	public static int GetCurrentPreprocessorBlockEnd(string str, int startIndex, int endIndex, int index)
	{
		if(index < startIndex) { index = startIndex; }
		if(index > endIndex) { index = endIndex; }
		startIndex = GetNextTokenStartIndex(str, index, endIndex);
		int depth = 0;
		while(startIndex < endIndex) {
			char c = str[startIndex];
			if(c == '/' && SkipComment(str, ref startIndex, endIndex)) {
				continue;
			} else if(c == '#') {
				if(StartsWith(str, startIndex, endIndex, "#if", true)) {
					depth++;
				} else if(StartsWith(str, startIndex, endIndex, "#elif", true) || StartsWith(str, startIndex, endIndex, "#else", true)) {
					if(depth == 0) {
						break;
					}
				} else if(StartsWith(str, startIndex, endIndex, "#endif", true)) {
					if(depth == 0) {
						break;
					}
					depth--;
				}
			}
			startIndex = GetNextLineIndex(str, startIndex, endIndex);
		}
		return startIndex;
	}

	public static string GetNamespaceAtIndex(string str, int startIndex, int endIndex, int index)
	{
		if(prevNamespaceStack == null) {
			prevNamespaceStack = new FastList<string>();
		} else {
			prevNamespaceStack.Clear();
		}
		endIndex = MathUtil.Min(endIndex, index);
		string curNamespace = "";
		while(startIndex < endIndex) {
			char c = str[startIndex];
			if(c == '/' && ParseUtils.SkipComment(str, ref startIndex, endIndex)) {
				continue;
			} else if(c == 'n' && ParseUtils.StartsWith(str, startIndex, endIndex, "namespace", true)) {
				startIndex = ParseUtils.GetIdentifierEndIndex(str, startIndex, endIndex);
				startIndex = ParseUtils.GetNextTokenStartIndex(str, startIndex, endIndex);
				int namespaceNameStartIndex = startIndex;
				startIndex = ParseUtils.GetMultiIdentifierEndIndex(str, startIndex, endIndex);
				int namespaceEndIndex = startIndex;
				startIndex = ParseUtils.GetNextTokenStartIndex(str, startIndex, endIndex);
				if(startIndex < endIndex) {
					startIndex++; // skip the '{', since we want to parse inside namespace blocks
				}
				if(namespaceNameStartIndex < namespaceEndIndex) {
					string namespaceName = str.Substring(namespaceNameStartIndex, namespaceEndIndex - namespaceNameStartIndex);
					string newNamespace;
					if(curNamespace.Length == 0) {
						newNamespace = namespaceName;
					} else {
						newNamespace = curNamespace + "." + namespaceName;
					}
					prevNamespaceStack.Add(curNamespace);
					curNamespace = newNamespace;
				}
			} else if(c == '}') {
				// we must be inside a namespace block, since we skip everything else that's in brackets
				// note: we use a stack instead of parsing curNamespace for a dot because a namespace entry can contain one or more dots
				int stackIndex = prevNamespaceStack.Count - 1;
				if(stackIndex >= 0) {
					curNamespace = prevNamespaceStack[stackIndex];
					prevNamespaceStack.RemoveAt(stackIndex);
				} else {
					curNamespace = ""; // shouldn't happen...
				}
			} else if(c == '{') {
				// skip class contents
				startIndex = ParseUtils.GetBracketEndIndex(str, startIndex, endIndex, '{', '}');
			}
			startIndex++;
		}
		return curNamespace;
	}
	static FastList<string> prevNamespaceStack;
#endif

}
}
