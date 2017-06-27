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

// GSN.Skill.Phoenix.MakeDepositSuccessEvent
struct  MakeDepositSuccessEvent_t982473717  : public Il2CppObject
{
public:
	// System.Int32 GSN.Skill.Phoenix.MakeDepositSuccessEvent::amount
	int32_t ___amount_0;
	// System.Int32 GSN.Skill.Phoenix.MakeDepositSuccessEvent::userId
	int32_t ___userId_1;

public:
	inline static int32_t get_offset_of_amount_0() { return static_cast<int32_t>(offsetof(MakeDepositSuccessEvent_t982473717, ___amount_0)); }
	inline int32_t get_amount_0() const { return ___amount_0; }
	inline int32_t* get_address_of_amount_0() { return &___amount_0; }
	inline void set_amount_0(int32_t value)
	{
		___amount_0 = value;
	}

	inline static int32_t get_offset_of_userId_1() { return static_cast<int32_t>(offsetof(MakeDepositSuccessEvent_t982473717, ___userId_1)); }
	inline int32_t get_userId_1() const { return ___userId_1; }
	inline int32_t* get_address_of_userId_1() { return &___userId_1; }
	inline void set_userId_1(int32_t value)
	{
		___userId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
