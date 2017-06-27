using System;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
using System.Collections.Generic;
#endif
using Stm.V1_0;

[Serializable]
public class QuadNodeQuad
{
/*
 p01       p11
    O----O    v=1
    |....|   
    |....|
    O----O    v=0
 p00       p10
  u=0    u=1
*/
	public Vector2 p00, p01, p10, p11;
	public Vector2 uv00, uv01 = new Vector2(0,1), uv10 = new Vector2(1,0), uv11 = new Vector2(1,1);
	public bool disabled;
	public int subMeshIndex;
	public Transform bone00, bone01, bone10, bone11;
//	public float sharpness00=1.0f, sharpness01=1.0f, sharpness10=1.0f, sharpness11=1.0f;
	public float sharpness = 1.0f;
	//[HideInInspector] public int initialized = -1;
	[System.NonSerialized] public int quadCount; // for use by renderer
	

	public Vector2 ValueAt(float u, float v)
	{
		float invU = 1.0f - u;
		float invV = 1.0f - v;

		//return invV*(invU*p00 + u*p10) + v*(invU*p01 + u*p11);

		return new Vector2(
			invV*(invU*p00.x + u*p10.x) + v*(invU*p01.x + u*p11.x),
			invV*(invU*p00.y + u*p10.y) + v*(invU*p01.y + u*p11.y)
		);
	}

