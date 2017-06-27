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

// GSN.Skill.Utils.StringExtensions/<HexToBytes>c__AnonStorey0
struct  U3CHexToBytesU3Ec__AnonStorey0_t934234790  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Utils.StringExtensions/<HexToBytes>c__AnonStorey0::input
	String_t* ___input_0;

public:
	inline static int32_t get_offset_of_input_0() { return static_cast<int32_t>(offsetof(U3CHexToBytesU3Ec__AnonStorey0_t934234790, ___input_0)); }
	inline String_t* get_input_0() const { return ___input_0; }
	inline String_t** get_address_of_input_0() { return &___input_0; }
	inline void set_input_0(String_t* value)
	{
		___input_0 = value;
		Il2CppCodeGenWriteBarrier(&___input_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
