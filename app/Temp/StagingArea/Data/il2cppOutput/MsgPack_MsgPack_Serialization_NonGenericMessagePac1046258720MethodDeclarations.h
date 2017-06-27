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

// MsgPack.Serialization.NonGenericMessagePackSerializer
struct NonGenericMessagePackSerializer_t1046258720;
// System.Type
struct Type_t;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Nullable_1_gen2470011401.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Type MsgPack.Serialization.NonGenericMessagePackSerializer::get_TargetType()
extern "C"  Type_t * NonGenericMessagePackSerializer_get_TargetType_m1450074029 (NonGenericMessagePackSerializer_t1046258720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.NonGenericMessagePackSerializer::get_OwnerContext()
extern "C"  SerializationContext_t1484625559 * NonGenericMessagePackSerializer_get_OwnerContext_m3425940696 (NonGenericMessagePackSerializer_t1046258720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.NonGenericMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type)
extern "C"  void NonGenericMessagePackSerializer__ctor_m2382890897 (NonGenericMessagePackSerializer_t1046258720 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___targetType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.NonGenericMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
extern "C"  void NonGenericMessagePackSerializer__ctor_m3456338546 (NonGenericMessagePackSerializer_t1046258720 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___targetType1, Nullable_1_t2470011401  ___packerCompatibilityOptions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.NonGenericMessagePackSerializer::JudgeNullable(System.Type)
extern "C"  bool NonGenericMessagePackSerializer_JudgeNullable_m2159094702 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.NonGenericMessagePackSerializer::PackTo(MsgPack.Packer,System.Object)
extern "C"  void NonGenericMessagePackSerializer_PackTo_m2981487149 (NonGenericMessagePackSerializer_t1046258720 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.NonGenericMessagePackSerializer::UnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * NonGenericMessagePackSerializer_UnpackFrom_m2069784015 (NonGenericMessagePackSerializer_t1046258720 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.NonGenericMessagePackSerializer::UnpackTo(MsgPack.Unpacker,System.Object)
extern "C"  void NonGenericMessagePackSerializer_UnpackTo_m1710871421 (NonGenericMessagePackSerializer_t1046258720 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.NonGenericMessagePackSerializer::UnpackToCore(MsgPack.Unpacker,System.Object)
extern "C"  void NonGenericMessagePackSerializer_UnpackToCore_m3263948910 (NonGenericMessagePackSerializer_t1046258720 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
