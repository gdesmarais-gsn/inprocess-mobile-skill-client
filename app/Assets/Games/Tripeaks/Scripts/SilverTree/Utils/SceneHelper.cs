using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
using UnityEngine.Profiling;
#endif

namespace Stm.V1_1
{
	public static class SceneHelper
	{
		public static T SearchUpwardsFor<T>(Transform t) where T : Component
		{
			while(t)
			{
				T rv = t.GetComponent<T>();
				if(rv != null) {
					return rv;
				}
				t = t.parent;
			}
			return null;
		}

		public static T SearchUpwardsForHighest<T>(Transform t) where T : Component
		{
			T rv = null;
			while(t)
			{
				T c = t.GetComponent<T>();
				if(c != null) {
					rv = c;
				}
				t = t.parent;
			}
			return rv;
		}

		public static T SearchUpwardsFor<T>(Transform t, Transform stop) where T : Component
		{
			while(t && t != stop)
			{
				T rv = t.GetComponent<T>();
				if(rv != null) {
					return rv;
				}
				t = t.parent;
			}
			return t ? t.GetComponent<T>() : null;
		}

	//	public static T GetComponentInParents<T>(Transform t) where T : Component
	//	{
	//		return SearchUpwardsFor<T>(t.parent);
	//	}
		
		public static T Find<T>() where T : UnityEngine.Object
		{
			return (T)GameObject.FindObjectOfType(typeof(T));	
		}
		
		public static string FullPathName(Transform t)
		{
			if(t.parent == null)
				return t.name;	
			else
				return FullPathName(t.parent) + "." + t.name;	
		}

		public static string GetSearchablePathName(Transform t, Transform root)
		{
			if(t == root || t == null)
				return null;
			string parentPath = GetSearchablePathName(t.parent, root);
			if(parentPath == null)
				return t.name;
			else
				return parentPath + "/" + t.name;
		}

	    public static T Duplicate<T>(T prefab) where T : UnityEngine.Object
	    {
			if(!prefab) { return null; }
	        return UnityEngine.Object.Instantiate(prefab) as T;
	    }

	    public static T Duplicate<T>(T prefab, Vector3 position) where T : UnityEngine.Object
	    {
			if(!prefab) { return null; }
	        return UnityEngine.Object.Instantiate(prefab, position, Quaternion.identity) as T;
	    }

	    public static T Duplicate<T>(T prefab, Vector3 position, Quaternion rotation) where T : UnityEngine.Object
	    {
			if(!prefab) { return null; }
	        return UnityEngine.Object.Instantiate(prefab, position, rotation) as T;
	    }

	    public static Transform DuplicateInHierarchy(Transform template)
	    {
			if(!template) { return null; }
			Transform templateParent = template.parent;
			if(!templateParent) { return Duplicate<Transform>(template); }
			Vector3 localPos = template.localPosition;
			Quaternion localRot = template.localRotation;
			Vector3 localScale = template.localScale;
			Transform temp = (Transform)UnityEngine.Object.Instantiate(template);
			temp.parent = templateParent;
			temp.localPosition = localPos;
			temp.localRotation = localRot;
			temp.localScale = localScale;
			return temp;
	    }
	    
	    public static bool IsObjectStaticallyPlaced(GameObject obj)
	    {
			if(!obj)
				return false;
			if(obj.isStatic)
				return true;
			if(obj.tag == "StaticRoot")
				return true;
			Transform t = obj.transform.parent;
			if(t == null)
				return false;
			return IsObjectStaticallyPlaced(t.gameObject);
	    }
	    
	    // same as c.GetComponentInChildren<T>, but (at the time of this writing) it is somehow much faster
	    public static T FastGetComponentInChildren<T>(Component c) where T : Component
	    {
	        foreach(T child in c.GetComponentsInChildren<T>())
	            return child;
	        return null;
	    }
	    
	    // same as go.GetComponentInChildren<T>, but (at the time of this writing) it is somehow much faster
	    public static T FastGetComponentInChildren<T>(GameObject go) where T : Component
	    {
	        foreach(T child in go.GetComponentsInChildren<T>())
	            return child;
	        return null;
	    }

