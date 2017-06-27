#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.MonoBehaviourPool
struct MonoBehaviourPool_t4145220098;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.PooledMonoBehaviour
struct  PooledMonoBehaviour_t1962253443  : public MonoBehaviour_t1158329972
{
public:
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Common.Client.PooledMonoBehaviour::_pool
	MonoBehaviourPool_t4145220098 * ____pool_2;
	// System.Boolean GSN.Skill.Games.Common.Client.PooledMonoBehaviour::_allocated
	bool ____allocated_3;

public:
	inline static int32_t get_offset_of__pool_2() { return static_cast<int32_t>(offsetof(PooledMonoBehaviour_t1962253443, ____pool_2)); }
	inline MonoBehaviourPool_t4145220098 * get__pool_2() const { return ____pool_2; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__pool_2() { return &____pool_2; }
	inline void set__pool_2(MonoBehaviourPool_t4145220098 * value)
	{
		____pool_2 = value;
		Il2CppCodeGenWriteBarrier(&____pool_2, value);
	}

	inline static int32_t get_offset_of__allocated_3() { return static_cast<int32_t>(offsetof(PooledMonoBehaviour_t1962253443, ____allocated_3)); }
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
