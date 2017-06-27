#if UNITY_EDITOR
#define ENABLE_PREVIEW
#endif


// this hack shouldn't be required, but I'm enabling it for now
// since it requires less testing to be sure that a certain android crash bug is fixed.
// should disable it at some point because it adds an UpdateMgr dependency that shouldn't be there.
#define ANDROID_CRASH_HACK_FIX

// http://docs.unity3d.com/Documentation/ScriptReference/Mesh-bindposes.html?from=SkinnedMeshRenderer

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
using UnityEngine.Profiling;
#endif

using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
//#if UNITY_EDITOR
//using UnityEditor;
//#endif

#if ENABLE_PREVIEW
[ExecuteInEditMode]
#endif
public class QuadRenderer : ReloadableMonoBehaviour
{
	[System.NonSerialized] public Transform root;
	QuadNode[] grids;
	
	Mesh mMesh;

    Vector3[] mVertexBuffer;
    Vector2[] mCoordBuffer;
    //Vector2[] mCoord2Buffer;
    //Color32[] mColorBuffer;
    //int[] mTriangles;

    SkinnedMeshRenderer mRenderer;
    //Renderer mRenderer;

	const int kVertsPerSprite = 4;
	const int kTriangleIndicesPerSprite = 6;
	
	public Material material;
	public Material[] materials;

	//public bool shaderInScreenSpace;
	int numQuads;
	//int maxNumQuads;
	
	[System.Serializable]
    class SubMeshData
    {
		public int[] triangles;
		public int numQuads;
		public int newNumQuads;
		//public int maxNumQuads;
		public int writeIndex;
    }
    SubMeshData[] subMeshData;
	int numSubMeshes;
	
//	[DisableTraceReferences]
	public Transform sortingPivot; // pivot root for correct ordering of layered planes
	Vector3 prevLocalPivot;
	
//	public enum WeightingMetric
//	{
//		Distance,
//		ManhattanDistance,
//		DistanceSquared,
//	}
//	public WeightingMetric weightingMetric;
//	public float sharpness = 1.0f;
	
	//public enum QualityLimit
	//{
	//	Four_Bones,
	//	Three_Bones,
	//	Two_Bones,
	//	One_Bone,
	//}
	//public QualityLimit qualityLimit;
	//public bool zScaleCompensation;
	
	void Awake()
	{
		root = transform;
		GetGridsAndSort();

		InitializeMeshComponents();
	}

	//[HideFromEvents]
	public void GetGridsAndSort()
	{
		//grids = GetComponentsInChildren<QuadNode>(true);
		List<QuadNode> gridsList = new List<QuadNode>();
		foreach(QuadNode grid in GetComponentsInChildren<QuadNode>(true))
		{
			Transform t = grid.root;
			if(t == null)
			{
				grid.AwakePart1();
				t = grid.root;
			}
			QuadRenderer p = Stm.V1_1.SceneHelper.SearchUpwardsFor<QuadRenderer>(t);
			if(p == this)
				gridsList.Add(grid);
		}
		grids = gridsList.ToArray();
		gridsList.Clear();
		
		float indexOffsetF = 0.0f;
		foreach(QuadNode grid in grids)
		{
			grid.tempZ = GetLocalZOffsetFromQuadRenderer(grid.root) + indexOffsetF;
			indexOffsetF -= 0.00000001f; // hack to make it a "stable sort"
		}
		
		//Debug.Log("SORT");
		System.Array.Sort(grids, GridSorter);
		//UpdateMesh();
	}
	
	float GetLocalZOffsetFromQuadRenderer(Transform t)
	{
		if(t == root)
			return 0.0f;
		float rv = t.localPosition.z;
		Transform p = t.parent;
		if(p)
			rv += GetLocalZOffsetFromQuadRenderer(p);
		return rv;
	}

	int GridSorter(QuadNode a, QuadNode b)
	{
		return b.tempZ.CompareTo(a.tempZ);
	}

	void Start(){
		InitializeMesh();
/*
#if (UNITY_ANDROID || UNITY_IPHONE) && !UNITY_EDITOR
		ScreenRotator rotator = ScreenRotator.Inst;
		if( rotator != null ){
			rotator.onOrientationChanged += OnOrientationChanged;
		}
#endif
*/
	}
	

	void OnDestroy(){
		if( mMesh != null ){
			//MeshHelper.DelayDestroy(mMesh);
#if UNITY_EDITOR
			if(Application.isPlaying) {
#endif
				UnityEngine.Object.Destroy(mMesh);
#if UNITY_EDITOR
			} else {
				UnityEngine.Object.DestroyImmediate(mMesh);
			}
#endif
		}

		s_dirtyQuads.Remove(this);
	}
	
	//[HideFromEvents]
	public void InitRenderer()
	{
#if UNITY_EDITOR
		OnValidate();
#endif

		mRenderer = Stm.V1_1.SceneHelper.GetOrAddComponent<SkinnedMeshRenderer>(gameObject);
		mRenderer.updateWhenOffscreen = true; // update mRenderer.localBounds every frame

		if(materials.Length == 0)
		{
			mRenderer.sharedMaterial = material;
		}
		else
		{		
			mRenderer.sharedMaterials = materials;
		}
		
		//DebugUpdateMaterialRenderQueue();
	}
	
	public int NumMaterials
	{
		get
		{
			int len = materials.Length;
			return (len <= 1) ? 1 : len;
		}
	}
	
	void InitializeMeshComponents()
	{
		InitRenderer();

//		if(renderQueueBoost != 0)
//		{
//#if ENABLE_PREVIEW
//			if(!Application.isPlaying)
//			{
//				tempMaterial = new Material(mRenderer.sharedMaterial);
//				tempMaterial.renderQueue = material.renderQueue + renderQueueBoost;
//				mRenderer.sharedMaterial = tempMaterial;
//			}
//			else
//#endif
//			{
//				mRenderer.material.renderQueue = material.renderQueue + renderQueueBoost;
//			}
//		}
		mMesh = new Mesh();
		mMesh.hideFlags |= HideFlags.DontSave;
		mMesh.name = name + "Mesh";
	}

	

