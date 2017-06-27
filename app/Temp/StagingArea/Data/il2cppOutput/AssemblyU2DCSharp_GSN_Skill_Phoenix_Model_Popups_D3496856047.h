#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Model.DepositManager
struct DepositManager_t590905979;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1445386684;
// GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent
struct GetDepositConfigDataSuccessEvent_t4067199831;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Popups.DepositPopupModel
struct  DepositPopupModel_t3496856047  : public Il2CppObject
{
public:
	// GSN.Skill.Phoenix.Model.DepositManager GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::_depositManager
	DepositManager_t590905979 * ____depositManager_0;
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::_currentUser
	CurrentUser_t3910039426 * ____currentUser_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::_supportedCountries
	Dictionary_2_t1445386684 * ____supportedCountries_4;
	// GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent GSN.Skill.Phoenix.Model.Popups.DepositPopupModel::_depositConfigData
	GetDepositConfigDataSuccessEvent_t4067199831 * ____depositConfigData_5;

public:
	inline static int32_t get_offset_of__depositManager_0() { return static_cast<int32_t>(offsetof(DepositPopupModel_t3496856047, ____depositManager_0)); }
	inline DepositManager_t590905979 * get__depositManager_0() const { return ____depositManager_0; }
	inline DepositManager_t590905979 ** get_address_of__depositManager_0() { return &____depositManager_0; }
	inline void set__depositManager_0(DepositManager_t590905979 * value)
	{
		____depositManager_0 = value;
		Il2CppCodeGenWriteBarrier(&____depositManager_0, value);
	}

	inline static int32_t get_offset_of__currentUser_1() { return static_cast<int32_t>(offsetof(DepositPopupModel_t3496856047, ____currentUser_1)); }
	inline CurrentUser_t3910039426 * get__currentUser_1() const { return ____currentUser_1; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_1() { return &____currentUser_1; }
	inline void set__currentUser_1(CurrentUser_t3910039426 * value)
	{
		____currentUser_1 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_1, value);
	}

	inline static int32_t get_offset_of__supportedCountries_4() { return static_cast<int32_t>(offsetof(DepositPopupModel_t3496856047, ____supportedCountries_4)); }
	inline Dictionary_2_t1445386684 * get__supportedCountries_4() const { return ____supportedCountries_4; }
	inline Dictionary_2_t1445386684 ** get_address_of__supportedCountries_4() { return &____supportedCountries_4; }
	inline void set__supportedCountries_4(Dictionary_2_t1445386684 * value)
	{
		____supportedCountries_4 = value;
		Il2CppCodeGenWriteBarrier(&____supportedCountries_4, value);
	}

	inline static int32_t get_offset_of__depositConfigData_5() { return static_cast<int32_t>(offsetof(DepositPopupModel_t3496856047, ____depositConfigData_5)); }
	inline GetDepositConfigDataSuccessEvent_t4067199831 * get__depositConfigData_5() const { return ____depositConfigData_5; }
	inline GetDepositConfigDataSuccessEvent_t4067199831 ** get_address_of__depositConfigData_5() { return &____depositConfigData_5; }
	inline void set__depositConfigData_5(GetDepositConfigDataSuccessEvent_t4067199831 * value)
	{
		____depositConfigData_5 = value;
		Il2CppCodeGenWriteBarrier(&____depositConfigData_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
