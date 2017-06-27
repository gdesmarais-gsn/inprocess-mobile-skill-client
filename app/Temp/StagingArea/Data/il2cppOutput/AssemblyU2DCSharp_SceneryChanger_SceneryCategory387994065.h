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
// SceneryChanger/Scenery[]
struct SceneryU5BU5D_t3651818132;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneryChanger/SceneryCategory
struct  SceneryCategory_t387994065  : public Il2CppObject
{
public:
	// System.String SceneryChanger/SceneryCategory::name
	String_t* ___name_0;
	// SceneryChanger/Scenery[] SceneryChanger/SceneryCategory::scenes
	SceneryU5BU5D_t3651818132* ___scenes_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SceneryCategory_t387994065, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_scenes_1() { return static_cast<int32_t>(offsetof(SceneryCategory_t387994065, ___scenes_1)); }
	inline SceneryU5BU5D_t3651818132* get_scenes_1() const { return ___scenes_1; }
	inline SceneryU5BU5D_t3651818132** get_address_of_scenes_1() { return &___scenes_1; }
	inline void set_scenes_1(SceneryU5BU5D_t3651818132* value)
	{
		___scenes_1 = value;
		Il2CppCodeGenWriteBarrier(&___scenes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
