#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Phoenix.View.Pool.GameObjectPool>>
struct Dictionary_2_t2053632591;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t3968615785;

#include "AssemblyU2DCSharp_GSN_Skill_Utils_SingletonMonoBeh3872470119.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager
struct  GameObjectPoolManager_t3946188246  : public SingletonMonoBehaviour_1_t3872470119
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Phoenix.View.Pool.GameObjectPool>> GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::_pooledObjects
	Dictionary_2_t2053632591 * ____pooledObjects_6;
	// UnityEngine.Transform GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::_poolParent
	Transform_t3275118058 * ____poolParent_7;
	// UnityEngine.WaitForFixedUpdate GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::_waitForFixedUpdate
	WaitForFixedUpdate_t3968615785 * ____waitForFixedUpdate_8;

public:
	inline static int32_t get_offset_of__pooledObjects_6() { return static_cast<int32_t>(offsetof(GameObjectPoolManager_t3946188246, ____pooledObjects_6)); }
	inline Dictionary_2_t2053632591 * get__pooledObjects_6() const { return ____pooledObjects_6; }
	inline Dictionary_2_t2053632591 ** get_address_of__pooledObjects_6() { return &____pooledObjects_6; }
	inline void set__pooledObjects_6(Dictionary_2_t2053632591 * value)
	{
		____pooledObjects_6 = value;
		Il2CppCodeGenWriteBarrier(&____pooledObjects_6, value);
	}

	inline static int32_t get_offset_of__poolParent_7() { return static_cast<int32_t>(offsetof(GameObjectPoolManager_t3946188246, ____poolParent_7)); }
	inline Transform_t3275118058 * get__poolParent_7() const { return ____poolParent_7; }
	inline Transform_t3275118058 ** get_address_of__poolParent_7() { return &____poolParent_7; }
	inline void set__poolParent_7(Transform_t3275118058 * value)
	{
		____poolParent_7 = value;
		Il2CppCodeGenWriteBarrier(&____poolParent_7, value);
	}

	inline static int32_t get_offset_of__waitForFixedUpdate_8() { return static_cast<int32_t>(offsetof(GameObjectPoolManager_t3946188246, ____waitForFixedUpdate_8)); }
	inline WaitForFixedUpdate_t3968615785 * get__waitForFixedUpdate_8() const { return ____waitForFixedUpdate_8; }
	inline WaitForFixedUpdate_t3968615785 ** get_address_of__waitForFixedUpdate_8() { return &____waitForFixedUpdate_8; }
	inline void set__waitForFixedUpdate_8(WaitForFixedUpdate_t3968615785 * value)
	{
		____waitForFixedUpdate_8 = value;
		Il2CppCodeGenWriteBarrier(&____waitForFixedUpdate_8, value);
	}
};

struct GameObjectPoolManager_t3946188246_StaticFields
{
public:
	// System.Boolean GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager::<IsAppQuitting>k__BackingField
	bool ___U3CIsAppQuittingU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CIsAppQuittingU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GameObjectPoolManager_t3946188246_StaticFields, ___U3CIsAppQuittingU3Ek__BackingField_9)); }
	inline bool get_U3CIsAppQuittingU3Ek__BackingField_9() const { return ___U3CIsAppQuittingU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsAppQuittingU3Ek__BackingField_9() { return &___U3CIsAppQuittingU3Ek__BackingField_9; }
	inline void set_U3CIsAppQuittingU3Ek__BackingField_9(bool value)
	{
		___U3CIsAppQuittingU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
