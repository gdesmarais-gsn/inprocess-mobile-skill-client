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

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebPOSTReques2044927001.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Loggi1720508923.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Loggin505271366.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Logging.LogRequestData
struct  LogRequestData_t1906515357  : public WebPOSTRequest_1_t2044927001
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Logging.LogRequestData::<Log>k__BackingField
	String_t* ___U3CLogU3Ek__BackingField_8;
	// GSN.Skill.Phoenix.Requests.Logging.LogRequestData/LogLevel GSN.Skill.Phoenix.Requests.Logging.LogRequestData::_logLevel
	int32_t ____logLevel_9;
	// GSN.Skill.Phoenix.Requests.Logging.LogData GSN.Skill.Phoenix.Requests.Logging.LogRequestData::<Response>k__BackingField
	LogData_t505271366  ___U3CResponseU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CLogU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LogRequestData_t1906515357, ___U3CLogU3Ek__BackingField_8)); }
	inline String_t* get_U3CLogU3Ek__BackingField_8() const { return ___U3CLogU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CLogU3Ek__BackingField_8() { return &___U3CLogU3Ek__BackingField_8; }
	inline void set_U3CLogU3Ek__BackingField_8(String_t* value)
	{
		___U3CLogU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLogU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of__logLevel_9() { return static_cast<int32_t>(offsetof(LogRequestData_t1906515357, ____logLevel_9)); }
	inline int32_t get__logLevel_9() const { return ____logLevel_9; }
	inline int32_t* get_address_of__logLevel_9() { return &____logLevel_9; }
	inline void set__logLevel_9(int32_t value)
	{
		____logLevel_9 = value;
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(LogRequestData_t1906515357, ___U3CResponseU3Ek__BackingField_10)); }
	inline LogData_t505271366  get_U3CResponseU3Ek__BackingField_10() const { return ___U3CResponseU3Ek__BackingField_10; }
	inline LogData_t505271366 * get_address_of_U3CResponseU3Ek__BackingField_10() { return &___U3CResponseU3Ek__BackingField_10; }
	inline void set_U3CResponseU3Ek__BackingField_10(LogData_t505271366  value)
	{
		___U3CResponseU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
