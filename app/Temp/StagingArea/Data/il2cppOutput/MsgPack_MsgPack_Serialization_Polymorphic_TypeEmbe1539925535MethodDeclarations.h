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

// MsgPack.Serialization.Polymorphic.TypeEmbedingPolymorphicMessagePackSerializer`1<System.Boolean>
struct TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// MsgPack.Serialization.IMessagePackSerializer
struct IMessagePackSerializer_t814841293;
// System.Type
struct Type_t;
// MsgPack.Packer
struct Packer_t1439452732;
// MsgPack.Unpacker
struct Unpacker_t998931393;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"

// System.Void MsgPack.Serialization.Polymorphic.TypeEmbedingPolymorphicMessagePackSerializer`1<System.Boolean>::.ctor(MsgPack.Serialization.SerializationContext,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void TypeEmbedingPolymorphicMessagePackSerializer_1__ctor_m3640792167_gshared (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 * __this, SerializationContext_t1484625559 * ___ownerContext0, PolymorphismSchema_t2690808062 * ___schema1, const MethodInfo* method);
#define TypeEmbedingPolymorphicMessagePackSerializer_1__ctor_m3640792167(__this, ___ownerContext0, ___schema1, method) ((  void (*) (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 *, SerializationContext_t1484625559 *, PolymorphismSchema_t2690808062 *, const MethodInfo*))TypeEmbedingPolymorphicMessagePackSerializer_1__ctor_m3640792167_gshared)(__this, ___ownerContext0, ___schema1, method)
// MsgPack.Serialization.IMessagePackSerializer MsgPack.Serialization.Polymorphic.TypeEmbedingPolymorphicMessagePackSerializer`1<System.Boolean>::GetActualTypeSerializer(System.Type)
extern "C"  Il2CppObject * TypeEmbedingPolymorphicMessagePackSerializer_1_GetActualTypeSerializer_m324247671_gshared (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 * __this, Type_t * ___actualType0, const MethodInfo* method);
#define TypeEmbedingPolymorphicMessagePackSerializer_1_GetActualTypeSerializer_m324247671(__this, ___actualType0, method) ((  Il2CppObject * (*) (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 *, Type_t *, const MethodInfo*))TypeEmbedingPolymorphicMessagePackSerializer_1_GetActualTypeSerializer_m324247671_gshared)(__this, ___actualType0, method)
// System.Void MsgPack.Serialization.Polymorphic.TypeEmbedingPolymorphicMessagePackSerializer`1<System.Boolean>::PackToCore(MsgPack.Packer,T)
extern "C"  void TypeEmbedingPolymorphicMessagePackSerializer_1_PackToCore_m2883816011_gshared (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 * __this, Packer_t1439452732 * ___packer0, bool ___objectTree1, const MethodInfo* method);
#define TypeEmbedingPolymorphicMessagePackSerializer_1_PackToCore_m2883816011(__this, ___packer0, ___objectTree1, method) ((  void (*) (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 *, Packer_t1439452732 *, bool, const MethodInfo*))TypeEmbedingPolymorphicMessagePackSerializer_1_PackToCore_m2883816011_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.Polymorphic.TypeEmbedingPolymorphicMessagePackSerializer`1<System.Boolean>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  bool TypeEmbedingPolymorphicMessagePackSerializer_1_UnpackFromCore_m4135154329_gshared (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define TypeEmbedingPolymorphicMessagePackSerializer_1_UnpackFromCore_m4135154329(__this, ___unpacker0, method) ((  bool (*) (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 *, Unpacker_t998931393 *, const MethodInfo*))TypeEmbedingPolymorphicMessagePackSerializer_1_UnpackFromCore_m4135154329_gshared)(__this, ___unpacker0, method)
// System.Object MsgPack.Serialization.Polymorphic.TypeEmbedingPolymorphicMessagePackSerializer`1<System.Boolean>::MsgPack.Serialization.Polymorphic.IPolymorphicDeserializer.PolymorphicUnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * TypeEmbedingPolymorphicMessagePackSerializer_1_MsgPack_Serialization_Polymorphic_IPolymorphicDeserializer_PolymorphicUnpackFrom_m4285833686_gshared (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define TypeEmbedingPolymorphicMessagePackSerializer_1_MsgPack_Serialization_Polymorphic_IPolymorphicDeserializer_PolymorphicUnpackFrom_m4285833686(__this, ___unpacker0, method) ((  Il2CppObject * (*) (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 *, Unpacker_t998931393 *, const MethodInfo*))TypeEmbedingPolymorphicMessagePackSerializer_1_MsgPack_Serialization_Polymorphic_IPolymorphicDeserializer_PolymorphicUnpackFrom_m4285833686_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.Polymorphic.TypeEmbedingPolymorphicMessagePackSerializer`1<System.Boolean>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void TypeEmbedingPolymorphicMessagePackSerializer_1_UnpackToCore_m3162538135_gshared (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 * __this, Unpacker_t998931393 * ___unpacker0, bool ___collection1, const MethodInfo* method);
#define TypeEmbedingPolymorphicMessagePackSerializer_1_UnpackToCore_m3162538135(__this, ___unpacker0, ___collection1, method) ((  void (*) (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 *, Unpacker_t998931393 *, bool, const MethodInfo*))TypeEmbedingPolymorphicMessagePackSerializer_1_UnpackToCore_m3162538135_gshared)(__this, ___unpacker0, ___collection1, method)
// System.Type MsgPack.Serialization.Polymorphic.TypeEmbedingPolymorphicMessagePackSerializer`1<System.Boolean>::<UnpackFromCore>b__0(MsgPack.Unpacker)
extern "C"  Type_t * TypeEmbedingPolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__0_m2996089242_gshared (Il2CppObject * __this /* static, unused */, Unpacker_t998931393 * ___u0, const MethodInfo* method);
#define TypeEmbedingPolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__0_m2996089242(__this /* static, unused */, ___u0, method) ((  Type_t * (*) (Il2CppObject * /* static, unused */, Unpacker_t998931393 *, const MethodInfo*))TypeEmbedingPolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__0_m2996089242_gshared)(__this /* static, unused */, ___u0, method)
// T MsgPack.Serialization.Polymorphic.TypeEmbedingPolymorphicMessagePackSerializer`1<System.Boolean>::<UnpackFromCore>b__1(System.Type,MsgPack.Unpacker)
extern "C"  bool TypeEmbedingPolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__1_m1090109307_gshared (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 * __this, Type_t * ___t0, Unpacker_t998931393 * ___u1, const MethodInfo* method);
#define TypeEmbedingPolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__1_m1090109307(__this, ___t0, ___u1, method) ((  bool (*) (TypeEmbedingPolymorphicMessagePackSerializer_1_t1539925535 *, Type_t *, Unpacker_t998931393 *, const MethodInfo*))TypeEmbedingPolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__1_m1090109307_gshared)(__this, ___t0, ___u1, method)
