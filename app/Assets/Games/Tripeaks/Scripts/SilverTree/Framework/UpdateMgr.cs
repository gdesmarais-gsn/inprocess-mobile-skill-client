// UpdateMgr does these things:
// - provides access to UpdateMgr.Inst.StartSequence (and supporting functions such as StopSequence)
//   which is basically the equivalent of Unity's StartCoroutine function for coroutines
//   except it runs coroutines faster, uses less memory, and is more flexible.
// - implements running any StaggeredUpdaters and active Sequence coroutines
// - (minor) maintains a static isQuitting variable for editor purposes of avoiding creating objects while the game is stopping
//   (TODO: maybe there's a better class to store this info which could properly implement isQuittingOrExitingLevel)

// in order to work, there must be an UpdateMgr on a GameObject in the scene.
// UpdateMgr.Inst will return null otherwise.

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using Stm.V1_1;

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
using UnityEngine.Profiling;
#endif

public delegate void UpdateCallbackFunction();

public enum SequenceType{
	Normal = 0,
	RealTime,
#if UNITY_EDITOR
	Fixed,
#else
	Fixed_DoNotUse,
#endif
	Max,
};

public class WaitTimer {
	public static float Wait( float second ) {
		return second;
	}
}


public class CoroutineHandle : YieldInstruction {
	internal GameObject mTarget;
	internal bool mHasTarget;
	internal IEnumerator mFunction;
	internal CoroutineHandle mWaitSequence;
	internal float mWaitTime;
	internal bool mWaiting;
	internal bool mWaitingForTime;
	internal bool mWaitingForSequence;
	internal SequenceType mType;
	internal bool mStopped;
	internal bool mFinished;
	internal bool mPaused;
	internal bool mPretendDone;
	internal bool mSkipNextMove;
	
	// returns true if the sequence either finished or was stopped or has had StopWaitingForSequence called on it
	public bool IsDone{ get { return mStopped || mPretendDone; } }
	
	// return true if the sequence actually finished running its function's code
	public bool IsFinished{ get { return mFinished; } }
	
	public void Pause(bool pause){
		mPaused = pause;
	}
	
	
	public CoroutineHandle( GameObject target, IEnumerator function, SequenceType type ){
		mHasTarget = (target != null);
		mTarget = target;
		mFunction = function;
		mWaiting = false;
		mType = type;
		mStopped = false;
		mPaused = false;
	}

#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
	[System.NonSerialized] UnityEngine.Object profilerContext;
	[System.NonSerialized] bool profilerContextCalculated;
#endif
	
	bool MoveNext() {
#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
		if(!profilerContextCalculated) {
			profilerContextCalculated = true;
			profilerContext = mTarget;
			if(Profiler.enabled) {
				System.Reflection.FieldInfo thisField = mFunction.GetType().GetField("<>f__this", System.Reflection.BindingFlags.NonPublic|System.Reflection.BindingFlags.Instance);
				if(thisField != null) {
					UnityEngine.Object thisObj = thisField.GetValue(mFunction) as UnityEngine.Object;
					if(thisObj) {
						profilerContext = thisObj;
					}
				}
			}
		}
        Profiler.BeginSample(mFunction.ToString(), profilerContext);
#endif
		bool rv = mFunction.MoveNext();
#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
        Profiler.EndSample();
#endif
		return rv;
	}
	
	public bool Update( float deltaTime ){
		if( mStopped ){
			return mStopped;
		}
		
		if( mHasTarget && (mTarget == null || !mTarget.activeInHierarchy) ){
			Stop();
			return mStopped;
		}
		
		if( mPaused ){
			return mStopped;
		}
		
		if( mWaiting ){
			if(mWaitingForTime) {
				mWaitTime -= deltaTime;
				if( mWaitTime <= 0.0f ){
					mWaiting = false;
					mWaitingForTime = false;
				}
			}
			else if(mWaitingForSequence) {
				if(mWaitSequence.mStopped || mPretendDone) {
					mWaiting = false;
					mWaitingForSequence = false;
				}
			}
		} else {
			while(true) {
				if( mSkipNextMove || MoveNext() ){
					mSkipNextMove = false;
					if(ProcessMoveResult()) {
						continue;
					}
				} else {
					mStopped = true;
					mFinished = true;
				}
				break;
			}
		}
		return mStopped;
	}
	
