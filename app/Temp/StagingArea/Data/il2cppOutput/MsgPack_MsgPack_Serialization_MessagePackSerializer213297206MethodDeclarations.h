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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::get_PackerCompatibilityOptions()
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m2976115837(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t213297206 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m57026876_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::get_OwnerContext()
#define MessagePackSerializer_1_get_OwnerContext_m475301446(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t213297206 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m965249081_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::.ctor(MsgPack.Serialization.SerializationContext)
#define MessagePackSerializer_1__ctor_m2618266010(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t213297206 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m4195132817_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
#define MessagePackSerializer_1__ctor_m374258365(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t213297206 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m2404192966_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::JudgeNullable()
#define MessagePackSerializer_1_JudgeNullable_m524489341(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m1900771806_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::Pack(System.IO.Stream,T)
#define MessagePackSerializer_1_Pack_m3575030643(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t213297206 *, Stream_t3255436806 *, ByteU5BU5DU5BU5D_t717853552*, const MethodInfo*))MessagePackSerializer_1_Pack_m4105987694_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::Unpack(System.IO.Stream)
#define MessagePackSerializer_1_Unpack_m472612375(__this, ___stream0, method) ((  ByteU5BU5DU5BU5D_t717853552* (*) (MessagePackSerializer_1_t213297206 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2064585608_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::PackTo(MsgPack.Packer,T)
#define MessagePackSerializer_1_PackTo_m940813211(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t213297206 *, Packer_t1439452732 *, ByteU5BU5DU5BU5D_t717853552*, const MethodInfo*))MessagePackSerializer_1_PackTo_m3219431908_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::UnpackFrom(MsgPack.Unpacker)
#define MessagePackSerializer_1_UnpackFrom_m1753195509(__this, ___unpacker0, method) ((  ByteU5BU5DU5BU5D_t717853552* (*) (MessagePackSerializer_1_t213297206 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m33981370_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::UnpackNil()
#define MessagePackSerializer_1_UnpackNil_m1677626475(__this, method) ((  ByteU5BU5DU5BU5D_t717853552* (*) (MessagePackSerializer_1_t213297206 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1500474764_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::UnpackTo(MsgPack.Unpacker,T)
#define MessagePackSerializer_1_UnpackTo_m1513634855(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t213297206 *, Unpacker_t998931393 *, ByteU5BU5DU5BU5D_t717853552*, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m3994980262_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::UnpackToCore(MsgPack.Unpacker,T)
#define MessagePackSerializer_1_UnpackToCore_m714934342(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t213297206 *, Unpacker_t998931393 *, ByteU5BU5DU5BU5D_t717853552*, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m398716419_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m52242950(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t213297206 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3569104133_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3906213830(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t213297206 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m501322579_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3022354404(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t213297206 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2253723629_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.Byte[][]>::.cctor()
#define MessagePackSerializer_1__cctor_m1924375486(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m1078196901_gshared)(__this /* static, unused */, method)
