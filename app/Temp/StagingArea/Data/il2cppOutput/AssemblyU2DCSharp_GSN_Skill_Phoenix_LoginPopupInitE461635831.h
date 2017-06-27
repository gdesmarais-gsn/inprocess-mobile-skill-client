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

// GSN.Skill.Phoenix.LoginPopupInitEvent
struct  LoginPopupInitEvent_t461635831  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.LoginPopupInitEvent::username
	String_t* ___username_0;
	// System.Boolean GSN.Skill.Phoenix.LoginPopupInitEvent::rememberMeEnabled
	bool ___rememberMeEnabled_1;

public:
	inline static int32_t get_offset_of_username_0() { return static_cast<int32_t>(offsetof(LoginPopupInitEvent_t461635831, ___username_0)); }
	inline String_t* get_username_0() const { return ___username_0; }
	inline String_t** get_address_of_username_0() { return &___username_0; }
	inline void set_username_0(String_t* value)
	{
		___username_0 = value;
		Il2CppCodeGenWriteBarrier(&___username_0, value);
	}

	inline static int32_t get_offset_of_rememberMeEnabled_1() { return static_cast<int32_t>(offsetof(LoginPopupInitEvent_t461635831, ___rememberMeEnabled_1)); }
	inline bool get_rememberMeEnabled_1() const { return ___rememberMeEnabled_1; }
	inline bool* get_address_of_rememberMeEnabled_1() { return &___rememberMeEnabled_1; }
	inline void set_rememberMeEnabled_1(bool value)
	{
		___rememberMeEnabled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
