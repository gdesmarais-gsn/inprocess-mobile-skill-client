#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData>
struct Dictionary_2_t851639555;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.GameListEvent
struct  GameListEvent_t3849160264  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData> GSN.Skill.Phoenix.GameListEvent::list
	Dictionary_2_t851639555 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(GameListEvent_t3849160264, ___list_0)); }
	inline Dictionary_2_t851639555 * get_list_0() const { return ___list_0; }
	inline Dictionary_2_t851639555 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(Dictionary_2_t851639555 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier(&___list_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
