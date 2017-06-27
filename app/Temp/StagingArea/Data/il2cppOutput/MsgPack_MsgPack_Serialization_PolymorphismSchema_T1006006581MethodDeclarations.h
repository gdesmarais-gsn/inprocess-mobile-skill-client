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

// MsgPack.Serialization.PolymorphismSchema/TypeTableEntry
struct TypeTableEntry_t1006006581;
// System.Collections.Generic.IDictionary`2<System.String,System.Type>
struct IDictionary_2_t1217665909;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// MsgPack.Serialization.Polymorphic.IPolymorphicHelperAttribute
struct IPolymorphicHelperAttribute_t2294970817;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismType3133402355.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "MsgPack_MsgPack_Serialization_PolymorphismTarget3131918892.h"
#include "mscorlib_System_String2029220233.h"

// System.Collections.Generic.IDictionary`2<System.String,System.Type> MsgPack.Serialization.PolymorphismSchema/TypeTableEntry::get_CodeTypeMapping()
extern "C"  Il2CppObject* TypeTableEntry_get_CodeTypeMapping_m2183222242 (TypeTableEntry_t1006006581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.PolymorphismType MsgPack.Serialization.PolymorphismSchema/TypeTableEntry::get_PolymorphismType()
extern "C"  int32_t TypeTableEntry_get_PolymorphismType_m3649127718 (TypeTableEntry_t1006006581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.PolymorphismSchema/TypeTableEntry::get_Exists()
extern "C"  bool TypeTableEntry_get_Exists_m2721978133 (TypeTableEntry_t1006006581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.PolymorphismSchema/TypeTableEntry::.ctor()
extern "C"  void TypeTableEntry__ctor_m3169719984 (TypeTableEntry_t1006006581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.PolymorphismSchema/TypeTableEntry MsgPack.Serialization.PolymorphismSchema/TypeTableEntry::Create(System.Reflection.MemberInfo,MsgPack.Serialization.PolymorphismTarget)
extern "C"  TypeTableEntry_t1006006581 * TypeTableEntry_Create_m2841518248 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, int32_t ___targetType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.PolymorphismSchema/TypeTableEntry::Interpret(MsgPack.Serialization.Polymorphic.IPolymorphicHelperAttribute,System.String,System.Int32)
extern "C"  void TypeTableEntry_Interpret_m2767119011 (TypeTableEntry_t1006006581 * __this, Il2CppObject * ___attribute0, String_t* ___memberName1, int32_t ___tupleItemNumber2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.Serialization.PolymorphismSchema/TypeTableEntry::GetCannotSpecifyKnownTypeAndRuntimeTypeErrorMessage(MsgPack.Serialization.Polymorphic.IPolymorphicHelperAttribute,System.String,System.Int32)
extern "C"  String_t* TypeTableEntry_GetCannotSpecifyKnownTypeAndRuntimeTypeErrorMessage_m2920015858 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___attribute0, String_t* ___memberName1, int32_t ___tupleItemNumber2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.Serialization.PolymorphismSchema/TypeTableEntry::GetCannotDuplicateKnownTypeCodeErrorMessage(MsgPack.Serialization.Polymorphic.IPolymorphicHelperAttribute,System.String,System.String,System.Int32)
extern "C"  String_t* TypeTableEntry_GetCannotDuplicateKnownTypeCodeErrorMessage_m562830358 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___attribute0, String_t* ___typeCode1, String_t* ___memberName2, int32_t ___tupleItemNumber3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
