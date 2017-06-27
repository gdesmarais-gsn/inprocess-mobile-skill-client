#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int64>
struct List_1_t278199169;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Int64Stack
struct  Int64Stack_t1378392503  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Int64> MsgPack.Int64Stack::_list
	List_1_t278199169 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(Int64Stack_t1378392503, ____list_0)); }
	inline List_1_t278199169 * get__list_0() const { return ____list_0; }
	inline List_1_t278199169 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(List_1_t278199169 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier(&____list_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
