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

// MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Int32>
struct TypedMessagePackSerializerWrapper_1_t2532094181;
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

// System.Void MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Int32>::.ctor(MsgPack.Serialization.SerializationContext,MsgPack.Serialization.IMessagePackSingleObjectSerializer)
extern "C"  void TypedMessagePackSerializerWrapper_1__ctor_m100238375_gshared (TypedMessagePackSerializerWrapper_1_t2532094181 * __this, SerializationContext_t1484625559 * ___context0, Il2CppObject * ___underlying1, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1__ctor_m100238375(__this, ___context0, ___underlying1, method) ((  void (*) (TypedMessagePackSerializerWrapper_1_t2532094181 *, SerializationContext_t1484625559 *, Il2CppObject *, const MethodInfo*))TypedMessagePackSerializerWrapper_1__ctor_m100238375_gshared)(__this, ___context0, ___underlying1, method)
// System.Void MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Int32>::PackToCore(MsgPack.Packer,T)
extern "C"  void TypedMessagePackSerializerWrapper_1_PackToCore_m1981928535_gshared (TypedMessagePackSerializerWrapper_1_t2532094181 * __this, Packer_t1439452732 * ___packer0, int32_t ___objectTree1, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_PackToCore_m1981928535(__this, ___packer0, ___objectTree1, method) ((  void (*) (TypedMessagePackSerializerWrapper_1_t2532094181 *, Packer_t1439452732 *, int32_t, const MethodInfo*))TypedMessagePackSerializerWrapper_1_PackToCore_m1981928535_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Int32>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  int32_t TypedMessagePackSerializerWrapper_1_UnpackFromCore_m1631344389_gshared (TypedMessagePackSerializerWrapper_1_t2532094181 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_UnpackFromCore_m1631344389(__this, ___unpacker0, method) ((  int32_t (*) (TypedMessagePackSerializerWrapper_1_t2532094181 *, Unpacker_t998931393 *, const MethodInfo*))TypedMessagePackSerializerWrapper_1_UnpackFromCore_m1631344389_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Int32>::UnpackNil()
extern "C"  int32_t TypedMessagePackSerializerWrapper_1_UnpackNil_m1170094304_gshared (TypedMessagePackSerializerWrapper_1_t2532094181 * __this, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_UnpackNil_m1170094304(__this, method) ((  int32_t (*) (TypedMessagePackSerializerWrapper_1_t2532094181 *, const MethodInfo*))TypedMessagePackSerializerWrapper_1_UnpackNil_m1170094304_gshared)(__this, method)
// System.Void MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Int32>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void TypedMessagePackSerializerWrapper_1_UnpackToCore_m3751359891_gshared (TypedMessagePackSerializerWrapper_1_t2532094181 * __this, Unpacker_t998931393 * ___unpacker0, int32_t ___collection1, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_UnpackToCore_m3751359891(__this, ___unpacker0, ___collection1, method) ((  void (*) (TypedMessagePackSerializerWrapper_1_t2532094181 *, Unpacker_t998931393 *, int32_t, const MethodInfo*))TypedMessagePackSerializerWrapper_1_UnpackToCore_m3751359891_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Object MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Int32>::MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory.CreateInstance(System.Int32)
extern "C"  Il2CppObject * TypedMessagePackSerializerWrapper_1_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m3233360470_gshared (TypedMessagePackSerializerWrapper_1_t2532094181 * __this, int32_t ___initialCapacity0, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m3233360470(__this, ___initialCapacity0, method) ((  Il2CppObject * (*) (TypedMessagePackSerializerWrapper_1_t2532094181 *, int32_t, const MethodInfo*))TypedMessagePackSerializerWrapper_1_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m3233360470_gshared)(__this, ___initialCapacity0, method)
