#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Runtime_CompilerServices_CustomCon2797584351.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DateTimeConstantAttribute
struct  DateTimeConstantAttribute_t4275890373  : public CustomConstantAttribute_t2797584351
{
public:
	// System.Int64 System.Runtime.CompilerServices.DateTimeConstantAttribute::ticks
	int64_t ___ticks_0;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTimeConstantAttribute_t4275890373, ___ticks_0)); }
	inline int64_t get_ticks_0() const { return ___ticks_0; }
	inline int64_t* get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(int64_t value)
	{
		___ticks_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
