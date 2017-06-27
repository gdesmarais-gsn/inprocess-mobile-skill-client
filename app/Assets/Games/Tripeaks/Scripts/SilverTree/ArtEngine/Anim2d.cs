using System;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif


[Serializable]
public class AnimQuadKeyFrames2d
{
	public AnimQuadKeyFrame2d[] keyFrames;
}

[Serializable]
public class AnimRootKeyFrames2d
{
	public AnimRootKeyFrame2d[] keyFrames;
}

[Serializable]
public class AnimLayer2d
{
	public string name;
	public AnimQuadKeyFrames2d[] quads;
	public AnimRootKeyFrames2d root;
	[System.NonSerialized] public float duration;
}


public class AnimStateLayer2d
{
	public BezierPatchQuad[] quads;
	public Transform root;
}



[Serializable]
public class AnimQuadKeyFrame2d
{
	public float time;
	public bool sharp = true;
	//public Matrix4x4 matrix;
	//public Color32 color;
	public bool disabled;
	
	public Color color;
	
	/*
		30 31 32 33
		20       23
		10       13
		00 01 02 03
	*/	
	
	public Vector2 p00;
	public Vector2 p01;
	public Vector2 p02;
	public Vector2 p03;
	public Vector2 p10;
	public Vector2 p13;
	public Vector2 p20;
	public Vector2 p23;
	public Vector2 p30;
	public Vector2 p31;
	public Vector2 p32;
	public Vector2 p33;
	
	public void WriteToQuad(BezierPatchQuad quad)
	{
		quad.x0.p0 = p00;
		quad.x0.p1 = p01;
		quad.x0.p2 = p02;
		quad.x0.p3 = p03;
		quad.x1.p0 = p30;
		quad.x1.p1 = p31;
		quad.x1.p2 = p32;
		quad.x1.p3 = p33;
		quad.y0.p0 = p00;
		quad.y0.p1 = p10;
		quad.y0.p2 = p20;
		quad.y0.p3 = p30;
		quad.y1.p0 = p03;
		quad.y1.p1 = p13;
		quad.y1.p2 = p23;
		quad.y1.p3 = p33;
		quad.disabled = disabled;
		
		quad.color = color;
	}

	public static void WriteToQuad(float time, AnimQuadKeyFrame2d[] keyFrames, BezierPatchQuad quad)
	{
		int len = keyFrames.Length;
		if(len == 0) { return; }
		int i = 0;
		while(i < len)
		{
			AnimQuadKeyFrame2d kf = keyFrames[i];
			if(kf.time >= time)
				break;
			i++;
		}
		if(i > 0)
		{
			if(i < len)
			{
				AnimQuadKeyFrame2d kf1 = keyFrames[i-1];
				AnimQuadKeyFrame2d kf2 = keyFrames[i];
				float factor = MathUtil.InverseLerp(kf1.time, kf2.time, time);
				if(!kf1.sharp)
				{
					if(kf2.sharp)
						factor = Interpolator.SlowToLinear(factor);
					else
						factor = Interpolator.SlowToSlow(factor);
				}
				else if(!kf2.sharp)
					factor = Interpolator.LinearToSlow(factor);
				float invFactor = 1.0f - factor;
				quad.x0.p0 = kf1.p00 * invFactor + kf2.p00 * factor;
				quad.x0.p1 = kf1.p01 * invFactor + kf2.p01 * factor;
				quad.x0.p2 = kf1.p02 * invFactor + kf2.p02 * factor;
				quad.x0.p3 = kf1.p03 * invFactor + kf2.p03 * factor;
				quad.x1.p0 = kf1.p30 * invFactor + kf2.p30 * factor;
				quad.x1.p1 = kf1.p31 * invFactor + kf2.p31 * factor;
				quad.x1.p2 = kf1.p32 * invFactor + kf2.p32 * factor;
				quad.x1.p3 = kf1.p33 * invFactor + kf2.p33 * factor;
				quad.y0.p0 = kf1.p00 * invFactor + kf2.p00 * factor;
				quad.y0.p1 = kf1.p10 * invFactor + kf2.p10 * factor;
				quad.y0.p2 = kf1.p20 * invFactor + kf2.p20 * factor;
				quad.y0.p3 = kf1.p30 * invFactor + kf2.p30 * factor;
				quad.y1.p0 = kf1.p03 * invFactor + kf2.p03 * factor;
				quad.y1.p1 = kf1.p13 * invFactor + kf2.p13 * factor;
				quad.y1.p2 = kf1.p23 * invFactor + kf2.p23 * factor;
				quad.y1.p3 = kf1.p33 * invFactor + kf2.p33 * factor;
				//quad.disabled = (factor < 0.5f) ? kf1.disabled : kf2.disabled;
				/*if(factor <= 0.0f)
					quad.disabled = kf1.disabled;
				else*/ if(factor >= 1.0f)
					quad.disabled = kf2.disabled;
				else
					quad.disabled = kf1.disabled;// && kf2.disabled;
				
				quad.color = MathUtil.Lerp(kf1.color, kf2.color, factor);
			}
			else
			{
				keyFrames[len-1].WriteToQuad(quad);
			}
		}
		else
		{
			keyFrames[0].WriteToQuad(quad);
		}
	}
	
	public void WriteToQuad(BezierPatchQuad quad, float blendFactor)
	{
		blendFactor = Interpolator.SlowToSlow(blendFactor);
		float invBlendFactor = 1.0f - blendFactor;
		quad.x0.p0 = quad.x0.p0 * invBlendFactor + p00 * blendFactor;
		quad.x0.p1 = quad.x0.p1 * invBlendFactor + p01 * blendFactor;
		quad.x0.p2 = quad.x0.p2 * invBlendFactor + p02 * blendFactor;
		quad.x0.p3 = quad.x0.p3 * invBlendFactor + p03 * blendFactor;
		quad.x1.p0 = quad.x1.p0 * invBlendFactor + p30 * blendFactor;
		quad.x1.p1 = quad.x1.p1 * invBlendFactor + p31 * blendFactor;
		quad.x1.p2 = quad.x1.p2 * invBlendFactor + p32 * blendFactor;
		quad.x1.p3 = quad.x1.p3 * invBlendFactor + p33 * blendFactor;
		quad.y0.p0 = quad.y0.p0 * invBlendFactor + p00 * blendFactor;
		quad.y0.p1 = quad.y0.p1 * invBlendFactor + p10 * blendFactor;
		quad.y0.p2 = quad.y0.p2 * invBlendFactor + p20 * blendFactor;
		quad.y0.p3 = quad.y0.p3 * invBlendFactor + p30 * blendFactor;
		quad.y1.p0 = quad.y1.p0 * invBlendFactor + p03 * blendFactor;
		quad.y1.p1 = quad.y1.p1 * invBlendFactor + p13 * blendFactor;
		quad.y1.p2 = quad.y1.p2 * invBlendFactor + p23 * blendFactor;
		quad.y1.p3 = quad.y1.p3 * invBlendFactor + p33 * blendFactor;
		quad.disabled = (blendFactor < 0.5f) ? quad.disabled : disabled;
		
		quad.color = MathUtil.Lerp(quad.color, color, blendFactor);
	}

