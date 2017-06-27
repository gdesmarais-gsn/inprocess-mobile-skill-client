using System;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
using System.Collections.Generic;
#endif

[Serializable]
public class BezierPatchQuad
{
/*
      x1
    O----O    v=1
    |....| y1
 y0 |....|
    O----O    v=0
      x0
  u=0    u=1
  
   p0  p2
     p1  p3
*/
	public Color color = Color.white;
	public BezierPatchEdge x0, x1, y0, y1;
	public Vector2 uv00, uv01 = new Vector2(0,1), uv10 = new Vector2(1,0), uv11 = new Vector2(1,1);
	public bool disabled;
	public int subMeshIndex;
	[HideInInspector] public int initialized = -1;
	[System.NonSerialized] public int quadCount; // for use by renderer

	public Vector2 ValueAt(float u, float v)
	{
//		float diffDist = (u - 0.5f) * (u - 0.5f) - (v - 0.5f) * (v - 0.5f);
//		return
//		  x0.ValueAtInterpolated(u, x1, v) * (0.5f - diffDist)
//		+ y0.ValueAtInterpolated(v, y1, u) * (0.5f + diffDist);

//		return
//		((((1f-u)*(1f-u))*(1f-u)) * MathUtil.Lerp(x0.p0, x1.p0, v) +
//			(3f * ((1f-u)*(1f-u)) * u) * MathUtil.Lerp(x0.p1, x1.p1, v) +
//			(3f * (1f-u) * (u*u)) * MathUtil.Lerp(x0.p2, x1.p2, v) +
//			(((u*u)*u)) * MathUtil.Lerp(x0.p3, x1.p3, v)) * (0.5f - ((u - 0.5f) * (u - 0.5f) - (v - 0.5f) * (v - 0.5f)))
//		+ ((((1f-v)*(1f-v))*(1f-v)) * MathUtil.Lerp(y0.p0, y1.p0, u) +
//			(3f * ((1f-v)*(1f-v)) * v) * MathUtil.Lerp(y0.p1, y1.p1, u) +
//			(3f * (1f-v) * (v*v)) * MathUtil.Lerp(y0.p2, y1.p2, u) +
//			(((v*v)*v)) * MathUtil.Lerp(y0.p3, y1.p3, u)) * (0.5f + ((u - 0.5f) * (u - 0.5f) - (v - 0.5f) * (v - 0.5f)))
//		;

		float invU = 1.0f - u;
		float invV = 1.0f - v;
		float au, bu, cu, du;
		float av, bv, cv, dv;
		{
			float diffDist;
			{
				float uc = u - 0.5f;
				float vc = v - 0.5f;
				diffDist = (uc * uc - vc * vc);
			}
			{
				float diffMul = 0.5f - diffDist;
				float uu = u*u * diffMul;
				float invUU = invU*invU * diffMul;
				au = invUU*invU;
				bu = 3f * invUU * u;
				cu = 3f * invU * uu;
				du = uu*u;
			}
			{
				float diffMul = 0.5f + diffDist;
				float vv = v*v * diffMul;
				float invVV = invV*invV * diffMul;
				av = invVV*invV;
				bv = 3f * invVV * v;
				cv = 3f * invV * vv;
				dv = vv*v;
			}
		}
		return new Vector2(
			(au * (x0.p0.x * invV + x1.p0.x * v) +
			 bu * (x0.p1.x * invV + x1.p1.x * v) +
			 cu * (x0.p2.x * invV + x1.p2.x * v) +
			 du * (x0.p3.x * invV + x1.p3.x * v))
			+ (av * (y0.p0.x * invU + y1.p0.x * u) +
			   bv * (y0.p1.x * invU + y1.p1.x * u) +
			   cv * (y0.p2.x * invU + y1.p2.x * u) +
			   dv * (y0.p3.x * invU + y1.p3.x * u)),
			(au * (x0.p0.y * invV + x1.p0.y * v) +
			 bu * (x0.p1.y * invV + x1.p1.y * v) +
			 cu * (x0.p2.y * invV + x1.p2.y * v) +
			 du * (x0.p3.y * invV + x1.p3.y * v))
			+ (av * (y0.p0.y * invU + y1.p0.y * u) +
			   bv * (y0.p1.y * invU + y1.p1.y * u) +
			   cv * (y0.p2.y * invU + y1.p2.y * u) +
			   dv * (y0.p3.y * invU + y1.p3.y * u))
		);
	}

	public Vector2 InverseValueAt(Vector2 pos, out float errorAmount)
	{
		float u = 0.5f, v = 0.5f;
		
		float bestDistSq = (ValueAt(u,v) - pos).sqrMagnitude;

		float delta = 0.25f;
		int iter;
		for(iter = 0 ; iter < 80 ; iter++)
		{
			bool improved = false;
			int dui = -1;
			for(float du = -delta ; dui <= 1 ; dui++, du += delta)
			{
				int dvi = -1;
				for(float dv = -delta ; dvi <= 1 ; dvi++, dv += delta)
				{
					if(dvi == 0 && dui == 0)
						continue;
					float uNext = /*MathUtil.Clamp01*/(u + du);
					float vNext = /*MathUtil.Clamp01*/(v + dv);
					float distSq = (ValueAt(uNext, vNext) - pos).sqrMagnitude;
					if(distSq < bestDistSq)
					{
						improved = true;
						bestDistSq = distSq;
						u = uNext;
						v = vNext;
					}
				}
			}
			if(!improved)
			{
				delta *= 1.0f/3.0f;
				if(delta < 1.0f/(65536.0f*2.0f))
					break;
			}
		}
		//Debug.Log("iter = " + iter + ", distSq = " + bestDistSq);
//		pos ==
//		((((1f-u)*(1f-u))*(1f-u)) * MathUtil.Lerp(x0.p0, x1.p0, v) +
//			(3f * ((1f-u)*(1f-u)) * u) * MathUtil.Lerp(x0.p1, x1.p1, v) +
//			(3f * (1f-u) * (u*u)) * MathUtil.Lerp(x0.p2, x1.p2, v) +
//			(((u*u)*u)) * MathUtil.Lerp(x0.p3, x1.p3, v)) * (0.5f - ((u - 0.5f) * (u - 0.5f) - (v - 0.5f) * (v - 0.5f)))
//		+ ((((1f-v)*(1f-v))*(1f-v)) * MathUtil.Lerp(y0.p0, y1.p0, u) +
//			(3f * ((1f-v)*(1f-v)) * v) * MathUtil.Lerp(y0.p1, y1.p1, u) +
//			(3f * (1f-v) * (v*v)) * MathUtil.Lerp(y0.p2, y1.p2, u) +
//			(((v*v)*v)) * MathUtil.Lerp(y0.p3, y1.p3, u)) * (0.5f + ((u - 0.5f) * (u - 0.5f) - (v - 0.5f) * (v - 0.5f)))
//		;

		errorAmount = bestDistSq;
		return new Vector2(u, v);
	}

	public Vector2 UDerivAt(float u, float v)
	{
		return x0.DerivAtInterpolated(u, x1, v);
	}

	public Vector2 VDerivAt(float u, float v)
	{
		return y0.DerivAtInterpolated(v, y1, u);
	}

	public Vector2 TexCoordsAt(float u, float v)
	{
/*
	uv01 uv11
	uv00 uv10
*/
//		Vector2 uvv0 = MathUtil.Lerp(uv00, uv10, u);
//		Vector2 uvv1 = MathUtil.Lerp(uv01, uv11, u);
//		return MathUtil.Lerp(uvv0, uvv1, v);
		
		float uInv = 1.0f - u;
		float vInv = 1.0f - v;
		return new Vector2(
			(uv00.x * uInv + uv10.x * u) * vInv + (uv01.x * uInv + uv11.x * u) * v,
			(uv00.y * uInv + uv10.y * u) * vInv + (uv01.y * uInv + uv11.y * u) * v
		);
	}

