using UnityEngine;
using System.Collections;

// _ to _: .5-.5*cos(x*pi)
// _ to /: x*x
// _ to |: 1-sqrt(1-x*x)
// / to _: 1-(1-x)*(1-x)
// / to /: x
// / to |: 1-sqrt(1-x)
// | to _: sqrt(1-(1-x)*(1-x))
// | to /: sqrt(x)
// | to |: arccos(1-2*x)*(1/pi)

[System.Serializable]
public class Interpolator
{
	public enum SlopeType
	{
		Slow,
		Linear,
		Fast,
	}
	public float duration;
	public SlopeType startSlope;
	public SlopeType endSlope;
	public float reverseDuration;
	public SlopeType reverseEndSlope;
	public SlopeType reverseStartSlope;
	[System.NonSerialized] public float t;
	[System.NonSerialized] public bool reversed;

	float invDuration;
	Delegates.ActionWithReturn<float,float> evalFunc;
	Delegates.ActionWithReturn<float,float> inverseEvalFunc;
	
	public void Init()
	{
		float curDuration = (reversed ? -(MathUtil.Abs(reverseDuration)+0.000001f) : (MathUtil.Abs(duration)+0.000001f));
		invDuration = 1.0f / curDuration;
		switch(reversed ? reverseStartSlope : startSlope)
		{
			case SlopeType.Slow:
				switch(reversed ? reverseEndSlope : endSlope)
				{
					case SlopeType.Slow:   evalFunc = SlowToSlow;   inverseEvalFunc = FastToFast;   break;
					case SlopeType.Linear: evalFunc = SlowToLinear; inverseEvalFunc = FastToLinear; break;
					case SlopeType.Fast:   evalFunc = SlowToFast;   inverseEvalFunc = FastToSlow;   break;
				}
				break;
			case SlopeType.Linear:
				switch(reversed ? reverseEndSlope : endSlope)
				{
					case SlopeType.Slow:   evalFunc = LinearToSlow;   inverseEvalFunc = LinearToFast;   break;
					case SlopeType.Linear: evalFunc = LinearToLinear; inverseEvalFunc = LinearToLinear; break;
					case SlopeType.Fast:   evalFunc = LinearToFast;   inverseEvalFunc = LinearToSlow;   break;
				}
				break;
			case SlopeType.Fast:
				switch(reversed ? reverseEndSlope : endSlope)
				{
					case SlopeType.Slow:   evalFunc = FastToSlow;   inverseEvalFunc = SlowToFast;   break;
					case SlopeType.Linear: evalFunc = FastToLinear; inverseEvalFunc = SlowToLinear; break;
					case SlopeType.Fast:   evalFunc = FastToFast;   inverseEvalFunc = SlowToSlow;   break;
				}
				break;
		}
	}



