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

// MsgPack.Serialization.CollectionSerializers.UnityNonGenericDictionaryMessagePackSerializer
struct UnityNonGenericDictionaryMessagePackSerializer_t3842043703;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Type
struct Type_t;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Collections.IDictionary
struct IDictionary_t596158605;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.CollectionSerializers.UnityNonGenericDictionaryMessagePackSerializer::.ctor(MsgPack.Serialization.SerializationContext,System.Type,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void UnityNonGenericDictionaryMessagePackSerializer__ctor_m1673164403 (UnityNonGenericDictionaryMessagePackSerializer_t3842043703 * __this, SerializationContext_t1484625559 * ___ownerContext0, Type_t * ___targetType1, PolymorphismSchema_t2690808062 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityNonGenericDictionaryMessagePackSerializer::PackToCore(MsgPack.Packer,System.Object)
extern "C"  void UnityNonGenericDictionaryMessagePackSerializer_PackToCore_m344732518 (UnityNonGenericDictionaryMessagePackSerializer_t3842043703 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.CollectionSerializers.UnityNonGenericDictionaryMessagePackSerializer::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * UnityNonGenericDictionaryMessagePackSerializer_UnpackFromCore_m3405631156 (UnityNonGenericDictionaryMessagePackSerializer_t3842043703 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.CollectionSerializers.UnityNonGenericDictionaryMessagePackSerializer::InternalUnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * UnityNonGenericDictionaryMessagePackSerializer_InternalUnpackFromCore_m56618755 (UnityNonGenericDictionaryMessagePackSerializer_t3842043703 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.CollectionSerializers.UnityNonGenericDictionaryMessagePackSerializer::MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory.CreateInstance(System.Int32)
extern "C"  Il2CppObject * UnityNonGenericDictionaryMessagePackSerializer_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m2962922985 (UnityNonGenericDictionaryMessagePackSerializer_t3842043703 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityNonGenericDictionaryMessagePackSerializer::UnpackToCore(MsgPack.Unpacker,System.Object)
extern "C"  void UnityNonGenericDictionaryMessagePackSerializer_UnpackToCore_m3241306596 (UnityNonGenericDictionaryMessagePackSerializer_t3842043703 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.CollectionSerializers.UnityNonGenericDictionaryMessagePackSerializer::UnpackToCore(MsgPack.Unpacker,System.Collections.IDictionary,System.Int32)
extern "C"  void UnityNonGenericDictionaryMessagePackSerializer_UnpackToCore_m204957380 (UnityNonGenericDictionaryMessagePackSerializer_t3842043703 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, int32_t ___itemsCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
