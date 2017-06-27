// see comments in ReloadHelper.cs for usage.

using UnityEngine;
using System.Collections;

public class ReloadableMonoBehaviour : MonoBehaviour
{ 
#if UNITY_EDITOR
	// you can check this in Awake and Start functions.
	[System.NonSerialized] public bool isReloadingNow;

	// this works because scriptsReloaded is serializable (doesn't matter that it's private in this case),
	// and Unity serializes everything before calling OnDisable,
	// then nukes the whole assembly, then deserializes and calls OnEnable.
	bool scriptsReloaded; 
	protected void OnEnable()
	{
		if(scriptsReloaded)
			ReloadHelper.OnReload(this);
		scriptsReloaded = true;
	}
	protected void OnDisable()
	{
		scriptsReloaded = false;
	}

#else
//	protected void OnEnable() {}
//	protected void OnDisable() {}
#endif
}
