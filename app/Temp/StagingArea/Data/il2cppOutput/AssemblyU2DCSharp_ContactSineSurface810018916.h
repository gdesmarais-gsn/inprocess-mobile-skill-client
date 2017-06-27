#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_DynamicSurface3995329488.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ContactSineSurface
struct  ContactSineSurface_t810018916  : public DynamicSurface_t3995329488
{
public:
	// System.Single ContactSineSurface::displacementFactor
	float ___displacementFactor_4;
	// System.Single ContactSineSurface::gravitySagDist
	float ___gravitySagDist_5;
	// System.Single ContactSineSurface::sagLimit
	float ___sagLimit_6;
	// System.Single ContactSineSurface::massCap
	float ___massCap_7;
	// System.Single ContactSineSurface::flatDist
	float ___flatDist_8;

public:
	inline static int32_t get_offset_of_displacementFactor_4() { return static_cast<int32_t>(offsetof(ContactSineSurface_t810018916, ___displacementFactor_4)); }
	inline float get_displacementFactor_4() const { return ___displacementFactor_4; }
	inline float* get_address_of_displacementFactor_4() { return &___displacementFactor_4; }
	inline void set_displacementFactor_4(float value)
	{
		___displacementFactor_4 = value;
	}

	inline static int32_t get_offset_of_gravitySagDist_5() { return static_cast<int32_t>(offsetof(ContactSineSurface_t810018916, ___gravitySagDist_5)); }
	inline float get_gravitySagDist_5() const { return ___gravitySagDist_5; }
	inline float* get_address_of_gravitySagDist_5() { return &___gravitySagDist_5; }
	inline void set_gravitySagDist_5(float value)
	{
		___gravitySagDist_5 = value;
	}

	inline static int32_t get_offset_of_sagLimit_6() { return static_cast<int32_t>(offsetof(ContactSineSurface_t810018916, ___sagLimit_6)); }
	inline float get_sagLimit_6() const { return ___sagLimit_6; }
	inline float* get_address_of_sagLimit_6() { return &___sagLimit_6; }
	inline void set_sagLimit_6(float value)
	{
		___sagLimit_6 = value;
	}

	inline static int32_t get_offset_of_massCap_7() { return static_cast<int32_t>(offsetof(ContactSineSurface_t810018916, ___massCap_7)); }
	inline float get_massCap_7() const { return ___massCap_7; }
	inline float* get_address_of_massCap_7() { return &___massCap_7; }
	inline void set_massCap_7(float value)
	{
		___massCap_7 = value;
	}

	inline static int32_t get_offset_of_flatDist_8() { return static_cast<int32_t>(offsetof(ContactSineSurface_t810018916, ___flatDist_8)); }
	inline float get_flatDist_8() const { return ___flatDist_8; }
	inline float* get_address_of_flatDist_8() { return &___flatDist_8; }
	inline void set_flatDist_8(float value)
	{
		___flatDist_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