	public static void WriteToQuad(float time, AnimQuadKeyFrame2d[] keyFrames, BezierPatchQuad quad, float blendFactor)
	{
		int len = keyFrames.Length;
		if(len == 0) { return; }
		int i = 0;
		while(i < len)
		{
			AnimQuadKeyFrame2d kf = keyFrames[i];
			if(kf.time >= time)
				break;
			i++;
		}
		if(i > 0)
		{
			if(i < len)
			{
				AnimQuadKeyFrame2d kf1 = keyFrames[i-1];
				AnimQuadKeyFrame2d kf2 = keyFrames[i];
				float factor = MathUtil.InverseLerp(kf1.time, kf2.time, time);
				if(!kf1.sharp)
				{
					if(kf2.sharp)
						factor = Interpolator.SlowToLinear(factor);
					else
						factor = Interpolator.SlowToSlow(factor);
				}
				else if(!kf2.sharp)
					factor = Interpolator.LinearToSlow(factor);
				float invFactor = 1.0f - factor;
				blendFactor = Interpolator.SlowToSlow(blendFactor);
				float invBlendFactor = 1.0f - blendFactor;
				quad.x0.p0 = quad.x0.p0 * invBlendFactor + (kf1.p00 * invFactor + kf2.p00 * factor) * blendFactor;
				quad.x0.p1 = quad.x0.p1 * invBlendFactor + (kf1.p01 * invFactor + kf2.p01 * factor) * blendFactor;
				quad.x0.p2 = quad.x0.p2 * invBlendFactor + (kf1.p02 * invFactor + kf2.p02 * factor) * blendFactor;
				quad.x0.p3 = quad.x0.p3 * invBlendFactor + (kf1.p03 * invFactor + kf2.p03 * factor) * blendFactor;
				quad.x1.p0 = quad.x1.p0 * invBlendFactor + (kf1.p30 * invFactor + kf2.p30 * factor) * blendFactor;
				quad.x1.p1 = quad.x1.p1 * invBlendFactor + (kf1.p31 * invFactor + kf2.p31 * factor) * blendFactor;
				quad.x1.p2 = quad.x1.p2 * invBlendFactor + (kf1.p32 * invFactor + kf2.p32 * factor) * blendFactor;
				quad.x1.p3 = quad.x1.p3 * invBlendFactor + (kf1.p33 * invFactor + kf2.p33 * factor) * blendFactor;
				quad.y0.p0 = quad.y0.p0 * invBlendFactor + (kf1.p00 * invFactor + kf2.p00 * factor) * blendFactor;
				quad.y0.p1 = quad.y0.p1 * invBlendFactor + (kf1.p10 * invFactor + kf2.p10 * factor) * blendFactor;
				quad.y0.p2 = quad.y0.p2 * invBlendFactor + (kf1.p20 * invFactor + kf2.p20 * factor) * blendFactor;
				quad.y0.p3 = quad.y0.p3 * invBlendFactor + (kf1.p30 * invFactor + kf2.p30 * factor) * blendFactor;
				quad.y1.p0 = quad.y1.p0 * invBlendFactor + (kf1.p03 * invFactor + kf2.p03 * factor) * blendFactor;
				quad.y1.p1 = quad.y1.p1 * invBlendFactor + (kf1.p13 * invFactor + kf2.p13 * factor) * blendFactor;
				quad.y1.p2 = quad.y1.p2 * invBlendFactor + (kf1.p23 * invFactor + kf2.p23 * factor) * blendFactor;
				quad.y1.p3 = quad.y1.p3 * invBlendFactor + (kf1.p33 * invFactor + kf2.p33 * factor) * blendFactor;
				if(blendFactor >= 0.5f) // <-- TODO: not sure about this. should it be 1.0, or always, or never?
				{
					//quad.disabled = (factor < 0.5f ? kf1.disabled : kf2.disabled);
					/*if(factor <= 0.0f)
						quad.disabled = kf1.disabled;
					else*/ if(factor >= 1.0f)
						quad.disabled = kf2.disabled;
					else
						quad.disabled = kf1.disabled;// && kf2.disabled;
				}
				
				quad.color = MathUtil.Lerp(quad.color, MathUtil.Lerp(kf1.color, kf2.color, factor), blendFactor);
			}
			else
			{
				keyFrames[len-1].WriteToQuad(quad, blendFactor);
			}
		}
		else
		{
			keyFrames[0].WriteToQuad(quad, blendFactor);
		}
	}
	
#if UNITY_EDITOR
	public void WriteFromQuad(float time, BezierPatchQuad quad)
	{
		this.time = time;
		if(quad != null)
		{
			p00 = (quad.x0.p0 + quad.y0.p0) * 0.5f;
			p03 = (quad.x0.p3 + quad.y1.p0) * 0.5f;
			p30 = (quad.x1.p0 + quad.y0.p3) * 0.5f;
			p33 = (quad.x1.p3 + quad.y1.p3) * 0.5f;
			p01 = quad.x0.p1;
			p02 = quad.x0.p2;
			p31 = quad.x1.p1;
			p32 = quad.x1.p2;
			p10 = quad.y0.p1;
			p20 = quad.y0.p2;
			p13 = quad.y1.p1;
			p23 = quad.y1.p2;
			disabled = quad.disabled;
			color = quad.color;
		}
	}

	public AnimQuadKeyFrame2d(float time, BezierPatchQuad quad)
	{
		WriteFromQuad(time, quad);
	}
	public AnimQuadKeyFrame2d() {}

	public AnimQuadKeyFrame2d Clone()
	{
		return (AnimQuadKeyFrame2d)MemberwiseClone();
	}
#endif
	
}


static class AnimRecursionGuard
{
	static int recursionDepth;
	const int maxRecursionDepth = 7;
#if UNITY_EDITOR
	static float nextRecursionWarningPrintTime;
	const float recursionWarningPrintInterval = 1f;
#endif

	public static bool Before(UnityEngine.Object context)
	{
		if(recursionDepth < maxRecursionDepth) {
			recursionDepth++;
			return true;
		}
#if UNITY_EDITOR
		if(nextRecursionWarningPrintTime <= Time.time) {
			nextRecursionWarningPrintTime = Time.time + recursionWarningPrintInterval;
			Debug.LogError("Infinite recursion detected!\n" + context, context);
		}
#endif
		return false;
	}
	
