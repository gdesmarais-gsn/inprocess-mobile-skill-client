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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.QA.LoginTest_Popup
struct  LoginTest_Popup_t2164360810  : public MonoBehaviour_t1158329972
{
public:
	// System.String GSN.Skill.Phoenix.QA.LoginTest_Popup::loginButtonName
	String_t* ___loginButtonName_2;

public:
	inline static int32_t get_offset_of_loginButtonName_2() { return static_cast<int32_t>(offsetof(LoginTest_Popup_t2164360810, ___loginButtonName_2)); }
	inline String_t* get_loginButtonName_2() const { return ___loginButtonName_2; }
	inline String_t** get_address_of_loginButtonName_2() { return &___loginButtonName_2; }
	inline void set_loginButtonName_2(String_t* value)
	{
		___loginButtonName_2 = value;
		Il2CppCodeGenWriteBarrier(&___loginButtonName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
