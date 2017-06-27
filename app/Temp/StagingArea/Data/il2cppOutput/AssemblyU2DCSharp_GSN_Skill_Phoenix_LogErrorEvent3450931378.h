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

// GSN.Skill.Phoenix.LogErrorEvent
struct  LogErrorEvent_t3450931378  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.LogErrorEvent::error
	String_t* ___error_0;

public:
	inline static int32_t get_offset_of_error_0() { return static_cast<int32_t>(offsetof(LogErrorEvent_t3450931378, ___error_0)); }
	inline String_t* get_error_0() const { return ___error_0; }
	inline String_t** get_address_of_error_0() { return &___error_0; }
	inline void set_error_0(String_t* value)
	{
		___error_0 = value;
		Il2CppCodeGenWriteBarrier(&___error_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
