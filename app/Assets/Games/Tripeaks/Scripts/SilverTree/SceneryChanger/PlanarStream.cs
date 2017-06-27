using System.Collections;
using System.Collections.Generic;
using UnityEngine;

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
using UnityEngine.Profiling;
#endif

public class PlanarStream
{
	////////////////////////////////////////////////////////////////
	// PUBLIC INTERFACE - DATA
	////////////////////////////////////////////////////////////////

	[System.Serializable]
	public class SpawnInfo
	{
		public Transform prefab;
//		public bool activateInPlace;
//		public Vector3 localPosition; // z should be near 0
//		public Quaternion localRotation = Quaternion.identity;
//		public Vector3 localScale = Vector3.one;
//		public bool setLocalPosition;
//		public bool setLocalRotation;
//		public bool setLocalScale;
		public Vector3 localBoundsCenter; // should be near localPosition
		public Vector3 localBoundsExtents = Vector3.one;
//		public int cost = 1;
#if UNITY_EDITOR
		[System.NonSerialized] public int numAxesEntered;
#endif
	}

	////////////////////////////////////////////////////////////////
	// PUBLIC INTERFACE - FUNCTIONS
	////////////////////////////////////////////////////////////////

	public PlanarStream(Transform root)
	{
		this.root = root;
		origin = root.position;
		worldPlane = new Plane(-root.forward, origin);
		//plane = new Plane(-Vector3.forward, Vector3.zero);
		worldToLocal = root.worldToLocalMatrix;
		streamId = nextStreamId++;
		alternator = ((streamId & 1) != 0);
		Clear();

		if(streamObjectLookup == null)
			streamObjectLookup = new Dictionary<Transform, StreamObject>();

		if(allStreams == null)
			allStreams = new PlanarStream[] { this };
		else
			ArrayHelper.Add(ref allStreams, this);

		if(vitalTransforms == null)
			vitalTransforms = new Transform[0];
	}
	
	//~PlanarStream()
	public void OnDestroy()
	{
		//if(allStreams != null)
		//	ArrayHelper.Remove(ref allStreams, this);

		// hack: assume that all planar streams are getting destroyed, and destroy all static data
		if(allStreams == null)
			allStreams = new PlanarStream[0];
		if(streamObjectLookup != null)
			streamObjectLookup.Clear();
		if(vitalTransforms != null)
			vitalTransforms = new Transform[0];
		nextStreamId = 0;
		pushedStream = null;
	}
	
	public void Clear()
	{
		if(despawnAll)
		{
			despawnAll = false;
			EnterAll();
		}
		for(int i = 0 ; i < NUM_AXES ; i++)
			GetAxis(i).Clear();
	}
	
	public void Add(SpawnInfo[] infos)
	{
		if(infos == null)
			return;

		if(despawnAll)
		{
			despawnAll = false;
			EnterAll();
		}

		List<SpawnInfo> infoList = new List<SpawnInfo>();
		for(int i = 0 ; i < infos.Length ; i++)
		{
			SpawnInfo info = infos[i];
			if(info == null || info.prefab == null || !info.prefab.gameObject.activeSelf)
				continue;
			infoList.Add(info);
		}
		infos = infoList.ToArray();
		infoList = null;

		StreamObject[] streamObjects = new StreamObject[infos.Length];
		for(int i = 0 ; i < infos.Length ; i++)
		{
			SpawnInfo info = infos[i];
//			if(info == null || info.prefab == null)
//				continue;
			//Spawnable spawnablePrefab = (SpawnMgr.Inst != null) ? info.prefab.GetComponent<Spawnable>() : null;
			//streamObjects[i] = new StreamObject(){ spawnInfo = info, prefabSpawnable = spawnablePrefab };
			
			Transform[] transforms;
			if(!info.prefab.CompareTag("NestingStreamObj"))
				transforms = info.prefab.GetComponentsInChildren<Transform>(true);
			else
				transforms = new Transform[]{ info.prefab.transform };
			int numtransformInfos = transforms.Length;
			TransformInfo[] transformInfos = new TransformInfo[numtransformInfos];
			for(int j = 0 ; j < numtransformInfos ; j++)
			{
				Transform t = transforms[j];
				transformInfos[j] = new TransformInfo(){ transform = t, active = t.gameObject.activeSelf };
			}
			
			streamObjects[i] = new StreamObject(){ 
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER) || (UNITY_EDITOR)
			spawnInfo = info,
#endif
			transformInfos = transformInfos };
////			if(info.activateInPlace)
//			{
//                //foreach(Transform child in info.prefab.GetComponentsInChildren<Transform>())
//                foreach(TransformInfo ti in transformInfos)
//                {
//					if(ti.active && !GetDisableDespawnTag(ti.transform))
//						ti.transform.gameObject.SetActive(false);
//                    //if(ti.transform != info.prefab && ti.transform.gameObject.CompareTag("Untagged"))
//					//	ti.transform.gameObject.tag = cannotAutoDespawnTag;
//				}
//			}
		}
		
		for(int i = 0 ; i < NUM_AXES ; i++)
			GetAxis(i).Add(infos, streamObjects);

