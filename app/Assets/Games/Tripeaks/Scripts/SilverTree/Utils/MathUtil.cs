using System;
using UnityEngine;
using System.Collections.Generic;

// a place to put Mathf/Vector3/etc. functions that we don't trust Unity to have a faster implementation of,
// or related functions that Unity doesn't exactly provide but that might be generally useful.
public class MathUtil
{
	//
	// float:
	//
	
	public const float Epsilon = 1.0e-30f;

	// might be faster than Mathf.Abs
	public static float Abs(float x)
	{
		if(x < 0) {
			x = -x;
		}
		return x;
	}

	public static float Dist(float x, float y)
	{
		return Abs(x - y);
	}
	
	public static bool NearEqual(float x, float y, float epsilon=0.0001f)
	{
		return Dist(x,y) <= epsilon;
	}
	
	public static bool NearZero(float x, float epsilon=0.0001f)
	{
		return Abs(x) <= epsilon;
	}

	// is unclamped, unlike Mathf.Lerp
	public static float Lerp(float from, float to, float t)
	{
		return from + (to - from) * t;
	}

	public static long LerpLong(long from, long to, double t) {
		return from + (long)((to - from) * t);
	}

	// is unclamped, unlike Mathf.InverseLerp
	public static float InverseLerp(float from, float to, float value)
	{
		return (value - from) / (to - from);
	}

	// is unclamped
	public static float Rescale(float value, float sourceFrom, float sourceTo, float destFrom, float destTo)
	{
		return Lerp(destFrom, destTo, InverseLerp(sourceFrom, sourceTo, value));
	}

	public static float Clamp(float value, float min, float max)
	{
		return (value < min) ? min : ((value > max) ? max : value);
	}
	
	public static float Clamp01(float value)
	{
		return (value < 0.0f) ? 0.0f : ((value > 1.0f) ? 1.0f : value);
	}
	
	public static float Wrap01(float value)
	{
		if(value < 0.0f || value >= 1.0f) {
			value -= Mathf.Floor(value);
		}
		return value;
	}
	
	public static float Wrap0N(float value, float n)
	{
		if(value < 0.0f || value >= n) {
			value -= Mathf.Floor(value/n)*n; // probably not the best way
		}
		return value;
	}
	
	public static float DistWrapped01(float x, float y)
	{
		float dist = Wrap01(x - y);
		if(dist <= 0.5f) { return dist; }
		return 1.0f - dist;
	}
	
	public static float DistWrapped0N(float x, float y, float n)
	{
		float dist = Wrap0N(x - y, n);
		if(dist <= n*0.5f) { return dist; }
		return n - dist;
	}

	public static float DiffWrappedPlusMinusHalf( float x, float y, float n)
	{
		/*
		float dist = Wrap0N(x - y, n);
		if(dist <= n*0.5f) { return dist; }
		return -(n - dist);
		*/
		float half = n * 0.5f;
		float diff = x - y;
		while( diff < -half ){
			diff += n;
		}
		while( diff > half ){
			diff -= n;
		}
		return diff;
	}
	
	public static float DiffWrappedPlusMinusHalf( float x, float y) // n = 1.0f
	{
		float dist = Wrap01(x - y);
		if(dist <= 0.5f) { return dist; }
		return dist - 1.0f;
	}

	public static float LerpClamped(float from, float to, float t)
	{
		return from + (to - from) * Clamp01(t);
	}

	public static float InverseLerpClamped(float from, float to, float value)
	{
		return Clamp01((value - from) / (to - from));
	}

	public static float RescaleClamped(float value, float sourceFrom, float sourceTo, float destFrom, float destTo)
	{
		return LerpClamped(destFrom, destTo, InverseLerp(sourceFrom, sourceTo, value));
	}

	public static bool InRange(float value, float from, float to)
	{
		return (value >= from && value < to);
	}
	
	public static bool InWrappedRange(float value, float from, float to)
	{
		if(from <= to)
		{
			return (value >= from && value < to);
		}
		else
		{
			return (value >= from || value < to);
		}
	}

	public static bool RangesOverlap(float aFrom, float aTo, float bFrom, float bTo)
	{
		return aTo >= bFrom && aFrom <= bTo;
	}