	void InitializeMesh()
	{
		numSubMeshes = 0;
		foreach(QuadNode grid in grids)
			foreach(QuadNodeQuad quad in grid.quads)
				if(quad != null)
					numSubMeshes = MathUtil.Max(numSubMeshes, quad.subMeshIndex + 1);
#if UNITY_EDITOR
		if(numSubMeshes > NumMaterials)
			Debug.LogError("Patch Renderer only has " + NumMaterials + " materials but has a Sub Mesh Index set to " + (numSubMeshes - 1) + ", which is too high.\n" + Stm.V1_1.SceneHelper.FullPathName(transform), this);
#endif
		subMeshData = new SubMeshData[numSubMeshes];
		for(int i = 0 ; i < numSubMeshes ; i++)
			subMeshData[i] = new SubMeshData();

		numQuads = 0;
		foreach(QuadNode grid in grids)
		{
			if(!grid || !grid.enabled || !grid.gameObject.activeInHierarchy) {
				continue;
			}

			float du, dv;
			grid.GetTesselationStep(out du, out dv);
			//grid.tempU = du;
			//grid.tempV = dv;

			foreach(QuadNodeQuad quad in grid.quads)
			{
				if(quad != null && !quad.disabled)
				{
					int quadCount = Mathf.CeilToInt(1.0f / du) * Mathf.CeilToInt(1.0f / dv);
					numQuads += quadCount;
					subMeshData[quad.subMeshIndex].numQuads += quadCount;
					quad.quadCount = quadCount;
				}
			}
		}
		//maxNumQuads = numQuads;

		int vertexCount = kVertsPerSprite * numQuads;
		mVertexBuffer = new Vector3[vertexCount];
		mCoordBuffer = new Vector2[vertexCount];
		//mCoord2Buffer = new Vector2[vertexCount];
		//Vector2[] mCoordBuffer = new Vector2[vertexCount];
		//mColorBuffer = new Color32[vertexCount];
		//mTriangles = new int[];//[kTriangleIndicesPerSprite * numQuads];
		foreach(SubMeshData data in subMeshData)
		{
			//data.maxNumQuads = data.numQuads;
			data.triangles = new int[kTriangleIndicesPerSprite * data.numQuads];
		}

		mMesh.subMeshCount = numSubMeshes;
		//Color32 c = new Color32(255, 255, 255, (byte)MathUtil.Clamp(alpha * 255.0f, 0.0f, 255.0f));
		
		int index = 0;
		foreach(QuadNode grid in grids)
		{
			//grid.dirty = true;

#if UNITY_EDITOR
			if(!grid.root && !Application.isPlaying)
			{
				grid.AwakePart1();
			}
#endif
			if(!grid || !grid.enabled || !grid.gameObject.activeInHierarchy) {
				continue;
			}
			
			float du, dv;
			grid.GetTesselationStep(out du, out dv);
			//du = grid.tempU;
			//dv = grid.tempV;

			foreach(QuadNodeQuad quad in grid.quads)
			{
				if(quad != null && !quad.disabled)
				{

					for(float u = 0.0f ; u < 1.0f ; )
					{
						float u2 = u + du;
						if(u2 > 1.0f)
							u2 = 1.0f;
						for(float v = 0.0f ; v < 1.0f ; )
						{
							float v2 = v + dv;
							if(v2 > 1.0f)
								v2 = 1.0f;
							
//		for(int subMeshIndex = 0 ; subMeshIndex < numSubMeshes ; subMeshIndex++)
//		{
//			SubMeshData data = subMeshData[subMeshIndex];
//								data.triangles[kTriangleIndicesPerSprite*index+0] = kVertsPerSprite*index+0;
//								data.triangles[kTriangleIndicesPerSprite*index+1] = kVertsPerSprite*index+2;
//								data.triangles[kTriangleIndicesPerSprite*index+2] = kVertsPerSprite*index+1;
//								data.triangles[kTriangleIndicesPerSprite*index+3] = kVertsPerSprite*index+2;
//								data.triangles[kTriangleIndicesPerSprite*index+4] = kVertsPerSprite*index+3;
//								data.triangles[kTriangleIndicesPerSprite*index+5] = kVertsPerSprite*index+1;
//		}
							index++;
							
							v = v2;
						}
						u = u2;
					}

				}
			}
		}

		foreach(SubMeshData data in subMeshData)
			data.writeIndex = 0;

		int index2 = 0;
		foreach(QuadNode grid in grids)
		{
			if(!grid || !grid.enabled || !grid.gameObject.activeInHierarchy) {
				continue;
			}
			foreach(QuadNodeQuad quad in grid.quads)
			{
				if(quad != null && !quad.disabled)
				{
					int quadCount = quad.quadCount;
					for(int i = 0 ; i < quadCount ; i++)
					{
						SubMeshData data = subMeshData[quad.subMeshIndex];
						int index1 = data.writeIndex;
						if(index1 < data.numQuads)
						{
							data.triangles[kTriangleIndicesPerSprite*index1+0] = kVertsPerSprite*index2+0;
							data.triangles[kTriangleIndicesPerSprite*index1+1] = kVertsPerSprite*index2+2;
							data.triangles[kTriangleIndicesPerSprite*index1+2] = kVertsPerSprite*index2+1;
							data.triangles[kTriangleIndicesPerSprite*index1+3] = kVertsPerSprite*index2+2;
							data.triangles[kTriangleIndicesPerSprite*index1+4] = kVertsPerSprite*index2+3;
							data.triangles[kTriangleIndicesPerSprite*index1+5] = kVertsPerSprite*index2+1;

							data.writeIndex++;
						}
						index2++;
					}
				}
			}
		}

		mRenderer.sharedMesh = mMesh;
		UpdateMesh(true);
		
		{
			Mesh mesh = mMesh;
			//if(i != mCurrentMesh)
			//	mesh.vertices = mVertexBuffer;
//			mesh.vertices = mVertexBuffer;
//			mesh.uv = mCoordBuffer;
//			mesh.uv2 = mCoord2Buffer;
			//mesh.colors32 = mColorBuffer;
//			mesh.triangles = mTriangles;

			for(int j = 0 ; j < numSubMeshes ; j++)
				mMesh.SetTriangles(subMeshData[j].triangles, j);
			//if(shaderInScreenSpace)
			//	mesh.bounds = new Bounds( Vector3.zero, new Vector3( float.MaxValue*0.125f, float.MaxValue*0.125f, float.MaxValue*0.125f ) );
			//else
				mesh.RecalculateBounds();
		}
	}

#if ENABLE_PREVIEW
	void Update()
	{
		if(!Application.isPlaying)
		{
			UpdateMesh();
		}
	}
#endif

#if UNITY_EDITOR && ENABLE_PREVIEW
	void EditorUpdates()
	{
		if(!root)
			root = transform;
		//grids = GetComponentsInChildren<QuadNode>(true);
		//System.Array.Sort(grids, GridSorter);
		GetGridsAndSort();
//			DebugUpdateMaterialRenderQueue();
		if(mMesh == null)
			InitializeMeshComponents();
		if(mRenderer == null)
			InitRenderer();
		if(mRenderer.sharedMesh != mMesh) {
			if(mRenderer.sharedMesh && !UnityEditor.EditorUtility.IsPersistent(mRenderer.sharedMesh)) {
				Stm.V1_1.SceneHelper.Destroy(mRenderer.sharedMesh);
			}
			mRenderer.sharedMesh = mMesh;
		}
		if(materials.Length == 0) {
			if(mRenderer.sharedMaterial != material) {
				mRenderer.sharedMaterial = material;
			}
		} else {
			Material[] rendererSharedMaterials = mRenderer.sharedMaterials;
			bool same = true;
			if(rendererSharedMaterials == null || rendererSharedMaterials.Length != materials.Length) {
				same = false;
			} else {
				for(int i = 0 ; i < materials.Length ; i++) {
					if(rendererSharedMaterials[i] != materials[i]) {
						same = false;
						break;
					}
				}
			}
			if(!same) {
				mRenderer.sharedMaterials = materials;
			}
		}
		if(subMeshData == null)
			InitializeMesh();
	}
#endif

