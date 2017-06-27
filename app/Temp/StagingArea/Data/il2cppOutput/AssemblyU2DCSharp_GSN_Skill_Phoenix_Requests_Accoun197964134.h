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

// GSN.Skill.Phoenix.Requests.Account.HelpDeskURLData/Result
struct  Result_t197964134 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Account.HelpDeskURLData/Result::url
	String_t* ___url_0;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(Result_t197964134, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier(&___url_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.HelpDeskURLData/Result
struct Result_t197964134_marshaled_pinvoke
{
	char* ___url_0;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.HelpDeskURLData/Result
struct Result_t197964134_marshaled_com
{
	Il2CppChar* ___url_0;
};
