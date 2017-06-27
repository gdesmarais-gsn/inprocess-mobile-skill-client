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

// GSN.Skill.Games.Common.Utils.PercentLoading
struct  PercentLoading_t2067839291  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Games.Common.Utils.PercentLoading::name
	String_t* ___name_0;
	// System.Single GSN.Skill.Games.Common.Utils.PercentLoading::_percentDone
	float ____percentDone_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PercentLoading_t2067839291, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of__percentDone_1() { return static_cast<int32_t>(offsetof(PercentLoading_t2067839291, ____percentDone_1)); }
	inline float get__percentDone_1() const { return ____percentDone_1; }
	inline float* get_address_of__percentDone_1() { return &____percentDone_1; }
	inline void set__percentDone_1(float value)
	{
		____percentDone_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
