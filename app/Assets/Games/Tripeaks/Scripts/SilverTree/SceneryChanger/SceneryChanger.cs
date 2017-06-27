using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Stm.V1_0;

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
using UnityEngine.Profiling;
#endif

public class SceneryChanger : ReloadableMonoBehaviour, IDynamicActor
{
	[System.Serializable]
	public class MaterialEntry
	{
		public Material fromMaterial;
		public Material toMaterial;
	}

	[System.Serializable]
	public class Fog
	{
		public bool fogSettingsEnabled;
		public bool fogEnable = true;
		public Color fogColor = new Color(0.988235295f, 0.730556786f, 0.716955006f);
		public FogMode fogMode = FogMode.ExponentialSquared;
		public float fogDensity = 0.0035f;
		public float linearFogStart = 0.0f;
		public float linearFogEnd = 300.0f;

		public void Apply()
		{
			if(!fogSettingsEnabled)
				return;
			RenderSettings.fogStartDistance = linearFogStart;
			RenderSettings.fogEndDistance = linearFogEnd;
			RenderSettings.fogDensity = fogDensity;
			RenderSettings.fogMode = fogMode;
			RenderSettings.fogColor = fogColor;
			RenderSettings.fog = fogEnable;
		}
	}

	[System.Serializable]
	public class Scenery
	{
		public string name;
		public string parentSceneName; // for referencing shared settings like "nighttime" / "daytime"
		public string bgmID;
		//public TriPeaksGetAways.GetAwayID ID;
		public GameObject[] objectsToShow;
		public GameObject[] objectsToHide;
		public GameObject[] objectsToChange;
		public MaterialEntry[] materialChanges;
		public Fog fog;
		public Camera camera; // link to a disabled camera to copy the settings of to our main camera

		public void Apply(SceneryChanger owner)
		{
			Scenery parentScenery;
			if(owner.sceneryDataLookup.TryGetValue(parentSceneName, out parentScenery))
			{
				ApplyMaterials();
				parentScenery.Apply(owner);
			}
			fog.Apply();
			ShowObjects(objectsToShow, true);
			ShowObjects(objectsToHide, false);
			ApplyMaterials();
			//if(Application.loadedLevelName != "tri_peaks") { // <-- HACK for IntroPanDown anim
				CopyCameraSettings(camera, Camera.main);
			//}
			//if(bgmID != "") Jukebox.Inst.PlayMusic(bgmID, 1.0f);
		}

		public void Unapply(SceneryChanger owner)
		{
			UnapplyMaterials();
			ShowObjects(objectsToHide, true);
			ShowObjects(objectsToShow, false);
			Scenery parentScenery;
			if(owner.sceneryDataLookup.TryGetValue(parentSceneName, out parentScenery))
			{
				parentScenery.Unapply(owner);
				UnapplyMaterials();
			}
		}
		
		public void Reapply(SceneryChanger owner)
		{
			Scenery parentScenery;
			if(owner.sceneryDataLookup.TryGetValue(parentSceneName, out parentScenery))
			{
				ApplyMaterials();
				parentScenery.Reapply(owner);
			}
			//fog.Apply();
			ApplyMaterials();
			//CopyCameraSettings(camera, Camera.main);
		}
		
		public void ReapplyTo(SceneryChanger owner, GameObject go)
		{
			Scenery parentScenery;
			if(owner.sceneryDataLookup.TryGetValue(parentSceneName, out parentScenery))
			{
				ApplyMaterialsTo(go);
				parentScenery.ReapplyTo(owner, go);
			}
			//fog.Apply();
			ApplyMaterialsTo(go);
			//CopyCameraSettings(camera, Camera.main);
		}

		public void UnapplyTo(SceneryChanger owner, GameObject go)
		{
			UnapplyMaterialsTo(go);
			Scenery parentScenery;
			if(owner.sceneryDataLookup.TryGetValue(parentSceneName, out parentScenery))
			{
				UnapplyMaterialsTo(go);
				parentScenery.UnapplyTo(owner, go);
			}
		}
		
