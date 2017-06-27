#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t3218582488;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.WrapperDictionary
struct  WrapperDictionary_t2630318991  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> Newtonsoft.Json.Utilities.WrapperDictionary::_wrapperTypes
	Dictionary_2_t3218582488 * ____wrapperTypes_0;

public:
	inline static int32_t get_offset_of__wrapperTypes_0() { return static_cast<int32_t>(offsetof(WrapperDictionary_t2630318991, ____wrapperTypes_0)); }
	inline Dictionary_2_t3218582488 * get__wrapperTypes_0() const { return ____wrapperTypes_0; }
	inline Dictionary_2_t3218582488 ** get_address_of__wrapperTypes_0() { return &____wrapperTypes_0; }
	inline void set__wrapperTypes_0(Dictionary_2_t3218582488 * value)
	{
		____wrapperTypes_0 = value;
		Il2CppCodeGenWriteBarrier(&____wrapperTypes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
