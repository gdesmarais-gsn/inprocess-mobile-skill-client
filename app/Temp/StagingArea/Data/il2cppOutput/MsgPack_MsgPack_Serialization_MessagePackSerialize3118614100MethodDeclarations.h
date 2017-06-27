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


#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_MessagePackSerialize2184892949MethodDeclarations.h"

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::get_PackerCompatibilityOptions()
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m63045942(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t3118614100 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m57026876_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::get_OwnerContext()
#define MessagePackSerializer_1_get_OwnerContext_m3591726881(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t3118614100 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m965249081_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::.ctor(MsgPack.Serialization.SerializationContext)
#define MessagePackSerializer_1__ctor_m1040652777(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t3118614100 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m4195132817_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
#define MessagePackSerializer_1__ctor_m271095014(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t3118614100 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m2404192966_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::JudgeNullable()
#define MessagePackSerializer_1_JudgeNullable_m2641884446(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m1900771806_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::Pack(System.IO.Stream,T)
#define MessagePackSerializer_1_Pack_m3968862114(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3118614100 *, Stream_t3255436806 *, Nullable_1U5BU5D_t3623170446*, const MethodInfo*))MessagePackSerializer_1_Pack_m4105987694_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::Unpack(System.IO.Stream)
#define MessagePackSerializer_1_Unpack_m4036336390(__this, ___stream0, method) ((  Nullable_1U5BU5D_t3623170446* (*) (MessagePackSerializer_1_t3118614100 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2064585608_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::PackTo(MsgPack.Packer,T)
#define MessagePackSerializer_1_PackTo_m3250644912(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3118614100 *, Packer_t1439452732 *, Nullable_1U5BU5D_t3623170446*, const MethodInfo*))MessagePackSerializer_1_PackTo_m3219431908_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::UnpackFrom(MsgPack.Unpacker)
#define MessagePackSerializer_1_UnpackFrom_m2140497280(__this, ___unpacker0, method) ((  Nullable_1U5BU5D_t3623170446* (*) (MessagePackSerializer_1_t3118614100 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m33981370_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::UnpackNil()
#define MessagePackSerializer_1_UnpackNil_m2494071762(__this, method) ((  Nullable_1U5BU5D_t3623170446* (*) (MessagePackSerializer_1_t3118614100 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1500474764_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::UnpackTo(MsgPack.Unpacker,T)
#define MessagePackSerializer_1_UnpackTo_m2075877210(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3118614100 *, Unpacker_t998931393 *, Nullable_1U5BU5D_t3623170446*, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m3994980262_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::UnpackToCore(MsgPack.Unpacker,T)
#define MessagePackSerializer_1_UnpackToCore_m3288126911(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3118614100 *, Unpacker_t998931393 *, Nullable_1U5BU5D_t3623170446*, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m398716419_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1703849797(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t3118614100 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3569104133_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3495080083(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t3118614100 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m501322579_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2687481853(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t3118614100 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2253723629_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Single>[]>::.cctor()
#define MessagePackSerializer_1__cctor_m791449077(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m1078196901_gshared)(__this /* static, unused */, method)
