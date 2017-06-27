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
// GSN.Skill.Phoenix.Model.Data.DeviceData
struct DeviceData_t2224045298;

#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebGETRequest1266806887.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Confi1634083830.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Config.UpgradeBonusAmountRequestData
struct  UpgradeBonusAmountRequestData_t360285798  : public WebGETRequest_1_t1266806887
{
public:
	// GSN.Skill.Phoenix.Model.Data.DeviceData GSN.Skill.Phoenix.Requests.Config.UpgradeBonusAmountRequestData::_deviceData
	DeviceData_t2224045298 * ____deviceData_8;
	// GSN.Skill.Phoenix.Requests.Config.UpgradeBonusAmountsData GSN.Skill.Phoenix.Requests.Config.UpgradeBonusAmountRequestData::<Response>k__BackingField
	UpgradeBonusAmountsData_t1634083830  ___U3CResponseU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of__deviceData_8() { return static_cast<int32_t>(offsetof(UpgradeBonusAmountRequestData_t360285798, ____deviceData_8)); }
	inline DeviceData_t2224045298 * get__deviceData_8() const { return ____deviceData_8; }
	inline DeviceData_t2224045298 ** get_address_of__deviceData_8() { return &____deviceData_8; }
	inline void set__deviceData_8(DeviceData_t2224045298 * value)
	{
		____deviceData_8 = value;
		Il2CppCodeGenWriteBarrier(&____deviceData_8, value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(UpgradeBonusAmountRequestData_t360285798, ___U3CResponseU3Ek__BackingField_9)); }
	inline UpgradeBonusAmountsData_t1634083830  get_U3CResponseU3Ek__BackingField_9() const { return ___U3CResponseU3Ek__BackingField_9; }
	inline UpgradeBonusAmountsData_t1634083830 * get_address_of_U3CResponseU3Ek__BackingField_9() { return &___U3CResponseU3Ek__BackingField_9; }
	inline void set_U3CResponseU3Ek__BackingField_9(UpgradeBonusAmountsData_t1634083830  value)
	{
		___U3CResponseU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
