#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FastRay
struct  FastRay_t2947599130 
{
public:
	// UnityEngine.Vector3 FastRay::origin
	Vector3_t2243707580  ___origin_0;
	// UnityEngine.Vector3 FastRay::direction
	Vector3_t2243707580  ___direction_1;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(FastRay_t2947599130, ___origin_0)); }
	inline Vector3_t2243707580  get_origin_0() const { return ___origin_0; }
	inline Vector3_t2243707580 * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(Vector3_t2243707580  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(FastRay_t2947599130, ___direction_1)); }
	inline Vector3_t2243707580  get_direction_1() const { return ___direction_1; }
	inline Vector3_t2243707580 * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(Vector3_t2243707580  value)
	{
		___direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