		// enforce initial setup of which objects are active
		for(int i = 0 ; i < 2 ; i++) // <-- 2 is because of alternator
			UpdateByCamera();
		EnforceAll();
	}

	static void CacheUpdateValues()
	{
		int frameCount = Time.frameCount;
		if(lastUpdateCacheFrameCount == frameCount)
			return;
		lastUpdateCacheFrameCount = frameCount;
		
		Camera cam = Stm.V1_1.SceneHelper.GetMainCamera();
		if(!cam)
			return;
		s_bottomLeftWorldRay = cam.ViewportPointToRay(new Vector3(0,0,0));
		s_bottomRightWorldRay = cam.ViewportPointToRay(new Vector3(1,0,0));
		s_topLeftWorldRay = cam.ViewportPointToRay(new Vector3(0,1,0));
		s_topRightWorldRay = cam.ViewportPointToRay(new Vector3(1,1,0));
	}
	
	public static Bounds GetWorldBoundsOfScreen(Vector3 pointInPlane)
	{
		CacheUpdateValues();
		// todo: replace builtin plane/ray here (slow)
		Plane plane = new Plane(Vector3.forward, pointInPlane);
		float bottomLeftDist;
		float bottomRightDist;
		float topLeftDist;
		float topRightDist;
		plane.Raycast(s_bottomLeftWorldRay, out bottomLeftDist);
		plane.Raycast(s_bottomRightWorldRay, out bottomRightDist);
		plane.Raycast(s_topLeftWorldRay, out topLeftDist);
		plane.Raycast(s_topRightWorldRay, out topRightDist);
		Bounds bounds = new Bounds(s_bottomLeftWorldRay.GetPoint(bottomLeftDist), Vector3.zero);
		bounds.Encapsulate(s_bottomRightWorldRay.GetPoint(bottomRightDist));
		bounds.Encapsulate(s_topLeftWorldRay.GetPoint(topLeftDist));
		bounds.Encapsulate(s_topRightWorldRay.GetPoint(topRightDist));
		return bounds;
	}

//	float FastWorldRaycast(Ray worldRay)
//	{
//		return -(Vector3.Dot(worldRay.origin, worldPlane.normal) + worldPlane.distance) / Vector3.Dot(worldRay.direction, worldPlane.normal);
//	}
	public void UpdateByCamera()
	{
		if(hidePlane)
		{
			DespawnAll();
			return;
		}
		CacheUpdateValues();
		PlanarWindows.GetViewportRays(
			ref s_bottomLeftWorldRay, ref s_bottomRightWorldRay, ref s_topLeftWorldRay, ref s_topRightWorldRay, 
			out bottomLeftWorldRay, out bottomRightWorldRay, out topLeftWorldRay, out topRightWorldRay,
			origin.z
		);
//		FastRay bottomLeftRay = FastRay.CreatePlaneLocal(bottomLeftWorldRay, worldToLocal);
//		FastRay bottomRightRay = FastRay.CreatePlaneLocal(bottomRightWorldRay, worldToLocal);
//		FastRay topLeftRay = FastRay.CreatePlaneLocal(topLeftWorldRay, worldToLocal);
//		FastRay topRightRay = FastRay.CreatePlaneLocal(topRightWorldRay, worldToLocal);
		FastRay bottomLeftRay = new FastRay(worldToLocal.MultiplyPoint3x4(bottomLeftWorldRay.origin), worldToLocal.MultiplyVector(bottomLeftWorldRay.direction));
		FastRay bottomRightRay = new FastRay(worldToLocal.MultiplyPoint3x4(bottomRightWorldRay.origin), worldToLocal.MultiplyVector(bottomRightWorldRay.direction));
		FastRay topLeftRay = new FastRay(worldToLocal.MultiplyPoint3x4(topLeftWorldRay.origin), worldToLocal.MultiplyVector(topLeftWorldRay.direction));
		FastRay topRightRay = new FastRay(worldToLocal.MultiplyPoint3x4(topRightWorldRay.origin), worldToLocal.MultiplyVector(topRightWorldRay.direction));
//		float bottomLeftDist;
//		float bottomRightDist;
//		float topLeftDist;
//		float topRightDist;
//		plane.Raycast(bottomLeftRay, out bottomLeftDist);
//		plane.Raycast(bottomRightRay, out bottomRightDist);
//		plane.Raycast(topLeftRay, out topLeftDist);
//		plane.Raycast(topRightRay, out topRightDist);

		bool isCordyPlane = false;
		Vector3 cordyPos = Vector3.zero;
//		Cordy cordy = Cordy.Inst;
//		if(cordy != null && !cordy.Body.isKinematic)
//		{
//			cordyPos = cordy.Root.localPosition;
//			if(MathUtil.Abs(worldPlane.GetDistanceToPoint(cordyPos)) < /*maxPlaneObjDist*/5.0f)
//			{
//				cordyPos += origin;
//				isCordyPlane = true;
//			}
//		}

		float bottomLeftDist = bottomLeftRay.LocalRayCast();
		float bottomRightDist = bottomRightRay.LocalRayCast();
		float topLeftDist = topLeftRay.LocalRayCast();
		float topRightDist = topRightRay.LocalRayCast();
		int planeHitCount =
		    ((bottomLeftDist>0.0f)?1:0)
		  + ((bottomRightDist>0.0f)?1:0)
		  + ((topLeftDist>0.0f)?1:0)
		  + ((topRightDist>0.0f)?1:0);
		if(planeHitCount >= 4 || isCordyPlane)
		{
			Vector2 bottomLeftPos = bottomLeftDist > 0.0f ? bottomLeftRay.GetPoint2D(bottomLeftDist) : new Vector2(float.MinValue*0.5f, float.MinValue*0.5f);
			Vector2 bottomRightPos = bottomRightDist > 0.0f ? bottomRightRay.GetPoint2D(bottomRightDist) : new Vector2(float.MaxValue*0.5f, float.MinValue*0.5f);
			Vector2 topLeftPos = topLeftDist > 0.0f ? topLeftRay.GetPoint2D(topLeftDist) : new Vector2(float.MinValue*0.5f, float.MaxValue*0.5f);
			Vector2 topRightPos = topRightDist > 0.0f ? topRightRay.GetPoint2D(topRightDist) : new Vector2(float.MaxValue*0.5f, float.MaxValue*0.5f);
//			const float reasonableDistance = 15.0f;
//			Vector2 bottomLeftPos = bottomLeftDist > 0.0f ? bottomLeftRay.GetPoint2D(bottomLeftDist) : new Vector2(-reasonableDistance, -reasonableDistance);
//			Vector2 bottomRightPos = bottomRightDist > 0.0f ? bottomRightRay.GetPoint2D(bottomRightDist) : new Vector2(reasonableDistance, -reasonableDistance);
//			Vector2 topLeftPos = topLeftDist > 0.0f ? topLeftRay.GetPoint2D(topLeftDist) : new Vector2(-reasonableDistance, reasonableDistance);
//			Vector2 topRightPos = topRightDist > 0.0f ? topRightRay.GetPoint2D(topRightDist) : new Vector2(reasonableDistance, reasonableDistance);

//if(((bottomLeftDist>0.0f)?1:0)
//		 + ((bottomRightDist>0.0f)?1:0)
//		 + ((topLeftDist>0.0f)?1:0)
//		 + ((topRightDist>0.0f)?1:0)
//		 < 4)
//		 {
//Debug.LogError("FU " + bottomLeftDist + ", " + bottomRightDist + ", " + topLeftDist + ", " + topRightDist);
//		 }

			// ensure collision is spawned around the player no matter where the camera is looking
			if(isCordyPlane)
			{
				bottomLeftPos.x = MathUtil.Min(bottomLeftPos.x, cordyPos.x-1.0f);
				topRightPos.x = MathUtil.Max(topRightPos.x, cordyPos.x+1.0f);
				bottomLeftPos.y = MathUtil.Min(bottomLeftPos.y, cordyPos.y-1.0f);
				topRightPos.y = MathUtil.Max(topRightPos.y, cordyPos.y+1.0f);

//				topLeftPos.x = MathUtil.Min(topLeftPos.x, cordyPos.x-1.0f);
//				bottomRightPos.x = MathUtil.Max(bottomRightPos.x, cordyPos.x+1.0f);
//				bottomRightPos.y = MathUtil.Min(bottomRightPos.y, cordyPos.y-1.0f);
//				topLeftPos.y = MathUtil.Max(topLeftPos.y, cordyPos.y+1.0f);
			}

//			Update(MathUtil.Min(bottomLeftPos.x, topLeftPos.x),
//			       MathUtil.Max(bottomRightPos.x, topRightPos.x),
//			       MathUtil.Min(bottomLeftPos.y, bottomRightPos.y),
//			       MathUtil.Max(topLeftPos.y, topRightPos.y)
//			);
			Update(bottomLeftPos, bottomRightPos, topLeftPos, topRightPos);
		}
		else if(planeHitCount <= 0)
		{
			DespawnAll();
		}
	}

	//int updateAxisIndex;

