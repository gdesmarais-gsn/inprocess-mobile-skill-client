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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.DeviceManager/DeviceData
struct  DeviceData_t1063053475 
{
public:
	// System.String GSN.Skill.Phoenix.Model.DeviceManager/DeviceData::applicationPlatform
	String_t* ___applicationPlatform_0;
	// System.String GSN.Skill.Phoenix.Model.DeviceManager/DeviceData::vendorIdentifier
	String_t* ___vendorIdentifier_1;
	// System.String GSN.Skill.Phoenix.Model.DeviceManager/DeviceData::advertisingIdentifier
	String_t* ___advertisingIdentifier_2;
	// System.String GSN.Skill.Phoenix.Model.DeviceManager/DeviceData::macAddress
	String_t* ___macAddress_3;
	// System.String GSN.Skill.Phoenix.Model.DeviceManager/DeviceData::applicationVersion
	String_t* ___applicationVersion_4;

public:
	inline static int32_t get_offset_of_applicationPlatform_0() { return static_cast<int32_t>(offsetof(DeviceData_t1063053475, ___applicationPlatform_0)); }
	inline String_t* get_applicationPlatform_0() const { return ___applicationPlatform_0; }
	inline String_t** get_address_of_applicationPlatform_0() { return &___applicationPlatform_0; }
	inline void set_applicationPlatform_0(String_t* value)
	{
		___applicationPlatform_0 = value;
		Il2CppCodeGenWriteBarrier(&___applicationPlatform_0, value);
	}

	inline static int32_t get_offset_of_vendorIdentifier_1() { return static_cast<int32_t>(offsetof(DeviceData_t1063053475, ___vendorIdentifier_1)); }
	inline String_t* get_vendorIdentifier_1() const { return ___vendorIdentifier_1; }
	inline String_t** get_address_of_vendorIdentifier_1() { return &___vendorIdentifier_1; }
	inline void set_vendorIdentifier_1(String_t* value)
	{
		___vendorIdentifier_1 = value;
		Il2CppCodeGenWriteBarrier(&___vendorIdentifier_1, value);
	}

	inline static int32_t get_offset_of_advertisingIdentifier_2() { return static_cast<int32_t>(offsetof(DeviceData_t1063053475, ___advertisingIdentifier_2)); }
	inline String_t* get_advertisingIdentifier_2() const { return ___advertisingIdentifier_2; }
	inline String_t** get_address_of_advertisingIdentifier_2() { return &___advertisingIdentifier_2; }
	inline void set_advertisingIdentifier_2(String_t* value)
	{
		___advertisingIdentifier_2 = value;
		Il2CppCodeGenWriteBarrier(&___advertisingIdentifier_2, value);
	}

	inline static int32_t get_offset_of_macAddress_3() { return static_cast<int32_t>(offsetof(DeviceData_t1063053475, ___macAddress_3)); }
	inline String_t* get_macAddress_3() const { return ___macAddress_3; }
	inline String_t** get_address_of_macAddress_3() { return &___macAddress_3; }
	inline void set_macAddress_3(String_t* value)
	{
		___macAddress_3 = value;
		Il2CppCodeGenWriteBarrier(&___macAddress_3, value);
	}

	inline static int32_t get_offset_of_applicationVersion_4() { return static_cast<int32_t>(offsetof(DeviceData_t1063053475, ___applicationVersion_4)); }
	inline String_t* get_applicationVersion_4() const { return ___applicationVersion_4; }
	inline String_t** get_address_of_applicationVersion_4() { return &___applicationVersion_4; }
	inline void set_applicationVersion_4(String_t* value)
	{
		___applicationVersion_4 = value;
		Il2CppCodeGenWriteBarrier(&___applicationVersion_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Model.DeviceManager/DeviceData
struct DeviceData_t1063053475_marshaled_pinvoke
{
	char* ___applicationPlatform_0;
	char* ___vendorIdentifier_1;
	char* ___advertisingIdentifier_2;
	char* ___macAddress_3;
	char* ___applicationVersion_4;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Model.DeviceManager/DeviceData
struct DeviceData_t1063053475_marshaled_com
{
	Il2CppChar* ___applicationPlatform_0;
	Il2CppChar* ___vendorIdentifier_1;
	Il2CppChar* ___advertisingIdentifier_2;
	Il2CppChar* ___macAddress_3;
	Il2CppChar* ___applicationVersion_4;
};