	public static void After(UnityEngine.Object context) // call this iff Before returned true
	{
		recursionDepth--;
#if UNITY_EDITOR
		if(recursionDepth < 0) {
			Debug.LogError("After was called too many times! recursionDepth = " + recursionDepth + "\n" + context, context);
		}
#endif
	}
}


[Serializable]
public class AnimRootKeyFrame2d
{
	public float time;
	public bool sharp = true;
	public Vector3 localPosition;
	public Quaternion localRotation;
	public Vector3 localScale;
	public enum TriState
	{
		Unchanged,
		False,
		True,
	}
	public TriState disabled;
	public static bool DisabledEquals(bool b, TriState a)
	{
		if(a == TriState.Unchanged) {
			return false;
		}
		return (a == TriState.True) == b;
	}

	public void WriteToRoot(Transform root, Anim2d anim2d)
	{
		if (anim2d.useAnimationOffset)
		{
			root.localPosition = anim2d.matrixPositionOffset.MultiplyPoint3x4(localPosition);
		}
		else
		{
			root.localPosition = localPosition;
		}
		
		root.localRotation = localRotation;
		
		if (anim2d.enableScaleAnimation) 
		{			
			if (anim2d.useAnimationOffset)
			{
				root.localScale = anim2d.matrixScaleOffset.MultiplyPoint3x4(localScale);
			}
			else
			{
				root.localScale = localScale;
			}
		}
		
		GameObject go = root.gameObject;

		if(DisabledEquals(go.activeSelf, disabled) && AnimRecursionGuard.Before(anim2d)) {
			go.SetActive(disabled == TriState.False);
			AnimRecursionGuard.After(anim2d);
		}
	}
	
	public static void WriteToRoot(float time, AnimRootKeyFrame2d[] keyFrames, Transform root, Anim2d anim2d)
	{
		int len = keyFrames.Length;
		if(len == 0) { return; }
		if(root == null) {
			#if UNITY_EDITOR
			Debug.LogWarning("Anim2d.WriteToRoot: root is null! anim2d: " + anim2d, anim2d);
			#endif
			return;
		}
		int i = 0;
		while(i < len)
		{
			AnimRootKeyFrame2d kf = keyFrames[i];
			if(kf.time >= time)
				break;
			i++;
		}
		if(i > 0)
		{
			if(i < len)
			{
				AnimRootKeyFrame2d kf1 = keyFrames[i-1];
				AnimRootKeyFrame2d kf2 = keyFrames[i];
				float factor = MathUtil.InverseLerp(kf1.time, kf2.time, time);
				if(!kf1.sharp)
				{
					if(kf2.sharp)
						factor = Interpolator.SlowToLinear(factor);
					else
						factor = Interpolator.SlowToSlow(factor);
				}
				else if(!kf2.sharp)
					factor = Interpolator.LinearToSlow(factor);
				
				if (anim2d.useAnimationOffset)
				{					
					root.localPosition = anim2d.matrixPositionOffset.MultiplyPoint3x4(MathUtil.Lerp(kf1.localPosition, kf2.localPosition, factor));
				}
				else
				{
					root.localPosition = MathUtil.Lerp(kf1.localPosition, kf2.localPosition, factor);
				}
				root.localRotation = Quaternion.Lerp(kf1.localRotation, kf2.localRotation, factor);
				
				if (anim2d.enableScaleAnimation) 
				{
					if (anim2d.useAnimationOffset)
					{					
						root.localScale = anim2d.matrixScaleOffset.MultiplyPoint3x4(MathUtil.Lerp(kf1.localScale, kf2.localScale, factor));
					}
					else
					{	
						root.localScale = MathUtil.Lerp(kf1.localScale, kf2.localScale, factor);
					}
				}

				GameObject go = root.gameObject;
				TriState disabled = (factor >= 1.0f) ? kf2.disabled : kf1.disabled;
				if(DisabledEquals(go.activeSelf, disabled) && AnimRecursionGuard.Before(anim2d)) {
					go.SetActive(disabled == TriState.False);
					AnimRecursionGuard.After(anim2d);
				}
			}
			else
			{
				keyFrames[len-1].WriteToRoot(root, anim2d);
			}
		}
		else
		{
			keyFrames[0].WriteToRoot(root, anim2d);
		}
	}
	
	public void WriteToRoot(Transform root, float blendFactor, Anim2d anim2d)
	{
		blendFactor = Interpolator.SlowToSlow(blendFactor);
		
		if (anim2d.useAnimationOffset)
		{
			root.localPosition = MathUtil.Lerp(root.localPosition, anim2d.matrixPositionOffset.MultiplyPoint3x4(localPosition), blendFactor);
		}
		else
		{
			root.localPosition = MathUtil.Lerp(root.localPosition, localPosition, blendFactor);			
		}
		
		root.localRotation = Quaternion.Lerp(root.localRotation, localRotation, blendFactor);
		
		if (anim2d.enableScaleAnimation)
		{
			if (anim2d.useAnimationOffset)
			{
				root.localScale = MathUtil.Lerp (root.localScale, anim2d.matrixScaleOffset.MultiplyPoint3x4(localScale), blendFactor);
			}
			else
			{
				root.localScale = MathUtil.Lerp (root.localScale, localScale, blendFactor);
			}
		}

		//if(blendFactor > 0.0f) // <-- TODO: not sure about this. should it be 1.0, or always, or never?
		{
			GameObject go = root.gameObject;
			if(DisabledEquals(go.activeSelf, disabled) && AnimRecursionGuard.Before(anim2d)) {
				go.SetActive(disabled == TriState.False);
				AnimRecursionGuard.After(anim2d);
			}
		}
	}

