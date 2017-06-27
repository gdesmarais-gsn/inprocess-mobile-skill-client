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
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Exception
struct Exception_t1927440687;
// System.Reflection.TargetInvocationException
struct TargetInvocationException_t4098620458;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// MsgPack.Serialization.CollectionTraits
struct CollectionTraits_t1823801989;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_TargetInvocationExcepti4098620458.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "MsgPack_MsgPack_Serialization_CollectionTraits1823801989.h"
#include "mscorlib_System_String2029220233.h"

// System.Object MsgPack.Serialization.ReflectionExtensions::InvokePreservingExceptionType(System.Reflection.ConstructorInfo,System.Object[])
extern "C"  Il2CppObject * ReflectionExtensions_InvokePreservingExceptionType_m2944369123 (Il2CppObject * __this /* static, unused */, ConstructorInfo_t2851816542 * ___source0, ObjectU5BU5D_t3614634134* ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.ReflectionExtensions::InvokePreservingExceptionType(System.Reflection.MethodInfo,System.Object,System.Object[])
extern "C"  Il2CppObject * ReflectionExtensions_InvokePreservingExceptionType_m513786982 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___source0, Il2CppObject * ___instance1, ObjectU5BU5D_t3614634134* ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.ReflectionExtensions::CreateInstancePreservingExceptionType(System.Type,System.Object[])
extern "C"  Il2CppObject * ReflectionExtensions_CreateInstancePreservingExceptionType_m248963869 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t3614634134* ___constructorParameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.ReflectionExtensions::HoistUpInnerException(System.Reflection.TargetInvocationException)
extern "C"  Exception_t1927440687 * ReflectionExtensions_HoistUpInnerException_m530567410 (Il2CppObject * __this /* static, unused */, TargetInvocationException_t4098620458 * ___targetInvocationException0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type MsgPack.Serialization.ReflectionExtensions::GetMemberValueType(System.Reflection.MemberInfo)
extern "C"  Type_t * ReflectionExtensions_GetMemberValueType_m1664749033 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.CollectionTraits MsgPack.Serialization.ReflectionExtensions::GetCollectionTraits(System.Type)
extern "C"  CollectionTraits_t1823801989 * ReflectionExtensions_GetCollectionTraits_m1994552872 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionExtensions::TryCreateCollectionTraitsForHasGetEnumeratorType(System.Type,System.Reflection.MethodInfo,MsgPack.Serialization.CollectionTraits&)
extern "C"  bool ReflectionExtensions_TryCreateCollectionTraitsForHasGetEnumeratorType_m2302086988 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, MethodInfo_t * ___getEnumerator1, CollectionTraits_t1823801989 ** ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionExtensions::TryCreateGenericCollectionTraits(System.Type,System.Type,MsgPack.Serialization.CollectionTraits&)
extern "C"  bool ReflectionExtensions_TryCreateGenericCollectionTraits_m3732989586 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, Type_t * ___type1, CollectionTraits_t1823801989 ** ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionExtensions::DetermineCollectionInterfaces(System.Type,System.Type&,System.Type&,System.Type&,System.Type&,System.Type&,System.Type&,System.Type&,System.Type&)
extern "C"  bool ReflectionExtensions_DetermineCollectionInterfaces_m4038763646 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t ** ___idictionaryT1, Type_t ** ___ilistT2, Type_t ** ___icollectionT3, Type_t ** ___ienumerableT4, Type_t ** ___idictionary5, Type_t ** ___ilist6, Type_t ** ___icollection7, Type_t ** ___ienumerable8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo MsgPack.Serialization.ReflectionExtensions::FindInterfaceMethod(System.Type,System.Type,System.String,System.Type[])
extern "C"  MethodInfo_t * ReflectionExtensions_FindInterfaceMethod_m1607837352 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, Type_t * ___interfaceType1, String_t* ___name2, TypeU5BU5D_t1664964607* ___parameterTypes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo MsgPack.Serialization.ReflectionExtensions::GetAddMethod(System.Type,System.Type)
extern "C"  MethodInfo_t * ReflectionExtensions_GetAddMethod_m1257349914 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, Type_t * ___argumentType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo MsgPack.Serialization.ReflectionExtensions::GetCountGetterMethod(System.Type,System.Type)
extern "C"  MethodInfo_t * ReflectionExtensions_GetCountGetterMethod_m1076421431 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, Type_t * ___elementType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo MsgPack.Serialization.ReflectionExtensions::GetAddMethod(System.Type,System.Type,System.Type)
extern "C"  MethodInfo_t * ReflectionExtensions_GetAddMethod_m3853769147 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, Type_t * ___keyType1, Type_t * ___valueType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionExtensions::FilterCollectionType(System.Type,System.Object)
extern "C"  bool ReflectionExtensions_FilterCollectionType_m604769175 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___filterCriteria1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionExtensions::IsIEnumeratorT(System.Type)
extern "C"  bool ReflectionExtensions_IsIEnumeratorT_m2094771042 (Il2CppObject * __this /* static, unused */, Type_t * ___interface0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionExtensions::GetHasPublicGetter(System.Reflection.MemberInfo)
extern "C"  bool ReflectionExtensions_GetHasPublicGetter_m4250704568 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionExtensions::GetIsPublic(System.Reflection.MemberInfo)
extern "C"  bool ReflectionExtensions_GetIsPublic_m1744870477 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionExtensions::GetIsVisible(System.Type)
extern "C"  bool ReflectionExtensions_GetIsVisible_m864774953 (Il2CppObject * __this /* static, unused */, Type_t * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionExtensions::<TryCreateCollectionTraitsForHasGetEnumeratorType>b__0(System.Type)
extern "C"  bool ReflectionExtensions_U3CTryCreateCollectionTraitsForHasGetEnumeratorTypeU3Eb__0_m2693183004 (Il2CppObject * __this /* static, unused */, Type_t * ___interface0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionExtensions::<GetIsPublic>b__9(System.Reflection.MethodInfo)
extern "C"  bool ReflectionExtensions_U3CGetIsPublicU3Eb__9_m719226031 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionExtensions::<GetIsPublic>b__a(System.Reflection.MethodInfo)
extern "C"  bool ReflectionExtensions_U3CGetIsPublicU3Eb__a_m354593015 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ReflectionExtensions::.cctor()
extern "C"  void ReflectionExtensions__cctor_m1966865771 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
