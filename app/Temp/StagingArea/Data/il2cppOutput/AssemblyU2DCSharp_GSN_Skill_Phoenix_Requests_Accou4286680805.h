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

// GSN.Skill.Phoenix.Requests.Account.LogoutData/Result
struct  Result_t4286680805 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Account.LogoutData/Result::info
	String_t* ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Result_t4286680805, ___info_0)); }
	inline String_t* get_info_0() const { return ___info_0; }
	inline String_t** get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(String_t* value)
	{
		___info_0 = value;
		Il2CppCodeGenWriteBarrier(&___info_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.LogoutData/Result
struct Result_t4286680805_marshaled_pinvoke
{
	char* ___info_0;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.LogoutData/Result
struct Result_t4286680805_marshaled_com
{
	Il2CppChar* ___info_0;
};