	public static void WriteToRoot(float time, AnimRootKeyFrame2d[] keyFrames, Transform root, float blendFactor, Anim2d anim2d)
	{
		int len = keyFrames.Length;
		if(len == 0) { return; }
		int i = 0;
		while(i < len)
		{
			AnimRootKeyFrame2d kf = keyFrames[i];
			if(kf.time >= time)
				break;
			i++;
		}
		if(i > 0)
		{
			if(i < len)
			{
				AnimRootKeyFrame2d kf1 = keyFrames[i-1];
				AnimRootKeyFrame2d kf2 = keyFrames[i];
				float factor = MathUtil.InverseLerp(kf1.time, kf2.time, time);
				if(!kf1.sharp)
				{
					if(kf2.sharp)
						factor = Interpolator.SlowToLinear(factor);
					else
						factor = Interpolator.SlowToSlow(factor);
				}
				else if(!kf2.sharp)
					factor = Interpolator.LinearToSlow(factor);
				blendFactor = Interpolator.SlowToSlow(blendFactor);
				
				if (anim2d.useAnimationOffset)
				{
					root.localPosition = MathUtil.Lerp(root.localPosition, anim2d.matrixPositionOffset.MultiplyPoint3x4(MathUtil.Lerp(kf1.localPosition, kf2.localPosition, factor)), blendFactor);			
				}
				else
				{
					root.localPosition = MathUtil.Lerp(root.localPosition, MathUtil.Lerp(kf1.localPosition, kf2.localPosition, factor), blendFactor);
				}
				root.localRotation = Quaternion.Lerp(root.localRotation, Quaternion.Lerp(kf1.localRotation, kf2.localRotation, factor), blendFactor);
				
				if (anim2d.enableScaleAnimation) 
				{
					if (anim2d.useAnimationOffset)
					{
						root.localScale = MathUtil.Lerp(root.localScale, anim2d.matrixScaleOffset.MultiplyPoint3x4(MathUtil.Lerp(kf1.localScale, kf2.localScale, factor)), blendFactor);
					}
					else
					{
						root.localScale = MathUtil.Lerp(root.localScale, MathUtil.Lerp(kf1.localScale, kf2.localScale, factor), blendFactor);
					}
				}

				//if(blendFactor > 0.0f) // <-- TODO: not sure about this. should it be 1.0, or always, or never?
				{
					GameObject go = root.gameObject;
					TriState disabled = (factor >= 1.0f) ? kf2.disabled : kf1.disabled;
					if(DisabledEquals(go.activeSelf, disabled) && AnimRecursionGuard.Before(anim2d)) {
						go.SetActive(disabled == TriState.False);
						AnimRecursionGuard.After(anim2d);
					}
				}
			}
			else
			{
				keyFrames[len-1].WriteToRoot(root, blendFactor, anim2d);
			}
		}
		else
		{
			keyFrames[0].WriteToRoot(root, blendFactor, anim2d);
		}
	}
	
#if UNITY_EDITOR
	public AnimRootKeyFrame2d(float time, Transform root)
	{
		this.time = time;
		//if(root != null)
		{
			localPosition = root.localPosition;
			localRotation = root.localRotation;
			localScale = root.localScale;
		}
	}
	public AnimRootKeyFrame2d() {}

	public AnimRootKeyFrame2d Clone()
	{
		return (AnimRootKeyFrame2d)MemberwiseClone();
	}
#endif
}

//[System.Serializable]
public class AnimState2d
{
	public AnimLayer2d layer;
	public AnimStateLayer2d layerState;
	public float time;
	public float blendFactor;
	public float invBlendInDuration;
	public float speed = 1.0f;
	public bool looped;
	
	public bool Update(float deltaTime, bool forceNoEnd)
	{
		if(blendFactor < 1.0f)
			blendFactor = MathUtil.Min(blendFactor + deltaTime * invBlendInDuration, 1.0f);
		deltaTime *= speed;
		time += deltaTime;
		if(deltaTime >= 0.0f)
		{
			if(time >= layer.duration)
			{
				if(looped)
				{
					time -= layer.duration;
					if(time >= layer.duration)
						time = 0.0f; // just keep it in bounds... probably never happens anyway
				}
				else
				{
					bool stillPlaying = blendFactor < 1.0f || forceNoEnd; // at end					
					return stillPlaying;
				}
			}
		}
		else
		{
			if(time <= 0.0f)
			{
				if(looped)
				{
					time += layer.duration;
					if(time < 0.0f)
						time = 0.0f; // just keep it in bounds... probably never happens anyway
				}
				else
				{
					time = 0.0f;
					bool stillPlaying = blendFactor < 1.0f || forceNoEnd; // at start									
					return stillPlaying;
				}
			}
		}
		return true; // still playing
	}

	public void Apply(bool first, ref bool dirtiedGrid/*, ref bool dirtiedRoot*/, Anim2d anim2d)
	{
		if(first)
		{
			AnimQuadKeyFrames2d[] quads = layer.quads;
			BezierPatchQuad[] quadStates = layerState.quads;
			if(quadStates != null) {
				int quadCount = quads.Length;
				for(int i = 0 ; i < quadCount ; i++)
				{
					AnimQuadKeyFrames2d kfs = quads[i];
					AnimQuadKeyFrame2d.WriteToQuad(time, kfs.keyFrames, quadStates[i]);
					if(!dirtiedGrid && kfs.keyFrames.Length > 1)
						dirtiedGrid = true;
				}
			}
			AnimRootKeyFrame2d.WriteToRoot(time, layer.root.keyFrames, layerState.root, anim2d);
//			if(!dirtiedRoot && layer.root.keyFrames.Length > 1)
//				dirtiedRoot = true;
		}
		else
		{
			AnimQuadKeyFrames2d[] quads = layer.quads;
			BezierPatchQuad[] quadStates = layerState.quads;
			if(quadStates != null) {
				int quadCount = quads.Length;
				for(int i = 0 ; i < quadCount ; i++)
				{
					AnimQuadKeyFrames2d kfs = quads[i];
					AnimQuadKeyFrame2d.WriteToQuad(time, kfs.keyFrames, quadStates[i], blendFactor);
					if(!dirtiedGrid && kfs.keyFrames.Length != 0)
						dirtiedGrid = true;
				}
			}
			AnimRootKeyFrame2d.WriteToRoot(time, layer.root.keyFrames, layerState.root, blendFactor, anim2d);
//			if(!dirtiedRoot && layer.root.keyFrames.Length != 0)
//				dirtiedRoot = true;
		}
	}
}

public class Anim2d : ReloadableMonoBehaviour
{
	/*[SerializeField] protected*/ public AnimLayer2d[] layers;
	/*[System.NonSerialized]*/ public AnimStateLayer2d[] layerStates;
	public AnimLibrary2d sharedLayers;
	//public TimeCategory timeType = TimeCategory.Game;
	public int animatorFPS = 60;

	[System.NonSerialized] public AnimLayer2d[] layersProxy;
	public AnimLayer2d[] GetLayersProxy() { return sharedLayers ? sharedLayers.layers : layers; }
	
	public bool enableScaleAnimation;
	
	internal bool useAnimationOffset;
	internal Matrix4x4 matrixPositionOffset;
	internal Matrix4x4 matrixScaleOffset;

	/*[System.NonSerialized]*/ public List<AnimState2d> animStateStack;
	[System.NonSerialized] public BezierPatchGrid grid;
	[System.NonSerialized] public BezierPatchGrid[] gridsToDirty;
	[System.NonSerialized] public bool initialized;
	[System.NonSerialized] public Transform root;

#if UNITY_EDITOR
	[System.NonSerialized] public int lastIndexPlayed = -1;
#endif
	
//	bool _isPlaying;
//	
//	public bool isPlayingAndClear{
//		get {
//			bool res = _isPlaying;
//			_isPlaying = false;
//			return res;
//		}
//	}	
	
