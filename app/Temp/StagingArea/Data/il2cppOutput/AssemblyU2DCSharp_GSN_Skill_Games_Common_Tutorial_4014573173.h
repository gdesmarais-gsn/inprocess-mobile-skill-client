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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tutorial_4144775853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.Unity.TutorialActiveArea
struct  TutorialActiveArea_t4014573173  : public MonoBehaviour_t1158329972
{
public:
	// GSN.Skill.Games.Common.Tutorial.Unity.TutorialActiveAreaType GSN.Skill.Games.Common.Tutorial.Unity.TutorialActiveArea::Type
	int32_t ___Type_2;
	// System.String GSN.Skill.Games.Common.Tutorial.Unity.TutorialActiveArea::Tag
	String_t* ___Tag_3;

public:
	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(TutorialActiveArea_t4014573173, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}

	inline static int32_t get_offset_of_Tag_3() { return static_cast<int32_t>(offsetof(TutorialActiveArea_t4014573173, ___Tag_3)); }
	inline String_t* get_Tag_3() const { return ___Tag_3; }
	inline String_t** get_address_of_Tag_3() { return &___Tag_3; }
	inline void set_Tag_3(String_t* value)
	{
		___Tag_3 = value;
		Il2CppCodeGenWriteBarrier(&___Tag_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