//	public void Update(float xLeft, float xRight, float yBottom, float yTop)
	public void Update(Vector2 bottomLeftPos, Vector2 bottomRightPos, Vector2 topLeftPos, Vector2 topRightPos)
	{
		alternator = !alternator;
		
		PushStream();
		//PushRoot();
		X.Update(MathUtil.Min(bottomLeftPos.x, topLeftPos.x), MathUtil.Max(bottomRightPos.x, topRightPos.x));
		if(alternator)
		{
			Y.Update(MathUtil.Min(bottomLeftPos.y, bottomRightPos.y), MathUtil.Max(topLeftPos.y, topRightPos.y));
			if(NUM_AXES > 2)
				YL10.Update(bottomLeftPos, bottomRightPos, topLeftPos, topRightPos);
			if(NUM_AXES > 3)
				YR10.Update(bottomLeftPos, bottomRightPos, topLeftPos, topRightPos);
			//for(int i = 4 ; i < NUM_AXES ; i++)
			//	GetAxis(i).Update(bottomLeftPos, bottomRightPos, topLeftPos, topRightPos);
		}
		//updateAxisIndex++;
		//if(updateAxisIndex >= NUM_AXES)
		//	updateAxisIndex = 0;
		//GetAxis(updateAxisIndex).Update(p0, p1, p2, p3);
		if(despawnAll)
		{
			despawnAll = false;
			EnterAll();
		}
		//PopRoot();
		PopStream();
	}

	static public void UpdateAllSecondary(int index, Vector3 pos, float extent)
	{
		float xMin = pos.x - extent;
		float yMin = pos.y - extent;
		float xMax = pos.x + extent;
		float yMax = pos.y + extent;
		for(int i = 0 ; i < allStreams.Length ; i++)
		{
			PlanarStream stream = allStreams[i];
			if(stream.root && stream.root.gameObject.activeInHierarchy)
			{
				if(MathUtil.Abs(stream.worldPlane.GetDistanceToPoint(pos)) < 5.0f)
				{
					stream.UpdateSecondary(index, xMin, yMin, xMax, yMax);
				}
			}
		}
	}
	
	public void UpdateSecondary(int index, float xMin, float yMin, float xMax, float yMax)
	{
//Debug.Log("UpdateSecondary: index = " + index + ", xMin = " + xMin + ", yMin = " + yMin + ", xMax = " + xMax + ", yMax = " + yMax);
		PushStream();
		X.UpdateSecondary(index, xMin, xMax);
		if(!alternator)
			Y.UpdateSecondary(index, yMin, yMax);
		PopStream();
	}
	
	public void DespawnAll()
	{
		if(!despawnAll)
		{
			despawnAll = true;
			PushStream();

			ExitAll();

			PopStream();
		}
	}
	