	public void SetOffsetMatrix(Matrix4x4 mPos, Matrix4x4 mScale)
	{
		useAnimationOffset = true;
		matrixPositionOffset = mPos;
		matrixScaleOffset = mScale;
	}
	
	void Awake()
	{
		if(initialized) {
			return;
		}
		//Debug.LogError(gameObject.name);
		initialized = true;
		root = transform;
		layersProxy = GetLayersProxy();
		if(layersProxy == null)
		{
			layersProxy = new AnimLayer2d[0];
			if(sharedLayers != null)
			{
				sharedLayers.layers = layersProxy;
				layers = null;
			}
			else
				layers = layersProxy;
		}
		animStateStack = new List<AnimState2d>(MathUtil.Min(2,layersProxy.Length));
		//if(layersProxy.Length == 1)
		//	animStateStack.Add(new AnimState2d(){ layer=layersProxy[0], time=0, blendFactor=1.0f, invBlendInDuration=999999.9f, });
		//if (layer.quads != null && layer.quads.Length > 0)
		//	grid = GetComponent<BezierPatchGrid>();

		int numLayers = layersProxy.Length;
		layerStates = new AnimStateLayer2d[numLayers];
		for(int layerIndex = 0 ; layerIndex < numLayers ; layerIndex++)
		{
			AnimLayer2d layer = layersProxy[layerIndex];
			AnimStateLayer2d layerState = new AnimStateLayer2d();
			layerStates[layerIndex] = layerState;
			layer.duration = 0.0f;
			if (layer.quads != null && layer.quads.Length > 0 && grid == null)
				grid = GetComponent<BezierPatchGrid>();

			if(grid && layer.quads != null)
			{
				int numQuads = layer.quads.Length;
				layerState.quads = new BezierPatchQuad[numQuads];
				for(int i = 0 ; i < numQuads ; i++)
				{
					AnimQuadKeyFrames2d keyFramesContainer = layer.quads[i];
					if(keyFramesContainer.keyFrames.Length != 0)
					{
						layer.duration = MathUtil.Max(layer.duration, keyFramesContainer.keyFrames[keyFramesContainer.keyFrames.Length - 1].time);
						layerState.quads[i] = grid.quads[MathUtil.Min(i, grid.quads.Length - 1)];
#if UNITY_EDITOR
						if(Application.isPlaying)
#endif
						{
							if(layerState.quads[i] == null/* || keyFramesContainer.quad.disabled*/) // TODO
								keyFramesContainer.keyFrames = new AnimQuadKeyFrame2d[0];
						}
					}
				}
			}
			if(layer.root != null)
			{
				Transform rootT = null;
				if(grid)
					rootT = grid.root;
				if(!rootT)
					rootT = root;
				if(layer.root.keyFrames.Length != 0)
					layer.duration = MathUtil.Max(layer.duration, layer.root.keyFrames[layer.root.keyFrames.Length - 1].time);
				layerState.root = rootT;
#if UNITY_EDITOR
				if(Application.isPlaying)
#endif
				{
					if(layerState.root == null)
					{
						layer.root.keyFrames = new AnimRootKeyFrame2d[0];
					}
				}
			}
		}
		
		PatchRenderer patchRenderer = Stm.V1_1.SceneHelper.SearchUpwardsFor<PatchRenderer>(root);
		if(patchRenderer)
		{
			List<BezierPatchGrid> gridsToDirtyList = new List<BezierPatchGrid>();
			GatherChildGridsNotInSubRenderers(root, gridsToDirtyList);
			gridsToDirtyList.Remove(grid);
			gridsToDirty = gridsToDirtyList.ToArray();
		}
		else
		{
			gridsToDirty = new BezierPatchGrid[0];
		}
	}
	
	void GatherChildGridsNotInSubRenderers(Transform t, List<BezierPatchGrid> grids)
	{
		if(t.GetComponentsInChildren<PatchRenderer>(true).Length == 0)
		{
			grids.AddRange(t.GetComponentsInChildren<BezierPatchGrid>(true));
		}
		else
		{
			BezierPatchGrid grid = t.GetComponent<BezierPatchGrid>();
			if(grid)
				grids.Add(grid);
			PatchRenderer patchRenderer = t.GetComponent<PatchRenderer>();
			if(!patchRenderer)
				foreach(Transform child in t)
					GatherChildGridsNotInSubRenderers(child, grids);
		}
	}
	
//	public void LateUpdate()
//	{
//		float deltaTime = RealTime.DeltaFor(timeType);
//		if(deltaTime == 0.0f /*|| grid == null*/) { return; }
//		CustomUpdate(deltaTime);
//	}

	// returns true iff the anim is done playing
	public bool CustomUpdate(float deltaTime, bool forceNoEnd=false)
	{
		if(animStateStack == null) {
			return true;
		}
		int len = animStateStack.Count;
		bool first = true;
		bool dirtiedGrid = false;
		//bool dirtiedRoot = false;
		for(int i = 0 ; i < len ; i++)
		{
			AnimState2d state = animStateStack[i];
			if(!state.Update(deltaTime, (i != 0 && len != 1) || forceNoEnd)
			|| (state.looped && i+1 < len && animStateStack[i+1].blendFactor >= 1.0f) // hack...
			)
			{
				animStateStack.RemoveAt(i);
				i--;
				len--;
				dirtiedGrid = true; // test hack, probably doesn't help
			}
			// this optimization doesn't work in general, since they might not share the same layers
//			if(i > 0 && state.blendFactor >= 1.0f)
//			{
//				len -= i;
//				animStateStack.RemoveRange(0,i);
//				i = 0;
//			}
			state.Apply(first, ref dirtiedGrid/*, ref dirtiedRoot*/, this);
			first = false;
		}
		
		// TODO: FIXME: sometimes dirtiedGrid is false when it needs to be true, somehow, e.g. in Card_Basic intro2
		// if the show/hide keyframes aren't duplicated to the full length of the anim, the card won't show up
		
		if(dirtiedGrid)
		{
			if(grid)
			{
				grid.dirty = true;
				//_isPlaying = true;
			}
		}
//		if(dirtiedRoot)
//			foreach(BezierPatchGrid g in gridsToDirty)
//				g.dirty = true;

		return animStateStack.Count == 0;
	}
	