	public Vector2 InverseTexCoordsAt(Vector2 uv, out float errorAmount)
	{
/*
		float u = 0.5f, v = 0.5f;
		
		float bestDistSq = (TexCoordsAt(u,v) - uv).sqrMagnitude;

		float delta = 0.25f;
		int iter;
		for(iter = 0 ; iter < 80 ; iter++)
		{
			bool improved = false;
			int dui = -1;
			for(float du = -delta ; dui <= 1 ; dui++, du += delta)
			{
				int dvi = -1;
				for(float dv = -delta ; dvi <= 1 ; dvi++, dv += delta)
				{
					if(dvi == 0 && dui == 0)
						continue;
//					float uNext = MathUtil.Clamp01(u + du);
//					float vNext = MathUtil.Clamp01(v + dv);
					float uNext = u + du;
					float vNext = v + dv;
					float distSq = (TexCoordsAtPermissive(uNext, vNext) - uv).sqrMagnitude;
					if(distSq < bestDistSq)
					{
						improved = true;
						bestDistSq = distSq;
						u = uNext;
						v = vNext;
					}
				}
			}
			if(!improved)
			{
				delta *= 1.0f/3.0f;
				if(delta < 1.0f/(65536.0f*2.0f))
					break;
			}
		}
		errorAmount = bestDistSq;
*/
	
//		uv == MathUtil.Lerp(MathUtil.Lerp(uv00, uv10, u), MathUtil.Lerp(uv01, uv11, u), v)
//		uv == MathUtil.Lerp(uv00 * (1.0f - u) + uv10 * u, uv01 * (1.0f - u) + uv11 * u, v)
//		uv == MathUtil.Lerp(uv00 + u * (uv10 - uv00), uv01 + u * (uv11 - uv01), v)
//		uv == (uv00 + u * (uv10 - uv00)) + v * (uv01 - uv00 + u * (uv11 - uv01 + uv00 - uv10))
//		uv.y == (uv00.y + u * (uv10.y - uv00.y)) + v * (uv01.y - uv00.y + u * (uv11.y - uv01.y + uv00.y - uv10.y))
//		v = ((uv.y - (uv00.y + u * (uv10.y - uv00.y))) / (uv01.y - uv00.y + u * (uv11.y - uv01.y + uv00.y - uv10.y)))
//		(uv.x - (uv00.x + u * (uv10.x - uv00.x))) * (uv01.y - uv00.y + u * (uv11.y - uv01.y + uv00.y - uv10.y)) = (uv.y - (uv00.y + u * (uv10.y - uv00.y)) * (uv01.x - uv00.x + u * (uv11.x - uv01.x + uv00.x - uv10.x))
//		((uv.x - uv00.x) + u * (uv00.x - uv10.x)) * ((uv01.y - uv00.y) + u * (uv11.y - uv01.y + uv00.y - uv10.y)) = (uv.y - (uv00.y + u * (uv10.y - uv00.y)) * (uv01.x - uv00.x + u * (uv11.x - uv01.x + uv00.x - uv10.x))
//      (uv.x - uv00.x)*(uv01.y - uv00.y) + u * ((uv.x - uv00.x)*(uv11.y - uv01.y + uv00.y - uv10.y) + (uv00.x - uv10.x) * (uv01.y - uv00.y)) + u*u*(uv00.x - uv10.x)*(uv11.y - uv01.y + uv00.y - uv10.y)
//    = (uv.y - uv00.y)*(uv01.x - uv00.x) + u * ((uv.y - uv00.y)*(uv11.x - uv01.x + uv00.x - uv10.x) + (uv00.y - uv10.y) * (uv01.x - uv00.x)) + u*u*(uv00.y - uv10.y)*(uv11.x - uv01.x + uv00.x - uv10.x)
//
//        u*u * ((uv00.x - uv10.x)*(uv11.y - uv01.y + uv00.y - uv10.y) - (uv00.y - uv10.y)*(uv11.x - uv01.x + uv00.x - uv10.x))
//      + u *   (((uv.x - uv00.x)*(uv11.y - uv01.y + uv00.y - uv10.y) + (uv00.x - uv10.x) * (uv01.y - uv00.y)) - ((uv.y - uv00.y)*(uv11.x - uv01.x + uv00.x - uv10.x) + (uv00.y - uv10.y) * (uv01.x - uv00.x)))
//      +       (uv.x - uv00.x)*(uv01.y - uv00.y)-(uv.y - uv00.y)*(uv01.x - uv00.x)
//      = 0
//
		float a = ((uv00.x - uv10.x)*(uv11.y - uv01.y + uv00.y - uv10.y) - (uv00.y - uv10.y)*(uv11.x - uv01.x + uv00.x - uv10.x));
		float b = (((uv.x - uv00.x)*(uv11.y - uv01.y + uv00.y - uv10.y) + (uv00.x - uv10.x) * (uv01.y - uv00.y)) - ((uv.y - uv00.y)*(uv11.x - uv01.x + uv00.x - uv10.x) + (uv00.y - uv10.y) * (uv01.x - uv00.x)));
		float c = (uv.x - uv00.x)*(uv01.y - uv00.y)-(uv.y - uv00.y)*(uv01.x - uv00.x);
		float sqrt = Mathf.Sqrt(MathUtil.Max(0.0f, b*b - 4*a*c));
		float u = (-b - sqrt) / (2.0f * a);
		if(u < 0.0f || u > 1.0f)
		{
			float u2 = (-b + sqrt) / (2.0f * a);
			if((u2-0.5f)*(u2-0.5f) < (u-0.5f)*(u-0.5f))
				u = u2;
		}
		float v = ((uv.y - (uv00.y + u * (uv10.y - uv00.y))) / (uv01.y - uv00.y + u * (uv11.y - uv01.y + uv00.y - uv10.y)));

//		Debug.Log("uv.x=" + uv.x + ", uv.y=" + uv.y + ", a=" + a + ", b=" + b + ", c=" + c + ", sqrt = " + sqrt + ", u=" + u + ", v=" + v);

		errorAmount = (u-0.5f)*(u-0.5f)+(v-0.5f)*(v-0.5f);

		return new Vector2(u, v);
	}

#if UNITY_EDITOR
	public BezierPatchQuad Clone()
	{
		BezierPatchQuad rv = new BezierPatchQuad();
		WriteTo(rv);
		return rv;
	}
	public void WriteTo(BezierPatchQuad quad)
	{
		if(quad.x0 == null) { quad.x0 = new BezierPatchEdge(); }
		if(quad.x1 == null) { quad.x1 = new BezierPatchEdge(); }
		if(quad.y0 == null) { quad.y0 = new BezierPatchEdge(); }
		if(quad.y1 == null) { quad.y1 = new BezierPatchEdge(); }
		x0.WriteTo(quad.x0);
		x1.WriteTo(quad.x1);
		y0.WriteTo(quad.y0);
		y1.WriteTo(quad.y1);
		quad.uv00 = uv00;
		quad.uv10 = uv10;
		quad.uv01 = uv01;
		quad.uv11 = uv11;
		quad.disabled = disabled;
		quad.subMeshIndex = subMeshIndex;
		quad.initialized = initialized;
	}

	public bool ShouldBeDisabledWhenShown(Anim2d anim)
	{
		// kinda hacky:
		// since we don't separately store which quads can be enabled vs which ones should be enabled,
		// check all keyframes to see if it's enabled in any of them
		bool anyEnabled = false;
		bool anyOtherEnabled = false;
		if(anim && anim.layersProxy != null)
		{
			int numLayers = anim.layersProxy.Length;
			for(int layerIndex = 0 ; layerIndex < numLayers ; layerIndex++)
			{
				AnimLayer2d layer = anim.layersProxy[layerIndex];

				if(layer != null)
				{
					AnimStateLayer2d layerState = anim.layerStates[layerIndex];

					AnimQuadKeyFrames2d[] quads = layer.quads;
					BezierPatchQuad[] quadStates = layerState.quads;
					int quadCount = quads.Length;
					for(int quadIndex = 0 ; quadIndex < quadCount ; quadIndex++)
					{
						AnimQuadKeyFrames2d kfs = quads[quadIndex];
						BezierPatchQuad quad = quadStates[quadIndex];
						
						foreach(AnimQuadKeyFrame2d kf in kfs.keyFrames)
						{
							if(!kf.disabled)
							{
								if(quad == this)
								{
									anyEnabled = true;
									break;
								}
								else
								{
									anyOtherEnabled = true;
								}
							}
						}
						if(anyEnabled)
							break;
					}
					
				}
				if(anyEnabled)
					break;
			}
		}
		return !anyEnabled && anyOtherEnabled;
	}

#endif

}

//[Serializable]
public class BezierPatchGrid : ReloadableMonoBehaviour
{
	//public Vector3 pivot = new Vector3(0.5f, 0.5f, 0.0f);
	public int stride = 1; // number of quads in X before next row
	public BezierPatchQuad[] quads; // individual elements may be null
	public float minSubdivX = 1.0f;
	public float minSubdivY = 1.0f;
	public float maxSubdivX = 9.0f;
	public float maxSubdivY = 9.0f;
	public float maxWarpAutoDivs = 4.0f;
	public bool autoMinimizeSubdiv = true;
	public bool dynamicTesselation; // performance hack
	
	// skeleton/bone, in grid UV coordinates
	public Vector2 boneBase = new Vector2(0.5f, 0.5f);
	public Vector2 boneTip = new Vector2(1.0f, 0.5f);
	//public Vector2 anchorPoint = new Vector2(0.0f, 0.5f); // uv coordinates on parent grid which overlap (in world space) boneBase on this grid

	//public bool dirty { get { return _dirty; } set { if(value && !_dirty) { Debug.Log("DIRTY"); } _dirty = value; } } // for renderer
	//[System.NonSerialized] bool _dirty = true; // for renderer
	[System.NonSerialized] public bool dirty = true; // for renderer
	[System.NonSerialized] public Matrix4x4 tempMat; // for renderer
	[System.NonSerialized] public float tempZ; // for renderer
	[System.NonSerialized] public float tempU, tempV; // for renderer (optimization)
	[System.NonSerialized] public bool tempUVValid; // (optimization hack)

	[System.NonSerialized] public Transform root;
	//[System.NonSerialized] public BezierPatchGrid parentGrid;

#if UNITY_EDITOR
	[System.NonSerialized] private PatchRenderer patchRenderer;
	public PatchRenderer PatchRenderer {
		get {
			if(!patchRenderer) {
#if UNITY_EDITOR
				if(!root && !Application.isPlaying) {
					AwakePart1();
				}
#endif
				patchRenderer = Stm.V1_1.SceneHelper.SearchUpwardsFor<PatchRenderer>(root);
			}
			return patchRenderer;
		}
	}
#endif

#if UNITY_EDITOR
	[System.NonSerialized] public Anim2d anim;
	[System.NonSerialized] public bool initializedHasAnim;
	public static Delegates.ActionWithReturn<bool, Anim2d> isHiddenFunc;
	public bool IsDebugHidden(bool defaultValue=false)
	{
		if(!initializedHasAnim)
		{
			anim = GetComponent<Anim2d>();
			initializedHasAnim = true;
		}
		if(anim)
		{
			//Animator2d anim2DWindow = Animator2d.GetExistingWindow();
			//if(anim2DWindow)
			//	hidden = anim2DWindow.IsHidden(anim);
			if(isHiddenFunc != null)
				return isHiddenFunc(anim);
		}
		return defaultValue;
	}
#endif

	public void AwakePart1()
	{
		root = transform;
		//parentGrid = Stm.V1_1.SceneHelper.SearchUpwardsFor<BezierPatchGrid>(root.parent);
#if UNITY_EDITOR
		anim = GetComponent<Anim2d>();
		initializedHasAnim = true;
#endif
	}

	void Awake()
	{
		AwakePart1();
#if UNITY_EDITOR
		CheckInitQuads();
#endif
//		if(UpdateMgr.Inst) {
//			UpdateMgr.Inst.StartSequence(ref updateCoro, gameObject, DoUpdate(), SequenceType.Normal, false);
//		} else {
//			StartCoroutine(DoUpdate());
//		}
	}
	
#if UNITY_EDITOR
	public void CheckInitQuads()
	{
		if(quads.Length == 0)
			quads = new BezierPatchQuad[1];
		float x = 0, y = 0;
		int index = 0;
		foreach(BezierPatchQuad quad in quads)
		{
			if(quad != null && quad.initialized != index)
			{
				quad.initialized = index;
				//Debug.Log("x = " + x + ", y = " + y);
				quad.x0.p0 = new Vector2(x + 0.0f, y + 0.0f);
				quad.x0.p1 = new Vector2(x + 1.0f/3.0f, y + 0.0f);
				quad.x0.p2 = new Vector2(x + 2.0f/3.0f, y + 0.0f);
				quad.x0.p3 = new Vector2(x + 1.0f, y + 0.0f);

				quad.x1.p0 = new Vector2(x + 0.0f, y + 1.0f);
				quad.x1.p1 = new Vector2(x + 1.0f/3.0f, y + 1.0f);
				quad.x1.p2 = new Vector2(x + 2.0f/3.0f, y + 1.0f);
				quad.x1.p3 = new Vector2(x + 1.0f, y + 1.0f);

				quad.y0.p0 = new Vector2(x + 0.0f, y + 0.0f);
				quad.y0.p1 = new Vector2(x + 0.0f, y + 1.0f/3.0f);
				quad.y0.p2 = new Vector2(x + 0.0f, y + 2.0f/3.0f);
				quad.y0.p3 = new Vector2(x + 0.0f, y + 1.0f);

				quad.y1.p0 = new Vector2(x + 1.0f, y + 0.0f);
				quad.y1.p1 = new Vector2(x + 1.0f, y + 1.0f/3.0f);
				quad.y1.p2 = new Vector2(x + 1.0f, y + 2.0f/3.0f);
				quad.y1.p3 = new Vector2(x + 1.0f, y + 1.0f);

				UnityEditor.EditorUtility.SetDirty(this);
			}
			x++;
			if(stride > 0)
			{
				while(x >= stride)
				{
					x -= stride;
					y++;
				}
			}
		}
	}
#endif

