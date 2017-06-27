#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Timer
struct Timer_t791717973;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;
// System.Action
struct Action_t3226471752;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.ActionQueueIdleChecker
struct  ActionQueueIdleChecker_t1978646420  : public Il2CppObject
{
public:
	// System.Threading.Timer GSN.Skill.Games.Common.Utils.ActionQueueIdleChecker::timer
	Timer_t791717973 * ___timer_0;
	// System.Int32 GSN.Skill.Games.Common.Utils.ActionQueueIdleChecker::priorActionCount
	int32_t ___priorActionCount_1;
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Utils.ActionQueueIdleChecker::actionQueue
	ActionQueue_t1924202305 * ___actionQueue_2;
	// System.Int32 GSN.Skill.Games.Common.Utils.ActionQueueIdleChecker::secondsToCheckFor
	int32_t ___secondsToCheckFor_3;
	// System.Int32 GSN.Skill.Games.Common.Utils.ActionQueueIdleChecker::idleSecondCounter
	int32_t ___idleSecondCounter_4;
	// System.Action GSN.Skill.Games.Common.Utils.ActionQueueIdleChecker::idleCallback
	Action_t3226471752 * ___idleCallback_5;

public:
	inline static int32_t get_offset_of_timer_0() { return static_cast<int32_t>(offsetof(ActionQueueIdleChecker_t1978646420, ___timer_0)); }
	inline Timer_t791717973 * get_timer_0() const { return ___timer_0; }
	inline Timer_t791717973 ** get_address_of_timer_0() { return &___timer_0; }
	inline void set_timer_0(Timer_t791717973 * value)
	{
		___timer_0 = value;
		Il2CppCodeGenWriteBarrier(&___timer_0, value);
	}

	inline static int32_t get_offset_of_priorActionCount_1() { return static_cast<int32_t>(offsetof(ActionQueueIdleChecker_t1978646420, ___priorActionCount_1)); }
	inline int32_t get_priorActionCount_1() const { return ___priorActionCount_1; }
	inline int32_t* get_address_of_priorActionCount_1() { return &___priorActionCount_1; }
	inline void set_priorActionCount_1(int32_t value)
	{
		___priorActionCount_1 = value;
	}

	inline static int32_t get_offset_of_actionQueue_2() { return static_cast<int32_t>(offsetof(ActionQueueIdleChecker_t1978646420, ___actionQueue_2)); }
	inline ActionQueue_t1924202305 * get_actionQueue_2() const { return ___actionQueue_2; }
	inline ActionQueue_t1924202305 ** get_address_of_actionQueue_2() { return &___actionQueue_2; }
	inline void set_actionQueue_2(ActionQueue_t1924202305 * value)
	{
		___actionQueue_2 = value;
		Il2CppCodeGenWriteBarrier(&___actionQueue_2, value);
	}

	inline static int32_t get_offset_of_secondsToCheckFor_3() { return static_cast<int32_t>(offsetof(ActionQueueIdleChecker_t1978646420, ___secondsToCheckFor_3)); }
	inline int32_t get_secondsToCheckFor_3() const { return ___secondsToCheckFor_3; }
	inline int32_t* get_address_of_secondsToCheckFor_3() { return &___secondsToCheckFor_3; }
	inline void set_secondsToCheckFor_3(int32_t value)
	{
		___secondsToCheckFor_3 = value;
	}

	inline static int32_t get_offset_of_idleSecondCounter_4() { return static_cast<int32_t>(offsetof(ActionQueueIdleChecker_t1978646420, ___idleSecondCounter_4)); }
	inline int32_t get_idleSecondCounter_4() const { return ___idleSecondCounter_4; }
	inline int32_t* get_address_of_idleSecondCounter_4() { return &___idleSecondCounter_4; }
	inline void set_idleSecondCounter_4(int32_t value)
	{
		___idleSecondCounter_4 = value;
	}

	inline static int32_t get_offset_of_idleCallback_5() { return static_cast<int32_t>(offsetof(ActionQueueIdleChecker_t1978646420, ___idleCallback_5)); }
	inline Action_t3226471752 * get_idleCallback_5() const { return ___idleCallback_5; }
	inline Action_t3226471752 ** get_address_of_idleCallback_5() { return &___idleCallback_5; }
	inline void set_idleCallback_5(Action_t3226471752 * value)
	{
		___idleCallback_5 = value;
		Il2CppCodeGenWriteBarrier(&___idleCallback_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
