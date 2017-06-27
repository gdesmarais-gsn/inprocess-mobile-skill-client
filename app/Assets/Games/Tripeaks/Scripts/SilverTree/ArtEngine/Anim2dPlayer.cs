using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Stm.V1_0;
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
using UnityEngine.Profiling;
#endif

//[Serializable]
//public class AnimLayer2d
//{
//	public string name;
//	public AnimQuadKeyFrames2d[] quads;
//	public AnimRootKeyFrames2d root;
//	public bool looped;
//	public float speed = 1.0f;
//	[System.NonSerialized] public float duration;
//}


[Serializable]
public class Anim2dPlayState 
{
	public string name;
	public int trackNumber;
	public float blendTime = 0.25f;
	public float skipTime;
	public bool looped;
	public float speed = 1.0f;

	public bool eventOnEnter;
	public bool eventOnStart;
	public float[] eventsAtTimes;
	public bool eventOnEnd;
	public bool eventOnExit;

	public class TimeEvent
	{
		public string eventName;
		public float time;
	}
	[System.NonSerialized] public TimeEvent[] sortedTimeEvents;
}

public class Anim2dPlayer : DynamicDispatcher, IDynamicActor
{
	public Anim2dPlayState[] states;
	public bool isPaused = false;
    public string startupAction;
    [System.NonSerialized] public string lastAction;
    public TimeCategory timeType = TimeCategory.Game;
	Anim2d[] anims;
	Dictionary<string, Anim2dPlayState> playStateLookup = new Dictionary<string, Anim2dPlayState>();
	Dictionary<string, Anim2dPlayState> queueStateLookup = new Dictionary<string, Anim2dPlayState>();
	Dictionary<string, Anim2dPlayState> resetStateLookup = new Dictionary<string, Anim2dPlayState>();
	string nextEndEventName;
	string nextExitEventName;
    Anim2dPlayState lastStatePlayed;
    float stateTimeAtLastUpdate;

#if UNITY_EDITOR
	public
#endif
	Anim2d[] GetAnims()
	{
		List<Anim2d> animsList = new List<Anim2d>();
		foreach(Anim2d anim in GetComponentsInChildren<Anim2d>(true))
		{
			Anim2dPlayer p = Stm.V1_1.SceneHelper.SearchUpwardsFor<Anim2dPlayer>(anim.transform);
			if(p == this)
				animsList.Add(anim);
		}
		return animsList.ToArray();
	}
	
	public string LastAnimStateName {
		get {
			if(lastStatePlayed == null) {
				return "";
			}
			return lastStatePlayed.name;
		}
	}

	override protected void Awake()
	{
		if(!legacySetupPerformed) {
			LegacySetup();
		}

		base.Awake();
		
		anims = GetAnims();
		foreach(Anim2dPlayState state in states)
		{
			if(state != null && state.name != null && state.name.Length != 0)
			{
				playStateLookup["Play_" + state.name] = state;
				queueStateLookup["Queue_" + state.name] = state;
				resetStateLookup["Reset_" + state.name] = state;
				
				state.sortedTimeEvents = new Anim2dPlayState.TimeEvent[state.eventsAtTimes.Length];
				for(int i = 0 ; i < state.eventsAtTimes.Length ; i++)
				{
					state.sortedTimeEvents[i] = new Anim2dPlayState.TimeEvent() {
						eventName = GetOnTimeEventName(state.name, i),
						time = state.eventsAtTimes[i],
					};
				}
				System.Array.Sort(state.sortedTimeEvents, EventSorter);
			}
		}
	}
	
	static int EventSorter(Anim2dPlayState.TimeEvent a, Anim2dPlayState.TimeEvent b)
	{
		return a.time.CompareTo(b.time);
	}
	
	void Start()
	{
		if(startupAction != null && startupAction.Length != 0)
			Action(startupAction);
	}
	
