#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,UnityEngine.Transform[]>
struct Dictionary_2_t3027994544;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_1.SceneHelper
struct  SceneHelper_t2463174  : public Il2CppObject
{
public:

public:
};

struct SceneHelper_t2463174_StaticFields
{
public:
	// UnityEngine.GameObject[] Stm.V1_1.SceneHelper::allGameObjectsCached
	GameObjectU5BU5D_t3057952154* ___allGameObjectsCached_0;
	// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,UnityEngine.Transform[]> Stm.V1_1.SceneHelper::nameToGameObjectsCached
	Dictionary_2_t3027994544 * ___nameToGameObjectsCached_1;

public:
	inline static int32_t get_offset_of_allGameObjectsCached_0() { return static_cast<int32_t>(offsetof(SceneHelper_t2463174_StaticFields, ___allGameObjectsCached_0)); }
	inline GameObjectU5BU5D_t3057952154* get_allGameObjectsCached_0() const { return ___allGameObjectsCached_0; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_allGameObjectsCached_0() { return &___allGameObjectsCached_0; }
	inline void set_allGameObjectsCached_0(GameObjectU5BU5D_t3057952154* value)
	{
		___allGameObjectsCached_0 = value;
		Il2CppCodeGenWriteBarrier(&___allGameObjectsCached_0, value);
	}

	inline static int32_t get_offset_of_nameToGameObjectsCached_1() { return static_cast<int32_t>(offsetof(SceneHelper_t2463174_StaticFields, ___nameToGameObjectsCached_1)); }
	inline Dictionary_2_t3027994544 * get_nameToGameObjectsCached_1() const { return ___nameToGameObjectsCached_1; }
	inline Dictionary_2_t3027994544 ** get_address_of_nameToGameObjectsCached_1() { return &___nameToGameObjectsCached_1; }
	inline void set_nameToGameObjectsCached_1(Dictionary_2_t3027994544 * value)
	{
		___nameToGameObjectsCached_1 = value;
		Il2CppCodeGenWriteBarrier(&___nameToGameObjectsCached_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