//	// hack for unity 4 support
//	static void SetActiveInHierarchy(Transform t, bool active)
//	{
//		GameObject go = t.gameObject;
//		if(active != go.activeSelf)
//		{
//			go.SetActive(active);
//		}
//		if(active && !go.activeInHierarchy)
//		{
//			Transform parent = t.parent.parent;
//			while(parent && !parent.gameObject.activeInHierarchy)
//			{
//				parent = parent.parent;
//			}
//			t.parent = parent;
//		}
//	}

	public static bool DisableAutomaticDespawn(Transform t, bool active=true)
	{
		if(t == null)
			return true;
		bool wasAlreadyDisabled = GetDisableDespawnTag(t);
		foreach(Transform t2 in t.GetComponentsInChildren<Transform>(true))
		{
			SetDisableDespawnTag(t2);
			if(t2.gameObject.activeSelf != active)
			{
				//SetActiveInHierarchy(t2, active);
				t2.gameObject.SetActive(active);
			}
		}
		// hack for unity 4: also disable despawn for all parents
		Transform tp = t.parent;
		while(tp != null)
		{
			SetDisableDespawnTag(tp);
			if(active)
			{
				tp.gameObject.SetActive(active);
			}
			tp = tp.parent;
		}
		return wasAlreadyDisabled;
	}

	public static void ReEnableAutomaticDespawn(Transform t, bool reactivate=false)
	{
		if(t == null)
			return;
		if(streamObjectLookup != null)
		{
			foreach(Transform t2 in t.GetComponentsInChildren<Transform>(true))
			{
				ClearDisableDespawnTag(t2, true);
			}
			// hack for unity 4: also re-enable despawn for all parents (unless the despawn chain is broken)
			Transform tp = t.parent;
			while(tp != null)
			{
				if(GetDisableDespawnTag(tp))
				{
					ClearDisableDespawnTag(tp, !tp.gameObject.activeSelf);
				}
				else
				{
					break;
				}
				tp = tp.parent;
			}
		}
		if(reactivate)
		{
			t.gameObject.SetActive(true);
			//foreach(Transform t2 in t.GetComponentsInChildren<Transform>(true))
			//	t2.gameObject.SetActive(true);
		}
	}
	
	public static void CacheStreamObjectLookup(Transform t)
	{
        if(streamObjectLookup == null || t == null)
            return;
		foreach(Transform t2 in t.GetComponentsInChildren<Transform>(true))
			if(GetOrFindAndCacheStreamObject(t2) == null)
				streamObjectLookup[t2] = null;
	}
	
	public void HidePlane(bool hide)
	{
		hidePlane = hide;
	}

#if UNITY_EDITOR
	public static void DeleteAllUnused()
	{
		for(int i = 0 ; i < allStreams.Length ; i++)
		{
			PlanarStream stream = allStreams[i];
			if(stream.root && stream.root.gameObject.activeInHierarchy)
				stream.DeleteUnused();
		}
//		GroundFX.DeleteEntriesOfDeletedTiles();
	}
#endif
	
	public static int RegisterVitalTransform(Transform t)
	{
		if(!t)
			return -1;
		DisableAutomaticDespawn(t);
		if(vitalTransforms.Length >= (sizeof(int)<<3)/NUM_BITS_SECONDARY)
		{
#if UNITY_EDITOR
			Debug.LogError("Registered too many vital plane objects! " + Stm.V1_1.SceneHelper.FullPathName(t));
#endif
			return -1;
		}
		ArrayHelper.Add(ref vitalTransforms, t);
		
		for(int i = 0 ; i < allStreams.Length ; i++)
		{
			PlanarStream stream = allStreams[i];
			if(stream.root && stream.root.gameObject.activeInHierarchy)
			{
				for(int j = 0 ; j < NUM_AXES_SECONDARY ; j++)
				{
					Axis axis = stream.GetAxis(j);
					AxisDirection forward = new AxisDirection(true);
					AxisDirection backward = new AxisDirection(false);
					forward.FixupSubAxisAfterAdd(axis.forward);
					backward.FixupSubAxisAfterAdd(axis.backward);
					axis.forwardSecondary.Add(forward);
					axis.backwardSecondary.Add(backward);
				}
			}
		}
		
		return vitalTransforms.Length - 1;
	}
	
	////////////////////////////////////////////////////////////////
	// PRIVATE IMPLEMENTATION - DATA
	////////////////////////////////////////////////////////////////

	Axis X = new Axis(new Vector2(1f,0f), true);
	Axis Y = new Axis(new Vector2(0f,1f), true);
	Axis YL10 = new Axis(new Vector2(-0.18f,1f), false);
	Axis YR10 = new Axis(new Vector2(0.18f,1f), false);
	//Axis XL10 = new Axis(new Vector2(1f,0.18f), false);
	//Axis XR10 = new Axis(new Vector2(1f,-0.18f), false);
	Axis GetAxis(int index) {
		if(index == 0) { return X; }
		if(index == 1) { return Y; }
		if(index == 2) { return YL10; }
		/*if(index == 3)*/ { return YR10; }
//		if(index == 4) { return XL10; }
//		/*if(index == 5)*/ { return XR10; }
	}
	//public const int NUM_AXES = 6;
	public const int NUM_AXES = 4;
	public const int NUM_DIRECTIONS = 2;
	public const int NUM_AXES_SECONDARY = 2;
	public const int NUM_BITS_SECONDARY = 3; // enough bits to hold NUM_AXES_SECONDARY*NUM_DIRECTIONS

	public const string disableAutoDespawnTag = "NoAutoDespawn";
    public const int kLayerNoAutoDespawn = 20;
	
	Transform root;
	Vector3 origin;
	Plane worldPlane;
	//Plane plane;
	Matrix4x4 worldToLocal;
	bool alternator;
	public readonly int streamId;
	static int nextStreamId;
	static PlanarStream[] allStreams;
	static Dictionary<Transform, StreamObject> streamObjectLookup;
	static Transform[] vitalTransforms;
	//Transform savedRoot;
	//static Transform pushedRoot;
	PlanarStream savedStream;
	static PlanarStream pushedStream;

	internal static int lastUpdateCacheFrameCount;
	internal static Ray s_bottomLeftWorldRay;
	internal static Ray s_bottomRightWorldRay;
	internal static Ray s_topLeftWorldRay;
	internal static Ray s_topRightWorldRay;
	internal Ray bottomLeftWorldRay;
	internal Ray bottomRightWorldRay;
	internal Ray topLeftWorldRay;
	internal Ray topRightWorldRay;

	bool despawnAll;
	bool hidePlane;

	partial/*data*/ class Axis
	{
		public AxisDirection forward = new AxisDirection(true); // on X axis this is left side of objects, in positive planar coords
		public AxisDirection backward = new AxisDirection(false); // on X axis this is right side of objects, in negative planar coords
		public List<AxisDirection> forwardSecondary; // for secondary vital windows (optional)
		public List<AxisDirection> backwardSecondary; // for secondary vital windows (optional)
		AxisDirection GetDirection(int index) { return (index == 0) ? forward : backward; }
		public Vector3 vector;
	}

	partial/*data*/ class AxisDirection
	{
		public AxisEntry[] entries;
		public int nextIndex;
		public readonly bool isForward;
	}

	struct AxisEntry
	{
		public float edge;
		public StreamObject obj;
	}

	struct TransformInfo
	{
		public Transform transform;
		public bool active;
	}

	partial/*data*/ class StreamObject
	{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER) || (UNITY_EDITOR)
		[System.NonSerialized] public SpawnInfo spawnInfo;
