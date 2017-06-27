#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t3194695850;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.BooleanStack
struct  BooleanStack_t2953109678  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Boolean> MsgPack.BooleanStack::_list
	List_1_t3194695850 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(BooleanStack_t2953109678, ____list_0)); }
	inline List_1_t3194695850 * get__list_0() const { return ____list_0; }
	inline List_1_t3194695850 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(List_1_t3194695850 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier(&____list_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