	// TODO: delete this after it's been run on every anim player
	bool legacySetupPerformed;
	void LegacySetup()
	{
		if(states != null && defaultEvents != null)
		{
#if UNITY_EDITOR
			bool dirtied = false;
#endif
			foreach(Anim2dPlayState state in states)
			{
				foreach(Event evt in defaultEvents)
				{
					if(evt.name == GetOnStartEventName(state.name))
					{
#if UNITY_EDITOR
						if(!state.eventOnStart) { dirtied = true; }
#endif
						state.eventOnStart = true;
					}
					if(evt.name == GetOnEndEventName(state.name))
					{
#if UNITY_EDITOR
						if(!state.eventOnEnd) { dirtied = true; }
#endif
						state.eventOnEnd = true;
					}
				}
			}

#if UNITY_EDITOR
			if(dirtied) { UnityEditor.EditorUtility.SetDirty(this); }
#endif

			legacySetupPerformed = true;
		}
	}
	
//#if UNITY_EDITOR
//	new void OnEnable() { base.OnEnable();
//#else
//	void OnEnable() {
//#endif
	void OnEnable() {
		if(anims != null)
		{
			Start();
		}
	}

	void LateUpdate()
	{
		if(isPaused) { return; }

		float deltaTime = RealTime.DeltaFor(timeType);
		if(deltaTime == 0.0f /*|| grid == null*/) { return; }
		
		bool done = true;
		foreach(Anim2d anim in anims)
		{
			done &= anim.CustomUpdate(deltaTime);
		}
		if(done && nextEndEventName != null)
		{
			Raise(nextEndEventName);
			nextEndEventName = null;
		}
		
//		if(lastStatePlayed != null)
//		{
//Debug.Log(stateTimeAtLastUpdate + ", " + lastStatePlayed.eventsAtTimes.Length + ", " + lastStatePlayed.sortedTimeEvents.Length + "\n" + Stm.V1_1.SceneHelper.FullPathName(transform) + " ... " + lastStatePlayed.name);
//		}
		if(lastStatePlayed != null && lastStatePlayed.sortedTimeEvents.Length != 0)
		{
			float stateTimeNow = -1.0f;
			foreach(Anim2d anim in anims)
			{
				if(anim.animStateStack != null && anim.animStateStack.Count != 0)
				{
					stateTimeNow = anim.animStateStack[0].time;
					break;
				}
			}
//Debug.Log(stateTimeAtLastUpdate + " -> " + stateTimeNow + "\n" + Stm.V1_1.SceneHelper.FullPathName(transform) + " ... " + lastStatePlayed.name);
			if(stateTimeNow < stateTimeAtLastUpdate && lastStatePlayed.speed >= 0.0f)
			{
				// TODO: optimize this using the fact that it's sorted
				foreach(Anim2dPlayState.TimeEvent timeEvent in lastStatePlayed.sortedTimeEvents)
				{
					if(timeEvent.time >= stateTimeAtLastUpdate)
					{
//Debug.Log("Raising " + timeEvent.eventName + " at time " + timeEvent.time + "\n" + stateTimeAtLastUpdate + " -> " + stateTimeNow);
						Raise(timeEvent.eventName);
					}
				}
				stateTimeAtLastUpdate = 0.0f;
			}
			else if(stateTimeNow >= stateTimeAtLastUpdate && lastStatePlayed.speed < 0.0f)
			{
				// TODO: optimize this using the fact that it's sorted
				foreach(Anim2dPlayState.TimeEvent timeEvent in lastStatePlayed.sortedTimeEvents)
				{
					if(timeEvent.time < stateTimeAtLastUpdate)
					{
//Debug.Log("Raising " + timeEvent.eventName + " at time " + timeEvent.time + "\n" + stateTimeAtLastUpdate + " -> " + stateTimeNow);
						Raise(timeEvent.eventName);
					}
				}
				stateTimeAtLastUpdate = 9999999.0f;
			}
			
			if(stateTimeNow >= 0.0f || stateTimeAtLastUpdate > 0.0f)
			{
				//float stateTimeNow = done ? lastStatePlayed.layer.duration : anims[0].animStateStack[0].time;
				
				float minTime = MathUtil.Min(stateTimeNow, stateTimeAtLastUpdate);
				float maxTime = MathUtil.Max(stateTimeNow, stateTimeAtLastUpdate);
				
				// TODO: optimize this using the fact that it's sorted
				foreach(Anim2dPlayState.TimeEvent timeEvent in lastStatePlayed.sortedTimeEvents)
				{
					if(minTime <= timeEvent.time && maxTime > timeEvent.time)
					{
//Debug.Log("Raising " + timeEvent.eventName + " at time " + timeEvent.time + "\n" + stateTimeAtLastUpdate + " -> " + stateTimeNow);
						Raise(timeEvent.eventName);
					}
				}
			}
			
			stateTimeAtLastUpdate = stateTimeNow;
		}
	}
	
