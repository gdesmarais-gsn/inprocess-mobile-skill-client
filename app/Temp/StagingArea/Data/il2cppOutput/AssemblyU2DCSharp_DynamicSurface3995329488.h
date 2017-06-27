#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ContactBody>
struct List_1_t2611407048;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DynamicSurface
struct  DynamicSurface_t3995329488  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 DynamicSurface::worldOffsetToCenter
	Vector3_t2243707580  ___worldOffsetToCenter_0;
	// System.Single DynamicSurface::halfWidth
	float ___halfWidth_1;
	// System.Single DynamicSurface::inverseHalfWidth
	float ___inverseHalfWidth_2;
	// System.Collections.Generic.List`1<ContactBody> DynamicSurface::contactBodies
	List_1_t2611407048 * ___contactBodies_3;

public:
	inline static int32_t get_offset_of_worldOffsetToCenter_0() { return static_cast<int32_t>(offsetof(DynamicSurface_t3995329488, ___worldOffsetToCenter_0)); }
	inline Vector3_t2243707580  get_worldOffsetToCenter_0() const { return ___worldOffsetToCenter_0; }
	inline Vector3_t2243707580 * get_address_of_worldOffsetToCenter_0() { return &___worldOffsetToCenter_0; }
	inline void set_worldOffsetToCenter_0(Vector3_t2243707580  value)
	{
		___worldOffsetToCenter_0 = value;
	}

	inline static int32_t get_offset_of_halfWidth_1() { return static_cast<int32_t>(offsetof(DynamicSurface_t3995329488, ___halfWidth_1)); }
	inline float get_halfWidth_1() const { return ___halfWidth_1; }
	inline float* get_address_of_halfWidth_1() { return &___halfWidth_1; }
	inline void set_halfWidth_1(float value)
	{
		___halfWidth_1 = value;
	}

	inline static int32_t get_offset_of_inverseHalfWidth_2() { return static_cast<int32_t>(offsetof(DynamicSurface_t3995329488, ___inverseHalfWidth_2)); }
	inline float get_inverseHalfWidth_2() const { return ___inverseHalfWidth_2; }
	inline float* get_address_of_inverseHalfWidth_2() { return &___inverseHalfWidth_2; }
	inline void set_inverseHalfWidth_2(float value)
	{
		___inverseHalfWidth_2 = value;
	}

	inline static int32_t get_offset_of_contactBodies_3() { return static_cast<int32_t>(offsetof(DynamicSurface_t3995329488, ___contactBodies_3)); }
	inline List_1_t2611407048 * get_contactBodies_3() const { return ___contactBodies_3; }
	inline List_1_t2611407048 ** get_address_of_contactBodies_3() { return &___contactBodies_3; }
	inline void set_contactBodies_3(List_1_t2611407048 * value)
	{
		___contactBodies_3 = value;
		Il2CppCodeGenWriteBarrier(&___contactBodies_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
