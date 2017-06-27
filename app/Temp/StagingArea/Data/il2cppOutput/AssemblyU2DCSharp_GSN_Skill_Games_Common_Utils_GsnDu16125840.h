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

// GSN.Skill.Games.Common.Utils.GsnDumpCatcher
struct  GsnDumpCatcher_t16125840  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Games.Common.Utils.GsnDumpCatcher::_dumpString
	String_t* ____dumpString_0;

public:
	inline static int32_t get_offset_of__dumpString_0() { return static_cast<int32_t>(offsetof(GsnDumpCatcher_t16125840, ____dumpString_0)); }
	inline String_t* get__dumpString_0() const { return ____dumpString_0; }
	inline String_t** get_address_of__dumpString_0() { return &____dumpString_0; }
	inline void set__dumpString_0(String_t* value)
	{
		____dumpString_0 = value;
		Il2CppCodeGenWriteBarrier(&____dumpString_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
