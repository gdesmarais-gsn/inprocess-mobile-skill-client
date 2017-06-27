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

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.MultiJob
struct  MultiJob_t1652600978  : public Job_t4002496073
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.Job> GSN.Skill.Games.Common.Utils.MultiJob::SubJobs
	List_1_t3371617205 * ___SubJobs_32;
	// System.Boolean GSN.Skill.Games.Common.Utils.MultiJob::parallel
	bool ___parallel_33;
	// System.Boolean GSN.Skill.Games.Common.Utils.MultiJob::NeedOnlyOne
	bool ___NeedOnlyOne_34;
	// System.Int32 GSN.Skill.Games.Common.Utils.MultiJob::runningJobCount
	int32_t ___runningJobCount_35;
	// System.Int32 GSN.Skill.Games.Common.Utils.MultiJob::runningJobIndex
	int32_t ___runningJobIndex_36;
	// System.Boolean GSN.Skill.Games.Common.Utils.MultiJob::FailOnFirstFailure
	bool ___FailOnFirstFailure_37;
	// System.Boolean GSN.Skill.Games.Common.Utils.MultiJob::SucceedOnFirstSuccess
	bool ___SucceedOnFirstSuccess_38;

public:
	inline static int32_t get_offset_of_SubJobs_32() { return static_cast<int32_t>(offsetof(MultiJob_t1652600978, ___SubJobs_32)); }
	inline List_1_t3371617205 * get_SubJobs_32() const { return ___SubJobs_32; }
	inline List_1_t3371617205 ** get_address_of_SubJobs_32() { return &___SubJobs_32; }
	inline void set_SubJobs_32(List_1_t3371617205 * value)
	{
		___SubJobs_32 = value;
		Il2CppCodeGenWriteBarrier(&___SubJobs_32, value);
	}

	inline static int32_t get_offset_of_parallel_33() { return static_cast<int32_t>(offsetof(MultiJob_t1652600978, ___parallel_33)); }
	inline bool get_parallel_33() const { return ___parallel_33; }
	inline bool* get_address_of_parallel_33() { return &___parallel_33; }
	inline void set_parallel_33(bool value)
	{
		___parallel_33 = value;
	}

	inline static int32_t get_offset_of_NeedOnlyOne_34() { return static_cast<int32_t>(offsetof(MultiJob_t1652600978, ___NeedOnlyOne_34)); }
	inline bool get_NeedOnlyOne_34() const { return ___NeedOnlyOne_34; }
	inline bool* get_address_of_NeedOnlyOne_34() { return &___NeedOnlyOne_34; }
	inline void set_NeedOnlyOne_34(bool value)
	{
		___NeedOnlyOne_34 = value;
	}

	inline static int32_t get_offset_of_runningJobCount_35() { return static_cast<int32_t>(offsetof(MultiJob_t1652600978, ___runningJobCount_35)); }
	inline int32_t get_runningJobCount_35() const { return ___runningJobCount_35; }
	inline int32_t* get_address_of_runningJobCount_35() { return &___runningJobCount_35; }
	inline void set_runningJobCount_35(int32_t value)
	{
		___runningJobCount_35 = value;
	}

	inline static int32_t get_offset_of_runningJobIndex_36() { return static_cast<int32_t>(offsetof(MultiJob_t1652600978, ___runningJobIndex_36)); }
	inline int32_t get_runningJobIndex_36() const { return ___runningJobIndex_36; }
	inline int32_t* get_address_of_runningJobIndex_36() { return &___runningJobIndex_36; }
	inline void set_runningJobIndex_36(int32_t value)
	{
		___runningJobIndex_36 = value;
	}

	inline static int32_t get_offset_of_FailOnFirstFailure_37() { return static_cast<int32_t>(offsetof(MultiJob_t1652600978, ___FailOnFirstFailure_37)); }
	inline bool get_FailOnFirstFailure_37() const { return ___FailOnFirstFailure_37; }
	inline bool* get_address_of_FailOnFirstFailure_37() { return &___FailOnFirstFailure_37; }
	inline void set_FailOnFirstFailure_37(bool value)
	{
		___FailOnFirstFailure_37 = value;
	}

	inline static int32_t get_offset_of_SucceedOnFirstSuccess_38() { return static_cast<int32_t>(offsetof(MultiJob_t1652600978, ___SucceedOnFirstSuccess_38)); }
	inline bool get_SucceedOnFirstSuccess_38() const { return ___SucceedOnFirstSuccess_38; }
	inline bool* get_address_of_SucceedOnFirstSuccess_38() { return &___SucceedOnFirstSuccess_38; }
	inline void set_SucceedOnFirstSuccess_38(bool value)
	{
		___SucceedOnFirstSuccess_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
