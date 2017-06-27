using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Stm.V1_0;

public class TagTrigger : Dispatcher
{
    public event Callback onTriggered;
	public event Callback onExited;
    public bool oneShot = false;
    public bool doEnter = true;
    public bool doExit = true;
    public string tagFilter = "";
	public string ignoreTagFilter = "Debris";

    public event Delegates.Action<
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
> onTriggered2;
    public event Delegates.Action<
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
> onExited2;

	protected Dictionary<
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
, int> inTrigger;
	bool runningInactiveCheckCoroutine;

    [HideInInspector] public Transform Root;

	protected override void Awake()
	{
		Root = transform;
		base.Awake();
        if(
#if UNITY_EDITOR
        doEnter && doExit &&
#endif
        inTrigger == null)
			inTrigger = new Dictionary<
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
, int>();
	}
	
	protected void OnDisable() {
        if(doEnter && doExit && inTrigger != null && !UpdateMgr.isQuittingOrExitingLevel)
        {
			foreach(
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
 c in inTrigger.Keys)
			{
				if(c)
					OnTagExit(c);
				if(onExited != null)
					onExited(this);
				if(onExited2 != null && c)
					onExited2(c);
			}
			inTrigger.Clear();
        }
	}

	protected void OnEnable() {
		if(runningInactiveCheckCoroutine)
			UpdateMgr.Inst.StartSequence(gameObject, DoCheckForInactive(), SequenceType.Normal, true);
	}

    protected virtual void OnTagEnter(
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
 c) {
    }

    protected virtual void OnTagExit(
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
 c) {
    }
    
    public void 
#if ENABLE_BOX2D
    OnTriggerEnter2d
#else
    OnTriggerEnter
#endif
(
#if ENABLE_BOX2D
    Collider2d c
#else
    Collider c
#endif
)
	{ // ENTER
        if(c.isTrigger)
            return;
//Debug.Log("OnTriggerEnter " + c + " into " + this);
        if(doEnter && (tagFilter.Length == 0 || c.CompareTag(tagFilter)) && (ignoreTagFilter.Length == 0 || !c.CompareTag(ignoreTagFilter)))
        {
			//if(Time.frameCount == 1)
			//	return; // hacky workaround for a bug where Unity calls OnTriggerEnter twice if the triggerbox starts with a collider in it
			if(doExit)
			{
				if(inTrigger == null)
					inTrigger = new Dictionary<
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
, int>();
				int enteredCount;
				if(inTrigger.TryGetValue(c, out enteredCount))
				{
					inTrigger[c] = enteredCount + 1;
					return;
				}
			}
            OnTagEnter(c);
            if(onTriggered != null)
                onTriggered(this);
            if(onTriggered2 != null)
				onTriggered2(c);
            if(oneShot)
                Destroy(gameObject);
            else if(doExit && gameObject.activeInHierarchy)
            {
				inTrigger.Add(c, 1);
				if(!runningInactiveCheckCoroutine)
					UpdateMgr.Inst.StartSequence(gameObject, DoCheckForInactive(), SequenceType.Normal, true);
            }
        }
    }

    public void 
#if ENABLE_BOX2D
    OnTriggerExit2d
#else
    OnTriggerExit
#endif
(
#if ENABLE_BOX2D
    Collider2d c
#else
    Collider c
#endif
)
	{ // EXIT
        if(c.isTrigger)
            return;
//Debug.Log("OnTriggerExit " + c + " out of " + this);
        if(doExit && (tagFilter.Length == 0 || c.CompareTag(tagFilter)) && (ignoreTagFilter.Length == 0 || !c.CompareTag(ignoreTagFilter)))
        {
			if(doEnter)
			{
				int enteredCount;
				if(inTrigger.TryGetValue(c, out enteredCount))
				{
					if(enteredCount <= 1)
						inTrigger.Remove(c);
					else
					{
						inTrigger[c] = enteredCount - 1;
						return;
					}
				}
				else
				{
					// what
					return;
				}
			}
            OnTagExit(c);
			if(onExited != null)
				onExited(this);
            if(onExited2 != null)
				onExited2(c);
        }
    }

	IEnumerator DoCheckForInactive()
	{
		runningInactiveCheckCoroutine = true;
		float nextWaitTime = 1.1f;
		while(inTrigger.Count != 0)
		{
			yield return WaitTimer.Wait(nextWaitTime);
			nextWaitTime = 1.1f;
			foreach(
#if ENABLE_BOX2D
    Collider2d
#else
    Collider
#endif
 c in inTrigger.Keys)
			{
				if(!c)
				{
					inTrigger.Remove(c);
					if(onExited != null)
						onExited(this);
					nextWaitTime = 0.25f;
					break;
				}
				else if(!c.gameObject.activeInHierarchy)
				{
					// remove c before calling OnTagExit,
					// because OnTagExit might deactivate this gameObject
					// which would call OnTagExit(c) again if c is still in the list.
					inTrigger.Remove(c);
					OnTagExit(c);
					if(onExited != null)
						onExited(this);
					if(onExited2 != null)
						onExited2(c);
					nextWaitTime = 0.25f;
					break;
				}
			}
		}
		runningInactiveCheckCoroutine = false;
	}

#if UNITY_EDITOR
    override protected void OnDrawGizmos()
    {
        Gizmos.DrawIcon(transform.position, "portal.png");
        base.OnDrawGizmos();

		if(!UnityEditor.Selection.Contains(gameObject))
		{
			Gizmos.matrix = transform.localToWorldMatrix;
			Gizmos.color = new Color(0.7f, 0.0f, 1.0f, 0.5f);
			var c = GetComponent<Collider>();
			var box = c as BoxCollider;
			if(box)
				Gizmos.DrawWireCube(box.center, box.size);
			var sphere = c as SphereCollider;
			if(sphere)
				Gizmos.DrawWireSphere(sphere.center, sphere.radius);
		}

    }
#endif
}

