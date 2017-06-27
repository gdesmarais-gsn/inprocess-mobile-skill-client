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

// MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer
struct System_Collections_Generic_List_1MessagePackSerializer_t1522264518;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Serialization.CollectionTraits
struct CollectionTraits_t1823801989;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_CollectionTraits1823801989.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.CollectionTraits,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void System_Collections_Generic_List_1MessagePackSerializer__ctor_m3830795756 (System_Collections_Generic_List_1MessagePackSerializer_t1522264518 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___targetType1, CollectionTraits_t1823801989 * ___traits2, PolymorphismSchema_t2690808062 * ___itemsSchema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer::PackToCore(MsgPack.Packer,System.Object)
extern "C"  void System_Collections_Generic_List_1MessagePackSerializer_PackToCore_m2904126694 (System_Collections_Generic_List_1MessagePackSerializer_t1522264518 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * System_Collections_Generic_List_1MessagePackSerializer_UnpackFromCore_m51420942 (System_Collections_Generic_List_1MessagePackSerializer_t1522264518 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer::UnpackToCore(MsgPack.Unpacker,System.Object)
extern "C"  void System_Collections_Generic_List_1MessagePackSerializer_UnpackToCore_m1364474732 (System_Collections_Generic_List_1MessagePackSerializer_t1522264518 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer::UnpackToCore(MsgPack.Unpacker,System.Object,System.Int32)
extern "C"  void System_Collections_Generic_List_1MessagePackSerializer_UnpackToCore_m1149036705 (System_Collections_Generic_List_1MessagePackSerializer_t1522264518 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer::CreateInstance(System.Int32)
extern "C"  Il2CppObject * System_Collections_Generic_List_1MessagePackSerializer_CreateInstance_m2418770252 (System_Collections_Generic_List_1MessagePackSerializer_t1522264518 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.DefaultSerializers.System_Collections_Generic_List_1MessagePackSerializer::.cctor()
extern "C"  void System_Collections_Generic_List_1MessagePackSerializer__cctor_m3013716934 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
