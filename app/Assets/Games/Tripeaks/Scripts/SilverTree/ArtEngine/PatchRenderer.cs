#if UNITY_EDITOR
#define ENABLE_PREVIEW
#endif

using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Stm.V1_0;

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
using UnityEngine.Profiling;
#endif

#if ENABLE_PREVIEW
[ExecuteInEditMode]
#endif
public class PatchRenderer : /*Reloadable*/MonoBehaviour
{
	[System.NonSerialized] public Transform root;
	BezierPatchGrid[] grids;
	
	public enum MeshType
	{
		Auto,
		Static,
		Dynamic,
		StaticWithDynamicPivot,
	}
	public MeshType meshType;

#if !IMMEDIATE_FLASH
#if UNITY_IOS
	const int MAX_MESH = 2;
#else
	const int MAX_MESH = 1;
#endif
	int mMaxMesh = 1;
	Mesh[] mMesh = new Mesh[MAX_MESH];
	int mCurrentMesh = 0;

#if !IMMEDIATE_FLASH
    Vector3[] mVertexBuffer;
    Vector2[] mCoordBuffer;
    //Vector2[] mCoord2Buffer;
    Color32[] mColorBuffer;
    //int[] mTriangles;
#endif

    MeshRenderer mRenderer;
#endif
#if !IMMEDIATE_FLASH
	MeshFilter mFilter;
#else
	//Mesh mQuadMesh; // left=0, bottom=-1, right=1, top=0
#endif
	
	const int kVertsPerSprite = 4;
	const int kTriangleIndicesPerSprite = 6;
	
	public Material material;
	public Material[] materials;
//#if ENABLE_PREVIEW
//	Material tempMaterial;
//#endif
	//public int renderQueueBoost; // render queue for forced hard ordering
	public bool shaderInScreenSpace;
	bool doNotUseDoubleBuffer;
	int numQuads;
	int maxNumQuads;
	//public bool reserveMaxVerts;
	public bool reserveVertsMax = true; // renamed to reset serialized values to new default of true
	
	[System.Serializable]
    class SubMeshData
    {
		public int[] triangles;
		public int numQuads;
		public int newNumQuads;
		public int maxNumQuads;
		public int writeIndex;
    }
    SubMeshData[] subMeshData;
	int numSubMeshes;
	
	//public float layerBias; // z offset for soft ordering bias
	//float prevLayerBias;
//	public Vector3 sortPivotOffset; // for ordering correction
//	Vector3 prevSortPivotOffset;
	//Vector3 offsetForLayerBias;
// 	[DisableTraceReferences]
	public Transform sortingPivot; // pivot root for correct ordering of layered planes
	Vector3 prevLocalPivot;
	
	bool isVisibleByCamera = true;
	bool isFirstTimeToUpdateMesh = true;
	
#if UNITY_ANDROID	
	//Masaki's comment
	//this is hack to fix broken frame buffer after backgrounding and resuming the game on Android
	void OnApplicationPause(bool pause){
#if UNITY_EDITOR
		if(!Application.isPlaying) {
			return;
		}
#endif
		if (!pause){			
			if (isVisibleByCamera && mRenderer != null){
				Material mat = mRenderer.sharedMaterial;
				if(mat) {
					mat.mainTexture = mat.mainTexture;
				}
			}			
		}
	}
#endif	
	
	void OnBecameVisible(){
		isVisibleByCamera = true;
	}
	
	void OnBecameInvisible(){
		isVisibleByCamera = false;
	}
	
	void Awake()
	{
		root = transform;
		GetGridsAndSort();

#if UNITY_EDITOR
		if(Application.isPlaying)
#endif
		{
			if(meshType == MeshType.Auto)
			{
				meshType = (GetComponentsInChildren<Anim2d>(true).Length == 0) ? MeshType.Static : MeshType.Dynamic;
			}
			
			if(meshType == MeshType.Static
			|| meshType == MeshType.StaticWithDynamicPivot)
			{
				doNotUseDoubleBuffer = true;
			}
		}

		InitializeMeshComponents();
	}
	
