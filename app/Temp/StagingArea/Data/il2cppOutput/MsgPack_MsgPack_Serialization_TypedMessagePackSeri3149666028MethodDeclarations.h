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

// MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Object>
struct TypedMessagePackSerializerWrapper_1_t3149666028;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;
// MsgPack.Packer
struct Packer_t1439452732;
// System.Object
struct Il2CppObject;
// MsgPack.Unpacker
struct Unpacker_t998931393;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Object>::.ctor(MsgPack.Serialization.SerializationContext,MsgPack.Serialization.IMessagePackSingleObjectSerializer)
extern "C"  void TypedMessagePackSerializerWrapper_1__ctor_m923958134_gshared (TypedMessagePackSerializerWrapper_1_t3149666028 * __this, SerializationContext_t1484625559 * ___context0, Il2CppObject * ___underlying1, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1__ctor_m923958134(__this, ___context0, ___underlying1, method) ((  void (*) (TypedMessagePackSerializerWrapper_1_t3149666028 *, SerializationContext_t1484625559 *, Il2CppObject *, const MethodInfo*))TypedMessagePackSerializerWrapper_1__ctor_m923958134_gshared)(__this, ___context0, ___underlying1, method)
// System.Void MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Object>::PackToCore(MsgPack.Packer,T)
extern "C"  void TypedMessagePackSerializerWrapper_1_PackToCore_m3159534906_gshared (TypedMessagePackSerializerWrapper_1_t3149666028 * __this, Packer_t1439452732 * ___packer0, Il2CppObject * ___objectTree1, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_PackToCore_m3159534906(__this, ___packer0, ___objectTree1, method) ((  void (*) (TypedMessagePackSerializerWrapper_1_t3149666028 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))TypedMessagePackSerializerWrapper_1_PackToCore_m3159534906_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Object>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  Il2CppObject * TypedMessagePackSerializerWrapper_1_UnpackFromCore_m398889932_gshared (TypedMessagePackSerializerWrapper_1_t3149666028 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_UnpackFromCore_m398889932(__this, ___unpacker0, method) ((  Il2CppObject * (*) (TypedMessagePackSerializerWrapper_1_t3149666028 *, Unpacker_t998931393 *, const MethodInfo*))TypedMessagePackSerializerWrapper_1_UnpackFromCore_m398889932_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Object>::UnpackNil()
extern "C"  Il2CppObject * TypedMessagePackSerializerWrapper_1_UnpackNil_m1128294871_gshared (TypedMessagePackSerializerWrapper_1_t3149666028 * __this, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_UnpackNil_m1128294871(__this, method) ((  Il2CppObject * (*) (TypedMessagePackSerializerWrapper_1_t3149666028 *, const MethodInfo*))TypedMessagePackSerializerWrapper_1_UnpackNil_m1128294871_gshared)(__this, method)
// System.Void MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Object>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void TypedMessagePackSerializerWrapper_1_UnpackToCore_m2535404696_gshared (TypedMessagePackSerializerWrapper_1_t3149666028 * __this, Unpacker_t998931393 * ___unpacker0, Il2CppObject * ___collection1, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_UnpackToCore_m2535404696(__this, ___unpacker0, ___collection1, method) ((  void (*) (TypedMessagePackSerializerWrapper_1_t3149666028 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))TypedMessagePackSerializerWrapper_1_UnpackToCore_m2535404696_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Object MsgPack.Serialization.TypedMessagePackSerializerWrapper`1<System.Object>::MsgPack.Serialization.CollectionSerializers.ICollectionInstanceFactory.CreateInstance(System.Int32)
extern "C"  Il2CppObject * TypedMessagePackSerializerWrapper_1_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m3091966597_gshared (TypedMessagePackSerializerWrapper_1_t3149666028 * __this, int32_t ___initialCapacity0, const MethodInfo* method);
#define TypedMessagePackSerializerWrapper_1_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m3091966597(__this, ___initialCapacity0, method) ((  Il2CppObject * (*) (TypedMessagePackSerializerWrapper_1_t3149666028 *, int32_t, const MethodInfo*))TypedMessagePackSerializerWrapper_1_MsgPack_Serialization_CollectionSerializers_ICollectionInstanceFactory_CreateInstance_m3091966597_gshared)(__this, ___initialCapacity0, method)