	public Vector2 InverseValueAt(Vector2 pos, out float errorAmount)
	{
//		float u = 0.5f, v = 0.5f;
//		
//		float bestDistSq = (ValueAt(u,v) - pos).sqrMagnitude;
//
//		float delta = 0.25f;
//		int iter;
//		for(iter = 0 ; iter < 80 ; iter++)
//		{
//			bool improved = false;
//			int dui = -1;
//			for(float du = -delta ; dui <= 1 ; dui++, du += delta)
//			{
//				int dvi = -1;
//				for(float dv = -delta ; dvi <= 1 ; dvi++, dv += delta)
//				{
//					if(dvi == 0 && dui == 0)
//						continue;
//					float uNext = /*MathUtil.Clamp01*/(u + du);
//					float vNext = /*MathUtil.Clamp01*/(v + dv);
//					float distSq = (ValueAt(uNext, vNext) - pos).sqrMagnitude;
//					if(distSq < bestDistSq)
//					{
//						improved = true;
//						bestDistSq = distSq;
//						u = uNext;
//						v = vNext;
//					}
//				}
//			}
//			if(!improved)
//			{
//				delta *= 1.0f/3.0f;
//				if(delta < 1.0f/(65536.0f*2.0f))
//					break;
//			}
//		}
//		//Debug.Log("iter = " + iter + ", distSq = " + bestDistSq);
////		pos ==
////		((((1f-u)*(1f-u))*(1f-u)) * MathUtil.Lerp(p00, p01, v) +
////			(3f * ((1f-u)*(1f-u)) * u) * MathUtil.Lerp(x0.p1, x1.p1, v) +
////			(3f * (1f-u) * (u*u)) * MathUtil.Lerp(x0.p2, x1.p2, v) +
////			(((u*u)*u)) * MathUtil.Lerp(p10, p11, v)) * (0.5f - ((u - 0.5f) * (u - 0.5f) - (v - 0.5f) * (v - 0.5f)))
////		+ ((((1f-v)*(1f-v))*(1f-v)) * MathUtil.Lerp(p00, p10, u) +
////			(3f * ((1f-v)*(1f-v)) * v) * MathUtil.Lerp(y0.p1, y1.p1, u) +
////			(3f * (1f-v) * (v*v)) * MathUtil.Lerp(y0.p2, y1.p2, u) +
////			(((v*v)*v)) * MathUtil.Lerp(p01, p11, u)) * (0.5f + ((u - 0.5f) * (u - 0.5f) - (v - 0.5f) * (v - 0.5f)))
////		;
//
//		errorAmount = bestDistSq;
//		return new Vector2(u, v);

		float a = ((p00.x - p10.x)*(p11.y - p01.y + p00.y - p10.y) - (p00.y - p10.y)*(p11.x - p01.x + p00.x - p10.x));
		float b = (((pos.x - p00.x)*(p11.y - p01.y + p00.y - p10.y) + (p00.x - p10.x) * (p01.y - p00.y)) - ((pos.y - p00.y)*(p11.x - p01.x + p00.x - p10.x) + (p00.y - p10.y) * (p01.x - p00.x)));
		float c = (pos.x - p00.x)*(p01.y - p00.y)-(pos.y - p00.y)*(p01.x - p00.x);
		float sqrt = Mathf.Sqrt(MathUtil.Max(0.0f, b*b - 4*a*c));
		float u = (-b - sqrt) / (2.0f * a);
		if(u < 0.0f || u > 1.0f)
		{
			float u2 = (-b + sqrt) / (2.0f * a);
			if((u2-0.5f)*(u2-0.5f) < (u-0.5f)*(u-0.5f))
				u = u2;
		}
		float v = ((pos.y - (p00.y + u * (p10.y - p00.y))) / (p01.y - p00.y + u * (p11.y - p01.y + p00.y - p10.y)));

//		Debug.Log("pos.x=" + pos.x + ", pos.y=" + pos.y + ", a=" + a + ", b=" + b + ", c=" + c + ", sqrt = " + sqrt + ", u=" + u + ", v=" + v);

		errorAmount = (u-0.5f)*(u-0.5f)+(v-0.5f)*(v-0.5f);

		return new Vector2(u, v);
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
	
//	public float SharpnessAt(float u, float v)
//	{
////		return sharpness;
////		float sharpness00 = (bone00) ? (2.0f - bone00.localScale.z) : 1.0f;
////		float sharpness10 = (bone10) ? (2.0f - bone10.localScale.z) : 1.0f;
////		float sharpness01 = (bone01) ? (2.0f - bone01.localScale.z) : 1.0f;
////		float sharpness11 = (bone11) ? (2.0f - bone11.localScale.z) : 1.0f;
//		float uInv = 1.0f - u;
//		float vInv = 1.0f - v;
//		return (sharpness00 * uInv + sharpness10 * u) * vInv + (sharpness01 * uInv + sharpness11 * u) * v;
//	}
	
	public Vector3 GetBoneBindPos(Transform vertexBone, Transform gridRoot)
	{
		Vector3 vertBonePos = Vector3.zero;
		float vertBoneDiv = 0.0f;
		if(vertexBone != gridRoot) {
			if(vertexBone == bone00) {
				vertBonePos += gridRoot.TransformPoint(ValueAt(0,0));
				vertBoneDiv++;
			}
			if(vertexBone == bone10) {
				vertBonePos += gridRoot.TransformPoint(ValueAt(1,0));
				vertBoneDiv++;
			}
			if(vertexBone == bone01) {
				vertBonePos += gridRoot.TransformPoint(ValueAt(0,1));
				vertBoneDiv++;
			}
			if(vertexBone == bone11) {
				vertBonePos += gridRoot.TransformPoint(ValueAt(1,1));
				vertBoneDiv++;
			}
		}
		if(vertBoneDiv == 0.0f) {
			vertBonePos += gridRoot.position;
			vertBoneDiv++;
		}
		return vertBonePos / vertBoneDiv;
	}

#if UNITY_EDITOR
	public QuadNodeQuad Clone()
	{
		QuadNodeQuad rv = new QuadNodeQuad();
		WriteTo(rv);
		return rv;
	}
	public void WriteTo(QuadNodeQuad quad)
	{
		quad.p00 = p00;
		quad.p10 = p10;
		quad.p01 = p01;
		quad.p11 = p11;
		quad.uv00 = uv00;
		quad.uv10 = uv10;
		quad.uv01 = uv01;
		quad.uv11 = uv11;
		quad.bone00 = bone00;
		quad.bone10 = bone10;
		quad.bone01 = bone01;
		quad.bone11 = bone11;
//		quad.sharpness00 = sharpness00;
//		quad.sharpness10 = sharpness10;
//		quad.sharpness01 = sharpness01;
//		quad.sharpness11 = sharpness11;
		quad.disabled = disabled;
		quad.subMeshIndex = subMeshIndex;
		//quad.initialized = initialized;
		quad.editorroot = editorroot;
		quad.editorBoneAddUndoName = editorBoneAddUndoName;
	}

	public bool ShouldBeDisabledWhenShown(Anim2d anim)
	{
		return disabled;
	}

	[System.NonSerialized] public Transform editorroot;
	[System.NonSerialized] public string editorBoneAddUndoName;
	// editorroot must be set before using editorbonepos properties
	public Vector3 editorbonepos00 {
		get { return EditorGetBonePos(bone00); }
		set { EditorSetBonePos(ref bone00, value); }
	}
	public Vector3 editorbonepos10 {
		get { return EditorGetBonePos(bone10); }
		set { EditorSetBonePos(ref bone10, value); }
	}
	public Vector3 editorbonepos01 {
		get { return EditorGetBonePos(bone01); }
		set { EditorSetBonePos(ref bone01, value); }
	}
	public Vector3 editorbonepos11 {
		get { return EditorGetBonePos(bone11); }
		set { EditorSetBonePos(ref bone11, value); }
	}
	Vector3 EditorGetBonePos(Transform bone) {
		return (bone ? bone : editorroot).position;
	}
	void EditorSetBonePos(ref Transform bone, Vector3 newPos) {
		Vector3 oldPos = EditorGetBonePos(bone);
		float distSq = (oldPos - newPos).sqrMagnitude;
		const float tolerance = 0.001f;
		if(distSq < tolerance * tolerance) {
			return;
		}
		foreach(Transform tf in editorroot.GetComponentsInChildren<Transform>(true))
		{
			if(bone != tf)
			{
				oldPos = tf.position;
				distSq = (oldPos - newPos).sqrMagnitude;
				if(distSq < tolerance * tolerance) {
					bone = tf;
					return;
				}
			}
		}
		GameObject go = new GameObject("bone_mid");
		if(editorBoneAddUndoName != null && editorBoneAddUndoName.Length != 0) {
			Undo.RegisterCreatedObjectUndo(go, editorBoneAddUndoName);
		}
		Transform t = go.transform;
		t.parent = editorroot;
		t.position = newPos;
		t.localRotation = Quaternion.identity;
		t.localScale = Vector3.one;
		bone = t;
	}
	public Vector3 EditorBonePosAt(Vector2 uv)
	{
		float errorAmount;
//Debug.Log(uv + " .. " + InverseTexCoordsAt(uv, out errorAmount));
		uv = InverseTexCoordsAt(uv, out errorAmount);
		float u = uv.x;
		float v = uv.y;
		float uInv = 1.0f - u;
		float vInv = 1.0f - v;
		Vector2 boneDiff = (EditorGetBindDiff(bone00) * uInv + EditorGetBindDiff(bone10) * u) * vInv + (EditorGetBindDiff(bone01) * uInv + EditorGetBindDiff(bone11) * u) * v;
		return editorroot.TransformPoint(ValueAt(u,v) - boneDiff);
	}
	public Vector3 EditorGetBindDiff(Transform vertexBone)
	{
		return EditorGetBindDiff(vertexBone, editorroot);
	}
	public Vector3 EditorGetBindDiff(Transform vertexBone, Transform gridRoot)
	{
		if(vertexBone == null) {
			return Vector3.zero;
		}
		return vertexBone.InverseTransformPoint(GetBoneBindPos(vertexBone, gridRoot));
	}
#endif

}

//[Serializable]
public class QuadNode : /*Reloadable*/MonoBehaviour
{
	//public Vector3 pivot = new Vector3(0.5f, 0.5f, 0.0f);
	public int stride = 1; // number of quads in X before next row
	public QuadNodeQuad[] quads; // individual elements may be null
	public float subdivX = 1.0f;
	public float subdivY = 1.0f;
	
