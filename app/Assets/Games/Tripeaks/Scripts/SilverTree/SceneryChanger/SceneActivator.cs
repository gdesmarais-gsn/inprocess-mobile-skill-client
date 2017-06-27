using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif

public static class SceneActivator
{
	public static void ActivateScene(GameObject go, bool active)
	{
		if(go)
			ActivateScene(go.transform, active);
	}
	
	public static void ActivateScene(Transform t, bool active)
	{
		if(!t)
			return;
		bool turningOn = active
#if UNITY_EDITOR
		&& Application.isPlaying
#endif
		;
		if(turningOn)
		{
			if(Camera.main == null /*|| (CordyCamera.Inst && CordyCamera.Inst.CurrentMainCam && CordyCamera.Inst.CurrentMainCam != Camera.main)*/)
			{
				foreach(Camera cam in t.GetComponentsInChildren<Camera>(true))
				{
					if(!cam.gameObject.activeInHierarchy && cam.CompareTag("MainCamera"))
					{
//						if(CordyCamera.Inst && CordyCamera.Inst.CurrentMainCam)
//						{
//							Replace(cam, CordyCamera.Inst.CurrentMainCam);
//							CordyCamera.Inst.CurrentMainCam.gameObject.SetActive(true);
//						}
//						else
						{
							cam.gameObject.SetActive(active);
						}
					}
				}
			}
//			if(Cordy.Inst)
//			{
//				foreach(Cordy cordy in t.GetComponentsInChildren<Cordy>(true))
//					if(!cordy.gameObject.activeInHierarchy && cordy != Cordy.Inst)
//						Replace(cordy, Cordy.Inst);
//			}
		}

		ActivateSceneInternal(t, active);

		if(turningOn)
			PlanarStream.StaticEnforceAll();
	}
	
	static void ActivateSceneInternal(Transform t, bool active)
	{
		foreach(Transform c in t)
			ActivateSceneInternal(c, active);

		t.gameObject.SetActive(active);

		// if we don't do this again, some Start functions won't get called...
//		if(active)
	//		foreach(Transform c in t)
		//		ActivateSceneInternal(c, active);
	}

//	static void Replace(Cordy from, Cordy to)
//	{
//		if(to.swapTarget && to.swapTarget != from)
//		{
//			Cordy toSwap = to.swapTarget;
//			to.swapTarget = null;
//			Replace(toSwap, to);
//		}
//		if(from.swapTarget && from.swapTarget != to)
//		{
//			Cordy fromSwap = from.swapTarget;
//			from.swapTarget = null;
//			Replace(from, fromSwap);
//		}
////Debug.Log(from.name + " -> " + to.name);
//		Transform toT = to.transform;
//		Transform fromT = from.transform;
//		Transform origToParent = to.origParent;
//		Vector3 origToLocalPos = to.origLocalPos;
//		if(!to.Root) { origToParent = toT.parent; origToLocalPos = toT.localPosition; }
//		Transform origFromParent = from.origParent;
//		Vector3 origFromLocalPos = from.origLocalPos;
//		if(!from.Root) { origFromParent = fromT.parent; origFromLocalPos = fromT.localPosition; }
//		to.DetachRobots(true, true);
//		toT.parent = origFromParent;
//		toT.localPosition = origFromLocalPos;
//		if(to.Root)
//			toT.parent = null;
//		to.ResetPlane();
//		to.origParent = origFromParent;
//		to.origLocalPos = origFromLocalPos;
//		CordyCamera toC = to.GetComponent<CordyCamera>();
//		CordyCamera fromC = from.GetComponent<CordyCamera>();
//		if(fromC && toC)
//		{
//			var temp = toC.attribs.Clone();
//			toC.attribs = fromC.attribs.Clone();
//			toC.PopAllAttribs();
//			fromC.attribs = temp;
//			fromC.PopAllAttribs();
////Debug.Log("now " + from.name + " has " + fromC.attribs.position.z + " and " + to.name + " has " + toC.attribs.position.z);
//		}
//		fromT.parent = origToParent;
//		fromT.localPosition = origToLocalPos;
//		if(from.Root)
//			from.ResetPlane();
//		from.origParent = origToParent;
//		from.origLocalPos = origToLocalPos;
//		to.swapTarget = from;
//		from.swapTarget = to;
//	}
	
	static void Replace(Camera from, Camera to)
	{
		Transform fromT = from.transform;
		Transform toT = to.transform;
		Transform toOrigParent = toT.parent;
		Vector3 toOrigPos = toT.localPosition;
		Quaternion toOrigRot = toT.localRotation;
		Vector3 toOrigScale = toT.localScale;
		toT.parent = fromT.parent;
		toT.localPosition = fromT.localPosition;
		toT.localRotation = fromT.localRotation;
		toT.localScale = fromT.localScale;
		fromT.parent = toOrigParent;
		fromT.localPosition = toOrigPos;
		fromT.localRotation = toOrigRot;
		fromT.localScale = toOrigScale;
		{ var temp = to.fieldOfView; to.fieldOfView = from.fieldOfView; from.fieldOfView = temp; }
		{ var temp = to.nearClipPlane; to.nearClipPlane = from.nearClipPlane; from.nearClipPlane = temp; }
		{ var temp = to.farClipPlane; to.farClipPlane = from.farClipPlane; from.farClipPlane = temp; }
		//{ var temp = to.orthographicSize; to.orthographicSize = from.orthographicSize; from.orthographicSize = temp; }
		//{ var temp = to.orthographic; to.orthographic = from.orthographic; from.orthographic = temp; }
		//{ var temp = to.transparencySortMode; to.transparencySortMode = from.transparencySortMode; from.transparencySortMode = temp; }
		{ var temp = to.depth; to.depth = from.depth; from.depth = temp; }
		//{ var temp = to.aspect; to.aspect = from.aspect; from.aspect = temp; }
		{ var temp = to.cullingMask; to.cullingMask = from.cullingMask; from.cullingMask = temp; }
		{ var temp = to.backgroundColor; to.backgroundColor = from.backgroundColor; from.backgroundColor = temp; }
		{ var temp = to.clearFlags; to.clearFlags = from.clearFlags; from.clearFlags = temp; }
		Skybox toS = to.GetComponent<Skybox>();
		Skybox fromS = from.GetComponent<Skybox>();
		if(!fromS && toS)
		{
			fromS = to.gameObject.AddComponent<Skybox>();
			fromS.material = toS.material;
			UnityEngine.Object.Destroy(toS);
		}
		else if(fromS)
		{
			if(!toS)
			{
				toS = to.gameObject.AddComponent<Skybox>();
				toS.material = fromS.material;
				UnityEngine.Object.Destroy(fromS);
			}
			else
			{
				{ var temp = toS.material; toS.material = fromS.material; fromS.material = temp; }
			}
		}
		//from.transform.parent = null;
	}

}
