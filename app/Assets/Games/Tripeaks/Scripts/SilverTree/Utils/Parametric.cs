using UnityEngine;
using System.Collections;

public abstract class Parametric : ReloadableMonoBehaviour {
	public enum OverflowMode { Clamp, Loop, Extrapolate }
	
	public OverflowMode overflowMode = OverflowMode.Clamp;
    public bool invertDirection = false;
	
	public Vector3 PositionAt(float u) {
        u = invertDirection ? 1f-u : u;
		if (u < 0f) { 
			switch(overflowMode) {
			case OverflowMode.Clamp: return GetPositionAt(0f);
			case OverflowMode.Loop: return GetPositionAt(u % 1f + 1f);
			case OverflowMode.Extrapolate: return GetPositionAt(u);
			}
		} else if(u > 1f) {
			switch(overflowMode) {
			case OverflowMode.Clamp: return GetPositionAt(1f);
			case OverflowMode.Loop: return GetPositionAt(u % 1f);
			case OverflowMode.Extrapolate: return GetPositionAt(u);
			}
		}
		return GetPositionAt(u);	
	}
	
	public Vector3 DerivAt(float u) {
        u = invertDirection ? 1f-u : u;
		if (u < 0f) { 
			switch(overflowMode) {
			case OverflowMode.Clamp: return GetDerivAt(0f);
			case OverflowMode.Loop: return GetDerivAt(u % 1f + 1f);
			case OverflowMode.Extrapolate: return GetDerivAt(u);
			}
		} else if(u > 1f) {
			switch(overflowMode) {
			case OverflowMode.Clamp: return GetDerivAt(1f);
			case OverflowMode.Loop: return GetDerivAt(u % 1f);
			case OverflowMode.Extrapolate: return GetDerivAt(u);
			}
		}
		return GetDerivAt(u);	
	}

	public Vector3 DirectionAt(float u) {
        u = invertDirection ? 1f-u : u;
		if (u < 0f) { 
			switch(overflowMode) {
			case OverflowMode.Clamp: return GetDirectionAt(0f);
			case OverflowMode.Loop: return GetDirectionAt(u % 1f + 1f);
			case OverflowMode.Extrapolate: return GetDirectionAt(u);
			}
		} else if(u > 1f) {
			switch(overflowMode) {
			case OverflowMode.Clamp: return GetDirectionAt(1f);
			case OverflowMode.Loop: return GetDirectionAt(u % 1f);
			case OverflowMode.Extrapolate: return GetDirectionAt(u);
			}
		}
		return GetDirectionAt(u);	
	}


	public abstract Vector3 GetPositionAt(float u);
	public abstract Vector3 GetDerivAt(float u);
	public abstract Vector3 GetDirectionAt(float u);


	public float GetArcLength()
	{
	    if(mArcLengthDirty)
	    {
	        mArcLength = ComputeArcLength();
	        mArcLengthDirty = false;
	    }
	    return mArcLength;
	}
	
	public void SetArcLengthDirty() {
	    mArcLengthDirty = true;
	}
	
	
	bool mArcLengthDirty = true;
	float mArcLength = 1f;
	
	public virtual float ComputeArcLength()
	{
	    const int iterations = 256;
	    const float du = 1f / 256f;
	    float u = 0f;
	    float result = 0f;
	    Vector3 position = GetPositionAt(0f);
	    for(int i = 0 ; i < iterations ; i++)
	    {
	        u += du;
	        Vector3 nextPosition = GetPositionAt(u);
	        result += (nextPosition - position).magnitude;
	        position = nextPosition;
	    }
	    return result;
	}
#if UNITY_EDITOR
	public abstract void EditorAwake();
#endif
}
