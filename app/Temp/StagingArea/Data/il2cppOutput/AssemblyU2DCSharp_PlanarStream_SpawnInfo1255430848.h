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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanarStream/SpawnInfo
struct  SpawnInfo_t1255430848  : public Il2CppObject
{
public:
	// UnityEngine.Transform PlanarStream/SpawnInfo::prefab
	Transform_t3275118058 * ___prefab_0;
	// UnityEngine.Vector3 PlanarStream/SpawnInfo::localBoundsCenter
	Vector3_t2243707580  ___localBoundsCenter_1;
	// UnityEngine.Vector3 PlanarStream/SpawnInfo::localBoundsExtents
	Vector3_t2243707580  ___localBoundsExtents_2;

public:
	inline static int32_t get_offset_of_prefab_0() { return static_cast<int32_t>(offsetof(SpawnInfo_t1255430848, ___prefab_0)); }
	inline Transform_t3275118058 * get_prefab_0() const { return ___prefab_0; }
	inline Transform_t3275118058 ** get_address_of_prefab_0() { return &___prefab_0; }
	inline void set_prefab_0(Transform_t3275118058 * value)
	{
		___prefab_0 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_0, value);
	}

	inline static int32_t get_offset_of_localBoundsCenter_1() { return static_cast<int32_t>(offsetof(SpawnInfo_t1255430848, ___localBoundsCenter_1)); }
	inline Vector3_t2243707580  get_localBoundsCenter_1() const { return ___localBoundsCenter_1; }
	inline Vector3_t2243707580 * get_address_of_localBoundsCenter_1() { return &___localBoundsCenter_1; }
	inline void set_localBoundsCenter_1(Vector3_t2243707580  value)
	{
		___localBoundsCenter_1 = value;
	}

	inline static int32_t get_offset_of_localBoundsExtents_2() { return static_cast<int32_t>(offsetof(SpawnInfo_t1255430848, ___localBoundsExtents_2)); }
	inline Vector3_t2243707580  get_localBoundsExtents_2() const { return ___localBoundsExtents_2; }
	inline Vector3_t2243707580 * get_address_of_localBoundsExtents_2() { return &___localBoundsExtents_2; }
	inline void set_localBoundsExtents_2(Vector3_t2243707580  value)
	{
		___localBoundsExtents_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
