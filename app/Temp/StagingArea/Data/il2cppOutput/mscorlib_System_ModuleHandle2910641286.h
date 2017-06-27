#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_ModuleHandle2910641286.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ModuleHandle
struct  ModuleHandle_t2910641286 
{
public:
	// System.IntPtr System.ModuleHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(ModuleHandle_t2910641286, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

struct ModuleHandle_t2910641286_StaticFields
{
public:
	// System.ModuleHandle System.ModuleHandle::EmptyHandle
	ModuleHandle_t2910641286  ___EmptyHandle_1;

public:
	inline static int32_t get_offset_of_EmptyHandle_1() { return static_cast<int32_t>(offsetof(ModuleHandle_t2910641286_StaticFields, ___EmptyHandle_1)); }
	inline ModuleHandle_t2910641286  get_EmptyHandle_1() const { return ___EmptyHandle_1; }
	inline ModuleHandle_t2910641286 * get_address_of_EmptyHandle_1() { return &___EmptyHandle_1; }
	inline void set_EmptyHandle_1(ModuleHandle_t2910641286  value)
	{
		___EmptyHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
