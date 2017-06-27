using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Stm.V1_0 {

public interface IDynamicActor {
    IEnumerable<string> ListDynamicActions();
    void DoAction(Dispatcher sender, string action);
}

public abstract class DynamicDispatcher : Dispatcher {

    //-------------------------------------------------------------------------
    // MEMBERS
    //-------------------------------------------------------------------------

    struct CallbackAndCallee
    {
        public Callback callback;
        public MonoBehaviour callee;
        public CallbackAndCallee(Callback callback, MonoBehaviour callee) { this.callback=callback; this.callee=callee; }
    }

    Dictionary<string, CallbackAndCallee> mRegistry;

    //-------------------------------------------------------------------------
    // PUBLIC INTERFACE
    //-------------------------------------------------------------------------

    public abstract IEnumerable<string> ListDynamicEvents();

    public void Subscribe(string key, Callback val, MonoBehaviour callee) {
        if (!mRegistry.ContainsKey(key)) {
            mRegistry.Add(key, new CallbackAndCallee(val, callee ? callee : this));
        } else {
            Callback callback = mRegistry[key].callback;
            callback += val;
        }
    }

    public void Unsubscribe(string key, Callback val) {
        if (mRegistry.ContainsKey(key)) {
            Callback callback = mRegistry[key].callback;
            callback -= val;
            if (callback == null) {
                mRegistry.Remove(key);
            }
        }
    }

    public void UnsubscribeAll(string key) {
        mRegistry.Remove(key);
    }
    
    int dynDispRecursionCount;
    const int dynDispRecursionLimit = 100;

	public void Raise(string key)
	{
		CallbackAndCallee cbac;
		if(mRegistry != null && mRegistry.TryGetValue(key, out cbac))
		{
			if(cbac.callee)
			{
				dynDispRecursionCount++;
				try
				{
					if(dynDispRecursionCount > dynDispRecursionLimit)
					{
#if UNITY_EDITOR
						Debug.LogError("Error, " + GetType().Name + " is infinitely sending a message to itself!\n" + name + " sending " + key);
#endif
					}
					else
					{
						cbac.callback(this);
					}
				}
				finally
				{
					dynDispRecursionCount--;
				}
			}
		}
	}
	
#if UNITY_EDITOR
    protected override bool ShouldBeCleanedUp(Event e) {
        if (!base.ShouldBeCleanedUp(e)) {
            return false;
        }
        foreach(string name in ListDynamicEvents()) {
            if (name == e.name) {
                return false;
            }
        }
        return true;
    }
#endif
    //-------------------------------------------------------------------------
    // UNITY CALLBACKS
    //-------------------------------------------------------------------------

    override protected void Awake() {
        base.Awake();
//        List<GameObject> toWake = null;
        mRegistry = new Dictionary<string, CallbackAndCallee>();
        var argTypes = new Type[] { typeof(Dispatcher) };
        if (defaultEvents != null && defaultEvents.Length > 0) {
            var dynamicEventKeys = new List<string>(ListDynamicEvents());
            foreach(Dispatcher.Event e in defaultEvents) {
                if (dynamicEventKeys.Contains(e.name) && e.target) {
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
									if(tryAgain)
										continue;
//									var relay = script as EventRelay;
//									if(relay == null)
										continue;
//									GameObject go = relay.GetTarget();
//									if(!go)
//										continue;
//									e.target = go;
//									tryAgain = true;
//									break;
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
							if (!mRegistry.ContainsKey(e.name)) {
								mRegistry.Add(e.name, new CallbackAndCallee(cb, script));
							} else {
								CallbackAndCallee cbac = mRegistry[e.name];
								cbac.callback += cb;
								mRegistry[e.name] = cbac; // structs are dangerous in C#, huh.
							}
						}
					} while(tryAgain);
//					if(!e.target.activeSelf)
//					{
//						Transform parent = e.target.transform.parent;
//						if(parent == null || parent.gameObject.activeInHierarchy)
//						{
//							if(toWake == null)
//							{
//								toWake = new List<GameObject>();
//							}
//							if(!toWake.Contains(e.target))
//							{
//								toWake.Add(e.target);
//							}
//						}
//					}
                }
            }
//			if(toWake != null)
//			{
//				int count = toWake.Count;
//				for(int i = 0 ; i < count ; i++)
//				{
//					GameObject go = toWake[i];
//					if(go)
//					{
//						Debug.LogError("WHOAWHOA " + go);
//						go.gameObject.SetActive(true);
//						go.gameObject.SetActive(false);
//					}
//				}
//			}
        }
    }

}

}