	public void ForceApply()
	{
		foreach(Anim2d anim in anims) {
			if(anim != null) {
				anim.CustomUpdate(0.0f, true);
			}
#if DEVELOPMENT_BUILD || UNITY_EDITOR
			else {
				Debug.LogWarning("Anim2dPlayer.ForceApply anim is null", this);
			}
#endif
		}
			
	}
	
	public void Step(float time)
	{
		foreach(Anim2d anim in anims)
			anim.StepUpdate(time);
	}
	
	string GetOnEndEventName(string name)
	{
		if(name.Length != 0) {
			name = char.ToUpper(name[0]) + name.Substring(1);
		}
		return "onEndOf" + name;
	}
	
	string GetOnStartEventName(string name)
	{
		if(name.Length != 0) {
			name = char.ToUpper(name[0]) + name.Substring(1);
		}
		return "onStartOf" + name;
	}
	
	public static string GetOnTimeEventName(string name, int index)
	{
		if(name.Length != 0) {
			name = char.ToUpper(name[0]) + name.Substring(1);
		}
		return "on" + name + "Event" + IndexToID(index);
	}
	
	string GetOnEnterEventName(string name)
	{
		if(name.Length != 0) {
			name = char.ToUpper(name[0]) + name.Substring(1);
		}
		return "onEnter" + name;
	}
	
	string GetOnExitEventName(string name)
	{
		if(name.Length != 0) {
			name = char.ToUpper(name[0]) + name.Substring(1);
		}
		return "onExit" + name;
	}
	
	public void Play(Anim2dPlayState playState)
	{
		stateTimeAtLastUpdate = 0.0f;
		foreach(Anim2d anim in anims)
		{
			AnimState2d state = anim.Play(playState.trackNumber, playState.blendTime, playState.skipTime);
			if(state != null)
			{
				state.speed = playState.speed;
				state.looped = playState.looped;				
				if(playState.speed < 0.0f)
				{
					state.time = state.layer.duration - state.time;
					stateTimeAtLastUpdate = MathUtil.Max(stateTimeAtLastUpdate, state.time);
				}
			}
		}
		
		
		ForceApply();
		
		if(lastStatePlayed != playState)
		{
			lastStatePlayed = playState;
//Debug.Log("lastStatePlayed = " + lastStatePlayed.name + "\n" + Stm.V1_1.SceneHelper.FullPathName(transform));

			if(nextExitEventName != null)
			{
				Raise(nextExitEventName);
				nextExitEventName = null;
			}
			if(playState.eventOnExit) {
				nextExitEventName = GetOnExitEventName(playState.name);
			}
			if(playState.eventOnEnter) {
				Raise(GetOnEnterEventName(playState.name));
			}
		}

		if(playState.eventOnEnd) {
			nextEndEventName = GetOnEndEventName(playState.name);
		}
		if(playState.eventOnStart) {
			Raise(GetOnStartEventName(playState.name));
		}
	}

	public void Queue(Anim2dPlayState playState)
	{
		queuedStates.Add(playState);
		if(queuedStates.Count == 1)
			UpdateMgr.Inst.StartSequence(null, DoPlayQueued(playState), SequenceType.Normal, true);
	}
	List<Anim2dPlayState> queuedStates = new List<Anim2dPlayState>();
	
