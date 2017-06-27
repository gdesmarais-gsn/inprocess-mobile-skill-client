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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::get_PackerCompatibilityOptions()
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m2908643538(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t2967731046 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m57026876_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::get_OwnerContext()
#define MessagePackSerializer_1_get_OwnerContext_m3620228815(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t2967731046 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m965249081_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::.ctor(MsgPack.Serialization.SerializationContext)
#define MessagePackSerializer_1__ctor_m1452320839(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t2967731046 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m4195132817_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
#define MessagePackSerializer_1__ctor_m1489987034(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t2967731046 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m2404192966_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::JudgeNullable()
#define MessagePackSerializer_1_JudgeNullable_m3178500462(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m1900771806_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::Pack(System.IO.Stream,T)
#define MessagePackSerializer_1_Pack_m50441354(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2967731046 *, Stream_t3255436806 *, SByteU5BU5D_t3472287392*, const MethodInfo*))MessagePackSerializer_1_Pack_m4105987694_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::Unpack(System.IO.Stream)
#define MessagePackSerializer_1_Unpack_m614747010(__this, ___stream0, method) ((  SByteU5BU5D_t3472287392* (*) (MessagePackSerializer_1_t2967731046 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2064585608_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::PackTo(MsgPack.Packer,T)
#define MessagePackSerializer_1_PackTo_m2584687796(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2967731046 *, Packer_t1439452732 *, SByteU5BU5D_t3472287392*, const MethodInfo*))MessagePackSerializer_1_PackTo_m3219431908_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::UnpackFrom(MsgPack.Unpacker)
#define MessagePackSerializer_1_UnpackFrom_m1975811608(__this, ___unpacker0, method) ((  SByteU5BU5D_t3472287392* (*) (MessagePackSerializer_1_t2967731046 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m33981370_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::UnpackNil()
#define MessagePackSerializer_1_UnpackNil_m3189274014(__this, method) ((  SByteU5BU5D_t3472287392* (*) (MessagePackSerializer_1_t2967731046 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1500474764_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::UnpackTo(MsgPack.Unpacker,T)
#define MessagePackSerializer_1_UnpackTo_m568175830(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2967731046 *, Unpacker_t998931393 *, SByteU5BU5D_t3472287392*, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m3994980262_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::UnpackToCore(MsgPack.Unpacker,T)
#define MessagePackSerializer_1_UnpackToCore_m2819947957(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2967731046 *, Unpacker_t998931393 *, SByteU5BU5D_t3472287392*, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m398716419_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m594430979(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t2967731046 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3569104133_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m3942069937(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t2967731046 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m501322579_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m3125735167(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t2967731046 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2253723629_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<System.SByte[]>::.cctor()
#define MessagePackSerializer_1__cctor_m3807052307(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m1078196901_gshared)(__this /* static, unused */, method)
