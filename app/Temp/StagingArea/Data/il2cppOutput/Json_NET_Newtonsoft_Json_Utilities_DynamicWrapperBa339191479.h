﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.DynamicWrapperBase
struct  DynamicWrapperBase_t339191479  : public Il2CppObject
{
public:
	// System.Object Newtonsoft.Json.Utilities.DynamicWrapperBase::UnderlyingObject
	Il2CppObject * ___UnderlyingObject_0;

public:
	inline static int32_t get_offset_of_UnderlyingObject_0() { return static_cast<int32_t>(offsetof(DynamicWrapperBase_t339191479, ___UnderlyingObject_0)); }
	inline Il2CppObject * get_UnderlyingObject_0() const { return ___UnderlyingObject_0; }
	inline Il2CppObject ** get_address_of_UnderlyingObject_0() { return &___UnderlyingObject_0; }
	inline void set_UnderlyingObject_0(Il2CppObject * value)
	{
		___UnderlyingObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___UnderlyingObject_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif