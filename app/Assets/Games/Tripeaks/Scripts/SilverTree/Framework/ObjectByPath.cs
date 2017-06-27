using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
using UnityEngine.Profiling;
#endif

namespace Stm.V1_1 { 

/// <summary>
/// Allows references to a GameObject or a Component by string paths
/// obj can be any UnityEngine.Object, but if it's not a GameObject or a Component then gameObjectPath and componentName is ignored
/// 
/// The purpose of this class is to be able to serialize objects that are external to the prefab by saving string paths.
/// This allows developer to save an object reference in a prefab without needing to change the scene file.
/// Referencing multiple objects with same path is supported.
/// 
/// Test cases to consider:
/// 1 - multiple mothers with same name
/// 2 - no mother
/// 3 - inactive mother
/// 4 - active mother (expected case)
/// 5	- multiple objects with same name
/// 6	- no objects of specified name
/// 7	- obj with unique path (expected case)
/// 8	    - component name is not specified, then obj is the gameobject
/// 9		- component name is specified
/// 10			- multiple components with same name
/// 11			- no component found
/// 12			- unique component found
/// </summary>
[Serializable]
public class ObjectByPath
{
#if UNITY_EDITOR
	// used by the ObjectByPath updater to update paths of objects on hierarchy change
	// this is the registration step
	public static List<ObjectByPath> newObjsByPath = new List<ObjectByPath>();
	public ObjectByPath() {
		newObjsByPath.Add(this);
	}
#endif

	public string gameObjectPath;
	public string componentName;
	public UnityEngine.Object obj;
	
#if UNITY_EDITOR
	// specify this if you want to assign a specific type of obj
	[NonSerialized] public Type objectFieldType = typeof(UnityEngine.Object);
	[NonSerialized] public bool hideComponentSelector;
	[NonSerialized] public UnityEngine.Object ownerOverride;
	[NonSerialized] public bool ownerOverrideIsNone;
#endif

	// property to get and set object
	public UnityEngine.Object Obj {
		// get single object
		get {
			if(!obj) {
				FindObject();
			}
			return obj;
		}
		set {
			if(value == null) {
				Reset();
				return;
			}

			componentName = ReflectionUtil.GetTypeName(value.GetType());

			// case where obj is a Component
			Component component = value as Component;
			if(component != null) {
				gameObjectPath = Stm.V1_1.SceneHelper.GetSearchablePathName(component.gameObject.transform, null);
				obj = value;
#if UNITY_EDITOR
				if(!Application.isPlaying) {
					EnsurePathUnique(Stm.V1_1.SceneHelper.FindGameObjectsByPath(gameObjectPath), component.gameObject);
				}
#endif
				return;
			}

			// case where obj is a GameObject	
			GameObject gameObject = value as GameObject;
			if(gameObject != null) {
				gameObjectPath = Stm.V1_1.SceneHelper.GetSearchablePathName(gameObject.transform, null);
				obj = value;
#if UNITY_EDITOR
				if(!Application.isPlaying) {
					EnsurePathUnique(Stm.V1_1.SceneHelper.FindGameObjectsByPath(gameObjectPath), gameObject);
				}
#endif
				return;
			}
			
			obj = value;
		}
	}
	
	public string TypeName
	{
		get {
			return componentName;
		}
		set {
			if(componentName != value) {
				UnityEngine.Object obj = Obj;
				componentName = value;
				AssignGameObject(GetGameObject(), true);
				if(obj != null && this.obj == null) {
#if UNITY_EDITOR
					string correctTypeName = ReflectionUtil.GetTypeName(obj.GetType());
					if(correctTypeName != value && obj.GetType().FullName != value) {
						Debug.LogWarning("Denied setting TypeName to \"" + value + "\"\nexpected \"" + correctTypeName + "\"", obj);
					}
#endif
					this.obj = obj;
				}
			}
		}
	}

	// invalidates cached objects to search for objects by path again
	public void InvalidateObjs() {
		obj = null;
	}