	public void GetGridsAndSort()
	{
		//grids = GetComponentsInChildren<BezierPatchGrid>(true);
		List<BezierPatchGrid> gridsList = new List<BezierPatchGrid>();
		foreach(BezierPatchGrid grid in GetComponentsInChildren<BezierPatchGrid>(true))
		{
			Transform t = grid.root;
			if(t == null)
			{
				grid.AwakePart1();
				t = grid.root;
			}
			PatchRenderer p = Stm.V1_1.SceneHelper.SearchUpwardsFor<PatchRenderer>(t);
			if(p == this)
				gridsList.Add(grid);
		}
		grids = gridsList.ToArray();
		gridsList.Clear();
		
		float indexOffsetF = 0.0f;
		foreach(BezierPatchGrid grid in grids)
		{
			grid.tempZ = GetLocalZOffsetFromPatchRenderer(grid.root) + indexOffsetF;
			indexOffsetF -= 0.00000001f; // hack to make it a "stable sort"
		}
		
		//Debug.Log("SORT");
		System.Array.Sort(grids, GridSorter);
		//UpdateMesh();
	}
	
	float GetLocalZOffsetFromPatchRenderer(Transform t)
	{
		if(t == root)
			return 0.0f;
		float rv = t.localPosition.z;
		Transform p = t.parent;
		if(p)
			rv += GetLocalZOffsetFromPatchRenderer(p);
		return rv;
	}

	int GridSorter(BezierPatchGrid a, BezierPatchGrid b)
	{
		return b.tempZ.CompareTo(a.tempZ);
	}

	CoroutineHandle updateCoro;
	bool running;

	void Start(){
		InitializeMesh();
#if IMMEDIATE_FLASH
		//if(Globals.Inst)
			//mQuadMesh = Globals.Inst.xyFlashPlaneMesh;
#endif
/*
#if (UNITY_ANDROID || UNITY_IPHONE) && !UNITY_EDITOR
		ScreenRotator rotator = ScreenRotator.Inst;
		if( rotator != null ){
			rotator.onOrientationChanged += OnOrientationChanged;
		}
#endif
*/
		if(meshType != MeshType.Static)
		{
			RunDoUpdate();
		}
	}
	
	void RunDoUpdate()
	{
		if(UpdateMgr.Inst) {
			updateCoro = UpdateMgr.Inst.StartSequence(gameObject, DoUpdate());
		} else {
			StartCoroutine(DoUpdate());
		}
		running = true;
	}
	
	void OnEnable()
	{
		if(running)
		{
			if(updateCoro != null) {
				UpdateMgr.Inst.ResumeSequence(updateCoro);
			} else {
				RunDoUpdate();
			}
		}
	}
	

	void OnDestroy(){
#if !IMMEDIATE_FLASH
		for( int i = 0 ; i < MAX_MESH ; ++i ){
			if( mMesh != null && i < mMesh.Length && mMesh[i] != null ){
				MeshHelper.DelayDestroy(mMesh[i]);
			}
		}
#endif
	}
	
