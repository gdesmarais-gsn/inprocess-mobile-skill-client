#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Tutorial.TutorialStep
struct TutorialStep_t11121064;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.TutorialGroup/<AddStep>c__AnonStorey0
struct  U3CAddStepU3Ec__AnonStorey0_t1156606965  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Tutorial.TutorialStep GSN.Skill.Games.Common.Tutorial.TutorialGroup/<AddStep>c__AnonStorey0::step
	TutorialStep_t11121064 * ___step_0;

public:
	inline static int32_t get_offset_of_step_0() { return static_cast<int32_t>(offsetof(U3CAddStepU3Ec__AnonStorey0_t1156606965, ___step_0)); }
	inline TutorialStep_t11121064 * get_step_0() const { return ___step_0; }
	inline TutorialStep_t11121064 ** get_address_of_step_0() { return &___step_0; }
	inline void set_step_0(TutorialStep_t11121064 * value)
	{
		___step_0 = value;
		Il2CppCodeGenWriteBarrier(&___step_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
