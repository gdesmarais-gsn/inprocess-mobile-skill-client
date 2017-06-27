#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_ReloadableMonoBehaviour1116404963.h"
#include "AssemblyU2DCSharp_Parametric_OverflowMode3708295454.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Parametric
struct  Parametric_t3945418262  : public ReloadableMonoBehaviour_t1116404963
{
public:
	// Parametric/OverflowMode Parametric::overflowMode
	int32_t ___overflowMode_2;
	// System.Boolean Parametric::invertDirection
	bool ___invertDirection_3;
	// System.Boolean Parametric::mArcLengthDirty
	bool ___mArcLengthDirty_4;
	// System.Single Parametric::mArcLength
	float ___mArcLength_5;

public:
	inline static int32_t get_offset_of_overflowMode_2() { return static_cast<int32_t>(offsetof(Parametric_t3945418262, ___overflowMode_2)); }
	inline int32_t get_overflowMode_2() const { return ___overflowMode_2; }
	inline int32_t* get_address_of_overflowMode_2() { return &___overflowMode_2; }
	inline void set_overflowMode_2(int32_t value)
	{
		___overflowMode_2 = value;
	}

	inline static int32_t get_offset_of_invertDirection_3() { return static_cast<int32_t>(offsetof(Parametric_t3945418262, ___invertDirection_3)); }
	inline bool get_invertDirection_3() const { return ___invertDirection_3; }
	inline bool* get_address_of_invertDirection_3() { return &___invertDirection_3; }
	inline void set_invertDirection_3(bool value)
	{
		___invertDirection_3 = value;
	}

	inline static int32_t get_offset_of_mArcLengthDirty_4() { return static_cast<int32_t>(offsetof(Parametric_t3945418262, ___mArcLengthDirty_4)); }
	inline bool get_mArcLengthDirty_4() const { return ___mArcLengthDirty_4; }
	inline bool* get_address_of_mArcLengthDirty_4() { return &___mArcLengthDirty_4; }
	inline void set_mArcLengthDirty_4(bool value)
	{
		___mArcLengthDirty_4 = value;
	}

	inline static int32_t get_offset_of_mArcLength_5() { return static_cast<int32_t>(offsetof(Parametric_t3945418262, ___mArcLength_5)); }
	inline float get_mArcLength_5() const { return ___mArcLength_5; }
	inline float* get_address_of_mArcLength_5() { return &___mArcLength_5; }
	inline void set_mArcLength_5(float value)
	{
		___mArcLength_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