	//[HideFromEvents]
	public void UpdateMesh(/*bool force = false*/) { UpdateMesh( false); }
	//[HideFromEvents]
	public void UpdateMesh(bool force /*= false*/)
	{
        if(!mRenderer /*|| (!mRenderer.enabled && !force)*/) { return; }

		// don't blow up before initializing
		if(subMeshData == null) {
			return;
		}

#if UNITY_EDITOR && ENABLE_PREVIEW
		if(!Application.isPlaying) {
			EditorUpdates();
		}
#endif

		if(!force) {
			GetGridsAndSort();
		}		

		if(grids == null) { return; } // TODO: WHY (happens sometimes when loading between levels)

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
        Profiler.BeginSample("QuadRenderer(\"" + name + "\").UpdateMesh(" + grids.Length + ")", this);
#endif
		//int alpha256 = (int)MathUtil.Clamp(alpha * 256.0f, 0.0f, 256.0f);
		//Color32 c = new Color32(255, 255, 255, 255);


		bool anyChanged = force;

		//if(meshType != MeshType.StaticWithDynamicPivot || force)
		{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
			Profiler.BeginSample("GetTesselationStep");
#endif

			foreach(SubMeshData data in subMeshData)
				data.newNumQuads = 0;
			
			Matrix4x4 rootMat = root.worldToLocalMatrix;

			int newNumQuads = 0;
			foreach(QuadNode grid in grids)
			{
				if(!grid || !grid.enabled || !grid.gameObject.activeInHierarchy) {
					continue;
				}

				float du, dv;

				//Matrix4x4 mat = rootMat * grid.root.localToWorldMatrix;
				//if(grid.dirty)
				{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
					Profiler.BeginSample("tesselate");
#endif
					//grid.tempMat = mat;

					grid.GetTesselationStep(out du, out dv);
					//grid.tempU = du;
					//grid.tempV = dv;
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
					Profiler.EndSample();
#endif
				}
//				else
//				{
//#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
//					Profiler.BeginSample("MatrixDist");
//#endif
//					Matrix4x4 prevMat = grid.tempMat;
//					float matDistSq = 0.0f;
//					for(int i = 0 ; i < 16 ; i++)
//					{
//						float diff = mat[i] - prevMat[i];
//						matDistSq += diff * diff;
//					}
//					if(matDistSq > 0.00001f)
//					{
//						grid.dirty = true;
//						grid.tempMat = mat;
//					}
//#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
//					Profiler.EndSample();
//#endif
//
//					grid.GetTesselationStep(out du, out dv);
//					//du = grid.tempU;
//					//dv = grid.tempV;
//				}

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
				Profiler.BeginSample("count");
#endif
				foreach(QuadNodeQuad quad in grid.quads)
				{
					if(quad != null && !quad.disabled)
					{
						int quadCount = Mathf.CeilToInt(1.0f / du) * Mathf.CeilToInt(1.0f / dv);
						newNumQuads += quadCount;

						if(quad.subMeshIndex >= subMeshData.Length) {
							InitializeMesh();
						}

						subMeshData[quad.subMeshIndex].newNumQuads += quadCount;
						quad.quadCount = quadCount;
					}
				}

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
				Profiler.EndSample();
#endif

#if UNITY_EDITOR
				if(newNumQuads < 0 || newNumQuads > 90000)
				{
					Debug.LogError("quad count error! " + newNumQuads + ", du,dv = " + du + "," + dv, this);
				}
#endif
			}
			
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
			Profiler.EndSample();
#endif

			
			bool anyIncreased = force;
			//bool anyNotIncreased = false;
			
			if(newNumQuads != numQuads || force)
			{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
				Profiler.BeginSample("Reserve");
#endif

				//if(!reserveVertsMax || newNumQuads > maxNumQuads)
				{
					int newVertexCount = kVertsPerSprite * newNumQuads;
					var oldVertexBuffer = mVertexBuffer;
					var oldCoordBuffer = mCoordBuffer;
					//var oldCoord2Buffer = mCoord2Buffer;
					//var oldColorBuffer = mColorBuffer;
					//var oldTriangles = mTriangles;
					mVertexBuffer = new Vector3[newVertexCount];
					mCoordBuffer = new Vector2[newVertexCount];
					//mCoord2Buffer = new Vector2[newVertexCount];
					//mColorBuffer = new Color32[newVertexCount];
					//mTriangles = new int[kTriangleIndicesPerSprite * newNumQuads];
					Array.Copy(oldVertexBuffer, mVertexBuffer, MathUtil.Min(oldVertexBuffer.Length, mVertexBuffer.Length));
					Array.Copy(oldCoordBuffer, mCoordBuffer, MathUtil.Min(oldCoordBuffer.Length, mCoordBuffer.Length));
					//Array.Copy(oldCoord2Buffer, mCoord2Buffer, MathUtil.Min(oldCoord2Buffer.Length, mCoord2Buffer.Length));
					//Array.Copy(oldColorBuffer, mColorBuffer, MathUtil.Min(oldColorBuffer.Length, mColorBuffer.Length));
					//Array.Copy(oldTriangles, mTriangles, MathUtil.Min(oldTriangles.Length, mTriangles.Length));

					//for(int i = reserveVertsMax ? maxNumQuads : numQuads ; i < newNumQuads ; i++)
					//{
					//	int index2 = i;
					//	mTriangles[kTriangleIndicesPerSprite*index2+0] = kVertsPerSprite*index2+0;
					//	mTriangles[kTriangleIndicesPerSprite*index2+1] = kVertsPerSprite*index2+2;
					//	mTriangles[kTriangleIndicesPerSprite*index2+2] = kVertsPerSprite*index2+1;
					//	mTriangles[kTriangleIndicesPerSprite*index2+3] = kVertsPerSprite*index2+2;
					//	mTriangles[kTriangleIndicesPerSprite*index2+4] = kVertsPerSprite*index2+3;
					//	mTriangles[kTriangleIndicesPerSprite*index2+5] = kVertsPerSprite*index2+1;
					//}

					if(newNumQuads > numQuads)
						anyIncreased = true;
					//else
					//	anyNotIncreased = true;
					//maxNumQuads = newNumQuads;
				}
//				if(reserveVertsMax && newNumQuads < numQuads)
//				{
//					for(int i = newNumQuads ; i < numQuads ; i++)
//					{
//						int index2 = i;
//						Vector3 a = mVertexBuffer[kVertsPerSprite*index2+0];
//						mVertexBuffer[kVertsPerSprite*index2+1] = a;
//						mVertexBuffer[kVertsPerSprite*index2+2] = a;
//						mVertexBuffer[kVertsPerSprite*index2+3] = a;
//					}
//				}
				
				if((numQuads > 0) != (newNumQuads > 0) || force) {
					mRenderer.enabled = (newNumQuads > 0); // runtime warning suppression
				}
				numQuads = newNumQuads;
				anyChanged = true;

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
				Profiler.EndSample();
#endif
			}
			else if(newNumQuads == 0 && mRenderer.enabled)
			{
				mRenderer.enabled = false; // runtime warning suppression
			}

			for(int subMeshIndex = 0 ; subMeshIndex < numSubMeshes ; subMeshIndex++)
			{
				SubMeshData data = subMeshData[subMeshIndex];

				if(data.newNumQuads != data.numQuads)
				{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
					Profiler.BeginSample("SubReserve");
#endif

					//if(!reserveVertsMax || data.newNumQuads > data.maxNumQuads)
					{
						//int newVertexCount = kVertsPerSprite * data.newNumQuads;
						var oldTriangles = data.triangles;
						data.triangles = new int[kTriangleIndicesPerSprite * data.newNumQuads];
						Array.Copy(oldTriangles, data.triangles, MathUtil.Min(oldTriangles.Length, data.triangles.Length));

						{
							int iMin = /*reserveVertsMax ? data.maxNumQuads :*/ data.numQuads;
							int index1 = 0;
							int index3 = 0;
							foreach(QuadNode grid in grids)
							{
								if(!grid || !grid.enabled || !grid.gameObject.activeInHierarchy) {
									continue;
								}
								foreach(QuadNodeQuad quad in grid.quads)
								{
									if(quad != null && !quad.disabled)
									{
										int quadCount = quad.quadCount;
										for(int i = 0 ; i < quadCount ; i++)
										{
											if(quad.subMeshIndex == subMeshIndex && index1 < data.newNumQuads)
											{
												if(index1 >= iMin)
												{
													data.triangles[kTriangleIndicesPerSprite*index1+0] = kVertsPerSprite*index3+0;
													data.triangles[kTriangleIndicesPerSprite*index1+1] = kVertsPerSprite*index3+2;
													data.triangles[kTriangleIndicesPerSprite*index1+2] = kVertsPerSprite*index3+1;
													data.triangles[kTriangleIndicesPerSprite*index1+3] = kVertsPerSprite*index3+2;
													data.triangles[kTriangleIndicesPerSprite*index1+4] = kVertsPerSprite*index3+3;
													data.triangles[kTriangleIndicesPerSprite*index1+5] = kVertsPerSprite*index3+1;
												}
												index1++;
											}
											index3++;
										}
									}
								}
							}
						}

	//					for(int i = reserveVertsMax ? data.maxNumQuads : data.numQuads ; i < data.newNumQuads ; i++)
	//					{
	//						int index2 = i;
	//						data.triangles[kTriangleIndicesPerSprite*index2+0] = kVertsPerSprite*index2+0;
	//						data.triangles[kTriangleIndicesPerSprite*index2+1] = kVertsPerSprite*index2+2;
	//						data.triangles[kTriangleIndicesPerSprite*index2+2] = kVertsPerSprite*index2+1;
	//						data.triangles[kTriangleIndicesPerSprite*index2+3] = kVertsPerSprite*index2+2;
	//						data.triangles[kTriangleIndicesPerSprite*index2+4] = kVertsPerSprite*index2+3;
	//						data.triangles[kTriangleIndicesPerSprite*index2+5] = kVertsPerSprite*index2+1;
	//					}

						if(data.newNumQuads > data.numQuads)
							anyIncreased = true;
						//else
						//	anyNotIncreased = true;
						//data.maxNumQuads = data.newNumQuads;
					}
					data.numQuads = data.newNumQuads;
					anyChanged = true;

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
					Profiler.EndSample();
#endif
				}


	//			if(data.numQuads != data.newNumQuads)
	//			{
	//				anySubmeshChangedQuadCount = true;
	//				break;
	//			}
			}
			
			if(anyChanged)
			{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
				Profiler.BeginSample("ReserveFinalize");
#endif
				// TODO: optimize?
				// TODO: maybe fix the case where some submeshes increase and others decrease simultaneously? should SetTriangles(null,j) before assigning either vertices or triangles, in that case
				{
					if(anyIncreased)
						mMesh.vertices = mVertexBuffer;
					
					for(int j = 0 ; j < numSubMeshes ; j++)
						mMesh.SetTriangles(subMeshData[j].triangles, j);

					if(!anyIncreased)
						mMesh.vertices = mVertexBuffer;
				}

				//foreach(QuadNode grid in grids)
					//grid.dirty = true;

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
				Profiler.EndSample();
#endif
			}



	//		numQuads = 0;
	//		foreach(QuadNode grid in grids)
	//		{
	//			float du, dv;
	//			grid.GetTesselationStep(out du, out dv);
	//
	//			foreach(QuadNodeQuad quad in grid.quads)
	//				if(quad != null && !quad.disabled)
	//					numQuads += Mathf.CeilToInt(1.0f / du) * Mathf.CeilToInt(1.0f / dv);
	//		}

			//int i=0;
			//bool anyVisibleChanged = false;

	//		Vector4 vtx0, vtx1, vtx2;
	//		int length = mSprites.Length;
	//        for(int j=0; j<length; ++j) {
	//		    Sprite s = mSprites[j];
	//            if(s.dirty) {
	//				if (s.visible) {
	//					Atlas.SymbolImpl symbolImpl = mAtlas.mSymbolBuffer[s.symbol];
	//
	//#if !IMMEDIATE_FLASH
	//					c.r = (byte)(((int)s.modColor.r * ((int)s.animColor.r + 1)) >> 8);
	//					c.g = (byte)(((int)s.modColor.g * ((int)s.animColor.g + 1)) >> 8);
	//					c.b = (byte)(((int)s.modColor.b * ((int)s.animColor.b + 1)) >> 8);
	//					c.a = (byte)(((int)s.modColor.a * ((int)s.animColor.a + 1) * alpha256) >> 16);
	//
	//					vtx0 =  mRoot.InverseTransformPoint(s.mRoot.TransformPoint(symbolImpl.bl));
	//					vtx1 =  mRoot.InverseTransformPoint(s.mRoot.TransformPoint(symbolImpl.br));
	//					vtx2 =  mRoot.InverseTransformPoint(s.mRoot.TransformPoint(symbolImpl.tl));
	//
	//					mColorBuffer[i  ] = c;
	//					mColorBuffer[i+1] = c;
	//					mColorBuffer[i+2] = c;
	//					mColorBuffer[i+3] = c;
	////					mCoordBuffer[i  ] = new Vector2(symbolImpl.xMin, symbolImpl.yMin);
	////					mCoordBuffer[i+1] = new Vector2(symbolImpl.xMax, symbolImpl.yMin);
	////					mCoordBuffer[i+2] = new Vector2(symbolImpl.xMin, symbolImpl.yMax);
	////					mCoordBuffer[i+3] = new Vector2(symbolImpl.xMax, symbolImpl.yMax);
	//					mVertexBuffer[i  ] = vtx0;
	//					mVertexBuffer[i+1] = vtx1;
	//					mVertexBuffer[i+2] = vtx2;
	//					mVertexBuffer[i+3] = vtx2 + vtx1 - vtx0;
	//#endif
	//					anyVisibleChanged = true;
	//				} else {
	//					mVertexBuffer[i  ] = Vector3.zero;
	//					mVertexBuffer[i+1] = Vector3.zero;
	//					mVertexBuffer[i+2] = Vector3.zero;
	//					mVertexBuffer[i+3] = Vector3.zero;
	//				}
	//				anyChanged = true;
	//				s.dirty = false;
	//			}
	//            i += 4;
	//		}

	//		if(prevLayerBias != layerBias)
	//		{
	//			prevLayerBias = layerBias;
	////			//Vector3 newOffsetForOffset = new Vector3(0.0f, 0.0f, root.localScale.z) * layerBias; // hack?
	////			Vector3 newOffsetForOffset = root.TransformDirection(new Vector3(0.0f, 0.0f, root.localScale.z * layerBias)); // hack?
	////			root.localPosition += newOffsetForOffset - offsetForLayerBias;
	////			offsetForLayerBias = newOffsetForOffset;
	////			foreach(QuadNode grid in grids)
	////				grid.dirty = true;
	//			anyChanged = true;
	//		}

	//		if(prevSortPivotOffset != sortPivotOffset)
	//		{
	//			prevSortPivotOffset = sortPivotOffset;
	//			anyChanged = true;
	//		}


#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
			Profiler.BeginSample("Update");
#endif

			int index = 0;
			foreach(QuadNode grid in grids)
			{
				float du, dv;
				grid.GetTesselationStep(out du, out dv);
				//du = grid.tempU;
				//dv = grid.tempV;

				if(!grid || !grid.enabled || !grid.gameObject.activeInHierarchy) {
					continue;
				}
#if UNITY_EDITOR
	if(Application.isPlaying) // <-- temp hack
#endif
//				if(!grid.dirty)
//				{
//					foreach(QuadNodeQuad quad in grid.quads)
//						if(quad != null && !quad.disabled)
//							index += Mathf.CeilToInt(1.0f / du) * Mathf.CeilToInt(1.0f / dv);
//					continue;
//				}

#if UNITY_EDITOR
				if(!grid.root && !Application.isPlaying)
				{
					grid.AwakePart1();
				}
#endif
				
				//Matrix4x4 mat = grid.tempMat;
				Matrix4x4 mat;
//				if(grid.root.lossyScale.sqrMagnitude > 0.0000001f)
//				{
					mat = rootMat * grid.root.localToWorldMatrix; // transforms from node-local to renderer-local
//				}
//				else
//				{
//					mat = Matrix4x4.identity;
//					Transform t = grid.root;
//					while(t != root)
//					{
//						mat = Matrix4x4.TRS(t.localPosition, t.localRotation, t.localScale) * mat;
//						t = t.parent;
//					}
//				}
				
				//grid.dirty = false;
				foreach(QuadNodeQuad quad in grid.quads)
				{
					if(quad != null && !quad.disabled)
					{
						anyChanged = true;

#if UNITY_EDITOR
						int fromIndex = index;
#endif

						for(float u = 0.0f ; u < 1.0f ; )
						{
							float u2 = u + du;
							if(u2 > 1.0f)
								u2 = 1.0f;

							Vector2 aUV = quad.TexCoordsAt(u,0.0f);
							Vector2 bUV = quad.TexCoordsAt(u2,0.0f);

	//						Vector3 a = grid.LocalValueAt(quad,u,0.0f);
	//						Vector3 b = grid.LocalValueAt(quad,u2,0.0f);
							Vector3 a = quad.ValueAt(u,0.0f); //a.z -= layerBias;
							Vector3 b = quad.ValueAt(u2,0.0f);//b.z -= layerBias;

	//						a = root.InverseTransformPoint(grid.root.TransformPoint(a));
	//						b = root.InverseTransformPoint(grid.root.TransformPoint(b));
							a = mat.MultiplyPoint3x4(a); 
							b = mat.MultiplyPoint3x4(b); 

							for(float v = 0.0f ; v < 1.0f ; )
							{
								float v2 = v + dv;
								if(v2 > 1.0f)
									v2 = 1.0f;
								
								Vector2 cUV = quad.TexCoordsAt(u,v2);
								Vector2 dUV = quad.TexCoordsAt(u2,v2);
								
								Vector3 c = quad.ValueAt(u,v2);  //c.z -= layerBias;
								Vector3 d = quad.ValueAt(u2,v2); //d.z -= layerBias;
	//							Vector3 c = grid.LocalValueAt(quad,u,v2);
	//							Vector3 d = grid.LocalValueAt(quad,u2,v2);
								
								//c = root.InverseTransformPoint(grid.root.TransformPoint(c));
								//d = root.InverseTransformPoint(grid.root.TransformPoint(d));
								c = mat.MultiplyPoint3x4(c);
								d = mat.MultiplyPoint3x4(d);
								
								mVertexBuffer[kVertsPerSprite*index+0] = a;
								mVertexBuffer[kVertsPerSprite*index+1] = b;
								mVertexBuffer[kVertsPerSprite*index+2] = c;
								mVertexBuffer[kVertsPerSprite*index+3] = d;
								
								mCoordBuffer[kVertsPerSprite*index+0].x = aUV.x;
								mCoordBuffer[kVertsPerSprite*index+0].y = aUV.y;
								mCoordBuffer[kVertsPerSprite*index+1].x = bUV.x;
								mCoordBuffer[kVertsPerSprite*index+1].y = bUV.y;
								mCoordBuffer[kVertsPerSprite*index+2].x = cUV.x;
								mCoordBuffer[kVertsPerSprite*index+2].y = cUV.y;
								mCoordBuffer[kVertsPerSprite*index+3].x = dUV.x;
								mCoordBuffer[kVertsPerSprite*index+3].y = dUV.y;
								
								
	//							mColorBuffer[kVertsPerSprite*index+0] = new Color(UnityEngine.Random.value,UnityEngine.Random.value,UnityEngine.Random.value,quad.color.a);//quad.color;
	//							mColorBuffer[kVertsPerSprite*index+1] = mColorBuffer[kVertsPerSprite*index+0];//new Color(UnityEngine.Random.value,UnityEngine.Random.value,UnityEngine.Random.value,quad.color.a);//quad.color;
	//							mColorBuffer[kVertsPerSprite*index+2] = mColorBuffer[kVertsPerSprite*index+0];//new Color(UnityEngine.Random.value,UnityEngine.Random.value,UnityEngine.Random.value,quad.color.a);//quad.color;
	//							mColorBuffer[kVertsPerSprite*index+3] = mColorBuffer[kVertsPerSprite*index+0];//new Color(UnityEngine.Random.value,UnityEngine.Random.value,UnityEngine.Random.value,quad.color.a);//quad.color;
//								mColorBuffer[kVertsPerSprite*index+0] = quad.color;
//								mColorBuffer[kVertsPerSprite*index+1] = quad.color;
//								mColorBuffer[kVertsPerSprite*index+2] = quad.color;
//								mColorBuffer[kVertsPerSprite*index+3] = quad.color;
								
	/*
		2 3   c d
		0 1   a b
	*/
								
								index++;
								
								aUV = cUV;
								bUV = dUV;
								a = c;
								b = d;

								v = v2;
							}
							u = u2;
						}

#if UNITY_EDITOR
						if(grid.IsDebugHidden(false))
						{
							for(int i = fromIndex ; i < index ; i++)
							{
								mVertexBuffer[kVertsPerSprite*i+1] = mVertexBuffer[kVertsPerSprite*i+0];
								mVertexBuffer[kVertsPerSprite*i+2] = mVertexBuffer[kVertsPerSprite*i+0];
								mVertexBuffer[kVertsPerSprite*i+3] = mVertexBuffer[kVertsPerSprite*i+0];
							}
						}
#endif

					}
				}
			}

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
			Profiler.EndSample();
#endif

			if(anyChanged)
			{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
				Profiler.BeginSample("Apply");
#endif
	//			if(anyVisibleChanged)
	//				mMesh.uv = mCoordBuffer;

				mMesh.vertices = mVertexBuffer;
				mMesh.uv = mCoordBuffer;
				//mMesh.colors32 = mColorBuffer;
				
				//mMesh.uv2 = mCoord2Buffer;
//				if(anyVisibleChanged)
//					mMesh.colors32 = mColorBuffer;

				//if(!shaderInScreenSpace) {
					// TODO: skip this if it's too slow, and instead enlarge the bounds somewhat in InitializeMesh
					RecalculateBounds();
				//}
				//Debug.Log("count; " + mVertexBuffer.Length);
				//mFilter.sharedMesh = mMesh;
				
				int requiredQuality = 0;

				int boneIndex = 0;
				Dictionary<Transform, BoneIndexInfo> boneToIndexMap = new Dictionary<Transform, BoneIndexInfo>();
				// UpdateSkinningValues
				{
					int vertexCount = kVertsPerSprite * numQuads;
					BoneWeight[] weights = new BoneWeight[vertexCount];
					VertexBoneInfo vbi = new VertexBoneInfo() { owner = this, };

					int gridIndex = 0;
					int index3 = 0;
					foreach(QuadNode grid in grids)
					{
						if(!grid || !grid.enabled || !grid.gameObject.activeInHierarchy) {
							continue;
						}
						Transform gridRoot = grid.transform;
						float du, dv;
						grid.GetTesselationStep(out du, out dv);
						foreach(QuadNodeQuad quad in grid.quads)
						{
							if(quad != null && !quad.disabled)
							{
								Transform bone00 = quad.bone00 ? quad.bone00 : gridRoot;
								Transform bone10 = quad.bone10 ? quad.bone10 : gridRoot;
								Transform bone01 = quad.bone01 ? quad.bone01 : gridRoot;
								Transform bone11 = quad.bone11 ? quad.bone11 : gridRoot;
								for(float u = 0.0f ; u < 1.0f ; )
								{
									float u2 = u + du;
									if(u2 > 1.0f)
										u2 = 1.0f;
									for(float v = 0.0f ; v < 1.0f ; )
									{
										float v2 = v + dv;
										if(v2 > 1.0f)
											v2 = 1.0f;
										for(int j = 0 ; j < kVertsPerSprite ; j++)
										{
											if(index3 < vertexCount)
											{
												Vector2 uv = new Vector2(((j&1)==0) ? u : u2, (j<2) ? v : v2);
												//float sharpness = quad.SharpnessAt(uv.x, uv.y);
												float sharpness = quad.sharpness;
												vbi.Clear();
												vbi.Add(bone00, new Vector2(0,0) - uv, (1.0f - uv.x) * (1.0f - uv.y), sharpness, bone11);
												vbi.Add(bone10, new Vector2(1,0) - uv, (       uv.x) * (1.0f - uv.y), sharpness, bone01);
												vbi.Add(bone01, new Vector2(0,1) - uv, (1.0f - uv.x) * (       uv.y), sharpness, bone10);
												vbi.Add(bone11, new Vector2(1,1) - uv, (       uv.x) * (       uv.y), sharpness, bone00);
//												vbi.Add(bone00, (1.0f - uv.x) * (1.0f - uv.y));
//												vbi.Add(bone10, (       uv.x) * (1.0f - uv.y));
//												vbi.Add(bone01, (1.0f - uv.x) * (       uv.y));
//												vbi.Add(bone11, (       uv.x) * (       uv.y));
												VertexBoneInfo.Info[] vbiis = vbi.NormalizeAndGetInfo();
												if(vbiis.Length == 0) {
													vbiis = new VertexBoneInfo.Info[] {
														new VertexBoneInfo.Info() { bone = grid.transform, weight = 1.0f, },
													};
												}
												requiredQuality = MathUtil.Max(requiredQuality, vbiis.Length);

												int vbiisCount = vbiis.Length;
												for(int vbiisIndex = 0 ; vbiisIndex < vbiisCount ; vbiisIndex++)
												{
													VertexBoneInfo.Info vbii = vbiis[vbiisIndex];
													Transform vertexBone = vbii.bone;
													
													BoneIndexInfo vertBoneIndexInfo;
													if(!boneToIndexMap.TryGetValue(vertexBone, out vertBoneIndexInfo)){
														vertBoneIndexInfo = new BoneIndexInfo() { boneIndex = boneIndex, };
														boneIndex++;
														boneToIndexMap.Add(vertexBone, vertBoneIndexInfo);
														vertBoneIndexInfo.position = quad.GetBoneBindPos(vertexBone, gridRoot);
													}
													int vertBoneIndex = vertBoneIndexInfo.boneIndex;
													
													if(vbiisIndex == 0) {
														weights[index3].boneIndex0 = vertBoneIndex;
														weights[index3].weight0 = vbii.weight;
													} else if(vbiisIndex == 1) {
														weights[index3].boneIndex1 = vertBoneIndex;
														weights[index3].weight1 = vbii.weight;
													} else if(vbiisIndex == 2) {
														weights[index3].boneIndex2 = vertBoneIndex;
														weights[index3].weight2 = vbii.weight;
													} else if(vbiisIndex == 3) {
														weights[index3].boneIndex3 = vertBoneIndex;
														weights[index3].weight3 = vbii.weight;
													}
												}
											}
											index3++;
										}
										v = v2;
									}
									u = u2;
								}
							}
						}
						gridIndex++;
					}

#if UNITY_EDITOR
					if(index3 > vertexCount)
					{
						Debug.LogError("WTF, " + index3 + " > " + vertexCount);
					}
#endif
					
//Debug.Log(weights.Length + " ==? " + mMesh.vertices.Length + " .. " + mVertexBuffer.Length);

					mMesh.boneWeights = weights;

					//int numGrids = grids.Length;
					//int perVertexBonesCount = boneToIndexMap.Count;
					//int numberOfBones = gridIndex + perVertexBonesCount;
					int numberOfBones = boneToIndexMap.Count;
					Transform[] bones = new Transform[numberOfBones];
					Matrix4x4[] bindPoses = new Matrix4x4[numberOfBones];

					using(IEnumerator<KeyValuePair<Transform, BoneIndexInfo>> iter = boneToIndexMap.GetEnumerator()){
						while(iter.MoveNext()){
							KeyValuePair<Transform, BoneIndexInfo> kvp = iter.Current;
							BoneIndexInfo vertBoneIndexInfo = kvp.Value;
							int vertBoneIndex = vertBoneIndexInfo.boneIndex;
							if (vertBoneIndex >= numberOfBones){
#if UNITY_EDITOR
								Debug.LogError("bone index out of bound!!!: " + vertBoneIndex + " / " + numberOfBones);
#endif
							} else {
								bones[vertBoneIndex] = kvp.Key;
								Transform bone = bones[vertBoneIndex];
								Matrix4x4 offsetMat = Matrix4x4.TRS(bone.position - vertBoneIndexInfo.position, Quaternion.identity, Vector3.one);
								//Matrix4x4 boneMat = bone.worldToLocalMatrix * root.localToWorldMatrix;
								//Matrix4x4 boneMat = (offsetMat * bone.worldToLocalMatrix.inverse).inverse * root.localToWorldMatrix;
								Matrix4x4 boneMat = bone.worldToLocalMatrix * offsetMat * root.localToWorldMatrix;
								//Matrix4x4 boneMat = Matrix4x4.TRS(vertBoneIndexInfo.position, bone.rotation, bone.lossyScale).inverse * root.localToWorldMatrix;
								//Matrix4x4 boneMat = bone.worldToLocalMatrix * root.localToWorldMatrix;
								//Matrix4x4 boneMat = Matrix4x4.TRS(bone.position, bone.rotation, bone.lossyScale).inverse * root.localToWorldMatrix;
								//Matrix4x4 boneMat = Matrix4x4.TRS(vertBoneIndexInfo.position, bone.rotation, bone.lossyScale).inverse * root.localToWorldMatrix;
								//if(zScaleCompensation) { // for zfade shaders
								//	boneMat[2,2] /= bone.lossyScale.z;
								//}
								bindPoses[vertBoneIndex] = boneMat;
//#if UNITY_EDITOR
//								if(showBoneWeights)
//								{
//									Debug.DrawLine(bone.position, bone.position + new Vector3(0.02f,0,0), Color.blue, 0.0f, false);
//									Debug.DrawLine(bone.position, bone.position + new Vector3(0,0.02f,0), Color.blue, 0.0f, false);
//									Debug.DrawLine(bone.position, bone.position + new Vector3(0,0,0.02f), Color.blue, 0.0f, false);
//									Debug.DrawLine(vertBoneIndexInfo.position, vertBoneIndexInfo.position + new Vector3(0.02f,0,0), Color.red, 0.0f, false);
//									Debug.DrawLine(vertBoneIndexInfo.position, vertBoneIndexInfo.position + new Vector3(0,0.02f,0), Color.red, 0.0f, false);
//									Debug.DrawLine(vertBoneIndexInfo.position, vertBoneIndexInfo.position + new Vector3(0,0,0.02f), Color.red, 0.0f, false);
//									//Debug.DrawLine(bone.position, vertBoneIndexInfo.position, Color.green, 0.0f, false);
//									Debug.DrawLine(bone.position, vertBoneIndexInfo.position, Color.white, 0.0f, false);
//								}
//#endif
							}
						}
					}

					mMesh.bindposes = bindPoses;
					mRenderer.bones = bones;
					switch(requiredQuality) {
						case 0:
						case 1: mRenderer.quality = SkinQuality.Bone1; break;
						case 2: mRenderer.quality = SkinQuality.Bone2; break;
						default:
						case 3:
						case 4: mRenderer.quality = SkinQuality.Bone4; break;
					}
				}
				
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
				Profiler.EndSample();
#endif
			}
		}

		if(!anyChanged && sortingPivot)
		{
			// check for if the root moved relative to the pivot. if so, we have to reapply the pivot
			RecalculateBounds(true);
		}

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
        Profiler.EndSample();
#endif
	}
	
