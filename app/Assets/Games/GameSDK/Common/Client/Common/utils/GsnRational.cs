using System;
using System.Text;

namespace GSN.Skill.Games.Common.Utils
{
	/**
		\brief Represents a non-integer ("rational") number _exactly_, by storing the fractional portion of the number as an integer numerator and an integer denominator. 

		The number is represented internally by three __parts__: 

		Name         | Contents
		-------------|------------------
		Integer     | The integer portion of the number (can be negative)
		Numerator   | The numerator of a fraction implicitly added to the integer (never negative)
		Denominator | The denominator a fraction implicitly added to the integer (always positive)

		Collectively, these three values are called the __parts__ of the GsnRational. 

		Internally, the parts of each GsnRational are kept in __canonical form__, where the following is true:

		- The numerator is non-negative and smaller than the denominator.
		- The denominator is positive and larger than the numerator.
		- The greatest common divisor of the numerator and the denominator is 1.

		Because of this, for any value a GsnRational is to represent, there is only one way it can be expressed using the internal 
		__parts__&mdash;the fraction is always proper, maximally simplified, and non-negative, and the integer adjusts accordingly to express
		the desired value.

		Inside a GsnRational, the __parts__ are always in canonical form, but because getting parts into canonical form isn't trivial, 
		_outside_ GsnRationals, as arguments to functions which initialize or manipulate GsnRationals, we can use parts 
		which aren't in canonical form. There are three kinds of parts which can be passed to GsnRational methods, differentiated 
		by the _standard_ they meet.

		Kind of __parts__ | Standard
		------------------|--------------------
		Parts | non-negative numerator and denominator
		Proper parts | parts with numerator less than denominator
		Canonical parts | proper parts with fraction maximally simplified

		__Parts__, as such _always_ have a non-negative numerator and denominator. If a function requires parts as input, you must make sure they 
		at least meet this standard.

		Proper parts are parts where the numerator is less than the denominator.

		Canonical parts are proper parts where the fraction is maximally simplified (no method of GsnRational requires you to provide canonical 
		parts as arguments).

		The floating point value of a GsnRational would be computed as follows:

		\code

			float(Integer) + float(Numerator)/float(Denominator)

		\endcode

		The purpose of GsnRational is to enable floating-point-like calculation, using only integer math.

		A side-benefit of GsnRational is that there is no truncation error many computational cases. For example:

		\code

			GsnRational x = new GsnRational(1); // x is 1
			GsnRational y = new GsnRational();	// y defaults to zero.
			x.DivInt(3);						// x is 1/3, not 0.33333333
			y.Assign(x);						// so is y	
			x.Add(y);							// x is now 2/3
			x.Add(y);							// x is now exactly 1, rather than 0.9999999

			if (0 == x.Compare(1, 0, 1)) {
				Debug.Log("It's exactly 1")
			}

		\endcode

		The constructor, as well as function AssignFromParts(), as a convenience, permit the numerator passed in to be greater than denominator passed in,
		as long as both are non-negative. Internally, though, the GsnRational will immediately be converted to canonical form.

		The Compare() function, however, requires _proper_ parts. Not just _parts_, but not necessarily _canonical_ parts.

		Note that since Numerator and Denominator are always positive, it means that representing negative numbers in a GsnRational is a little tricky. 
		For example, -2.3 has the following canonical parts: 

		Part | Value
		-----|----
		Integer | -3
		 Numerator | 7
		 Denominator | 10
		 
		This class is built for speed. There is no checking that any __parts__ used to form a GsnRational are properly formed, so,
		remember, if you are working with __parts__, make sure you don't have a negative numerator or denominator.

	 */
	public class GsnRational
	{
		#if G__UNITTESTS
			public void unitTest()
			{
				GsnRational a;
				GsnRational b;
				
				a = new GsnRational(1);
				b = new GsnRational(0, 2, 3);
				Assert.assertTrue(b.Compare(0, 4, 5)==1);
				Assert.assertTrue(b.Compare(-1, 4, 5)==-1);
				Assert.assertTrue(b.Compare(0, 4, 6)==0);
				a.Add(b);
				Assert.assertTrue(a.Compare(1, 2, 3)==0);
				a.Add(b);
				Assert.assertTrue(a.Compare(2, 1, 3)==0);
				a.Add(a);
				Assert.assertTrue(a.Compare(4, 2, 3)==0);
			}
		#endif
		/// Integer part of the number.  Can be positive or negative. Not advisable to set directly&mdash;use a constructor or assigner.
		public int Integer;
		/// Numerator part of the number.  Non-negative, and less than the denominator part. Not advisable to set directly&mdash;use a constructor or assigner.
		/** The numerator part of an GsnRational is non-negative, less than the denominator part, 
			and the numerator and denominator are relatively prime, meaning their 
			Greatest Common Divisor is 1. */
		public int Numerator;
		/// Denominator part of the number.  Positive, and greater than the numerator part. Not advisable to set directly&mdash;use a constructor or assigner.
		/** The denominator part of an GsnRational is positive, greater than the numerator part, 
			and the numerator and denominator are relatively prime, meaning their 
			Greatest Common Divisor is 1. */
		public int Denominator;
		private int _maxDenominator;
		/// Finds the greatest common divisor of two positive integers.
		public static int GreatestCommonDivisor(int a, int b)
		{
			if (a>b)
			{
				if (b==0)
				{
					return a; // a is nonzero and is the answer.
				}
				// neither are zero.
				while(0!=(a = a%b)) // make a smaller than b
				{ // make b smaller than a
					if (0==(b = b%a))
					{
						return a; // be became zero
					}
				}
				return b; // a became zero
			}
			else
			{
				if (b>a)
				{
					if (a==0)
					{
						return b; // b is nonzero and is the answer.
					}
					// neither are zero.
					while(0!=(b = b%a)) // make b smaller than a
					{ // make a smaller than b 
						if (0==(a = a%b))
						{
							return b; // a became zero
						}
					}
					return a; // b became zero.
				}
				// values are the same. GCD is either one.  If they are both zero, return zero!
				else
				{
					return a;
				}
			}
		}

