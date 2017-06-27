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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Version>::get_PackerCompatibilityOptions()
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m2743563909(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t1251318366 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m57026876_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Version>::get_OwnerContext()
#define MessagePackSerializer_1_get_OwnerContext_m2207950076(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t1251318366 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m965249081_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Version>::.ctor(MsgPack.Serialization.SerializationContext)
#define MessagePackSerializer_1__ctor_m3774567152(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t1251318366 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m4195132817_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Version>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
#define MessagePackSerializer_1__ctor_m3448646257(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t1251318366 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m2404192966_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Version>::JudgeNullable()
#define MessagePackSerializer_1_JudgeNullable_m938866169(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m1900771806_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Version>::Pack(System.IO.Stream,T)
#define MessagePackSerializer_1_Pack_m1924984275(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1251318366 *, Stream_t3255436806 *, Version_t1755874712 *, const MethodInfo*))MessagePackSerializer_1_Pack_m4105987694_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Version>::Unpack(System.IO.Stream)
#define MessagePackSerializer_1_Unpack_m2381966979(__this, ___stream0, method) ((  Version_t1755874712 * (*) (MessagePackSerializer_1_t1251318366 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2064585608_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Version>::PackTo(MsgPack.Packer,T)
#define MessagePackSerializer_1_PackTo_m3028805675(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1251318366 *, Packer_t1439452732 *, Version_t1755874712 *, const MethodInfo*))MessagePackSerializer_1_PackTo_m3219431908_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Version>::UnpackFrom(MsgPack.Unpacker)
#define MessagePackSerializer_1_UnpackFrom_m2109161977(__this, ___unpacker0, method) ((  Version_t1755874712 * (*) (MessagePackSerializer_1_t1251318366 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m33981370_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Version>::UnpackNil()
#define MessagePackSerializer_1_UnpackNil_m1401260679(__this, method) ((  Version_t1755874712 * (*) (MessagePackSerializer_1_t1251318366 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1500474764_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Version>::UnpackTo(MsgPack.Unpacker,T)
#define MessagePackSerializer_1_UnpackTo_m101813975(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1251318366 *, Unpacker_t998931393 *, Version_t1755874712 *, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m3994980262_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Version>::UnpackToCore(MsgPack.Unpacker,T)
#define MessagePackSerializer_1_UnpackToCore_m549086988(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1251318366 *, Unpacker_t998931393 *, Version_t1755874712 *, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m398716419_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Version>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m1104035916(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t1251318366 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3569104133_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Version>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3337412626(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t1251318366 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m501322579_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Version>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m4109974270(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t1251318366 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2253723629_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Version>::.cctor()
#define MessagePackSerializer_1__cctor_m1130331252(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m1078196901_gshared)(__this /* static, unused */, method)