	public static bool WrappedRangesOverlap(float aFrom, float aTo, float bFrom, float bTo)
	{
		if(aFrom <= aTo)
		{
			if(bFrom <= bTo)
			{
				return aTo >= bFrom && aFrom <= bTo;
			}
			else
			{
				return aTo >= bFrom || aFrom <= bTo;
			}
		}
		else
		{
			if(bFrom <= bTo)
			{
				return bTo >= aFrom || bFrom <= aTo;
			}
			else
			{
				return true; // if they both wrap then they must overlap at the wrapping point at least
			}
		}
	}

	public static float Max(float a, float b)
	{
		return (a >= b) ? a : b;
	}

	public static float Min(float a, float b)
	{
		return (a <= b) ? a : b;
	}

	public static float Round(float x)
	{
		return Mathf.Floor(x + 0.5f);
	}


	//
	// Vector2:
	//
	
	public static float Cross(Vector2 a, Vector2 b)
	{
		return a.x * b.y - a.y * b.x;
	}
	public static Vector2 CrossWithZ(Vector2 a)
	{
		return new Vector2(-a.y, a.x);
	}
	
	public static float DivideToScalar(Vector2 num, Vector2 denom)
	{
		if(MathUtil.Abs(denom.x) >= MathUtil.Abs(denom.y))
			return num.x / denom.x;
		else
			return num.y / denom.y;
	}
	
	public static Vector2 Lerp(Vector2 from, Vector2 to, float t)
	{
		return new Vector2(from.x + (to.x - from.x) * t, from.y + (to.y - from.y) * t);
	}

	//
	// Vector3:
	//

	// is unclamped, unlike Vector3.Lerp
	public static Vector3 Lerp(Vector3 from, Vector3 to, float t)
	{
		//return from + (to - from) * t;
		return new Vector3(from.x + (to.x - from.x) * t, from.y + (to.y - from.y) * t, from.z + (to.z - from.z) * t);
	}
	
	// elementwise
	public static Vector3 Clamp(Vector3 value, Vector3 min, Vector3 max)
	{
		value.x = Clamp(value.x, min.x, max.x);
		value.y = Clamp(value.y, min.y, max.y);
		value.z = Clamp(value.z, min.z, max.z);
		return value;
	}
	
	// elementwise
	public static Vector3 Clamp01(Vector3 value)
	{
		value.x = Clamp01(value.x);
		value.y = Clamp01(value.y);
		value.z = Clamp01(value.z);
		return value;
	}

	// elementwise
	public static Vector3 Max(Vector3 value1, Vector3 value2)
	{
		value1.x = Max(value1.x, value2.x);
		value1.y = Max(value1.y, value2.y);
		value1.z = Max(value1.z, value2.z);
		return value1;
	}
	
	// elementwise
	public static Vector3 Min(Vector3 value1, Vector3 value2)
	{
		value1.x = Min(value1.x, value2.x);
		value1.y = Min(value1.y, value2.y);
		value1.z = Min(value1.z, value2.z);
		return value1;
	}

	public static Vector3 LerpClamped(Vector3 from, Vector3 to, float t)
	{
		return from + (to - from) * Clamp01(t);
	}

	public static Vector3 Rescale(Vector3 value, float dist)
	{
		return value.normalized * dist;
	}
	public static Vector2 Rescale(Vector2 value, float dist)
	{
		return value.normalized * dist;
	}

	// elementwise
	public static Vector3 DivideXYZ(Vector3 numer, Vector3 denom)
	{
		numer.x /= denom.x;
		numer.y /= denom.y;
		numer.z /= denom.z;
		return numer;
	}

	//
	// Vector4:
	//
	
	public static Vector4 Lerp(Vector4 from, Vector4 to, float t)
	{
		return new Vector4(from.x + (to.x - from.x) * t, from.y + (to.y - from.y) * t, from.z + (to.z - from.z) * t, from.w + (to.w - from.w) * t);
	}

	//
	// Color:
	//
	
	// much faster than Color ==
	public static bool Equals(Color a, Color b)
	{
		return a.r == b.r && a.g == b.g & a.b == b.b && a.a == b.a;
	}
	public static bool EqualsRGB(Color a, Color b)
	{
		return a.r == b.r && a.g == b.g & a.b == b.b;
	}
	
