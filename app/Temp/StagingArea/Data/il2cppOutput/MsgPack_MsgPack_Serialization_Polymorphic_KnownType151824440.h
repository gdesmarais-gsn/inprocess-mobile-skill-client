#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// System.Collections.Generic.IDictionary`2<System.String,System.RuntimeTypeHandle>
struct IDictionary_2_t2243963767;
// System.Collections.Generic.IDictionary`2<System.RuntimeTypeHandle,System.String>
struct IDictionary_2_t2247136037;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>,System.String>
struct Func_2_t4228878212;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>,System.RuntimeTypeHandle>
struct Func_2_t234791767;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>,System.Type>
struct Func_2_t3503461205;
// System.Func`2<System.String,System.String>
struct Func_2_t193026957;

#include "MsgPack_MsgPack_Serialization_MessagePackSerialize2184892949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Object>
struct  KnownTypePolymorphicMessagePackSerializer_1_t151824440  : public MessagePackSerializer_1_t2184892949
{
public:
	// MsgPack.Serialization.PolymorphismSchema MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1::_schema
	PolymorphismSchema_t2690808062 * ____schema_3;
	// System.Collections.Generic.IDictionary`2<System.String,System.RuntimeTypeHandle> MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1::_typeHandleMap
	Il2CppObject* ____typeHandleMap_4;
	// System.Collections.Generic.IDictionary`2<System.RuntimeTypeHandle,System.String> MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1::_typeCodeMap
	Il2CppObject* ____typeCodeMap_5;

public:
	inline static int32_t get_offset_of__schema_3() { return static_cast<int32_t>(offsetof(KnownTypePolymorphicMessagePackSerializer_1_t151824440, ____schema_3)); }
	inline PolymorphismSchema_t2690808062 * get__schema_3() const { return ____schema_3; }
	inline PolymorphismSchema_t2690808062 ** get_address_of__schema_3() { return &____schema_3; }
	inline void set__schema_3(PolymorphismSchema_t2690808062 * value)
	{
		____schema_3 = value;
		Il2CppCodeGenWriteBarrier(&____schema_3, value);
	}

	inline static int32_t get_offset_of__typeHandleMap_4() { return static_cast<int32_t>(offsetof(KnownTypePolymorphicMessagePackSerializer_1_t151824440, ____typeHandleMap_4)); }
	inline Il2CppObject* get__typeHandleMap_4() const { return ____typeHandleMap_4; }
	inline Il2CppObject** get_address_of__typeHandleMap_4() { return &____typeHandleMap_4; }
	inline void set__typeHandleMap_4(Il2CppObject* value)
	{
		____typeHandleMap_4 = value;
		Il2CppCodeGenWriteBarrier(&____typeHandleMap_4, value);
	}

	inline static int32_t get_offset_of__typeCodeMap_5() { return static_cast<int32_t>(offsetof(KnownTypePolymorphicMessagePackSerializer_1_t151824440, ____typeCodeMap_5)); }
	inline Il2CppObject* get__typeCodeMap_5() const { return ____typeCodeMap_5; }
	inline Il2CppObject** get_address_of__typeCodeMap_5() { return &____typeCodeMap_5; }
	inline void set__typeCodeMap_5(Il2CppObject* value)
	{
		____typeCodeMap_5 = value;
		Il2CppCodeGenWriteBarrier(&____typeCodeMap_5, value);
	}
};

struct KnownTypePolymorphicMessagePackSerializer_1_t151824440_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>,System.String> MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1::CS$<>9__CachedAnonymousMethodDelegate2
	Func_2_t4228878212 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>,System.RuntimeTypeHandle> MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1::CS$<>9__CachedAnonymousMethodDelegate3
	Func_2_t234791767 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_7;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>,System.Type> MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1::CS$<>9__CachedAnonymousMethodDelegate7
	Func_2_t3503461205 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_8;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>,System.String> MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1::CS$<>9__CachedAnonymousMethodDelegate8
	Func_2_t4228878212 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_9;
	// System.Func`2<System.String,System.String> MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1::CS$<>9__CachedAnonymousMethodDelegate9
	Func_2_t193026957 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_10;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6() { return static_cast<int32_t>(offsetof(KnownTypePolymorphicMessagePackSerializer_1_t151824440_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6)); }
	inline Func_2_t4228878212 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6; }
	inline Func_2_t4228878212 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6(Func_2_t4228878212 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_7() { return static_cast<int32_t>(offsetof(KnownTypePolymorphicMessagePackSerializer_1_t151824440_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_7)); }
	inline Func_2_t234791767 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_7() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_7; }
	inline Func_2_t234791767 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_7() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_7; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_7(Func_2_t234791767 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_7 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_7, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_8() { return static_cast<int32_t>(offsetof(KnownTypePolymorphicMessagePackSerializer_1_t151824440_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_8)); }
	inline Func_2_t3503461205 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_8() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_8; }
	inline Func_2_t3503461205 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_8() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_8; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_8(Func_2_t3503461205 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_8 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_8, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate8_9() { return static_cast<int32_t>(offsetof(KnownTypePolymorphicMessagePackSerializer_1_t151824440_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_9)); }
	inline Func_2_t4228878212 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate8_9() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_9; }
	inline Func_2_t4228878212 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate8_9() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_9; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate8_9(Func_2_t4228878212 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_9 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_9, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate9_10() { return static_cast<int32_t>(offsetof(KnownTypePolymorphicMessagePackSerializer_1_t151824440_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_10)); }
	inline Func_2_t193026957 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate9_10() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_10; }
	inline Func_2_t193026957 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate9_10() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_10; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate9_10(Func_2_t193026957 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_10 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
