#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;
// GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode
struct BaseGeolocationMode_t3275029440;
// System.Action`2<System.String,GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationParser>
struct Action_2_t661119999;
// System.Action`1<GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult>
struct Action_1_t871356513;
// GSN.Skill.Phoenix.Model.Popups.GpsDeniedPopupModel
struct GpsDeniedPopupModel_t3863095986;

#include "AssemblyU2DCSharp_GSN_Skill_Utils_SingletonMonoBeh1115743471.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation
struct  Geolocation_t1189461598  : public SingletonMonoBehaviour_1_t1115743471
{
public:
	// UnityEngine.WaitForSeconds GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::LOCATION_INIT_DELAY
	WaitForSeconds_t3839502067 * ___LOCATION_INIT_DELAY_5;
	// UnityEngine.WaitForSeconds GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::RETRY_DELAY
	WaitForSeconds_t3839502067 * ___RETRY_DELAY_6;
	// GSN.Skill.Phoenix.Utils.GeoLocation.BaseGeolocationMode GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::_geolocationMode
	BaseGeolocationMode_t3275029440 * ____geolocationMode_7;
	// System.Int32 GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::_maxRetryAttempts
	int32_t ____maxRetryAttempts_8;
	// System.Action`2<System.String,GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationParser> GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::_successCallback
	Action_2_t661119999 * ____successCallback_9;
	// System.Action`1<GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult> GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::_failCallback
	Action_1_t871356513 * ____failCallback_10;
	// GSN.Skill.Phoenix.Model.Popups.GpsDeniedPopupModel GSN.Skill.Phoenix.Utils.GeoLocation.Geolocation::_locationDeniedPopup
	GpsDeniedPopupModel_t3863095986 * ____locationDeniedPopup_11;

public:
	inline static int32_t get_offset_of_LOCATION_INIT_DELAY_5() { return static_cast<int32_t>(offsetof(Geolocation_t1189461598, ___LOCATION_INIT_DELAY_5)); }
	inline WaitForSeconds_t3839502067 * get_LOCATION_INIT_DELAY_5() const { return ___LOCATION_INIT_DELAY_5; }
	inline WaitForSeconds_t3839502067 ** get_address_of_LOCATION_INIT_DELAY_5() { return &___LOCATION_INIT_DELAY_5; }
	inline void set_LOCATION_INIT_DELAY_5(WaitForSeconds_t3839502067 * value)
	{
		___LOCATION_INIT_DELAY_5 = value;
		Il2CppCodeGenWriteBarrier(&___LOCATION_INIT_DELAY_5, value);
	}

	inline static int32_t get_offset_of_RETRY_DELAY_6() { return static_cast<int32_t>(offsetof(Geolocation_t1189461598, ___RETRY_DELAY_6)); }
	inline WaitForSeconds_t3839502067 * get_RETRY_DELAY_6() const { return ___RETRY_DELAY_6; }
	inline WaitForSeconds_t3839502067 ** get_address_of_RETRY_DELAY_6() { return &___RETRY_DELAY_6; }
	inline void set_RETRY_DELAY_6(WaitForSeconds_t3839502067 * value)
	{
		___RETRY_DELAY_6 = value;
		Il2CppCodeGenWriteBarrier(&___RETRY_DELAY_6, value);
	}

	inline static int32_t get_offset_of__geolocationMode_7() { return static_cast<int32_t>(offsetof(Geolocation_t1189461598, ____geolocationMode_7)); }
	inline BaseGeolocationMode_t3275029440 * get__geolocationMode_7() const { return ____geolocationMode_7; }
	inline BaseGeolocationMode_t3275029440 ** get_address_of__geolocationMode_7() { return &____geolocationMode_7; }
	inline void set__geolocationMode_7(BaseGeolocationMode_t3275029440 * value)
	{
		____geolocationMode_7 = value;
		Il2CppCodeGenWriteBarrier(&____geolocationMode_7, value);
	}

	inline static int32_t get_offset_of__maxRetryAttempts_8() { return static_cast<int32_t>(offsetof(Geolocation_t1189461598, ____maxRetryAttempts_8)); }
	inline int32_t get__maxRetryAttempts_8() const { return ____maxRetryAttempts_8; }
	inline int32_t* get_address_of__maxRetryAttempts_8() { return &____maxRetryAttempts_8; }
	inline void set__maxRetryAttempts_8(int32_t value)
	{
		____maxRetryAttempts_8 = value;
	}

	inline static int32_t get_offset_of__successCallback_9() { return static_cast<int32_t>(offsetof(Geolocation_t1189461598, ____successCallback_9)); }
	inline Action_2_t661119999 * get__successCallback_9() const { return ____successCallback_9; }
	inline Action_2_t661119999 ** get_address_of__successCallback_9() { return &____successCallback_9; }
	inline void set__successCallback_9(Action_2_t661119999 * value)
	{
		____successCallback_9 = value;
		Il2CppCodeGenWriteBarrier(&____successCallback_9, value);
	}

	inline static int32_t get_offset_of__failCallback_10() { return static_cast<int32_t>(offsetof(Geolocation_t1189461598, ____failCallback_10)); }
	inline Action_1_t871356513 * get__failCallback_10() const { return ____failCallback_10; }
	inline Action_1_t871356513 ** get_address_of__failCallback_10() { return &____failCallback_10; }
	inline void set__failCallback_10(Action_1_t871356513 * value)
	{
		____failCallback_10 = value;
		Il2CppCodeGenWriteBarrier(&____failCallback_10, value);
	}

	inline static int32_t get_offset_of__locationDeniedPopup_11() { return static_cast<int32_t>(offsetof(Geolocation_t1189461598, ____locationDeniedPopup_11)); }
	inline GpsDeniedPopupModel_t3863095986 * get__locationDeniedPopup_11() const { return ____locationDeniedPopup_11; }
	inline GpsDeniedPopupModel_t3863095986 ** get_address_of__locationDeniedPopup_11() { return &____locationDeniedPopup_11; }
	inline void set__locationDeniedPopup_11(GpsDeniedPopupModel_t3863095986 * value)
	{
		____locationDeniedPopup_11 = value;
		Il2CppCodeGenWriteBarrier(&____locationDeniedPopup_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