	public static Color Scale(Color a, Color b)
	{
		a.r *= b.r;
		a.g *= b.g;
		a.b *= b.b;
		a.a *= b.a;
		return a;
	}
	public static Color ScaleRGB(Color a, Color b)
	{
		a.r *= b.r;
		a.g *= b.g;
		a.b *= b.b;
		return a;
	}
	
	public static Color Scale(Color a, float b)
	{
		a.r *= b;
		a.g *= b;
		a.b *= b;
		a.a *= b;
		return a;
	}
	public static Color ScaleRGB(Color a, float b)
	{
		a.r *= b;
		a.g *= b;
		a.b *= b;
		return a;
	}
	// is unclamped, unlike Color.Lerp
	public static Color Lerp(Color from, Color to, float t)
	{
		from.r = MathUtil.Lerp(from.r, to.r, t);
		from.g = MathUtil.Lerp(from.g, to.g, t);
		from.b = MathUtil.Lerp(from.b, to.b, t);
		from.a = MathUtil.Lerp(from.a, to.a, t);
		return from;
	}
	public static Color LerpRGB(Color from, Color to, float t)
	{
		from.r = MathUtil.Lerp(from.r, to.r, t);
		from.g = MathUtil.Lerp(from.g, to.g, t);
		from.b = MathUtil.Lerp(from.b, to.b, t);
		return from;
	}
	
	public static Color LerpClamped(Color from, Color to, float t)
	{
		from.r = MathUtil.LerpClamped(from.r, to.r, t);
		from.g = MathUtil.LerpClamped(from.g, to.g, t);
		from.b = MathUtil.LerpClamped(from.b, to.b, t);
		from.a = MathUtil.LerpClamped(from.a, to.a, t);
		return from;
	}
	public static Color LerpClampedRGB(Color from, Color to, float t)
	{
		from.r = MathUtil.LerpClamped(from.r, to.r, t);
		from.g = MathUtil.LerpClamped(from.g, to.g, t);
		from.b = MathUtil.LerpClamped(from.b, to.b, t);
		return from;
	}


	//
	// int:
	//

	public static int Abs(int x)
	{
		if(x < 0) {
			x = -x;
		}
		return x;
	}

	public static int Dist(int x, int y)
	{
		return Abs(x - y);
	}

	public static int Clamp(int value, int min, int max)
	{
		return (value < min) ? min : ((value > max) ? max : value);
	}

	public static int Max(int a, int b)
	{
		return (a >= b) ? a : b;
	}

	public static int Min(int a, int b)
	{
		return (a <= b) ? a : b;
	}

	public static int Wrap0N(int value, int n)
	{
		if(value < 0 || value >= n) {
			value = value % n;
			if(value < 0)
				value += n;
		}
		return value;
	}
	
	//
	// long:
	//
	public static long Max(long a, long b)
	{
		return (a >= b) ? a : b;
	}

	// 
	// other or generic:
	// 

	public static void Shuffle<T>(T[] array, int length=-1)
	{
		if(length < 0)
			length = array.Length;
		//var random = new System.Random();
		for (int i = length; i > 1; i--)
		{
			// Pick random element to swap.
			//int j = random.Next(i); // 0 <= j <= i-1
			int j = UnityEngine.Random.Range(0,i); // 0 <= j <= i-1
			// Swap.
			T tmp = array[j];
			array[j] = array[i - 1];
			array[i - 1] = tmp;
		}
	}
	public static void Shuffle<T>(List<T> list, int length=-1)
	{
		if(length < 0)
			length = list.Count;
		//var random = new System.Random();
		for (int i = length; i > 1; i--)
		{
			// Pick random element to swap.
			//int j = random.Next(i); // 0 <= j <= i-1
			int j = UnityEngine.Random.Range(0,i); // 0 <= j <= i-1
			// Swap.
			T tmp = list[j];
			list[j] = list[i - 1];
			list[i - 1] = tmp;
		}
	}

	// least common multiple
	public static int LCM(int a, int b)
	{
		if(a == 1) { return b; }
		int am = a;
		int bm = b;
		while(true)
		{
			if(am == bm)
				return am;
			if(am < bm)
				am += a;
			else
				bm += b;
		}
	}

}