	public void InitRenderer()
	{
#if UNITY_EDITOR
		OnValidate();
#endif

		mRenderer = Stm.V1_1.SceneHelper.GetOrAddComponent<MeshRenderer>(gameObject);

		if(materials == null)
			materials = new Material[0];

		if(materials.Length == 0)
		{
			if (material != null && material.mainTexture == null) {
				StartCoroutine(UpdateMaterial(material));				
			}
			else
			{
				mRenderer.sharedMaterial = material;
			}
		}
		else
		{		
			mRenderer.sharedMaterials = materials;
		}
		
		//DebugUpdateMaterialRenderQueue();
	}
	
	
	IEnumerator UpdateMaterial(Material material)
	{
		while(material.mainTexture == null)
		{
			yield return null;
		}					
		mRenderer.sharedMaterial = material;		
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
#if !IMMEDIATE_FLASH
		mFilter = Stm.V1_1.SceneHelper.GetOrAddComponent<MeshFilter>(gameObject);
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
		if( doNotUseDoubleBuffer ){
			mMaxMesh = 1;
		} else {
			mMaxMesh = MAX_MESH;
		}
		if(mMesh == null || mMesh.Length != MAX_MESH)
			mMesh = new Mesh[MAX_MESH];
		for(int i = 0 ; i < mMaxMesh ; i++){
			mMesh[i] = new Mesh();
			mMesh[i].hideFlags |= HideFlags.DontSave;
			mMesh[i].name = name + "Mesh" + i;
//			if(meshType == MeshType.Dynamic) {
//				mMesh[i].MarkDynamic(); // not sure if this actually helps, or how it interacts with double buffering. MarkDynamic is very poorly documented and the profiling results are unclear.
//			}
		}

		mFilter.sharedMesh = mMesh[0];
#endif
//#if !UNITY_EDITOR
//		if( !shaderInScreenSpace ){
//			//Debug.Log("n: " + shader.name);
//			//Hacky fix
//			shader = Shader.Find("SilverTree/World Space RGBB");
//		}
//#endif
	}

	

