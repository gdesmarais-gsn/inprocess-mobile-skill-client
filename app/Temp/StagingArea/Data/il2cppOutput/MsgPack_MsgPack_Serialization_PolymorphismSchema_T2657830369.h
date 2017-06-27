#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.PolymorphismSchema/TypeTableEntry
struct TypeTableEntry_t1006006581;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.PolymorphismSchema/TypeTable
struct  TypeTable_t2657830369 
{
public:
	// MsgPack.Serialization.PolymorphismSchema/TypeTableEntry MsgPack.Serialization.PolymorphismSchema/TypeTable::Member
	TypeTableEntry_t1006006581 * ___Member_0;
	// MsgPack.Serialization.PolymorphismSchema/TypeTableEntry MsgPack.Serialization.PolymorphismSchema/TypeTable::CollectionItem
	TypeTableEntry_t1006006581 * ___CollectionItem_1;
	// MsgPack.Serialization.PolymorphismSchema/TypeTableEntry MsgPack.Serialization.PolymorphismSchema/TypeTable::DictionaryKey
	TypeTableEntry_t1006006581 * ___DictionaryKey_2;

public:
	inline static int32_t get_offset_of_Member_0() { return static_cast<int32_t>(offsetof(TypeTable_t2657830369, ___Member_0)); }
	inline TypeTableEntry_t1006006581 * get_Member_0() const { return ___Member_0; }
	inline TypeTableEntry_t1006006581 ** get_address_of_Member_0() { return &___Member_0; }
	inline void set_Member_0(TypeTableEntry_t1006006581 * value)
	{
		___Member_0 = value;
		Il2CppCodeGenWriteBarrier(&___Member_0, value);
	}

	inline static int32_t get_offset_of_CollectionItem_1() { return static_cast<int32_t>(offsetof(TypeTable_t2657830369, ___CollectionItem_1)); }
	inline TypeTableEntry_t1006006581 * get_CollectionItem_1() const { return ___CollectionItem_1; }
	inline TypeTableEntry_t1006006581 ** get_address_of_CollectionItem_1() { return &___CollectionItem_1; }
	inline void set_CollectionItem_1(TypeTableEntry_t1006006581 * value)
	{
		___CollectionItem_1 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionItem_1, value);
	}

	inline static int32_t get_offset_of_DictionaryKey_2() { return static_cast<int32_t>(offsetof(TypeTable_t2657830369, ___DictionaryKey_2)); }
	inline TypeTableEntry_t1006006581 * get_DictionaryKey_2() const { return ___DictionaryKey_2; }
	inline TypeTableEntry_t1006006581 ** get_address_of_DictionaryKey_2() { return &___DictionaryKey_2; }
	inline void set_DictionaryKey_2(TypeTableEntry_t1006006581 * value)
	{
		___DictionaryKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___DictionaryKey_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of MsgPack.Serialization.PolymorphismSchema/TypeTable
struct TypeTable_t2657830369_marshaled_pinvoke
{
	TypeTableEntry_t1006006581 * ___Member_0;
	TypeTableEntry_t1006006581 * ___CollectionItem_1;
	TypeTableEntry_t1006006581 * ___DictionaryKey_2;
};
// Native definition for COM marshalling of MsgPack.Serialization.PolymorphismSchema/TypeTable
struct TypeTable_t2657830369_marshaled_com
{
	TypeTableEntry_t1006006581 * ___Member_0;
	TypeTableEntry_t1006006581 * ___CollectionItem_1;
	TypeTableEntry_t1006006581 * ___DictionaryKey_2;
};