	class BoneIndexInfo
	{
		public int boneIndex;
		public Vector3 position;
	}
	
//	float EvaluWeight(Vector2 diff, float weight2, float weight2Factor)
//	{
//		if(weight2Factor == 1.0f) {
//			return weight2;
//		}
//		float weight1 = EvaluWeight(diff);
//		return MathUtil.Lerp(weight1, weight2, weight2Factor);
//	}
	
//	float EvaluWeight(Vector2 diff)
//	{
//		switch(weightingMetric)
//		{
//			default:
//			case WeightingMetric.Distance:
//				return 1.0f / diff.magnitude;
//			case WeightingMetric.ManhattanDistance:
//				return 1.0f / (MathUtil.Abs(diff.x) + MathUtil.Abs(diff.y));
//			case WeightingMetric.DistanceSquared:
//				return 1.0f / diff.sqrMagnitude;
//		}
//	}
	
	class VertexBoneInfo
	{
		public class Info
		{
			public Transform bone;
			public float weight;
			internal float weight2;
			internal float weightFactor;
			internal Transform oppositeBone;
		}
		FastList<Info> bones = new FastList<Info>();
		
		public QuadRenderer owner;
		
		public void Clear()
		{
			bones.Clear();
		}
		
		// note: weight2 must be finite
		public void Add(Transform bone, Vector2 displacement, float weight2, float weightFactor, Transform oppositeBone)
		{
			if(!bone) {
				return;
			}
			Info info = new Info() {
				bone = bone,
				weight = (weightFactor != 1.0f) ? EvaluWeight(displacement) : weight2,
				weight2 = weight2,
				weightFactor = weightFactor,
				oppositeBone = oppositeBone,
			};
			bones.Add(info);
		}