		// gets this GsnRational into canonical form, assuming numerator and denominator are already non-negative.
		private void simplify()
		{
			int cd;
			
			Integer += (int)(Numerator/Denominator);
			Numerator = Numerator%Denominator; // make a proper fraction.
			cd = GreatestCommonDivisor(Numerator, Denominator);
			Numerator /= cd;
			Denominator /= cd;
			if (Denominator>_maxDenominator)
			{
				Numerator = Numerator*_maxDenominator/Denominator;
				Denominator = _maxDenominator;
			}
		}
		/// Negates this number
		public void Negate()
		{
			if (Numerator!=0)
			{
				Integer = -Integer-1;
				Numerator = Denominator-Numerator;
			}
			else
			{
				Integer = -Integer;
			}
		}
		/// Assigns to this GsnRational from another GsnRational
		public void Assign(GsnRational a)
		{
			Integer = a.Integer;
			Numerator = a.Numerator;
			Denominator = a.Denominator;
		}
		/**
		  \brief Assign the value of this number from a general fraction, which can be improper, or even negative.

		  Automatically simplifies an improper fraction, if necessary.

		  \param n Numerator 	(can be negative, or of larger absolute value than the Denominator)
		  \param d Denominator 	(can be negative)
		  */
		public void AssignFromFraction(int n, int d = 1)
		{
			int sign;
			
			if (n<0)
			{
				sign = -1;
				n = -n;
			}
			else
			{
				sign = 1;
			}

			if (d<0)
			{
				d = -d;
				sign = -sign;
			}

			AssignFromParts(0, n, d); // note n and d are both non-negative.

			if (sign<0)
			{
				Negate();
			}
		}
		/**
		  \brief Assigns to this integer, from __parts__. See the detailed description of GsnRational.

			Be sure that neither n nor d is negative.

		  */
		public void AssignFromParts(
			int i, 			///< integer part (can be positive or negative) 
			int n = 0, 		///< numerator part (must not be negative)
			int d = 1)		///< denominator part (must be positive)
		{
			Integer = i;
			Numerator = n;
			Denominator = d;
			simplify();
		}
		/** \brief Constructs a GsnRational object from __parts__.  See the detailed description of GsnRational.

			The numerator and denominator provided must not be negative.

			It's OK if numerator is greater than demonimator, though. The constructor will convert the __parts__ into canonical form. 
		*/
		public GsnRational(int integer = 0, ///< Integer part. Can be negative. 
			int numerator = 0, 				///< numerator part. Must be non-negative.
			int denominator = 1, 			///< denominator part. Must be positive.
			int maxDenom = 0xffff)			///< limit on the denominator for future calculations. If this limit kicks in, accuracy will suffer.
		{
			_maxDenominator = maxDenom;
			AssignFromParts(integer, numerator, denominator);
		}
		/**
		 * \brief Compares our value with a value expressed as _proper_ __parts__.

		 	_Proper_ __parts__ are __parts__ where the numerator is less than the denominator, 
		 	in addition to neither being negative.

		 	Note that the fraction as provided to Compare() doesn't have to be maximally simplified.

			If the passed in value is | This function returns
			--------|-------
			greater than this GsnRational | 1
			equal to this GsnRational | 0
			less than this GsnRational | -1 

			\returns an integer indicating the size of the passed in __parts__ relative to the value of this GsnRational.

		 */
		public int Compare(
			int i,	///< The integer portion of what we are comparing with. Can be negative.
		 	int n,	///< The numerator of what we are comparing with. Must be non-negative, and less than d
		 	int d 	///< The denominator of what we are comparing with. Must be positive, and greater than n
		 )		{
			int ournum;
			int theirnum;
			
			if (i>Integer)
			{
				return 1;
			}

			if (i<Integer)
			{
				return -1;
			}

			ournum = Numerator*d;
			theirnum = n*Denominator;

			if (theirnum>ournum)
			{
				return 1;
			}
			if (theirnum==ournum)
			{
				return 0;
			}
			return -1;
		}
		/// Adds another GsnRational to this one. It can even be the same one, but if you're going to do that, you might as well use MulInt(2) .
		public void Add(GsnRational a)
		{
			Integer += a.Integer; // add the integer portion.
			// add the fractions.
			if (Denominator==a.Denominator)
			{ // speedy case.
				Numerator += a.Numerator;
			}
			// add fractions without identical denominator.
			else
			{
				Numerator = Numerator*a.Denominator+a.Numerator*Denominator;
				Denominator = Denominator*a.Denominator;
			}
			simplify();
		}
		/// Subtracts another GsnRational from this one.
		public void Subtract(GsnRational a) /*
		 * This doesn't just Negate the incoming value and call add, because we don't want to 
		 * use a temporary.
		 */
		{
			Integer -= a.Integer;
			if (Denominator==a.Denominator)
			// easy case.
			{
				if (a.Numerator>Numerator)
				{
					--Integer;
					Numerator += Denominator; // borrow
				}
				Numerator -= a.Numerator;
			}
			else
			{
				if (a.Numerator*Denominator>Numerator*a.Denominator)
				{
					--Integer;
					Numerator += Denominator; // borrow					
				}
				Numerator = Numerator*a.Denominator-a.Numerator*Denominator;
				Denominator = Denominator*a.Denominator;
			}
			simplify();
		}