	// skeleton/bone, in grid UV coordinates
	public Vector2 boneBase = new Vector2(0.5f, 0.5f);
	public Vector2 boneTip = new Vector2(1.0f, 0.5f);
	//public Vector2 anchorPoint = new Vector2(0.0f, 0.5f); // uv coordinates on parent grid which overlap (in world space) boneBase on this grid

//	[System.NonSerialized] public bool dirty = true; // for renderer
//	[System.NonSerialized] public Matrix4x4 tempMat; // for renderer
	[System.NonSerialized] public float tempZ; // for renderer

	[System.NonSerialized] public Transform root;
	//[System.NonSerialized] public QuadNode parentGrid;

	[HideInInspector] public Transform[] vertexBones;
	
	[System.NonSerialized] private QuadRenderer quadRenderer;
	
	
	public bool dirty {
		get {
			QuadRenderer qr = QuadRenderer;
			return qr ? QuadRenderer.dirty : false;
		}
		set {
			//Debug.Log(name + ": dirty = " + value + "\n");
			QuadRenderer qr = QuadRenderer;
			if(qr) { QuadRenderer.dirty = value; }
		}
	}
	
	public QuadRenderer QuadRenderer {
		get {
			if(!quadRenderer) {
#if UNITY_EDITOR
				if(!root && !Application.isPlaying) {
					AwakePart1();
				}
#endif
				quadRenderer = Stm.V1_1.SceneHelper.SearchUpwardsFor<QuadRenderer>(root);
			}
			return quadRenderer;
		}
	}


#if UNITY_EDITOR
	public bool IsDebugHidden(/*bool defaultValue=false*/) { return IsDebugHidden(false); }
	public bool IsDebugHidden(bool defaultValue/*=false*/)
	{
		return defaultValue;
	}
#endif