	[Flags]
	public enum Quadrant
	{
		None   = 0x00,
		Left   = 0x01,
		Right  = 0x02,
		Up     = 0x04,
		Down   = 0x08,
		Center = 0x10,
	}

	public BezierPatchQuad GetQuad(int x, int y)
	{
		if((x) >= 0 && (x) < stride && (y) >= 0 && ((y) * stride + (x) < quads.Length))
		{
			BezierPatchQuad quad = quads[y * stride + x];
			if(!quad.disabled)
				return quad;
		}
		return null;
	}

#if UNITY_EDITOR
	public BezierPatchQuad GetQuadEvenIfDisabled(int x, int y)
	{
		if((x) >= 0 && (x) < stride && (y) >= 0 && ((y) * stride + (x) < quads.Length))
		{
			BezierPatchQuad quad = quads[y * stride + x];
			return quad;
		}
		return null;
	}
#endif

	public Quadrant GetNeighborInfo(int x, int y)
	{
		Quadrant rv = Quadrant.None;
		if(GetQuad(x,y) != null)
			rv |= Quadrant.Center;
		if(GetQuad(x+1,y) != null)
			rv |= Quadrant.Right;
		if(GetQuad(x-1,y) != null)
			rv |= Quadrant.Left;
		if(GetQuad(x,y+1) != null)
			rv |= Quadrant.Up;
		if(GetQuad(x,y-1) != null)
			rv |= Quadrant.Down;
		return rv;
	}

	public int GetWidth()
	{
		if(stride > 0)
			return MathUtil.Min(stride, quads.Length);
		else if(stride == 0)
			return quads.Length;
		else
			return 0;
	}
	
	public int GetHeight()
	{
		if(stride > 0)
			return (quads.Length + (stride - 1)) / stride;
		else if(stride == 0)
			return (quads.Length != 0) ? 1 : 0;
		else
			return 0;
	}

	public Vector2 LocalValueAt(float u, float v)
	{
		int x = (int)(u - 0.000001f);
		int y = (int)(v - 0.000001f);
		u -= (float)x;
		v -= (float)y;
		BezierPatchQuad quad = GetQuad(x,y);
//		if(quad == null)
//		{
//			if(u == 0.0f && null != (quad = GetQuad(x-1,y)))
//				u = 1.0f;
//			else if(v == 0.0f && null != (quad = GetQuad(x,y-1)))
//				v = 1.0f;
//			else if(u == 0.0f && v == 0.0f && null != (quad = GetQuad(x-1,y-1)))
//			{
//				u = 1.0f;
//				v = 1.0f;
//			}
//		}
		if(quad != null)
		{
			Vector2 rv = quad.ValueAt(u, v);
//			if(parentGrid)
//				rv += GetPivotDiff();
			return rv /*- pivot*/;
		}
		return Vector2.zero;
	}
	
	public void EnableQuads(bool enable)
	{
		enabled = enable;
//		foreach(BezierPatchQuad quad in quads)
//		{
//			quad.disabled = !enable;			
//		}
		
		dirty = true;
	}
	
	
//	CoroutineHandle updateCoro;
//	
//#if UNITY_EDITOR
//	new void OnEnable() { base.OnEnable();
//#else
//	void OnEnable() {
//#endif
//		if(UpdateMgr.Inst != null)
//			UpdateMgr.Inst.ResumeSequence(updateCoro);
//    }
//	
//    IEnumerator DoUpdate()
//    {
//		while(true)
//		{
//			yield return null;
//			MyUpdate();
//		}
//    }
//    
//    void MyUpdate()
//    {
//    }

	
#if UNITY_EDITOR
	public Vector2 LocalValueAtPermissive(float u, float v)
	{
		{
			int x = (int)(u - 0.000001f);
			int y = (int)(v - 0.000001f);
			BezierPatchQuad quad = GetQuad(x,y);
			if(quad != null && !quad.disabled)
			{
				u -= (float)x;
				v -= (float)y;
				Vector2 rv = quad.ValueAt(u, v);
//				if(parentGrid)
//					rv += GetPivotDiff();
				return rv /*- pivot*/;
			}
		}
		
		{
			float bestDistSq = float.MaxValue;
			int bestX = -1;
			int bestY = -1;
			int width = GetWidth();
			int height = GetHeight();
			for(int x = 0 ; x < width ; x++)
			{
				for(int y = 0 ; y < height ; y++)
				{
					BezierPatchQuad quad = GetQuad(x,y);
					if(quad != null && !quad.disabled)
					{
						float a = u - (x + 0.5f);
						float b = v - (y + 0.5f);
						float distSq = a*a + b*b;
						if(distSq < bestDistSq)
						{
							bestDistSq = distSq;
							bestX = x;
							bestY = y;
						}
					}
				}
			}
			if(bestX != -1)
			{
				BezierPatchQuad quad = GetQuad(bestX,bestY);
				//if(quad != null && !quad.disabled)
				{
					u -= (float)bestX;
					v -= (float)bestY;
					return quad.ValueAt(u,v);
				}
			}
		}

		return Vector2.zero;
	}
#endif

	public Vector2 LocalValueAt(BezierPatchQuad quad, float u, float v)
	{
		Vector2 rv = quad.ValueAt(u, v);
//		if(parentGrid)
//			rv += GetPivotDiff();
		return rv /*- pivot*/;
	}
	
//	public Vector2 GetPivotDiff()
//	{
////		if(parentGrid)
////		{
//////			Vector2 parentRootPoint = parentGrid.LocalValueAt(anchorPoint.x, anchorPoint.y);
//////			//rv += parentRootPoint - (Vector2)parentGrid.root.localPosition;
//////			//rv += newAnchorPoint - anchorPoint;
//////			Debug.Log("parentRootPoint = " + parentRootPoint);
//////			Debug.Log("parentGrid.root.localPosition = " + parentGrid.root.localPosition.x + ", " + parentGrid.root.localPosition.y);
//////			Debug.Log("diff = " + (parentRootPoint - (Vector2)parentGrid.root.localPosition));
////
////			//Vector2 boneBaseLocalPos = quad.ValueAt(boneBase.x, boneBase.y);
////			//Vector2 boneBaseLocalPos = Vector2.zero;
////			
////			//Vector2 newAnchorPoint = parentGrid.InverseWorldValueAt(root.position);
////			//Vector2 diff = parentGrid.LocalValueAt(newAnchorPoint.x, newAnchorPoint.y) - parentGrid.LocalValueAt(anchorPoint.x, anchorPoint.y);
////			//rv -= diff;
////			
//////			Vector3 diff = parentGrid.WorldValueAt(anchorPoint.x, anchorPoint.y) - root.position;
//////			return (Vector2)root.InverseTransformDirection(diff);
////
////			Vector3 diff = parentGrid.WorldValueAt(anchorPoint.x, anchorPoint.y) - root.position;
////			return (Vector2)root.InverseTransformDirection(diff);
////
////		}
//		return Vector2.zero;
//	}
	
	public Vector3 WorldValueAt(float u, float v)
	{
#if UNITY_EDITOR
		if(!root && !Application.isPlaying)
			Awake();
#endif
		return root.TransformPoint(LocalValueAt(u, v));
	}
	
	public Vector3 WorldValueAt(BezierPatchQuad quad, float u, float v)
	{
#if UNITY_EDITOR
		if(!root && !Application.isPlaying)
			Awake();
#endif
		return root.TransformPoint(quad.ValueAt(u, v) /*- pivot*/);
	}
	
	public Vector2 TexCoordsAt(float u, float v)
	{
		int x = (int)(u - 0.000001f);
		int y = (int)(v - 0.000001f);
		u -= (float)x;
		v -= (float)y;
		BezierPatchQuad quad = GetQuad(x,y);
//		if(quad == null)
//		{
//			if(u == 0.0f && null != (quad = GetQuad(x-1,y)))
//				u = 1.0f;
//			else if(v == 0.0f && null != (quad = GetQuad(x,y-1)))
//				v = 1.0f;
//			else if(u == 0.0f && v == 0.0f && null != (quad = GetQuad(x-1,y-1)))
//			{
//				u = 1.0f;
//				v = 1.0f;
//			}
//		}
		if(quad != null)
			return quad.TexCoordsAt(u,v);

		return Vector2.zero;
	}
	
#if UNITY_EDITOR
	public Vector2 TexCoordsAtPermissive(float u, float v)
	{
		{
			int x = (int)(u - 0.000001f);
			int y = (int)(v - 0.000001f);
			BezierPatchQuad quad = GetQuad(x,y);
			if(quad != null && !quad.disabled)
			{
				u -= (float)x;
				v -= (float)y;
				return quad.TexCoordsAt(u,v);
			}
		}
		
		{
			float bestDistSq = float.MaxValue;
			int bestX = -1;
			int bestY = -1;
			int width = GetWidth();
			int height = GetHeight();
			for(int x = 0 ; x < width ; x++)
			{
				for(int y = 0 ; y < height ; y++)
				{
					BezierPatchQuad quad = GetQuad(x,y);
					if(quad != null && !quad.disabled)
					{
						float a = u - (x + 0.5f);
						float b = v - (y + 0.5f);
						float distSq = a*a + b*b;
						if(distSq < bestDistSq)
						{
							bestDistSq = distSq;
							bestX = x;
							bestY = y;
						}
					}
				}
			}
			if(bestX != -1)
			{
				BezierPatchQuad quad = GetQuad(bestX,bestY);
				//if(quad != null && !quad.disabled)
				{
					u -= (float)bestX;
					v -= (float)bestY;
					return quad.TexCoordsAt(u,v);
				}
			}
		}

		return Vector2.zero;
	}
#endif

	public Vector2 InverseLocalValueAt(Vector2 pos)
	{
		float bestErr = float.MaxValue;
		Vector2 bestRV = Vector2.zero;
		int width = GetWidth();
		int height = GetHeight();
		for(int x = 0 ; x < width ; x++)
		{
			for(int y = 0 ; y < height ; y++)
			{
				BezierPatchQuad quad = GetQuad(x,y);
				if(quad != null && !quad.disabled)
				{
					float err;
					Vector2 rv = quad.InverseValueAt(pos, out err);
					if(err < bestErr)
					{
						bestErr = err;
						bestRV = rv + new Vector2(x,y);
					}
				}
			}
		}
		return bestRV;
	}