		private bool isDigit(string chr)
		{
			string digits;
			
			digits = "0123456789";
			return digits.IndexOf(chr)!=-1;
		}
		private bool isWhiteSpace(string chr)
		{
			string whites;
			
			whites = " \t\f\r\n";
			return whites.IndexOf(chr)!=-1;
		}

		/// Initialize this GsnRational from a floating point value string.
		public void AssignFromString(string s)
		{
			int i;
			int len;
			int negative;
			int zerocode;
			string zstr;
			
			len = s.Length;
			negative = 0;
			i = 0;
			zstr = "0";
			zerocode = zstr.CharCodeAt(0);
			// value of zero unless otherwise specified.
			Integer = 0;
			Numerator = 0;
			Denominator = 1;
			while(i<len && isWhiteSpace(s.CharAt(i)))
			// eat leading whitespace
			{
				++i;
			}
			// check for minus sign.
			if (i<len && s.CharAt(i)=="-")
			{
				++i;
				negative = 1;
			}
			// eat digits for the quotient.
			while(i<len && isDigit(s.CharAt(i)))
			// eat digits
			{
				Integer = Integer*10+s.CharCodeAt(i)-zerocode;
				++i;
			}
			// look for a decimal point.
			if (i<len && s.CharAt(i)==".")
			{ // we have a fractional portion.
				++i;
			}
			// no fraction. Fix the sign, and return.
			else
			{
				if (negative!=0)
				{
					Integer = -Integer;
				}
				return;
			}
			while(i<len && isDigit(s.CharAt(i)))
			// eat digits
			{
				Numerator = Numerator*10+s.CharCodeAt(i)-zerocode;
				Denominator *= 10;
				++i;
			}
			if (negative!=0)
			{ // -1 2/3 becomes -2 + 1/3
				Integer = -(Integer+1);
				Numerator = Denominator-Numerator;
				if (Numerator>=Denominator)
				{ // take 1 out of the fraction, and 
					Numerator -= Denominator;
					++Integer; // add it to the quotient.
				}
			}
			simplify();
		}

		/// Turns this GsnRational into its Reciprocal (1/this)
		public void Reciprocal()
		{
			int d;
			int i;
			int n;
			int sign;
			
			i = Integer;
			n = Numerator;
			d = Denominator;
			if (i<0)
			{
				sign = -1;
				if (n!=0)
				{
					i = -i-1;
					n = d-n;
				}
				else
				{
					i = -i;
				}
			}
			else
			{
				sign = 1;
			}
			Numerator = d;
			Denominator = i*d+n;
			Integer = 0;
			simplify();
			if (sign<0)
			{
				Negate();
			}
		}

		/// Multiplies this GsnRational by an integer
		public void MulInt(int i)
		{
			Integer *= i; // Multiply the quotient and remainder by i.
			Numerator *= i;
			simplify();
		}
		/**
		  \brief Divides this GsnRational by an integer. 

		  This performs standard mathematical (rather than integer) division.  No rounding or truncation happens.
		  */

