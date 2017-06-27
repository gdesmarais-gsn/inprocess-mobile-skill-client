#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.Job/DoneContext>
struct List_1_t3435800551;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.Job>
struct List_1_t3371617205;
// System.Action[]
struct ActionU5BU5D_t87223449;
// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.TimeoutDispatcher
struct TimeoutDispatcher_t290349592;
// GSN.Skill.Games.Common.Utils.Heap
struct Heap_t3225244008;
// GSN.Skill.Games.Common.Utils.IJobController
struct IJobController_t3044627300;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job2669625216.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job_447295299.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job2799772509.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.Job
struct  Job_t4002496073  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Utils.Job/StartPhaseValue GSN.Skill.Games.Common.Utils.Job::StartPhase
	int32_t ___StartPhase_7;
	// GSN.Skill.Games.Common.Utils.Job/JobStateValue GSN.Skill.Games.Common.Utils.Job::JobState
	int32_t ___JobState_8;
	// GSN.Skill.Games.Common.Utils.Job/AutoResetValue GSN.Skill.Games.Common.Utils.Job::AutoReset
	int32_t ___AutoReset_9;
	// System.Boolean GSN.Skill.Games.Common.Utils.Job::Failed
	bool ___Failed_10;
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Utils.Job::actionQueue
	ActionQueue_t1924202305 * ___actionQueue_11;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.Job/DoneContext> GSN.Skill.Games.Common.Utils.Job::doneContexts
	List_1_t3435800551 * ___doneContexts_12;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.Job/DoneContext> GSN.Skill.Games.Common.Utils.Job::otherDoneContexts
	List_1_t3435800551 * ___otherDoneContexts_13;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.Job> GSN.Skill.Games.Common.Utils.Job::Prerequisites
	List_1_t3371617205 * ___Prerequisites_14;
	// System.Action[] GSN.Skill.Games.Common.Utils.Job::PrerequisiteDoneActions
	ActionU5BU5D_t87223449* ___PrerequisiteDoneActions_15;
	// System.Int32 GSN.Skill.Games.Common.Utils.Job::prerequisitesRunning
	int32_t ___prerequisitesRunning_16;
	// System.Int32 GSN.Skill.Games.Common.Utils.Job::<jobID>k__BackingField
	int32_t ___U3CjobIDU3Ek__BackingField_17;
	// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.Job::actionContext
	ActionContext_t4252928663 * ___actionContext_18;
	// System.String GSN.Skill.Games.Common.Utils.Job::contextNote
	String_t* ___contextNote_19;
	// System.String GSN.Skill.Games.Common.Utils.Job::Name
	String_t* ___Name_20;
	// System.Int32 GSN.Skill.Games.Common.Utils.Job::Timeout
	int32_t ___Timeout_21;
	// System.Boolean GSN.Skill.Games.Common.Utils.Job::<Aborted>k__BackingField
	bool ___U3CAbortedU3Ek__BackingField_22;
	// GSN.Skill.Games.Common.Utils.TimeoutDispatcher GSN.Skill.Games.Common.Utils.Job::jobTimeoutDispatcher
	TimeoutDispatcher_t290349592 * ___jobTimeoutDispatcher_23;
	// System.Boolean GSN.Skill.Games.Common.Utils.Job::<ActuallyStarted>k__BackingField
	bool ___U3CActuallyStartedU3Ek__BackingField_24;
	// GSN.Skill.Games.Common.Utils.Heap GSN.Skill.Games.Common.Utils.Job::<__heap>k__BackingField
	Heap_t3225244008 * ___U3C__heapU3Ek__BackingField_25;
	// System.Int32 GSN.Skill.Games.Common.Utils.Job::<__heapIndex>k__BackingField
	int32_t ___U3C__heapIndexU3Ek__BackingField_26;
	// System.Int32 GSN.Skill.Games.Common.Utils.Job::_Priority
	int32_t ____Priority_27;
	// GSN.Skill.Games.Common.Utils.IJobController GSN.Skill.Games.Common.Utils.Job::<Controller>k__BackingField
	Il2CppObject * ___U3CControllerU3Ek__BackingField_28;
	// System.Boolean GSN.Skill.Games.Common.Utils.Job::loggingEnabled
	bool ___loggingEnabled_30;
	// System.UInt32 GSN.Skill.Games.Common.Utils.Job::loggingPreferenceStrength
	uint32_t ___loggingPreferenceStrength_31;