	void Stop()
	{
		if(!mStopped)
		{
			mStopped = true;
			if(mWaitSequence != null)
				mWaitSequence.Stop();
		}
	}
	
	// returns true iff we should immediately call MoveNext again in the same frame
	internal bool ProcessMoveResult() {
		object current = mFunction.Current;
		if (current == null) {
			return false;
		}
		if (current is float) {
			mWaitTime += (float)current;
			mWaitingForTime = (mWaitTime > 0.0f);
			mWaiting |= mWaitingForTime;
			return !mWaitingForTime;
		}
		if (current is CoroutineHandle) {
			mWaitSequence = (CoroutineHandle)current;
			mWaitingForSequence = !(mWaitSequence.mStopped || mWaitSequence.mPretendDone);
			mWaiting |= mWaitingForSequence;
			return !mWaitingForSequence;
		}
		if (current is YieldInstruction) {
			// this allows a Sequence to yield anything that a Coroutine can
			return ProcessYieldInstruction(current);
		}
#if UNITY_EDITOR
		Debug.LogError("Unsupported yield return value: " + (current != null ? current.GetType().ToString() : "(null)") + " from " + mFunction);
#endif
		return false;
	}
	
	bool ProcessYieldInstruction(object current) {
		YieldInstruction y = (YieldInstruction)current;
		//if(!(y is AsyncOperation && ((AsyncOperation)y).isDone)) {
			mWaiting = true;
			((MonoBehaviour)(UpdateMgr.Inst)).StartCoroutine(YieldInstructionHandlerCoroutine(y));
		//}
		return !mWaiting;
	}
	
	IEnumerator YieldInstructionHandlerCoroutine(YieldInstruction y) {
		yield return y;
		mWaiting = false;
		if(y is WaitForFixedUpdate || y is WaitForEndOfFrame) {
			// these types of yield instructions result in us being called back at a weird time
			// outside of the regular update loop, so
			// let's immediately advance the sequence here
			if(MoveNext()) {
				mSkipNextMove = true;
			} else {
				mStopped = true;
				mFinished = true;
			}
		}
	}
	
#if UNITY_EDITOR || DEVELOPMENT_BUILD
	public override string ToString() {
		string rv = mFunction.ToString().Replace(GetType().Namespace+".","").Replace("c__Iterator","") + "(";
		bool first = true;
		string args = "";
		string yieldInstruction = null;
		string commandArg = null;
		int startIndex = 0;
		int endIndex = -1;
		foreach(FieldInfo field in mFunction.GetType().GetFields(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
			string name = field.Name;
			if(name == null || name.Length == 0) {
				continue;
			}
			char c = name[0];
			if(c == '<' || c == '$') {
				continue;
			}
			object value = field.GetValue(mFunction);
			if(value == null || (value is string && ((string)value).Length == 0)) {
				continue;
			}
			if(field.Name == "yieldInstruction") { // hack to shorten EventCallback.InvokeContinue
				yieldInstruction = value.ToString();
				continue;
				//return value.ToString();
			}
			if(value is string && field.Name == "command") { // more hacks
				commandArg = (string)value;
				continue;
			}
			if(value is int) { // more hacks
				if(field.Name == "startIndex") {
					startIndex = (int)value;
					continue;
				}
				if(field.Name == "endIndex") {
					endIndex = (int)value;
					continue;
				}
			}
			if(field.Name == "waitForChain") { // more hacks
				continue;
			}
			if(first) {
				first = false;
			} else {
				args = ", " + args;
			}
			args = field.Name + "=" + value + args;
		}
		if(commandArg != null) {
			if(startIndex >= 0 && startIndex < commandArg.Length && endIndex > startIndex && endIndex <= commandArg.Length) {
				commandArg = commandArg.Substring(startIndex, endIndex-startIndex);
			}
			if(!first) {
				args += ", ";
			}
			args += commandArg;
		}
		rv += args + ")";
		if(yieldInstruction != null) {
			rv += " -> " + yieldInstruction;
		}
		return rv;
//
//
//		string rv = "CoroutineHandle:" + mFunction.ToString();
//		
//		// hack for resolving EventCallback.InvokeContinue to something more useful
//		object function = mFunction;
//		for(int i = 0 ; i < 100 ; i++) {
//			FieldInfo field = function.GetType().GetField("yieldInstruction", BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
//			if(field == null) {
//				break;
//			}
//			function = field.GetValue(function);
//			if(function == null) {
//				break;
//			}
//			rv += "/" + function.ToString();
//		}
//		
//		return rv;
	}
#endif

}


[ExecuteInEditMode]
public class UpdateMgr : /*Reloadable*/MonoBehaviour {

