using System;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils
{
	/// Class containing miscellaneous math functions
	public static class GsnMath
	{
		/// Maximum 32-bit signed integer value
		public const int MAX_INT = 0x7FFFFFFF;
		/// Minimum 32-bit signed integer value
		public const int MIN_INT = -2147483647;
		/// Maximum 32-bit unsigned integer value
		public const uint MAX_UINT = 0xFFFFFFFF;
		/// Minimum 32-bit unsigned integer value
		public const uint MIN_UINT = 0;
		/// Absolute value of an integer
		public static int Abs(int a)
		{
			return a>=0 ? a : -a;
		}
		/// Returns a or b, whichever is greater
		public static int Max(int a, int b)
		{
			return a>b ? a : b;
		}
		/// Returns a or b, whichever is smaller
		public static int Min(int a, int b)
		{
			return a<b ? a : b;
		}
		/// Integer square root
		// Integer square root by Halleck's method, with Legalize's speedup
		public static int Isqrt(int inValue)
		{
			int remainder;
			int root;
			int squaredbit;
			
			if (inValue<0)
			{
				throw new Exception("Attempted square root of negative integer!");
			}
			// early out. Everything is unsigned and negative values passed in
			// are not supported.
			if (inValue==0)
			{
				return 0;
			}
			// Load the binary constant 01 00 00 ... 00, where the number
			// of zero bits to the right of the single one bit
			// is even, and the one bit is as far left as is consistant
			// with that condition.)
			// This portable load replaces the loop that used to be 
			// here, and was donated by  legalize@xmission.com
			remainder = inValue>>2;
			squaredbit = 1;
			while(remainder>0)
			{
				remainder >>= 2;
				squaredbit <<= 2;
			}
			// Form bits of the answer.
			remainder = inValue;
			root = 0;
			while(squaredbit>0)
			{
				if (remainder>=(squaredbit | root))
				{
					remainder -= (squaredbit | root);
					root >>= 1;
					root |= squaredbit;
				}
				else
				{
					root >>= 1;
				}
				squaredbit >>= 2;
			}
			return root;
		}

		/// Integer dot product of the vector (a, b) with the vector (x, y)
		public static int DotWith(int a, int b, int x, int y)
		{
			return a*x+b*y;
		}
		/// Integer dot product of the vector (a. b) with the normal of the vector (x, y)
		public static int DotWithNormalOf(int a, int b, int x, int y)
		{
			return a*y+-b*x;
		}
	};
}
