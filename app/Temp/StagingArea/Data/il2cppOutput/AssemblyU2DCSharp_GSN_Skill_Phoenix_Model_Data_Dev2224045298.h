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

// GSN.Skill.Phoenix.Model.Data.DeviceData
struct  DeviceData_t2224045298  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.Model.Data.DeviceData::<clientID>k__BackingField
	String_t* ___U3CclientIDU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CclientIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DeviceData_t2224045298, ___U3CclientIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CclientIDU3Ek__BackingField_0() const { return ___U3CclientIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CclientIDU3Ek__BackingField_0() { return &___U3CclientIDU3Ek__BackingField_0; }
	inline void set_U3CclientIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CclientIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CclientIDU3Ek__BackingField_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