	public void AwakePart1()
	{
		root = transform;
		//parentGrid = Stm.V1_1.SceneHelper.SearchUpwardsFor<QuadNode>(root.parent);
#if UNITY_EDITOR
		if(!Application.isPlaying) {
			CheckInitQuads();
		}
#endif
	}

	void Awake()
	{
		AwakePart1();
//		if(UpdateMgr.Inst) {
//			UpdateMgr.Inst.StartSequence(ref updateCoro, gameObject, DoUpdate(), SequenceType.Normal, false);
//		} else {
//			StartCoroutine(DoUpdate());
//		}
	}
	
	void Start() {
		if(quadRenderer == null) {
			QuadRenderer qr = QuadRenderer;
			if(qr) {
				qr.dirty = true; 
			}
		}
	}
	
#if UNITY_EDITOR //&& DEVELOPMENT_BUILD
	
	void OnValidate()
	{
		if(subdivX < 1.0f) {
			subdivX = 1.0f;
		}
		if(subdivX > 9.0f) {
			subdivX = 9.0f;
		}
		if(subdivY < 1.0f) {
			subdivY = 1.0f;
		}
		if(subdivY > 9.0f) {
			subdivY = 9.0f;
		}
		CheckInitQuads();
		root = transform;
		foreach(QuadNodeQuad quad in quads)
		{
			if(quad != null)
			{
				if(quad.bone00 == root) {
					quad.bone00 = null;
				}
				if(quad.bone10 == root) {
					quad.bone10 = null;
				}
				if(quad.bone01 == root) {
					quad.bone01 = null;
				}
				if(quad.bone11 == root) {
					quad.bone11 = null;
				}
			}
		}
	}
	
