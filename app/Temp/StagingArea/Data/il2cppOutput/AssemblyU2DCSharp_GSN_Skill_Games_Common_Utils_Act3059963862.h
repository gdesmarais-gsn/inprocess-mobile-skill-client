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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.ActionQueueChecker
struct  ActionQueueChecker_t3059963862  : public Il2CppObject
{
public:
	// System.Threading.Timer GSN.Skill.Games.Common.Utils.ActionQueueChecker::timer
	Timer_t791717973 * ___timer_0;
	// System.Int32 GSN.Skill.Games.Common.Utils.ActionQueueChecker::priorProcessCount
	int32_t ___priorProcessCount_1;
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Utils.ActionQueueChecker::actionQueue
	ActionQueue_t1924202305 * ___actionQueue_2;

public:
	inline static int32_t get_offset_of_timer_0() { return static_cast<int32_t>(offsetof(ActionQueueChecker_t3059963862, ___timer_0)); }
	inline Timer_t791717973 * get_timer_0() const { return ___timer_0; }
	inline Timer_t791717973 ** get_address_of_timer_0() { return &___timer_0; }
	inline void set_timer_0(Timer_t791717973 * value)
	{
		___timer_0 = value;
		Il2CppCodeGenWriteBarrier(&___timer_0, value);
	}

	inline static int32_t get_offset_of_priorProcessCount_1() { return static_cast<int32_t>(offsetof(ActionQueueChecker_t3059963862, ___priorProcessCount_1)); }
	inline int32_t get_priorProcessCount_1() const { return ___priorProcessCount_1; }
	inline int32_t* get_address_of_priorProcessCount_1() { return &___priorProcessCount_1; }
	inline void set_priorProcessCount_1(int32_t value)
	{
		___priorProcessCount_1 = value;
	}

	inline static int32_t get_offset_of_actionQueue_2() { return static_cast<int32_t>(offsetof(ActionQueueChecker_t3059963862, ___actionQueue_2)); }
	inline ActionQueue_t1924202305 * get_actionQueue_2() const { return ___actionQueue_2; }
	inline ActionQueue_t1924202305 ** get_address_of_actionQueue_2() { return &___actionQueue_2; }
	inline void set_actionQueue_2(ActionQueue_t1924202305 * value)
	{
		___actionQueue_2 = value;
		Il2CppCodeGenWriteBarrier(&___actionQueue_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
