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
// AnimQuadKeyFrames2d[]
struct AnimQuadKeyFrames2dU5BU5D_t350444186;
// AnimRootKeyFrames2d
struct AnimRootKeyFrames2d_t4044079644;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimLayer2d
struct  AnimLayer2d_t2756944904  : public Il2CppObject
{
public:
	// System.String AnimLayer2d::name
	String_t* ___name_0;
	// AnimQuadKeyFrames2d[] AnimLayer2d::quads
	AnimQuadKeyFrames2dU5BU5D_t350444186* ___quads_1;
	// AnimRootKeyFrames2d AnimLayer2d::root
	AnimRootKeyFrames2d_t4044079644 * ___root_2;
	// System.Single AnimLayer2d::duration
	float ___duration_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AnimLayer2d_t2756944904, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_quads_1() { return static_cast<int32_t>(offsetof(AnimLayer2d_t2756944904, ___quads_1)); }
	inline AnimQuadKeyFrames2dU5BU5D_t350444186* get_quads_1() const { return ___quads_1; }
	inline AnimQuadKeyFrames2dU5BU5D_t350444186** get_address_of_quads_1() { return &___quads_1; }
	inline void set_quads_1(AnimQuadKeyFrames2dU5BU5D_t350444186* value)
	{
		___quads_1 = value;
		Il2CppCodeGenWriteBarrier(&___quads_1, value);
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(AnimLayer2d_t2756944904, ___root_2)); }
	inline AnimRootKeyFrames2d_t4044079644 * get_root_2() const { return ___root_2; }
	inline AnimRootKeyFrames2d_t4044079644 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(AnimRootKeyFrames2d_t4044079644 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier(&___root_2, value);
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(AnimLayer2d_t2756944904, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
