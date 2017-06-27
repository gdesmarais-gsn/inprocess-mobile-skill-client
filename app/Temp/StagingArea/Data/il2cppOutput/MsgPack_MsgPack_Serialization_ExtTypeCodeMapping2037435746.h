#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Byte>
struct Dictionary_2_t1302916402;
// System.Collections.Generic.Dictionary`2<System.Byte,System.String>
struct Dictionary_2_t1403980240;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.ExtTypeCodeMapping
struct  ExtTypeCodeMapping_t2037435746  : public Il2CppObject
{
public:
	// System.Object MsgPack.Serialization.ExtTypeCodeMapping::_syncRoot
	Il2CppObject * ____syncRoot_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Byte> MsgPack.Serialization.ExtTypeCodeMapping::_index
	Dictionary_2_t1302916402 * ____index_1;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.String> MsgPack.Serialization.ExtTypeCodeMapping::_types
	Dictionary_2_t1403980240 * ____types_2;

public:
	inline static int32_t get_offset_of__syncRoot_0() { return static_cast<int32_t>(offsetof(ExtTypeCodeMapping_t2037435746, ____syncRoot_0)); }
	inline Il2CppObject * get__syncRoot_0() const { return ____syncRoot_0; }
	inline Il2CppObject ** get_address_of__syncRoot_0() { return &____syncRoot_0; }
	inline void set__syncRoot_0(Il2CppObject * value)
	{
		____syncRoot_0 = value;
		Il2CppCodeGenWriteBarrier(&____syncRoot_0, value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(ExtTypeCodeMapping_t2037435746, ____index_1)); }
	inline Dictionary_2_t1302916402 * get__index_1() const { return ____index_1; }
	inline Dictionary_2_t1302916402 ** get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(Dictionary_2_t1302916402 * value)
	{
		____index_1 = value;
		Il2CppCodeGenWriteBarrier(&____index_1, value);
	}

	inline static int32_t get_offset_of__types_2() { return static_cast<int32_t>(offsetof(ExtTypeCodeMapping_t2037435746, ____types_2)); }
	inline Dictionary_2_t1403980240 * get__types_2() const { return ____types_2; }
	inline Dictionary_2_t1403980240 ** get_address_of__types_2() { return &____types_2; }
	inline void set__types_2(Dictionary_2_t1403980240 * value)
	{
		____types_2 = value;
		Il2CppCodeGenWriteBarrier(&____types_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