	public float Advance(float startValue, float endValue)
	{
		t += Time.deltaTime * invDuration;
		if(t < 1.0f)
		{
			return startValue + (endValue - startValue) * evalFunc(t);
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Vector3 Advance(Vector3 startValue, Vector3 endValue)
	{
		t += Time.deltaTime * invDuration;
		if(t < 1.0f)
		{
			return startValue + (endValue - startValue) * evalFunc(t);
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Quaternion Advance(Quaternion startValue, Quaternion endValue)
	{
		t += Time.deltaTime * invDuration;
		if(t < 1.0f)
		{
			return Quaternion.Lerp(startValue, endValue, evalFunc(t));
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Quaternion AdvanceSlerp(Quaternion startValue, Quaternion endValue)
	{
		t += Time.deltaTime * invDuration;
		if(t < 1.0f)
		{
			return Quaternion.Slerp(startValue, endValue, evalFunc(t));
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Color Advance(Color startValue, Color endValue)
	{
		t += Time.deltaTime * invDuration;
		if(t < 1.0f)
		{
			return startValue + (endValue - startValue) * evalFunc(t);
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Vector2 Advance(Vector2 startValue, Vector2 endValue)
	{
		t += Time.deltaTime * invDuration;
		if(t < 1.0f)
		{
			return startValue + (endValue - startValue) * evalFunc(t);
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Vector4 Advance(Vector4 startValue, Vector4 endValue)
	{
		t += Time.deltaTime * invDuration;
		if(t < 1.0f)
		{
			return startValue + (endValue - startValue) * evalFunc(t);
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Vector3 AdvanceSlerp(Vector3 startValue, Vector3 endValue)
	{
		t += Time.deltaTime * invDuration;
		if(t < 1.0f)
		{
			return Vector3.Slerp(startValue, endValue, evalFunc(t));
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

//	public Vector3 AdvanceDirection(Vector3 startValue, Vector3 endValue)
//	{
//		t += Time.deltaTime * invDuration;
//		if(t < 1.0f)
//		{
//			float v = evalFunc(t);
//			return MathUtil.Rescale(startValue + (endValue - startValue) * v, MathUtil.InverseLerp(startValue.magnitude, endValue.magnitude, v));
//		}
//		else
//		{
//			t = 1.0f;
//			return endValue;
//		}
//	}
	
	public Vector3 AdvanceLerpNormalized(Vector3 startNormal, Vector3 endNormal)
	{
		t += Time.deltaTime * invDuration;
		if(t < 1.0f)
		{
			return (startNormal + (endNormal - startNormal) * evalFunc(t)).normalized;
		}
		else
		{
			t = 1.0f;
			return endNormal;
		}
	}

	public int Advance(int startValue, int endValue)
	{
		t += Time.deltaTime * invDuration;
		if(t < 1.0f)
		{
			return (int)(startValue + (endValue - startValue) * evalFunc(t) + 0.5f);
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}




	
	public float Advance(float dt, float startValue, float endValue)
	{
		t += dt * invDuration;
		if(t < 1.0f)
		{
			if(t > 0.0f)
			{
				return startValue + (endValue - startValue) * evalFunc(t);
			}
			else
			{
				t = 0.0f;
				return startValue;
			}
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Vector3 Advance(float dt, Vector3 startValue, Vector3 endValue)
	{
		t += dt * invDuration;
		if(t < 1.0f)
		{
			if(t > 0.0f)
			{
				return startValue + (endValue - startValue) * evalFunc(t);
			}
			else
			{
				t = 0.0f;
				return startValue;
			}
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Quaternion Advance(float dt, Quaternion startValue, Quaternion endValue)
	{
		t += dt * invDuration;
		if(t < 1.0f)
		{
			if(t > 0.0f)
			{
				return Quaternion.Lerp(startValue, endValue, evalFunc(t));
			}
			else
			{
				t = 0.0f;
				return startValue;
			}
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Quaternion AdvanceSlerp(float dt, Quaternion startValue, Quaternion endValue)
	{
		t += dt * invDuration;
		if(t < 1.0f)
		{
			if(t > 0.0f)
			{
				return Quaternion.Slerp(startValue, endValue, evalFunc(t));
			}
			else
			{
				t = 0.0f;
				return startValue;
			}
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Color Advance(float dt, Color startValue, Color endValue)
	{
		t += dt * invDuration;
		if(t < 1.0f)
		{
			if(t > 0.0f)
			{
				return startValue + (endValue - startValue) * evalFunc(t);
			}
			else
			{
				t = 0.0f;
				return startValue;
			}
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Vector2 Advance(float dt, Vector2 startValue, Vector2 endValue)
	{
		t += dt * invDuration;
		if(t < 1.0f)
		{
			if(t > 0.0f)
			{
				return startValue + (endValue - startValue) * evalFunc(t);
			}
			else
			{
				t = 0.0f;
				return startValue;
			}
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Vector4 Advance(float dt, Vector4 startValue, Vector4 endValue)
	{
		t += dt * invDuration;
		if(t < 1.0f)
		{
			if(t > 0.0f)
			{
				return startValue + (endValue - startValue) * evalFunc(t);
			}
			else
			{
				t = 0.0f;
				return startValue;
			}
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

	public Vector3 AdvanceSlerp(float dt, Vector3 startValue, Vector3 endValue)
	{
		t += dt * invDuration;
		if(t < 1.0f)
		{
			if(t > 0.0f)
			{
				return Vector3.Slerp(startValue, endValue, evalFunc(t));
			}
			else
			{
				t = 0.0f;
				return startValue;
			}
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}

//	public Vector3 AdvanceDirection(float dt, Vector3 startValue, Vector3 endValue)
//	{
//		t += dt * invDuration;
//		if(t < 1.0f)
//		{
//			if(t > 0.0f)
//			{
//				float v = evalFunc(t);
//				return MathUtil.Rescale(startValue + (endValue - startValue) * v, MathUtil.InverseLerp(startValue.magnitude, endValue.magnitude, v));
//			}
//			else
//			{
//				t = 0.0f;
//				return startValue;
//			}
//		}
//		else
//		{
//			t = 1.0f;
//			return endValue;
//		}
//	}
	
	public Vector3 AdvanceLerpNormalized(float dt, Vector3 startNormal, Vector3 endNormal)
	{
		t += dt * invDuration;
		if(t < 1.0f)
		{
			if(t > 0.0f)
			{
				return (startNormal + (endNormal - startNormal) * evalFunc(t)).normalized;
			}
			else
			{
				t = 0.0f;
				return startNormal;
			}
		}
		else
		{
			t = 1.0f;
			return endNormal;
		}
	}

	public int Advance(float dt, int startValue, int endValue)
	{
		t += dt * invDuration;
		if(t < 1.0f)
		{
			if(t > 0.0f)
			{
				return (int)(startValue + (endValue - startValue) * evalFunc(t) + 0.5f);
			}
			else
			{
				t = 0.0f;
				return startValue;
			}
		}
		else
		{
			t = 1.0f;
			return endValue;
		}
	}



	public Interpolator() {}
	public Interpolator(float duration, SlopeType startSlope, SlopeType endSlope, float tInitial = 0.0f)
	{
		this.startSlope = startSlope;
		this.endSlope = endSlope;
		this.duration = duration;
		this.reverseStartSlope = endSlope;
		this.reverseEndSlope = startSlope;
		this.reverseDuration = duration;
		this.t = tInitial;
	}
	public Interpolator(float duration, SlopeType startSlope, SlopeType endSlope, float reverseDuration, SlopeType reverseEndSlope, SlopeType reverseStartSlope, float tInitial = 0.0f)
	{
		this.startSlope = startSlope;
		this.endSlope = endSlope;
		this.duration = duration;
		this.reverseStartSlope = reverseStartSlope;
		this.reverseEndSlope = reverseEndSlope;
		this.reverseDuration = reverseDuration;
		this.t = tInitial;
	}
	
	
	public void SetReverse(bool reverse)
	{
		if(reversed != reverse)
		{
			reversed = reverse;
			float oldV = evalFunc(t);
			Init();
			t = inverseEvalFunc(oldV);
		}
	}

	public bool AtStart { get { return t <= 0.0f; } }
	public bool AtEnd   { get { return t >= 1.0f; } }


	//static public float SlowToSlow(float t) { return 0.5f - 0.5f * Mathf.Cos(t * Mathf.PI); }
	static public float SlowToSlow(float t) { return t*t*(3.0f + -2.0f*t); }
	static public float SlowToLinear(float t) { return t*t; }
	//static public float SlowToFast(float t) { return 1.0f - Mathf.Sqrt(1.0f - t*t); }
	static public float SlowToFast(float t) { return t*t*t; }
	static public float LinearToSlow(float t) { float tFlip = 1.0f - t; return 1.0f - tFlip * tFlip; }
	static public float LinearToLinear(float t) { return t; }
	static public float LinearToFast(float t) { return 1.0f - Mathf.Sqrt(1.0f - t); }
	//static public float FastToSlow(float t) { float tFlip = 1.0f - t; return Mathf.Sqrt(1.0f - tFlip * tFlip); }
	static public float FastToSlow(float t) { float tFlip = 1.0f - t; return 1.0f - tFlip*tFlip*tFlip; }
	static public float FastToLinear(float t) { return Mathf.Sqrt(t); }
	//static public float FastToFast(float t) { return Mathf.Acos((1.0f - t) - t) * (1.0f / Mathf.PI); }
	static public float FastToFast(float t) { return t*(t*t + (2.0f-t)*(1.0f-t)); }
	
}
