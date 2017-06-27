#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Client.PresetEntry>
struct List_1_t927256073;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.ArenaDebugMenuPresetButton
struct  ArenaDebugMenuPresetButton_t3845817840  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Client.PresetEntry> GSN.Skill.Games.Common.Client.ArenaDebugMenuPresetButton::presets
	List_1_t927256073 * ___presets_2;

public:
	inline static int32_t get_offset_of_presets_2() { return static_cast<int32_t>(offsetof(ArenaDebugMenuPresetButton_t3845817840, ___presets_2)); }
	inline List_1_t927256073 * get_presets_2() const { return ___presets_2; }
	inline List_1_t927256073 ** get_address_of_presets_2() { return &___presets_2; }
	inline void set_presets_2(List_1_t927256073 * value)
	{
		___presets_2 = value;
		Il2CppCodeGenWriteBarrier(&___presets_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
