// NOTE: this script must have the earliest execution order set for it to work!
// 1: select the script (ReloadHelper.cs) in the Project panel
// 2: click the "Execution Order..." button in the Inspector panel
// 3: drag ReloadHelper into the box
// 4: type a low number like -9999 into the box next to ReloadHelper
// 5: click Apply and then hit Save

// also, inherit everything from ReloadableMonoBehaviour instead of MonoBehaviour.
// of course it's not perfect, and you might have to debug a few things and maybe check isReloadingNow in a couple of places,
// but the scene should already be mostly working instead of throwing tons of errors every frame.
// note that if you implement OnEnable or OnDisable, that will override ReloadableMonoBehaviour,
// so you'll have to make them call base.OnEnable or base.OnDisable respectively,
// and make sure that call is in an #if UNITY_EDITOR
// and put the "new" keyword in front of the function to silence the compiler warning,
// and make sure that "new" keyword is in an #if UNITY_EDITOR
// like this:
/*
#if UNITY_EDITOR
	new void OnEnable() { base.OnEnable();
#else
	void OnEnable() {
#endif
		...
*/

using UnityEngine;
using System;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;

public class ReloadHelper : MonoBehaviour
{
#if UNITY_EDITOR
	static List<MonoBehaviour> scripts;
	static bool reloadInProgress;

	public static void OnReload(MonoBehaviour script)
	{
		if(!Application.isPlaying)
			return;
		if(script is ReloadableMonoBehaviour)
			((ReloadableMonoBehaviour)script).isReloadingNow = true;
		if(!reloadInProgress)
		{
			reloadInProgress = true;
			scripts = new List<MonoBehaviour>();
			new GameObject("ReloadHelper").AddComponent<ReloadHelper>();
		}
		scripts.Add(script);
		CallMethod(script, "Awake", false);
	}
	
	void Start()
	{
		if(reloadInProgress)
		{
			foreach(MonoBehaviour script in scripts)
				CallMethod(script, "Start", true);
			foreach(MonoBehaviour script in scripts)
			{
				if(script is ReloadableMonoBehaviour)
					((ReloadableMonoBehaviour)script).isReloadingNow = false;
			}
		}
		scripts = null;
		reloadInProgress = false;
		UnityEngine.Object.Destroy(gameObject);
	}

	static void CallMethod(MonoBehaviour script, string name, bool supportCoroutine)
	{
		MethodInfo methodInfo = script.GetType().GetMethod(
			name,
			BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic,
			null,
			new Type[0],
			new ParameterModifier[0]
		);
		if(methodInfo != null)
		{
			object rv = methodInfo.Invoke(script, null) as IEnumerator;
			if(supportCoroutine && rv is IEnumerator)
				script.StartCoroutine((IEnumerator)rv);
		}
	}
#endif
}
