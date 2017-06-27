#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.LoginSuccessEvent
struct  LoginSuccessEvent_t2321248746  : public Il2CppObject
{
public:
	// System.Boolean GSN.Skill.Phoenix.LoginSuccessEvent::autoLogin
	bool ___autoLogin_0;

public:
	inline static int32_t get_offset_of_autoLogin_0() { return static_cast<int32_t>(offsetof(LoginSuccessEvent_t2321248746, ___autoLogin_0)); }
	inline bool get_autoLogin_0() const { return ___autoLogin_0; }
	inline bool* get_address_of_autoLogin_0() { return &___autoLogin_0; }
	inline void set_autoLogin_0(bool value)
	{
		___autoLogin_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
