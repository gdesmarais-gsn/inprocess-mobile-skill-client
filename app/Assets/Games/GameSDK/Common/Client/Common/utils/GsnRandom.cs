using System;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils
{
	/// Class for producing portable, deterministic random number sequences
	public class GsnRandom
	{
		// Maximum unsigned 16-bit number = 2^16
		private const uint M16_LONG = 65536;
		// Mask for lower 16 bits.
		private const uint M16_MASK = 0xFFFF;
		// Used to mod an integer to yield a short result.
		private const uint M16_MASK_PLUS_ONE = 0x10000;
		// Mask for lower 15 bits.
		private const uint M15_MASK = 0x7FFF;
		// Mask for 31 bits.
		private const uint M31_MASK = 0x7FFFFFFF;
		// Mask for 32 bits.
		private const uint M32_MASK = 0xFFFFFFFF;
		// The original random number seed.
		public uint origSeed { get; private set; }
		// The last random value returned.
		private uint _lastValue;
		// Arrays which hold random 16-bit integers.
		private GsnVector< uint > _mother1;
		private GsnVector< uint > _mother2;
		private uint _burnCount; // how many random numbers have been generated since setting this seed.

		/// \brief Creates a new GSNRandom object
		/// \param iSeed The seed to the random number generator.  If omitted or set to 0, GsnGameUtils.getMSSinceMidnight() is used.
		public GsnRandom(uint iSeed = 0)
		{
			//trace("Constructor");
			// Setup arrays
			_mother1 = new GsnVector< uint >(10, true);
			_mother2 = new GsnVector< uint >(10, true);
			if (iSeed==0)
			// No seed specified. Use system time.
			{
				SetSeed(GsnGameUtils.GetMSSinceMidnight());
			}
			// Use passed-in seed.
			else
			{
				SetSeed(iSeed);
			}
		}
		/// \brief Sets the seed for this random number generator
		/// \param iSeed The random seed.  Cannot be zero.
		/// \param burnCount How many random numbers to burn.  Must be at least 1 to initialize properly,
		public void SetSeed(uint iSeed, uint burnCount = 1)
		{
			if (iSeed == 0)
				throw new ArgumentException("iSeed cannot be zero");

			if (burnCount == 0)
				throw new ArgumentException("burnCount cannot be zero");

			uint lNumber;
			int n;
			uint sNumber;
			
			// Save the original seed value.
			origSeed = iSeed;
			_burnCount = 0; // new seed. no rn's "burned" from it yet.
			// Initialize m_motheri with 9 random values the first time.
			sNumber = iSeed & M16_MASK; // The low 16 bits.
			lNumber = iSeed & M31_MASK; // Only want 31 bits.
			//trace("sNumber: ", sNumber, ", lNumber:", lNumber);
			for(n = 0; n<10; n++)
			// One line multiply with carry.
			{
				lNumber = 30903*sNumber+(lNumber>>16);
				sNumber = lNumber & M16_MASK;
				_mother1[n] = ((sNumber & 1<<15)!=0 ? sNumber | 0xffff0000 : sNumber); // Sign extend
			}
			for(n = 0; n<10; n++)
			// One line multiply with carry.
			{
				lNumber = 30903*sNumber+(lNumber>>16);
				sNumber = lNumber & M16_MASK;
				_mother2[n] = ((sNumber & 1<<15)!=0 ? sNumber | 0xffff0000 : sNumber); // Sign extend
			}
			// Make carry position 15 bits.
			_mother1[0] &= M15_MASK;
			_mother2[0] &= M15_MASK;
			while(_burnCount<burnCount)
			{
				GetNext(); // sets m_iCurrValue
			}
		}
		/// Resets the burn count
		public void Reset()
		{
			SetSeed(origSeed);
		}
		/// Gets the original seed that began this random number stream.
		public uint GetSeed()
		{
			return origSeed;
		}
		/// Gets the number of random values that have been generated so far
		public uint GetBurnCount()
		{
			return _burnCount;
		}
		/// Gets the next pseudo-random number from this stream as an unsigned int between 0 and 2^32-1.
		public uint GetNext()
		{
			uint number1;
			uint number2;
			
			// Move elements 1 to 8 into 2 to 9.
			_mother1[9] = _mother1[8];
			_mother1[8] = _mother1[7];
			_mother1[7] = _mother1[6];
			_mother1[6] = _mother1[5];
			_mother1[5] = _mother1[4];
			_mother1[4] = _mother1[3];
			_mother1[3] = _mother1[2];
			_mother1[2] = _mother1[1];
			_mother2[9] = _mother2[8];
			_mother2[8] = _mother2[7];
			_mother2[7] = _mother2[6];
			_mother2[6] = _mother2[5];
			_mother2[5] = _mother2[4];
			_mother2[4] = _mother2[3];
			_mother2[3] = _mother2[2];
			_mother2[2] = _mother2[1];
			// Put the carry values in numberi.
			number1 = (_mother1[0] & 1<<15)!=0 ? _mother1[0] | 0xffff0000 : _mother1[0]; // Sign extend
			number2 = (_mother2[0] & 1<<15)!=0 ? _mother2[0] | 0xffff0000 : _mother2[0]; // Sign extend
			// Form the linear combinations.
			number1 = number1+1941*_mother1[2]+1860*_mother1[3]+1812*_mother1[4]+1776*_mother1[5]+1492*_mother1[6]+1215*_mother1[7]+1066*_mother1[8]+12013*_mother1[9];
			number2 = number2+1111*_mother2[2]+2222*_mother2[3]+3333*_mother2[4]+4444*_mother2[5]+5555*_mother2[6]+6666*_mother2[7]+7777*_mother2[8]+9272*_mother2[9];
			// Save the high bits of number as the new carry.
			_mother1[0] = (uint)(number1/M16_LONG) & M16_MASK;
			_mother1[0] = (_mother1[0] & 1<<15)!=0 ? _mother1[0] | 0xffff0000 : _mother1[0]; // Sign extend
			_mother2[0] = (uint)(number2/M16_LONG) & M16_MASK;
			_mother2[0] = (_mother2[0] & 1<<15)!=0 ? _mother2[0] | 0xffff0000 : _mother2[0]; // Sign extend
			_mother1[1] = M16_MASK & number1;
			_mother1[1] = (_mother1[1] & 1<<15)!=0 ? _mother1[1] | 0xffff0000 : _mother1[1]; // Sign extend
			_mother2[1] = M16_MASK & number2;
			_mother2[1] = (_mother2[1] & 1<<15)!=0 ? _mother2[1] | 0xffff0000 : _mother2[1]; // Sign extend
			// Combine the two 16 bit random numbers into one 32 bit.
			_lastValue = (_mother1[1]<<16)+_mother2[1];
			++_burnCount; // we've generated one more random number from this seed.
			return _lastValue;
		}
		/// \brief Gets the next pseudo-random number from this stream as an unsigned int between minNum and maxNum, INCLUSIVE.
		/// \param minNum lowest possible return value
	 	/// \param maxNum highest possible return value.
	 	/// \return a number between the two, INCLUSIVE.
		public uint GetNextRange(uint minNum, uint maxNum)
		{
			uint interval;
			
			#if DEBUG
				if (maxNum<minNum)
				{
					throw new Exception("maxNum should be bigger than minNum.");
				}
			#endif
			interval = maxNum-minNum;
			if (interval==0)
			{
				return minNum; // maxNum & minNum are the same number.
			}
			if (interval==M32_MASK)
			{
				return GetNext(); // minNum is 0 & maxNum is 0xFFFFFFFF.
			}
			return (GetNext()%(interval+1))+minNum;
		}
		/// \brief Returns a random uint less than denom
		/// \param denom Upper bound of the return value
		public uint GetNextMod(uint denom)
		{
			return GetNext()%denom;
		}
		// Dump the values
		private void Dump(string heading)
		{
			int i;
			uint num = 0;
			
			GsnDebug.Log(heading);		
			GsnDebug.Log("m_mother1");
			for(i = 0; i<10; i++)
			{
				num = (_mother1[i] & 1<<15)!=0 ? _mother1[i] | 0xffff0000 : _mother1[i];
			}
			GsnDebug.Log("    ", num);
			GsnDebug.Log("m_mother2");
			for(i = 0; i<10; i++)
			{
				num = (_mother2[i] & 1<<15)!=0 ? _mother2[i] | 0xffff0000 : _mother2[i];
			}
			GsnDebug.Log("    ", num);
		}
	};
}
