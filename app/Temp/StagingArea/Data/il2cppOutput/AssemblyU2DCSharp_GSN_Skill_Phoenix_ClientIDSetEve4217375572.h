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

// GSN.Skill.Phoenix.ClientIDSetEvent
struct  ClientIDSetEvent_t4217375572  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.ClientIDSetEvent::clientID
	String_t* ___clientID_0;

public:
	inline static int32_t get_offset_of_clientID_0() { return static_cast<int32_t>(offsetof(ClientIDSetEvent_t4217375572, ___clientID_0)); }
	inline String_t* get_clientID_0() const { return ___clientID_0; }
	inline String_t** get_address_of_clientID_0() { return &___clientID_0; }
	inline void set_clientID_0(String_t* value)
	{
		___clientID_0 = value;
		Il2CppCodeGenWriteBarrier(&___clientID_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
