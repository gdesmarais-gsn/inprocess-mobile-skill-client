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

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebPOSTRequest824516547.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou3499681863.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou3579828208.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.CheckLocationLegalityRequestData
struct  CheckLocationLegalityRequestData_t2809632747  : public WebPOSTRequest_1_t824516547
{
public:
	// GSN.Skill.Phoenix.Requests.Account.CheckLocationLegalityRequestData/GpsData GSN.Skill.Phoenix.Requests.Account.CheckLocationLegalityRequestData::_gpsData
	GpsData_t3499681863  ____gpsData_9;
	// GSN.Skill.Phoenix.Requests.Account.LocationLegalityData GSN.Skill.Phoenix.Requests.Account.CheckLocationLegalityRequestData::<Response>k__BackingField
	LocationLegalityData_t3579828208  ___U3CResponseU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of__gpsData_9() { return static_cast<int32_t>(offsetof(CheckLocationLegalityRequestData_t2809632747, ____gpsData_9)); }
	inline GpsData_t3499681863  get__gpsData_9() const { return ____gpsData_9; }
	inline GpsData_t3499681863 * get_address_of__gpsData_9() { return &____gpsData_9; }
	inline void set__gpsData_9(GpsData_t3499681863  value)
	{
		____gpsData_9 = value;
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CheckLocationLegalityRequestData_t2809632747, ___U3CResponseU3Ek__BackingField_10)); }
	inline LocationLegalityData_t3579828208  get_U3CResponseU3Ek__BackingField_10() const { return ___U3CResponseU3Ek__BackingField_10; }
	inline LocationLegalityData_t3579828208 * get_address_of_U3CResponseU3Ek__BackingField_10() { return &___U3CResponseU3Ek__BackingField_10; }
	inline void set_U3CResponseU3Ek__BackingField_10(LocationLegalityData_t3579828208  value)
	{
		___U3CResponseU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
