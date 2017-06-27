#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BezierPatchQuad[]
struct BezierPatchQuadU5BU5D_t1381426741;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimStateLayer2d
struct  AnimStateLayer2d_t3897792687  : public Il2CppObject
{
public:
	// BezierPatchQuad[] AnimStateLayer2d::quads
	BezierPatchQuadU5BU5D_t1381426741* ___quads_0;
	// UnityEngine.Transform AnimStateLayer2d::root
	Transform_t3275118058 * ___root_1;

public:
	inline static int32_t get_offset_of_quads_0() { return static_cast<int32_t>(offsetof(AnimStateLayer2d_t3897792687, ___quads_0)); }
	inline BezierPatchQuadU5BU5D_t1381426741* get_quads_0() const { return ___quads_0; }
	inline BezierPatchQuadU5BU5D_t1381426741** get_address_of_quads_0() { return &___quads_0; }
	inline void set_quads_0(BezierPatchQuadU5BU5D_t1381426741* value)
	{
		___quads_0 = value;
		Il2CppCodeGenWriteBarrier(&___quads_0, value);
	}

	inline static int32_t get_offset_of_root_1() { return static_cast<int32_t>(offsetof(AnimStateLayer2d_t3897792687, ___root_1)); }
	inline Transform_t3275118058 * get_root_1() const { return ___root_1; }
	inline Transform_t3275118058 ** get_address_of_root_1() { return &___root_1; }
	inline void set_root_1(Transform_t3275118058 * value)
	{
		___root_1 = value;
		Il2CppCodeGenWriteBarrier(&___root_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
