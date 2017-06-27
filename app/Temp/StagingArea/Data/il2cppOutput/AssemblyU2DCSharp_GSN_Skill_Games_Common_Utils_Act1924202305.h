#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.ObjectPool`1<GSN.Skill.Games.Common.Utils.ActionContext>
struct ObjectPool_1_t2493978624;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.ActionQueue/ActionWrapper>
struct List_1_t1712882905;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.ActionContext>
struct List_1_t3622049795;
// System.Object
struct Il2CppObject;
// System.Action
struct Action_t3226471752;
// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act2343761773.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.ActionQueue
struct  ActionQueue_t1924202305  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Utils.ObjectPool`1<GSN.Skill.Games.Common.Utils.ActionContext> GSN.Skill.Games.Common.Utils.ActionQueue::actionContextPool
	ObjectPool_1_t2493978624 * ___actionContextPool_1;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.ActionQueue/ActionWrapper> GSN.Skill.Games.Common.Utils.ActionQueue::mainList
	List_1_t1712882905 * ___mainList_2;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.ActionQueue/ActionWrapper> GSN.Skill.Games.Common.Utils.ActionQueue::otherList
	List_1_t1712882905 * ___otherList_3;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.ActionContext> GSN.Skill.Games.Common.Utils.ActionQueue::retiredContexts
	List_1_t3622049795 * ___retiredContexts_4;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.ActionContext> GSN.Skill.Games.Common.Utils.ActionQueue::activeContexts
	List_1_t3622049795 * ___activeContexts_5;
	// System.Object GSN.Skill.Games.Common.Utils.ActionQueue::locker
	Il2CppObject * ___locker_6;
	// System.Action GSN.Skill.Games.Common.Utils.ActionQueue::OnFrame
	Action_t3226471752 * ___OnFrame_7;
	// System.Int32 GSN.Skill.Games.Common.Utils.ActionQueue::ProcessCount
	int32_t ___ProcessCount_8;
	// System.Int32 GSN.Skill.Games.Common.Utils.ActionQueue::ActionCount
	int32_t ___ActionCount_9;
	// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.ActionQueue::<RootActionContext>k__BackingField
	ActionContext_t4252928663 * ___U3CRootActionContextU3Ek__BackingField_10;
	// GSN.Skill.Games.Common.Utils.ActionQueue/ActionWrapper GSN.Skill.Games.Common.Utils.ActionQueue::currentWrapper
	ActionWrapper_t2343761773  ___currentWrapper_11;
	// System.String GSN.Skill.Games.Common.Utils.ActionQueue::<ExceptionMessage>k__BackingField
	String_t* ___U3CExceptionMessageU3Ek__BackingField_13;
	// System.Boolean GSN.Skill.Games.Common.Utils.ActionQueue::stopFrames
	bool ___stopFrames_14;

public:
	inline static int32_t get_offset_of_actionContextPool_1() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___actionContextPool_1)); }
	inline ObjectPool_1_t2493978624 * get_actionContextPool_1() const { return ___actionContextPool_1; }
	inline ObjectPool_1_t2493978624 ** get_address_of_actionContextPool_1() { return &___actionContextPool_1; }
	inline void set_actionContextPool_1(ObjectPool_1_t2493978624 * value)
	{
		___actionContextPool_1 = value;
		Il2CppCodeGenWriteBarrier(&___actionContextPool_1, value);
	}

	inline static int32_t get_offset_of_mainList_2() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___mainList_2)); }
	inline List_1_t1712882905 * get_mainList_2() const { return ___mainList_2; }
	inline List_1_t1712882905 ** get_address_of_mainList_2() { return &___mainList_2; }
	inline void set_mainList_2(List_1_t1712882905 * value)
	{
		___mainList_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainList_2, value);
	}

	inline static int32_t get_offset_of_otherList_3() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___otherList_3)); }
	inline List_1_t1712882905 * get_otherList_3() const { return ___otherList_3; }
	inline List_1_t1712882905 ** get_address_of_otherList_3() { return &___otherList_3; }
	inline void set_otherList_3(List_1_t1712882905 * value)
	{
		___otherList_3 = value;
		Il2CppCodeGenWriteBarrier(&___otherList_3, value);
	}

	inline static int32_t get_offset_of_retiredContexts_4() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___retiredContexts_4)); }
	inline List_1_t3622049795 * get_retiredContexts_4() const { return ___retiredContexts_4; }
	inline List_1_t3622049795 ** get_address_of_retiredContexts_4() { return &___retiredContexts_4; }
	inline void set_retiredContexts_4(List_1_t3622049795 * value)
	{
		___retiredContexts_4 = value;
		Il2CppCodeGenWriteBarrier(&___retiredContexts_4, value);
	}

	inline static int32_t get_offset_of_activeContexts_5() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___activeContexts_5)); }
	inline List_1_t3622049795 * get_activeContexts_5() const { return ___activeContexts_5; }
	inline List_1_t3622049795 ** get_address_of_activeContexts_5() { return &___activeContexts_5; }
	inline void set_activeContexts_5(List_1_t3622049795 * value)
	{
		___activeContexts_5 = value;
		Il2CppCodeGenWriteBarrier(&___activeContexts_5, value);
	}

	inline static int32_t get_offset_of_locker_6() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___locker_6)); }
	inline Il2CppObject * get_locker_6() const { return ___locker_6; }
	inline Il2CppObject ** get_address_of_locker_6() { return &___locker_6; }
	inline void set_locker_6(Il2CppObject * value)
	{
		___locker_6 = value;
		Il2CppCodeGenWriteBarrier(&___locker_6, value);
	}

	inline static int32_t get_offset_of_OnFrame_7() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___OnFrame_7)); }
	inline Action_t3226471752 * get_OnFrame_7() const { return ___OnFrame_7; }
	inline Action_t3226471752 ** get_address_of_OnFrame_7() { return &___OnFrame_7; }
	inline void set_OnFrame_7(Action_t3226471752 * value)
	{
		___OnFrame_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnFrame_7, value);
	}

	inline static int32_t get_offset_of_ProcessCount_8() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___ProcessCount_8)); }
	inline int32_t get_ProcessCount_8() const { return ___ProcessCount_8; }
	inline int32_t* get_address_of_ProcessCount_8() { return &___ProcessCount_8; }
	inline void set_ProcessCount_8(int32_t value)
	{
		___ProcessCount_8 = value;
	}

	inline static int32_t get_offset_of_ActionCount_9() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___ActionCount_9)); }
	inline int32_t get_ActionCount_9() const { return ___ActionCount_9; }
	inline int32_t* get_address_of_ActionCount_9() { return &___ActionCount_9; }
	inline void set_ActionCount_9(int32_t value)
	{
		___ActionCount_9 = value;
	}

	inline static int32_t get_offset_of_U3CRootActionContextU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___U3CRootActionContextU3Ek__BackingField_10)); }
	inline ActionContext_t4252928663 * get_U3CRootActionContextU3Ek__BackingField_10() const { return ___U3CRootActionContextU3Ek__BackingField_10; }
	inline ActionContext_t4252928663 ** get_address_of_U3CRootActionContextU3Ek__BackingField_10() { return &___U3CRootActionContextU3Ek__BackingField_10; }
	inline void set_U3CRootActionContextU3Ek__BackingField_10(ActionContext_t4252928663 * value)
	{
		___U3CRootActionContextU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRootActionContextU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_currentWrapper_11() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___currentWrapper_11)); }
	inline ActionWrapper_t2343761773  get_currentWrapper_11() const { return ___currentWrapper_11; }
	inline ActionWrapper_t2343761773 * get_address_of_currentWrapper_11() { return &___currentWrapper_11; }
	inline void set_currentWrapper_11(ActionWrapper_t2343761773  value)
	{
		___currentWrapper_11 = value;
	}

	inline static int32_t get_offset_of_U3CExceptionMessageU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___U3CExceptionMessageU3Ek__BackingField_13)); }
	inline String_t* get_U3CExceptionMessageU3Ek__BackingField_13() const { return ___U3CExceptionMessageU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CExceptionMessageU3Ek__BackingField_13() { return &___U3CExceptionMessageU3Ek__BackingField_13; }
	inline void set_U3CExceptionMessageU3Ek__BackingField_13(String_t* value)
	{
		___U3CExceptionMessageU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExceptionMessageU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_stopFrames_14() { return static_cast<int32_t>(offsetof(ActionQueue_t1924202305, ___stopFrames_14)); }
	inline bool get_stopFrames_14() const { return ___stopFrames_14; }
	inline bool* get_address_of_stopFrames_14() { return &___stopFrames_14; }
	inline void set_stopFrames_14(bool value)
	{
		___stopFrames_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
