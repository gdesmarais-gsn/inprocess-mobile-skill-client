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

// GSN.Skill.Games.Common.Utils.JobPriorityQueue
struct  JobPriorityQueue_t4214851120  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Utils.Heap GSN.Skill.Games.Common.Utils.JobPriorityQueue::WaitingJobs
	Heap_t3225244008 * ___WaitingJobs_0;
	// GSN.Skill.Games.Common.Utils.Heap GSN.Skill.Games.Common.Utils.JobPriorityQueue::RunningJobs
	Heap_t3225244008 * ___RunningJobs_1;

public:
	inline static int32_t get_offset_of_WaitingJobs_0() { return static_cast<int32_t>(offsetof(JobPriorityQueue_t4214851120, ___WaitingJobs_0)); }
	inline Heap_t3225244008 * get_WaitingJobs_0() const { return ___WaitingJobs_0; }
	inline Heap_t3225244008 ** get_address_of_WaitingJobs_0() { return &___WaitingJobs_0; }
	inline void set_WaitingJobs_0(Heap_t3225244008 * value)
	{
		___WaitingJobs_0 = value;
		Il2CppCodeGenWriteBarrier(&___WaitingJobs_0, value);
	}

	inline static int32_t get_offset_of_RunningJobs_1() { return static_cast<int32_t>(offsetof(JobPriorityQueue_t4214851120, ___RunningJobs_1)); }
	inline Heap_t3225244008 * get_RunningJobs_1() const { return ___RunningJobs_1; }
	inline Heap_t3225244008 ** get_address_of_RunningJobs_1() { return &___RunningJobs_1; }
	inline void set_RunningJobs_1(Heap_t3225244008 * value)
	{
		___RunningJobs_1 = value;
		Il2CppCodeGenWriteBarrier(&___RunningJobs_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
