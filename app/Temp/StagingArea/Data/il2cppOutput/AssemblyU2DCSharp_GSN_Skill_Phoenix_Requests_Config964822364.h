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

// GSN.Skill.Phoenix.Requests.Config.FabricEventTokenData/Result
struct  Result_t964822364 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Config.FabricEventTokenData/Result::fabric_token
	String_t* ___fabric_token_0;
	// System.String GSN.Skill.Phoenix.Requests.Config.FabricEventTokenData/Result::eventEndpoint
	String_t* ___eventEndpoint_1;

public:
	inline static int32_t get_offset_of_fabric_token_0() { return static_cast<int32_t>(offsetof(Result_t964822364, ___fabric_token_0)); }
	inline String_t* get_fabric_token_0() const { return ___fabric_token_0; }
	inline String_t** get_address_of_fabric_token_0() { return &___fabric_token_0; }
	inline void set_fabric_token_0(String_t* value)
	{
		___fabric_token_0 = value;
		Il2CppCodeGenWriteBarrier(&___fabric_token_0, value);
	}

	inline static int32_t get_offset_of_eventEndpoint_1() { return static_cast<int32_t>(offsetof(Result_t964822364, ___eventEndpoint_1)); }
	inline String_t* get_eventEndpoint_1() const { return ___eventEndpoint_1; }
	inline String_t** get_address_of_eventEndpoint_1() { return &___eventEndpoint_1; }
	inline void set_eventEndpoint_1(String_t* value)
	{
		___eventEndpoint_1 = value;
		Il2CppCodeGenWriteBarrier(&___eventEndpoint_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Config.FabricEventTokenData/Result
struct Result_t964822364_marshaled_pinvoke
{
	char* ___fabric_token_0;
	char* ___eventEndpoint_1;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Config.FabricEventTokenData/Result
struct Result_t964822364_marshaled_com
{
	Il2CppChar* ___fabric_token_0;
	Il2CppChar* ___eventEndpoint_1;
};