#endif
		//public UnityEngine.Transform spawnedTransform;
		public TransformInfo[] transformInfos;
		//public Spawnable prefabSpawnable;
		//public Spawnable spawnedSpawnable;
		public int numAxesEntered; // when this equals NUM_AXES*NUM_DIRECTIONS, the object is onscreen
		public int onscreenCount;
		public int subAxesEntered; // for secondary vital windows (which always have NUM_AXES_SECONDARY axes each) (bitfield with space for 10 dynamic windows)
#if UNITY_EDITOR
		[System.NonSerialized] public bool used;
#endif
	}

	////////////////////////////////////////////////////////////////
	// PRIVATE IMPLEMENTATION - FUNCTIONS
	////////////////////////////////////////////////////////////////

	
	void EnterAll()
	{
		GetAxis(0).EnterAll();
	}

	void ExitAll()
	{
		GetAxis(0).ExitAll();
	}

	public void EnforceAll()
	{
		GetAxis(0).EnforceAll();
	}

	StreamObject FindStreamObject(Transform t)
	{
		return GetAxis(0).FindStreamObject(t);
	}

#if UNITY_EDITOR
	public void DeleteUnused()
	{
		GetAxis(0).DeleteUnused();
	}
#endif
	
	static StreamObject GetOrFindAndCacheStreamObject(Transform t)
	{
		StreamObject obj;
		if(streamObjectLookup.TryGetValue(t, out obj))
			return obj;
		for(int i = 0 ; i < allStreams.Length ; i++)
		{
			PlanarStream stream = allStreams[i];
			if(stream.root && stream.root.gameObject.activeInHierarchy)
			{
				obj = stream.FindStreamObject(t);
				if(obj != null)
				{
					streamObjectLookup[t] = obj;
					return obj;
				}
			}
		}
		return null;
	}

	public static void StaticEnforceAll()
	{
		if(allStreams == null) {
			return;
		}
		for(int i = 0 ; i < allStreams.Length ; i++)
		{
			PlanarStream stream = allStreams[i];
			if(stream.root && stream.root.gameObject.activeInHierarchy)
			{
				stream.EnforceAll();
			}
		}
	}

	internal static void SetDisableDespawnTag(Transform t)
	{
		if(GetDisableDespawnTag(t))
			return;
		GameObject go = t.gameObject;
		if(go.CompareTag("Untagged"))
			go.tag = disableAutoDespawnTag;
		else if(!go.CompareTag("Player")) // <-- 'if' check is a hack to not mess with the player's tag (fixes hintbot changing player root's layer if hintbot is talked to twice in level1-3, which breaks the level ending)
			go.layer = kLayerNoAutoDespawn;
	}

	// also enforces enabled/disabled status based on whether it's currently onscreen
	internal static void ClearDisableDespawnTag(Transform t, bool allowEnforce)
	{
		bool enforce = false;
		GameObject go = t.gameObject;
		if(go.CompareTag(disableAutoDespawnTag))
		{
			go.tag = "Untagged";
			enforce = true;
		}
		if(go.layer == kLayerNoAutoDespawn)
		{
			go.layer = CollisionHelper.kLayerDefault;
			enforce = true;
		}
		if(enforce && allowEnforce)
		{
			StreamObject obj = GetOrFindAndCacheStreamObject(t);
			if(obj != null)
			{
				obj.Enforce();
			}
		}
	}
	
	public static bool GetDisableDespawnTag(Transform t)
	{
		GameObject go = t.gameObject;
		return (go.CompareTag(disableAutoDespawnTag) || go.layer == kLayerNoAutoDespawn);
	}

