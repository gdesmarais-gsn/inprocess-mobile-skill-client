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

// UnityTest.ActionBase
struct ActionBase_t1823832315;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t547167195;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityTest.AssertionComponent
struct AssertionComponent_t3962419315;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_UnityTest_AssertionComponent3962419315.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"

// System.Void UnityTest.ActionBase::.ctor()
extern "C"  void ActionBase__ctor_m4102037675 (ActionBase_t1823832315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] UnityTest.ActionBase::GetAccepatbleTypesForA()
extern "C"  TypeU5BU5D_t1664964607* ActionBase_GetAccepatbleTypesForA_m4243612422 (ActionBase_t1823832315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.ActionBase::GetDepthOfSearch()
extern "C"  int32_t ActionBase_GetDepthOfSearch_m3055333313 (ActionBase_t1823832315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityTest.ActionBase::GetExcludedFieldNames()
extern "C"  StringU5BU5D_t1642385972* ActionBase_GetExcludedFieldNames_m3087918512 (ActionBase_t1823832315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ActionBase::Compare()
extern "C"  bool ActionBase_Compare_m2929658384 (ActionBase_t1823832315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ActionBase::get_UseCache()
extern "C"  bool ActionBase_get_UseCache_m2209271253 (ActionBase_t1823832315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.ActionBase::GetParameterType()
extern "C"  Type_t * ActionBase_GetParameterType_m496556244 (ActionBase_t1823832315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.ActionBase::GetConfigurationDescription()
extern "C"  String_t* ActionBase_GetConfigurationDescription_m461141150 (ActionBase_t1823832315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> UnityTest.ActionBase::GetFields(System.Type)
extern "C"  Il2CppObject* ActionBase_GetFields_m3385638341 (ActionBase_t1823832315 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ActionBase UnityTest.ActionBase::CreateCopy(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  ActionBase_t1823832315 * ActionBase_CreateCopy_m1201497957 (ActionBase_t1823832315 * __this, GameObject_t1756533147 * ___oldGameObject0, GameObject_t1756533147 * ___newGameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.ActionBase::Fail(UnityTest.AssertionComponent)
extern "C"  void ActionBase_Fail_m4240512343 (ActionBase_t1823832315 * __this, AssertionComponent_t3962419315 * ___assertion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.ActionBase::GetFailureMessage()
extern "C"  String_t* ActionBase_GetFailureMessage_m1177342055 (ActionBase_t1823832315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ActionBase::<GetConfigurationDescription>m__0(System.Reflection.FieldInfo)
extern "C"  bool ActionBase_U3CGetConfigurationDescriptionU3Em__0_m300163550 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