	    public static T GetComponentInChildrenIncludingDisabled<T>(Component c) where T : Component
	    {
	        foreach(T child in c.GetComponentsInChildren<T>(true))
	            return child;
	        return null;
	    }

	    public static T GetComponentInChildrenIncludingDisabled<T>(GameObject go) where T : Component
	    {
	        foreach(T child in go.GetComponentsInChildren<T>(true))
	            return child;
	        return null;
	    }

		public static void EnableRenderersRecursively(GameObject go, bool on)
		{
	        if(go != null)
	        {
	            foreach(Renderer r in go.GetComponentsInChildren<Renderer>(true))
	                r.enabled = on;
	        }
		}

		public static void EnableRenderersRecursively(Component c, bool on)
		{
	        if(c != null)
	        {
	            foreach(Renderer r in c.GetComponentsInChildren<Renderer>(true))
	                r.enabled = on;
	        }
		}

		public static void ToggleRenderersRecursively(Component c)
		{
	        if(c != null)
	        {
	            foreach(Renderer r in c.GetComponentsInChildren<Renderer>(true))
	                r.enabled = !r.enabled;
	        }
		}

	    public static T[] GetComponentsInChildrenIncludingEditorPrefabs<T>(GameObject go) where T : Component
	    {
			T[] rv = go.GetComponentsInChildren<T>();
	#if UNITY_EDITOR
			if(PrefabUtility.GetPrefabType(go) == PrefabType.Prefab)
			{
				List<T> extra = new List<T>();
				extra.AddRange(rv);
				foreach(UnityEngine.Object obj in EditorUtility.CollectDeepHierarchy(new UnityEngine.Object[]{ go }))
					if(obj is GameObject)
						foreach(T c in ((GameObject)obj).GetComponents<T>())
							if(!extra.Contains(c))
								extra.Add(c);
				rv = extra.ToArray();
			}
	#endif
	        return rv;
	    }

	    public static T GetOrAddComponent<T>(GameObject go) where T : Component
	    {
			T rv = go.GetComponent<T>();
			if(rv == null)
				rv = go.AddComponent<T>();
			return rv;
	    }

	    public static T DuplicateOrReuseOnReload<T>(T prefab, bool isReloadingNow) where T : Component
	    {
			if(!prefab)
				return prefab;
	#if UNITY_EDITOR
			if(isReloadingNow)
			{
				GameObject go = GameObject.Find(prefab.name+"(Clone)");
				if(go != null)
				{
					T rv = go.GetComponent<T>();
					if(rv != null)
						return rv;
				}
			}
	#endif
			return UnityEngine.Object.Instantiate(prefab) as T;
	    }

	    public static GameObject DuplicateOrReuseOnReloadGO(GameObject prefab, bool isReloadingNow)
	    {
	#if UNITY_EDITOR
			if(isReloadingNow)
			{
				GameObject go = GameObject.Find(prefab.name+"(Clone)");
				if(go != null)
					return go;
			}
	#endif
			return UnityEngine.Object.Instantiate(prefab) as GameObject;
	    }



	#if UNITY_EDITOR
	    public static T[] GetComponentsInSceneIncludingDisabled<T>() where T : Component
	    {
			List<T> rv = new List<T>();
			foreach(T c in Resources.FindObjectsOfTypeAll(typeof(T)))
			{
				GameObject go = c.gameObject;
				if(go.hideFlags == 0
	#if UNITY_EDITOR
				&& PrefabUtility.GetPrefabType(go) != PrefabType.Prefab
				&& PrefabUtility.GetPrefabType(go) != PrefabType.ModelPrefab
	#endif
				)
				{
					rv.Add(c);
				}
			}
			return rv.ToArray();
	    }
	#endif


		public static void Immortalize(GameObject go)
		{
			if(!go)
				return;
			UnityEngine.Object.DontDestroyOnLoad(go);
	#if UNITY_EDITOR
			go.name += " (Immortal)";
	#endif
		}

		public static void Destroy(UnityEngine.Object obj, float delay=0.0f)
		{
			if(obj)
			{
	#if UNITY_EDITOR
				if(!Application.isPlaying)
				{
					UnityEngine.Object.DestroyImmediate(obj);
				}
				else
	#endif
				{
					UnityEngine.Object.Destroy(obj, delay);
				}
			}
		}

