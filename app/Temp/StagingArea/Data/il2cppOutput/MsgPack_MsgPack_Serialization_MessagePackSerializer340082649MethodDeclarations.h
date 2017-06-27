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

// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::get_PackerCompatibilityOptions()
#define MessagePackSerializer_1_get_PackerCompatibilityOptions_m4167118571(__this, method) ((  int32_t (*) (MessagePackSerializer_1_t340082649 *, const MethodInfo*))MessagePackSerializer_1_get_PackerCompatibilityOptions_m57026876_gshared)(__this, method)
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::get_OwnerContext()
#define MessagePackSerializer_1_get_OwnerContext_m2453736914(__this, method) ((  SerializationContext_t1484625559 * (*) (MessagePackSerializer_1_t340082649 *, const MethodInfo*))MessagePackSerializer_1_get_OwnerContext_m965249081_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::.ctor(MsgPack.Serialization.SerializationContext)
#define MessagePackSerializer_1__ctor_m3291966974(__this, ___ownerContext0, method) ((  void (*) (MessagePackSerializer_1_t340082649 *, SerializationContext_t1484625559 *, const MethodInfo*))MessagePackSerializer_1__ctor_m4195132817_gshared)(__this, ___ownerContext0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::.ctor(MsgPack.Serialization.SerializationContext,System.Nullable`1<MsgPack.PackerCompatibilityOptions>)
#define MessagePackSerializer_1__ctor_m1770717623(__this, ___ownerContext0, ___packerCompatibilityOptions1, method) ((  void (*) (MessagePackSerializer_1_t340082649 *, SerializationContext_t1484625559 *, Nullable_1_t2470011401 , const MethodInfo*))MessagePackSerializer_1__ctor_m2404192966_gshared)(__this, ___ownerContext0, ___packerCompatibilityOptions1, method)
// System.Boolean MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::JudgeNullable()
#define MessagePackSerializer_1_JudgeNullable_m2836262163(__this /* static, unused */, method) ((  bool (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1_JudgeNullable_m1900771806_gshared)(__this /* static, unused */, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::Pack(System.IO.Stream,T)
#define MessagePackSerializer_1_Pack_m2247807749(__this, ___stream0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t340082649 *, Stream_t3255436806 *, GameLogHeader_t844638995 *, const MethodInfo*))MessagePackSerializer_1_Pack_m4105987694_gshared)(__this, ___stream0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::Unpack(System.IO.Stream)
#define MessagePackSerializer_1_Unpack_m4262620558(__this, ___stream0, method) ((  GameLogHeader_t844638995 * (*) (MessagePackSerializer_1_t340082649 *, Stream_t3255436806 *, const MethodInfo*))MessagePackSerializer_1_Unpack_m2064585608_gshared)(__this, ___stream0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::PackTo(MsgPack.Packer,T)
#define MessagePackSerializer_1_PackTo_m2904969629(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t340082649 *, Packer_t1439452732 *, GameLogHeader_t844638995 *, const MethodInfo*))MessagePackSerializer_1_PackTo_m3219431908_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::UnpackFrom(MsgPack.Unpacker)
#define MessagePackSerializer_1_UnpackFrom_m622172087(__this, ___unpacker0, method) ((  GameLogHeader_t844638995 * (*) (MessagePackSerializer_1_t340082649 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_UnpackFrom_m33981370_gshared)(__this, ___unpacker0, method)
// T MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::UnpackNil()
#define MessagePackSerializer_1_UnpackNil_m3765048197(__this, method) ((  GameLogHeader_t844638995 * (*) (MessagePackSerializer_1_t340082649 *, const MethodInfo*))MessagePackSerializer_1_UnpackNil_m1500474764_gshared)(__this, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::UnpackTo(MsgPack.Unpacker,T)
#define MessagePackSerializer_1_UnpackTo_m2035518349(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t340082649 *, Unpacker_t998931393 *, GameLogHeader_t844638995 *, const MethodInfo*))MessagePackSerializer_1_UnpackTo_m3994980262_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::UnpackToCore(MsgPack.Unpacker,T)
#define MessagePackSerializer_1_UnpackToCore_m2062489390(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t340082649 *, Unpacker_t998931393 *, GameLogHeader_t844638995 *, const MethodInfo*))MessagePackSerializer_1_UnpackToCore_m398716419_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::MsgPack.Serialization.IMessagePackSerializer.PackTo(MsgPack.Packer,System.Object)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3783203202(__this, ___packer0, ___objectTree1, method) ((  void (*) (MessagePackSerializer_1_t340082649 *, Packer_t1439452732 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_PackTo_m3569104133_gshared)(__this, ___packer0, ___objectTree1, method)
// System.Object MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::MsgPack.Serialization.IMessagePackSerializer.UnpackFrom(MsgPack.Unpacker)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m2971013908(__this, ___unpacker0, method) ((  Il2CppObject * (*) (MessagePackSerializer_1_t340082649 *, Unpacker_t998931393 *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackFrom_m501322579_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::MsgPack.Serialization.IMessagePackSerializer.UnpackTo(MsgPack.Unpacker,System.Object)
#define MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m1248261488(__this, ___unpacker0, ___collection1, method) ((  void (*) (MessagePackSerializer_1_t340082649 *, Unpacker_t998931393 *, Il2CppObject *, const MethodInfo*))MessagePackSerializer_1_MsgPack_Serialization_IMessagePackSerializer_UnpackTo_m2253723629_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Void MsgPack.Serialization.MessagePackSerializer`1<GSN.Skill.Games.Common.Utils.GameLogHeader>::.cctor()
#define MessagePackSerializer_1__cctor_m690876114(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))MessagePackSerializer_1__cctor_m1078196901_gshared)(__this /* static, unused */, method)
