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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.GsnPickerField/<OnPickerButtonPressed>c__AnonStorey0
struct  U3COnPickerButtonPressedU3Ec__AnonStorey0_t3985835360  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.View.GsnPickerField/<OnPickerButtonPressed>c__AnonStorey0::textToFind
	String_t* ___textToFind_0;

public:
	inline static int32_t get_offset_of_textToFind_0() { return static_cast<int32_t>(offsetof(U3COnPickerButtonPressedU3Ec__AnonStorey0_t3985835360, ___textToFind_0)); }
	inline String_t* get_textToFind_0() const { return ___textToFind_0; }
	inline String_t** get_address_of_textToFind_0() { return &___textToFind_0; }
	inline void set_textToFind_0(String_t* value)
	{
		___textToFind_0 = value;
		Il2CppCodeGenWriteBarrier(&___textToFind_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