	void InitializeMesh()
	{
#if !IMMEDIATE_FLASH
		numSubMeshes = 0;
		foreach(BezierPatchGrid grid in grids)
			foreach(BezierPatchQuad quad in grid.quads)
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
		foreach(BezierPatchGrid grid in grids)
		{
			if(!grid.enabled || !grid.gameObject.activeInHierarchy) {
				continue;
			}

			float du, dv;
			grid.GetTesselationStep(out du, out dv);
			//grid.tempU = du;
			//grid.tempV = dv;

			foreach(BezierPatchQuad quad in grid.quads)
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
		maxNumQuads = numQuads;

		int vertexCount = kVertsPerSprite * numQuads;
		mVertexBuffer = new Vector3[vertexCount];
		mCoordBuffer = new Vector2[vertexCount];
		//mCoord2Buffer = new Vector2[vertexCount];
		//Vector2[] mCoordBuffer = new Vector2[vertexCount];
		mColorBuffer = new Color32[vertexCount];
		//mTriangles = new int[];//[kTriangleIndicesPerSprite * numQuads];
		foreach(SubMeshData data in subMeshData)
		{
			data.maxNumQuads = data.numQuads;
			data.triangles = new int[kTriangleIndicesPerSprite * data.numQuads];
		}

		for(int i = 0 ; i < mMaxMesh ; i++)
			mMesh[i].subMeshCount = numSubMeshes;
#endif
		//Color32 c = new Color32(255, 255, 255, (byte)MathUtil.Clamp(alpha * 255.0f, 0.0f, 255.0f));
		
#if !IMMEDIATE_FLASH
		int index = 0;
		foreach(BezierPatchGrid grid in grids)
		{
			grid.dirty = true;

#if UNITY_EDITOR
			if(!grid.root && !Application.isPlaying)
			{
				grid.AwakePart1();
			}
#endif
			if(!grid.enabled || !grid.gameObject.activeInHierarchy) {
				continue;
			}
			
			float du, dv;
			//grid.GetTesselationStep(out du, out dv);
			du = grid.tempU;
			dv = grid.tempV;

			foreach(BezierPatchQuad quad in grid.quads)
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
		foreach(BezierPatchGrid grid in grids)
		{
			if(!grid.enabled || !grid.gameObject.activeInHierarchy) {
				continue;
			}
			foreach(BezierPatchQuad quad in grid.quads)
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

#endif
		UpdateMesh();
#if !IMMEDIATE_FLASH
		for(int i = 0 ; i < mMaxMesh ; i++)
		{
			Mesh mesh = mMesh[i];
			if(i != mCurrentMesh)
				mesh.vertices = mVertexBuffer;
//			mesh.vertices = mVertexBuffer;
//			mesh.uv = mCoordBuffer;
//			mesh.uv2 = mCoord2Buffer;
			//mesh.colors32 = mColorBuffer;
//			mesh.triangles = mTriangles;
			for(int j = 0 ; j < numSubMeshes ; j++)
				mMesh[i].SetTriangles(subMeshData[j].triangles, j);
			if(shaderInScreenSpace)
				mesh.bounds = new Bounds( Vector3.zero, new Vector3( float.MaxValue*0.125f, float.MaxValue*0.125f, float.MaxValue*0.125f ) );
			else
				mesh.RecalculateBounds();
		}
#endif
	}

//    void InitializeAnim() {
////        mAnim = GetComponent<Anim>();
////        if (mAnim) {
////            mAnim.Initialize(this);
//            UpdateMesh();
////        }
//    }
    
//    void Update()
//    {
//		UpdateMesh();
//    }
	
	IEnumerator DoUpdate()
	{
		while(true)
		{
			UpdateMesh();
			yield return null;
		}
	}

#if UNITY_EDITOR && ENABLE_PREVIEW
	void Update()
	{
		if(!Application.isPlaying) {
			EditorUpdates();
		}
	}
#endif

//#if ENABLE_PREVIEW
//	public void DebugUpdateMaterialRenderQueue()
//	{
//		if(mRenderer.sharedMaterial.renderQueue != material.renderQueue + renderQueueBoost)
//		{
//			if(tempMaterial != mRenderer.sharedMaterial)
//			{
//				tempMaterial = new Material(mRenderer.sharedMaterial);
//				tempMaterial.renderQueue = material.renderQueue + renderQueueBoost;
//				mRenderer.sharedMaterial = tempMaterial;
//			}
//			else
//			{
//				mRenderer.sharedMaterial.renderQueue = material.renderQueue + renderQueueBoost;
//			}
//		}
//	}
//#endif
	
#if UNITY_EDITOR && ENABLE_PREVIEW
	void EditorUpdates()
	{
		if(!root)
			root = transform;
		//grids = GetComponentsInChildren<BezierPatchGrid>(true);
		//System.Array.Sort(grids, GridSorter);
		GetGridsAndSort();
//			DebugUpdateMaterialRenderQueue();
		if(mMesh == null || mMesh.Length == 0 || mMesh[0] == null || mFilter == null)
			InitializeMeshComponents();
		if(mRenderer == null)
			InitRenderer();
		if(Array.IndexOf(mMesh, mFilter.sharedMesh) == -1) {
			if(mFilter.sharedMesh && !UnityEditor.EditorUtility.IsPersistent(mFilter.sharedMesh)) {
				Stm.V1_1.SceneHelper.Destroy(mFilter.sharedMesh);
			}
			mFilter.sharedMesh = mMesh[mCurrentMesh];
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
	
	public void UpdateMesh(bool force = false)
	{
		if (!force && !isVisibleByCamera && !isFirstTimeToUpdateMesh){
			return;
		}		
		isFirstTimeToUpdateMesh = true;
				
#if !IMMEDIATE_FLASH
        if(!mRenderer || (!mRenderer.enabled && !force)) { return; }
#else
        if(!isActive && !force) { return; }
#endif

#if UNITY_EDITOR && ENABLE_PREVIEW
		if(!Application.isPlaying) {
			EditorUpdates();
		}
#endif

		if(grids == null) { return; } // TODO: WHY (happens sometimes when loading between levels)

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
        Profiler.BeginSample("PatchRenderer(\"" + name + "\").UpdateMesh(" + grids.Length + ")", this);
#endif
#if !IMMEDIATE_FLASH
		//int alpha256 = (int)MathUtil.Clamp(alpha * 256.0f, 0.0f, 256.0f);
		//Color32 c = new Color32(255, 255, 255, 255);


		bool anyChanged = false;

		if(meshType != MeshType.StaticWithDynamicPivot || force)
		{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
			Profiler.BeginSample("GetTesselationStep");
#endif

			foreach(SubMeshData data in subMeshData)
				data.newNumQuads = 0;
			
			Matrix4x4 rootMat = root.worldToLocalMatrix;

			int newNumQuads = 0;
			foreach(BezierPatchGrid grid in grids)
			{
				if(!grid.enabled || !grid.gameObject.activeInHierarchy) {
					continue;
				}

				float du, dv;

				Matrix4x4 mat = rootMat * grid.root.localToWorldMatrix;
				if(grid.dirty)
				{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
					Profiler.BeginSample("tesselate");
#endif
					grid.tempMat = mat;

					grid.GetTesselationStep(out du, out dv);
					//grid.tempU = du;
					//grid.tempV = dv;
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
					Profiler.EndSample();
#endif
				}
				else
				{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
					Profiler.BeginSample("MatrixDist");
#endif
					Matrix4x4 prevMat = grid.tempMat;
					float matDistSq = 0.0f;
					for(int i = 0 ; i < 16 ; i++)
					{
						float diff = mat[i] - prevMat[i];
						matDistSq += diff * diff;
					}
					if(matDistSq > 0.00001f)
					{
						grid.dirty = true;
						grid.tempMat = mat;
					}
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
					Profiler.EndSample();
#endif

					du = grid.tempU;
					dv = grid.tempV;
				}

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
				Profiler.BeginSample("count");
#endif
				foreach(BezierPatchQuad quad in grid.quads)
				{
					if(quad != null && !quad.disabled)
					{
						int quadCount = Mathf.CeilToInt(1.0f / du) * Mathf.CeilToInt(1.0f / dv);
						newNumQuads += quadCount;
#if UNITY_EDITOR
						if(quad.subMeshIndex >= subMeshData.Length && !Application.isPlaying) {
							InitializeMesh();
						}
#endif
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
			
			
			bool anyIncreased = false;
			//bool anyNotIncreased = false;
			
			if(newNumQuads != numQuads)
			{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
				Profiler.BeginSample("Reserve");
#endif

				if(!reserveVertsMax || newNumQuads > maxNumQuads)
				{
					int newVertexCount = kVertsPerSprite * newNumQuads;
					var oldVertexBuffer = mVertexBuffer;
					var oldCoordBuffer = mCoordBuffer;
					//var oldCoord2Buffer = mCoord2Buffer;
					var oldColorBuffer = mColorBuffer;
					//var oldTriangles = mTriangles;
					mVertexBuffer = new Vector3[newVertexCount];
					mCoordBuffer = new Vector2[newVertexCount];
					//mCoord2Buffer = new Vector2[newVertexCount];
					mColorBuffer = new Color32[newVertexCount];
					//mTriangles = new int[kTriangleIndicesPerSprite * newNumQuads];
					Array.Copy(oldVertexBuffer, mVertexBuffer, MathUtil.Min(oldVertexBuffer.Length, mVertexBuffer.Length));
					Array.Copy(oldCoordBuffer, mCoordBuffer, MathUtil.Min(oldCoordBuffer.Length, mCoordBuffer.Length));
					//Array.Copy(oldCoord2Buffer, mCoord2Buffer, MathUtil.Min(oldCoord2Buffer.Length, mCoord2Buffer.Length));
					Array.Copy(oldColorBuffer, mColorBuffer, MathUtil.Min(oldColorBuffer.Length, mColorBuffer.Length));
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
					maxNumQuads = newNumQuads;
				}
				if(reserveVertsMax && newNumQuads < numQuads)
				{
					for(int i = newNumQuads ; i < numQuads ; i++)
					{
						int index2 = i;
						Vector3 a = mVertexBuffer[kVertsPerSprite*index2+0];
						mVertexBuffer[kVertsPerSprite*index2+1] = a;
						mVertexBuffer[kVertsPerSprite*index2+2] = a;
						mVertexBuffer[kVertsPerSprite*index2+3] = a;
					}
				}
				numQuads = newNumQuads;
				anyChanged = true;

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
				Profiler.EndSample();
#endif
			}

			for(int subMeshIndex = 0 ; subMeshIndex < numSubMeshes ; subMeshIndex++)
			{
				SubMeshData data = subMeshData[subMeshIndex];

				if(data.newNumQuads != data.numQuads)
				{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
					Profiler.BeginSample("SubReserve");
#endif

					if(!reserveVertsMax || data.newNumQuads > data.maxNumQuads)
					{
						//int newVertexCount = kVertsPerSprite * data.newNumQuads;
						var oldTriangles = data.triangles;
						data.triangles = new int[kTriangleIndicesPerSprite * data.newNumQuads];
						Array.Copy(oldTriangles, data.triangles, MathUtil.Min(oldTriangles.Length, data.triangles.Length));

						{
							int iMin = reserveVertsMax ? data.maxNumQuads : data.numQuads;
							int index1 = 0;
							int index3 = 0;
							foreach(BezierPatchGrid grid in grids)
							{
								if(!grid.enabled || !grid.gameObject.activeInHierarchy) {
									continue;
								}
								foreach(BezierPatchQuad quad in grid.quads)
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
						data.maxNumQuads = data.newNumQuads;
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
				for(int i = 0 ; i < mMaxMesh ; i++)
				{
					if(anyIncreased)
						mMesh[i].vertices = mVertexBuffer;
					
					for(int j = 0 ; j < numSubMeshes ; j++)
						mMesh[i].SetTriangles(subMeshData[j].triangles, j);

					if(!anyIncreased)
						mMesh[i].vertices = mVertexBuffer;
				}

				foreach(BezierPatchGrid grid in grids)
					grid.dirty = true;

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
				Profiler.EndSample();
#endif
			}



	//		numQuads = 0;
	//		foreach(BezierPatchGrid grid in grids)
	//		{
	//			float du, dv;
	//			grid.GetTesselationStep(out du, out dv);
	//
	//			foreach(BezierPatchQuad quad in grid.quads)
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
	//#if !IMMEDIATE_FLASH
	//					mVertexBuffer[i  ] = Vector3.zero;
	//					mVertexBuffer[i+1] = Vector3.zero;
	//					mVertexBuffer[i+2] = Vector3.zero;
	//					mVertexBuffer[i+3] = Vector3.zero;
	//#endif
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
	////			foreach(BezierPatchGrid grid in grids)
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
			foreach(BezierPatchGrid grid in grids)
			{
				float du, dv;
				//grid.GetTesselationStep(out du, out dv);
				du = grid.tempU;
				dv = grid.tempV;

				if(!grid.enabled || !grid.gameObject.activeInHierarchy) {
					continue;
				}
#if UNITY_EDITOR
	if(Application.isPlaying) // <-- temp hack
#endif
				if(!grid.dirty)
				{
					foreach(BezierPatchQuad quad in grid.quads)
						if(quad != null && !quad.disabled)
							index += Mathf.CeilToInt(1.0f / du) * Mathf.CeilToInt(1.0f / dv);
					continue;
				}

#if UNITY_EDITOR
				if(!grid.root && !Application.isPlaying)
				{
					grid.AwakePart1();
				}
#endif
				
				Matrix4x4 mat = grid.tempMat;
				
				grid.dirty = false;
				foreach(BezierPatchQuad quad in grid.quads)
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
								mColorBuffer[kVertsPerSprite*index+0] = quad.color;
								mColorBuffer[kVertsPerSprite*index+1] = quad.color;
								mColorBuffer[kVertsPerSprite*index+2] = quad.color;
								mColorBuffer[kVertsPerSprite*index+3] = quad.color;
								
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

				mCurrentMesh++;
				if( mCurrentMesh >= mMaxMesh ){
					mCurrentMesh = 0;
				}
				if( mCurrentMesh < mMaxMesh ){
					mMesh[mCurrentMesh].vertices = mVertexBuffer;
					mMesh[mCurrentMesh].uv = mCoordBuffer;
					mMesh[mCurrentMesh].colors32 = mColorBuffer;
					
					//mMesh[mCurrentMesh].uv2 = mCoord2Buffer;
	//				if(anyVisibleChanged)
	//					mMesh[mCurrentMesh].colors32 = mColorBuffer;

					if(!shaderInScreenSpace) {
						// TODO: skip this if it's too slow, and instead enlarge the bounds somewhat in InitializeMesh
						RecalculateBounds();
					}
					//Debug.Log("count; " + mVertexBuffer.Length);
					mFilter.sharedMesh = mMesh[mCurrentMesh];
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
#endif

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
        Profiler.EndSample();
#endif
	}
	
	public void RecalculateBounds(Dispatcher sender)
	{
		RecalculateBounds();
	}

	public void RecalculateBounds(bool onlyIfPivotChanged=false)
	{
		//Mesh mesh = mFilter.sharedMesh;
		Mesh mesh = mMesh[mCurrentMesh];
		
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
			//Vector3 camForward = root.InverseTransformDirection(Stm.V1_1.SceneHelper.GetMainCamera(gameObject.layer).transform.forward);
			//diff -= camForward * Vector3.Dot(camForward, diff);
			diff.z = 0.0f;
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
			PatchRenderer r = Stm.V1_1.SceneHelper.SearchUpwardsFor<PatchRenderer>(transform.parent);
			if(r) {
				material = r.material;
			}
		}
	}
#endif

//public float foo1 = 1;
//public float foo2 = 1;
//public float foo3 = 1;
//public float foo4 = 1;
//public float foo5 = 1;
//public float foo6 = 1;
//public float foo7 = 1;
//public float foo8 = 1;
//public float bar1 = 1;
//public float bar2 = 1;
//public float bar3 = 1;
//public float bar4 = 1;
//public float bar5 = 1;
//public float bar6 = 1;
//public float bar7 = 1;
//public float bar8 = 1;

#if IMMEDIATE_FLASH
	void OnRenderObject()
	{
//		if(!isActive)
//			return;
//        if(0 == (Camera.current.cullingMask & (1 << gameObject.layer)))
//            return;
//		if(mQuadMesh == null || material == null)
//			return;
//		
//		//material.SetPass(0);
//		Color c;
//		//Vector3 forward = mRoot.TransformDirection(Vector3.forward);
//		
//		int len = mSprites.Length;
//        for(int i = 0 ; i < len ; i++)
//        {
//		    Sprite s = mSprites[i];
//			if(!s.visible)
//				continue;
//			//Atlas.SymbolImpl symbolImpl = mAtlas.mSymbolBuffer[s.symbol];
//			Symbol symbol = mAtlas.symbols[s.symbol];
//
//			c.r = (float)(        ((int)s.modColor.r * (int)s.animColor.r) * (1.0f/(256.0f*256.0f)));
//			c.g = (float)(        ((int)s.modColor.g * (int)s.animColor.g) * (1.0f/(256.0f*256.0f)));
//			c.b = (float)(        ((int)s.modColor.b * (int)s.animColor.b) * (1.0f/(256.0f*256.0f)));
//			c.a = (float)(alpha * ((int)s.modColor.a * (int)s.animColor.a) * (1.0f/(256.0f*256.0f)));
//			
//			Rect uvs = symbol.UVs;
//
//			//s.material.mainTexture = null;
//			material.color = c;
//			material.SetVector("_UVParams", new Vector4(uvs.xMin, uvs.yMin, uvs.xMax - uvs.xMin, uvs.yMax - uvs.yMin));
//			material.SetPass(0);
//
//			//Vector3 position = s.mRoot.TransformPoint(symbol.Center);
//			//Vector3 position = s.mRoot.position;
//			//Quaternion rotation = Quaternion.LookRotation(forward, s.mRoot.TransformDirection(Vector3.up));
//			//Quaternion rotation = s.mRoot.rotation;
//			//Vector3 scale = Vector3.Scale(s.mRoot.lossyScale, symbol.size);
//			//Vector3 scale = s.mRoot.lossyScale;
//			//Matrix4x4 matrix = Matrix4x4.TRS(position, rotation, scale);
//			//Graphics.DrawMeshNow(mQuadMesh, matrix);
//			Graphics.DrawMeshNow(mQuadMesh, s.mRoot.localToWorldMatrix);
//        }
//		//material.SetPass(0);
//		//Graphics.DrawMeshNow(mQuadMesh, Matrix4x4.TRS(new Vector3(0,1,0), Quaternion.identity, Vector3.one));
    }
#endif

//void Start () {
//        gameObject.AddComponent<Animation>();
//        gameObject.AddComponent<SkinnedMeshRenderer>();
//        SkinnedMeshRenderer renderer = GetComponent<SkinnedMeshRenderer>();
//        Mesh mesh = new Mesh();
//        mesh.vertices = new Vector3[] {new Vector3(-1, 0, 0), new Vector3(1, 0, 0), new Vector3(-1, 5, 0), new Vector3(1, 5, 0)};
//        mesh.uv = new Vector2[] {new Vector2(0, 0), new Vector2(1, 0), new Vector2(0, 1), new Vector2(1, 1)};
//        mesh.triangles = new int[] {0, 1, 2, 1, 3, 2};
//        mesh.RecalculateNormals();
//        renderer.material = new Material(Shader.Find("Diffuse"));
//        BoneWeight[] weights = new BoneWeight[4];
//        weights[0].boneIndex0 = 0;
//        weights[0].weight0 = 1;
//        weights[1].boneIndex0 = 0;
//        weights[1].weight0 = 1;
//        weights[2].boneIndex0 = 1;
//        weights[2].weight0 = 1;
//        weights[3].boneIndex0 = 1;
//        weights[3].weight0 = 1;
//        mesh.boneWeights = weights;
//        Transform[] bones = new Transform[2];
//        Matrix4x4[] bindPoses = new Matrix4x4[2];
//        bones[0] = new GameObject("Lower").transform;
//        bones[0].parent = transform;
//        bones[0].localRotation = Quaternion.identity;
//        bones[0].localPosition = Vector3.zero;
//        bindPoses[0] = bones[0].worldToLocalMatrix * transform.localToWorldMatrix;
//        bones[1] = new GameObject("Upper").transform;
//        bones[1].parent = transform;
//        bones[1].localRotation = Quaternion.identity;
//        bones[1].localPosition = new Vector3(0, 5, 0);
//        bindPoses[1] = bones[1].worldToLocalMatrix * transform.localToWorldMatrix;
//        mesh.bindposes = bindPoses;
//        renderer.bones = bones;
//        renderer.sharedMesh = mesh;
//        AnimationCurve curve = new AnimationCurve();
//        curve.keys = new Keyframe[] {new Keyframe(0, 0, 0, 0), new Keyframe(1, 3, 0, 0), new Keyframe(2, 0.0F, 0, 0)};
//        AnimationClip clip = new AnimationClip();
//        clip.SetCurve("Lower", typeof(Transform), "m_LocalPosition.z", curve);
//        animation.AddClip(clip, "test");
//        animation.Play("test");
//}

}
