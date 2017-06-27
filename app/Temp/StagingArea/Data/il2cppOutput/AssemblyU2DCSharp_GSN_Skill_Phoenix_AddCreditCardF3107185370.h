#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Phoenix.Strings.ErrorTranslation>
struct List_1_t287844835;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.AddCreditCardFailEvent
struct  AddCreditCardFailEvent_t3107185370  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.Strings.ErrorTranslation> GSN.Skill.Phoenix.AddCreditCardFailEvent::allErrors
	List_1_t287844835 * ___allErrors_0;

public:
	inline static int32_t get_offset_of_allErrors_0() { return static_cast<int32_t>(offsetof(AddCreditCardFailEvent_t3107185370, ___allErrors_0)); }
	inline List_1_t287844835 * get_allErrors_0() const { return ___allErrors_0; }
	inline List_1_t287844835 ** get_address_of_allErrors_0() { return &___allErrors_0; }
	inline void set_allErrors_0(List_1_t287844835 * value)
	{
		___allErrors_0 = value;
		Il2CppCodeGenWriteBarrier(&___allErrors_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