	public Vector2 InverseWorldValueAt(Vector3 pos)
	{
#if UNITY_EDITOR
		if(!root && !Application.isPlaying)
			Awake();
#endif
		return InverseLocalValueAt(root.InverseTransformPoint(pos));
	}
	
	public Vector2 InverseTexCoordsAt(Vector2 uv)
	{
		Vector2 bestRV = new Vector2(0.5f, 0.5f);
		bool wow = false;
		float bestErr = float.MaxValue;
		int width = GetWidth();
		int height = GetHeight();
		{
			for(int x = 0 ; x < width ; x++)
			{
				for(int y = 0 ; y < height ; y++)
				{
					BezierPatchQuad quad = GetQuad(x,y);
					if(quad != null && !quad.disabled)
					{
						float err;
						Vector2 rv = quad.InverseTexCoordsAt(uv, out err);
						if(err < bestErr)
						{
							bestErr = err;
							bestRV = rv + new Vector2(x,y);
							wow = true;
						}
					}
				}
			}
		}
		if(bestErr > 9999999.9f || !wow)
		{
			for(int x = 0 ; x < width ; x++)
			{
				for(int y = 0 ; y < height ; y++)
				{
					BezierPatchQuad quad = GetQuad(x,y);
					if(quad != null /*&& !quad.disabled*/)
					{
						float err;
						Vector2 rv = quad.InverseTexCoordsAt(uv, out err);
						if(err < bestErr)
						{
							bestErr = err;
							bestRV = rv + new Vector2(x,y);
							wow = true;
						}
					}
				}
			}
		}
//if(bestErr > 9999999.9f || !wow)
//{
//	Debug.Log("WTF " + bestErr + " | " + wow);
//		{
//			bestErr = float.MaxValue;
//	Debug.Log(width + " x " + height);
//			for(int x = 0 ; x < width ; x++)
//			{
//				for(int y = 0 ; y < height ; y++)
//				{
//	Debug.Log(x + "," + y);
//					BezierPatchQuad quad = GetQuad(x,y);
//					if(quad != null && !quad.disabled)
//					{
//						float err;
//						Vector2 rv = quad.InverseTexCoordsAt(uv, out err);
//	Debug.Log("oh " + err + ", rv = " + rv);
//						if(err < bestErr)
//						{
//	Debug.Log("wow");
//							bestErr = err;
//							bestRV = rv + new Vector2(x,y);
//						}
//					}
//				}
//			}
//		}
//}
		return bestRV;
	}

	public void GetTesselationStep(out float du, out float dv)
	{
		if(!dynamicTesselation && tempUVValid)
		{
			du = tempU;
			dv = tempV;
			return;
		}
		
		float udivs, vdivs;
		if(autoMinimizeSubdiv
		&& (minSubdivX < maxSubdivX || minSubdivY < maxSubdivY))
		{
			float xAlignMin = 1.0f;
			float yAlignMin = 1.0f;
			foreach(BezierPatchQuad quad in quads)
			{
				if(quad == null || quad.disabled)
					continue;
				
				float xAlign
				= Vector2.Dot(quad.x0.p3 - quad.x0.p2, quad.x0.p1 - quad.x0.p0) / Vector2.Dot(quad.x0.p3 - quad.x0.p0, quad.x0.p3 - quad.x0.p0)
				+ Vector2.Dot(quad.x1.p3 - quad.x1.p2, quad.x1.p1 - quad.x1.p0) / Vector2.Dot(quad.x1.p3 - quad.x1.p0, quad.x1.p3 - quad.x1.p0);
				xAlign *= 9.0f / 2.0f;
				if(xAlign > 1.0f)
					xAlign = 2.0f - xAlign;
				if(xAlign < 0.0f || float.IsNaN(xAlign) || float.IsInfinity(xAlign))
					xAlign = 0.0f;
				xAlign *= xAlign;
				xAlignMin = MathUtil.Min(xAlignMin, xAlign);
				
				float yAlign
				= Vector2.Dot(quad.y0.p3 - quad.y0.p2, quad.y0.p1 - quad.y0.p0) / Vector2.Dot(quad.y0.p3 - quad.y0.p0, quad.y0.p3 - quad.y0.p0)
				+ Vector2.Dot(quad.y1.p3 - quad.y1.p2, quad.y1.p1 - quad.y1.p0) / Vector2.Dot(quad.y1.p3 - quad.y1.p0, quad.y1.p3 - quad.y1.p0);
				yAlign *= 9.0f / 2.0f;
				if(yAlign > 1.0f)
					yAlign = 2.0f - yAlign;
				if(yAlign < 0.0f || float.IsNaN(yAlign) || float.IsInfinity(yAlign))
					yAlign = 0.0f;
				yAlign *= yAlign;
				yAlignMin = MathUtil.Min(yAlignMin, yAlign);
			}
			udivs = MathUtil.RescaleClamped(xAlignMin, 0.0f, 1.0f, maxSubdivX, minSubdivX);
			vdivs = MathUtil.RescaleClamped(yAlignMin, 0.0f, 1.0f, maxSubdivY, minSubdivY);
		}
		else
		{
			udivs = maxSubdivX;
			vdivs = maxSubdivY;
		}

//		if(udivs < 4 || vdivs < 4)
//		{
//			float extend = 1.0f;
//			foreach(BezierPatchQuad quad in quads)
//			{
//				if(quad == null || quad.disabled)
//					continue;
//				
//				float scale = 1.0f / (quad.x0.p0 - quad.x1.p3).sqrMagnitude;
//				Vector2 desiredMidPos = quad.ValueAt(0.5f, 0.5f);
//				Vector2 cheapMidPos = (quad.x0.p0 + quad.x1.p3) * (0.5f);
//				//Vector2 desiredCenterUV = (quad.uv00 + quad.uv10 + quad.uv01 + quad.uv11) * 0.25f;
//				//Vector2 actualCenterUV = (quad.TexCoordsAt(1.0f, 0.0f) + quad.TexCoordsAt(0.0f, 1.0f)) * 0.5f;
//				//Debug.Log("desiredCenterUV = " + desiredCenterUV + ", actualCenterUV = " + actualCenterUV);
//				//Debug.Log("desiredMidPos = " + desiredMidPos.x + ","+desiredMidPos.y + ", cheapMidPos = " + cheapMidPos.x+","+cheapMidPos.y);
//				float measure = (desiredMidPos - cheapMidPos).sqrMagnitude * scale;
//				extend = Mathf.Max(extend, MathUtil.RescaleClamped(measure, 0.0f, 0.01f, 1.0f, 4.0f));
////				if(measure > 0.001f)
////				{
////					if(measure > 0.005f)
////						if(measure > 0.01f)
////							extend = MathUtil.Max(extend, 4.0f);
////						else
////							extend = MathUtil.Max(extend, 3.0f);
////					else
////						extend = MathUtil.Max(extend, 2.0f);
////				}
////				Debug.Log("measure = " + measure + ": " + extend);
//				//if(desiredCenterUV - actualCenterUV
//			}
//			udivs = MathUtil.Max(udivs, extend);
//			vdivs = MathUtil.Max(vdivs, extend);
//		}
		if(udivs < maxWarpAutoDivs || vdivs < maxWarpAutoDivs)
		{
			float extend = 1.0f;
			foreach(BezierPatchQuad quad in quads)
			{
				if(quad == null || quad.disabled)
					continue;
/*
	2 3
	0 1
*/
				float pfactor = 1.0f / (quad.x0.p0 - quad.x1.p3).sqrMagnitude;
				float pd0 = Vector2.Dot(quad.x0.p3 - quad.x0.p0, quad.x1.p0 - quad.x0.p0);
				float pd1 = Vector2.Dot(quad.x1.p3 - quad.x0.p3, quad.x0.p0 - quad.x0.p3);
				float pd2 = Vector2.Dot(quad.x1.p0 - quad.x1.p3, quad.x0.p3 - quad.x1.p3);
				float pd3 = Vector2.Dot(quad.x0.p0 - quad.x1.p0, quad.x1.p3 - quad.x1.p0);
				
				float ufactor = 1.0f / (quad.uv00 - quad.uv11).sqrMagnitude;
				float ud0 = Vector2.Dot(quad.uv10 - quad.uv00, quad.uv01 - quad.uv00);
				float ud1 = Vector2.Dot(quad.uv11 - quad.uv10, quad.uv00 - quad.uv10);
				float ud2 = Vector2.Dot(quad.uv01 - quad.uv11, quad.uv10 - quad.uv11);
				float ud3 = Vector2.Dot(quad.uv00 - quad.uv01, quad.uv11 - quad.uv01);
				
				//float pdiff = (pd0 + pd1 + pd2 + pd3) * pfactor;
				//float udiff = (ud0 + ud1 + ud2 + ud3) * ufactor;
				
				float err =
				  MathUtil.Dist(pd0*pfactor,ud0*ufactor)
				+ MathUtil.Dist(pd1*pfactor,ud1*ufactor)
				+ MathUtil.Dist(pd2*pfactor,ud2*ufactor)
				+ MathUtil.Dist(pd3*pfactor,ud3*ufactor)
				;
				
				//Debug.Log(pdiff + ", " + udiff);
				//Debug.Log(err);
				
				extend = Mathf.Max(extend, MathUtil.RescaleClamped(err, 0.0f, 0.5f, 0.0f, maxWarpAutoDivs));
				
			}
			float oldudivs = udivs;
			udivs = MathUtil.Max(udivs, MathUtil.Max(extend, MathUtil.Min(vdivs, maxWarpAutoDivs)));
			vdivs = MathUtil.Max(vdivs, MathUtil.Max(extend, MathUtil.Min(oldudivs, maxWarpAutoDivs)));
		}

		float udivsFloor = Mathf.Floor(udivs);
		float vdivsFloor = Mathf.Floor(vdivs);
		if(udivs - udivsFloor < 0.2f)
			udivs = udivsFloor;
		if(vdivs - vdivsFloor < 0.2f)
			vdivs = vdivsFloor;

		du = 1.0f / udivs;
		dv = 1.0f / vdivs;
		
		tempU = du;
		tempV = dv;
		tempUVValid = true;
	}

#if UNITY_EDITOR

