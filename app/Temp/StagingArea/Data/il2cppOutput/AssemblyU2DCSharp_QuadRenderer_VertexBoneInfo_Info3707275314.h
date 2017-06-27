#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuadRenderer/VertexBoneInfo/Info
struct  Info_t3707275314  : public Il2CppObject
{
public:
	// UnityEngine.Transform QuadRenderer/VertexBoneInfo/Info::bone
	Transform_t3275118058 * ___bone_0;
	// System.Single QuadRenderer/VertexBoneInfo/Info::weight
	float ___weight_1;
	// System.Single QuadRenderer/VertexBoneInfo/Info::weight2
	float ___weight2_2;
	// System.Single QuadRenderer/VertexBoneInfo/Info::weightFactor
	float ___weightFactor_3;
	// UnityEngine.Transform QuadRenderer/VertexBoneInfo/Info::oppositeBone
	Transform_t3275118058 * ___oppositeBone_4;

public:
	inline static int32_t get_offset_of_bone_0() { return static_cast<int32_t>(offsetof(Info_t3707275314, ___bone_0)); }
	inline Transform_t3275118058 * get_bone_0() const { return ___bone_0; }
	inline Transform_t3275118058 ** get_address_of_bone_0() { return &___bone_0; }
	inline void set_bone_0(Transform_t3275118058 * value)
	{
		___bone_0 = value;
		Il2CppCodeGenWriteBarrier(&___bone_0, value);
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(Info_t3707275314, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}

	inline static int32_t get_offset_of_weight2_2() { return static_cast<int32_t>(offsetof(Info_t3707275314, ___weight2_2)); }
	inline float get_weight2_2() const { return ___weight2_2; }
	inline float* get_address_of_weight2_2() { return &___weight2_2; }
	inline void set_weight2_2(float value)
	{
		___weight2_2 = value;
	}

	inline static int32_t get_offset_of_weightFactor_3() { return static_cast<int32_t>(offsetof(Info_t3707275314, ___weightFactor_3)); }
	inline float get_weightFactor_3() const { return ___weightFactor_3; }
	inline float* get_address_of_weightFactor_3() { return &___weightFactor_3; }
	inline void set_weightFactor_3(float value)
	{
		___weightFactor_3 = value;
	}

	inline static int32_t get_offset_of_oppositeBone_4() { return static_cast<int32_t>(offsetof(Info_t3707275314, ___oppositeBone_4)); }
	inline Transform_t3275118058 * get_oppositeBone_4() const { return ___oppositeBone_4; }
	inline Transform_t3275118058 ** get_address_of_oppositeBone_4() { return &___oppositeBone_4; }
	inline void set_oppositeBone_4(Transform_t3275118058 * value)
	{
		___oppositeBone_4 = value;
		Il2CppCodeGenWriteBarrier(&___oppositeBone_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
