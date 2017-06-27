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

// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;
// System.Type
struct Type_t;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Object
struct Il2CppObject;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.MessagePackSerializer::Create(System.Type)
extern "C"  Il2CppObject * MessagePackSerializer_Create_m369955801 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.MessagePackSerializer::Create(System.Type,MsgPack.Serialization.SerializationContext)
extern "C"  Il2CppObject * MessagePackSerializer_Create_m1476068228 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, SerializationContext_t1484625559 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.MessagePackSerializer::Get(System.Type)
extern "C"  Il2CppObject * MessagePackSerializer_Get_m2626593415 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.MessagePackSerializer::Get(System.Type,System.Object)
extern "C"  Il2CppObject * MessagePackSerializer_Get_m346871697 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, Il2CppObject * ___providerParameter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.MessagePackSerializer::Get(System.Type,MsgPack.Serialization.SerializationContext)
extern "C"  Il2CppObject * MessagePackSerializer_Get_m351248458 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, SerializationContext_t1484625559 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.MessagePackSerializer::Get(System.Type,MsgPack.Serialization.SerializationContext,System.Object)
extern "C"  Il2CppObject * MessagePackSerializer_Get_m2112984012 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, SerializationContext_t1484625559 * ___context1, Il2CppObject * ___providerParameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.MessagePackSerializer::CreateInternal(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  Il2CppObject * MessagePackSerializer_CreateInternal_m633666483 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___context0, Type_t * ___targetType1, PolymorphismSchema_t2690808062 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.MessagePackSerializer::ValidateType(System.Type)
extern "C"  void MessagePackSerializer_ValidateType_m1020680132 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.MessagePackObject MsgPack.Serialization.MessagePackSerializer::UnpackMessagePackObject(System.IO.Stream)
extern "C"  MessagePackObject_t2038085051  MessagePackSerializer_UnpackMessagePackObject_m362829531 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.MessagePackSerializer::.cctor()
extern "C"  void MessagePackSerializer__cctor_m742873028 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