	public void Weld()
	{
		Vector2 oldBoneBase = LocalValueAt(boneBase.x, boneBase.y);
		for(int iter = 0 ; iter < 1000 ; iter++)
		{
			foreach(BezierPatchQuad quad in quads)
			{
				if(!(quad == null || quad.disabled))
				{
					if(quad.x0.p0 != quad.y0.p0)
						quad.x0.p0 = quad.y0.p0 = (quad.x0.p0 + quad.y0.p0) * 0.5f;
					if(quad.x0.p3 != quad.y1.p0)
						quad.x0.p3 = quad.y1.p0 = (quad.x0.p3 + quad.y1.p0) * 0.5f;
					if(quad.x1.p0 != quad.y0.p3)
						quad.x1.p0 = quad.y0.p3 = (quad.x1.p0 + quad.y0.p3) * 0.5f;
					if(quad.x1.p3 != quad.y1.p3)
						quad.x1.p3 = quad.y1.p3 = (quad.x1.p3 + quad.y1.p3) * 0.5f;
				}
			}
			bool anyChanged2 = false;
			int x = 0, y = 0;
			foreach(BezierPatchQuad quad in quads)
			{
				if(!(quad == null || quad.disabled))
				{
					Quadrant quadrant = GetNeighborInfo(x,y);
					if((quadrant & Quadrant.Down) != 0)
						if(quad.x0.MergeTogether(GetQuad(x,y-1).x1) || MergeUVsTogether(ref quad.uv00, ref GetQuad(x,y-1).uv01) || MergeUVsTogether(ref quad.uv10, ref GetQuad(x,y-1).uv11))
							anyChanged2 = true;
					if((quadrant & Quadrant.Up) != 0)
						if(quad.x1.MergeTogether(GetQuad(x,y+1).x0) || MergeUVsTogether(ref quad.uv01, ref GetQuad(x,y+1).uv00) || MergeUVsTogether(ref quad.uv11, ref GetQuad(x,y+1).uv10))
							anyChanged2 = true;
					if((quadrant & Quadrant.Left) != 0)
						if(quad.y0.MergeTogether(GetQuad(x-1,y).y1) || MergeUVsTogether(ref quad.uv00, ref GetQuad(x-1,y).uv10) || MergeUVsTogether(ref quad.uv01, ref GetQuad(x-1,y).uv11))
							anyChanged2 = true;
					if((quadrant & Quadrant.Right) != 0)
						if(quad.y1.MergeTogether(GetQuad(x+1,y).y0) || MergeUVsTogether(ref quad.uv10, ref GetQuad(x+1,y).uv00) || MergeUVsTogether(ref quad.uv11, ref GetQuad(x+1,y).uv01))
							anyChanged2 = true;
				}
				x++;
				if(stride > 0 && x >= stride)
				{
					x -= stride;
					y++;
				}
			}
			if(!anyChanged2)
				break;
		}
		AdjustControlPointsToKeepBoneBaseFixed(oldBoneBase);
	}

	bool MergeUVsTogether(ref Vector2 a, ref Vector2 b)
	{
		if(a != b)
		{
			a = (a + b) * 0.5f;
			b = a;
			return true;
		}
		return false;
	}

	public void SmoothEdges()
	{
		Vector2 oldBoneBase = LocalValueAt(boneBase.x, boneBase.y);
		for(int iter = 0 ; iter < 5 ; iter++)
		{
			int x = 0, y = 0;
			foreach(BezierPatchQuad quad in quads)
			{
				if(!(quad == null || quad.disabled))
				{
					Quadrant quadrant = GetNeighborInfo(x,y);
					if((quadrant & Quadrant.Down) != 0)
					{
						quad.y0.SmoothCrease(false, GetQuad(x,y-1).y0, true);
						quad.y1.SmoothCrease(false, GetQuad(x,y-1).y1, true);
					}
					if((quadrant & Quadrant.Up) != 0)
					{
						quad.y0.SmoothCrease(true, GetQuad(x,y+1).y0, false);
						quad.y1.SmoothCrease(true, GetQuad(x,y+1).y1, false);
					}
					if((quadrant & Quadrant.Left) != 0)
					{
						quad.x0.SmoothCrease(false, GetQuad(x-1,y).x0, true);
						quad.x1.SmoothCrease(false, GetQuad(x-1,y).x1, true);
					}
					if((quadrant & Quadrant.Right) != 0)
					{
						quad.x0.SmoothCrease(true, GetQuad(x+1,y).x0, false);
						quad.x1.SmoothCrease(true, GetQuad(x+1,y).x1, false);
					}
				}
				x++;
				if(stride > 0 && x >= stride)
				{
					x -= stride;
					y++;
				}
			}

			Weld();
		}
		AdjustControlPointsToKeepBoneBaseFixed(oldBoneBase);
	}
	
	public void SmoothOuterCorners()
	{
		Vector2 oldBoneBase = LocalValueAt(boneBase.x, boneBase.y);
		Weld();
		
		int x = 0, y = 0;
		foreach(BezierPatchQuad quad in quads)
		{
			if(!(quad == null || quad.disabled))
			{
				Quadrant quadrant = GetNeighborInfo(x,y);
				if((quadrant & (Quadrant.Down | Quadrant.Left)) == 0)
				{
					quad.x0.p1 = quad.x0.p0 + new Vector2(Vector2.Dot(quad.x0.p3 - quad.x0.p0, Vector2.up) * (1.0f/3.0f), Vector2.Dot(quad.x0.p3 - quad.x0.p0, Vector2.right) * -(1.0f/3.0f));
					quad.y0.p1 = quad.y0.p0 + new Vector2(Vector2.Dot(quad.y0.p3 - quad.y0.p0, Vector2.up) * -(1.0f/3.0f), Vector2.Dot(quad.y0.p3 - quad.y0.p0, Vector2.right) * (1.0f/3.0f));
				}
				if((quadrant & (Quadrant.Down | Quadrant.Right)) == 0)
				{
					quad.x0.p2 = quad.x0.p3 + new Vector2(Vector2.Dot(quad.x0.p3 - quad.x0.p0, Vector2.up) * (1.0f/3.0f), Vector2.Dot(quad.x0.p3 - quad.x0.p0, Vector2.right) * -(1.0f/3.0f));
					quad.y1.p1 = quad.y1.p0 + new Vector2(Vector2.Dot(quad.y1.p3 - quad.y1.p0, Vector2.up) * (1.0f/3.0f), Vector2.Dot(quad.y1.p3 - quad.y1.p0, Vector2.right) * -(1.0f/3.0f));
				}
				if((quadrant & (Quadrant.Up | Quadrant.Left)) == 0)
				{
					quad.x1.p1 = quad.x1.p0 + new Vector2(Vector2.Dot(quad.x1.p3 - quad.x1.p0, Vector2.up) * -(1.0f/3.0f), Vector2.Dot(quad.x1.p3 - quad.x1.p0, Vector2.right) * (1.0f/3.0f));
					quad.y0.p2 = quad.y0.p3 + new Vector2(Vector2.Dot(quad.y0.p3 - quad.y0.p0, Vector2.up) * -(1.0f/3.0f), Vector2.Dot(quad.y0.p3 - quad.y0.p0, Vector2.right) * (1.0f/3.0f));
				}
				if((quadrant & (Quadrant.Up | Quadrant.Right)) == 0)
				{
					quad.x1.p2 = quad.x1.p3 + new Vector2(Vector2.Dot(quad.x1.p3 - quad.x1.p0, Vector2.up) * -(1.0f/3.0f), Vector2.Dot(quad.x1.p3 - quad.x1.p0, Vector2.right) * (1.0f/3.0f));
					quad.y1.p2 = quad.y1.p3 + new Vector2(Vector2.Dot(quad.y1.p3 - quad.y1.p0, Vector2.up) * (1.0f/3.0f), Vector2.Dot(quad.y1.p3 - quad.y1.p0, Vector2.right) * -(1.0f/3.0f));
				}
			}
			x++;
			if(stride > 0 && x >= stride)
			{
				x -= stride;
				y++;
			}
		}

		Weld();
		AdjustControlPointsToKeepBoneBaseFixed(oldBoneBase);
	}

	public void StraightenEdges()
	{
		Vector2 oldBoneBase = LocalValueAt(boneBase.x, boneBase.y);
		Weld();
		
		int x = 0, y = 0;
		foreach(BezierPatchQuad quad in quads)
		{
			if(!(quad == null || quad.disabled))
			{
				//Quadrant quadrant = GetNeighborInfo(x,y);
				quad.x0.p1 = quad.x0.p0 - MathUtil.Rescale(quad.x0.p0 - quad.x0.p3, (quad.x0.p0 - quad.x0.p3).magnitude * (1.0f/3.0f));
				quad.y0.p1 = quad.y0.p0 - MathUtil.Rescale(quad.y0.p0 - quad.y0.p3, (quad.y0.p0 - quad.y0.p3).magnitude * (1.0f/3.0f));
				quad.x0.p2 = quad.x0.p3 + MathUtil.Rescale(quad.x0.p0 - quad.x0.p3, (quad.x0.p0 - quad.x0.p3).magnitude * (1.0f/3.0f));
				quad.y1.p1 = quad.y1.p0 - MathUtil.Rescale(quad.y1.p0 - quad.y1.p3, (quad.y1.p0 - quad.y1.p3).magnitude * (1.0f/3.0f));
				quad.x1.p1 = quad.x1.p0 - MathUtil.Rescale(quad.x1.p0 - quad.x1.p3, (quad.x1.p0 - quad.x1.p3).magnitude * (1.0f/3.0f));
				quad.y0.p2 = quad.y0.p3 + MathUtil.Rescale(quad.y0.p0 - quad.y0.p3, (quad.y0.p0 - quad.y0.p3).magnitude * (1.0f/3.0f));
				quad.x1.p2 = quad.x1.p3 + MathUtil.Rescale(quad.x1.p0 - quad.x1.p3, (quad.x1.p0 - quad.x1.p3).magnitude * (1.0f/3.0f));
				quad.y1.p2 = quad.y1.p3 + MathUtil.Rescale(quad.y1.p0 - quad.y1.p3, (quad.y1.p0 - quad.y1.p3).magnitude * (1.0f/3.0f));
			}
			x++;
			if(stride > 0 && x >= stride)
			{
				x -= stride;
				y++;
			}
		}

		//Weld();
		AdjustControlPointsToKeepBoneBaseFixed(oldBoneBase);
	}
	
