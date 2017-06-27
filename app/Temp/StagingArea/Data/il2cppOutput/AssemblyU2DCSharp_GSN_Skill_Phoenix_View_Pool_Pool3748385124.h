#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.View.Pool.GameObjectPool
struct GameObjectPool_t2519041363;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.Pool.PooledGameObject
struct  PooledGameObject_t3748385124  : public MonoBehaviour_t1158329972
{
public:
	// GSN.Skill.Phoenix.View.Pool.GameObjectPool GSN.Skill.Phoenix.View.Pool.PooledGameObject::_pool
	GameObjectPool_t2519041363 * ____pool_2;
	// System.Boolean GSN.Skill.Phoenix.View.Pool.PooledGameObject::_allocated
	bool ____allocated_3;

public:
	inline static int32_t get_offset_of__pool_2() { return static_cast<int32_t>(offsetof(PooledGameObject_t3748385124, ____pool_2)); }
	inline GameObjectPool_t2519041363 * get__pool_2() const { return ____pool_2; }
	inline GameObjectPool_t2519041363 ** get_address_of__pool_2() { return &____pool_2; }
	inline void set__pool_2(GameObjectPool_t2519041363 * value)
	{
		____pool_2 = value;
		Il2CppCodeGenWriteBarrier(&____pool_2, value);
	}

	inline static int32_t get_offset_of__allocated_3() { return static_cast<int32_t>(offsetof(PooledGameObject_t3748385124, ____allocated_3)); }
	inline bool get__allocated_3() const { return ____allocated_3; }
	inline bool* get_address_of__allocated_3() { return &____allocated_3; }
	inline void set__allocated_3(bool value)
	{
		____allocated_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
