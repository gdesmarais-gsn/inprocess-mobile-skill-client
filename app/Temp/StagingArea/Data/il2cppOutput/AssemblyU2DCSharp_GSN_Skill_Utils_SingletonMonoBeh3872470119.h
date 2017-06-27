#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager
struct GameObjectPoolManager_t3946188246;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Utils.SingletonMonoBehaviour`1<GSN.Skill.Phoenix.View.Pool.GameObjectPoolManager>
struct  SingletonMonoBehaviour_1_t3872470119  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct SingletonMonoBehaviour_1_t3872470119_StaticFields
{
public:
	// T GSN.Skill.Utils.SingletonMonoBehaviour`1::_instance
	GameObjectPoolManager_t3946188246 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(SingletonMonoBehaviour_1_t3872470119_StaticFields, ____instance_2)); }
	inline GameObjectPoolManager_t3946188246 * get__instance_2() const { return ____instance_2; }
	inline GameObjectPoolManager_t3946188246 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(GameObjectPoolManager_t3946188246 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