		void ShowObjects(GameObject[] objects, bool show)
		{
			foreach(GameObject go in objects)
			if(go)
			{
				SceneActivator.ActivateScene(go, show);
				if(show)
					PlanarStream.ReEnableAutomaticDespawn(go.transform, show);
				else
					PlanarStream.DisableAutomaticDespawn(go.transform, show);
			}
		}
		
		void ApplyMaterials()
		{
			//foreach(Renderer r in GameObject.FindObjectsOfType(typeof(Renderer)))
			foreach(GameObject go in objectsToChange)
				ApplyMaterialsTo(go);
		}
		
		void ApplyMaterialsTo(GameObject go)
		{
			if(go)
			{
				foreach(Renderer r in go.GetComponentsInChildren<Renderer>(true))
				{
					Material[] sharedMats = r.sharedMaterials;
					int numSharedMats = sharedMats.Length;
					bool anyMatched = false;
					for(int i = 0 ; i < numSharedMats ; i++)
					{
						foreach(MaterialEntry matEntry in materialChanges)
						{
							if(sharedMats[i] == matEntry.fromMaterial)
							{
								sharedMats[i] = matEntry.toMaterial;
								anyMatched = true;
							}
						}
					}
					if(anyMatched)
						r.sharedMaterials = sharedMats;
				}
				foreach(Bridge b in go.GetComponentsInChildren<Bridge>(true)) {
					foreach(MaterialEntry matEntry in materialChanges) {
						if(b.material == matEntry.fromMaterial) {
							b.material = matEntry.toMaterial;
						}
					}
				}
			}
		}

		void UnapplyMaterials()
		{
			foreach(GameObject go in objectsToChange)
				UnapplyMaterialsTo(go);
		}
		
		void UnapplyMaterialsTo(GameObject go)
		{
			if(go)
			{
				foreach(Renderer r in go.GetComponentsInChildren<Renderer>(true))
				{
					Material[] sharedMats = r.sharedMaterials;
					int numSharedMats = sharedMats.Length;
					bool anyMatched = false;
					for(int i = 0 ; i < numSharedMats ; i++)
					{
						foreach(MaterialEntry matEntry in materialChanges)
						{
							if(sharedMats[i] == matEntry.toMaterial)
							{
								sharedMats[i] = matEntry.fromMaterial;
								anyMatched = true;
							}
						}
					}
					if(anyMatched)
						r.sharedMaterials = sharedMats;
				}
				foreach(Bridge b in go.GetComponentsInChildren<Bridge>(true)) {
					foreach(MaterialEntry matEntry in materialChanges) {
						if(b.material == matEntry.toMaterial) {
							b.material = matEntry.fromMaterial;
						}
					}
				}
			}
		}
		
		void CopyCameraSettings(Camera src, Camera dst)
		{
			if(!src || !dst)
				return;
			Transform tSrc = src.transform;
			Transform tDst = dst.transform;
			if(tDst.parent && tDst.parent.parent && tDst.parent.parent.parent && tDst.parent.parent.parent.parent) // hack for camera anim parent root
			{
				tDst.parent.parent.parent.parent.localPosition = tSrc.position;// - tDst.parent.localPosition; // hack for camera anim parent root
				tDst.parent.parent.parent.parent.localRotation = tSrc.rotation;// * Quaternion.Inverse(tDst.parent.localRotation);
			}
			else
			{
				tDst.position = tSrc.position;
				tDst.rotation = tSrc.rotation;
			}
			dst.orthographic = src.orthographic;
			if(src.orthographic)
				dst.orthographicSize = src.orthographicSize;
			else
				dst.fieldOfView = src.fieldOfView;
			dst.nearClipPlane = src.nearClipPlane;
			dst.farClipPlane = src.farClipPlane;
			//dst.cullingMask = src.cullingMask;
		}
	}

