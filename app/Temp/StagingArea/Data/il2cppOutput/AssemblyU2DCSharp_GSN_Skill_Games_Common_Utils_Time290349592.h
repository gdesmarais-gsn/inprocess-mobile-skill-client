#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy>
struct Stack_1_t1573825995;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;
// System.Threading.Timer
struct Timer_t791717973;
// GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy
struct ActionProxy_t486097841;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.TimeoutDispatcher
struct  TimeoutDispatcher_t290349592  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Utils.TimeoutDispatcher::actionQueue
	ActionQueue_t1924202305 * ___actionQueue_1;
	// System.Threading.Timer GSN.Skill.Games.Common.Utils.TimeoutDispatcher::tt
	Timer_t791717973 * ___tt_2;
	// GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy GSN.Skill.Games.Common.Utils.TimeoutDispatcher::actionProxy
	ActionProxy_t486097841 * ___actionProxy_3;
	// System.Boolean GSN.Skill.Games.Common.Utils.TimeoutDispatcher::<Aborted>k__BackingField
	bool ___U3CAbortedU3Ek__BackingField_4;
	// System.Boolean GSN.Skill.Games.Common.Utils.TimeoutDispatcher::<Active>k__BackingField
	bool ___U3CActiveU3Ek__BackingField_5;
	// System.Int32 GSN.Skill.Games.Common.Utils.TimeoutDispatcher::<Duration>k__BackingField
	int32_t ___U3CDurationU3Ek__BackingField_6;
	// System.Object GSN.Skill.Games.Common.Utils.TimeoutDispatcher::locker
	Il2CppObject * ___locker_7;

public:
	inline static int32_t get_offset_of_actionQueue_1() { return static_cast<int32_t>(offsetof(TimeoutDispatcher_t290349592, ___actionQueue_1)); }
	inline ActionQueue_t1924202305 * get_actionQueue_1() const { return ___actionQueue_1; }
	inline ActionQueue_t1924202305 ** get_address_of_actionQueue_1() { return &___actionQueue_1; }
	inline void set_actionQueue_1(ActionQueue_t1924202305 * value)
	{
		___actionQueue_1 = value;
		Il2CppCodeGenWriteBarrier(&___actionQueue_1, value);
	}

	inline static int32_t get_offset_of_tt_2() { return static_cast<int32_t>(offsetof(TimeoutDispatcher_t290349592, ___tt_2)); }
	inline Timer_t791717973 * get_tt_2() const { return ___tt_2; }
	inline Timer_t791717973 ** get_address_of_tt_2() { return &___tt_2; }
	inline void set_tt_2(Timer_t791717973 * value)
	{
		___tt_2 = value;
		Il2CppCodeGenWriteBarrier(&___tt_2, value);
	}

	inline static int32_t get_offset_of_actionProxy_3() { return static_cast<int32_t>(offsetof(TimeoutDispatcher_t290349592, ___actionProxy_3)); }
	inline ActionProxy_t486097841 * get_actionProxy_3() const { return ___actionProxy_3; }
	inline ActionProxy_t486097841 ** get_address_of_actionProxy_3() { return &___actionProxy_3; }
	inline void set_actionProxy_3(ActionProxy_t486097841 * value)
	{
		___actionProxy_3 = value;
		Il2CppCodeGenWriteBarrier(&___actionProxy_3, value);
	}

	inline static int32_t get_offset_of_U3CAbortedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TimeoutDispatcher_t290349592, ___U3CAbortedU3Ek__BackingField_4)); }
	inline bool get_U3CAbortedU3Ek__BackingField_4() const { return ___U3CAbortedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CAbortedU3Ek__BackingField_4() { return &___U3CAbortedU3Ek__BackingField_4; }
	inline void set_U3CAbortedU3Ek__BackingField_4(bool value)
	{
		___U3CAbortedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CActiveU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TimeoutDispatcher_t290349592, ___U3CActiveU3Ek__BackingField_5)); }
	inline bool get_U3CActiveU3Ek__BackingField_5() const { return ___U3CActiveU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CActiveU3Ek__BackingField_5() { return &___U3CActiveU3Ek__BackingField_5; }
	inline void set_U3CActiveU3Ek__BackingField_5(bool value)
	{
		___U3CActiveU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CDurationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TimeoutDispatcher_t290349592, ___U3CDurationU3Ek__BackingField_6)); }
	inline int32_t get_U3CDurationU3Ek__BackingField_6() const { return ___U3CDurationU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CDurationU3Ek__BackingField_6() { return &___U3CDurationU3Ek__BackingField_6; }
	inline void set_U3CDurationU3Ek__BackingField_6(int32_t value)
	{
		___U3CDurationU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_locker_7() { return static_cast<int32_t>(offsetof(TimeoutDispatcher_t290349592, ___locker_7)); }
	inline Il2CppObject * get_locker_7() const { return ___locker_7; }
	inline Il2CppObject ** get_address_of_locker_7() { return &___locker_7; }
	inline void set_locker_7(Il2CppObject * value)
	{
		___locker_7 = value;
		Il2CppCodeGenWriteBarrier(&___locker_7, value);
	}
};

struct TimeoutDispatcher_t290349592_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy> GSN.Skill.Games.Common.Utils.TimeoutDispatcher::actionProxyPool
	Stack_1_t1573825995 * ___actionProxyPool_0;
	// System.Int32 GSN.Skill.Games.Common.Utils.TimeoutDispatcher::dispatches
	int32_t ___dispatches_8;

public:
	inline static int32_t get_offset_of_actionProxyPool_0() { return static_cast<int32_t>(offsetof(TimeoutDispatcher_t290349592_StaticFields, ___actionProxyPool_0)); }
	inline Stack_1_t1573825995 * get_actionProxyPool_0() const { return ___actionProxyPool_0; }
	inline Stack_1_t1573825995 ** get_address_of_actionProxyPool_0() { return &___actionProxyPool_0; }
	inline void set_actionProxyPool_0(Stack_1_t1573825995 * value)
	{
		___actionProxyPool_0 = value;
		Il2CppCodeGenWriteBarrier(&___actionProxyPool_0, value);
	}

	inline static int32_t get_offset_of_dispatches_8() { return static_cast<int32_t>(offsetof(TimeoutDispatcher_t290349592_StaticFields, ___dispatches_8)); }
	inline int32_t get_dispatches_8() const { return ___dispatches_8; }
	inline int32_t* get_address_of_dispatches_8() { return &___dispatches_8; }
	inline void set_dispatches_8(int32_t value)
	{
		___dispatches_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
