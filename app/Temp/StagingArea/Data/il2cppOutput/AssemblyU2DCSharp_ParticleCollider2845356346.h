#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticleCollider
struct  ParticleCollider_t2845356346  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.ParticleSystem ParticleCollider::particleSystem
	ParticleSystem_t3394631041 * ___particleSystem_2;
	// UnityEngine.Collider2D ParticleCollider::collider
	Collider2D_t646061738 * ___collider_3;

public:
	inline static int32_t get_offset_of_particleSystem_2() { return static_cast<int32_t>(offsetof(ParticleCollider_t2845356346, ___particleSystem_2)); }
	inline ParticleSystem_t3394631041 * get_particleSystem_2() const { return ___particleSystem_2; }
	inline ParticleSystem_t3394631041 ** get_address_of_particleSystem_2() { return &___particleSystem_2; }
	inline void set_particleSystem_2(ParticleSystem_t3394631041 * value)
	{
		___particleSystem_2 = value;
		Il2CppCodeGenWriteBarrier(&___particleSystem_2, value);
	}

	inline static int32_t get_offset_of_collider_3() { return static_cast<int32_t>(offsetof(ParticleCollider_t2845356346, ___collider_3)); }
	inline Collider2D_t646061738 * get_collider_3() const { return ___collider_3; }
	inline Collider2D_t646061738 ** get_address_of_collider_3() { return &___collider_3; }
	inline void set_collider_3(Collider2D_t646061738 * value)
	{
		___collider_3 = value;
		Il2CppCodeGenWriteBarrier(&___collider_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
