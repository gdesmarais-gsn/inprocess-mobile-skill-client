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

// System.Object
struct Il2CppObject;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>
struct Dictionary_2_t613314382;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "mscorlib_System_Type1303803226.h"

// System.Object MsgPack.Serialization.AotHelper::CreateSystemCollectionsGenericDictionary(System.Reflection.ConstructorInfo,System.Type,System.Int32)
extern "C"  Il2CppObject * AotHelper_CreateSystemCollectionsGenericDictionary_m3831598047 (Il2CppObject * __this /* static, unused */, ConstructorInfo_t2851816542 * ___constructor0, Type_t * ___keyType1, int32_t ___initialCapacity2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.AotHelper::GetEqualityComparer(System.Type)
extern "C"  Il2CppObject * AotHelper_GetEqualityComparer_m2381744256 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object> MsgPack.Serialization.AotHelper::InitializeEqualityComparerTable()
extern "C"  Dictionary_2_t613314382 * AotHelper_InitializeEqualityComparerTable_m684585625 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.AotHelper::.cctor()
extern "C"  void AotHelper__cctor_m427819838 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