	public void RectanglifyEdges()
	{
		Vector2 oldBoneBase = LocalValueAt(boneBase.x, boneBase.y);
		Weld();
		
		int x = 0, y = 0;
		foreach(BezierPatchQuad quad in quads)
		{
			if(!(quad == null || quad.disabled))
			{
				//Quadrant quadrant = GetNeighborInfo(x,y);
				float x0 = (quad.x0.p0.x + quad.x1.p0.x + quad.y0.p0.x + quad.y0.p3.x) * 0.25f;
				float x1 = (quad.x0.p3.x + quad.x1.p3.x + quad.y1.p0.x + quad.y1.p3.x) * 0.25f;
				float y0 = (quad.y0.p0.y + quad.y1.p0.y + quad.x0.p0.y + quad.x0.p3.y) * 0.25f;
				float y1 = (quad.y0.p3.y + quad.y1.p3.y + quad.x1.p0.y + quad.x1.p3.y) * 0.25f;
				quad.x0.p0.x = x0;
				quad.x1.p0.x = x0;
				quad.y0.p0.x = x0;
				quad.y0.p3.x = x0;
				quad.x0.p3.x = x1;
				quad.x1.p3.x = x1;
				quad.y1.p0.x = x1;
				quad.y1.p3.x = x1;
				quad.y0.p0.y = y0;
				quad.y1.p0.y = y0;
				quad.x0.p0.y = y0;
				quad.x0.p3.y = y0;
				quad.y0.p3.y = y1;
				quad.y1.p3.y = y1;
				quad.x1.p0.y = y1;
				quad.x1.p3.y = y1;
			}
			x++;
			if(stride > 0 && x >= stride)
			{
				x -= stride;
				y++;
			}
		}

		//Weld();
		AdjustControlPointsToKeepBoneBaseFixed(oldBoneBase);
		
		StraightenEdges();
	}
	
	public void RectanglifyUVs()
	{
		int x = 0, y = 0;
		foreach(BezierPatchQuad quad in quads)
		{
			if(!(quad == null || quad.disabled))
			{
				float x0 = (quad.uv00.x + quad.uv01.x + quad.uv00.x + quad.uv01.x) * 0.25f;
				float x1 = (quad.uv10.x + quad.uv11.x + quad.uv10.x + quad.uv11.x) * 0.25f;
				float y0 = (quad.uv00.y + quad.uv10.y + quad.uv00.y + quad.uv10.y) * 0.25f;
				float y1 = (quad.uv01.y + quad.uv11.y + quad.uv01.y + quad.uv11.y) * 0.25f;
				quad.uv00.x = x0;
				quad.uv01.x = x0;
				quad.uv10.x = x1;
				quad.uv11.x = x1;
				quad.uv00.y = y0;
				quad.uv10.y = y0;
				quad.uv01.y = y1;
				quad.uv11.y = y1;
			}
			x++;
			if(stride > 0 && x >= stride)
			{
				x -= stride;
				y++;
			}
		}
	}

	static Vector2 SnapAngle(Vector3 v)
	{
		float xx = v.x*v.x;
		float yy = v.y*v.y;
		if(MathUtil.Abs(xx) < MathUtil.Abs(yy) * 0.1f)
		{
			v.x = 0.0f;
		}
		else if(MathUtil.Abs(yy) < MathUtil.Abs(xx) * 0.1f)
		{
			v.y = 0.0f;
		}
		else if(MathUtil.Dist(Vector3.Angle(v,Vector3.right) % 45.0f,45.0f) < 4.0f)
		{
			v.x = ((v.y > 0.0f) == (v.x > 0.0f)) ? v.y : -v.y;
		}
		return v;
	}

	public void SnapAngles(bool wrapX = false)
	{
		Vector2 oldBoneBase = LocalValueAt(boneBase.x, boneBase.y);
		
		for(int iter = 0 ; iter < 16 ; iter++)
		{
			Weld();
			int x = 0, y = 0;
			foreach(BezierPatchQuad quad in quads)
			{
				if(!(quad == null || quad.disabled))
				{
					//Quadrant quadrant = GetNeighborInfo(x,y);
					
					quad.x0.p3 = quad.x0.p0 + SnapAngle(quad.x0.p3 - quad.x0.p0);
					quad.x1.p3 = quad.x1.p0 + SnapAngle(quad.x1.p3 - quad.x1.p0);
					quad.y0.p3 = quad.y0.p0 + SnapAngle(quad.y0.p3 - quad.y0.p0);
					quad.y1.p3 = quad.y1.p0 + SnapAngle(quad.y1.p3 - quad.y1.p0);
					
					quad.x0.p1 = quad.x0.p0 - MathUtil.Rescale(quad.x0.p0 - quad.x0.p3, (quad.x0.p0 - quad.x0.p3).magnitude * (1.0f/3.0f));
					quad.y0.p1 = quad.y0.p0 - MathUtil.Rescale(quad.y0.p0 - quad.y0.p3, (quad.y0.p0 - quad.y0.p3).magnitude * (1.0f/3.0f));
					quad.x0.p2 = quad.x0.p3 + MathUtil.Rescale(quad.x0.p0 - quad.x0.p3, (quad.x0.p0 - quad.x0.p3).magnitude * (1.0f/3.0f));
					quad.y1.p1 = quad.y1.p0 - MathUtil.Rescale(quad.y1.p0 - quad.y1.p3, (quad.y1.p0 - quad.y1.p3).magnitude * (1.0f/3.0f));
					quad.x1.p1 = quad.x1.p0 - MathUtil.Rescale(quad.x1.p0 - quad.x1.p3, (quad.x1.p0 - quad.x1.p3).magnitude * (1.0f/3.0f));
					quad.y0.p2 = quad.y0.p3 + MathUtil.Rescale(quad.y0.p0 - quad.y0.p3, (quad.y0.p0 - quad.y0.p3).magnitude * (1.0f/3.0f));
					quad.x1.p2 = quad.x1.p3 + MathUtil.Rescale(quad.x1.p0 - quad.x1.p3, (quad.x1.p0 - quad.x1.p3).magnitude * (1.0f/3.0f));
					quad.y1.p2 = quad.y1.p3 + MathUtil.Rescale(quad.y1.p0 - quad.y1.p3, (quad.y1.p0 - quad.y1.p3).magnitude * (1.0f/3.0f));

				}
				x++;
				if(stride > 0 && x >= stride)
				{
					x -= stride;
					y++;
				}
			}
			if(wrapX && quads.Length > 2)
			{
				BezierPatchQuad quad0 = quads[0];
				BezierPatchQuad quad1 = quads[quads.Length-1];
				if(!(quad0 == null || quad0.disabled || quad1 == null || quad1.disabled))
				{
					if(quad0.x0.p0 != quad1.x0.p3)
						quad0.x0.p0 = quad1.x0.p3 = (quad0.x0.p0 + quad1.x0.p3) * 0.5f;
					if(quad0.x1.p0 != quad1.x1.p3)
						quad0.x1.p0 = quad1.x1.p3 = (quad0.x1.p0 + quad1.x1.p3) * 0.5f;
					if(quad0.y0.p0 != quad1.y1.p0)
						quad0.y0.p0 = quad1.y1.p0 = (quad0.y0.p0 + quad1.y1.p0) * 0.5f;
					if(quad0.y0.p3 != quad1.y1.p3)
						quad0.y0.p3 = quad1.y1.p3 = (quad0.y0.p3 + quad1.y1.p3) * 0.5f;
				}
			}
		}

		//Weld();
		AdjustControlPointsToKeepBoneBaseFixed(oldBoneBase);
	}
	
	public void SmoothInnerCorners()
	{
		Vector2 oldBoneBase = LocalValueAt(boneBase.x, boneBase.y);

		Weld();
		for(int iter = 0 ; iter < 4 ; iter++)
		{
			int x = 0, y = 0;
			foreach(BezierPatchQuad quad in quads)
			{
				if(!(quad == null || quad.disabled))
				{
					Quadrant quadrant = GetNeighborInfo(x,y);
					if((quadrant & (Quadrant.Down | Quadrant.Left)) == (Quadrant.Down | Quadrant.Left) && GetQuad(x-1,y-1) == null)
					{
						GetQuad(x,y-1).x1.SmoothCrease(false, quad.y0, false);
						GetQuad(x-1,y).x0.SmoothCrease(true, quad.x0, false);
						GetQuad(x-1,y).x0.SmoothCrease(true, GetQuad(x,y-1).y0, true);
						GetQuad(x-1,y).x0.SmoothCrease(true, GetQuad(x,y-1).x1, false);
						GetQuad(x-1,y).y1.SmoothCrease(false, quad.x0, false);
						GetQuad(x-1,y).y1.SmoothCrease(false, GetQuad(x,y-1).y0, true);
						GetQuad(x-1,y).y1.SmoothCrease(false, GetQuad(x,y-1).x1, false);
						//quad.x0.p1 = quad.x0.p0 + new Vector3(0.0f, (quad.x0.p0 - quad.x0.p3).magnitude * -(1.0f/3.0f), 0.0f);
						//quad.y0.p1 = quad.y0.p0 + new Vector3((quad.y0.p0 - quad.y0.p3).magnitude * -(1.0f/3.0f), 0.0f, 0.0f);
					}
					if((quadrant & (Quadrant.Down | Quadrant.Right)) == (Quadrant.Down | Quadrant.Right) && GetQuad(x+1,y-1) == null)
					{
						GetQuad(x,y-1).x1.SmoothCrease(true, quad.y1, false);
						GetQuad(x+1,y).x0.SmoothCrease(false, quad.x0, true);
						GetQuad(x+1,y).x0.SmoothCrease(false, GetQuad(x,y-1).y1, true);
						GetQuad(x+1,y).x0.SmoothCrease(false, GetQuad(x,y-1).x1, true);
						GetQuad(x+1,y).y0.SmoothCrease(false, quad.x0, true);
						GetQuad(x+1,y).y0.SmoothCrease(false, GetQuad(x,y-1).y1, true);
						GetQuad(x+1,y).y0.SmoothCrease(false, GetQuad(x,y-1).x1, true);
						//quad.x0.p2 = quad.x0.p3 + new Vector3(0.0f, (quad.x0.p0 - quad.x0.p3).magnitude * -(1.0f/3.0f), 0.0f);
						//quad.y1.p1 = quad.y1.p0 + new Vector3((quad.y1.p0 - quad.y1.p3).magnitude * (1.0f/3.0f), 0.0f, 0.0f);
					}
					if((quadrant & (Quadrant.Up | Quadrant.Left)) == (Quadrant.Up | Quadrant.Left) && GetQuad(x-1,y+1) == null)
					{
						GetQuad(x,y+1).x0.SmoothCrease(false, quad.y0, true);
						GetQuad(x-1,y).x1.SmoothCrease(true, quad.x1, false);
						GetQuad(x-1,y).x1.SmoothCrease(true, GetQuad(x,y+1).y0, false);
						GetQuad(x-1,y).x1.SmoothCrease(true, GetQuad(x,y+1).x0, false);
						GetQuad(x-1,y).y1.SmoothCrease(true, quad.x1, false);
						GetQuad(x-1,y).y1.SmoothCrease(true, GetQuad(x,y+1).y0, false);
						GetQuad(x-1,y).y1.SmoothCrease(true, GetQuad(x,y+1).x0, false);
						
						//GetQuad(x,y+1).y0.SmoothCrease(true, quad.y0, false);
						//quad.x1.p1 = quad.x1.p0 + new Vector3(0.0f, (quad.x1.p0 - quad.x1.p3).magnitude * (1.0f/3.0f), 0.0f);
						//quad.y0.p2 = quad.y0.p3 + new Vector3((quad.y0.p0 - quad.y0.p3).magnitude * -(1.0f/3.0f), 0.0f, 0.0f);
					}
					if((quadrant & (Quadrant.Up | Quadrant.Right)) == (Quadrant.Up | Quadrant.Right) && GetQuad(x+1,y+1) == null)
					{
	//					BezierPatchQuad quadR = GetQuad(x+1,y);
	//					BezierPatchQuad quadU = GetQuad(x,y+1);
	//					float rmag = (quadR.x1.p0 - quadR.x1.p3).magnitude * (1.0f/3.0f);
	//					quadR.x1.p1 = quadR.x1.p0 + new Vector3(rmag, 0.0f, 0.0f);
	//					quad.y1.p2 = quad.y1.p3 + new Vector3(rmag, 0.0f, 0.0f);
	//					quadR.y0.p2 = quadR.y0.p3 + new Vector3(rmag, 0.0f, 0.0f);
	//					float umag = (quadU.y1.p0 - quadR.y1.p3).magnitude * (1.0f/3.0f);
	//					quadU.y1.p1 = quadU.y1.p0 + new Vector3(0.0f, rmag, 0.0f);
	//					quad.x1.p2 = quad.x1.p3 + new Vector3(0.0f, rmag, 0.0f);
	//					quadU.x0.p2 = quadU.x0.p3 + new Vector3(0.0f, rmag, 0.0f);
						//quad.y0.p1 = quad.y0.p0 + new Vector3((quad.y0.p0 - quad.y0.p3).magnitude * -(1.0f/3.0f), 0.0f, 0.0f);
						//GetQuad(x+1,y)
						GetQuad(x,y+1).x0.SmoothCrease(true, quad.y1, true);
						GetQuad(x+1,y).x1.SmoothCrease(false, quad.x1, true);
						GetQuad(x+1,y).x1.SmoothCrease(false, GetQuad(x,y+1).y1, false);
						GetQuad(x+1,y).x1.SmoothCrease(false, GetQuad(x,y+1).x0, true);
						GetQuad(x+1,y).y0.SmoothCrease(true, quad.x1, true);
						GetQuad(x+1,y).y0.SmoothCrease(true, GetQuad(x,y+1).y1, false);
						GetQuad(x+1,y).y0.SmoothCrease(true, GetQuad(x,y+1).x0, true);
						//quad.x1.p2 = quad.x1.p3 + new Vector3(0.0f, (quad.x1.p0 - quad.x1.p3).magnitude * (1.0f/3.0f), 0.0f);
						//quad.y1.p2 = quad.y1.p3 + new Vector3((quad.y1.p0 - quad.y1.p3).magnitude * (1.0f/3.0f), 0.0f, 0.0f);
					}
				}
				x++;
				if(stride > 0 && x >= stride)
				{
					x -= stride;
					y++;
				}
			}

			Weld();
		}
		AdjustControlPointsToKeepBoneBaseFixed(oldBoneBase);
	}

