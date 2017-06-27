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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::get_PackerCompatibilityOptions()
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m37332066(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t1814553722 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m57026876_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::get_OwnerContext()
#define MessagePackSerializer_1_get_OwnerContext_m3544300699(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t1814553722 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m965249081_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::.ctor(MsgPack.Serialization.SerializationContext)
#define MessagePackSerializer_1__ctor_m1320693307(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t1814553722 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m4195132817_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
#define MessagePackSerializer_1__ctor_m949152076(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t1814553722 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m2404192966_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::JudgeNullable()
#define MessagePackSerializer_1_JudgeNullable_m2925171352(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m1900771806_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::Pack(System.IO.Stream,T)
#define MessagePackSerializer_1_Pack_m719788596(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1814553722 *, Stream_t3255436806 *, Nullable_1U5BU5D_t2319110068*, const MethodInfo*))MessagePackSerializer_1_Pack_m4105987694_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::Unpack(System.IO.Stream)
#define MessagePackSerializer_1_Unpack_m780129830(__this, ___stream0, method) ((  Nullable_1U5BU5D_t2319110068* (*) (MessagePackSerializer_1_t1814553722 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2064585608_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::PackTo(MsgPack.Packer,T)
#define MessagePackSerializer_1_PackTo_m2297339802(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1814553722 *, Packer_t1439452732 *, Nullable_1U5BU5D_t2319110068*, const MethodInfo*))MessagePackSerializer_1_PackTo_m3219431908_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::UnpackFrom(MsgPack.Unpacker)
#define MessagePackSerializer_1_UnpackFrom_m304998212(__this, ___unpacker0, method) ((  Nullable_1U5BU5D_t2319110068* (*) (MessagePackSerializer_1_t1814553722 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m33981370_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::UnpackNil()
#define MessagePackSerializer_1_UnpackNil_m1572132410(__this, method) ((  Nullable_1U5BU5D_t2319110068* (*) (MessagePackSerializer_1_t1814553722 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1500474764_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::UnpackTo(MsgPack.Unpacker,T)
#define MessagePackSerializer_1_UnpackTo_m1200956648(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1814553722 *, Unpacker_t998931393 *, Nullable_1U5BU5D_t2319110068*, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m3994980262_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::UnpackToCore(MsgPack.Unpacker,T)
#define MessagePackSerializer_1_UnpackToCore_m840486773(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1814553722 *, Unpacker_t998931393 *, Nullable_1U5BU5D_t2319110068*, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m398716419_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m330996551(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1814553722 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3569104133_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2655210581(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t1814553722 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m501322579_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3387442979(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1814553722 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2253723629_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Nullable`1<System.Boolean>[]>::.cctor()
#define MessagePackSerializer_1__cctor_m3891607311(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m1078196901_gshared)(__this /* static, unused */, method)
