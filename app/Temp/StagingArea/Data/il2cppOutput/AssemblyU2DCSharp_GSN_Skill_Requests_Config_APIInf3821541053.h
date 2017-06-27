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
// GSN.Skill.Requests.Config.APIInfoData/Endpoint[]
struct EndpointU5BU5D_t1972208962;
struct Endpoint_t492043539_marshaled_pinvoke;
struct Endpoint_t492043539_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.Config.APIInfoData/Service
struct  Service_t3821541053 
{
public:
	// System.String GSN.Skill.Requests.Config.APIInfoData/Service::name
	String_t* ___name_0;
	// System.String GSN.Skill.Requests.Config.APIInfoData/Service::path
	String_t* ___path_1;
	// GSN.Skill.Requests.Config.APIInfoData/Endpoint[] GSN.Skill.Requests.Config.APIInfoData/Service::endpoints
	EndpointU5BU5D_t1972208962* ___endpoints_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Service_t3821541053, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(Service_t3821541053, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier(&___path_1, value);
	}

	inline static int32_t get_offset_of_endpoints_2() { return static_cast<int32_t>(offsetof(Service_t3821541053, ___endpoints_2)); }
	inline EndpointU5BU5D_t1972208962* get_endpoints_2() const { return ___endpoints_2; }
	inline EndpointU5BU5D_t1972208962** get_address_of_endpoints_2() { return &___endpoints_2; }
	inline void set_endpoints_2(EndpointU5BU5D_t1972208962* value)
	{
		___endpoints_2 = value;
		Il2CppCodeGenWriteBarrier(&___endpoints_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Requests.Config.APIInfoData/Service
struct Service_t3821541053_marshaled_pinvoke
{
	char* ___name_0;
	char* ___path_1;
	Endpoint_t492043539_marshaled_pinvoke* ___endpoints_2;
};
// Native definition for COM marshalling of GSN.Skill.Requests.Config.APIInfoData/Service
struct Service_t3821541053_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___path_1;
	Endpoint_t492043539_marshaled_com* ___endpoints_2;
};