	public bool HasPath() {
		return !string.IsNullOrEmpty(gameObjectPath);
	}

	public void Reset() {
		gameObjectPath = string.Empty;
		componentName = string.Empty;
		obj = null;
	}
	
	// if you have a bunch of ObjectByPaths that might point to the same objects,
	// calling Initialize on all of them together (once, at runtime)
	// can reduce the number of scene searches performed
	public static void Initialize(params ObjectByPath[] objects)
	{
		if(objects == null || objects.Length == 0) {
			return;
		}
		if(objects.Length == 1) {
			ObjectByPath objectByPath = objects[0];
			if(objectByPath != null && !objectByPath.obj) {
				objectByPath.FindObject();
			}
			return;
		}
		Dictionary<string,GameObject> lookup = new Dictionary<string,GameObject>();
		foreach(ObjectByPath objectByPath in objects)
		{
			if(objectByPath != null && !objectByPath.obj) {
				GameObject go;
				string path = objectByPath.gameObjectPath;
				if(!lookup.TryGetValue(path, out go)) {
					if(!string.IsNullOrEmpty(path)) {
						GameObject[] gameObjects = Stm.V1_1.SceneHelper.FindGameObjectsByPath(path);
						if(gameObjects != null && gameObjects.Length > 0) {
							go = gameObjects[0];
						}
					}
					lookup.Add(path, go);
				}
				if(go) {
					objectByPath.AssignGameObject(go);
				}
			}
		}
		
	}

#if UNITY_EDITOR
	public bool UpdatePath() {
#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
        Profiler.BeginSample("ObjectByPath.UpdatePath", obj); try {
#endif
		GameObject go = GetGameObject();
		if(go != null) {
//#if UNITY_EDITOR
			if(go.hideFlags != HideFlags.None || go.transform.hideFlags != HideFlags.None) {
				return false; // don't change the path to be relative to a prefab root
			}
//#endif
			string newPath = Stm.V1_1.SceneHelper.GetSearchablePathName(go.transform, null);
#if UNITY_EDITOR
			EnsurePathUnique(Stm.V1_1.SceneHelper.FindGameObjectsByPath(newPath), go);
#endif
			if(gameObjectPath != newPath) {
//Debug.Log("Changed path from " + gameObjectPath + " to " + newPath + "\n" + this, go);
				gameObjectPath = newPath;
				return true;
			}
		}
		return false;
#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
        } finally { Profiler.EndSample(); }
#endif
	}
#endif

	public GameObject GetGameObject() {
		UnityEngine.Object currentObj = Obj;
		GameObject currentGameObj = currentObj as GameObject;
		if(currentGameObj == null) {
			Component component = currentObj as Component;
			if(component != null) {
				currentGameObj = component.gameObject;
			}
		}
		return currentGameObj;
	}

	void FindObject()
	{
#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
        Profiler.BeginSample("ObjectByPath.FindObject", obj); try {
#endif
		// attempt to retrieve object by path
		if(string.IsNullOrEmpty(gameObjectPath)) {
			return;
		}
		GameObject[] gameObjects = Stm.V1_1.SceneHelper.FindGameObjectsByPath(gameObjectPath);
		if(gameObjects == null || gameObjects.Length < 1) {
			return;
		}
		GameObject chosenGO = gameObjects[0];
		AssignGameObject(chosenGO);
#if UNITY_EDITOR
		if(!Application.isPlaying) {
			EnsurePathUnique(gameObjects, chosenGO);
		}
#endif
#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
        } finally { Profiler.EndSample(); }
#endif
	}
	
