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

// Stm.V1_1.WaitableAttribute
struct  WaitableAttribute_t200012413  : public Attribute_t542643598
{
public:
	// System.Boolean Stm.V1_1.WaitableAttribute::waitable
	bool ___waitable_0;

public:
	inline static int32_t get_offset_of_waitable_0() { return static_cast<int32_t>(offsetof(WaitableAttribute_t200012413, ___waitable_0)); }
	inline bool get_waitable_0() const { return ___waitable_0; }
	inline bool* get_address_of_waitable_0() { return &___waitable_0; }
	inline void set_waitable_0(bool value)
	{
		___waitable_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
