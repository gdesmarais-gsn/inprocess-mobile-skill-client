#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t670468573;
// System.Collections.Generic.List`1<UnityEngine.AnimationClip>
struct List_1_t2879446082;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_t3175843211;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimationOverride
struct  AnimationOverride_t2803678322  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RuntimeAnimatorController AnimationOverride::selectedController
	RuntimeAnimatorController_t670468573 * ___selectedController_2;
	// UnityEngine.RuntimeAnimatorController AnimationOverride::storeController
	RuntimeAnimatorController_t670468573 * ___storeController_3;
	// System.Collections.Generic.List`1<UnityEngine.AnimationClip> AnimationOverride::animClips
	List_1_t2879446082 * ___animClips_4;
	// System.Collections.Generic.List`1<System.String> AnimationOverride::animClips_old
	List_1_t1398341365 * ___animClips_old_5;
	// UnityEngine.GameObject AnimationOverride::myObject
	GameObject_t1756533147 * ___myObject_6;
	// UnityEngine.Animator AnimationOverride::animatorToOverride
	Animator_t69676727 * ___animatorToOverride_7;
	// UnityEngine.AnimatorOverrideController AnimationOverride::animOverride
	AnimatorOverrideController_t3175843211 * ___animOverride_8;
	// System.String AnimationOverride::checkControllerName
	String_t* ___checkControllerName_9;

public:
	inline static int32_t get_offset_of_selectedController_2() { return static_cast<int32_t>(offsetof(AnimationOverride_t2803678322, ___selectedController_2)); }
	inline RuntimeAnimatorController_t670468573 * get_selectedController_2() const { return ___selectedController_2; }
	inline RuntimeAnimatorController_t670468573 ** get_address_of_selectedController_2() { return &___selectedController_2; }
	inline void set_selectedController_2(RuntimeAnimatorController_t670468573 * value)
	{
		___selectedController_2 = value;
		Il2CppCodeGenWriteBarrier(&___selectedController_2, value);
	}

	inline static int32_t get_offset_of_storeController_3() { return static_cast<int32_t>(offsetof(AnimationOverride_t2803678322, ___storeController_3)); }
	inline RuntimeAnimatorController_t670468573 * get_storeController_3() const { return ___storeController_3; }
	inline RuntimeAnimatorController_t670468573 ** get_address_of_storeController_3() { return &___storeController_3; }
	inline void set_storeController_3(RuntimeAnimatorController_t670468573 * value)
	{
		___storeController_3 = value;
		Il2CppCodeGenWriteBarrier(&___storeController_3, value);
	}

	inline static int32_t get_offset_of_animClips_4() { return static_cast<int32_t>(offsetof(AnimationOverride_t2803678322, ___animClips_4)); }
	inline List_1_t2879446082 * get_animClips_4() const { return ___animClips_4; }
	inline List_1_t2879446082 ** get_address_of_animClips_4() { return &___animClips_4; }
	inline void set_animClips_4(List_1_t2879446082 * value)
	{
		___animClips_4 = value;
		Il2CppCodeGenWriteBarrier(&___animClips_4, value);
	}

	inline static int32_t get_offset_of_animClips_old_5() { return static_cast<int32_t>(offsetof(AnimationOverride_t2803678322, ___animClips_old_5)); }
	inline List_1_t1398341365 * get_animClips_old_5() const { return ___animClips_old_5; }
	inline List_1_t1398341365 ** get_address_of_animClips_old_5() { return &___animClips_old_5; }
	inline void set_animClips_old_5(List_1_t1398341365 * value)
	{
		___animClips_old_5 = value;
		Il2CppCodeGenWriteBarrier(&___animClips_old_5, value);
	}

	inline static int32_t get_offset_of_myObject_6() { return static_cast<int32_t>(offsetof(AnimationOverride_t2803678322, ___myObject_6)); }
	inline GameObject_t1756533147 * get_myObject_6() const { return ___myObject_6; }
	inline GameObject_t1756533147 ** get_address_of_myObject_6() { return &___myObject_6; }
	inline void set_myObject_6(GameObject_t1756533147 * value)
	{
		___myObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___myObject_6, value);
	}

	inline static int32_t get_offset_of_animatorToOverride_7() { return static_cast<int32_t>(offsetof(AnimationOverride_t2803678322, ___animatorToOverride_7)); }
	inline Animator_t69676727 * get_animatorToOverride_7() const { return ___animatorToOverride_7; }
	inline Animator_t69676727 ** get_address_of_animatorToOverride_7() { return &___animatorToOverride_7; }
	inline void set_animatorToOverride_7(Animator_t69676727 * value)
	{
		___animatorToOverride_7 = value;
		Il2CppCodeGenWriteBarrier(&___animatorToOverride_7, value);
	}

	inline static int32_t get_offset_of_animOverride_8() { return static_cast<int32_t>(offsetof(AnimationOverride_t2803678322, ___animOverride_8)); }
	inline AnimatorOverrideController_t3175843211 * get_animOverride_8() const { return ___animOverride_8; }
	inline AnimatorOverrideController_t3175843211 ** get_address_of_animOverride_8() { return &___animOverride_8; }
	inline void set_animOverride_8(AnimatorOverrideController_t3175843211 * value)
	{
		___animOverride_8 = value;
		Il2CppCodeGenWriteBarrier(&___animOverride_8, value);
	}

	inline static int32_t get_offset_of_checkControllerName_9() { return static_cast<int32_t>(offsetof(AnimationOverride_t2803678322, ___checkControllerName_9)); }
	inline String_t* get_checkControllerName_9() const { return ___checkControllerName_9; }
	inline String_t** get_address_of_checkControllerName_9() { return &___checkControllerName_9; }
	inline void set_checkControllerName_9(String_t* value)
	{
		___checkControllerName_9 = value;
		Il2CppCodeGenWriteBarrier(&___checkControllerName_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
