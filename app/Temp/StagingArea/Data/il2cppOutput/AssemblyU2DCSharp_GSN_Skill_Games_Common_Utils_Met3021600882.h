#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>>
struct List_1_t1593889629;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.MetricTracker
struct  MetricTracker_t3021600882  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>> GSN.Skill.Games.Common.Utils.MetricTracker::_stream
	List_1_t1593889629 * ____stream_0;

public:
	inline static int32_t get_offset_of__stream_0() { return static_cast<int32_t>(offsetof(MetricTracker_t3021600882, ____stream_0)); }
	inline List_1_t1593889629 * get__stream_0() const { return ____stream_0; }
	inline List_1_t1593889629 ** get_address_of__stream_0() { return &____stream_0; }
	inline void set__stream_0(List_1_t1593889629 * value)
	{
		____stream_0 = value;
		Il2CppCodeGenWriteBarrier(&____stream_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
