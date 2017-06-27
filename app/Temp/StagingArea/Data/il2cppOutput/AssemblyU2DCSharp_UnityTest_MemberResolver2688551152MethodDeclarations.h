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

// UnityTest.MemberResolver
struct MemberResolver_t2688551152;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"

// System.Void UnityTest.MemberResolver::.ctor(UnityEngine.GameObject,System.String)
extern "C"  void MemberResolver__ctor_m1003545666 (MemberResolver_t2688551152 * __this, GameObject_t1756533147 * ___gameObject0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetValue(System.Boolean)
extern "C"  Il2CppObject * MemberResolver_GetValue_m2698004525 (MemberResolver_t2688551152 * __this, bool ___useCache0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.MemberResolver::GetMemberType()
extern "C"  Type_t * MemberResolver_GetMemberType_m3801328292 (MemberResolver_t2688551152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::TryGetMemberType(UnityEngine.GameObject,System.String,System.Type&)
extern "C"  bool MemberResolver_TryGetMemberType_m3839843340 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, String_t* ___path1, Type_t ** ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::TryGetValue(UnityEngine.GameObject,System.String,System.Object&)
extern "C"  bool MemberResolver_TryGetValue_m2314488154 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, String_t* ___path1, Il2CppObject ** ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetValueFromMember(System.Object,System.Reflection.MemberInfo)
extern "C"  Il2CppObject * MemberResolver_GetValueFromMember_m3199105564 (MemberResolver_t2688551152 * __this, Il2CppObject * ___obj0, MemberInfo_t * ___memberInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetBaseObject()
extern "C"  Il2CppObject * MemberResolver_GetBaseObject_m1900451569 (MemberResolver_t2688551152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] UnityTest.MemberResolver::GetCallstack()
extern "C"  MemberInfoU5BU5D_t4238939941* MemberResolver_GetCallstack_m3234514173 (MemberResolver_t2688551152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.MemberResolver::ValidatePath(System.String)
extern "C"  void MemberResolver_ValidatePath_m1240721371 (MemberResolver_t2688551152 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::IsValueType(System.Type)
extern "C"  bool MemberResolver_IsValueType_m3729244752 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo UnityTest.MemberResolver::GetField(System.Type,System.String)
extern "C"  FieldInfo_t * MemberResolver_GetField_m1297626374 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fieldName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo UnityTest.MemberResolver::GetProperty(System.Type,System.String)
extern "C"  PropertyInfo_t * MemberResolver_GetProperty_m239199204 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___propertyName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityTest.MemberResolver::GetGetMethod(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * MemberResolver_GetGetMethod_m2148479184 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