		public void Add(Transform bone, float weight)
		{
			if(!bone) {
				return;
			}
			Info info = new Info() {
				bone = bone,
				weight = weight,
				weight2 = weight,
			};
			bones.Add(info);
		}
		
		float EvaluWeight(Vector2 diff)
		{
//			switch(owner.weightingMetric)
//			{
//				default:
//				case WeightingMetric.Distance:
					return 1.0f / diff.magnitude;
//				case WeightingMetric.ManhattanDistance:
//					return 1.0f / (MathUtil.Abs(diff.x) + MathUtil.Abs(diff.y));
//				case WeightingMetric.DistanceSquared:
//					return 1.0f / diff.sqrMagnitude;
//			}
		}
		
		public Info[] NormalizeAndGetInfo()
		{
			NormalizeAndCombine();
//				string str = "";
//				for(int i = 0 ; i < bones.Count ; i++) {
//					Info info = bones[i];
//					str += info.bone.name + "(" + info.weight + ") ";
//				}
//				Debug.Log(str);
			return bones.ToArray();
		}
		
		override public string ToString()
		{
			string str = "VertexBoneInfo:";
			foreach(Info info in bones) {
				str += "\n" + Stm.V1_1.SceneHelper.FullPathName(info.bone) + ": " + info.weight;
			}
			return str;
		}
		
