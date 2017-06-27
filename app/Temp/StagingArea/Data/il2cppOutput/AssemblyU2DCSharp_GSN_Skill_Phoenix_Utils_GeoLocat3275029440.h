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
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`2<GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult,System.String>
struct Action_2_t2573286683;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode
struct  BaseGeolocationMode_t3275029440  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode::_location
	String_t* ____location_1;
	// System.DateTime GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode::_timeReceivedLocation
	DateTime_t693205669  ____timeReceivedLocation_2;
	// System.Action`1<System.String> GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode::_successCallback
	Action_1_t1831019615 * ____successCallback_3;
	// System.Action`2<GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult,System.String> GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode::_failCallback
	Action_2_t2573286683 * ____failCallback_4;

public:
	inline static int32_t get_offset_of__location_1() { return static_cast<int32_t>(offsetof(BaseGeolocationMode_t3275029440, ____location_1)); }
	inline String_t* get__location_1() const { return ____location_1; }
	inline String_t** get_address_of__location_1() { return &____location_1; }
	inline void set__location_1(String_t* value)
	{
		____location_1 = value;
		Il2CppCodeGenWriteBarrier(&____location_1, value);
	}

	inline static int32_t get_offset_of__timeReceivedLocation_2() { return static_cast<int32_t>(offsetof(BaseGeolocationMode_t3275029440, ____timeReceivedLocation_2)); }
	inline DateTime_t693205669  get__timeReceivedLocation_2() const { return ____timeReceivedLocation_2; }
	inline DateTime_t693205669 * get_address_of__timeReceivedLocation_2() { return &____timeReceivedLocation_2; }
	inline void set__timeReceivedLocation_2(DateTime_t693205669  value)
	{
		____timeReceivedLocation_2 = value;
	}

	inline static int32_t get_offset_of__successCallback_3() { return static_cast<int32_t>(offsetof(BaseGeolocationMode_t3275029440, ____successCallback_3)); }
	inline Action_1_t1831019615 * get__successCallback_3() const { return ____successCallback_3; }
	inline Action_1_t1831019615 ** get_address_of__successCallback_3() { return &____successCallback_3; }
	inline void set__successCallback_3(Action_1_t1831019615 * value)
	{
		____successCallback_3 = value;
		Il2CppCodeGenWriteBarrier(&____successCallback_3, value);
	}

	inline static int32_t get_offset_of__failCallback_4() { return static_cast<int32_t>(offsetof(BaseGeolocationMode_t3275029440, ____failCallback_4)); }
	inline Action_2_t2573286683 * get__failCallback_4() const { return ____failCallback_4; }
	inline Action_2_t2573286683 ** get_address_of__failCallback_4() { return &____failCallback_4; }
	inline void set__failCallback_4(Action_2_t2573286683 * value)
	{
		____failCallback_4 = value;
		Il2CppCodeGenWriteBarrier(&____failCallback_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