	public void StepUpdate(float deltaTime)
	{
		if(animStateStack == null) {
			return;
		}
		int len = animStateStack.Count;
		for(int i = 0 ; i < len ; i++)
		{
			AnimState2d state = animStateStack[i];
			if(state.looped) {
				state.Update(deltaTime, true);
			} else {
				state.time += deltaTime * state.speed;
				// intentionally no bounds checking in this version of update, so we can implement delays with step
			}
		}
	}

	// BlendTo
	public AnimState2d Play(int layerIndex, float blendTime=0.25f, float skipTime=0.0f)
	{
		if(!initialized) {
			Awake();
		}
		if(animStateStack == null || layersProxy == null) {
			return null;
		}
		if(layerIndex < 0 || layerIndex >= layersProxy.Length) { return null; }
		bool blend = (blendTime > 0.0f && animStateStack.Count != 0);
		AnimState2d state = new AnimState2d(){
			layer = layersProxy[layerIndex],
			layerState = layerStates[layerIndex],
			time = skipTime,
			blendFactor = blend ? 0.0f : 1.0f,
			invBlendInDuration = blend ? (1.0f/blendTime) : 999999.9f,
		};
		animStateStack.Add(state);
#if UNITY_EDITOR
		lastIndexPlayed = layerIndex;
#endif
		return state;
	}

	public void Abort()
	{
		if(animStateStack == null) {
			return;
		}
		animStateStack.Clear();
	}

	public void Stop()
	{
		if(animStateStack == null) {
			return;
		}
		int len = animStateStack.Count;
		for(int i = 0 ; i < len ; i++)
		{
			AnimState2d state = animStateStack[i];
			state.looped = false;
			if(state.speed == 0.0f)
			{
				state.speed = 1.0f;
			}
		}
	}

	public void Reset(int layerIndex)
	{
		ResetInternal(layerIndex, 0.0f);
	}

#if UNITY_EDITOR
	public void Reapply()
	{
		if(animStateStack == null || animStateStack.Count == 0)
		{
			ResetInternal(lastIndexPlayed, float.MaxValue);
		}
	}
#endif

	public void ResetInternal(int layerIndex, float time)
	{
		if(layerIndex < 0) { layerIndex = 0; }
		if(layersProxy == null) { return; }
		if(layerIndex >= layersProxy.Length) { return; }
		AnimLayer2d layer = layersProxy[layerIndex];
		AnimStateLayer2d layerState = layerStates[layerIndex];

		AnimQuadKeyFrames2d[] quads = layer.quads;
		BezierPatchQuad[] quadStates = layerState.quads;
		if(quadStates != null) {
			int quadCount = quads.Length;
			for(int i = 0 ; i < quadCount ; i++)
			{
				AnimQuadKeyFrames2d kfs = quads[i];
				AnimQuadKeyFrame2d.WriteToQuad(time, kfs.keyFrames, quadStates[i]);
			}
		}

		AnimRootKeyFrame2d.WriteToRoot(time, layer.root.keyFrames, layerState.root, this);
		if(grid)
			grid.dirty = true;
		foreach(BezierPatchGrid g in gridsToDirty)
			g.dirty = true;
		Abort();
	}

