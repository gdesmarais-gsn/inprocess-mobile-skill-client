using System;

namespace GSN.Skill.Games.Common.Utils
{
	/// This class solves the quadratic formula, using ONLY INTEGER MATH.  Tricky stuff.
	public class GsnQuadSolver
	{
		private int _aRecip; // the Reciprocal of A in Ax*x + Bx + C = 0.  A is a very small number like 1/2000, so aRecip is an integer.
		private int _bNum; // the numerator of B in the above (B is represented as a fraction).
		private int _bDenom; // the denominator of B in the above (B is represented as a fraction).
		private int _c; // C in the above. It's just an integer!
		/// One of the two roots of the equation
		public int _root1;
		/// The other of the two roots
		public int _root2;
		/// Creates a new GsnQuadSolver object.
		public GsnQuadSolver()
		{
		}
		/**
			\brief Sets the arguments to the quadratic equation.

			The first parameter is THE RECIPROCAL of A.
			A is a small number, so aRecip is a decent-sized integer.
			Use this function when B is an integer.
			\see setArecipBratC
		*/
		public void SetArecipBC(int aRecip, int b, int c)
		{
			SetArecipBratC(aRecip, b, 1, c);
		}
		/**
		  	\brief Another way of specifying the arugments to the quadratic equation.

			The first argument is still the RECIPROCAL of A.
			If b isn't an integer, use this function to specify b as a numerator and denominator.
			\see setArecipBC
		*/
		public void SetArecipBratC(int aRecip, int bNum, int bDenom, int c)
		{
			_aRecip = aRecip;
			_bNum = bNum;
			_bDenom = bDenom;
			_c = c;
		}
		/// Solves the quadratic equation, setting _root1 and _root2.
		public void Solve()
		{
			int sq;
			
			/* 
				The goal of all of the following modifications to the basic formula are to maximize the speed and accuracy of the result
				without overflowing integer calculation. Since A is usually a very small number, aRecip is a decent sized integer.
			*/
			/*
				the desired result is (-B plus or minus isqrt(B*B - 4*A*C)) / (2*A) 

				Distributing the 1/(2 * A), We can split it into two terms, defering the final plus or minus
			
				So, the two terms are 
						-B/(2*A) 		
				and 
						isqrt(B*B - 4*A*C)/(2*A)
				.	

				That's 
						-B*_aRecip/2 
				and 
			
						_aRecip*isqrt(B*B - 4*A*C)/2
				.
			
				That's 
						-_bNum*_aRecip/(2*_bDenom) 
				and 
						_aRecip*GsnMath.isqrt(_bNum*_bNum/(_bDenom*_bDenom) - 4*_c/_aRecip) / 2
				.
			
				In the second term, the initial _aRecip can be moved into the isqrt argument, by multiplying the argument by _aRecip*_aRecip, to get:
			
					GsnMath.isqrt(_aRecip*_aRecip*_bNum*_bNum/(_bDenom*_bDenom) - 4*_c*_aRecip) / 2
			
				The division by (_bDenom*_bDenom) can be taken out of the argument multiplying the argument by (_bDenom*_bDenom), and dividing the 
				result by _bDenom, to get:
			
					GsnMath.isqrt(_aRecip*_aRecip*_bNum*bNum - 4*_c*_aRecip*_bDenom*_bDenom) / (2 * _bDenom)
			
				Note how both terms want a final division by (2 * _bDenom).  Convenient, so we can defer that division until after the addition
				or subtraction of the two terms.
			
				So, before the final division, the first term is:
			
					- _bNum * _aRecip
			
				And the second term is:
			
					GsnMath.isqrt(_aRecip * _aRecip * _bNum * _bNum   - 4 * _c * _aRecip * _bDenom * _bDenom)
			
			 */
			sq = GsnMath.Isqrt(_aRecip*_aRecip*_bNum*_bNum-4*_c*_aRecip*_bDenom*_bDenom);
			_root1 = (-_bNum*_aRecip+sq)/(_bDenom<<1); // root 1 is PLUS
			_root2 = (-_bNum*_aRecip-sq)/(_bDenom<<1); // root 2 is MINUS
		}
		/// This function returns the value that will have be fed to isqrt() in solve.  Used for testing 
		public int CalculateInnerValue()
		{
			return (_aRecip*_aRecip*_bNum*_bNum-4*_c*_aRecip*_bDenom*_bDenom);
		}
		#if G__UNITTESTS
			/*			private function quadratic(a:Number, b:Number, c:Number) : void
		{
			var root1:Number = (-b + Math.sqrt(b*b - 4 * a * c)) /(2*a);
			var root2:Number = (-b - Math.sqrt(b*b - 4 * a * c)) /(2*a);
			trace(root1,root2);
		}*/
		public void TestSolve()
		{
			GsnQuadSolver solver;
			bool threw;
			
			solver = new GsnQuadSolver();
			threw = false;
			try
			{
				solver.SetArecipBratC(1, 0, 1, 1);
				solver.Solve();
			}
			catch(Exception e)
			{
				threw = true;
			}
			Assert.AssertTrue(threw);
			solver.SetArecipBC(1, 0, -4);
			solver.Solve();
			Assert.AssertTrue(solver._root1==2 && solver._root2==-2);
			solver.SetArecipBratC(4, -19, 4, -5);
			solver.Solve();
			Assert.AssertTrue(solver._root1==20 && solver._root2==-1);
		}
		#endif
	};
}
