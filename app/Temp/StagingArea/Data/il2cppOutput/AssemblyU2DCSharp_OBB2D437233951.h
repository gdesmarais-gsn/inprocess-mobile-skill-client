#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// System.Double[]
struct DoubleU5BU5D_t1889952540;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OBB2D
struct  OBB2D_t437233951  : public Il2CppObject
{
public:
	// UnityEngine.Vector2[] OBB2D::corner
	Vector2U5BU5D_t686124026* ___corner_0;
	// UnityEngine.Vector2[] OBB2D::axis
	Vector2U5BU5D_t686124026* ___axis_1;
	// System.Double[] OBB2D::origin
	DoubleU5BU5D_t1889952540* ___origin_2;

public:
	inline static int32_t get_offset_of_corner_0() { return static_cast<int32_t>(offsetof(OBB2D_t437233951, ___corner_0)); }
	inline Vector2U5BU5D_t686124026* get_corner_0() const { return ___corner_0; }
	inline Vector2U5BU5D_t686124026** get_address_of_corner_0() { return &___corner_0; }
	inline void set_corner_0(Vector2U5BU5D_t686124026* value)
	{
		___corner_0 = value;
		Il2CppCodeGenWriteBarrier(&___corner_0, value);
	}

	inline static int32_t get_offset_of_axis_1() { return static_cast<int32_t>(offsetof(OBB2D_t437233951, ___axis_1)); }
	inline Vector2U5BU5D_t686124026* get_axis_1() const { return ___axis_1; }
	inline Vector2U5BU5D_t686124026** get_address_of_axis_1() { return &___axis_1; }
	inline void set_axis_1(Vector2U5BU5D_t686124026* value)
	{
		___axis_1 = value;
		Il2CppCodeGenWriteBarrier(&___axis_1, value);
	}

	inline static int32_t get_offset_of_origin_2() { return static_cast<int32_t>(offsetof(OBB2D_t437233951, ___origin_2)); }
	inline DoubleU5BU5D_t1889952540* get_origin_2() const { return ___origin_2; }
	inline DoubleU5BU5D_t1889952540** get_address_of_origin_2() { return &___origin_2; }
	inline void set_origin_2(DoubleU5BU5D_t1889952540* value)
	{
		___origin_2 = value;
		Il2CppCodeGenWriteBarrier(&___origin_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
