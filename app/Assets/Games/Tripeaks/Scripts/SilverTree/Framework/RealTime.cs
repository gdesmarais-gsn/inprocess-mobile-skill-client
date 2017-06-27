using System;
using System.Collections;
using UnityEngine;

public enum TimeCategory
{
    Real = 0,
    Game = 1,
    Fixed = 2,
}

public class RealTime : /*Reloadable*/MonoBehaviour
{
    public static float DeltaFor(TimeCategory cat) {
        return Inst.mCategorizedDeltas[(int)cat];
    }

    public static float DeltaTime {
        get { return Inst.mCategorizedDeltas[(int)TimeCategory.Real]; }
    }
    
    public static float TimeFor(TimeCategory cat) {
        return Inst.mCategorizedTimes[(int)cat];
    }

    public static float TimeNow { get {
		return Inst.mCategorizedTimes[(int)TimeCategory.Real];
	} }
	
//	public Coroutine WaitForSeconds(float dt) {
//		return StartCoroutine(DoWaitForSeconds(dt));
//	}
	
	IEnumerator DoWaitForSeconds(float dt)
	{
		while(dt > 0f)
		{
			yield return null;
			dt -= mCategorizedDeltas[(int)TimeCategory.Real];
		}
	}

    public static RealTime Inst { get {
		if (!mInst) {
			//mInst = Stm.V1_1.SceneHelper.Find<RealTime>();
			//if(!mInst) {
			if(!UpdateMgr.isQuitting) {
				mInst = new GameObject("RealTime", typeof(RealTime)).GetComponent<RealTime>();
			}
				// FIXME: TODO: find some way to ensure this object never gets saved into the scene,
				// while also ensuring it never leaks in-between scenes or editmode transitions or script recompiles
				//mInst.hideFlags |= HideFlags.DontSave;
			//}
#if UNITY_EDITOR
			if(!Application.isPlaying) {
				//mInst.hideFlags = HideFlags.HideAndDontSave;
				mInst.Awake();
			}
#endif
		}
		return mInst;
    } }
    
    public float fixedDeltaTime {
		get { return mFixedDeltaTime; }
		set { mCategorizedDeltas[(int)TimeCategory.Fixed] = mFixedDeltaTime = value; }
	}
    float mFixedDeltaTime;
    

    static RealTime mInst;
    float mPrevious = 0.0f;
    float[] mCategorizedDeltas;
    float[] mCategorizedTimes;
    
    DateTime startTime;
    float initialUnityTime;

    void Awake()
    {
		if(mInst == null) {
			mInst = this;
			Stm.V1_1.SceneHelper.Immortalize(gameObject);
			startTime = DateTime.Now;
			initialUnityTime = Time.realtimeSinceStartup;
		} else {
#if UNITY_EDITOR
			Debug.LogWarning("extra RealTime was created...", this);
#endif
			startTime = mInst.startTime;
			initialUnityTime = mInst.initialUnityTime;
		}
		
        //mPrevious = GetRealTimeSinceStartup();
        mFixedDeltaTime = 1.0f/30.0f;
        mCategorizedDeltas = new float[3];
        mCategorizedDeltas[(int)TimeCategory.Real] = Time.deltaTime;
        mCategorizedDeltas[(int)TimeCategory.Game] = Time.deltaTime;
        mCategorizedDeltas[(int)TimeCategory.Fixed] = mFixedDeltaTime;
        mCategorizedTimes = new float[3];
        mCategorizedTimes[(int)TimeCategory.Real] = GetRealTimeSinceStartup();
        mCategorizedTimes[(int)TimeCategory.Game] = Time.time;
        mCategorizedTimes[(int)TimeCategory.Fixed] = 0.0f;
    }
    
    void Start()
    {
		// work around a unity bug: Time.realtimeSinceStartup is wrong during first frame's awake calls
		if(mInst == this) {
			initialUnityTime = Time.realtimeSinceStartup;
		}
    }
    
    void OnDestroy()
    {
		if(mInst == this) {
			mInst = null;
		}
    }

    void Update()
    {
        float cur = GetRealTimeSinceStartup();

		//// use deltaTime when possible, because it updates more smoothly than realTime. do not change this (except maybe to use Time.deltaTime in more situations)
		//float deltaTime = (Time.timeScale == 1.0f) ? Time.deltaTime : (cur - mPrevious);
		// (actually, maybe this way is better with the new implementation of GetRealTimeSinceStartup)
		float deltaTime = cur - mPrevious;

		mCategorizedDeltas[(int)TimeCategory.Real] = Mathf.Min(deltaTime, Time.maximumDeltaTime);
        mCategorizedDeltas[(int)TimeCategory.Game] = Time.deltaTime;

		mCategorizedTimes[(int)TimeCategory.Real] = cur;
        mCategorizedTimes[(int)TimeCategory.Game] = Time.time;
        mCategorizedTimes[(int)TimeCategory.Fixed] += mFixedDeltaTime;

        mPrevious = cur;
    }
    
    float GetRealTimeSinceStartup()
    {
		float time = DateTime.Now.Subtract(startTime).Ticks * (1.0f / TimeSpan.TicksPerSecond);
		float unityRealtime = Time.realtimeSinceStartup - initialUnityTime;
		const float tolerance = 5f;
		if(MathUtil.Dist(time, unityRealtime) > tolerance) { // if we're off by more than (tolerance) seconds
			// maybe the time setting changed; let's recalibrate
			startTime = DateTime.Now - TimeSpan.FromSeconds(unityRealtime);
#if UNITY_EDITOR || DEVELOPMENT_BUILD
			Debug.LogWarning("Recalibrated RealTime to compensate for time shift of " + TimeDiffToDebugString(time - unityRealtime) + ".\n" + (unityRealtime - mCategorizedTimes[(int)TimeCategory.Real]) + " seconds have passed since last update. Time went from " + (lastRealTimeReturned + " to " + unityRealtime + " instead of " + time + "."));
#endif
			time = unityRealtime;
		}
#if UNITY_EDITOR || DEVELOPMENT_BUILD
		lastRealTimeReturned = time;
#endif
		return time;
    }
    
#if UNITY_EDITOR || DEVELOPMENT_BUILD
	float lastRealTimeReturned;
	static string TimeDiffToDebugString(float diff)
	{
		char sign;
		if(diff < 0) {
			sign = '-';
			diff = -diff;
		} else {
			sign = '+';
		}
		TimeSpan span = TimeSpan.FromSeconds(diff);
		return string.Format("{0}{1} day {2} hour {3} minute {4} second", sign, span.Days, span.Hours, span.Minutes, span.Seconds);
	}
#endif
}