	public void CheckInitQuads()
	{
		if(quads == null || quads.Length == 0) {
			InitQuads();
		}
	}
	
	void InitQuads()
	{
		if(quads == null || quads.Length == 0) {
			quads = new QuadNodeQuad[1] { new QuadNodeQuad(), };
		}
		float x = 0, y = 0;
		foreach(QuadNodeQuad quad in quads)
		{
			if(quad != null)
			{
				//quad.initialized = index;
				//Debug.Log("x = " + x + ", y = " + y);
				quad.p00 = new Vector2(x - 0.5f, y - 0.5f);
				quad.p10 = new Vector2(x + 0.5f, y - 0.5f);

				quad.p01 = new Vector2(x - 0.5f, y + 0.5f);
				quad.p11 = new Vector2(x + 0.5f, y + 0.5f);

				quad.p00 = new Vector2(x - 0.5f, y - 0.5f);
				quad.p01 = new Vector2(x - 0.5f, y + 0.5f);

				quad.p10 = new Vector2(x + 0.5f, y - 0.5f);
				quad.p11 = new Vector2(x + 0.5f, y + 0.5f);

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

	public QuadNodeQuad GetQuad(int x, int y)
	{
		if((x) >= 0 && (x) < stride && (y) >= 0 && ((y) * stride + (x) < quads.Length))
		{
			QuadNodeQuad quad = quads[y * stride + x];
			if(!quad.disabled)
				return quad;
		}
		return null;
	}

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
		QuadNodeQuad quad = GetQuad(x,y);
		if(quad != null)
		{
			Vector2 rv = quad.ValueAt(u, v);
//			if(parentGrid)
//				rv += GetPivotDiff();
			return rv /*- pivot*/;
		}
		return Vector2.zero;
	}
	
#if UNITY_EDITOR
	public Vector2 LocalValueAtPermissive(float u, float v)
	{
		{
			int x = (int)(u - 0.000001f);
			int y = (int)(v - 0.000001f);
			QuadNodeQuad quad = GetQuad(x,y);
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
					QuadNodeQuad quad = GetQuad(x,y);
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
				QuadNodeQuad quad = GetQuad(bestX,bestY);
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

	public Vector2 LocalValueAt(QuadNodeQuad quad, float u, float v)
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
	
	public Vector3 WorldValueAt(QuadNodeQuad quad, float u, float v)
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
		QuadNodeQuad quad = GetQuad(x,y);
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
			QuadNodeQuad quad = GetQuad(x,y);
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
					QuadNodeQuad quad = GetQuad(x,y);
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
				QuadNodeQuad quad = GetQuad(bestX,bestY);
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
				QuadNodeQuad quad = GetQuad(x,y);
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
					QuadNodeQuad quad = GetQuad(x,y);
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
					QuadNodeQuad quad = GetQuad(x,y);
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
//					QuadNodeQuad quad = GetQuad(x,y);
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
		du = 1.0f / subdivX;
		dv = 1.0f / subdivY;
	}

#if UNITY_EDITOR

	public void Weld()
	{
//		Vector2 oldBoneBase = LocalValueAt(boneBase.x, boneBase.y);
//		for(int iter = 0 ; iter < 1000 ; iter++)
//		{
//			foreach(QuadNodeQuad quad in quads)
//			{
//				if(!(quad == null || quad.disabled))
//				{
//					if(quad.p00 != quad.p00)
//						quad.p00 = quad.p00 = (quad.p00 + quad.p00) * 0.5f;
//					if(quad.p10 != quad.p10)
//						quad.p10 = quad.p10 = (quad.p10 + quad.p10) * 0.5f;
//					if(quad.p01 != quad.p01)
//						quad.p01 = quad.p01 = (quad.p01 + quad.p01) * 0.5f;
//					if(quad.p11 != quad.p11)
//						quad.p11 = quad.p11 = (quad.p11 + quad.p11) * 0.5f;
//				}
//			}
//			bool anyChanged2 = false;
//			int x = 0, y = 0;
//			foreach(QuadNodeQuad quad in quads)
//			{
//				if(!(quad == null || quad.disabled))
//				{
//					Quadrant quadrant = GetNeighborInfo(x,y);
//					if((quadrant & Quadrant.Down) != 0)
//						if(quad.x0.MergeTogether(GetQuad(x,y-1).x1) || MergeUVsTogether(ref quad.uv00, ref GetQuad(x,y-1).uv01) || MergeUVsTogether(ref quad.uv10, ref GetQuad(x,y-1).uv11))
//							anyChanged2 = true;
//					if((quadrant & Quadrant.Up) != 0)
//						if(quad.x1.MergeTogether(GetQuad(x,y+1).x0) || MergeUVsTogether(ref quad.uv01, ref GetQuad(x,y+1).uv00) || MergeUVsTogether(ref quad.uv11, ref GetQuad(x,y+1).uv10))
//							anyChanged2 = true;
//					if((quadrant & Quadrant.Left) != 0)
//						if(quad.y0.MergeTogether(GetQuad(x-1,y).y1) || MergeUVsTogether(ref quad.uv00, ref GetQuad(x-1,y).uv10) || MergeUVsTogether(ref quad.uv01, ref GetQuad(x-1,y).uv11))
//							anyChanged2 = true;
//					if((quadrant & Quadrant.Right) != 0)
//						if(quad.y1.MergeTogether(GetQuad(x+1,y).y0) || MergeUVsTogether(ref quad.uv10, ref GetQuad(x+1,y).uv00) || MergeUVsTogether(ref quad.uv11, ref GetQuad(x+1,y).uv01))
//							anyChanged2 = true;
//				}
//				x++;
//				if(stride > 0 && x >= stride)
//				{
//					x -= stride;
//					y++;
//				}
//			}
//			if(!anyChanged2)
//				break;
//		}
//		AdjustControlPointsToKeepBoneBaseFixed(oldBoneBase);
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

	public void RectanglifyEdges()
	{
		Vector2 oldBoneBase = LocalValueAt(boneBase.x, boneBase.y);
		Weld();
		
		int x = 0, y = 0;
		foreach(QuadNodeQuad quad in quads)
		{
			if(!(quad == null || quad.disabled))
			{
				//Quadrant quadrant = GetNeighborInfo(x,y);
				float x0 = (quad.p00.x + quad.p01.x) * 0.5f;
				float x1 = (quad.p10.x + quad.p11.x) * 0.5f;
				float y0 = (quad.p00.y + quad.p10.y) * 0.5f;
				float y1 = (quad.p01.y + quad.p11.y) * 0.5f;
				quad.p00.x = x0;
				quad.p01.x = x0;
				quad.p10.x = x1;
				quad.p11.x = x1;
				quad.p00.y = y0;
				quad.p10.y = y0;
				quad.p01.y = y1;
				quad.p11.y = y1;
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
		
		//StraightenEdges();
	}
	
	public void RectanglifyUVs()
	{
		int x = 0, y = 0;
		foreach(QuadNodeQuad quad in quads)
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

	public void SnapAngles(/*bool wrapX = false*/) { SnapAngles( false); }
	public void SnapAngles(bool wrapX /*= false*/)
	{
		Vector2 oldBoneBase = LocalValueAt(boneBase.x, boneBase.y);
		
		for(int iter = 0 ; iter < 16 ; iter++)
		{
			Weld();
			int x = 0, y = 0;
			foreach(QuadNodeQuad quad in quads)
			{
				if(!(quad == null || quad.disabled))
				{
					//Quadrant quadrant = GetNeighborInfo(x,y);
					
					quad.p10 = quad.p00 + SnapAngle(quad.p10 - quad.p00);
					quad.p11 = quad.p01 + SnapAngle(quad.p11 - quad.p01);
					quad.p01 = quad.p00 + SnapAngle(quad.p01 - quad.p00);
					quad.p11 = quad.p10 + SnapAngle(quad.p11 - quad.p10);
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
				QuadNodeQuad quad0 = quads[0];
				QuadNodeQuad quad1 = quads[quads.Length-1];
				if(!(quad0 == null || quad0.disabled || quad1 == null || quad1.disabled))
				{
					if(quad0.p00 != quad1.p10)
						quad0.p00 = quad1.p10 = (quad0.p00 + quad1.p10) * 0.5f;
					if(quad0.p01 != quad1.p11)
						quad0.p01 = quad1.p11 = (quad0.p01 + quad1.p11) * 0.5f;
					if(quad0.p00 != quad1.p10)
						quad0.p00 = quad1.p10 = (quad0.p00 + quad1.p10) * 0.5f;
					if(quad0.p01 != quad1.p11)
						quad0.p01 = quad1.p11 = (quad0.p01 + quad1.p11) * 0.5f;
				}
			}
		}

		//Weld();
		AdjustControlPointsToKeepBoneBaseFixed(oldBoneBase);
	}
	
	public bool AdjustControlPointsToKeepBoneBaseFixed(Vector2 localValueAtOldBoneBase)
	{
		Vector2 newBoneBase = LocalValueAt(boneBase.x, boneBase.y);
		Vector2 boneCompensationDelta = localValueAtOldBoneBase - newBoneBase;
		if(boneCompensationDelta.sqrMagnitude <= 0.0f)
			return false;
		foreach(QuadNodeQuad quad in quads)
		{
			if(quad == null /*|| quad.disabled*/)
				continue;
			quad.p00 += boneCompensationDelta;
			quad.p10 += boneCompensationDelta;
			quad.p01 += boneCompensationDelta;
			quad.p11 += boneCompensationDelta;
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
		
		foreach(QuadNodeQuad quad in quads)
		{
			if(quad == null /*|| quad.disabled*/)
				continue;
			quad.p00 += localReverseRootDelta;
			quad.p10 += localReverseRootDelta;
			quad.p01 += localReverseRootDelta;
			quad.p11 += localReverseRootDelta;
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

		foreach(QuadNodeQuad quad in quads)
		{
			if(quad == null || quad.disabled || !enabled)
				continue;
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

	public void Enable(Dispatcher sender)
	{
		bool setDirty = false;
		foreach(QuadNodeQuad node in quads) {
			if(node.disabled) {
				node.disabled = false;
				setDirty = true;
			}
		}
		GameObject go = gameObject;
		if(!go.activeSelf) {
			go.SetActive(true);
			setDirty = true;
		}
		if(!enabled) {
			enabled = true;
			setDirty = true;
		}
		if(setDirty) {
			dirty = true;
		}
	}
	
	public void Disable(Dispatcher sender)
	{
		bool setDirty = false;
//		foreach(QuadNodeQuad node in quads) {
//			if(!node.disabled) {
//				node.disabled = true;
//				setDirty = true;
//			}
//		}
		if(enabled) {
			enabled = false;
			setDirty = true;
		}
		if(setDirty) {
			dirty = true;
		}
	}
	
	void OnEnable()
	{
		if(root) {
			dirty = true;
		}
	}
	
	void OnDisable()
	{
//Debug.Log(name + ": OnDisable, root = " + root + "\n");
		if(root) {
			dirty = true;
		}
	}

#if UNITY_EDITOR
	[UnityEditor.InitializeOnLoad]
	class ForceIconVisibility { static ForceIconVisibility() {
		GizmoHelper.SetScriptIconVisibility(System.Reflection.MethodBase.GetCurrentMethod().DeclaringType.DeclaringType.Name, false);
	} }
#endif

}
	