	public bool AdjustControlPointsToKeepBoneBaseFixed(Vector2 localValueAtOldBoneBase)
	{
		Vector2 newBoneBase = LocalValueAt(boneBase.x, boneBase.y);
		Vector2 boneCompensationDelta = localValueAtOldBoneBase - newBoneBase;
		if(boneCompensationDelta.sqrMagnitude <= 0.0f)
			return false;
		foreach(BezierPatchQuad quad in quads)
		{
			if(quad == null /*|| quad.disabled*/)
				continue;
			quad.x0.p0 += boneCompensationDelta;
			quad.x0.p1 += boneCompensationDelta;
			quad.x0.p2 += boneCompensationDelta;
			quad.x0.p3 += boneCompensationDelta;
			quad.x1.p0 += boneCompensationDelta;
			quad.x1.p1 += boneCompensationDelta;
			quad.x1.p2 += boneCompensationDelta;
			quad.x1.p3 += boneCompensationDelta;
			quad.y0.p0 += boneCompensationDelta;
			quad.y0.p1 += boneCompensationDelta;
			quad.y0.p2 += boneCompensationDelta;
			quad.y0.p3 += boneCompensationDelta;
			quad.y1.p0 += boneCompensationDelta;
			quad.y1.p1 += boneCompensationDelta;
			quad.y1.p2 += boneCompensationDelta;
			quad.y1.p3 += boneCompensationDelta;
		}
		return true;
	}


	public void MoveBoneBaseTo(Vector2 newBoneBase)
	{
		Transform t = transform;
		boneBase = newBoneBase;

		Vector2 newRootPosLocal = LocalValueAtPermissive(boneBase.x, boneBase.y);
		Vector3 newRootPos = root.TransformPoint(newRootPosLocal);
		//Vector3 newRootPos = t.parent ? t.parent.position : Vector3.zero;
		Vector2 realLocalPosition = t.InverseTransformPoint(t.position);
		//Vector2 localReverseRootDelta = t.InverseTransformDirection(t.position - newRootPos);
		Vector2 localReverseRootDelta = realLocalPosition - newRootPosLocal;
		Vector3 worldRootDelta = newRootPos - t.position;
		
		foreach(BezierPatchQuad quad in quads)
		{
			if(quad == null /*|| quad.disabled*/)
				continue;
			quad.x0.p0 += localReverseRootDelta;
			quad.x0.p1 += localReverseRootDelta;
			quad.x0.p2 += localReverseRootDelta;
			quad.x0.p3 += localReverseRootDelta;
			quad.y0.p0 += localReverseRootDelta;
			quad.y0.p1 += localReverseRootDelta;
			quad.y0.p2 += localReverseRootDelta;
			quad.y0.p3 += localReverseRootDelta;
			quad.x1.p0 += localReverseRootDelta;
			quad.x1.p1 += localReverseRootDelta;
			quad.x1.p2 += localReverseRootDelta;
			quad.x1.p3 += localReverseRootDelta;
			quad.y1.p0 += localReverseRootDelta;
			quad.y1.p1 += localReverseRootDelta;
			quad.y1.p2 += localReverseRootDelta;
			quad.y1.p3 += localReverseRootDelta;
		}
		Anim2d anim = GetComponent<Anim2d>();
		if(anim)
		{
			Undo.RecordObject(anim, "Move Bone Root of " + name);
			anim.SanityCheck();
			BezierPatchQuad[] savedQuads = new BezierPatchQuad[quads.Length];
			for(int quadIndex = 0 ; quadIndex < quads.Length ; quadIndex++)
			{
				BezierPatchQuad quad = quads[quadIndex];
				if(quad != null)
					savedQuads[quadIndex] = quad.Clone();
			}
			//Vector3 savedPos = t.localPosition;
			//Quaternion savedRot = t.localRotation;
			
			{
				int numLayers = anim.layersProxy.Length;
				for(int layerIndex = 0 ; layerIndex < numLayers ; layerIndex++)
				{
					AnimLayer2d layer = anim.layersProxy[layerIndex];
					
					List<float> times = new List<float>();
					foreach(AnimQuadKeyFrames2d kfs in layer.quads)
						foreach(AnimQuadKeyFrame2d kf in kfs.keyFrames)
							if(times.IndexOf(kf.time) == -1)
								times.Add(kf.time);
					int timeCount = times.Count;
					for(int timeIndex = 0 ; timeIndex < timeCount ; timeIndex++)
					{
						float time = times[timeIndex];
						int layerIndexTemp = layerIndex;
						float timeTemp = time;
						anim.UpdateTo(ref layerIndexTemp, ref timeTemp, false);

						Vector2 newRootPosLocal2 = LocalValueAtPermissive(boneBase.x, boneBase.y);
						Vector2 localReverseRootDelta2 = realLocalPosition - newRootPosLocal2;
					
						foreach(AnimQuadKeyFrames2d kfs in layer.quads)
						{
							foreach(AnimQuadKeyFrame2d kf in kfs.keyFrames)
							{
								if(kf.time == time)
								{
									kf.p00 += localReverseRootDelta2;
									kf.p01 += localReverseRootDelta2;
									kf.p02 += localReverseRootDelta2;
									kf.p03 += localReverseRootDelta2;
									kf.p10 += localReverseRootDelta2;
									kf.p13 += localReverseRootDelta2;
									kf.p20 += localReverseRootDelta2;
									kf.p23 += localReverseRootDelta2;
									kf.p30 += localReverseRootDelta2;
									kf.p31 += localReverseRootDelta2;
									kf.p32 += localReverseRootDelta2;
									kf.p33 += localReverseRootDelta2;
								}
							}
						}
					}
					foreach(AnimRootKeyFrame2d kf in layer.root.keyFrames)
						kf.localPosition += WorldToLocalDelta(worldRootDelta, t);
				}
			}

			foreach(Anim2d anim2 in GetComponentsInChildren<Anim2d>(true))
			{
				if(anim2 == anim)
					continue;
				Transform t2 = anim2.transform;
				Anim2d animParent = Stm.V1_1.SceneHelper.SearchUpwardsFor<Anim2d>(t2.parent);
				if(animParent != anim)
					continue;
				Undo.RecordObject(anim2, "Move Bone Root of " + name);
				anim2.SanityCheck();
				int numLayers = anim2.layersProxy.Length;
				for(int layerIndex = 0 ; layerIndex < numLayers ; layerIndex++)
				{
					AnimLayer2d layer = anim2.layersProxy[layerIndex];
					foreach(AnimRootKeyFrame2d kf in layer.root.keyFrames)
						kf.localPosition -= WorldToLocalDelta(worldRootDelta, t2);
				}
			}

			for(int quadIndex = 0 ; quadIndex < quads.Length ; quadIndex++)
			{
				BezierPatchQuad quad = quads[quadIndex];
				if(quad != null)
					savedQuads[quadIndex].WriteTo(quad);
			}
			//t.localPosition = savedPos;
			//t.localRotation = savedRot;
		}

		Undo.RecordObjects(t.GetComponentsInChildren<Transform>(true), "Move Bone Root of " + name);

		//TranslateRootWithoutMovingChildren(t, newRootPos);
		TranslateRootWithoutMovingChildren(t, worldRootDelta);
		
//		RecalculateAnchorPoint();
	}
	
//	public void RecalculateAnchorPoint()
//	{
//		if(parentGrid)
//		{
//			Vector3 worldBoneBase = WorldValueAt(boneBase.x, boneBase.y);
//			anchorPoint = parentGrid.InverseWorldValueAt(worldBoneBase);
//		}
//	}
	
	static Vector3 WorldToLocalDelta(Vector3 worldDelta, Transform t)
	{
		Transform p = t.parent;
		if(p)
			return p.InverseTransformPoint(worldDelta) - p.InverseTransformPoint(Vector3.zero);
		return worldDelta;
	}