		void NormalizeWeight1()
		{
			float sum = 0.0f;
			int count = bones.Count;
			for(int i = 0 ; i < count ; i++) {
				sum += bones[i].weight;
			}
			if(float.IsInfinity(sum)) {
				sum = 0.0f;
				for(int i = 0 ; i < count ; i++) {
					Info info = bones[i];
					info.weight = float.IsInfinity(info.weight) ? 1.0f : 0.0f;
					sum += info.weight;
				}
			}
			for(int i = 0 ; i < count ; i++) {
				bones[i].weight /= sum;
			}
		}
		
		void NormalizeWeight2()
		{
			float sum = 0.0f;
			int count = bones.Count;
			for(int i = 0 ; i < count ; i++) {
				sum += bones[i].weight2;
			}
			if(float.IsInfinity(sum)) {
				sum = 0.0f;
				for(int i = 0 ; i < count ; i++) {
					Info info = bones[i];
					info.weight2 = float.IsInfinity(info.weight2) ? 1.0f : 0.0f;
					sum += info.weight2;
				}
			}
			for(int i = 0 ; i < count ; i++) {
				bones[i].weight2 /= sum;
			}
		}
		
		void FixNegatives()
		{
			int count = bones.Count;
			for(int i = 0 ; i < count ; i++) {
				Info info = bones[i];
				if(info.weight < 0) {
					Transform bone = info.bone;
					info.bone = info.oppositeBone;
					info.oppositeBone = bone;
					info.weight = -info.weight;
				}
				if(!info.bone) {
					info.weight = 0;
				}
			}
		}

