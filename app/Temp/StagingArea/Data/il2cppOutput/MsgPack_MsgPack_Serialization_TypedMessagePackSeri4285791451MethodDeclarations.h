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

// MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Boolean>
struct TypedMessagePackSerializerWrapper_1_t4285791451;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Boolean>::.ctor(MsgPack.Serialization.SerializationContext,MsgPack.Serialization.IMessagePackSingleObjectSerializer)
extern "C"  void TypedMessagePackSerializerWrapper_1__ctor_m1726734137_gshared (TypedMessagePackSerializerWrapper_1_t4285791451 * __this, SerializationContext_t1484625559 * ___context0, Il2CppObject * ___underlying1, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1__ctor_m1726734137(__this, ___context0, ___underlying1, method) ((  void (*) (TypedMessagePackSerializerWrapper_1_t4285791451 *, SerializationContext_t1484625559 *, Il2CppObject *, const MethodInfo*))TypedMessagePackSerializerWrapper_1__ctor_m1726734137_gshared)(__this, ___context0, ___underlying1, method)
// System.Void MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Boolean>::PackToCore(MsgPack.Packer,T)
extern "C"  void TypedMessagePackSerializerWrapper_1_PackToCore_m4184798037_gshared (TypedMessagePackSerializerWrapper_1_t4285791451 * __this, Packer_t1439452732 * ___packer0, bool ___objectTree1, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_PackToCore_m4184798037(__this, ___packer0, ___objectTree1, method) ((  void (*) (TypedMessagePackSerializerWrapper_1_t4285791451 *, Packer_t1439452732 *, bool, const MethodInfo*))TypedMessagePackSerializerWrapper_1_PackToCore_m4184798037_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Boolean>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  bool TypedMessagePackSerializerWrapper_1_UnpackFromCore_m282718639_gshared (TypedMessagePackSerializerWrapper_1_t4285791451 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_UnpackFromCore_m282718639(__this, ___unpacker0, method) ((  bool (*) (TypedMessagePackSerializerWrapper_1_t4285791451 *, Unpacker_t998931393 *, const MethodInfo*))TypedMessagePackSerializerWrapper_1_UnpackFromCore_m282718639_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Boolean>::UnpackNil()
extern "C"  bool TypedMessagePackSerializerWrapper_1_UnpackNil_m973923080_gshared (TypedMessagePackSerializerWrapper_1_t4285791451 * __this, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_UnpackNil_m973923080(__this, method) ((  bool (*) (TypedMessagePackSerializerWrapper_1_t4285791451 *, const MethodInfo*))TypedMessagePackSerializerWrapper_1_UnpackNil_m973923080_gshared)(__this, method)
// System.Void MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Boolean>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void TypedMessagePackSerializerWrapper_1_UnpackToCore_m649059277_gshared (TypedMessagePackSerializerWrapper_1_t4285791451 * __this, Unpacker_t998931393 * ___unpacker0, bool ___collection1, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_UnpackToCore_m649059277(__this, ___unpacker0, ___collection1, method) ((  void (*) (TypedMessagePackSerializerWrapper_1_t4285791451 *, Unpacker_t998931393 *, bool, const MethodInfo*))TypedMessagePackSerializerWrapper_1_UnpackToCore_m649059277_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Object MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Boolean>::MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory.CreateInstance(System.Int32)
extern "C"  Il2CppObject * TypedMessagePackSerializerWrapper_1_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m2009618346_gshared (TypedMessagePackSerializerWrapper_1_t4285791451 * __this, int32_t ___initialCapacity0, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m2009618346(__this, ___initialCapacity0, method) ((  Il2CppObject * (*) (TypedMessagePackSerializerWrapper_1_t4285791451 *, int32_t, const MethodInfo*))TypedMessagePackSerializerWrapper_1_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m2009618346_gshared)(__this, ___initialCapacity0, method)