	IEnumerator DoPlayQueued(Anim2dPlayState playState)
	{
		while(queuedStates.Count != 0)
		{
			while(isPlaying)
				yield return null;
			if(this == null) {
				#if DEVELOPMENT_BUILD || UNITY_EDITOR
				Debug.LogWarning("Anim2dPlayer.DoPlayQueued: this is null");
				#endif
				yield break;
			}
			int lastIndex = queuedStates.Count - 1;
			if(lastIndex == -1)
				break;
			Anim2dPlayState state = queuedStates[lastIndex];
			queuedStates.RemoveAt(lastIndex);
			Play(state);
		}
	}

    IEnumerable<string> IDynamicActor.ListDynamicActions()
    {
        if(this)
        {
            if(states != null)
            {
                //int numStates = states.Length;
				foreach(Anim2dPlayState state in states)
                    yield return "Play_" + state.name;
				foreach(Anim2dPlayState state in states)
                    yield return "Queue_" + state.name;
				foreach(Anim2dPlayState state in states)
                    yield return "Reset_" + state.name;
                yield return "Stop";
                yield return "Abort";
            }
        }
    }
    
	public static string IndexToID(int index)
	{
		if(index < 26)
		{
			return ((char)('A' + index)).ToString();
		}
		index++;
		string id = "";
		while(index > 0)
		{
			int mod = (index - 1) % 26;
			index = (index - mod) / 26;
			id = (char)('A' + mod) + id;
		}
		return id;
	}
	
	public override IEnumerable<string> ListDynamicEvents()
    {
        if(this)
        {
            if(states != null)
            {
				if(!legacySetupPerformed) {
					LegacySetup();
				}
				foreach(Anim2dPlayState state in states)
				{
					if(state.eventOnEnter) {
						yield return GetOnEnterEventName(state.name);
					}
					if(state.eventOnStart) {
						yield return GetOnStartEventName(state.name);
					}
					float[] eventsAtTimes = state.eventsAtTimes;
					if(eventsAtTimes != null) {
						int len = eventsAtTimes.Length;
						for(int j = 0 ; j < len ; j++) {
							yield return GetOnTimeEventName(state.name, j);
						}
					}
					if(state.eventOnEnd) {
						yield return GetOnEndEventName(state.name);
					}
					if(state.eventOnExit) {
						yield return GetOnExitEventName(state.name);
					}
				}
            }
        }
    }

    void IDynamicActor.DoAction(Dispatcher sender, string action)
    {
		Action(action);
    }
    
    public void Action(string action)
    {
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
        Profiler.BeginSample("Anim2dPlayer.Action(\"" + action + "\")", this);
#endif
		if(!gameObject.activeSelf) {
			gameObject.SetActive(true);
		}
		Anim2dPlayState state;
		if(playStateLookup.TryGetValue(action, out state))
		{
			queuedStates.Clear();
			Play(state);
		}
		else if(queueStateLookup.TryGetValue(action, out state))
			Queue(state);
		else if(resetStateLookup.TryGetValue(action, out state))
		{
			foreach(Anim2d anim in anims)
				anim.Reset(state.trackNumber);
		}
		else if(action == "Stop")
		{
			foreach(Anim2d anim in anims)
				anim.Stop();
		}
		else if(action == "Abort")
		{
			foreach(Anim2d anim in anims)
				anim.Abort();
			nextEndEventName = null;
		}
//		int trackIndex;
//		if(int.TryParse(action.Substring("Play_".Length), out trackIndex) && trackIndex >= 0 && trackIndex < states.Length)
//			Play(states[trackIndex]);
		lastAction = action;
#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
        Profiler.EndSample();
#endif
    }

    public bool StateExists(string name)
    {
		return playStateLookup.ContainsKey("Play_" + name);
    }

	public bool isPlaying
	{
		get
		{
			if(anims != null)
				foreach(Anim2d anim in anims)
					if(anim.animStateStack != null && anim.animStateStack.Count != 0)
						return true;
			return false;
		}
	}
}
