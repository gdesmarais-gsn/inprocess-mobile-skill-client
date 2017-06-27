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

// GSN.Skill.Phoenix.HistoryTileSelectViewEvent
struct  HistoryTileSelectViewEvent_t4042987719  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.HistoryTileSelectViewEvent::gameResourceName
	String_t* ___gameResourceName_0;

public:
	inline static int32_t get_offset_of_gameResourceName_0() { return static_cast<int32_t>(offsetof(HistoryTileSelectViewEvent_t4042987719, ___gameResourceName_0)); }
	inline String_t* get_gameResourceName_0() const { return ___gameResourceName_0; }
	inline String_t** get_address_of_gameResourceName_0() { return &___gameResourceName_0; }
	inline void set_gameResourceName_0(String_t* value)
	{
		___gameResourceName_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameResourceName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
