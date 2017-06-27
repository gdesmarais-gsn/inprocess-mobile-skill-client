#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Phoenix.CreditCardDetails>
struct List_1_t805811243;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.GetAllCreditCardsSuccessEvent
struct  GetAllCreditCardsSuccessEvent_t1948198678  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.CreditCardDetails> GSN.Skill.Phoenix.GetAllCreditCardsSuccessEvent::creditCards
	List_1_t805811243 * ___creditCards_0;

public:
	inline static int32_t get_offset_of_creditCards_0() { return static_cast<int32_t>(offsetof(GetAllCreditCardsSuccessEvent_t1948198678, ___creditCards_0)); }
	inline List_1_t805811243 * get_creditCards_0() const { return ___creditCards_0; }
	inline List_1_t805811243 ** get_address_of_creditCards_0() { return &___creditCards_0; }
	inline void set_creditCards_0(List_1_t805811243 * value)
	{
		___creditCards_0 = value;
		Il2CppCodeGenWriteBarrier(&___creditCards_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
