#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.WebRequestJob/onCompleteFunc
struct onCompleteFunc_t2278037447;
// GSN.Skill.Games.Common.Utils.JobPriorityQueue
struct JobPriorityQueue_t4214851120;
// GSN.Skill.Games.Common.Utils.Job
struct Job_t4002496073;
// GSN.Skill.Games.Common.Utils.WebRequestJob/FailChecker
struct FailChecker_t651280870;
// GSN.Skill.Games.Common.Utils.WebRequestJob/FatalChecker
struct FatalChecker_t1371496586;
// GSN.Skill.Games.Common.Utils.RequestWrapper
struct RequestWrapper_t293827378;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.WebRequestJob
struct  WebRequestJob_t3512327076  : public Job_t4002496073
{
public:
	// GSN.Skill.Games.Common.Utils.WebRequestJob/FailChecker GSN.Skill.Games.Common.Utils.WebRequestJob::CheckForFailure
	FailChecker_t651280870 * ___CheckForFailure_35;
	// GSN.Skill.Games.Common.Utils.WebRequestJob/FatalChecker GSN.Skill.Games.Common.Utils.WebRequestJob::CheckForFatal
	FatalChecker_t1371496586 * ___CheckForFatal_36;
	// GSN.Skill.Games.Common.Utils.RequestWrapper GSN.Skill.Games.Common.Utils.WebRequestJob::<Wrapper>k__BackingField
	RequestWrapper_t293827378 * ___U3CWrapperU3Ek__BackingField_37;

public:
	inline static int32_t get_offset_of_CheckForFailure_35() { return static_cast<int32_t>(offsetof(WebRequestJob_t3512327076, ___CheckForFailure_35)); }
	inline FailChecker_t651280870 * get_CheckForFailure_35() const { return ___CheckForFailure_35; }
	inline FailChecker_t651280870 ** get_address_of_CheckForFailure_35() { return &___CheckForFailure_35; }
	inline void set_CheckForFailure_35(FailChecker_t651280870 * value)
	{
		___CheckForFailure_35 = value;
		Il2CppCodeGenWriteBarrier(&___CheckForFailure_35, value);
	}

	inline static int32_t get_offset_of_CheckForFatal_36() { return static_cast<int32_t>(offsetof(WebRequestJob_t3512327076, ___CheckForFatal_36)); }
	inline FatalChecker_t1371496586 * get_CheckForFatal_36() const { return ___CheckForFatal_36; }
	inline FatalChecker_t1371496586 ** get_address_of_CheckForFatal_36() { return &___CheckForFatal_36; }
	inline void set_CheckForFatal_36(FatalChecker_t1371496586 * value)
	{
		___CheckForFatal_36 = value;
		Il2CppCodeGenWriteBarrier(&___CheckForFatal_36, value);
	}

	inline static int32_t get_offset_of_U3CWrapperU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(WebRequestJob_t3512327076, ___U3CWrapperU3Ek__BackingField_37)); }
	inline RequestWrapper_t293827378 * get_U3CWrapperU3Ek__BackingField_37() const { return ___U3CWrapperU3Ek__BackingField_37; }
	inline RequestWrapper_t293827378 ** get_address_of_U3CWrapperU3Ek__BackingField_37() { return &___U3CWrapperU3Ek__BackingField_37; }
	inline void set_U3CWrapperU3Ek__BackingField_37(RequestWrapper_t293827378 * value)
	{
		___U3CWrapperU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CWrapperU3Ek__BackingField_37, value);
	}
};

struct WebRequestJob_t3512327076_StaticFields
{
public:
	// GSN.Skill.Games.Common.Utils.WebRequestJob/onCompleteFunc GSN.Skill.Games.Common.Utils.WebRequestJob::GlobalOnComplete
	onCompleteFunc_t2278037447 * ___GlobalOnComplete_32;
	// GSN.Skill.Games.Common.Utils.JobPriorityQueue GSN.Skill.Games.Common.Utils.WebRequestJob::OurController
	JobPriorityQueue_t4214851120 * ___OurController_33;
	// GSN.Skill.Games.Common.Utils.Job GSN.Skill.Games.Common.Utils.WebRequestJob::HighPriorityJob
	Job_t4002496073 * ___HighPriorityJob_34;
	// System.Int32 GSN.Skill.Games.Common.Utils.WebRequestJob::DefaultTimeout
	int32_t ___DefaultTimeout_38;

public:
	inline static int32_t get_offset_of_GlobalOnComplete_32() { return static_cast<int32_t>(offsetof(WebRequestJob_t3512327076_StaticFields, ___GlobalOnComplete_32)); }
	inline onCompleteFunc_t2278037447 * get_GlobalOnComplete_32() const { return ___GlobalOnComplete_32; }
	inline onCompleteFunc_t2278037447 ** get_address_of_GlobalOnComplete_32() { return &___GlobalOnComplete_32; }
	inline void set_GlobalOnComplete_32(onCompleteFunc_t2278037447 * value)
	{
		___GlobalOnComplete_32 = value;
		Il2CppCodeGenWriteBarrier(&___GlobalOnComplete_32, value);
	}

	inline static int32_t get_offset_of_OurController_33() { return static_cast<int32_t>(offsetof(WebRequestJob_t3512327076_StaticFields, ___OurController_33)); }
	inline JobPriorityQueue_t4214851120 * get_OurController_33() const { return ___OurController_33; }
	inline JobPriorityQueue_t4214851120 ** get_address_of_OurController_33() { return &___OurController_33; }
	inline void set_OurController_33(JobPriorityQueue_t4214851120 * value)
	{
		___OurController_33 = value;
		Il2CppCodeGenWriteBarrier(&___OurController_33, value);
	}

	inline static int32_t get_offset_of_HighPriorityJob_34() { return static_cast<int32_t>(offsetof(WebRequestJob_t3512327076_StaticFields, ___HighPriorityJob_34)); }
	inline Job_t4002496073 * get_HighPriorityJob_34() const { return ___HighPriorityJob_34; }
	inline Job_t4002496073 ** get_address_of_HighPriorityJob_34() { return &___HighPriorityJob_34; }
	inline void set_HighPriorityJob_34(Job_t4002496073 * value)
	{
		___HighPriorityJob_34 = value;
		Il2CppCodeGenWriteBarrier(&___HighPriorityJob_34, value);
	}

	inline static int32_t get_offset_of_DefaultTimeout_38() { return static_cast<int32_t>(offsetof(WebRequestJob_t3512327076_StaticFields, ___DefaultTimeout_38)); }
	inline int32_t get_DefaultTimeout_38() const { return ___DefaultTimeout_38; }
	inline int32_t* get_address_of_DefaultTimeout_38() { return &___DefaultTimeout_38; }
	inline void set_DefaultTimeout_38(int32_t value)
	{
		___DefaultTimeout_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