	void AssignGameObject(GameObject chosenGO, bool quiet=false)
	{
		obj = chosenGO;
		
		if(componentName == null || componentName.Length == 0 || !chosenGO) {
			return;
		}

		Type componentType = ReflectionUtil.GetType(componentName);

		if(componentType == null) {
#if UNITY_EDITOR
			if(!quiet) {
				Debug.LogWarning("could not find component type: " + componentName, obj); 
			}
#endif
			return;
		}

		if(componentType.IsAssignableFrom(obj.GetType())) {
			return;
		}
		
		if(!typeof(Component).IsAssignableFrom(componentType)) {
#if UNITY_EDITOR
			if(!quiet && !ReflectionUtil.HasAttribute<ExposeStaticMethodsAsEventsAttribute>(componentType)) {
				Debug.LogWarning("component type wasn't a Component: " + componentName, obj);
			}
#endif
			return;
		}

		Component component = chosenGO.GetComponent(componentType);
		if(component) {
			obj = component;
			return;
		}

#if UNITY_EDITOR
		if(!quiet) {
			Debug.LogWarning("could not find component: " + componentName + "\n on gameobject: " + chosenGO.name, obj);
		}
#endif
	}
	
#if UNITY_EDITOR
	void EnsurePathUnique(GameObject[] gameObjects, GameObject chosenGO=null)
	{
#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
        Profiler.BeginSample("ObjectByPath.EnsurePathUnique", obj); try {
#endif
		if(!chosenGO) {
			chosenGO = GetGameObject();
		}
		int numGameObjects = gameObjects.Length;
		if(numGameObjects <= 1) {
			return;
		}

		GameObject[] renameGameObjects = gameObjects;
		string downPath = gameObjectPath;
		while(true)
		{
			int lastSlashIndex = downPath.LastIndexOf('/');
			if(lastSlashIndex == -1) {
				break;
			}
			string upPath = downPath.Substring(0, lastSlashIndex);
			
			GameObject[] upGameObjects = Stm.V1_1.SceneHelper.FindGameObjectsByPath(upPath);
			if(upGameObjects.Length != numGameObjects) {
				break;
			}
			renameGameObjects = upGameObjects;
			downPath = upPath;
		}

		Transform chosenTransform = chosenGO.transform;
		int uniqueIndex = 2;
		foreach(GameObject go in renameGameObjects)
		{
			if(chosenTransform.IsChildOf(go.transform)) {
				continue;
			}
			string name = go.name;
			
			int preDigitIndex = name.Length - 1;
			while(preDigitIndex > 0) {
				if(!char.IsDigit(name[preDigitIndex])) {
					break;
				}
				preDigitIndex--;
			}
			if(preDigitIndex != name.Length - 1) {
				if(int.TryParse(name.Substring(preDigitIndex + 1), out uniqueIndex)) {
					name = name.Substring(0, preDigitIndex + 1);
					uniqueIndex++;
				} else {
					name += "_";
					uniqueIndex = 1;
				}
			}
			string nameBase = name;
			
			while(true)
			{
				name = nameBase + uniqueIndex;
				uniqueIndex++;

				string proposedPath;
				int lastSlashIndex = downPath.LastIndexOf('/');
				if(lastSlashIndex != -1) {
					string upPath = downPath.Substring(0, lastSlashIndex);
					proposedPath = upPath + "/" + name;
				} else {
					proposedPath = name;
				}
				if(Stm.V1_1.SceneHelper.FindGameObjectsByPath(proposedPath).Length == 0) {
					break; // done; found a non-colliding path to rename it to
				}
			}
			//Debug.LogWarning("ObjectByPath renamed GameObject to have a unique path:\n" + downPath + " -> " + name, go);
			const string color = "afafaf7f";
			Debug.Log("<color=#"+color+">renamed path to be unique:\n" + downPath + " -> " + name + "</color>", go);
			go.name = name;
			UnityEditor.EditorUtility.SetDirty(go);
		}
#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
        } finally { Profiler.EndSample(); }
#endif
	}
#endif

	public override string ToString()
	{
		return base.ToString() + " (" + obj + " | " + componentName + " | " + gameObjectPath + ")";
	}

	public static void StaticCleanup()
	{
#if UNITY_EDITOR
		newObjsByPath.Clear();
#endif
	}
	
}
}
