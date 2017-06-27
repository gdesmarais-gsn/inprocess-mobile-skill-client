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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ContactBody
struct  ContactBody_t3242285916  : public Il2CppObject
{
public:
	// UnityEngine.Transform ContactBody::transform
	Transform_t3275118058 * ___transform_0;
	// UnityEngine.Rigidbody ContactBody::rigidbody
	Rigidbody_t4233889191 * ___rigidbody_1;
	// System.Single ContactBody::groundedFactor
	float ___groundedFactor_2;
	// UnityEngine.Vector3 ContactBody::offsetToBottom
	Vector3_t2243707580  ___offsetToBottom_3;
	// System.Single ContactBody::halfWidth
	float ___halfWidth_4;
	// System.Single ContactBody::worldX
	float ___worldX_5;
	// System.Single ContactBody::mass
	float ___mass_6;
	// System.Boolean ContactBody::dead
	bool ___dead_7;
	// System.Boolean ContactBody::lastWasGrounded
	bool ___lastWasGrounded_8;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(ContactBody_t3242285916, ___transform_0)); }
	inline Transform_t3275118058 * get_transform_0() const { return ___transform_0; }
	inline Transform_t3275118058 ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Transform_t3275118058 * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier(&___transform_0, value);
	}

	inline static int32_t get_offset_of_rigidbody_1() { return static_cast<int32_t>(offsetof(ContactBody_t3242285916, ___rigidbody_1)); }
	inline Rigidbody_t4233889191 * get_rigidbody_1() const { return ___rigidbody_1; }
	inline Rigidbody_t4233889191 ** get_address_of_rigidbody_1() { return &___rigidbody_1; }
	inline void set_rigidbody_1(Rigidbody_t4233889191 * value)
	{
		___rigidbody_1 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbody_1, value);
	}

	inline static int32_t get_offset_of_groundedFactor_2() { return static_cast<int32_t>(offsetof(ContactBody_t3242285916, ___groundedFactor_2)); }
	inline float get_groundedFactor_2() const { return ___groundedFactor_2; }
	inline float* get_address_of_groundedFactor_2() { return &___groundedFactor_2; }
	inline void set_groundedFactor_2(float value)
	{
		___groundedFactor_2 = value;
	}

	inline static int32_t get_offset_of_offsetToBottom_3() { return static_cast<int32_t>(offsetof(ContactBody_t3242285916, ___offsetToBottom_3)); }
	inline Vector3_t2243707580  get_offsetToBottom_3() const { return ___offsetToBottom_3; }
	inline Vector3_t2243707580 * get_address_of_offsetToBottom_3() { return &___offsetToBottom_3; }
	inline void set_offsetToBottom_3(Vector3_t2243707580  value)
	{
		___offsetToBottom_3 = value;
	}

	inline static int32_t get_offset_of_halfWidth_4() { return static_cast<int32_t>(offsetof(ContactBody_t3242285916, ___halfWidth_4)); }
	inline float get_halfWidth_4() const { return ___halfWidth_4; }
	inline float* get_address_of_halfWidth_4() { return &___halfWidth_4; }
	inline void set_halfWidth_4(float value)
	{
		___halfWidth_4 = value;
	}

	inline static int32_t get_offset_of_worldX_5() { return static_cast<int32_t>(offsetof(ContactBody_t3242285916, ___worldX_5)); }
	inline float get_worldX_5() const { return ___worldX_5; }
	inline float* get_address_of_worldX_5() { return &___worldX_5; }
	inline void set_worldX_5(float value)
	{
		___worldX_5 = value;
	}

	inline static int32_t get_offset_of_mass_6() { return static_cast<int32_t>(offsetof(ContactBody_t3242285916, ___mass_6)); }
	inline float get_mass_6() const { return ___mass_6; }
	inline float* get_address_of_mass_6() { return &___mass_6; }
	inline void set_mass_6(float value)
	{
		___mass_6 = value;
	}

	inline static int32_t get_offset_of_dead_7() { return static_cast<int32_t>(offsetof(ContactBody_t3242285916, ___dead_7)); }
	inline bool get_dead_7() const { return ___dead_7; }
	inline bool* get_address_of_dead_7() { return &___dead_7; }
	inline void set_dead_7(bool value)
	{
		___dead_7 = value;
	}

	inline static int32_t get_offset_of_lastWasGrounded_8() { return static_cast<int32_t>(offsetof(ContactBody_t3242285916, ___lastWasGrounded_8)); }
	inline bool get_lastWasGrounded_8() const { return ___lastWasGrounded_8; }
	inline bool* get_address_of_lastWasGrounded_8() { return &___lastWasGrounded_8; }
	inline void set_lastWasGrounded_8(bool value)
	{
		___lastWasGrounded_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
