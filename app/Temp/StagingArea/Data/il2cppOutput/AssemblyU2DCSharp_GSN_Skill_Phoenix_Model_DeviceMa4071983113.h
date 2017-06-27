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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.DeviceManager/AbstractDeviceInfo
struct  AbstractDeviceInfo_t4071983113  : public Il2CppObject
{
public:
	// System.Boolean GSN.Skill.Phoenix.Model.DeviceManager/AbstractDeviceInfo::_advertisingIdentifierSet
	bool ____advertisingIdentifierSet_0;
	// System.Boolean GSN.Skill.Phoenix.Model.DeviceManager/AbstractDeviceInfo::_advertisingTrackingEnabled
	bool ____advertisingTrackingEnabled_1;
	// System.String GSN.Skill.Phoenix.Model.DeviceManager/AbstractDeviceInfo::_advertisingIdentifier
	String_t* ____advertisingIdentifier_2;

public:
	inline static int32_t get_offset_of__advertisingIdentifierSet_0() { return static_cast<int32_t>(offsetof(AbstractDeviceInfo_t4071983113, ____advertisingIdentifierSet_0)); }
	inline bool get__advertisingIdentifierSet_0() const { return ____advertisingIdentifierSet_0; }
	inline bool* get_address_of__advertisingIdentifierSet_0() { return &____advertisingIdentifierSet_0; }
	inline void set__advertisingIdentifierSet_0(bool value)
	{
		____advertisingIdentifierSet_0 = value;
	}

	inline static int32_t get_offset_of__advertisingTrackingEnabled_1() { return static_cast<int32_t>(offsetof(AbstractDeviceInfo_t4071983113, ____advertisingTrackingEnabled_1)); }
	inline bool get__advertisingTrackingEnabled_1() const { return ____advertisingTrackingEnabled_1; }
	inline bool* get_address_of__advertisingTrackingEnabled_1() { return &____advertisingTrackingEnabled_1; }
	inline void set__advertisingTrackingEnabled_1(bool value)
	{
		____advertisingTrackingEnabled_1 = value;
	}

	inline static int32_t get_offset_of__advertisingIdentifier_2() { return static_cast<int32_t>(offsetof(AbstractDeviceInfo_t4071983113, ____advertisingIdentifier_2)); }
	inline String_t* get__advertisingIdentifier_2() const { return ____advertisingIdentifier_2; }
	inline String_t** get_address_of__advertisingIdentifier_2() { return &____advertisingIdentifier_2; }
	inline void set__advertisingIdentifier_2(String_t* value)
	{
		____advertisingIdentifier_2 = value;
		Il2CppCodeGenWriteBarrier(&____advertisingIdentifier_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
