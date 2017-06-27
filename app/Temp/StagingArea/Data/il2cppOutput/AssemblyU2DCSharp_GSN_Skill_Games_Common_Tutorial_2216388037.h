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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.JSONTutorialGroup
struct  JSONTutorialGroup_t2216388037  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Games.Common.Tutorial.JSONTutorialGroup::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Tutorial.TutorialStep> GSN.Skill.Games.Common.Tutorial.JSONTutorialGroup::Steps
	List_1_t3675209492 * ___Steps_1;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Tutorial.CompletedStep> GSN.Skill.Games.Common.Tutorial.JSONTutorialGroup::completedSteps
	List_1_t3977087453 * ___completedSteps_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(JSONTutorialGroup_t2216388037, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_Steps_1() { return static_cast<int32_t>(offsetof(JSONTutorialGroup_t2216388037, ___Steps_1)); }
	inline List_1_t3675209492 * get_Steps_1() const { return ___Steps_1; }
	inline List_1_t3675209492 ** get_address_of_Steps_1() { return &___Steps_1; }
	inline void set_Steps_1(List_1_t3675209492 * value)
	{
		___Steps_1 = value;
		Il2CppCodeGenWriteBarrier(&___Steps_1, value);
	}

	inline static int32_t get_offset_of_completedSteps_2() { return static_cast<int32_t>(offsetof(JSONTutorialGroup_t2216388037, ___completedSteps_2)); }
	inline List_1_t3977087453 * get_completedSteps_2() const { return ___completedSteps_2; }
	inline List_1_t3977087453 ** get_address_of_completedSteps_2() { return &___completedSteps_2; }
	inline void set_completedSteps_2(List_1_t3977087453 * value)
	{
		___completedSteps_2 = value;
		Il2CppCodeGenWriteBarrier(&___completedSteps_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
