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
// GSN.Skill.Games.Tripeaks.Tutorial/TutorialGroupOptions[]
struct TutorialGroupOptionsU5BU5D_t3806852630;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.Tutorial
struct  Tutorial_t3830978326  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Games.Tripeaks.Tutorial::tutorialID
	String_t* ___tutorialID_0;
	// GSN.Skill.Games.Tripeaks.Tutorial/TutorialGroupOptions[] GSN.Skill.Games.Tripeaks.Tutorial::tutorialGroupOptions
	TutorialGroupOptionsU5BU5D_t3806852630* ___tutorialGroupOptions_1;

public:
	inline static int32_t get_offset_of_tutorialID_0() { return static_cast<int32_t>(offsetof(Tutorial_t3830978326, ___tutorialID_0)); }
	inline String_t* get_tutorialID_0() const { return ___tutorialID_0; }
	inline String_t** get_address_of_tutorialID_0() { return &___tutorialID_0; }
	inline void set_tutorialID_0(String_t* value)
	{
		___tutorialID_0 = value;
		Il2CppCodeGenWriteBarrier(&___tutorialID_0, value);
	}

	inline static int32_t get_offset_of_tutorialGroupOptions_1() { return static_cast<int32_t>(offsetof(Tutorial_t3830978326, ___tutorialGroupOptions_1)); }
	inline TutorialGroupOptionsU5BU5D_t3806852630* get_tutorialGroupOptions_1() const { return ___tutorialGroupOptions_1; }
	inline TutorialGroupOptionsU5BU5D_t3806852630** get_address_of_tutorialGroupOptions_1() { return &___tutorialGroupOptions_1; }
	inline void set_tutorialGroupOptions_1(TutorialGroupOptionsU5BU5D_t3806852630* value)
	{
		___tutorialGroupOptions_1 = value;
		Il2CppCodeGenWriteBarrier(&___tutorialGroupOptions_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
