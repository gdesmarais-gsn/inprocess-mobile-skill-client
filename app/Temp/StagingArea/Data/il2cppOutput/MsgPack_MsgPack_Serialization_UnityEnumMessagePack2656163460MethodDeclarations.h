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

// MsgPack.Serialization.UnityEnumMessagePackSerializer
struct UnityEnumMessagePackSerializer_t2656163460;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// MsgPack.Serialization.ICustomizableEnumSerializer
struct ICustomizableEnumSerializer_t3222914780;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_EnumSerializationMet2904312576.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.UnityEnumMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.EnumSerializationMethod)
extern "C"  void UnityEnumMessagePackSerializer__ctor_m1817429275 (UnityEnumMessagePackSerializer_t2656163460 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___targetType1, int32_t ___serializationMethod2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.UnityEnumMessagePackSerializer::PackToCore(MsgPack.Packer,System.Object)
extern "C"  void UnityEnumMessagePackSerializer_PackToCore_m1633742500 (UnityEnumMessagePackSerializer_t2656163460 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.UnityEnumMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * UnityEnumMessagePackSerializer_UnpackFromCore_m2297384610 (UnityEnumMessagePackSerializer_t2656163460 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.ICustomizableEnumSerializer MsgPack.Serialization.UnityEnumMessagePackSerializer::MsgPack.Serialization.ICustomizableEnumSerializer.GetCopyAs(MsgPack.Serialization.EnumSerializationMethod)
extern "C"  Il2CppObject * UnityEnumMessagePackSerializer_MsgPack_Serialization_ICustomizableEnumSerializer_GetCopyAs_m2996873131 (UnityEnumMessagePackSerializer_t2656163460 * __this, int32_t ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
