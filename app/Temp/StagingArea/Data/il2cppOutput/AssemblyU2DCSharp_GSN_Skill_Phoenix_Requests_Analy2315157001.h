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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/Self
struct  Self_t2315157001 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/Self::href
	String_t* ___href_0;

public:
	inline static int32_t get_offset_of_href_0() { return static_cast<int32_t>(offsetof(Self_t2315157001, ___href_0)); }
	inline String_t* get_href_0() const { return ___href_0; }
	inline String_t** get_address_of_href_0() { return &___href_0; }
	inline void set_href_0(String_t* value)
	{
		___href_0 = value;
		Il2CppCodeGenWriteBarrier(&___href_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/Self
struct Self_t2315157001_marshaled_pinvoke
{
	char* ___href_0;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/Self
struct Self_t2315157001_marshaled_com
{
	Il2CppChar* ___href_0;
};
