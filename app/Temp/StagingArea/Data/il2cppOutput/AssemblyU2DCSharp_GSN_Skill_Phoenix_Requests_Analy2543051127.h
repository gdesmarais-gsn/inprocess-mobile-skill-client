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
// Newtonsoft.Json.Linq.JArray
struct JArray_t1483708661;

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebPOSTReques3092452335.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Analy1552796700.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceRequestData
struct  FabricEventServiceRequestData_t2543051127  : public WebPOSTRequest_1_t3092452335
{
public:
	// GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceRequestData::<Response>k__BackingField
	FabricEventServiceData_t1552796700  ___U3CResponseU3Ek__BackingField_6;
	// System.String GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceRequestData::_url
	String_t* ____url_7;
	// Newtonsoft.Json.Linq.JArray GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceRequestData::_requestBody
	JArray_t1483708661 * ____requestBody_8;

public:
	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FabricEventServiceRequestData_t2543051127, ___U3CResponseU3Ek__BackingField_6)); }
	inline FabricEventServiceData_t1552796700  get_U3CResponseU3Ek__BackingField_6() const { return ___U3CResponseU3Ek__BackingField_6; }
	inline FabricEventServiceData_t1552796700 * get_address_of_U3CResponseU3Ek__BackingField_6() { return &___U3CResponseU3Ek__BackingField_6; }
	inline void set_U3CResponseU3Ek__BackingField_6(FabricEventServiceData_t1552796700  value)
	{
		___U3CResponseU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__url_7() { return static_cast<int32_t>(offsetof(FabricEventServiceRequestData_t2543051127, ____url_7)); }
	inline String_t* get__url_7() const { return ____url_7; }
	inline String_t** get_address_of__url_7() { return &____url_7; }
	inline void set__url_7(String_t* value)
	{
		____url_7 = value;
		Il2CppCodeGenWriteBarrier(&____url_7, value);
	}

	inline static int32_t get_offset_of__requestBody_8() { return static_cast<int32_t>(offsetof(FabricEventServiceRequestData_t2543051127, ____requestBody_8)); }
	inline JArray_t1483708661 * get__requestBody_8() const { return ____requestBody_8; }
	inline JArray_t1483708661 ** get_address_of__requestBody_8() { return &____requestBody_8; }
	inline void set__requestBody_8(JArray_t1483708661 * value)
	{
		____requestBody_8 = value;
		Il2CppCodeGenWriteBarrier(&____requestBody_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
