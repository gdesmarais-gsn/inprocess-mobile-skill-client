#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stm.V1_1.ExposeStaticMethodsAsEventsAttribute
struct  ExposeStaticMethodsAsEventsAttribute_t3301386055  : public Attribute_t542643598
{
public:
	// System.Boolean Stm.V1_1.ExposeStaticMethodsAsEventsAttribute::includingBaseClasses
	bool ___includingBaseClasses_0;

public:
	inline static int32_t get_offset_of_includingBaseClasses_0() { return static_cast<int32_t>(offsetof(ExposeStaticMethodsAsEventsAttribute_t3301386055, ___includingBaseClasses_0)); }
	inline bool get_includingBaseClasses_0() const { return ___includingBaseClasses_0; }
	inline bool* get_address_of_includingBaseClasses_0() { return &___includingBaseClasses_0; }
	inline void set_includingBaseClasses_0(bool value)
	{
		___includingBaseClasses_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