	static public UpdateMgr Inst;
	bool autoCreated;

	static public UpdateMgr InstGuaranteed { get {
		if(!Inst) {
			Inst = CreateInstance();
		}
		return Inst;
	}}
	
	static public UpdateMgr InstGuaranteedEvenInEditMode { get {
#if UNITY_EDITOR
		return Application.isPlaying ? InstGuaranteed : InstEditMode;
#else
		return InstGuaranteed;
#endif
	}}
	
	static UpdateMgr CreateInstance() {
		if(isQuitting) {
			throw new System.InvalidOperationException("Tried to create UpdateMgr during game shutdown (which is not allowed)");
		}
#if UNITY_EDITOR
		if(!Application.isPlaying) {
			throw new System.InvalidOperationException("Tried to create UpdateMgr in edit mode (which is not supported)");
		}
#endif
		const string autoCreatedName = "Auto-Created UpdateMgr";
		foreach(UnityEngine.Object o in Resources.FindObjectsOfTypeAll(typeof(UpdateMgr))) {
			if(o && o is UpdateMgr && o.name == autoCreatedName) {
				return (UpdateMgr)o;
			}
		}
		GameObject go = new GameObject(autoCreatedName);
		UpdateMgr inst = go.AddComponent<UpdateMgr>();
		inst.autoCreated = true;
		Stm.V1_1.SceneHelper.Immortalize(go);
		return inst;
	}

#if UNUSEDART
	Dictionary<string,StaggeredUpdater> mStaggeredUpdaterMap = new Dictionary<string,StaggeredUpdater>();
	StaggeredUpdater[] mGameTimeStaggeredUpdaters = new StaggeredUpdater[]{};
	StaggeredUpdater[] mRealTimeStaggeredUpdaters = new StaggeredUpdater[]{};
#endif

	public static bool isQuitting;
	public static bool isQuittingOrExitingLevel; // currently means same as isQuitting
	
	public struct Sequence {
		public List<CoroutineHandle> mFunctions;
		public bool mCleanUpZombies;
		
		public void Initialize(){
			mFunctions = new List<CoroutineHandle>();
			mCleanUpZombies = false;
		}
		
		static bool IsZombie(CoroutineHandle target) {
			return target.mStopped;
		}
		
		public void Update(float delta){
			if(mCleanUpZombies){
				mFunctions.RemoveAll(IsZombie);
				mCleanUpZombies = false;
			}
			
			int count = mFunctions.Count;
			for( int i = 0 ; i < count; ++i ){
				CoroutineHandle node = mFunctions[i];
				if( node.Update(delta) ){
					mCleanUpZombies = true;
				}
			}
		}
	}
	
	[System.NonSerialized] public Sequence[] mSequences = new Sequence[(int)SequenceType.Max];
	
	//----------------------------------------------------------
	// Public Functions
	//----------------------------------------------------------
	public CoroutineHandle StartSequence(GameObject target, // if target is non-null, the sequence will automatically stop if the target is deactivated or destroyed. if target it null, the coroutine can persist beyond that.
	                                     IEnumerator function, // the function to run as a coroutine
	                                     SequenceType type = SequenceType.Normal, // if you specify SequenceType.RealTime, the coroutine will run even while the game is paused
	                                     bool syncStart=false // if syncStart is true, the coroutine will run up until the first "yield" before StartSequence returns, otherwise it's deferred until the next frame
	                                     ){
#if UNITY_EDITOR
		if(isEditModeUpdater) {
			type = SequenceType.RealTime;
		}
#endif
		if (!syncStart || function.MoveNext()) {
			CoroutineHandle node = new CoroutineHandle( target, function, type );
			mSequences[(int)type].mFunctions.Add(node);
			if(syncStart) { node.ProcessMoveResult(); }
			return node;
		}
		return null;
	}
	