		public void DivInt(int i ///< The integer to Divide by.
			)
		{
			int a;
			int b;
			int sign;
			
			if (i==0)
			{
				throw new Exception("Divide by zero");
			}
			if (i<0)
			{
				i = -i;
				sign = -1;
			}
			else
			{
				sign = 1;
			}
			if (Integer<0)
			{
				sign = -sign;
				Negate();
			}
			// now everything is positive, but we are remembering the sign.
			// first, Divide the integer portion by i
			a = Integer/i;
			b = Integer%i; // remainder.
			Integer = a;
			// add the remainder to the fraction
			Numerator += b*Denominator;
			// now Divide the fraction by multiplying the denominator.
			Denominator *= i;
			simplify();
			if (sign<0)
			{
				Negate();
			}
		}

		/// Multiply this GsnRational by another GsnRational.
		public void Multiply(GsnRational m)
		{
			int a;
			int b;
			int c;
			int d;
			int e;
			int f;
			int sign;
			
			a = m.Integer;
			b = m.Numerator;
			c = m.Denominator;
			d = Integer;
			e = Numerator;
			f = Denominator;
			if (d<0)
			{
				sign = -1;
				// Negate
				if (e!=0)
				{
					d = -d-1;
					e = f-e;
				}
				else
				{
					d = -d;
				}
			}
			else
			{
				sign = 1;
			}
			if (a<0)
			{
				sign = -sign;
				// Negate
				if (b!=0)
				{
					a = -a-1;
					b = c-b;
				}
				else
				{
					a = -d;
				}
			}
			// now, everything is positive, except perhaps for the sign of the final value.
			Integer = 0;
			Numerator = c*a*f*d+a*c*e+b*f*d+e*b;
			Denominator = f*c;
			simplify();
			if (sign<0)
			{
				Negate();
			}
		}

		/// Divide this GsnRational by another GsnRational
		public void Divide(GsnRational a)
		{
			GsnRational temp;
			
			if (a.IsZero())
			{
				throw new Exception("Divide by zero");
			}
			temp = new GsnRational(a.Integer, a.Numerator, a.Denominator);
			temp.Reciprocal();
			Multiply(temp);
		}

		/**
		\brief Returns the product of this GsnRational and an integer, rounded to the nearest int. Does not modify this GsnRational.
		
		*/
		public int GetRoundedProduct(int i)
		{
			int temp;
			
			// force integer division, because flash sucks.
			temp = (((Numerator*i)<<1)+Denominator)/(Denominator<<1);
			return temp+Integer*i;
		}
		/**

			\brief Returns this GsnRational divided by m, rounded to the nearest integer. Does not modify this GsnRational.

			Probably doesn't work right if m or this GsnRational is negative.

			\returns the result of the division, rounded to the nearest integer.

		*/
		public int GetRoundedDivisionOf(int m)
		{
			int denom;
			
			/*
			
			i + n / d  = (id + n) / d
			
			so, Multiply m by d / (id + n), and round.
			
			(md<<1 + (id + n)) / ((id + n)<<1)
			
			*/
			denom = Integer*Denominator+Numerator;
			return ((m*Denominator<<1)+denom)/(denom<<1);
		}

		/// Multiplies the value of the GsnRational by a power of two and returns the result as an integer. Doesn't modify this GsnRational.
		/**

			This operation is analagous to left-shifting an integer, though what is "left-shifted" here is the entire GsnRational, not
			just its integer portion. So:


			\code

				GsnRational a = new GsnRational(2,2,3); // 2+2/3
				int x = a.GetLShiftedInt(3); 			// multiplies by 2**3, i.e. 8, and returns the integer portion, which is 21;

			\endcode

			\returns the result of the multiplication, as an integer.
		*/
		public int GetLShiftedInt(int sh ///< The power of two to Multiply by.  1 means Multiply by 2. 2 means Multiply by 4, etc.
			)
		{
			return (Integer<<sh)+(int)((Numerator<<sh)/Denominator);
		}

		/// Returns the value of this GsnRational, rounded to the nearest integer. Does not modify this GsnRational.
		/** 

			Values exactly half-way between integers are always rounded up.

			\returns the value of this GsnRational, rounded to the nearest integer
		*/
		public int GetRounded()
		{
			return Integer+((Numerator<<1)>Denominator ? 1 : 0);
		}

		/// Returns this number as a human-readable mixed number string
		public override string ToString()
		{
			StringBuilder str = new StringBuilder();

			str.Append(Integer);
			str.Append("+");
			str.Append(Numerator);
			str.Append("/");
			str.Append(Denominator);
			
			return str.ToString();
		}

		/// Returns true if this GsnRational is zero.
		public bool IsZero()
		{
			return Integer==0 && Numerator==0;
		}
	
	};
}
