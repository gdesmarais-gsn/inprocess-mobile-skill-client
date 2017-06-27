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

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebGETRequest4229472801.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIInfo301782448.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.Config.APIInfoRequestData
struct  APIInfoRequestData_t936324779  : public WebGETRequest_1_t4229472801
{
public:
	// System.String GSN.Skill.Requests.Config.APIInfoRequestData::_environment
	String_t* ____environment_8;
	// System.String GSN.Skill.Requests.Config.APIInfoRequestData::_port
	String_t* ____port_9;
	// GSN.Skill.Requests.Config.APIInfoData GSN.Skill.Requests.Config.APIInfoRequestData::<Response>k__BackingField
	APIInfoData_t301782448  ___U3CResponseU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of__environment_8() { return static_cast<int32_t>(offsetof(APIInfoRequestData_t936324779, ____environment_8)); }
	inline String_t* get__environment_8() const { return ____environment_8; }
	inline String_t** get_address_of__environment_8() { return &____environment_8; }
	inline void set__environment_8(String_t* value)
	{
		____environment_8 = value;
		Il2CppCodeGenWriteBarrier(&____environment_8, value);
	}

	inline static int32_t get_offset_of__port_9() { return static_cast<int32_t>(offsetof(APIInfoRequestData_t936324779, ____port_9)); }
	inline String_t* get__port_9() const { return ____port_9; }
	inline String_t** get_address_of__port_9() { return &____port_9; }
	inline void set__port_9(String_t* value)
	{
		____port_9 = value;
		Il2CppCodeGenWriteBarrier(&____port_9, value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(APIInfoRequestData_t936324779, ___U3CResponseU3Ek__BackingField_10)); }
	inline APIInfoData_t301782448  get_U3CResponseU3Ek__BackingField_10() const { return ___U3CResponseU3Ek__BackingField_10; }
	inline APIInfoData_t301782448 * get_address_of_U3CResponseU3Ek__BackingField_10() { return &___U3CResponseU3Ek__BackingField_10; }
	inline void set_U3CResponseU3Ek__BackingField_10(APIInfoData_t301782448  value)
	{
		___U3CResponseU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
