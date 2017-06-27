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
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_AnimRootKeyFrame2d_TriState2920541406.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimRootKeyFrame2d
struct  AnimRootKeyFrame2d_t1588655471  : public Il2CppObject
{
public:
	// System.Single AnimRootKeyFrame2d::time
	float ___time_0;
	// System.Boolean AnimRootKeyFrame2d::sharp
	bool ___sharp_1;
	// UnityEngine.Vector3 AnimRootKeyFrame2d::localPosition
	Vector3_t2243707580  ___localPosition_2;
	// UnityEngine.Quaternion AnimRootKeyFrame2d::localRotation
	Quaternion_t4030073918  ___localRotation_3;
	// UnityEngine.Vector3 AnimRootKeyFrame2d::localScale
	Vector3_t2243707580  ___localScale_4;
	// AnimRootKeyFrame2d/TriState AnimRootKeyFrame2d::disabled
	int32_t ___disabled_5;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(AnimRootKeyFrame2d_t1588655471, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_sharp_1() { return static_cast<int32_t>(offsetof(AnimRootKeyFrame2d_t1588655471, ___sharp_1)); }
	inline bool get_sharp_1() const { return ___sharp_1; }
	inline bool* get_address_of_sharp_1() { return &___sharp_1; }
	inline void set_sharp_1(bool value)
	{
		___sharp_1 = value;
	}

	inline static int32_t get_offset_of_localPosition_2() { return static_cast<int32_t>(offsetof(AnimRootKeyFrame2d_t1588655471, ___localPosition_2)); }
	inline Vector3_t2243707580  get_localPosition_2() const { return ___localPosition_2; }
	inline Vector3_t2243707580 * get_address_of_localPosition_2() { return &___localPosition_2; }
	inline void set_localPosition_2(Vector3_t2243707580  value)
	{
		___localPosition_2 = value;
	}

	inline static int32_t get_offset_of_localRotation_3() { return static_cast<int32_t>(offsetof(AnimRootKeyFrame2d_t1588655471, ___localRotation_3)); }
	inline Quaternion_t4030073918  get_localRotation_3() const { return ___localRotation_3; }
	inline Quaternion_t4030073918 * get_address_of_localRotation_3() { return &___localRotation_3; }
	inline void set_localRotation_3(Quaternion_t4030073918  value)
	{
		___localRotation_3 = value;
	}

	inline static int32_t get_offset_of_localScale_4() { return static_cast<int32_t>(offsetof(AnimRootKeyFrame2d_t1588655471, ___localScale_4)); }
	inline Vector3_t2243707580  get_localScale_4() const { return ___localScale_4; }
	inline Vector3_t2243707580 * get_address_of_localScale_4() { return &___localScale_4; }
	inline void set_localScale_4(Vector3_t2243707580  value)
	{
		___localScale_4 = value;
	}

	inline static int32_t get_offset_of_disabled_5() { return static_cast<int32_t>(offsetof(AnimRootKeyFrame2d_t1588655471, ___disabled_5)); }
	inline int32_t get_disabled_5() const { return ___disabled_5; }
	inline int32_t* get_address_of_disabled_5() { return &___disabled_5; }
	inline void set_disabled_5(int32_t value)
	{
		___disabled_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