		public static void Destroy(Transform t, float delay=0.0f)
		{
			if(t) {
				Destroy(t.gameObject, delay);
			}
		}

		public static Camera GetMainCamera(int layerToRender=0, bool allowWrongLayerFallback=true)
		{
			Camera rv = Camera.main;
			if(CameraCulls(rv, layerToRender))
			{
				foreach(Camera cam in Camera.allCameras)
				{
					if(!CameraCulls(cam, layerToRender))
					{
						return cam;
					}
					if(!rv && allowWrongLayerFallback)
					{
						rv = cam;
					}
				}
			}
			return rv;
		}

		static bool CameraCulls(Camera cam, int layer)
		{
			if(!cam) { return true; }
			return ((cam.cullingMask & (1 << layer)) == 0);
		}






		// gets all GameObjects in the scene (not prefabs) including disabled objects, optionally filtered by name (case sensitively)
		// example from http://docs.unity3d.com/Documentation/ScriptReference/Resources.FindObjectsOfTypeAll.html
		// WARNING: This is probably super slow (unless you pass in allGameObjects yourself), so be careful (consider using GetAllObjectsInScene_AutoCached)
		public static Transform[] GetAllObjectsInScene(string name = null, bool onlyRoot = false, GameObject[] allGameObjects = null)
		{
	#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
	        Profiler.BeginSample("Stm.V1_1.SceneHelper.GetAllObjectsInScene " + name + (allGameObjects != null ? "" : " slow")); try {
	#endif
			List<Transform> transformsInScene = new List<Transform>();
			if(allGameObjects == null) {
				allGameObjects = Resources.FindObjectsOfTypeAll<GameObject>();
			}
			foreach(GameObject go in allGameObjects) {
				// this might not be entirely correct, but the example from Unity docs is definitely wrong
				if(!go /*|| go.hideFlags != HideFlags.None*/) {
					continue;
				}
	//#if UNITY_EDITOR 
	//			string assetPath = AssetDatabase.GetAssetPath(go.transform.root.gameObject);
	//			if(!string.IsNullOrEmpty(assetPath)) {
	//				continue;
	//			}
	//#endif
				if(name != null && name != go.name) {
					continue;
				}
				
				Transform t = go.transform;
				if(!t /*|| t.hideFlags != HideFlags.None*/) {
					continue;
				}

				Transform root = t.root;
				if(!root) {
					continue;
				}
				GameObject rootGO = root.gameObject;
				if(!rootGO.activeInHierarchy) {
					if(rootGO.activeSelf) {
						continue;
					}
	#if !UNITY_EDITOR
					// HACK, is there a better way?
					rootGO.SetActive(true);
					bool stillOff = !rootGO.activeInHierarchy;
					rootGO.SetActive(false);
					if(stillOff) {
						continue;
					}
	#else
					// we do this in the editor to avoid triggering hierarchy-changed callbacks endlessly
					if(EditorUtility.IsPersistent(go)) {
						continue;
					}
	#endif
				}
				
	#if UNITY_EDITOR
				if(EditorUtility.IsPersistent(go)) {
					Debug.LogError("failed to detect prefab " + go, ReflectionUtil.FindPingableObjectContaining(go));
					Selection.objects = new UnityEngine.Object[] { go, };
					continue;
				}
	#endif
				// make sure this game object has no parent
				if(onlyRoot) {
					if(t.parent != null) {
						continue;
					}
				}

				transformsInScene.Add(t);
			}
			return transformsInScene.ToArray();
	#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
	        } finally { Profiler.EndSample(); }
	#endif
		}


