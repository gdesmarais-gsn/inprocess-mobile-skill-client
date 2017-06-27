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

// GSN.Skill.Requests.Config.APIInfoData/Endpoint
struct  Endpoint_t492043539 
{
public:
	// System.String GSN.Skill.Requests.Config.APIInfoData/Endpoint::name
	String_t* ___name_0;
	// System.String GSN.Skill.Requests.Config.APIInfoData/Endpoint::requestMethod
	String_t* ___requestMethod_1;
	// System.String GSN.Skill.Requests.Config.APIInfoData/Endpoint::path
	String_t* ___path_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Endpoint_t492043539, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_requestMethod_1() { return static_cast<int32_t>(offsetof(Endpoint_t492043539, ___requestMethod_1)); }
	inline String_t* get_requestMethod_1() const { return ___requestMethod_1; }
	inline String_t** get_address_of_requestMethod_1() { return &___requestMethod_1; }
	inline void set_requestMethod_1(String_t* value)
	{
		___requestMethod_1 = value;
		Il2CppCodeGenWriteBarrier(&___requestMethod_1, value);
	}

	inline static int32_t get_offset_of_path_2() { return static_cast<int32_t>(offsetof(Endpoint_t492043539, ___path_2)); }
	inline String_t* get_path_2() const { return ___path_2; }
	inline String_t** get_address_of_path_2() { return &___path_2; }
	inline void set_path_2(String_t* value)
	{
		___path_2 = value;
		Il2CppCodeGenWriteBarrier(&___path_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Requests.Config.APIInfoData/Endpoint
struct Endpoint_t492043539_marshaled_pinvoke
{
	char* ___name_0;
	char* ___requestMethod_1;
	char* ___path_2;
};
// Native definition for COM marshalling of GSN.Skill.Requests.Config.APIInfoData/Endpoint
struct Endpoint_t492043539_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___requestMethod_1;
	Il2CppChar* ___path_2;
};
