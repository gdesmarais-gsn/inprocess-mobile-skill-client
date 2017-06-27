#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.ResetPasswordMultiAccountEvent
struct  ResetPasswordMultiAccountEvent_t1156360520  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> GSN.Skill.Phoenix.ResetPasswordMultiAccountEvent::usernames
	List_1_t1398341365 * ___usernames_0;

public:
	inline static int32_t get_offset_of_usernames_0() { return static_cast<int32_t>(offsetof(ResetPasswordMultiAccountEvent_t1156360520, ___usernames_0)); }
	inline List_1_t1398341365 * get_usernames_0() const { return ___usernames_0; }
	inline List_1_t1398341365 ** get_address_of_usernames_0() { return &___usernames_0; }
	inline void set_usernames_0(List_1_t1398341365 * value)
	{
		___usernames_0 = value;
		Il2CppCodeGenWriteBarrier(&___usernames_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
