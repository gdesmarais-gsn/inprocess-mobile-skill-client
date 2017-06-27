#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MsgPack.Serialization.ResolveSerializerEventArgs
struct ResolveSerializerEventArgs_t4230042253;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"

// System.Void MsgPack.Serialization.ResolveSerializerEventArgs::set_Context(MsgPack.Serialization.SerializationContext)
extern "C"  void ResolveSerializerEventArgs_set_Context_m2343646267 (ResolveSerializerEventArgs_t4230042253 * __this, SerializationContext_t1484625559 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ResolveSerializerEventArgs::set_TargetType(System.Type)
extern "C"  void ResolveSerializerEventArgs_set_TargetType_m864362661 (ResolveSerializerEventArgs_t4230042253 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ResolveSerializerEventArgs::set_PolymorphismSchema(MsgPack.Serialization.PolymorphismSchema)
extern "C"  void ResolveSerializerEventArgs_set_PolymorphismSchema_m3784378961 (ResolveSerializerEventArgs_t4230042253 * __this, PolymorphismSchema_t2690808062 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ResolveSerializerEventArgs::.ctor(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void ResolveSerializerEventArgs__ctor_m3193059032 (ResolveSerializerEventArgs_t4230042253 * __this, SerializationContext_t1484625559 * ___context0, Type_t * ___targetType1, PolymorphismSchema_t2690808062 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
