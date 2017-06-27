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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanarStream/TransformInfo
struct  TransformInfo_t3361306819 
{
public:
	// UnityEngine.Transform PlanarStream/TransformInfo::transform
	Transform_t3275118058 * ___transform_0;
	// System.Boolean PlanarStream/TransformInfo::active
	bool ___active_1;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(TransformInfo_t3361306819, ___transform_0)); }
	inline Transform_t3275118058 * get_transform_0() const { return ___transform_0; }
	inline Transform_t3275118058 ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Transform_t3275118058 * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier(&___transform_0, value);
	}

	inline static int32_t get_offset_of_active_1() { return static_cast<int32_t>(offsetof(TransformInfo_t3361306819, ___active_1)); }
	inline bool get_active_1() const { return ___active_1; }
	inline bool* get_address_of_active_1() { return &___active_1; }
	inline void set_active_1(bool value)
	{
		___active_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of PlanarStream/TransformInfo
struct TransformInfo_t3361306819_marshaled_pinvoke
{
	Transform_t3275118058 * ___transform_0;
	int32_t ___active_1;
};
// Native definition for COM marshalling of PlanarStream/TransformInfo
struct TransformInfo_t3361306819_marshaled_com
{
	Transform_t3275118058 * ___transform_0;
	int32_t ___active_1;
};