		void NormalizeAndCombine()
		{
//Debug.Log("before Normalize " + this);
			int count = bones.Count;
			FixNegatives();
			NormalizeWeight1();
			NormalizeWeight2();
			for(int i = 0 ; i < count ; i++) {
				Info info = bones[i];
				info.weight = MathUtil.Lerp(info.weight, info.weight2, info.weightFactor);
			}
			FixNegatives();
			NormalizeWeight1();
			for(int i = count-1 ; i >= 1 ; i--)
			{
				Info info = bones[i];
				for(int j = i-1 ; j >= 0 ; j--)
				{
					Info info2 = bones[j];
					if(info.bone == info2.bone)
					{
						info2.weight += info.weight;
						bones.RemoveAt(i);
						count--;
						break;
					}
				}
			}
			bool reNormalize = false;
			bones.Sort(Sorter);
			for(int i = count-1 ; i >= 0 ; i--) {
				Info info = bones[i];
				if(info.weight < 0.01f) {
					bones.RemoveAt(i);
					reNormalize |= (info.weight > 0.0000001f);
				} else {
					break;
				}
			}
			//int maxCount = (owner.qualityLimit == QualityLimit.One_Bone) ? 1 : ((owner.qualityLimit == QualityLimit.Two_Bones) ? 2 : ((owner.qualityLimit == QualityLimit.Three_Bones) ? 3 : 4));
			int maxCount = 4;
			while(bones.Count > maxCount) {
				bones.RemoveAt(bones.Count - 1);
				reNormalize = true;
			}
			if(reNormalize) {
				NormalizeWeight1();
			}
//Debug.Log("after Normalize " + this);
		}
		
		static int Sorter(Info a, Info b)
		{
			return b.weight.CompareTo(a.weight);
		}
	}
	
//	
//	class BoneWeightInfo
//	{
//		Transform
//		BoneWeight[] weights = new BoneWeight[vertexCount];
//	}
	

	//[HideFromEvents]
	public void RecalculateBounds(/*bool onlyIfPivotChanged=false*/) { RecalculateBounds(false); }
	public void RecalculateBounds(bool onlyIfPivotChanged/*=false*/)
	{
		//Mesh mesh = mFilter.sharedMesh;
		Mesh mesh = mMesh;
		
		Vector3 localPivot = Vector3.zero;
		if(sortingPivot)
		{
			localPivot = root.InverseTransformPoint(sortingPivot.position);
		}

		if(onlyIfPivotChanged)
		{
			//if((localPivot - prevLocalPivot).sqrMagnitude < 0.001f)
			float xDiff = localPivot.x - prevLocalPivot.x;
			float yDiff = localPivot.y - prevLocalPivot.y;
			if(xDiff*xDiff+yDiff*yDiff < 0.001f)
			{
				return;
			}
		}
		
		prevLocalPivot = localPivot;
		
		mesh.RecalculateBounds();

		if(sortingPivot)
		{
			// unity sorts transparent objects by the distance of the mesh render bounds center
			// from the camera (or optionally along the camera Z axis via transparencySortMode)
			// so as a workaround for lack of customization here,
			// we push out the render bounds to affect the sorting

			Bounds bounds = mesh.bounds;
			Vector3 diff = localPivot - bounds.center;
			Vector3 camForward = root.InverseTransformDirection(Stm.V1_1.SceneHelper.GetMainCamera(gameObject.layer).transform.forward);
			diff -= camForward * Vector3.Dot(camForward, diff);
			//diff.z = 0.0f;
			bounds.center += diff;
			bounds.extents += new Vector3(MathUtil.Abs(diff.x), MathUtil.Abs(diff.y), MathUtil.Abs(diff.z));

			mesh.bounds = bounds;
		}
	}

#if UNITY_EDITOR
	void OnValidate()
	{
		if(materials == null) {
			materials = new Material[0];
		}
		if(!material && materials.Length == 0)
		{
			QuadRenderer r = Stm.V1_1.SceneHelper.SearchUpwardsFor<QuadRenderer>(transform.parent);
			if(r) {
				material = r.material;
			}
		}
	}
#endif

	public bool dirty {
		get {
#if UNITY_EDITOR
			if(!Application.isPlaying) { return false; }
#endif
			return pendingDirty && (s_dirtyCoro != null);
		}
		set {
#if UNITY_EDITOR
			if(!Application.isPlaying) { return; }
#endif
			if(value != dirty) {
				
				UpdateMgr updateMgr = UpdateMgr.Inst;//UpdateMgr.InstGuaranteed;

#if !ANDROID_CRASH_HACK_FIX
				if(!updateMgr) {
					//Debug.Log(name + ":" + GetHashCode());
					UpdateMesh();
					pendingDirty = false;
					return;
				}
#endif

				if(s_dirtyQuads == null) {
					s_dirtyQuads = new List<QuadRenderer>();
				}
				if(value) {
					if(!s_dirtyQuads.Contains(this)) {
						s_dirtyQuads.Add(this);
					}
				} else {
					s_dirtyQuads.Remove(this);
				}

				pendingDirty = value;

#if ANDROID_CRASH_HACK_FIX
				if(!updateMgr) {
					return;
				}
#endif

				if(s_dirtyCoro == null) {
					s_dirtyCoro = updateMgr.StartSequence(null, DoUpdateDirtyQuads(), SequenceType.RealTime, true);
					UpdateMgr.Inst.onDestroy += OnUpdateMgrDestroyed;
				}
			}
		}
	}
	
	static void OnUpdateMgrDestroyed() {
		s_dirtyCoro = null;
		s_dirtyQuads.Clear();
	}
	
	static IEnumerator DoUpdateDirtyQuads()
	{
		yield return null;
		int cleanCounter = 0;
		while(true)
		{
			int dirtyCount = s_dirtyQuads.Count;
			if(dirtyCount == 0) {
				cleanCounter++;
				if(cleanCounter >= 5) {
					break;
				}
			} else {
				cleanCounter = 0;
				//const int batchCount = 32;
				//int minIndex = (dirtyCount > batchCount) ? (dirtyCount - batchCount) : 0;
				const int minIndex = 0;
				for(int i = dirtyCount-1 ; i >= minIndex ; i--) {
					QuadRenderer qr = s_dirtyQuads[i];
					//s_dirtyQuads.RemoveAt(i);
					if(qr) {
						qr.UpdateMesh();
						qr.pendingDirty = false;
					}
				}
				s_dirtyQuads.Clear();
			}
			yield return null;
		}
		s_dirtyCoro = null;
		UpdateMgr.Inst.onDestroy -= OnUpdateMgrDestroyed;
	}
	
	static List<QuadRenderer> s_dirtyQuads;
	static CoroutineHandle s_dirtyCoro;
	bool pendingDirty;
	
#if UNITY_EDITOR
//	public void GetNodeVertexRange(QuadNode grid, out int index, out int length)
//	{
//		int ind = 0;
//		foreach(QuadNode g in grids)
//		{
//			int nodeInd = ind;
//			float du, dv;
//			g.GetTesselationStep(out du, out dv);
//			foreach(QuadNodeQuad quad in g.quads) {
//				if(quad != null && !quad.disabled) {
//					int quadCount = Mathf.CeilToInt(1.0f / du) * Mathf.CeilToInt(1.0f / dv);
//					ind += kVertsPerSprite * quadCount;
//				}
//			}
//			if(g == grid)
//			{
//				index = nodeInd;
//				length = ind - nodeInd;
//				return;
//			}
//		}
//		index = 0;
//		length = 0;
//	}
	