	public float GetDuration(int layerIndex, float blendTime=0.25f, float skipTime=0.0f)
	{
		if(animStateStack == null || layersProxy == null) { return 0.0f; }
		if(layerIndex < 0 || layerIndex >= layersProxy.Length) { return 0.0f; }
		AnimLayer2d layer = layersProxy[layerIndex];
		float duration = layer.duration;
		duration -= skipTime;
		if(duration < blendTime) {
			duration = blendTime;
		}
		return duration;
	}

#if UNITY_EDITOR
	public void SanityCheck()
	{
		if(!initialized)
			Awake();
		BezierPatchQuad[] bezQuads = null;
		if(!grid) {
			grid = GetComponent<BezierPatchGrid>();
		}
		if(grid)
		{
			if(grid.root == null)
				grid.AwakePart1();
			bezQuads = grid.quads;
		}
		int numQuads = (bezQuads != null) ? bezQuads.Length : 0;
//		if(PrefabUtility.GetPrefabType(gameObject) != PrefabType.Prefab)
//		{
//			if(sharedLayers != null)
//				layers = sharedLayers.layers;
//		}
		AnimLayer2d[] expectedLayers = GetLayersProxy();
		if(layersProxy == null)
		{
			layersProxy = expectedLayers;
			if(layersProxy == null)
				layersProxy = new AnimLayer2d[0];
		}
		if(layersProxy != expectedLayers)
		{
			// the proxy array was probably replaced by a new array (such as by ArrayHelper.Add),
			// so assume it's the new correct one and update the source arrays to point at it
			if(sharedLayers != null)
			{
				sharedLayers.layers = layersProxy;
				layers = null;
			}
			else
			{
				layers = layersProxy;
			}
		}
		if(layerStates == null || layerStates.Length != layersProxy.Length)
		{
			layerStates = new AnimStateLayer2d[layersProxy.Length];
		}
		for(int i = 0 ; i < layersProxy.Length ; i++)
		{
			AnimLayer2d layer = layersProxy[i];
			if(layer == null)
				layersProxy[i] = layer = new AnimLayer2d();
			if(layer.quads == null)
				layer.quads = new AnimQuadKeyFrames2d[numQuads];
			while(layer.quads.Length < numQuads)
				ArrayHelper.Add(ref layer.quads, new AnimQuadKeyFrames2d());
			while(layer.quads.Length > numQuads)
				ArrayHelper.RemoveAt(ref layer.quads, layer.quads.Length - 1);
			layer.duration = 0.0f;
			AnimStateLayer2d layerState = layerStates[i];
			if(layerState == null)
				layerStates[i] = layerState = new AnimStateLayer2d();
			if(layerState.quads == null || layerState.quads.Length != layer.quads.Length)
				layerState.quads = new BezierPatchQuad[layer.quads.Length];
			for(int j = 0 ; j < layer.quads.Length ; j++)
			{
				AnimQuadKeyFrames2d kfs = layer.quads[j];
				if(kfs == null)
					layer.quads[j] = kfs = new AnimQuadKeyFrames2d();
				if(kfs.keyFrames == null)
					kfs.keyFrames = new AnimQuadKeyFrame2d[0];
				if(layerState.quads[j] == null)
					layerState.quads[j] = bezQuads[j];
				Array.Sort<AnimQuadKeyFrame2d>(kfs.keyFrames, QuadKeyFrameSorter);
				if(kfs.keyFrames.Length != 0)
					layer.duration = MathUtil.Max(layer.duration, kfs.keyFrames[kfs.keyFrames.Length - 1].time);
			}
			if(layer.root == null)
				layer.root = new AnimRootKeyFrames2d();
			if(layer.root.keyFrames == null)
				layer.root.keyFrames = new AnimRootKeyFrame2d[0];
			if(layerState.root == null)
				layerState.root = grid ? grid.root : transform;
			Array.Sort<AnimRootKeyFrame2d>(layer.root.keyFrames, GridKeyFrameSorter);
			if(layer.root.keyFrames.Length != 0)
				layer.duration = MathUtil.Max(layer.duration, layer.root.keyFrames[layer.root.keyFrames.Length - 1].time);
		}
		if(gridsToDirty == null)
		{
			List<BezierPatchGrid> gridsToDirtyList = new List<BezierPatchGrid>();
			GatherChildGridsNotInSubRenderers(root, gridsToDirtyList);
			gridsToDirtyList.Remove(grid);
			gridsToDirty = gridsToDirtyList.ToArray();
		}
	}
	static int QuadKeyFrameSorter(AnimQuadKeyFrame2d a, AnimQuadKeyFrame2d b)
	{
		return a.time.CompareTo(b.time);
	}
	static int GridKeyFrameSorter(AnimRootKeyFrame2d a, AnimRootKeyFrame2d b)
	{
		return a.time.CompareTo(b.time);
	}
	public void PrepareKeyframesArray(int layerIndex)
	{
		if(layersProxy == null) {
			SanityCheck();
		}
		while(layerIndex >= layersProxy.Length)
			ArrayHelper.Add(ref layersProxy, new AnimLayer2d());
		SanityCheck();
	}
	public void AddKeyFrame(int layerIndex, float time, BezierPatchQuad filterQuad=null, bool addQuadKF=true, bool addGridKF=false)
	{
		PrepareKeyframesArray(layerIndex);
		if(layerIndex < 0 || layerIndex >= layersProxy.Length || time < 0) { return; }
		AnimLayer2d layer = layersProxy[layerIndex];
		AnimStateLayer2d layerState = layerStates[layerIndex];
		const float tolerance = 0.0001f;
		if(addQuadKF)
		{
			AnimQuadKeyFrames2d[] quads = layer.quads;
			BezierPatchQuad[] quadStates = layerState.quads;
			int quadCount = quads.Length;
			for(int quadIndex = 0 ; quadIndex < quadCount ; quadIndex++)
			{
				AnimQuadKeyFrames2d kfs = quads[quadIndex];
				BezierPatchQuad quad = quadStates[quadIndex];
				if(filterQuad != null && filterQuad != quad)
					continue;
				AnimQuadKeyFrame2d[] keyFrames = kfs.keyFrames;
				int len = keyFrames.Length;
				int i = 0;
				while(i < len)
				{
					AnimQuadKeyFrame2d kf = keyFrames[i];
					if(kf.time + tolerance >= time)
						break;
					i++;
				}
				AnimQuadKeyFrame2d nuke = new AnimQuadKeyFrame2d(time, quad);
				if(i < len && MathUtil.Dist(keyFrames[i].time, time) < tolerance)
					keyFrames[i] = nuke; // update/replace keyframe
				else
					ArrayHelper.Insert(ref kfs.keyFrames, i, nuke); // add new keyframe
			}
		}
		if(addGridKF)
		{
			AnimRootKeyFrames2d kfs = layer.root;
			AnimRootKeyFrame2d[] keyFrames = kfs.keyFrames;
			int len = keyFrames.Length;
			int i = 0;
			while(i < len)
			{
				AnimRootKeyFrame2d kf = keyFrames[i];
				if(kf.time + tolerance >= time)
					break;
				i++;
			}
			AnimRootKeyFrame2d nuke = new AnimRootKeyFrame2d(time, layerState.root);
			if(i < len && MathUtil.Dist(keyFrames[i].time, time) < tolerance)
				keyFrames[i] = nuke; // update/replace keyframe
			else
				ArrayHelper.Insert(ref kfs.keyFrames, i, nuke); // add new keyframe
		}
		SanityCheck();
		if(grid)
			grid.dirty = true;
		foreach(BezierPatchGrid g in gridsToDirty)
			g.dirty = true;
	}

	public AnimRootKeyFrame2d GetRootKeyFrame(int layerIndex, float time)
	{
		SanityCheck();
		if(layerIndex < 0 || layerIndex >= layersProxy.Length || time < 0) { return null; }
		AnimLayer2d layer = layersProxy[layerIndex];
		const float tolerance = 0.0001f;
		{
			AnimRootKeyFrames2d kfs = layer.root;
			AnimRootKeyFrame2d[] keyFrames = kfs.keyFrames;
			int len = keyFrames.Length;
			int i = 0;
			while(i < len)
			{
				AnimRootKeyFrame2d kf = keyFrames[i];
				if(kf.time + tolerance >= time)
					break;
				i++;
			}
			if(i < len && MathUtil.Dist(keyFrames[i].time, time) < tolerance)
			{
				return kfs.keyFrames[i];
			}
		}
		return null;
	}

	public AnimRootKeyFrame2d AddRootKeyFrameWithoutChangingAnim(int layerIndex, float time)
	{
		PrepareKeyframesArray(layerIndex);
		if(layerIndex < 0 || layerIndex >= layersProxy.Length || time < 0) { return null; }
		AnimLayer2d layer = layersProxy[layerIndex];
		AnimStateLayer2d layerState = layerStates[layerIndex];
		AnimRootKeyFrame2d rv = null;
		const float tolerance = 0.0001f;
		{
			AnimRootKeyFrames2d kfs = layer.root;
			AnimRootKeyFrame2d[] keyFrames = kfs.keyFrames;
			int len = keyFrames.Length;
			int i = 0;
			while(i < len)
			{
				AnimRootKeyFrame2d kf = keyFrames[i];
				if(kf.time + tolerance >= time)
					break;
				i++;
			}
			if(i < len && MathUtil.Dist(keyFrames[i].time, time) < tolerance) {
				// already exists
				rv = keyFrames[i];
			} else {
				AnimRootKeyFrame2d kfBackup = new AnimRootKeyFrame2d(time, layerState.root);
				UpdateTo(ref layerIndex, ref time, true, false);
				AnimRootKeyFrame2d kf = new AnimRootKeyFrame2d(time, layerState.root);
				ArrayHelper.Insert(ref kfs.keyFrames, i, kf); // add new keyframe
				layerState.root.localPosition = kfBackup.localPosition;
				layerState.root.localRotation = kfBackup.localRotation;
				layerState.root.localScale = kfBackup.localScale;
				rv = kf;
			}
		}
		SanityCheck();
		if(grid)
			grid.dirty = true;
		foreach(BezierPatchGrid g in gridsToDirty)
			g.dirty = true;
		return rv;
	}

