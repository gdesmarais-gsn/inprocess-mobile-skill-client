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
// System.Func`2<MsgPack.Unpacker,System.Type>
struct Func_2_t111250758;

#include "MsgPack_MsgPack_Serialization_MessagePackSerialize2184892949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.Polymorphic.TypeEmbedingPolymorphicMessagePackSerializer`1<System.Object>
struct  TypeEmbedingPolymorphicMessagePackSerializer_1_t403800112  : public MessagePackSerializer_1_t2184892949
{
public:
	// MsgPack.Serialization.PolymorphismSchema MsgPack.Serialization.Polymorphic.TypeEmbedingPolymorphicMessagePackSerializer`1::_schema
	PolymorphismSchema_t2690808062 * ____schema_3;

public:
	inline static int32_t get_offset_of__schema_3() { return static_cast<int32_t>(offsetof(TypeEmbedingPolymorphicMessagePackSerializer_1_t403800112, ____schema_3)); }
	inline PolymorphismSchema_t2690808062 * get__schema_3() const { return ____schema_3; }
	inline PolymorphismSchema_t2690808062 ** get_address_of__schema_3() { return &____schema_3; }
	inline void set__schema_3(PolymorphismSchema_t2690808062 * value)
	{
		____schema_3 = value;
		Il2CppCodeGenWriteBarrier(&____schema_3, value);
	}
};

struct TypeEmbedingPolymorphicMessagePackSerializer_1_t403800112_StaticFields
{
public:
	// System.Func`2<MsgPack.Unpacker,System.Type> MsgPack.Serialization.Polymorphic.TypeEmbedingPolymorphicMessagePackSerializer`1::CS$<>9__CachedAnonymousMethodDelegate2
	Func_2_t111250758 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4() { return static_cast<int32_t>(offsetof(TypeEmbedingPolymorphicMessagePackSerializer_1_t403800112_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4)); }
	inline Func_2_t111250758 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4; }
	inline Func_2_t111250758 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4(Func_2_t111250758 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