	public static bool showBoneWeights;
	static Vector3 IndexToColorAsVector(int index)
	{
		switch(index & 7)
		{
			default:
			case 0: return new Vector4(1,0,0);
			case 1: return new Vector4(0,1,0);
			case 2: return new Vector4(0,0,1);
			case 3: return new Vector4(1,1,0);
			case 4: return new Vector4(0,1,1);
			case 5: return new Vector4(1,0,1);
			case 6: return new Vector4(1,1,1);
			case 7: return new Vector4(0,0,0);
		}
	}
	FastList<Transform> gridRoots = new FastList<Transform>();
	//void OnDrawGizmosSelected()
	void OnDrawGizmos()
	{
		if(!showBoneWeights) {
			return;
		}
		if(mMesh == null || mRenderer == null) {
			return;
		}
		BoneWeight[] weights = mMesh.boneWeights;
		if(weights.Length == 0) {
			return;
		}
		Transform[] bones = mRenderer.bones;
		if(bones.Length == 0) {
			return;
		}
		gridRoots.Clear();
		bool anyNonRootBones = false;
		foreach(QuadNode grid in grids) {
			if(!grid || !grid.enabled || !grid.gameObject.activeInHierarchy) {
				continue;
			}
			Transform gridRoot = grid.transform;
			if(!gridRoots.Contains(gridRoot)) {
				gridRoots.Add(gridRoot);
			}
			foreach(QuadNodeQuad quad in grid.quads) {
				if(quad != null && !quad.disabled) {
					if(quad.bone00 && quad.bone00 != gridRoot) {
						anyNonRootBones = true;
						break;
					}
				}
			}
			if(anyNonRootBones) {
				break;
			}
		}
		if(!anyNonRootBones) {
			//return;
		}
		float scale = transform.lossyScale.magnitude;
		for(int boneIndex = 0 ; boneIndex < bones.Length ; boneIndex++)
		{
			Transform bone = bones[boneIndex];
			Vector3 colorVector3 = IndexToColorAsVector(boneIndex);
			Gizmos.color = new Color(colorVector3.x, colorVector3.y, colorVector3.z);
			Gizmos.DrawCube(bone.position, Vector3.one * (scale * 0.01f));
		}
		Matrix4x4 mat = root.localToWorldMatrix;
		Matrix4x4[] bindPoses = mMesh.bindposes;
        Vector3[] vertices = mMesh.vertices;
        MeshSkinningCalculator skinner = new MeshSkinningCalculator(bindPoses, bones);
        int numVerts = vertices.Length;
        for(int i = 0 ; i < numVerts ; i++)
        {
			BoneWeight weight = weights[i];
			Vector3 vertexPos = vertices[i]; 
			Vector3 pos = skinner.SkinPoint(vertexPos, weight);
			vertexPos = mat.MultiplyPoint3x4(vertexPos);
			{
				float boneWeight = weight.weight0;
				int boneIndex = weight.boneIndex0;
				if(boneWeight != 0 && boneIndex >= 0 && boneIndex < bones.Length)
				{
					Transform bone = bones[boneIndex];
					Vector3 bonePos = bone.position;
					if(!gridRoots.Contains(bone)) {
						Vector3 colorVector3 = IndexToColorAsVector(boneIndex);
						Color color = new Color(colorVector3.x, colorVector3.y, colorVector3.z, boneWeight);
						DrawShortLine(pos, bonePos, color, scale * 0.02f);
//						Gizmos.DrawLine(pos, vertexPos);
					}
				}
			}
			{
				float boneWeight = weight.weight1;
				int boneIndex = weight.boneIndex1;
				if(boneWeight != 0 && boneIndex >= 0 && boneIndex < bones.Length)
				{
					Transform bone = bones[boneIndex];
					Vector3 bonePos = bone.position;
					if(!gridRoots.Contains(bone)) {
						Vector3 colorVector3 = IndexToColorAsVector(boneIndex);
						Color color = new Color(colorVector3.x, colorVector3.y, colorVector3.z, boneWeight);
						DrawShortLine(pos, bonePos, color, scale * 0.02f);
//						Gizmos.DrawLine(pos, vertexPos);
					}
				}
			}
			{
				float boneWeight = weight.weight2;
				int boneIndex = weight.boneIndex2;
				if(boneWeight != 0 && boneIndex >= 0 && boneIndex < bones.Length)
				{
					Transform bone = bones[boneIndex];
					Vector3 bonePos = bone.position;
					if(!gridRoots.Contains(bone)) {
						Vector3 colorVector3 = IndexToColorAsVector(boneIndex);
						Color color = new Color(colorVector3.x, colorVector3.y, colorVector3.z, boneWeight);
						DrawShortLine(pos, bonePos, color, scale * 0.02f);
//						Gizmos.DrawLine(pos, vertexPos);
					}
				}
			}
			{
				float boneWeight = weight.weight3;
				int boneIndex = weight.boneIndex3;
				if(boneWeight != 0 && boneIndex >= 0 && boneIndex < bones.Length)
				{
					Transform bone = bones[boneIndex];
					Vector3 bonePos = bone.position;
					if(!gridRoots.Contains(bone)) {
						Vector3 colorVector3 = IndexToColorAsVector(boneIndex);
						Color color = new Color(colorVector3.x, colorVector3.y, colorVector3.z, boneWeight);
						DrawShortLine(pos, bonePos, color, scale * 0.02f);
//						Gizmos.DrawLine(pos, vertexPos);
					}
				}
			}
        }

	}

	void DrawShortLine(Vector3 a, Vector3 c, Color color, float maxLen)
	{
		if(color.a > 0.1f) {
			Vector3 b = a + Vector3.ClampMagnitude(c - a, maxLen);
			Gizmos.color = color;
			Gizmos.DrawLine(a, b);
			if(color.a > 0.4f) {
				Gizmos.color = new Color(color.r, color.g, color.b, color.a * 0.25f);
				Gizmos.DrawLine(b, c);
			}
		}
	}
	
#endif

}

#if UNITY_EDITOR
// TODO: move this elsewhere?
public sealed class MeshSkinningCalculator
{
	public MeshSkinningCalculator(SkinnedMeshRenderer skinnedMeshRenderer)
	{
		Mesh mesh = skinnedMeshRenderer.sharedMesh;
		bindPoses = mesh.bindposes;
		bones = skinnedMeshRenderer.bones;
		weights = mesh.boneWeights; // for index variant
        vertices = mesh.vertices; // for index variant
	}

	public MeshSkinningCalculator(Matrix4x4[] bindPoses, Transform[] bones)
	{
		this.bindPoses = bindPoses;
		this.bones = bones;
	}
	
	public MeshSkinningCalculator(Matrix4x4[] bindPoses, Transform[] bones, BoneWeight[] weights, Vector3[] vertices)
	{
		this.bindPoses = bindPoses;
		this.bones = bones;
		this.weights = weights; // for index variant
		this.vertices = vertices; // for index variant
	}
	
	public Vector3 SkinPoint(int index) // index variant
	{
		return SkinPoint(vertices[index], weights[index]);
	}
	
	public Vector3 SkinPoint(Vector3 localPos, BoneWeight weight)
	{
		Vector3 pos = Vector3.zero;
		AddContribution(ref pos, ref localPos, weight.boneIndex0, weight.weight0);
		AddContribution(ref pos, ref localPos, weight.boneIndex1, weight.weight1);
		AddContribution(ref pos, ref localPos, weight.boneIndex2, weight.weight2);
		AddContribution(ref pos, ref localPos, weight.boneIndex3, weight.weight3);
		return pos;
	}

	Matrix4x4[] bindPoses;
	Transform[] bones;
	BoneWeight[] weights; // for index variant
	Vector3[] vertices; // for index variant

	void AddContribution(ref Vector3 pos, ref Vector3 localPos, int boneIndex, float boneWeight)
	{
		if(boneWeight != 0 && boneIndex >= 0 && boneIndex < bones.Length)
		{
			Transform bone = bones[boneIndex];
			Matrix4x4 bindPose = bindPoses[boneIndex];
			pos += bone.TransformPoint(bindPose.MultiplyPoint3x4(localPos)) * boneWeight;
		}
	}
}
#endif
