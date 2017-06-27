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

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_Tutorial553455370.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.Tutorial/TutorialGroupOptions
struct  TutorialGroupOptions_t4063233487 
{
public:
	// System.String GSN.Skill.Games.Tripeaks.Tutorial/TutorialGroupOptions::tutorialGroup
	String_t* ___tutorialGroup_0;
	// GSN.Skill.Games.Tripeaks.Tutorial/TutorialStep GSN.Skill.Games.Tripeaks.Tutorial/TutorialGroupOptions::triggerTutorialOnStep
	int32_t ___triggerTutorialOnStep_1;

public:
	inline static int32_t get_offset_of_tutorialGroup_0() { return static_cast<int32_t>(offsetof(TutorialGroupOptions_t4063233487, ___tutorialGroup_0)); }
	inline String_t* get_tutorialGroup_0() const { return ___tutorialGroup_0; }
	inline String_t** get_address_of_tutorialGroup_0() { return &___tutorialGroup_0; }
	inline void set_tutorialGroup_0(String_t* value)
	{
		___tutorialGroup_0 = value;
		Il2CppCodeGenWriteBarrier(&___tutorialGroup_0, value);
	}

	inline static int32_t get_offset_of_triggerTutorialOnStep_1() { return static_cast<int32_t>(offsetof(TutorialGroupOptions_t4063233487, ___triggerTutorialOnStep_1)); }
	inline int32_t get_triggerTutorialOnStep_1() const { return ___triggerTutorialOnStep_1; }
	inline int32_t* get_address_of_triggerTutorialOnStep_1() { return &___triggerTutorialOnStep_1; }
	inline void set_triggerTutorialOnStep_1(int32_t value)
	{
		___triggerTutorialOnStep_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Games.Tripeaks.Tutorial/TutorialGroupOptions
struct TutorialGroupOptions_t4063233487_marshaled_pinvoke
{
	char* ___tutorialGroup_0;
	int32_t ___triggerTutorialOnStep_1;
};
// Native definition for COM marshalling of GSN.Skill.Games.Tripeaks.Tutorial/TutorialGroupOptions
struct TutorialGroupOptions_t4063233487_marshaled_com
{
	Il2CppChar* ___tutorialGroup_0;
	int32_t ___triggerTutorialOnStep_1;
};