	public bool DeleteKeyFrame(int layerIndex, float time, bool delQuadKF=true, bool delGridKF=false)
	{
		SanityCheck();
		if(layerIndex < 0 || layerIndex >= layersProxy.Length || time < 0) { return false; }
		AnimLayer2d layer = layersProxy[layerIndex];
		const float tolerance = 0.0001f;
		bool removedAny = false;
		if(delQuadKF)
		foreach(AnimQuadKeyFrames2d kfs in layer.quads)
		{
			AnimQuadKeyFrame2d[] keyFrames = kfs.keyFrames;
			int len = keyFrames.Length;
			int i = 0;
			while(i < len)
			{
				AnimQuadKeyFrame2d kf = keyFrames[i];
				if(kf.time + tolerance >= time)
					break;
				i++;
			}
			if(i < len && MathUtil.Dist(keyFrames[i].time, time) < tolerance)
			{
				ArrayHelper.RemoveAt(ref kfs.keyFrames, i);
				removedAny = true;
			}
		}
		if(delGridKF)
		{
			AnimRootKeyFrames2d kfs = layer.root;
			AnimRootKeyFrame2d[] keyFrames = kfs.keyFrames;
			int len = keyFrames.Length;
			int i = 0;
			while(i < len)
			{
				AnimRootKeyFrame2d kf = keyFrames[i];
				if(kf.time + tolerance >= time)
					break;
				i++;
			}
			if(i < len && MathUtil.Dist(keyFrames[i].time, time) < tolerance)
			{
				ArrayHelper.RemoveAt(ref kfs.keyFrames, i);
				removedAny = true;
			}
		}
		if(removedAny)
			SanityCheck();
		if(removedAny)
		{
			if(grid)
				grid.dirty = true;
			foreach(BezierPatchGrid g in gridsToDirty)
				g.dirty = true;
		}
		return removedAny;
	}
	public bool DeleteKeyFrame(int layerIndex, AnimQuadKeyFrame2d kfToDelete)
	{
		SanityCheck();
		if(layerIndex < 0 || layerIndex >= layersProxy.Length || kfToDelete == null) { return false; }
		AnimLayer2d layer = layersProxy[layerIndex];
		bool removedAny = false;
		foreach(AnimQuadKeyFrames2d kfs in layer.quads)
		{
			AnimQuadKeyFrame2d[] keyFrames = kfs.keyFrames;
			for(int i = keyFrames.Length-1 ; i >= 0 ; i--)
			{
				AnimQuadKeyFrame2d kf = keyFrames[i];
				if(kf == kfToDelete)
				{
					ArrayHelper.RemoveAt(ref kfs.keyFrames, i);
					removedAny = true;
				}
			}
		}
		if(removedAny)
			SanityCheck();
		if(removedAny)
		{
			if(grid)
				grid.dirty = true;
			foreach(BezierPatchGrid g in gridsToDirty)
				g.dirty = true;
		}
		return removedAny;
	}
	public bool DeleteKeyFrame(int layerIndex, AnimRootKeyFrame2d kfToDelete)
	{
		SanityCheck();
		if(layerIndex < 0 || layerIndex >= layersProxy.Length || kfToDelete == null) { return false; }
		AnimLayer2d layer = layersProxy[layerIndex];
		bool removedAny = false;
		{
			AnimRootKeyFrames2d kfs = layer.root;
			AnimRootKeyFrame2d[] keyFrames = kfs.keyFrames;
			for(int i = keyFrames.Length-1 ; i >= 0 ; i--)
			{
				AnimRootKeyFrame2d kf = keyFrames[i];
				if(kf == kfToDelete)
				{
					ArrayHelper.RemoveAt(ref kfs.keyFrames, i);
					removedAny = true;
				}
			}
		}
		if(removedAny)
			SanityCheck();
		if(removedAny)
		{
			if(grid)
				grid.dirty = true;
			foreach(BezierPatchGrid g in gridsToDirty)
				g.dirty = true;
		}
		return removedAny;
	}
	public void UpdateTo(ref int layerIndex, ref float time, bool includingRoot=true, bool includingQuads=true)
	{
		SanityCheck();
		if(layerIndex < 0) { layerIndex = 0; }
		if(layerIndex >= layersProxy.Length) { layerIndex = layersProxy.Length; return; }
		AnimLayer2d layer = layersProxy[layerIndex];
		if(time < 0) { time = 0; }
		if(time > layer.duration + 60.0f) { time = layer.duration + 60.0f; }

		AnimStateLayer2d layerState = layerStates[layerIndex];
		if(includingQuads) {
			AnimQuadKeyFrames2d[] quads = layer.quads;
			BezierPatchQuad[] quadStates = layerState.quads;
			int quadCount = quads.Length;
			for(int quadIndex = 0 ; quadIndex < quadCount ; quadIndex++)
			{
				AnimQuadKeyFrames2d kfs = quads[quadIndex];
				BezierPatchQuad quad = quadStates[quadIndex];
				AnimQuadKeyFrame2d.WriteToQuad(time, kfs.keyFrames, quad);
			}
		}

		if(includingRoot)
			AnimRootKeyFrame2d.WriteToRoot(time, layer.root.keyFrames, layerState.root, this);
		if(grid)
			grid.dirty = true;
		foreach(BezierPatchGrid g in gridsToDirty)
			g.dirty = true;
	}
	public void MarkDirty()
	{
		if(grid)
			grid.dirty = true;
		
		if (gridsToDirty != null){
			foreach(BezierPatchGrid g in gridsToDirty){
				g.dirty = true;
			}
		}
	}
	public void ReInit()
	{
		animStateStack = null;
		grid = null;
		gridsToDirty = null;
		initialized = false;
		root = null;
		SanityCheck();
	}
#endif
// auto-add keyframe if an animatable root is moved or rotated while the anim window is open
#if UNITY_EDITOR
	public static Delegates.Action<Anim2d> animatorCheckAutoKeyframeRoot;
	[System.NonSerialized] public bool autoKF_prevPosAndRotValid;
	[System.NonSerialized] public Vector3 autoKF_prevLocalPosition;
	[System.NonSerialized] public Quaternion autoKF_prevLocalRotation;
	[System.NonSerialized] public int autoKF_sweepIndex;
	[System.NonSerialized] public float autoKF_sweepTime;
	void OnDrawGizmosSelected()
	{
		if(animatorCheckAutoKeyframeRoot != null)
			animatorCheckAutoKeyframeRoot(this);
	}
#endif

#if UNITY_EDITOR
	[UnityEditor.InitializeOnLoad]
	class ForceIconVisibility { static ForceIconVisibility() {
		GizmoHelper.SetScriptIconVisibility(System.Reflection.MethodBase.GetCurrentMethod().DeclaringType.DeclaringType.Name, false);
	} }
#endif
}
