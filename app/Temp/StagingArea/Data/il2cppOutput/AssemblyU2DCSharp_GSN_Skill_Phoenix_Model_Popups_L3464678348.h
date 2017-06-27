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

// GSN.Skill.Phoenix.Model.Popups.LoginPopupModel
struct  LoginPopupModel_t3464678348  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.Model.Popups.LoginPopupModel::_username
	String_t* ____username_0;
	// System.Boolean GSN.Skill.Phoenix.Model.Popups.LoginPopupModel::_rememberMeEnabled
	bool ____rememberMeEnabled_1;

public:
	inline static int32_t get_offset_of__username_0() { return static_cast<int32_t>(offsetof(LoginPopupModel_t3464678348, ____username_0)); }
	inline String_t* get__username_0() const { return ____username_0; }
	inline String_t** get_address_of__username_0() { return &____username_0; }
	inline void set__username_0(String_t* value)
	{
		____username_0 = value;
		Il2CppCodeGenWriteBarrier(&____username_0, value);
	}

	inline static int32_t get_offset_of__rememberMeEnabled_1() { return static_cast<int32_t>(offsetof(LoginPopupModel_t3464678348, ____rememberMeEnabled_1)); }
	inline bool get__rememberMeEnabled_1() const { return ____rememberMeEnabled_1; }
	inline bool* get_address_of__rememberMeEnabled_1() { return &____rememberMeEnabled_1; }
	inline void set__rememberMeEnabled_1(bool value)
	{
		____rememberMeEnabled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
