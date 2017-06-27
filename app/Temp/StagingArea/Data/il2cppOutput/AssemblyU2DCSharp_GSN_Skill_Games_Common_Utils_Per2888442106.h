#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob
struct PerseverantWebRequestJob_t2987958031;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4002496073.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob/OuterRecoverJob
struct  OuterRecoverJob_t2888442106  : public Job_t4002496073
{
public:
	// GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob GSN.Skill.Games.Common.Utils.PerseverantWebRequestJob/OuterRecoverJob::pwrj
	PerseverantWebRequestJob_t2987958031 * ___pwrj_32;

public:
	inline static int32_t get_offset_of_pwrj_32() { return static_cast<int32_t>(offsetof(OuterRecoverJob_t2888442106, ___pwrj_32)); }
	inline PerseverantWebRequestJob_t2987958031 * get_pwrj_32() const { return ___pwrj_32; }
	inline PerseverantWebRequestJob_t2987958031 ** get_address_of_pwrj_32() { return &___pwrj_32; }
	inline void set_pwrj_32(PerseverantWebRequestJob_t2987958031 * value)
	{
		___pwrj_32 = value;
		Il2CppCodeGenWriteBarrier(&___pwrj_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
