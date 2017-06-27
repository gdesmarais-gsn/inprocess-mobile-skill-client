#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.GameMaps
struct  GameMaps_t1220693367  : public Il2CppObject
{
public:

public:
};

struct GameMaps_t1220693367_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Phoenix.Model.GameMaps::modelHashMap
	Dictionary_2_t3943999495 * ___modelHashMap_0;

public:
	inline static int32_t get_offset_of_modelHashMap_0() { return static_cast<int32_t>(offsetof(GameMaps_t1220693367_StaticFields, ___modelHashMap_0)); }
	inline Dictionary_2_t3943999495 * get_modelHashMap_0() const { return ___modelHashMap_0; }
	inline Dictionary_2_t3943999495 ** get_address_of_modelHashMap_0() { return &___modelHashMap_0; }
	inline void set_modelHashMap_0(Dictionary_2_t3943999495 * value)
	{
		___modelHashMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___modelHashMap_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
