﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.SortedDictionary`2<System.Object,System.Int32>
struct SortedDictionary_2_t3313549465;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Int32>
struct  ValueCollection_t2870398188  : public Il2CppObject
{
public:
	// System.Collections.Generic.SortedDictionary`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/ValueCollection::_dic
	SortedDictionary_2_t3313549465 * ____dic_0;

public:
	inline static int32_t get_offset_of__dic_0() { return static_cast<int32_t>(offsetof(ValueCollection_t2870398188, ____dic_0)); }
	inline SortedDictionary_2_t3313549465 * get__dic_0() const { return ____dic_0; }
	inline SortedDictionary_2_t3313549465 ** get_address_of__dic_0() { return &____dic_0; }
	inline void set__dic_0(SortedDictionary_2_t3313549465 * value)
	{
		____dic_0 = value;
		Il2CppCodeGenWriteBarrier(&____dic_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