public:
	inline static int32_t get_offset_of_StartPhase_7() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___StartPhase_7)); }
	inline int32_t get_StartPhase_7() const { return ___StartPhase_7; }
	inline int32_t* get_address_of_StartPhase_7() { return &___StartPhase_7; }
	inline void set_StartPhase_7(int32_t value)
	{
		___StartPhase_7 = value;
	}

	inline static int32_t get_offset_of_JobState_8() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___JobState_8)); }
	inline int32_t get_JobState_8() const { return ___JobState_8; }
	inline int32_t* get_address_of_JobState_8() { return &___JobState_8; }
	inline void set_JobState_8(int32_t value)
	{
		___JobState_8 = value;
	}

	inline static int32_t get_offset_of_AutoReset_9() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___AutoReset_9)); }
	inline int32_t get_AutoReset_9() const { return ___AutoReset_9; }
	inline int32_t* get_address_of_AutoReset_9() { return &___AutoReset_9; }
	inline void set_AutoReset_9(int32_t value)
	{
		___AutoReset_9 = value;
	}

	inline static int32_t get_offset_of_Failed_10() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___Failed_10)); }
	inline bool get_Failed_10() const { return ___Failed_10; }
	inline bool* get_address_of_Failed_10() { return &___Failed_10; }
	inline void set_Failed_10(bool value)
	{
		___Failed_10 = value;
	}

	inline static int32_t get_offset_of_actionQueue_11() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___actionQueue_11)); }
	inline ActionQueue_t1924202305 * get_actionQueue_11() const { return ___actionQueue_11; }
	inline ActionQueue_t1924202305 ** get_address_of_actionQueue_11() { return &___actionQueue_11; }
	inline void set_actionQueue_11(ActionQueue_t1924202305 * value)
	{
		___actionQueue_11 = value;
		Il2CppCodeGenWriteBarrier(&___actionQueue_11, value);
	}

	inline static int32_t get_offset_of_doneContexts_12() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___doneContexts_12)); }
	inline List_1_t3435800551 * get_doneContexts_12() const { return ___doneContexts_12; }
	inline List_1_t3435800551 ** get_address_of_doneContexts_12() { return &___doneContexts_12; }
	inline void set_doneContexts_12(List_1_t3435800551 * value)
	{
		___doneContexts_12 = value;
		Il2CppCodeGenWriteBarrier(&___doneContexts_12, value);
	}

	inline static int32_t get_offset_of_otherDoneContexts_13() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___otherDoneContexts_13)); }
	inline List_1_t3435800551 * get_otherDoneContexts_13() const { return ___otherDoneContexts_13; }
	inline List_1_t3435800551 ** get_address_of_otherDoneContexts_13() { return &___otherDoneContexts_13; }
	inline void set_otherDoneContexts_13(List_1_t3435800551 * value)
	{
		___otherDoneContexts_13 = value;
		Il2CppCodeGenWriteBarrier(&___otherDoneContexts_13, value);
	}

	inline static int32_t get_offset_of_Prerequisites_14() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___Prerequisites_14)); }
	inline List_1_t3371617205 * get_Prerequisites_14() const { return ___Prerequisites_14; }
	inline List_1_t3371617205 ** get_address_of_Prerequisites_14() { return &___Prerequisites_14; }
	inline void set_Prerequisites_14(List_1_t3371617205 * value)
	{
		___Prerequisites_14 = value;
		Il2CppCodeGenWriteBarrier(&___Prerequisites_14, value);
	}

	inline static int32_t get_offset_of_PrerequisiteDoneActions_15() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___PrerequisiteDoneActions_15)); }
	inline ActionU5BU5D_t87223449* get_PrerequisiteDoneActions_15() const { return ___PrerequisiteDoneActions_15; }
	inline ActionU5BU5D_t87223449** get_address_of_PrerequisiteDoneActions_15() { return &___PrerequisiteDoneActions_15; }
	inline void set_PrerequisiteDoneActions_15(ActionU5BU5D_t87223449* value)
	{
		___PrerequisiteDoneActions_15 = value;
		Il2CppCodeGenWriteBarrier(&___PrerequisiteDoneActions_15, value);
	}

	inline static int32_t get_offset_of_prerequisitesRunning_16() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___prerequisitesRunning_16)); }
	inline int32_t get_prerequisitesRunning_16() const { return ___prerequisitesRunning_16; }
	inline int32_t* get_address_of_prerequisitesRunning_16() { return &___prerequisitesRunning_16; }
	inline void set_prerequisitesRunning_16(int32_t value)
	{
		___prerequisitesRunning_16 = value;
	}

	inline static int32_t get_offset_of_U3CjobIDU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___U3CjobIDU3Ek__BackingField_17)); }
	inline int32_t get_U3CjobIDU3Ek__BackingField_17() const { return ___U3CjobIDU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CjobIDU3Ek__BackingField_17() { return &___U3CjobIDU3Ek__BackingField_17; }
	inline void set_U3CjobIDU3Ek__BackingField_17(int32_t value)
	{
		___U3CjobIDU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_actionContext_18() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___actionContext_18)); }
	inline ActionContext_t4252928663 * get_actionContext_18() const { return ___actionContext_18; }
	inline ActionContext_t4252928663 ** get_address_of_actionContext_18() { return &___actionContext_18; }
	inline void set_actionContext_18(ActionContext_t4252928663 * value)
	{
		___actionContext_18 = value;
		Il2CppCodeGenWriteBarrier(&___actionContext_18, value);
	}

	inline static int32_t get_offset_of_contextNote_19() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___contextNote_19)); }
	inline String_t* get_contextNote_19() const { return ___contextNote_19; }
	inline String_t** get_address_of_contextNote_19() { return &___contextNote_19; }
	inline void set_contextNote_19(String_t* value)
	{
		___contextNote_19 = value;
		Il2CppCodeGenWriteBarrier(&___contextNote_19, value);
	}

	inline static int32_t get_offset_of_Name_20() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___Name_20)); }
	inline String_t* get_Name_20() const { return ___Name_20; }
	inline String_t** get_address_of_Name_20() { return &___Name_20; }
	inline void set_Name_20(String_t* value)
	{
		___Name_20 = value;
		Il2CppCodeGenWriteBarrier(&___Name_20, value);
	}

	inline static int32_t get_offset_of_Timeout_21() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___Timeout_21)); }
	inline int32_t get_Timeout_21() const { return ___Timeout_21; }
	inline int32_t* get_address_of_Timeout_21() { return &___Timeout_21; }
	inline void set_Timeout_21(int32_t value)
	{
		___Timeout_21 = value;
	}

	inline static int32_t get_offset_of_U3CAbortedU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___U3CAbortedU3Ek__BackingField_22)); }
	inline bool get_U3CAbortedU3Ek__BackingField_22() const { return ___U3CAbortedU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CAbortedU3Ek__BackingField_22() { return &___U3CAbortedU3Ek__BackingField_22; }
	inline void set_U3CAbortedU3Ek__BackingField_22(bool value)
	{
		___U3CAbortedU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_jobTimeoutDispatcher_23() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___jobTimeoutDispatcher_23)); }
	inline TimeoutDispatcher_t290349592 * get_jobTimeoutDispatcher_23() const { return ___jobTimeoutDispatcher_23; }
	inline TimeoutDispatcher_t290349592 ** get_address_of_jobTimeoutDispatcher_23() { return &___jobTimeoutDispatcher_23; }
	inline void set_jobTimeoutDispatcher_23(TimeoutDispatcher_t290349592 * value)
	{
		___jobTimeoutDispatcher_23 = value;
		Il2CppCodeGenWriteBarrier(&___jobTimeoutDispatcher_23, value);
	}

	inline static int32_t get_offset_of_U3CActuallyStartedU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___U3CActuallyStartedU3Ek__BackingField_24)); }
	inline bool get_U3CActuallyStartedU3Ek__BackingField_24() const { return ___U3CActuallyStartedU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CActuallyStartedU3Ek__BackingField_24() { return &___U3CActuallyStartedU3Ek__BackingField_24; }
	inline void set_U3CActuallyStartedU3Ek__BackingField_24(bool value)
	{
		___U3CActuallyStartedU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3C__heapU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___U3C__heapU3Ek__BackingField_25)); }
	inline Heap_t3225244008 * get_U3C__heapU3Ek__BackingField_25() const { return ___U3C__heapU3Ek__BackingField_25; }
	inline Heap_t3225244008 ** get_address_of_U3C__heapU3Ek__BackingField_25() { return &___U3C__heapU3Ek__BackingField_25; }
	inline void set_U3C__heapU3Ek__BackingField_25(Heap_t3225244008 * value)
	{
		___U3C__heapU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3C__heapU3Ek__BackingField_25, value);
	}

	inline static int32_t get_offset_of_U3C__heapIndexU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___U3C__heapIndexU3Ek__BackingField_26)); }
	inline int32_t get_U3C__heapIndexU3Ek__BackingField_26() const { return ___U3C__heapIndexU3Ek__BackingField_26; }
	inline int32_t* get_address_of_U3C__heapIndexU3Ek__BackingField_26() { return &___U3C__heapIndexU3Ek__BackingField_26; }
	inline void set_U3C__heapIndexU3Ek__BackingField_26(int32_t value)
	{
		___U3C__heapIndexU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of__Priority_27() { return static_cast<int32_t>(offsetof(Job_t4002496073, ____Priority_27)); }
	inline int32_t get__Priority_27() const { return ____Priority_27; }
	inline int32_t* get_address_of__Priority_27() { return &____Priority_27; }
	inline void set__Priority_27(int32_t value)
	{
		____Priority_27 = value;
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___U3CControllerU3Ek__BackingField_28)); }
	inline Il2CppObject * get_U3CControllerU3Ek__BackingField_28() const { return ___U3CControllerU3Ek__BackingField_28; }
	inline Il2CppObject ** get_address_of_U3CControllerU3Ek__BackingField_28() { return &___U3CControllerU3Ek__BackingField_28; }
	inline void set_U3CControllerU3Ek__BackingField_28(Il2CppObject * value)
	{
		___U3CControllerU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CControllerU3Ek__BackingField_28, value);
	}

	inline static int32_t get_offset_of_loggingEnabled_30() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___loggingEnabled_30)); }
	inline bool get_loggingEnabled_30() const { return ___loggingEnabled_30; }
	inline bool* get_address_of_loggingEnabled_30() { return &___loggingEnabled_30; }
	inline void set_loggingEnabled_30(bool value)
	{
		___loggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_loggingPreferenceStrength_31() { return static_cast<int32_t>(offsetof(Job_t4002496073, ___loggingPreferenceStrength_31)); }
	inline uint32_t get_loggingPreferenceStrength_31() const { return ___loggingPreferenceStrength_31; }
	inline uint32_t* get_address_of_loggingPreferenceStrength_31() { return &___loggingPreferenceStrength_31; }
	inline void set_loggingPreferenceStrength_31(uint32_t value)
	{
		___loggingPreferenceStrength_31 = value;
	}
};

struct Job_t4002496073_StaticFields
{
public:
	// System.Int32 GSN.Skill.Games.Common.Utils.Job::JobCounter
	int32_t ___JobCounter_29;

public:
	inline static int32_t get_offset_of_JobCounter_29() { return static_cast<int32_t>(offsetof(Job_t4002496073_StaticFields, ___JobCounter_29)); }
	inline int32_t get_JobCounter_29() const { return ___JobCounter_29; }
	inline int32_t* get_address_of_JobCounter_29() { return &___JobCounter_29; }
	inline void set_JobCounter_29(int32_t value)
	{
		___JobCounter_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
