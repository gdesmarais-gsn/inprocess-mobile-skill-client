#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>
struct Dictionary_2_t613314382;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.AotHelper
struct  AotHelper_t241912254  : public Il2CppObject
{
public:

public:
};

struct AotHelper_t241912254_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object> MsgPack.Serialization.AotHelper::EqualityComparerTable
	Dictionary_2_t613314382 * ___EqualityComparerTable_0;

public:
	inline static int32_t get_offset_of_EqualityComparerTable_0() { return static_cast<int32_t>(offsetof(AotHelper_t241912254_StaticFields, ___EqualityComparerTable_0)); }
	inline Dictionary_2_t613314382 * get_EqualityComparerTable_0() const { return ___EqualityComparerTable_0; }
	inline Dictionary_2_t613314382 ** get_address_of_EqualityComparerTable_0() { return &___EqualityComparerTable_0; }
	inline void set_EqualityComparerTable_0(Dictionary_2_t613314382 * value)
	{
		___EqualityComparerTable_0 = value;
		Il2CppCodeGenWriteBarrier(&___EqualityComparerTable_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
