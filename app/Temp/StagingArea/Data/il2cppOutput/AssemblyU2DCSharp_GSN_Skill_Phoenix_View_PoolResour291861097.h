#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.Pool.PoolData>
struct List_1_t1751204214;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.PoolResources
struct  PoolResources_t291861097  : public ScriptableObject_t1975622470
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.Pool.PoolData> GSN.Skill.Phoenix.View.PoolResources::poolList
	List_1_t1751204214 * ___poolList_2;

public:
	inline static int32_t get_offset_of_poolList_2() { return static_cast<int32_t>(offsetof(PoolResources_t291861097, ___poolList_2)); }
	inline List_1_t1751204214 * get_poolList_2() const { return ___poolList_2; }
	inline List_1_t1751204214 ** get_address_of_poolList_2() { return &___poolList_2; }
	inline void set_poolList_2(List_1_t1751204214 * value)
	{
		___poolList_2 = value;
		Il2CppCodeGenWriteBarrier(&___poolList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
