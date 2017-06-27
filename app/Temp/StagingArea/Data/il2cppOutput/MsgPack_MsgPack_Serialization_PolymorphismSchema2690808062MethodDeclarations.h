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

// MsgPack.Serialization.PolymorphismSchema
struct PolymorphismSchema_t2690808062;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Type>
struct IDictionary_2_t1217665909;
// MsgPack.Serialization.PolymorphismSchema[]
struct PolymorphismSchemaU5BU5D_t1960459595;
// MsgPack.Serialization.PolymorphismSchema/ReadOnlyDictionary`2<System.String,System.Type>
struct ReadOnlyDictionary_2_t3181794677;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MsgPack.Serialization.PolymorphismSchema>
struct ReadOnlyCollection_1_t2876593754;
// MsgPack.Serialization.SerializingMember
struct SerializingMember_t909336757;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismType3133402355.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchemaCh2236790193.h"
#include "MsgPack_MsgPack_Serialization_SerializingMember909336757.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismSchema2690808062.h"

// System.Void MsgPack.Serialization.PolymorphismSchema::.ctor()
extern "C"  void PolymorphismSchema__ctor_m2302980529 (PolymorphismSchema_t2690808062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.PolymorphismSchema::.ctor(System.Type,MsgPack.Serialization.PolymorphismType,System.Collections.Generic.IDictionary`2<System.String,System.Type>,MsgPack.Serialization.PolymorphismSchemaChildrenType,MsgPack.Serialization.PolymorphismSchema[])
extern "C"  void PolymorphismSchema__ctor_m2643923431 (PolymorphismSchema_t2690808062 * __this, Type_t * ___targetType0, int32_t ___polymorphismType1, Il2CppObject* ___codeTypeMapping2, int32_t ___childrenType3, PolymorphismSchemaU5BU5D_t1960459595* ___childItemSchemaList4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.PolymorphismSchema::.ctor(System.Type,MsgPack.Serialization.PolymorphismType,MsgPack.Serialization.PolymorphismSchema/ReadOnlyDictionary`2<System.String,System.Type>,MsgPack.Serialization.PolymorphismSchemaChildrenType,System.Collections.ObjectModel.ReadOnlyCollection`1<MsgPack.Serialization.PolymorphismSchema>)
extern "C"  void PolymorphismSchema__ctor_m2043218015 (PolymorphismSchema_t2690808062 * __this, Type_t * ___targetType0, int32_t ___polymorphismType1, ReadOnlyDictionary_2_t3181794677 * ___codeTypeMapping2, int32_t ___childrenType3, ReadOnlyCollection_1_t2876593754 * ___childItemSchemaList4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.PolymorphismSchema MsgPack.Serialization.PolymorphismSchema::FilterSelf()
extern "C"  PolymorphismSchema_t2690808062 * PolymorphismSchema_FilterSelf_m144072136 (PolymorphismSchema_t2690808062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type MsgPack.Serialization.PolymorphismSchema::get_TargetType()
extern "C"  Type_t * PolymorphismSchema_get_TargetType_m3343531469 (PolymorphismSchema_t2690808062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.PolymorphismSchema::set_TargetType(System.Type)
extern "C"  void PolymorphismSchema_set_TargetType_m2937554460 (PolymorphismSchema_t2690808062 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.PolymorphismType MsgPack.Serialization.PolymorphismSchema::get_PolymorphismType()
extern "C"  int32_t PolymorphismSchema_get_PolymorphismType_m3998486065 (PolymorphismSchema_t2690808062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.PolymorphismSchema::set_PolymorphismType(MsgPack.Serialization.PolymorphismType)
extern "C"  void PolymorphismSchema_set_PolymorphismType_m648997432 (PolymorphismSchema_t2690808062 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Type> MsgPack.Serialization.PolymorphismSchema::get_CodeTypeMapping()
extern "C"  Il2CppObject* PolymorphismSchema_get_CodeTypeMapping_m3089683177 (PolymorphismSchema_t2690808062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.PolymorphismSchema::get_UseDefault()
extern "C"  bool PolymorphismSchema_get_UseDefault_m1490848372 (PolymorphismSchema_t2690808062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.PolymorphismSchema::get_UseTypeEmbedding()
extern "C"  bool PolymorphismSchema_get_UseTypeEmbedding_m1665262636 (PolymorphismSchema_t2690808062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.PolymorphismSchemaChildrenType MsgPack.Serialization.PolymorphismSchema::get_ChildrenType()
extern "C"  int32_t PolymorphismSchema_get_ChildrenType_m484447101 (PolymorphismSchema_t2690808062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.PolymorphismSchema::set_ChildrenType(MsgPack.Serialization.PolymorphismSchemaChildrenType)
extern "C"  void PolymorphismSchema_set_ChildrenType_m2140769284 (PolymorphismSchema_t2690808062 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.PolymorphismSchema MsgPack.Serialization.PolymorphismSchema::get_ItemSchema()
extern "C"  PolymorphismSchema_t2690808062 * PolymorphismSchema_get_ItemSchema_m577339901 (PolymorphismSchema_t2690808062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.PolymorphismSchema MsgPack.Serialization.PolymorphismSchema::get_KeySchema()
extern "C"  PolymorphismSchema_t2690808062 * PolymorphismSchema_get_KeySchema_m1024482175 (PolymorphismSchema_t2690808062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.PolymorphismSchema MsgPack.Serialization.PolymorphismSchema::Create(System.Type,MsgPack.Serialization.SerializingMember)
extern "C"  PolymorphismSchema_t2690808062 * PolymorphismSchema_Create_m3490342416 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, SerializingMember_t909336757 * ___memberMayBeNull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.PolymorphismSchema MsgPack.Serialization.PolymorphismSchema::<.ctor>b__2(MsgPack.Serialization.PolymorphismSchema)
extern "C"  PolymorphismSchema_t2690808062 * PolymorphismSchema_U3C_ctorU3Eb__2_m3809914682 (Il2CppObject * __this /* static, unused */, PolymorphismSchema_t2690808062 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.PolymorphismSchema::.cctor()
extern "C"  void PolymorphismSchema__cctor_m1522708574 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