//	void PushRoot()
//	{
//		savedRoot = pushedRoot;
//		pushedRoot = root;
//	}
//
//	void PopRoot()
//	{
//		pushedRoot = savedRoot;
//		savedRoot = null;
//	}


	void PushStream()
	{
		savedStream = pushedStream;
		pushedStream = this;
	}

	void PopStream()
	{
		pushedStream = savedStream;
		savedStream = null;
	}

	partial/*functions*/ class Axis
	{
		public void Clear()
		{
			for(int i = 0 ; i < NUM_DIRECTIONS ; i++)
				GetDirection(i).Clear();
//			if(backwardSecondary != null)
//			{
//				int count = backwardSecondary.Count;
//				for(int i = 0 ; i < count ; i++)
//					backwardSecondary[i].Clear();
//				//count = forwardSecondary.Count;
//				for(int i = 0 ; i < count ; i++)
//					forwardSecondary[i].Clear();
//			}
		}
		
		public void Add(SpawnInfo[] infos, StreamObject[] streamObjects)
		{
			for(int i = 0 ; i < NUM_DIRECTIONS ; i++)
				GetDirection(i).Add(infos, streamObjects, vector);
			if(backwardSecondary != null)
			{
				int count = backwardSecondary.Count;
				for(int i = 0 ; i < count ; i++)
					backwardSecondary[i].FixupSubAxisAfterAdd(backward);
				//count = forwardSecondary.Count;
				for(int i = 0 ; i < count ; i++)
					forwardSecondary[i].FixupSubAxisAfterAdd(forward);
			}
		}
		
		public void Update(float minCoord, float maxCoord)
		{
			// advancing backwards first is important,
			// because it prevents spawning and immediately unspawning
			// anything that we completely advanced past in 1 frame.
			backward.AdvanceEdge(-minCoord);
			forward.AdvanceEdge(maxCoord);
		}

		public void Update(Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3)
		{
			float c0 = p0.x * vector.x + p0.y * vector.y;
			float c1 = p1.x * vector.x + p1.y * vector.y;
			float c2 = p2.x * vector.x + p2.y * vector.y;
			float c3 = p3.x * vector.x + p3.y * vector.y;
//			float min = MathUtil.Min(c0, MathUtil.Min(c1, MathUtil.Min(c2, c3)));
//			float max = MathUtil.Max(c0, MathUtil.Max(c1, MathUtil.Max(c2, c3)));
			float min = c0;
			float max = c0;
			if(c1 < c0)
				min = c1;
			else
				max = c1;
			if(c2 < min)
				min = c2;
			else if(c2 > max)
				max = c2;
			if(c3 < min)
				min = c3;
			else if(c3 > max)
				max = c3;
			Update(min, max);
		}
		
		public void UpdateSecondary(int i, float minCoord, float maxCoord)
		{
			//int count = backwardSecondary.Count;
			//for(int i = 0 ; i < count ; i++)
				backwardSecondary[i].AdvanceEdgeSecondary(-minCoord, (NUM_AXES_SECONDARY*NUM_DIRECTIONS)<<(i*NUM_BITS_SECONDARY), 1<<(i*NUM_BITS_SECONDARY), ((1<<NUM_BITS_SECONDARY)-1)<<(i*NUM_BITS_SECONDARY));

			//count = forwardSecondary.Count;
			//for(int i = 0 ; i < count ; i++)
				forwardSecondary[i].AdvanceEdgeSecondary(maxCoord, (NUM_AXES_SECONDARY*NUM_DIRECTIONS)<<(i*NUM_BITS_SECONDARY), 1<<(i*NUM_BITS_SECONDARY), ((1<<NUM_BITS_SECONDARY)-1)<<(i*NUM_BITS_SECONDARY));
		}

		public void EnterAll()
		{
			GetDirection(0).EnterAll();
		}

		public void ExitAll()
		{
			GetDirection(0).ExitAll();
		}

		public void EnforceAll()
		{
			GetDirection(0).EnforceAll();
		}

		public StreamObject FindStreamObject(Transform t)
		{
			return GetDirection(0).FindStreamObject(t);
		}

#if UNITY_EDITOR
		public void DeleteUnused()
		{
			GetDirection(0).DeleteUnused();
		}
#endif

		public Axis(Vector2 directionVector, bool initSecondary)
		{
			vector = directionVector.normalized;
			if(initSecondary)
			{
				forwardSecondary = new List<AxisDirection>();
				backwardSecondary = new List<AxisDirection>();
			}
		}

#if UNITY_EDITOR
		public void DrawGizmos(Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3)
		{
			float c0 = Vector3.Dot(p0, vector);
			float c1 = Vector3.Dot(p1, vector);
			float c2 = Vector3.Dot(p2, vector);
			float c3 = Vector3.Dot(p3, vector);
			float min = MathUtil.Min(c0, MathUtil.Min(c1, MathUtil.Min(c2, c3)));
			float max = MathUtil.Max(c0, MathUtil.Max(c1, MathUtil.Max(c2, c3)));
			Vector3 perp = new Vector3(vector.y, -vector.x, vector.z);
			Gizmos.DrawLine(vector * min - perp * 1000f, vector * min + perp * 1000f);
			Gizmos.DrawLine(vector * max - perp * 1000f, vector * max + perp * 1000f);
		}
#endif
	}

	partial/*functions*/ class AxisDirection
	{
		AxisEntry next;
		AxisEntry prev;
        
		public void AdvanceEdge(float coord)
		{
			// note: no need to check ranges, because there are guard entries at +/- infinity
			// note: no need to check isForward, because backward direction uses negative coords

			if(coord >= next.edge)
			{
				do {
					next.obj.OnAxisEnter();
					nextIndex++;
					next = entries[nextIndex];
				} while(coord >= next.edge);
				prev = entries[nextIndex-1];
			}
			else if(coord < prev.edge)
			{
				do {
					prev.obj.OnAxisExit();
					nextIndex--;
					prev = entries[nextIndex-1];
				} while(coord < prev.edge);
				next = entries[nextIndex];
			}
		}
		
		public void AdvanceEdgeSecondary(float coord, int limit, int increment, int mask)
		{
//Debug.Log("AdvanceEdgeSecondary: coord = " + coord + ", isForward = " + isForward + ", next.edge = " + next.edge + ", prev.edge = " + prev.edge + ", limit = " + limit + ", increment = " + increment + ", mask = " + mask);
			if(coord >= next.edge)
			{
				do {
					next.obj.OnSubAxisEnter(limit, increment, mask);
					nextIndex++;
					next = entries[nextIndex];
				} while(coord >= next.edge);
				prev = entries[nextIndex-1];
			}
			else if(coord < prev.edge)
			{
				do {
					prev.obj.OnSubAxisExit(limit, increment, mask);
					nextIndex--;
					prev = entries[nextIndex-1];
				} while(coord < prev.edge);
				next = entries[nextIndex];
			}
		}
		
		public void Clear()
		{
			entries = new AxisEntry[] {
				new AxisEntry() { edge = -Mathf.Infinity },
				new AxisEntry() { edge = Mathf.Infinity }
			};
			nextIndex = 1;
			next = entries[nextIndex];
			prev = entries[nextIndex-1];
		}
		
		public void Add(SpawnInfo[] infos, StreamObject[] streamObjects, Vector3 vector)
		{
			{
				// first reset existing entered counts, if any
				int lengthMinusOne = entries.Length - 1;
				for(int i = 1 ; i < lengthMinusOne ; i++)
				{
					StreamObject obj = entries[i].obj;
					while(obj.numAxesEntered > 0)
						obj.OnAxisExit();
				}
			}

			int length = infos.Length;
			AxisEntry[] newEntries = new AxisEntry[length];
			for(int i = 0 ; i < length ; i++)
			{
				SpawnInfo spawnInfo = infos[i];
				float center = Vector3.Dot(spawnInfo.localBoundsCenter, vector);
				float e0 = Vector3.Dot(vector, spawnInfo.localBoundsExtents);
				float e1 = Vector3.Dot(vector, new Vector3(-spawnInfo.localBoundsExtents.x, spawnInfo.localBoundsExtents.y, spawnInfo.localBoundsExtents.z));
				float e2 = Vector3.Dot(vector, new Vector3(spawnInfo.localBoundsExtents.x, -spawnInfo.localBoundsExtents.y, spawnInfo.localBoundsExtents.z));
				float e3 = Vector3.Dot(vector, new Vector3(-spawnInfo.localBoundsExtents.x, -spawnInfo.localBoundsExtents.y, spawnInfo.localBoundsExtents.z));
				float edge;
				if(isForward)
				{
					edge = center + MathUtil.Min(e0, MathUtil.Min(e1, MathUtil.Min(e2, e3)));
				}
				else
				{
					edge = center + MathUtil.Max(e0, MathUtil.Max(e1, MathUtil.Max(e2, e3)));
					edge = -edge; // backwards edges are negative, to simplify AdvanceEdge
				}
				newEntries[i] = new AxisEntry() { edge = edge, obj = streamObjects[i] };
			}
			//ArrayHelper.AddRange(ref entries, newEntries);
			AddRange(ref entries, newEntries);
			//System.Array.Sort(entries, (a,b) => { return a.edge.CompareTo(b.edge); });
			System.Array.Sort(entries, EdgeCompare);
			nextIndex = 1;
			next = entries[nextIndex];
			prev = entries[nextIndex-1];
//Debug.Log("ADD!!! entries.Length = " + entries.Length);
		}
		
		static int EdgeCompare(AxisEntry a, AxisEntry b)
		{
			return a.edge.CompareTo(b.edge);
		}

		public void FixupSubAxisAfterAdd(AxisDirection underlying)
		{
			entries = underlying.entries;
//Debug.Log("FIXUP!!! entries.Length = " + entries.Length);
			nextIndex = 1;
			next = entries[nextIndex];
			prev = entries[nextIndex-1];
		}
		
		// hack for flash
		static void AddRange(ref AxisEntry[] array, AxisEntry[] newElements)
		{
			if(newElements.Length != 0)
			{
				AxisEntry[] newArray = new AxisEntry[array.Length + newElements.Length];
				System.Array.Copy(array, 0, newArray, 0, array.Length);
				System.Array.Copy(newElements, 0, newArray, array.Length, newElements.Length);
				array = newArray;
			}
		}

		public AxisDirection(bool forward)
		{
			isForward = forward;
		}

		public void EnterAll()
		{
			int lengthMinusOne = entries.Length - 1;
			for(int i = 1 ; i < lengthMinusOne ; i++)
				entries[i].obj.OnAxisEnter();
		}

		public void ExitAll()
		{
			int lengthMinusOne = entries.Length - 1;
			for(int i = 1 ; i < lengthMinusOne ; i++)
				entries[i].obj.OnAxisExit();
		}

		public void EnforceAll()
		{
			int lengthMinusOne = entries.Length - 1;
			for(int i = 1 ; i < lengthMinusOne ; i++)
				entries[i].obj.Enforce();
		}

		public StreamObject FindStreamObject(Transform t)
		{
			int lengthMinusOne = entries.Length - 1;
			for(int i = 1 ; i < lengthMinusOne ; i++)
			{
				StreamObject obj = entries[i].obj;
				foreach(TransformInfo ti in obj.transformInfos)
				{
					if(ti.transform == t)
						return obj;
				}
			}
			return null;
		}

#if UNITY_EDITOR
		public void DeleteUnused()
		{
			int lengthMinusOne = entries.Length - 1;
			for(int i = 1 ; i < lengthMinusOne ; i++)
			{
				StreamObject obj = entries[i].obj;
				if(!obj.used)
				{
					foreach(TransformInfo ti in obj.transformInfos)
					{
						if(ti.transform)
							UnityEngine.Object.DestroyImmediate(ti.transform.gameObject);
					}
				}
			}
		}
#endif

	}

	partial/*functions*/ class StreamObject
	{
		public void OnAxisEnter()
		{
//		Debug.Log(numAxesEntered + " -> " + (numAxesEntered+1) + " / " + (NUM_AXES*NUM_DIRECTIONS));
#if UNITY_EDITOR
			spawnInfo.numAxesEntered = numAxesEntered + 1;
//			if(numAxesEntered >= limit)
//				Debug.LogError("INTERNAL LOGIC ERROR " + numAxesEntered);
#endif
			if(++numAxesEntered == NUM_AXES*NUM_DIRECTIONS && ++onscreenCount == 1)
				Spawn();
		}
		
		public void OnAxisExit()
		{
//		Debug.Log(numAxesEntered + " -> " + (numAxesEntered-1) + " / " + (limit));
#if UNITY_EDITOR
			spawnInfo.numAxesEntered = numAxesEntered - 1;
#endif
			if(numAxesEntered-- == NUM_AXES*NUM_DIRECTIONS && onscreenCount-- == 1)
				Despawn();
		}
		
		public void OnSubAxisEnter(int limit, int increment, int mask)
		{
			int masked = ((subAxesEntered + increment) & mask);
			subAxesEntered = masked | (subAxesEntered & ~mask);
//Debug.Log("OnSubAxisEnter: masked = " + masked + ", subAxesEntered = " + subAxesEntered + ", limit = " + limit + ", increment = " + increment + ", mask = " + mask);
			if(masked == limit && ++onscreenCount == 1)
				Spawn();
		}
		
		public void OnSubAxisExit(int limit, int decrement, int mask)
		{
			int oldMasked = subAxesEntered & mask;
			subAxesEntered = ((subAxesEntered - decrement) & mask) | (subAxesEntered & ~mask);
//Debug.Log("OnSubAxisExit: oldMasked = " + oldMasked + ", subAxesEntered = " + subAxesEntered + ", limit = " + limit + ", decrement = " + decrement + ", mask = " + mask);
			if(oldMasked == limit && onscreenCount-- == 1)
				Despawn();
		}
		
		public void Spawn()
		{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
			Profiler.BeginSample("Spawn " + (spawnInfo.prefab ? spawnInfo.prefab.name : "?"));
#endif
#if UNITY_EDITOR
			used = true;
#endif
			/*if(prefabSpawnable != null)
			{
				spawnedSpawnable = SpawnMgr.Inst.SpawnObject2(prefabSpawnable,
					spawnInfo.localPosition,
					spawnInfo.localRotation,
					spawnInfo.localScale,
					pushedRoot
				);
				if(spawnedSpawnable != null)
					spawnedTransform = spawnedSpawnable.Root;
			}
			else*/ //if(spawnInfo.prefab != null)
			{
//                if(spawnInfo.activateInPlace)
                {
                    //foreach(Transform t in spawnInfo.prefab.GetComponentsInChildren<Transform>(true))
                    int numTransforms = transformInfos.Length;
                    for(int i = 0 ; i < numTransforms ; i++)
                    {
						TransformInfo ti = transformInfos[i];
						if(ti.transform)
						{
							GameObject go = ti.transform.gameObject;
							if(!go.activeSelf)
							{
								if(ti.active && !GetDisableDespawnTag(ti.transform)) {
									go.SetActive(true);
									if(go.tag == "CutsceneDisabled") {
										Debug.Log("enabling:" + go.name);
									}
								}
									
							}
//							else
//							{
//								// someone activated the transform while its parent was despawned,
//								// so leave it alone from now on
//								//ti.transform = null;
//								//transformInfos[i] = ti;
//								DisableAutomaticDespawn(ti.transform);
//							}
						}
					}
                }
//                else
//                {
//                    spawnedTransform = Stm.V1_1.SceneHelper.Duplicate<Transform>(spawnInfo.prefab);
//                    if(spawnedTransform != null)
//                    {
//                        //spawnedTransform.parent = pushedRoot;
//                        if(spawnInfo.setLocalPosition)
//                            spawnedTransform.localPosition = spawnInfo.localPosition;
//                        if(spawnInfo.setLocalRotation)
//                            spawnedTransform.localRotation = spawnInfo.localRotation;
//                        if(spawnInfo.setLocalScale)
//                            spawnedTransform.localScale = spawnInfo.localScale;
//                    }
//                }
			}
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
			Profiler.EndSample();
#endif
		}
		
		public void Despawn(bool isEnforce=false)
		{
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
			Profiler.BeginSample("Despawn " + (spawnInfo.prefab ? spawnInfo.prefab.name : "?"));
#endif
//            if(spawnInfo.activateInPlace && spawnInfo.prefab != null)
            //if(spawnInfo.prefab != null)
            {
				int numTransforms = transformInfos.Length;
				for(int i = 0 ; i < numTransforms ; i++)
				{
					TransformInfo ti = transformInfos[i];
					if(ti.transform)
					{
						if(!GetDisableDespawnTag(ti.transform))
						{
							GameObject go = ti.transform.gameObject;
							if(go.activeSelf)
							{
//if(PlanarStream.pushedStream != null && go.name == "Body") {
//var spawninfos = PlanarStream.pushedStream.root.GetComponent<PlanarInstantiator>().spawnInfo;
//int index = -1;
//for(int ii = 0 ; ii < spawninfos.Length ; ii++)
//{
//	foreach(TransformInfo tii in transformInfos)
//	{
//		if(spawninfos[ii].prefab == tii.transform
//		|| spawninfos[i] == spawnInfo)
//		{
//			index = ii;
//			break;
//		}
//	}
//}
//Debug.Log("Despawned " + go.name + " at index " + index + " of " + PlanarStream.pushedStream.root.name + "\n" + spawninfos.Length);
//}
								go.SetActive(false);

								if(!ti.active && !isEnforce)
								{
									// someone activated a transform that was inactive last time,
									// so remember to reactivate it next time
									ti.active = true;
									transformInfos[i] = ti;
								}
							}
							else
							{
								if(ti.active && !isEnforce)
								{
									// someone deactivated a transform that was active last time,
									// so remember to not reactivate it next time
									ti.active = false;
									transformInfos[i] = ti;
								}
							}
						}
//						else
//						{
//							// hack for unity 4: ensure DisableAutomaticDespawn children remain active if parent is despawned
//							// TODO: maybe this results in the children becoming inactive and then active again within the same frame? should check if that causes any bugs
//							if(ti.active)
//							{
//								SetActiveInHierarchy(ti.transform, true);
//							}
//						}
					}
				}
            }
//            else
//            {
//            if(!spawnInfo.activateInPlace)
//                /*if(spawnedSpawnable != null)
//                {
//                    SpawnMgr.Inst.Unspawn(spawnedSpawnable);
//                    spawnedSpawnable = null;
//                    spawnedTransform = null;
//                }
//                else*/ if(spawnedTransform != null)
//                {
//                    UnityEngine.Object.Destroy(spawnedTransform.gameObject);
//                    spawnedTransform = null;
//                }
//            }
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
			Profiler.EndSample();
#endif
		}

		public void Enforce()
		{
			if(onscreenCount >= 1)
				Spawn();
			else
				Despawn(true);
		}
	}

#if UNITY_EDITOR
	public void DrawAxisGizmos(Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3)
	{
		for(int i = 0 ; i < NUM_AXES ; i++)
			GetAxis(i).DrawGizmos(p0, p1, p2, p3);
	}
#endif


}