	[System.Serializable]
	public class SceneryCategory
	{
		public string name = "location";
		public Scenery[] scenes;
	}

	public static SceneryChanger Inst;
	public event Delegates.Action onAfterSetScene;

	public SceneryCategory[] sceneCategories;
	public string initialSceneName = "NONE";
	public string[] initialUnapplySceneNames;
	Scenery activeScenery;
	Dictionary<string, Scenery> sceneryDataLookup = new Dictionary<string, Scenery>();
	
	
    void OnDestroy()
    {
        if(Inst == this)
            Inst = null;
    }
	
	void Awake()
	{
		if(Inst == null)
			Inst = this;
		foreach(SceneryCategory sceneCat in sceneCategories)
		{
			foreach(Scenery scene in sceneCat.scenes)
			{
				if(scene != null && scene.name != null && scene.name.Length != 0)
					sceneryDataLookup[scene.name] = scene;
			}
		}
		sceneryDataLookup["NONE"] = null;
	}
	/*
	void Start()
	{
		foreach(string name in initialUnapplySceneNames)
		{
			Scenery scene;
			if(sceneryDataLookup.TryGetValue(name, out scene))
				scene.Unapply(this);
		}
//		Scenery scene = FindScenery(initialSceneryName);
//		if(scene != null || initialSceneryName == "NONE")
//			SetScene(scene);
		Action(initialSceneName);
	}*/
	
//	Scenery FindScenery(string name)
//	{
//		foreach(Scenery scenery in scenes)
//			if(scenery.name == name)
//				return scenery;
//	}
	
	public string GetParentSceneName()
	{
		return activeScenery.parentSceneName;
	}
	
	public string GetCurrentSceneName()
	{
		return activeScenery.name;
	}
	
	public void SetScene(Scenery scenery)
	{
		//Scenery scenery = FindScenery(name);

		if(activeScenery != null)
			activeScenery.Unapply(this);

		if(scenery != null)
			scenery.Apply(this);

		activeScenery = scenery;
		
		if(onAfterSetScene != null)
			onAfterSetScene();
	}

	public void ReapplyScene()
	{
		if(activeScenery != null)
			activeScenery.Reapply(this);
	}

	public void ReapplyTo(GameObject go)
	{
		if(activeScenery != null)
			activeScenery.ReapplyTo(this, go);
	}

	public void UnapplyTo(GameObject go)
	{
		if(activeScenery != null)
			activeScenery.UnapplyTo(this, go);
	}

	public void SetCurrentSceneBGM()
	{
		//if(Jukebox.Inst != null)
			//Jukebox.Inst.PlayMusic(activeScenery.bgmID);
	}

    IEnumerable<string> IDynamicActor.ListDynamicActions()
    {
        if(this && sceneCategories != null)
        {
			foreach(SceneryCategory sceneCat in sceneCategories)
			{
				foreach(Scenery scene in sceneCat.scenes)
					yield return scene.name;
			}
			yield return "NONE";
        }
    }

    void IDynamicActor.DoAction(Dispatcher sender, string action)
    {
		Action(action);
    }
	
    public void Action(string action)
    {
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
        Profiler.BeginSample("SceneryChanger.Action(\"" + action + "\")", this);
#endif
		Scenery scene;
		if(sceneryDataLookup.TryGetValue(action, out scene))
			SetScene(scene);
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
        Profiler.EndSample();
#endif
    }
    
    public void ForceAddToChange(GameObject go)
    {
		foreach(SceneryCategory sceneCat in sceneCategories)
		{
			foreach(Scenery scene in sceneCat.scenes)
			{
				if(scene != null && System.Array.IndexOf(scene.objectsToChange, go) == -1)
				{
					int nullIndex = System.Array.IndexOf(scene.objectsToChange, null);
					if(nullIndex != -1)
					{
						scene.objectsToChange[nullIndex] = go;
					}
					else
					{
						ArrayHelper.Add(ref scene.objectsToChange, go);
					}
				}
			}
		}
	}
}
