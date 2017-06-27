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

// GSN.Skill.Phoenix.VersionCheckEvent
struct  VersionCheckEvent_t894034262  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.VersionCheckEvent::url
	String_t* ___url_0;
	// System.Boolean GSN.Skill.Phoenix.VersionCheckEvent::updateRequired
	bool ___updateRequired_1;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(VersionCheckEvent_t894034262, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier(&___url_0, value);
	}

	inline static int32_t get_offset_of_updateRequired_1() { return static_cast<int32_t>(offsetof(VersionCheckEvent_t894034262, ___updateRequired_1)); }
	inline bool get_updateRequired_1() const { return ___updateRequired_1; }
	inline bool* get_address_of_updateRequired_1() { return &___updateRequired_1; }
	inline void set_updateRequired_1(bool value)
	{
		___updateRequired_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