		// version of GetAllObjectsInScene that caches the object list for 1 frame
		public static Transform[] GetAllObjectsInScene_AutoCached(string name = null, bool onlyRoot = false)
		{
			if(allGameObjectsCached == null) {
				UpdateMgr updateMgr = null;
	#if UNITY_EDITOR
				if(Application.isPlaying && EditorApplication.isPlayingOrWillChangePlaymode) // sometimes one isn't a subset of the other...
	#endif
				{
					updateMgr = UpdateMgr.InstGuaranteed;
				}
	#if !UNITY_EDITOR
				if(updateMgr) {
	#endif
					allGameObjectsCached = Resources.FindObjectsOfTypeAll<GameObject>();
					if(nameToGameObjectsCached == null) {
						nameToGameObjectsCached = new Dictionary<KeyValuePair<string,bool>,Transform[]>();
					}
	#if UNITY_EDITOR
					if(updateMgr) {
	#endif
						updateMgr.StartSequence(DoClearCacheAutoCache(), SequenceType.RealTime);
	#if UNITY_EDITOR
					} else {
						EditorApplication.hierarchyWindowChanged += EditorClearCacheAutoCache;
					}
	#endif
	#if !UNITY_EDITOR
				}
	#endif
			}
			Transform[] allObjs;
			var key = new KeyValuePair<string,bool>(name,onlyRoot);
			if(nameToGameObjectsCached == null || name == null || !nameToGameObjectsCached.TryGetValue(key, out allObjs)) {
				allObjs = GetAllObjectsInScene(name, onlyRoot, allGameObjectsCached);
				if(nameToGameObjectsCached != null && name != null) {
					nameToGameObjectsCached.Add(key, allObjs);
				}
			}
			return allObjs;
		}
		public static void ClearAutoCache() {
			allGameObjectsCached = null;
			nameToGameObjectsCached = null;
		}
		private static IEnumerator DoClearCacheAutoCache() {
			yield return null;
			ClearAutoCache();
		}
	#if UNITY_EDITOR
		private static void EditorClearCacheAutoCache() {
			EditorApplication.hierarchyWindowChanged -= EditorClearCacheAutoCache;
			ClearAutoCache();
		}
		[UnityEditor.Callbacks.PostProcessScene]
		public static void OnPostprocessScene() {
			ClearAutoCache();
		}
		[UnityEditor.Callbacks.PostProcessBuild]
		public static void OnPostprocessBuild(BuildTarget target, string pathToBuiltProject) {
			ClearAutoCache();
		}
	#endif
		private static GameObject[] allGameObjectsCached;
		private static Dictionary<KeyValuePair<string,bool>,Transform[]> nameToGameObjectsCached;
					




		// GameObject.Find cannot find inactive objects
		// this method will return all active or inactive objects that matches the given path in the current scene
		public static GameObject[] FindGameObjectsByPath(string gameObjectPath, params Transform[] rootsToCheck)
		{
			List<GameObject> gameObjects = new List<GameObject>();
			if(!string.IsNullOrEmpty(gameObjectPath)) {
				string[] gameObjectNames = gameObjectPath.Split(new string[] {"/"}, StringSplitOptions.None);
				if(gameObjectNames != null && gameObjectNames.Length >= 1) {
					if(rootsToCheck == null || rootsToCheck.Length == 0) {
						//rootsToCheck = GetAllObjectsInScene(gameObjectNames[0], true);
						rootsToCheck = GetAllObjectsInScene_AutoCached(gameObjectNames[0], true);
					}
					// go through all potential moms and get all children by path
					foreach(Transform potentialMom in rootsToCheck) {
						GatherChildrenByPath(gameObjects, potentialMom, gameObjectNames);
					}
				}
			}
			return gameObjects.ToArray();
		}

		// get all children by specified path
		// recursive helper for FindGameObjectsByPath
		private static void GatherChildrenByPath(List<GameObject> list, Transform t, string[] paths, int depth=0)
		{
			if(t && t.name == paths[depth]) {
				if(depth < paths.Length - 1) {
					// recursive case
					foreach(Transform child in t) {
						GatherChildrenByPath(list, child, paths, depth+1);
					}
				} else {
					// reached the end
					list.Add(t.gameObject);
				}
			}
		}

		public static void SetLayerRecursively(GameObject obj, int layer)
		{
			foreach(Transform t in obj.GetComponentsInChildren<Transform>(true)) {
				t.gameObject.layer = layer;
			}
		}
		
		public static void SetLayerRecursively(Component obj, int layer)
		{
			foreach(Transform t in obj.GetComponentsInChildren<Transform>(true)) {
				t.gameObject.layer = layer;
			}
		}

		public static void StaticCleanup() {
			ClearAutoCache();
		}

	}
}
