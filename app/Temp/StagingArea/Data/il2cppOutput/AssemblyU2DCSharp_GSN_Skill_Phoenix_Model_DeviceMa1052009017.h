#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Model.DeviceManager/AbstractDeviceInfo
struct AbstractDeviceInfo_t4071983113;

#include "AssemblyU2DCSharp_GSN_Skill_Utils_SingletonMonoBeha978290890.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.DeviceManager
struct  DeviceManager_t1052009017  : public SingletonMonoBehaviour_1_t978290890
{
public:
	// GSN.Skill.Phoenix.Model.DeviceManager/AbstractDeviceInfo GSN.Skill.Phoenix.Model.DeviceManager::_device
	AbstractDeviceInfo_t4071983113 * ____device_3;

public:
	inline static int32_t get_offset_of__device_3() { return static_cast<int32_t>(offsetof(DeviceManager_t1052009017, ____device_3)); }
	inline AbstractDeviceInfo_t4071983113 * get__device_3() const { return ____device_3; }
	inline AbstractDeviceInfo_t4071983113 ** get_address_of__device_3() { return &____device_3; }
	inline void set__device_3(AbstractDeviceInfo_t4071983113 * value)
	{
		____device_3 = value;
		Il2CppCodeGenWriteBarrier(&____device_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
