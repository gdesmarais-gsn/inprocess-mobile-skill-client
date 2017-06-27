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

// MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>
struct KnownTypePolymorphicMessagePackSerializer_1_t1287949863;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// System.Collections.Generic.IDictionary`2<System.String,System.RuntimeTypeHandle>
struct IDictionary_2_t2243963767;
// System.Collections.Generic.IDictionary`2<System.String,System.Type>
struct IDictionary_2_t1217665909;
// System.Collections.Generic.IDictionary`2<System.RuntimeTypeHandle,System.String>
struct IDictionary_2_t2247136037;
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
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Packer1439452732.h"
#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_975927710.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_System_String2029220233.h"

// System.Void MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::.ctor(MsgPack.Serialization.SerializationContext,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void KnownTypePolymorphicMessagePackSerializer_1__ctor_m283372643_gshared (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 * __this, SerializationContext_t1484625559 * ___ownerContext0, PolymorphismSchema_t2690808062 * ___schema1, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1__ctor_m283372643(__this, ___ownerContext0, ___schema1, method) ((  void (*) (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 *, SerializationContext_t1484625559 *, PolymorphismSchema_t2690808062 *, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1__ctor_m283372643_gshared)(__this, ___ownerContext0, ___schema1, method)
// System.Collections.Generic.IDictionary`2<System.String,System.RuntimeTypeHandle> MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::BuildTypeCodeTypeHandleMap(System.Collections.Generic.IDictionary`2<System.String,System.Type>)
extern "C"  Il2CppObject* KnownTypePolymorphicMessagePackSerializer_1_BuildTypeCodeTypeHandleMap_m321848316_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___typeMap0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_BuildTypeCodeTypeHandleMap_m321848316(__this /* static, unused */, ___typeMap0, method) ((  Il2CppObject* (*) (Il2CppObject * /* static, unused */, Il2CppObject*, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_BuildTypeCodeTypeHandleMap_m321848316_gshared)(__this /* static, unused */, ___typeMap0, method)
// System.Collections.Generic.IDictionary`2<System.RuntimeTypeHandle,System.String> MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::BuildTypeHandleTypeCodeMap(System.Collections.Generic.IDictionary`2<System.String,System.Type>)
extern "C"  Il2CppObject* KnownTypePolymorphicMessagePackSerializer_1_BuildTypeHandleTypeCodeMap_m1393274100_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___typeMap0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_BuildTypeHandleTypeCodeMap_m1393274100(__this /* static, unused */, ___typeMap0, method) ((  Il2CppObject* (*) (Il2CppObject * /* static, unused */, Il2CppObject*, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_BuildTypeHandleTypeCodeMap_m1393274100_gshared)(__this /* static, unused */, ___typeMap0, method)
// MsgPack.Serialization.IMessagePackSerializer MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::GetActualTypeSerializer(System.Type)
extern "C"  Il2CppObject * KnownTypePolymorphicMessagePackSerializer_1_GetActualTypeSerializer_m2981193635_gshared (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 * __this, Type_t * ___actualType0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_GetActualTypeSerializer_m2981193635(__this, ___actualType0, method) ((  Il2CppObject * (*) (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 *, Type_t *, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_GetActualTypeSerializer_m2981193635_gshared)(__this, ___actualType0, method)
// System.Void MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::PackToCore(MsgPack.Packer,T)
extern "C"  void KnownTypePolymorphicMessagePackSerializer_1_PackToCore_m2659225039_gshared (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 * __this, Packer_t1439452732 * ___packer0, bool ___objectTree1, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_PackToCore_m2659225039(__this, ___packer0, ___objectTree1, method) ((  void (*) (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 *, Packer_t1439452732 *, bool, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_PackToCore_m2659225039_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  bool KnownTypePolymorphicMessagePackSerializer_1_UnpackFromCore_m554415329_gshared (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_UnpackFromCore_m554415329(__this, ___unpacker0, method) ((  bool (*) (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 *, Unpacker_t998931393 *, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_UnpackFromCore_m554415329_gshared)(__this, ___unpacker0, method)
// System.Object MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::MsgPack.Serialization.Polymorphic.IPolymorphicDeserializer.PolymorphicUnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * KnownTypePolymorphicMessagePackSerializer_1_MsgPack_Serialization_Polymorphic_IPolymorphicDeserializer_PolymorphicUnpackFrom_m1959596580_gshared (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_MsgPack_Serialization_Polymorphic_IPolymorphicDeserializer_PolymorphicUnpackFrom_m1959596580(__this, ___unpacker0, method) ((  Il2CppObject * (*) (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 *, Unpacker_t998931393 *, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_MsgPack_Serialization_Polymorphic_IPolymorphicDeserializer_PolymorphicUnpackFrom_m1959596580_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void KnownTypePolymorphicMessagePackSerializer_1_UnpackToCore_m181638531_gshared (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 * __this, Unpacker_t998931393 * ___unpacker0, bool ___collection1, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_UnpackToCore_m181638531(__this, ___unpacker0, ___collection1, method) ((  void (*) (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 *, Unpacker_t998931393 *, bool, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_UnpackToCore_m181638531_gshared)(__this, ___unpacker0, ___collection1, method)
// System.String MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::<BuildTypeCodeTypeHandleMap>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.Type>)
extern "C"  String_t* KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeCodeTypeHandleMapU3Eb__0_m2469334812_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t975927710  ___kv0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeCodeTypeHandleMapU3Eb__0_m2469334812(__this /* static, unused */, ___kv0, method) ((  String_t* (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t975927710 , const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeCodeTypeHandleMapU3Eb__0_m2469334812_gshared)(__this /* static, unused */, ___kv0, method)
// System.RuntimeTypeHandle MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::<BuildTypeCodeTypeHandleMap>b__1(System.Collections.Generic.KeyValuePair`2<System.String,System.Type>)
extern "C"  RuntimeTypeHandle_t2330101084  KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeCodeTypeHandleMapU3Eb__1_m2976665924_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t975927710  ___kv0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeCodeTypeHandleMapU3Eb__1_m2976665924(__this /* static, unused */, ___kv0, method) ((  RuntimeTypeHandle_t2330101084  (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t975927710 , const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeCodeTypeHandleMapU3Eb__1_m2976665924_gshared)(__this /* static, unused */, ___kv0, method)
// System.Type MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::<BuildTypeHandleTypeCodeMap>b__4(System.Collections.Generic.KeyValuePair`2<System.String,System.Type>)
extern "C"  Type_t * KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__4_m3761572631_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t975927710  ___kv0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__4_m3761572631(__this /* static, unused */, ___kv0, method) ((  Type_t * (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t975927710 , const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__4_m3761572631_gshared)(__this /* static, unused */, ___kv0, method)
// System.String MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::<BuildTypeHandleTypeCodeMap>b__5(System.Collections.Generic.KeyValuePair`2<System.String,System.Type>)
extern "C"  String_t* KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__5_m3504131159_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t975927710  ___kv0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__5_m3504131159(__this /* static, unused */, ___kv0, method) ((  String_t* (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t975927710 , const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__5_m3504131159_gshared)(__this /* static, unused */, ___kv0, method)
// System.String MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::<BuildTypeHandleTypeCodeMap>b__6(System.String)
extern "C"  String_t* KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__6_m3437791812_gshared (Il2CppObject * __this /* static, unused */, String_t* ___b0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__6_m3437791812(__this /* static, unused */, ___b0, method) ((  String_t* (*) (Il2CppObject * /* static, unused */, String_t*, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__6_m3437791812_gshared)(__this /* static, unused */, ___b0, method)
// System.Type MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::<UnpackFromCore>b__a(MsgPack.Unpacker)
extern "C"  Type_t * KnownTypePolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__a_m2426011267_gshared (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 * __this, Unpacker_t998931393 * ___u0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__a_m2426011267(__this, ___u0, method) ((  Type_t * (*) (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 *, Unpacker_t998931393 *, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__a_m2426011267_gshared)(__this, ___u0, method)
// T MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Boolean>::<UnpackFromCore>b__b(System.Type,MsgPack.Unpacker)
extern "C"  bool KnownTypePolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__b_m155157248_gshared (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 * __this, Type_t * ___t0, Unpacker_t998931393 * ___u1, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__b_m155157248(__this, ___t0, ___u1, method) ((  bool (*) (KnownTypePolymorphicMessagePackSerializer_1_t1287949863 *, Type_t *, Unpacker_t998931393 *, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__b_m155157248_gshared)(__this, ___t0, ___u1, method)
