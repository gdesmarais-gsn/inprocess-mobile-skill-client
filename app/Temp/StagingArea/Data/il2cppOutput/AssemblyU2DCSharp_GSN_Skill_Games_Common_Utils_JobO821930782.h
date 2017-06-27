#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.Job>
struct List_1_t3371617205;
// GSN.Skill.Games.Common.Utils.Heap
struct Heap_t3225244008;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.JobOrderQueue
struct  JobOrderQueue_t821930782  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.Job> GSN.Skill.Games.Common.Utils.JobOrderQueue::jobList
	List_1_t3371617205 * ___jobList_0;
	// GSN.Skill.Games.Common.Utils.Heap GSN.Skill.Games.Common.Utils.JobOrderQueue::runningJobs
	Heap_t3225244008 * ___runningJobs_1;
	// System.Int32 GSN.Skill.Games.Common.Utils.JobOrderQueue::maxRunning
	int32_t ___maxRunning_2;

public:
	inline static int32_t get_offset_of_jobList_0() { return static_cast<int32_t>(offsetof(JobOrderQueue_t821930782, ___jobList_0)); }
	inline List_1_t3371617205 * get_jobList_0() const { return ___jobList_0; }
	inline List_1_t3371617205 ** get_address_of_jobList_0() { return &___jobList_0; }
	inline void set_jobList_0(List_1_t3371617205 * value)
	{
		___jobList_0 = value;
		Il2CppCodeGenWriteBarrier(&___jobList_0, value);
	}

	inline static int32_t get_offset_of_runningJobs_1() { return static_cast<int32_t>(offsetof(JobOrderQueue_t821930782, ___runningJobs_1)); }
	inline Heap_t3225244008 * get_runningJobs_1() const { return ___runningJobs_1; }
	inline Heap_t3225244008 ** get_address_of_runningJobs_1() { return &___runningJobs_1; }
	inline void set_runningJobs_1(Heap_t3225244008 * value)
	{
		___runningJobs_1 = value;
		Il2CppCodeGenWriteBarrier(&___runningJobs_1, value);
	}

	inline static int32_t get_offset_of_maxRunning_2() { return static_cast<int32_t>(offsetof(JobOrderQueue_t821930782, ___maxRunning_2)); }
	inline int32_t get_maxRunning_2() const { return ___maxRunning_2; }
	inline int32_t* get_address_of_maxRunning_2() { return &___maxRunning_2; }
	inline void set_maxRunning_2(int32_t value)
	{
		___maxRunning_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
