#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.ActionQueue/<HandleException>c__AnonStorey2
struct  U3CHandleExceptionU3Ec__AnonStorey2_t3258177460  : public Il2CppObject
{
public:
	// System.Exception GSN.Skill.Games.Common.Utils.ActionQueue/<HandleException>c__AnonStorey2::e
	Exception_t1927440687 * ___e_0;
	// System.String GSN.Skill.Games.Common.Utils.ActionQueue/<HandleException>c__AnonStorey2::message
	String_t* ___message_1;
	// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.ActionQueue/<HandleException>c__AnonStorey2::actionContext
	ActionContext_t4252928663 * ___actionContext_2;
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Utils.ActionQueue/<HandleException>c__AnonStorey2::$this
	ActionQueue_t1924202305 * ___U24this_3;

public:
	inline static int32_t get_offset_of_e_0() { return static_cast<int32_t>(offsetof(U3CHandleExceptionU3Ec__AnonStorey2_t3258177460, ___e_0)); }
	inline Exception_t1927440687 * get_e_0() const { return ___e_0; }
	inline Exception_t1927440687 ** get_address_of_e_0() { return &___e_0; }
	inline void set_e_0(Exception_t1927440687 * value)
	{
		___e_0 = value;
		Il2CppCodeGenWriteBarrier(&___e_0, value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(U3CHandleExceptionU3Ec__AnonStorey2_t3258177460, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier(&___message_1, value);
	}

	inline static int32_t get_offset_of_actionContext_2() { return static_cast<int32_t>(offsetof(U3CHandleExceptionU3Ec__AnonStorey2_t3258177460, ___actionContext_2)); }
	inline ActionContext_t4252928663 * get_actionContext_2() const { return ___actionContext_2; }
	inline ActionContext_t4252928663 ** get_address_of_actionContext_2() { return &___actionContext_2; }
	inline void set_actionContext_2(ActionContext_t4252928663 * value)
	{
		___actionContext_2 = value;
		Il2CppCodeGenWriteBarrier(&___actionContext_2, value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CHandleExceptionU3Ec__AnonStorey2_t3258177460, ___U24this_3)); }
	inline ActionQueue_t1924202305 * get_U24this_3() const { return ___U24this_3; }
	inline ActionQueue_t1924202305 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(ActionQueue_t1924202305 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
