using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

namespace Stm.V1_0 {

/// <summary>
/// Base Class for Event Dispatchers.
/// </summary>

public class Dispatcher : MonoBehaviour {//ReloadableMonoBehaviour {//MonoBehaviour {
	
	//-------------------------------------------------------------------------
	// INNER TYPES
	//-------------------------------------------------------------------------
	
	public delegate void Callback(Dispatcher sender);	

	[Serializable]
	public class Event {
		public string name;
		public GameObject target;
		public string actionName;
		
		public bool Equals(Event e) {
			return name == e.name && target == e.target && actionName == e.actionName;	
		}
	}
	
	//-------------------------------------------------------------------------
	// UNITY PARAMETERS
	//-------------------------------------------------------------------------
	
	//[HideInInspector]
	public Event[] defaultEvents;

	//-------------------------------------------------------------------------
	// UNITY CALLBACKS
	//-------------------------------------------------------------------------
	
	protected virtual void Awake() {
		if (defaultEvents != null && defaultEvents.Length > 0) {
			var t = GetType();
            var argTypes = new Type[] { typeof(Dispatcher) };
			foreach(Event e in defaultEvents) {
				if (e.target == null || e.actionName.Length == 0) {
					continue;
				}
				var eventInfo = t.GetEvent(e.name);
				if (eventInfo == null) {
					continue;	
				}
				var addHandler = eventInfo.GetAddMethod();
				bool tryAgain = false;
				do {
					tryAgain = false;
					foreach(MonoBehaviour script in e.target.GetComponents<MonoBehaviour>()) {
						if(!script) {
							continue;
						}
						var methodInfo = script.GetType().GetMethod(e.actionName, argTypes);
						Callback cb;
						if (methodInfo == null) {
							var actor = script as IDynamicActor;
							if (actor == null) {
//								var relay = script as EventRelay;
//								if(relay == null)
									continue;
//								GameObject go = relay.GetTarget();
//								if(!go)
//									continue;
//								e.target = go;
//								tryAgain = true;
//								break;
							} else  {
								string action = e.actionName;
								cb = sender => actor.DoAction(sender, action);
							}
						} else {
							try {
								cb = Delegate.CreateDelegate(typeof(Callback), script, methodInfo) as Callback;
							} catch {
								continue;
							}
						}
	//Debug.Log(this + "." + e.name + " += " + e.target.name + "." + methodInfo.Name);
						addHandler.Invoke(this, new System.Object[] { cb });
					}
				} while(tryAgain);
			}
			//if (!Application.isEditor) {
			//	// dont' want to mess with the garbage collector at runtime
			//	defaultEvents = null;
			//}
		}
	}
#if UNITY_EDITOR
	protected virtual void OnDrawGizmos() {
        if(!Application.isPlaying) {
            DrawEventGizmos();
        }
	}
#endif
#if UNITY_EDITOR
//	// hack for being ReloadableMonoBehaviour before
//	protected virtual void OnEnable() {}
//	protected virtual void OnDisable() {}
//	protected bool isReloadingNow { get { return false; } }
	
	//-------------------------------------------------------------------------
	// HELPER METHODS USED IN LEVEL EDITOR
	//-------------------------------------------------------------------------
	
	void DrawEventGizmos() {
		return;
//		if (defaultEvents != null && defaultEvents.Length > 0) {
//			var startPosition = transform.position;
//			Gizmos.color = new Color(1f, 1f, 0.2f, 0.5f);
//			Gizmos.matrix = Matrix4x4.TRS(startPosition, Quaternion.identity, Vector3.one);
//			GizmoHelper.DrawCircleZ(0.1f);
//			foreach(Event e in defaultEvents) {
//				if (e.target) {
//					var endPosition = e.target.transform.position;
//					var resolution = 10;
//					var du = 1f / (float) resolution;
//					var position = startPosition;
//					var height = 0f;
//					var heightMaxOffset = 0.25f * (endPosition - startPosition);
//					var y = heightMaxOffset.y;
//					if (heightMaxOffset.x > 0) {
//						heightMaxOffset.y = heightMaxOffset.x;
//						heightMaxOffset.x = -y;
//					} else {
//						heightMaxOffset.y = -heightMaxOffset.x;
//						heightMaxOffset.x = y;
//					}
//					var u = 0f;
//					Gizmos.matrix = Matrix4x4.TRS(endPosition, Quaternion.identity, Vector3.one);
//					GizmoHelper.DrawCircleZ(0.1f);
//					Gizmos.matrix = Matrix4x4.identity;
//					for (int i=0; i<resolution; i++) {
//						u += du;
//						var nextHeight = (1f-(2f*u-1f)*(2f*u-1f));
//						var nextPosition = Vector3.Lerp(
//							startPosition, endPosition, u
//						);
//						Gizmos.DrawLine(
//							position + height * heightMaxOffset,
//							nextPosition + nextHeight * heightMaxOffset
//						);
//						position = nextPosition;
//						height = nextHeight;
//					}
//					var midPoint = Vector3.Lerp(startPosition, endPosition, 0.5f) + heightMaxOffset;
//					//GizmoHelper.DrawArrowCapXY(midPoint, (endPosition - startPosition).normalized, 1.5f);
//					GizmoHelper.DrawText(midPoint + new Vector3(0, 0.15f, 0), e.name);
//					GizmoHelper.DrawText(midPoint + new Vector3(0, -0.15f, 0), e.actionName);
//				}
//			}
//		}		
	}

	public IEnumerable<Event> ListHandlersFor(string eventName) {
		if (defaultEvents == null) { yield break; }
		for (int i=0; i<defaultEvents.Length; i++) {
			if (defaultEvents[i].name == eventName) {
				yield return defaultEvents[i];
			}
		}
	}

    protected virtual bool ShouldBeCleanedUp(Event e) {
        return GetType().GetEvent(e.name) == null;
    }

    public void Cleanup() {
        if (defaultEvents == null) {
            return;
        }
        var preCount = defaultEvents.Length;
        var list = new List<Event>(defaultEvents);
        list.RemoveAll(ShouldBeCleanedUp);
        if (list.Count < preCount) {
            defaultEvents = list.ToArray();
        }
    }

	public bool RegisterEvent(Event e) {
		if (defaultEvents == null) {
			defaultEvents = new Event[] { e };	
		} else {
            var newList = new Event[defaultEvents.Length+1];
            Array.Copy(defaultEvents, newList, defaultEvents.Length);
            newList[defaultEvents.Length] = e;
			defaultEvents = newList;
		}
        return true;
	}
	
	public bool UnregisterEvent(Event e) {
		if (defaultEvents == null) { return false; }
		for (int i=0; i<defaultEvents.Length; i++) {
			if (defaultEvents[i].Equals(e)) {
				UnregisterEvent(i);
				return true;
			}
		}
        return false;
	}
	
	public void UnregisterEvent(int index) {
		if (defaultEvents == null) { return; }
		Event[] events = new Event[defaultEvents.Length-1];
		for(int i=0; i<index; i++) {
			events[i] = defaultEvents[i];	
		}
		for (int i=index+1; i<defaultEvents.Length; i++) {
			events[i-1] = defaultEvents[i];
		}
		defaultEvents = events;
	}
#endif
}

}
