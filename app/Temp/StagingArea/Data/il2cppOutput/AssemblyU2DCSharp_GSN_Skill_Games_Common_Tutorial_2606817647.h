#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Tutorial.TutorialStep>
struct List_1_t3675209492;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Tutorial.CompletedStep>
struct List_1_t3977087453;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.TutorialGroup
struct  TutorialGroup_t2606817647  : public ScriptableObject_t1975622470
{
public:
	// System.String GSN.Skill.Games.Common.Tutorial.TutorialGroup::Name
	String_t* ___Name_2;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Tutorial.TutorialStep> GSN.Skill.Games.Common.Tutorial.TutorialGroup::Steps
	List_1_t3675209492 * ___Steps_3;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Tutorial.CompletedStep> GSN.Skill.Games.Common.Tutorial.TutorialGroup::completedSteps
	List_1_t3977087453 * ___completedSteps_4;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(TutorialGroup_t2606817647, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier(&___Name_2, value);
	}

	inline static int32_t get_offset_of_Steps_3() { return static_cast<int32_t>(offsetof(TutorialGroup_t2606817647, ___Steps_3)); }
	inline List_1_t3675209492 * get_Steps_3() const { return ___Steps_3; }
	inline List_1_t3675209492 ** get_address_of_Steps_3() { return &___Steps_3; }
	inline void set_Steps_3(List_1_t3675209492 * value)
	{
		___Steps_3 = value;
		Il2CppCodeGenWriteBarrier(&___Steps_3, value);
	}

	inline static int32_t get_offset_of_completedSteps_4() { return static_cast<int32_t>(offsetof(TutorialGroup_t2606817647, ___completedSteps_4)); }
	inline List_1_t3977087453 * get_completedSteps_4() const { return ___completedSteps_4; }
	inline List_1_t3977087453 ** get_address_of_completedSteps_4() { return &___completedSteps_4; }
	inline void set_completedSteps_4(List_1_t3977087453 * value)
	{
		___completedSteps_4 = value;
		Il2CppCodeGenWriteBarrier(&___completedSteps_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
