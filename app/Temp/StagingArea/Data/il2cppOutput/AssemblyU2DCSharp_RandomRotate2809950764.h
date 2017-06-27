#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomRotate
struct  RandomRotate_t2809950764  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RandomRotate::minRotate
	float ___minRotate_2;
	// System.Single RandomRotate::maxRotate
	float ___maxRotate_3;

public:
	inline static int32_t get_offset_of_minRotate_2() { return static_cast<int32_t>(offsetof(RandomRotate_t2809950764, ___minRotate_2)); }
	inline float get_minRotate_2() const { return ___minRotate_2; }
	inline float* get_address_of_minRotate_2() { return &___minRotate_2; }
	inline void set_minRotate_2(float value)
	{
		___minRotate_2 = value;
	}

	inline static int32_t get_offset_of_maxRotate_3() { return static_cast<int32_t>(offsetof(RandomRotate_t2809950764, ___maxRotate_3)); }
	inline float get_maxRotate_3() const { return ___maxRotate_3; }
	inline float* get_address_of_maxRotate_3() { return &___maxRotate_3; }
	inline void set_maxRotate_3(float value)
	{
		___maxRotate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
