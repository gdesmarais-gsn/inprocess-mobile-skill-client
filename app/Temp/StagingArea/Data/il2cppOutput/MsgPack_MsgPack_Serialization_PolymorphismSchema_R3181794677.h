#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.String,System.Type>
struct IDictionary_2_t1217665909;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.PolymorphismSchema/ReadOnlyDictionary`2<System.String,System.Type>
struct  ReadOnlyDictionary_2_t3181794677  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> MsgPack.Serialization.PolymorphismSchema/ReadOnlyDictionary`2::_underlying
	Il2CppObject* ____underlying_0;

public:
	inline static int32_t get_offset_of__underlying_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3181794677, ____underlying_0)); }
	inline Il2CppObject* get__underlying_0() const { return ____underlying_0; }
	inline Il2CppObject** get_address_of__underlying_0() { return &____underlying_0; }
	inline void set__underlying_0(Il2CppObject* value)
	{
		____underlying_0 = value;
		Il2CppCodeGenWriteBarrier(&____underlying_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
