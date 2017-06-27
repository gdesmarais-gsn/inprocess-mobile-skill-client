#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuadRenderer/BoneIndexInfo
struct  BoneIndexInfo_t412723795  : public Il2CppObject
{
public:
	// System.Int32 QuadRenderer/BoneIndexInfo::boneIndex
	int32_t ___boneIndex_0;
	// UnityEngine.Vector3 QuadRenderer/BoneIndexInfo::position
	Vector3_t2243707580  ___position_1;

public:
	inline static int32_t get_offset_of_boneIndex_0() { return static_cast<int32_t>(offsetof(BoneIndexInfo_t412723795, ___boneIndex_0)); }
	inline int32_t get_boneIndex_0() const { return ___boneIndex_0; }
	inline int32_t* get_address_of_boneIndex_0() { return &___boneIndex_0; }
	inline void set_boneIndex_0(int32_t value)
	{
		___boneIndex_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(BoneIndexInfo_t412723795, ___position_1)); }
	inline Vector3_t2243707580  get_position_1() const { return ___position_1; }
	inline Vector3_t2243707580 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t2243707580  value)
	{
		___position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
