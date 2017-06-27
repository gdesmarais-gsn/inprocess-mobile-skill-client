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

// MsgPack.Serialization.PolymorphismSchema/TypeTableEntry
struct  TypeTableEntry_t1006006581  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> MsgPack.Serialization.PolymorphismSchema/TypeTableEntry::_knownTypeMapping
	Dictionary_2_t3218582488 * ____knownTypeMapping_0;
	// System.Boolean MsgPack.Serialization.PolymorphismSchema/TypeTableEntry::_useTypeEmbedding
	bool ____useTypeEmbedding_1;

public:
	inline static int32_t get_offset_of__knownTypeMapping_0() { return static_cast<int32_t>(offsetof(TypeTableEntry_t1006006581, ____knownTypeMapping_0)); }
	inline Dictionary_2_t3218582488 * get__knownTypeMapping_0() const { return ____knownTypeMapping_0; }
	inline Dictionary_2_t3218582488 ** get_address_of__knownTypeMapping_0() { return &____knownTypeMapping_0; }
	inline void set__knownTypeMapping_0(Dictionary_2_t3218582488 * value)
	{
		____knownTypeMapping_0 = value;
		Il2CppCodeGenWriteBarrier(&____knownTypeMapping_0, value);
	}

	inline static int32_t get_offset_of__useTypeEmbedding_1() { return static_cast<int32_t>(offsetof(TypeTableEntry_t1006006581, ____useTypeEmbedding_1)); }
	inline bool get__useTypeEmbedding_1() const { return ____useTypeEmbedding_1; }
	inline bool* get_address_of__useTypeEmbedding_1() { return &____useTypeEmbedding_1; }
	inline void set__useTypeEmbedding_1(bool value)
	{
		____useTypeEmbedding_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
