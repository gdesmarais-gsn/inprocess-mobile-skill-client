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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.UIHelpPage
struct  UIHelpPage_t3687371716  : public MonoBehaviour_t1158329972
{
public:
	// System.String GSN.Skill.Games.Tripeaks.UIHelpPage::headerText
	String_t* ___headerText_2;

public:
	inline static int32_t get_offset_of_headerText_2() { return static_cast<int32_t>(offsetof(UIHelpPage_t3687371716, ___headerText_2)); }
	inline String_t* get_headerText_2() const { return ___headerText_2; }
	inline String_t** get_address_of_headerText_2() { return &___headerText_2; }
	inline void set_headerText_2(String_t* value)
	{
		___headerText_2 = value;
		Il2CppCodeGenWriteBarrier(&___headerText_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
