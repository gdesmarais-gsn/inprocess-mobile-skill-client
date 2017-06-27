#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.Heap
struct Heap_t3225244008;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.RetryJobController
struct  RetryJobController_t1436723529  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Utils.Heap GSN.Skill.Games.Common.Utils.RetryJobController::runningJobs
	Heap_t3225244008 * ___runningJobs_0;

public:
	inline static int32_t get_offset_of_runningJobs_0() { return static_cast<int32_t>(offsetof(RetryJobController_t1436723529, ___runningJobs_0)); }
	inline Heap_t3225244008 * get_runningJobs_0() const { return ___runningJobs_0; }
	inline Heap_t3225244008 ** get_address_of_runningJobs_0() { return &___runningJobs_0; }
	inline void set_runningJobs_0(Heap_t3225244008 * value)
	{
		___runningJobs_0 = value;
		Il2CppCodeGenWriteBarrier(&___runningJobs_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