	// same as the above StartSequence, except it will automatically stop and replace an existing instance of the sequence if it is already running.
	public void StartSequence(ref CoroutineHandle coroutineHandle, GameObject target, IEnumerator function, SequenceType type = SequenceType.Normal, bool syncStart=false){
		if(coroutineHandle != null) { StopSequence(coroutineHandle); }
		coroutineHandle = StartSequence(target, function, type, syncStart);
	}
	
	// convenience overloads
	public CoroutineHandle StartSequence(IEnumerator function, SequenceType type = SequenceType.Normal, bool syncStart=true) {
		return StartSequence(null, function, type, syncStart);
	}
	public void StartSequence(ref CoroutineHandle coroutineHandle, IEnumerator function, SequenceType type = SequenceType.Normal, bool syncStart=true) {
		StartSequence(ref coroutineHandle, null, function, type, syncStart);
	}
	
	// stops a sequence if it is already running (it can be either garbage-collected, or resumed later via ResumeSequence)
	public void StopSequence(CoroutineHandle handle){
		if( handle != null && !handle.mStopped ){
			handle.mStopped = true;
			mSequences[(int)handle.mType].mCleanUpZombies = true;
			if(handle.mWaitSequence != null)
				StopSequence(handle.mWaitSequence);
		}
	}
	
	// continues running a sequence that was previously stopped (either by a call to StopSequence or by its target becoming inactive)
	public CoroutineHandle ResumeSequence(CoroutineHandle handle, SequenceType type = SequenceType.Normal){
		if(handle != null && !handle.mFinished) {
			handle.mPretendDone = false;
			if(handle.mStopped) {
				handle.mStopped = false;
				mSequences[(int)type].mFunctions.Add(handle);
			}
			if(handle.mWaitSequence != null)
				ResumeSequence(handle.mWaitSequence);
			return handle;
		}
		return null;
	}
	
	// tells any sequences that are waiting for the given sequence to stop waiting for it
	public void StopWaitingForSequence(CoroutineHandle handle){
		if(handle != null){
			handle.mPretendDone = true;
		}
	}
	
	// stops all sequences that are running
	public void StopAllSequences(){
		for (int i = 0; i < mSequences.Length; i++) {
			mSequences[i].mCleanUpZombies = true;
			if(mSequences[i].mFunctions != null) {
				for (int j = 0; j < mSequences[i].mFunctions.Count; j++) {
					CoroutineHandle handle = mSequences[i].mFunctions[j];
					handle.mStopped = true;
					// Debug.Log("Killing Sequence Type:" + handle.mType.ToString() + " Func:"+ handle.mFunction.ToString());
					if(handle.mWaitSequence != null)
						StopSequence(handle.mWaitSequence);
				}
			}
		}
	}
	
	// for safety, this makes it a compiler error to call UpdateMgr.Inst.StartCoroutine
	// if you really meant to start an actual Unity coroutine and not an extended coroutine / sequence,
	// you can call it like: ((MonoBehaviour)(UpdateMgr.Inst)).StartCoroutine
	[System.Obsolete("Please use UpdateMgr.Inst.StartSequence instead.", true)]
	new public Coroutine StartCoroutine(IEnumerator routine) { return null; }
	
	//----------------------------------------------------------
	//Unity Callbacks
	//----------------------------------------------------------
	void Awake(){
		isQuittingOrExitingLevel = false;
		if( Inst == null || (!autoCreated && Inst.autoCreated) ){
			Inst = this;
//		} else {
//			Debug.LogError("There are multiple UpdateMgr", this);
//			//return;
		}
		Initialize();
	}
	
	[System.NonSerialized] bool initialized;
	void Initialize() {
		initialized = true;
		for( int i = 0 ; i < (int)SequenceType.Max ; ++i ){
			mSequences[i].Initialize();
		}
	}
	
	public event Delegates.Action onDestroy;
	
