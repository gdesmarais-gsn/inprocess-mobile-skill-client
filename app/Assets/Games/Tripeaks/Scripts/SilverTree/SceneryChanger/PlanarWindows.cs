using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanarWindows : ReloadableMonoBehaviour
{
	public static PlanarWindows Inst;

	class WallOrWindow
	{
		public Bounds bounds;
		public bool isWindow;
	}
	
	List<WallOrWindow> wows;

	Camera cam;
	Transform camTrans;
	void Awake()
	{
		cam = Camera.main;
		camTrans = cam.transform;

		wows = new List<WallOrWindow>();
		foreach(Transform t in transform)
		{
			if(!t.gameObject.activeInHierarchy)
				continue;
			if(t.name.ToLower().StartsWith("window"))
				wows.Add(new WallOrWindow(){bounds=new Bounds(t.position, t.lossyScale),isWindow=true});
			else if(t.name.ToLower().StartsWith("wall"))
				wows.Add(new WallOrWindow(){bounds=new Bounds(t.position, t.lossyScale),isWindow=false});
		}

		if(!Inst)
		{
			SortWows();
			Inst = this;
		}
		else
		{
			Inst.wows.AddRange(wows.ToArray());
			Inst.SortWows();
			UnityEngine.Object.Destroy(gameObject);
		}
	}

	void OnDestroy()
	{
		if(Inst == this)
			Inst = null;
	}

	static int CompareWows(WallOrWindow a, WallOrWindow b)
	{
		float aVal = a.bounds.center.z;
		if(a.isWindow)
			aVal += 5.0f;
		float bVal = b.bounds.center.z;
		if(b.isWindow)
			bVal += 5.0f;
		return aVal.CompareTo(bVal);
	}	
	void SortWows()
	{
		wows.Sort(CompareWows);
	}
	
	public static bool GetViewportRays
	(
		ref Ray bottomLeftWorldRay_initial,
		ref Ray bottomRightWorldRay_initial,
		ref Ray topLeftWorldRay_initial,
		ref Ray topRightWorldRay_initial,
		out Ray bottomLeftWorldRay_output,
		out Ray bottomRightWorldRay_output,
		out Ray topLeftWorldRay_output,
		out Ray topRightWorldRay_output,
		float maxZ
	)
	{
		PlanarWindows pThis = Inst;
		if(pThis)
		{
			List<WallOrWindow> wows = pThis.wows;

			int wowCount = wows.Count;
			if(wowCount != 0)
			{
				Camera cam = pThis.cam;
				Transform camTrans = pThis.camTrans;
			
				float minZ = camTrans.position.z;
				maxZ -= 5.0f;
				//s_bottomLeftWorldRay = cam.ViewportPointToRay(new Vector3(0,0,0));
				//new Vector3(0,0,0)
				float left = 0.0f;
				float top = 1.0f;
				float right = 1.0f;
				float bottom = 0.0f;
				for(int iWow = 0 ; iWow < wowCount ; iWow++)
				{
					WallOrWindow wow = wows[iWow];
					Bounds bounds = wow.bounds;
					Vector3 min = bounds.min;
					Vector3 max = bounds.max;
					if(min.z > maxZ || max.z < minZ)
						continue; // exclude walls that aren't in-between the camera and the plane of interest
					min = cam.WorldToViewportPoint(min);
					max = cam.WorldToViewportPoint(max);
					if(wow.isWindow)
					{
						if(((min.x >= 1.0f || max.x <= 0.0f)) || ((min.y >= 1.0f || max.y <= 0.0f)))
							continue; // exclude offscreen windows
						// grow to windows
						if(min.x < left)
							left = MathUtil.Max(0.0f, min.x);
						if(min.y < bottom)
							bottom = MathUtil.Max(0.0f, min.y);
						if(max.x > right)
							right = MathUtil.Min(1.0f, max.x);
						if(max.y > top)
							top = MathUtil.Min(1.0f, max.y);
					}
					else
					{
						// shrink from walls
						if(max.x >= right && max.y >= top && min.y <= bottom && min.x < right)
							right = min.x;
						if(min.x <= left && max.y >= top && min.y <= bottom && max.x > left)
							left = max.x;
						if(max.y >= top && max.x >= right && min.x <= left && min.y < top)
							top = min.y;
						if(min.y <= bottom && max.x >= right && min.x <= left && max.y > bottom)
							bottom = max.y;
					}
				}
//				Debug.Log("left = " + left + ", top = " + top + ", right = " + right + ", bottom = " + bottom);
				bottomLeftWorldRay_output = cam.ViewportPointToRay(new Vector3(left,bottom,0));
				bottomRightWorldRay_output = cam.ViewportPointToRay(new Vector3(right,bottom,0));
				topLeftWorldRay_output = cam.ViewportPointToRay(new Vector3(left,top,0));
				topRightWorldRay_output = cam.ViewportPointToRay(new Vector3(right,top,0));

				return right > left && top > bottom;
			}
		}

		bottomLeftWorldRay_output = bottomLeftWorldRay_initial;
		bottomRightWorldRay_output = bottomRightWorldRay_initial;
		topLeftWorldRay_output = topLeftWorldRay_initial;
		topRightWorldRay_output = topRightWorldRay_initial;
		return true;
	}

#if UNITY_EDITOR
	void OnDrawGizmos()
	{
		foreach(Transform t in transform)
		{
			if(!t.gameObject.activeInHierarchy)
				continue;
			if(t.name.ToLower().StartsWith("window"))
			{
				Gizmos.color = new Color(1.0f, 1.0f, 0.0f, 1.0f);
				//Vector3 size = t.lossyScale; size.z = 0.0f;
				Gizmos.DrawWireCube(t.position, t.lossyScale);
				//Gizmos.DrawIcon(t.position, "blackdot.png");
			}
		}
		foreach(Transform t in transform)
		{
			if(!t.gameObject.activeInHierarchy)
				continue;
			if(t.name.ToLower().StartsWith("wall"))
			{
				Gizmos.color = new Color(1.0f, 0.25f, 0.25f, 1.0f);
				//Vector3 size = t.lossyScale; size.z = 0.0f;
				Gizmos.DrawWireCube(t.position, t.lossyScale);
				//Gizmos.DrawIcon(t.position, "blackdot.png");
			}
		}
	}
#endif
//PlanarInstantiator
}
