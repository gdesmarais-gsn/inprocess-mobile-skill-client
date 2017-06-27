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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.PresetEntry
struct  PresetEntry_t1558134941  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Games.Common.Client.PresetEntry::presetName
	String_t* ___presetName_0;
	// System.String GSN.Skill.Games.Common.Client.PresetEntry::presetValue
	String_t* ___presetValue_1;

public:
	inline static int32_t get_offset_of_presetName_0() { return static_cast<int32_t>(offsetof(PresetEntry_t1558134941, ___presetName_0)); }
	inline String_t* get_presetName_0() const { return ___presetName_0; }
	inline String_t** get_address_of_presetName_0() { return &___presetName_0; }
	inline void set_presetName_0(String_t* value)
	{
		___presetName_0 = value;
		Il2CppCodeGenWriteBarrier(&___presetName_0, value);
	}

	inline static int32_t get_offset_of_presetValue_1() { return static_cast<int32_t>(offsetof(PresetEntry_t1558134941, ___presetValue_1)); }
	inline String_t* get_presetValue_1() const { return ___presetValue_1; }
	inline String_t** get_address_of_presetValue_1() { return &___presetValue_1; }
	inline void set_presetValue_1(String_t* value)
	{
		___presetValue_1 = value;
		Il2CppCodeGenWriteBarrier(&___presetValue_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