	void OnDestroy()
	{
		if(Inst == this)
			Inst = null;
		StopAllSequences();
		if(onDestroy != null) {
			onDestroy();	
		}
#if UNITY_EDITOR
		if(isEditModeUpdater) {
			UnityEditor.EditorApplication.update -= Update;
	}
#endif
	}
	
	void Update () {
#if UNITY_EDITOR
		if(Application.isPlaying == isEditModeUpdater) {
			return;
		}
#endif
		if(!initialized) {
			Initialize();
		}

		float realDeltaTime;
#if UNITY_EDITOR
		if(isEditModeUpdater) {
			editorRealTime.Update();
			realDeltaTime = editorRealTime.deltaTime;
		}
		else
#endif
		{
			realDeltaTime = RealTime.DeltaTime;
		}

		//Update Real-Time Coroutines
		mSequences[(int)SequenceType.RealTime].Update(realDeltaTime);
#if UNUSEDART		
		for(x=0; x<mRealTimeStaggeredUpdaters.Length; x++) {
			mRealTimeStaggeredUpdaters[x].PerformUpdates();
		}
#endif
		
		if(Time.timeScale > 0.0f)
			//if(!PauseManager.Inst.IsPaused())
		{
			//Update Coroutines
			mSequences[(int)SequenceType.Normal].Update(Time.deltaTime);
#if UNUSEDART
			for(x=0; x<mGameTimeStaggeredUpdaters.Length; x++) {
				mGameTimeStaggeredUpdaters[x].PerformUpdates();
			}
#endif
		}
	}

#if UNITY_EDITOR
	void FixedUpdate() {
		if(!Application.isPlaying || isEditModeUpdater) {
			return;
		}
		if(!initialized) {
			Initialize();
		}
		//Update fixed-update Coroutines
		mSequences[(int)SequenceType.Fixed].Update(Time.deltaTime);
	}
#endif

#if UNUSEDART
	public void RegisterStaggeredUpdater(StaggeredUpdater su)
	{
		if(su != null)
		{
			if(su.updaterName != null && su.updaterName.Length != 0)
				mStaggeredUpdaterMap[su.updaterName] = su;
			if(su.updateWhilePaused)
				ArrayHelper.Add(ref mRealTimeStaggeredUpdaters, su);
			else
				ArrayHelper.Add(ref mGameTimeStaggeredUpdaters, su);
		}
	}
	public StaggeredUpdater GetStaggeredUpdater(string updaterName)
	{
		StaggeredUpdater rv;
		mStaggeredUpdaterMap.TryGetValue(updaterName, out rv);
		return rv;
	}
	#endif

	void OnApplicationQuit()
	{
		isQuitting = true;
		isQuittingOrExitingLevel = true;
		//		QuitGame.Quit().MoveNext();
	}
	
#if UNITY_EDITOR
	[System.NonSerialized] public bool isEditModeUpdater;
	[System.NonSerialized] public EditorRealTime editorRealTime;

	static public UpdateMgr InstEditMode { get {
		if(Application.isPlaying) {
			throw new System.InvalidOperationException("Calling UpdateMgr.InstEditMode is not allowed while the game is playing");
		}
		if(!Inst || !Inst.isEditModeUpdater) {
			const string autoCreatedName = "EditMode UpdateMgr";
			foreach(UnityEngine.Object o in Resources.FindObjectsOfTypeAll(typeof(UpdateMgr))) {
				if(o && o is UpdateMgr && o.name.StartsWith(autoCreatedName)) {
					Inst = (UpdateMgr)o;
					break;
				}
			}
			if(!Inst) {
				GameObject go = new GameObject(autoCreatedName);
				Inst = go.AddComponent<UpdateMgr>();
				Stm.V1_1.SceneHelper.Immortalize(go);
				go.hideFlags |= HideFlags.DontSave;
			}
		}
		if(!Inst.isEditModeUpdater) {
			Inst.isEditModeUpdater = true;
			Inst.editorRealTime = new EditorRealTime();
			UnityEditor.EditorApplication.update += Inst.Update;
		}
		if(!Inst.initialized) {
			Inst.Initialize();
		}
		return Inst;
	}}
#endif

	
}
