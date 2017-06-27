#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Game.SceneLoadingData
struct  SceneLoadingData_t1095366590  : public Il2CppObject
{
public:
	// UnityEngine.AsyncOperation GSN.Skill.Games.Common.Client.Game.SceneLoadingData::async
	AsyncOperation_t3814632279 * ___async_0;

public:
	inline static int32_t get_offset_of_async_0() { return static_cast<int32_t>(offsetof(SceneLoadingData_t1095366590, ___async_0)); }
	inline AsyncOperation_t3814632279 * get_async_0() const { return ___async_0; }
	inline AsyncOperation_t3814632279 ** get_address_of_async_0() { return &___async_0; }
	inline void set_async_0(AsyncOperation_t3814632279 * value)
	{
		___async_0 = value;
		Il2CppCodeGenWriteBarrier(&___async_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
