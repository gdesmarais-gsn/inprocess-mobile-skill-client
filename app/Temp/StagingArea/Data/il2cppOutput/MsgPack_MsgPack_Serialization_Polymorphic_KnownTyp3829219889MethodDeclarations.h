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

// MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>
struct KnownTypePolymorphicMessagePackSerializer_1_t3829219889;
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

// System.Void MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::.ctor(MsgPack.Serialization.SerializationContext,MsgPack.Serialization.PolymorphismSchema)
extern "C"  void KnownTypePolymorphicMessagePackSerializer_1__ctor_m261705157_gshared (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 * __this, SerializationContext_t1484625559 * ___ownerContext0, PolymorphismSchema_t2690808062 * ___schema1, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1__ctor_m261705157(__this, ___ownerContext0, ___schema1, method) ((  void (*) (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 *, SerializationContext_t1484625559 *, PolymorphismSchema_t2690808062 *, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1__ctor_m261705157_gshared)(__this, ___ownerContext0, ___schema1, method)
// System.Collections.Generic.IDictionary`2<System.String,System.RuntimeTypeHandle> MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::BuildTypeCodeTypeHandleMap(System.Collections.Generic.IDictionary`2<System.String,System.Type>)
extern "C"  Il2CppObject* KnownTypePolymorphicMessagePackSerializer_1_BuildTypeCodeTypeHandleMap_m4147559920_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___typeMap0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_BuildTypeCodeTypeHandleMap_m4147559920(__this /* static, unused */, ___typeMap0, method) ((  Il2CppObject* (*) (Il2CppObject * /* static, unused */, Il2CppObject*, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_BuildTypeCodeTypeHandleMap_m4147559920_gshared)(__this /* static, unused */, ___typeMap0, method)
// System.Collections.Generic.IDictionary`2<System.RuntimeTypeHandle,System.String> MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::BuildTypeHandleTypeCodeMap(System.Collections.Generic.IDictionary`2<System.String,System.Type>)
extern "C"  Il2CppObject* KnownTypePolymorphicMessagePackSerializer_1_BuildTypeHandleTypeCodeMap_m1664087516_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___typeMap0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_BuildTypeHandleTypeCodeMap_m1664087516(__this /* static, unused */, ___typeMap0, method) ((  Il2CppObject* (*) (Il2CppObject * /* static, unused */, Il2CppObject*, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_BuildTypeHandleTypeCodeMap_m1664087516_gshared)(__this /* static, unused */, ___typeMap0, method)
// MsgPack.Serialization.IMessagePackSerializer MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::GetActualTypeSerializer(System.Type)
extern "C"  Il2CppObject * KnownTypePolymorphicMessagePackSerializer_1_GetActualTypeSerializer_m3651168101_gshared (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 * __this, Type_t * ___actualType0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_GetActualTypeSerializer_m3651168101(__this, ___actualType0, method) ((  Il2CppObject * (*) (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 *, Type_t *, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_GetActualTypeSerializer_m3651168101_gshared)(__this, ___actualType0, method)
// System.Void MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::PackToCore(MsgPack.Packer,T)
extern "C"  void KnownTypePolymorphicMessagePackSerializer_1_PackToCore_m1483728569_gshared (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 * __this, Packer_t1439452732 * ___packer0, int32_t ___objectTree1, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_PackToCore_m1483728569(__this, ___packer0, ___objectTree1, method) ((  void (*) (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 *, Packer_t1439452732 *, int32_t, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_PackToCore_m1483728569_gshared)(__this, ___packer0, ___objectTree1, method)
// T MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::UnpackFromCore(MsgPack.Unpacker)
extern "C"  int32_t KnownTypePolymorphicMessagePackSerializer_1_UnpackFromCore_m148897887_gshared (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_UnpackFromCore_m148897887(__this, ___unpacker0, method) ((  int32_t (*) (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 *, Unpacker_t998931393 *, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_UnpackFromCore_m148897887_gshared)(__this, ___unpacker0, method)
// System.Object MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::MsgPack.Serialization.Polymorphic.IPolymorphicDeserializer.PolymorphicUnpackFrom(MsgPack.Unpacker)
extern "C"  Il2CppObject * KnownTypePolymorphicMessagePackSerializer_1_MsgPack_Serialization_Polymorphic_IPolymorphicDeserializer_PolymorphicUnpackFrom_m3121808976_gshared (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 * __this, Unpacker_t998931393 * ___unpacker0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_MsgPack_Serialization_Polymorphic_IPolymorphicDeserializer_PolymorphicUnpackFrom_m3121808976(__this, ___unpacker0, method) ((  Il2CppObject * (*) (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 *, Unpacker_t998931393 *, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_MsgPack_Serialization_Polymorphic_IPolymorphicDeserializer_PolymorphicUnpackFrom_m3121808976_gshared)(__this, ___unpacker0, method)
// System.Void MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::UnpackToCore(MsgPack.Unpacker,T)
extern "C"  void KnownTypePolymorphicMessagePackSerializer_1_UnpackToCore_m2581613777_gshared (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 * __this, Unpacker_t998931393 * ___unpacker0, int32_t ___collection1, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_UnpackToCore_m2581613777(__this, ___unpacker0, ___collection1, method) ((  void (*) (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 *, Unpacker_t998931393 *, int32_t, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_UnpackToCore_m2581613777_gshared)(__this, ___unpacker0, ___collection1, method)
// System.String MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::<BuildTypeCodeTypeHandleMap>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.Type>)
extern "C"  String_t* KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeCodeTypeHandleMapU3Eb__0_m4178244836_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t975927710  ___kv0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeCodeTypeHandleMapU3Eb__0_m4178244836(__this /* static, unused */, ___kv0, method) ((  String_t* (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t975927710 , const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeCodeTypeHandleMapU3Eb__0_m4178244836_gshared)(__this /* static, unused */, ___kv0, method)
// System.RuntimeTypeHandle MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::<BuildTypeCodeTypeHandleMap>b__1(System.Collections.Generic.KeyValuePair`2<System.String,System.Type>)
extern "C"  RuntimeTypeHandle_t2330101084  KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeCodeTypeHandleMapU3Eb__1_m105210880_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t975927710  ___kv0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeCodeTypeHandleMapU3Eb__1_m105210880(__this /* static, unused */, ___kv0, method) ((  RuntimeTypeHandle_t2330101084  (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t975927710 , const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeCodeTypeHandleMapU3Eb__1_m105210880_gshared)(__this /* static, unused */, ___kv0, method)
// System.Type MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::<BuildTypeHandleTypeCodeMap>b__4(System.Collections.Generic.KeyValuePair`2<System.String,System.Type>)
extern "C"  Type_t * KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__4_m2954321973_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t975927710  ___kv0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__4_m2954321973(__this /* static, unused */, ___kv0, method) ((  Type_t * (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t975927710 , const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__4_m2954321973_gshared)(__this /* static, unused */, ___kv0, method)
// System.String MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::<BuildTypeHandleTypeCodeMap>b__5(System.Collections.Generic.KeyValuePair`2<System.String,System.Type>)
extern "C"  String_t* KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__5_m592093097_gshared (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t975927710  ___kv0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__5_m592093097(__this /* static, unused */, ___kv0, method) ((  String_t* (*) (Il2CppObject * /* static, unused */, KeyValuePair_2_t975927710 , const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__5_m592093097_gshared)(__this /* static, unused */, ___kv0, method)
// System.String MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::<BuildTypeHandleTypeCodeMap>b__6(System.String)
extern "C"  String_t* KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__6_m1257431024_gshared (Il2CppObject * __this /* static, unused */, String_t* ___b0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__6_m1257431024(__this /* static, unused */, ___b0, method) ((  String_t* (*) (Il2CppObject * /* static, unused */, String_t*, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CBuildTypeHandleTypeCodeMapU3Eb__6_m1257431024_gshared)(__this /* static, unused */, ___b0, method)
// System.Type MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::<UnpackFromCore>b__a(MsgPack.Unpacker)
extern "C"  Type_t * KnownTypePolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__a_m3315610761_gshared (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 * __this, Unpacker_t998931393 * ___u0, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__a_m3315610761(__this, ___u0, method) ((  Type_t * (*) (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 *, Unpacker_t998931393 *, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__a_m3315610761_gshared)(__this, ___u0, method)
// T MsgPack.Serialization.Polymorphic.KnownTypePolymorphicMessagePackSerializer`1<System.Int32>::<UnpackFromCore>b__b(System.Type,MsgPack.Unpacker)
extern "C"  int32_t KnownTypePolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__b_m3652269908_gshared (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 * __this, Type_t * ___t0, Unpacker_t998931393 * ___u1, const MethodInfo* method);
#define KnownTypePolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__b_m3652269908(__this, ___t0, ___u1, method) ((  int32_t (*) (KnownTypePolymorphicMessagePackSerializer_1_t3829219889 *, Type_t *, Unpacker_t998931393 *, const MethodInfo*))KnownTypePolymorphicMessagePackSerializer_1_U3CUnpackFromCoreU3Eb__b_m3652269908_gshared)(__this, ___t0, ___u1, method)