	static void TranslateRootWithoutMovingChildren(Transform t, Vector3 worldDelta)
	{
		t.localPosition += WorldToLocalDelta(worldDelta, t);
		foreach(Transform child in t)
			child.localPosition -= WorldToLocalDelta(worldDelta, child);
	}

//	static void TranslateRootWithoutMovingChildren(Transform t, Vector3 newPos)
//	{
//		Vector3 diff = newPos - t.position;
//		t.position = newPos;
//		foreach(Transform child in t)
//			child.position -= diff;
//
////		Transform[] children = new Transform[t.childCount];
////		int i = 0;
////		foreach(Transform child in t)
////			children[i++] = child;
////
////		foreach(Transform child in children)
////			child.parent = t.parent;
////		
////		t.position = newPos;
////
////		foreach(Transform child in children)
////			child.parent = t;
//	}

#endif


#if UNITY_EDITOR

	void OnDrawGizmos ()
	{
		if(!root) {
			AwakePart1();
		}

		Gizmos.matrix = root.localToWorldMatrix;

		foreach(BezierPatchQuad quad in quads)
		{
			if(quad == null || quad.disabled || !enabled)
				continue;
			//quad.x0.p1 = quad.x0.p0 - MathUtil.Rescale(quad.x0.p0 - quad.x0.p3, (quad.x0.p0 - quad.x0.p3).magnitude * (1.0f/3.0f));
			Vector3 bottomLeft = quad.ValueAt(0.0f, 0.0f);
			Vector3 topRight = quad.ValueAt(1.0f, 1.0f);
			Vector3 size = topRight - bottomLeft;
			Vector3 pos = (topRight + bottomLeft) * 0.5f;

			// Draw the gizmo
			//Gizmos.color = (UnityEditor.Selection.activeGameObject == gameObject) ? Color.green : new Color(1f, 1f, 1f, 0.2f);
			//Gizmos.DrawWireCube(pos, size);

			// Make the widget selectable
			size.z = 0.01f;
			Gizmos.color = Color.clear;
			Gizmos.DrawCube(pos, size);
		}
	}
#endif

#if UNITY_EDITOR
	[UnityEditor.InitializeOnLoad]
	class ForceIconVisibility { static ForceIconVisibility() {
		GizmoHelper.SetScriptIconVisibility(System.Reflection.MethodBase.GetCurrentMethod().DeclaringType.DeclaringType.Name, false);
	} }
#endif

}

[Serializable]
public class BezierPatchEdge
{
	public Vector2 p0;
	public Vector2 p1;
	public Vector2 p2;
	public Vector2 p3;

	//----------------------------------------------------------------------------
	// GETTERS
	//----------------------------------------------------------------------------

	public Vector2 ValueAt(float u)
	{
		float invU = 1f-u;
		float invUp2 = invU*invU;
		float invUp3 = invUp2*invU;
		float up2 = u*u;
		float up3 = up2*u;
		return (invUp3 * p0 +
			(3f * invUp2 * u) * p1 +
			(3f * invU * up2) * p2 +
			(up3) * p3
		);
	}

	public Vector2 ValueAtInterpolated(float u, BezierPatchEdge other, float v)
	{
		float invU = 1f-u;
		float invUp2 = invU*invU;
		float invUp3 = invUp2*invU;
		float up2 = u*u;
		float up3 = up2*u;
		return (invUp3 * MathUtil.Lerp(p0, other.p0, v) +
			(3f * invUp2 * u) * MathUtil.Lerp(p1, other.p1, v) +
			(3f * invU * up2) * MathUtil.Lerp(p2, other.p2, v) +
			(up3) * MathUtil.Lerp(p3, other.p3, v)
		);
	}

	public Vector2 DerivAt(float u)
	{
		float up2 = u*u;
		return 3f * (
			((u-1f) * (1f-u)) * p0 +
			(1f - 4f * u + 3f * up2) * p1 +
			(2f * u - 3f * up2) * p2 +
			(up2) * p3
		);
	}
	
	public Vector2 DerivAtInterpolated(float u, BezierPatchEdge other, float v)
	{
		float up2 = u*u;
		return 3f * (
			((u-1f) * (1f-u)) * MathUtil.Lerp(p0, other.p0, v) +
			(1f - 4f * u + 3f * up2) * MathUtil.Lerp(p1, other.p1, v) +
			(2f * u - 3f * up2) * MathUtil.Lerp(p2, other.p2, v) +
			(up2) * MathUtil.Lerp(p3, other.p3, v)
		);
	}
	
	bool Equals(BezierPatchEdge other)
	{
		return p0 == other.p0 && p1 == other.p1 && p2 == other.p2 && p3 == other.p3;
	}

	public bool MergeTogether(BezierPatchEdge other)
	{
		if(Equals(other))
			return false;
		other.p0 = p0 = (p0 + other.p0) * 0.5f;
		other.p1 = p1 = (p1 + other.p1) * 0.5f;
		other.p2 = p2 = (p2 + other.p2) * 0.5f;
		other.p3 = p3 = (p3 + other.p3) * 0.5f;
		return true;
	}
	
	public void SmoothCrease(bool atEnd, BezierPatchEdge other, bool otherAtEnd)
	{
		if(!atEnd)
		{
			if(!otherAtEnd)
			{
				Vector2 aDiff = p1 - p0;
				Vector2 bDiff = other.p0 - other.p1;
				Vector2 cDiff = (aDiff + bDiff) * 0.5f;
				      p1 =       p0 + cDiff;
				other.p1 = other.p0 - cDiff;
			}
			else
			{
				Vector2 aDiff = p1 - p0;
				Vector2 bDiff = other.p3 - other.p2;
				Vector2 cDiff = (aDiff + bDiff) * 0.5f;
				      p1 =       p0 + cDiff;
				other.p2 = other.p3 - cDiff;
			}
		}
		else
		{
			if(!otherAtEnd)
			{
				Vector2 aDiff = p2 - p3;
				Vector2 bDiff = other.p0 - other.p1;
				Vector2 cDiff = (aDiff + bDiff) * 0.5f;
				      p2 =       p3 + cDiff;
				other.p1 = other.p0 - cDiff;
			}
			else
			{
				Vector2 aDiff = p2 - p3;
				Vector2 bDiff = other.p3 - other.p2;
				Vector2 cDiff = (aDiff + bDiff) * 0.5f;
				      p2 =       p3 + cDiff;
				other.p2 = other.p3 - cDiff;
			}
		}
	}

#if UNITY_EDITOR
	public BezierPatchEdge Clone()
	{
		BezierPatchEdge rv = new BezierPatchEdge();
		WriteTo(rv);
		return rv;
	}
	public void WriteTo(BezierPatchEdge edge)
	{
		edge.p0 = p0;
		edge.p1 = p1;
		edge.p2 = p2;
		edge.p3 = p3;
	}
#endif
}




























































































//		u,v -> xv.ValueAt(u),yu.ValueAt(v)
//		
//		0,0 -> x0.ValueAt(0),y0.ValueAt(0)
//		1,0 -> x0.ValueAt(1),y1.ValueAt(0)
//		0,1 -> x1.ValueAt(0),y0.ValueAt(1)
//		1,1 -> x1.ValueAt(1),y1.ValueAt(1)
//		
//		0.0f, 0.0f  ->  x0.ValueAt(0.0f)  OR  y0.ValueAt(0.0f)
//		0.1f, 0.0f  ->  x0.ValueAt(0.1f)
//		0.5f, 0.0f  ->  x0.ValueAt(0.5f)
//		0.9f, 0.0f  ->  x0.ValueAt(0.9f)
//		1.0f, 0.0f  ->  x0.ValueAt(1.0f)  OR  y1.ValueAt(0.0f)
//
//		0.0f, 0.0f  ->  x0.ValueAt(0.0f)  OR  y0.ValueAt(0.0f)
//		0.0f, 0.1f  ->                        y0.ValueAt(0.1f)
//		0.0f, 0.5f  ->                        y0.ValueAt(0.5f)
//		0.0f, 0.9f  ->                        y0.ValueAt(0.9f)
//		0.0f, 1.0f  ->  x1.ValueAt(0.0f)  OR  y0.ValueAt(0.0f)
		//0.0f, 0.0f  ->  xv.ValueAt(0.0f)*(v151)  yu.ValueAt(0.0f)*(u151)
//		0.1f, 0.1f  ->  x0.ValueAt(0.1f)
//
//
//.868
//
//0 -> 1
//.5 -> .5
//1 -> 1
//
//1 - u
//
//F(u,v) + G(v,u) = 1.0
//F(0,v) + G(v,u) = 1.0
//
//
//v=0 => v151 = 1
//v=1 => v151 = 1
//u=0 => u151 = 1
//u=1 => u151 = 1
//
//u=0.5, v=0.5 => v151 = 0.5, u151 = 0.5
//u=0.1, v=0.1 => v151 = 0.5, u151 = 0.5
//u=0.1, v=0.5 => v151 = 0.1, u151 = 0.9
//u=0.2, v=0.5 => v151 = 0.2, u151 = 0.8
//u=0.2, v=0.4 => v151 = 0.3, u151 = 0.7
//u=1.0, v=ANY => v151 = 0.0, u151 = 1.0
//u=0.0, v=ANY => v151 = 0.0, u151 = 1.0
//u=ANY, v=1.0 => v151 = 1.0, u151 = 0.0
//u=ANY, v=0.0 => v151 = 1.0, u151 = 0.0
//
//F(u,v) = ?,?
//F(0,v) = 0,1
//F(1,v) = 0,1
//F(u,0) = 1,0
//F(u,1) = 1,0
//F(.5,.5) = .5,.5     0,  1,   0
//F(.1,.1) = .5,.5    .8, .2,   0
//F(.1,.9) = .5,.5    .8, .2,   0
//F(.1,.5) = .1,.9    .4, .6,  .4
//F(.5,.1) = .9,.1    .4, .6, -.4
//F(.5,.2) = .8,.2    .2, .7, -.3
//F(.4,.1) = .8,.2    .2, .5, -.3
//F(.6,.1) = .8,.2    .2, .5, -.3
//
//F(u,v) = 0.5 - (distFromPointFive(u) - distFromPointFive(v)), 0.5 + (distFromPointFive(u) - distFromPointFive(v))
//
//
//
//		0.0f, 0.0f  ->  xv.ValueAt(0.0f)*(v151)  yu.ValueAt(0.0f)*(u151)
//		0.1f, 0.0f  ->  x0.ValueAt(0.1f)
//		0.5f, 0.0f  ->  x0.ValueAt(0.5f)
//		0.9f, 0.0f  ->  x0.ValueAt(0.9f)
//		1.0f, 0.0f  ->  x0.ValueAt(1.0f)  OR  y1.ValueAt(0.0f)












































































