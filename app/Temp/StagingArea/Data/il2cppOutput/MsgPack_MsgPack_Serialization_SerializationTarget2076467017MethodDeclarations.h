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

// MsgPack.Serialization.SerializationTarget
struct SerializationTarget_t2076467017;
// System.Collections.Generic.IList`1<MsgPack.Serialization.SerializingMember>
struct IList_1_t1450277358;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Type
struct Type_t;
// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// System.Collections.Generic.IEnumerable`1<MsgPack.Serialization.SerializingMember>
struct IEnumerable_1_t1201463802;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// System.Runtime.Serialization.SerializationException
struct SerializationException_t753258759;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// MsgPack.Serialization.SerializingMember
struct SerializingMember_t909336757;
// System.String
struct String_t;
// System.Reflection.CustomAttributeData
struct CustomAttributeData_t3093286891;
// <>f__AnonymousType0`2<System.Reflection.MemberInfo,System.Reflection.CustomAttributeData>
struct U3CU3Ef__AnonymousType0_2_t3708923531;
// System.Object
struct Il2CppObject;
// System.Linq.IGrouping`2<System.Int32,System.Reflection.ConstructorInfo>
struct IGrouping_2_t485070115;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "mscorlib_System_Type1303803226.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "MsgPack_MsgPack_Serialization_SerializingMember909336757.h"
#include "mscorlib_System_Reflection_CustomAttributeData3093286891.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgum94157543.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23084342876.h"

// System.Collections.Generic.IList`1<MsgPack.Serialization.SerializingMember> MsgPack.Serialization.SerializationTarget::get_Members()
extern "C"  Il2CppObject* SerializationTarget_get_Members_m3930374101 (SerializationTarget_t2076467017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationTarget::set_Members(System.Collections.Generic.IList`1<MsgPack.Serialization.SerializingMember>)
extern "C"  void SerializationTarget_set_Members_m587380844 (SerializationTarget_t2076467017 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo MsgPack.Serialization.SerializationTarget::get_DeserializationConstructor()
extern "C"  ConstructorInfo_t2851816542 * SerializationTarget_get_DeserializationConstructor_m3705154167 (SerializationTarget_t2076467017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationTarget::set_DeserializationConstructor(System.Reflection.ConstructorInfo)
extern "C"  void SerializationTarget_set_DeserializationConstructor_m1643905140 (SerializationTarget_t2076467017 * __this, ConstructorInfo_t2851816542 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::get_IsConstructorDeserialization()
extern "C"  bool SerializationTarget_get_IsConstructorDeserialization_m1859962556 (SerializationTarget_t2076467017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationTarget::.ctor(System.Collections.Generic.IList`1<MsgPack.Serialization.SerializingMember>,System.Reflection.ConstructorInfo)
extern "C"  void SerializationTarget__ctor_m1118998350 (SerializationTarget_t2076467017 * __this, Il2CppObject* ___members0, ConstructorInfo_t2851816542 * ___constructor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationTarget::VerifyType(System.Type)
extern "C"  void SerializationTarget_VerifyType_m2646606252 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.SerializationTarget MsgPack.Serialization.SerializationTarget::Prepare(MsgPack.Serialization.SerializationContext,System.Type)
extern "C"  SerializationTarget_t2076467017 * SerializationTarget_Prepare_m475683033 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___context0, Type_t * ___targetType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<MsgPack.Serialization.SerializingMember> MsgPack.Serialization.SerializationTarget::GetTargetMembers(System.Type)
extern "C"  Il2CppObject* SerializationTarget_GetTargetMembers_m2805209610 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<MsgPack.Serialization.SerializingMember> MsgPack.Serialization.SerializationTarget::GetAnnotatedMembersWithDuplicationDetection(System.Type,System.Reflection.MemberInfo[])
extern "C"  Il2CppObject* SerializationTarget_GetAnnotatedMembersWithDuplicationDetection_m445085480 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, MemberInfoU5BU5D_t4238939941* ___filtered1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<MsgPack.Serialization.SerializingMember> MsgPack.Serialization.SerializationTarget::GetSystemRuntimeSerializationCompatibleMembers(System.Reflection.MemberInfo[])
extern "C"  Il2CppObject* SerializationTarget_GetSystemRuntimeSerializationCompatibleMembers_m4248561997 (Il2CppObject * __this /* static, unused */, MemberInfoU5BU5D_t4238939941* ___members0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<MsgPack.Serialization.SerializingMember> MsgPack.Serialization.SerializationTarget::GetPublicUnpreventedMembers(System.Reflection.MemberInfo[])
extern "C"  Il2CppObject* SerializationTarget_GetPublicUnpreventedMembers_m2148048633 (Il2CppObject * __this /* static, unused */, MemberInfoU5BU5D_t4238939941* ___members0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo MsgPack.Serialization.SerializationTarget::FindDeserializationConstructor(System.Type)
extern "C"  ConstructorInfo_t2851816542 * SerializationTarget_FindDeserializationConstructor_m2337890104 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationException MsgPack.Serialization.SerializationTarget::NewTypeCannotBeSerializedException(System.Type)
extern "C"  SerializationException_t753258759 * SerializationTarget_NewTypeCannotBeSerializedException_m2496470989 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::CheckTargetEligibility(System.Reflection.MemberInfo)
extern "C"  bool SerializationTarget_CheckTargetEligibility_m1452578350 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<MsgPack.Serialization.SerializingMember> MsgPack.Serialization.SerializationTarget::ComplementMembers(System.Collections.Generic.IList`1<MsgPack.Serialization.SerializingMember>,MsgPack.Serialization.SerializationContext,System.Type)
extern "C"  Il2CppObject* SerializationTarget_ComplementMembers_m2037935028 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___candidates0, SerializationContext_t1484625559 * ___context1, Type_t * ___targetType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationTarget::VerifyNilImplication(System.Type,System.Collections.Generic.IEnumerable`1<MsgPack.Serialization.SerializingMember>)
extern "C"  void SerializationTarget_VerifyNilImplication_m3072024986 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject* ___entries1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationTarget::VerifyKeyUniqueness(System.Collections.Generic.IList`1<MsgPack.Serialization.SerializingMember>)
extern "C"  void SerializationTarget_VerifyKeyUniqueness_m3641784084 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.Serialization.SerializationTarget::<Prepare>b__5(MsgPack.Serialization.SerializingMember)
extern "C"  int32_t SerializationTarget_U3CPrepareU3Eb__5_m375845009 (Il2CppObject * __this /* static, unused */, SerializingMember_t909336757 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::<Prepare>b__6(MsgPack.Serialization.SerializingMember)
extern "C"  bool SerializationTarget_U3CPrepareU3Eb__6_m3202555730 (Il2CppObject * __this /* static, unused */, SerializingMember_t909336757 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::<Prepare>b__7(MsgPack.Serialization.SerializingMember)
extern "C"  bool SerializationTarget_U3CPrepareU3Eb__7_m2455709457 (Il2CppObject * __this /* static, unused */, SerializingMember_t909336757 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.Serialization.SerializationTarget::<Prepare>b__8(MsgPack.Serialization.SerializingMember)
extern "C"  String_t* SerializationTarget_U3CPrepareU3Eb__8_m2052439111 (Il2CppObject * __this /* static, unused */, SerializingMember_t909336757 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::<GetTargetMembers>b__d(System.Reflection.MemberInfo)
extern "C"  bool SerializationTarget_U3CGetTargetMembersU3Eb__d_m3240367838 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::<GetTargetMembers>b__e(System.Reflection.CustomAttributeData)
extern "C"  bool SerializationTarget_U3CGetTargetMembersU3Eb__e_m2939818532 (Il2CppObject * __this /* static, unused */, CustomAttributeData_t3093286891 * ___attr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::<GetAnnotatedMembersWithDuplicationDetection>b__11(System.Reflection.MemberInfo)
extern "C"  bool SerializationTarget_U3CGetAnnotatedMembersWithDuplicationDetectionU3Eb__11_m3836822728 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.SerializingMember MsgPack.Serialization.SerializationTarget::<GetAnnotatedMembersWithDuplicationDetection>b__12(System.Reflection.MemberInfo)
extern "C"  SerializingMember_t909336757 * SerializationTarget_U3CGetAnnotatedMembersWithDuplicationDetectionU3Eb__12_m3627808247 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>f__AnonymousType0`2<System.Reflection.MemberInfo,System.Reflection.CustomAttributeData> MsgPack.Serialization.SerializationTarget::<GetSystemRuntimeSerializationCompatibleMembers>b__15(System.Reflection.MemberInfo)
extern "C"  U3CU3Ef__AnonymousType0_2_t3708923531 * SerializationTarget_U3CGetSystemRuntimeSerializationCompatibleMembersU3Eb__15_m1036706851 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::<GetSystemRuntimeSerializationCompatibleMembers>b__17(<>f__AnonymousType0`2<System.Reflection.MemberInfo,System.Reflection.CustomAttributeData>)
extern "C"  bool SerializationTarget_U3CGetSystemRuntimeSerializationCompatibleMembersU3Eb__17_m1193858800 (Il2CppObject * __this /* static, unused */, U3CU3Ef__AnonymousType0_2_t3708923531 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.SerializingMember MsgPack.Serialization.SerializationTarget::<GetSystemRuntimeSerializationCompatibleMembers>b__18(<>f__AnonymousType0`2<System.Reflection.MemberInfo,System.Reflection.CustomAttributeData>)
extern "C"  SerializingMember_t909336757 * SerializationTarget_U3CGetSystemRuntimeSerializationCompatibleMembersU3Eb__18_m3466505559 (Il2CppObject * __this /* static, unused */, U3CU3Ef__AnonymousType0_2_t3708923531 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::<GetSystemRuntimeSerializationCompatibleMembers>b__16(System.Reflection.CustomAttributeData)
extern "C"  bool SerializationTarget_U3CGetSystemRuntimeSerializationCompatibleMembersU3Eb__16_m1141089680 (Il2CppObject * __this /* static, unused */, CustomAttributeData_t3093286891 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::<GetSystemRuntimeSerializationCompatibleMembers>b__19(System.Reflection.CustomAttributeNamedArgument)
extern "C"  bool SerializationTarget_U3CGetSystemRuntimeSerializationCompatibleMembersU3Eb__19_m3221662683 (Il2CppObject * __this /* static, unused */, CustomAttributeNamedArgument_t94157543  ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.Serialization.SerializationTarget::<GetSystemRuntimeSerializationCompatibleMembers>b__1a(System.Reflection.CustomAttributeNamedArgument)
extern "C"  String_t* SerializationTarget_U3CGetSystemRuntimeSerializationCompatibleMembersU3Eb__1a_m1568245538 (Il2CppObject * __this /* static, unused */, CustomAttributeNamedArgument_t94157543  ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::<GetSystemRuntimeSerializationCompatibleMembers>b__1b(System.Reflection.CustomAttributeNamedArgument)
extern "C"  bool SerializationTarget_U3CGetSystemRuntimeSerializationCompatibleMembersU3Eb__1b_m2982449044 (Il2CppObject * __this /* static, unused */, CustomAttributeNamedArgument_t94157543  ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MsgPack.Serialization.SerializationTarget::<GetSystemRuntimeSerializationCompatibleMembers>b__1c(System.Reflection.CustomAttributeNamedArgument)
extern "C"  Il2CppObject * SerializationTarget_U3CGetSystemRuntimeSerializationCompatibleMembersU3Eb__1c_m2179749166 (Il2CppObject * __this /* static, unused */, CustomAttributeNamedArgument_t94157543  ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::<GetPublicUnpreventedMembers>b__25(System.Reflection.MemberInfo)
extern "C"  bool SerializationTarget_U3CGetPublicUnpreventedMembersU3Eb__25_m3604176621 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.SerializingMember MsgPack.Serialization.SerializationTarget::<GetPublicUnpreventedMembers>b__26(System.Reflection.MemberInfo)
extern "C"  SerializingMember_t909336757 * SerializationTarget_U3CGetPublicUnpreventedMembersU3Eb__26_m844590976 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationTarget::<FindDeserializationConstructor>b__29(System.Reflection.ConstructorInfo)
extern "C"  bool SerializationTarget_U3CFindDeserializationConstructorU3Eb__29_m3603965223 (Il2CppObject * __this /* static, unused */, ConstructorInfo_t2851816542 * ___ctor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.Serialization.SerializationTarget::<FindDeserializationConstructor>b__2a(System.Reflection.ConstructorInfo)
extern "C"  int32_t SerializationTarget_U3CFindDeserializationConstructorU3Eb__2a_m3719532805 (Il2CppObject * __this /* static, unused */, ConstructorInfo_t2851816542 * ___ctor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.Serialization.SerializationTarget::<FindDeserializationConstructor>b__2b(System.Linq.IGrouping`2<System.Int32,System.Reflection.ConstructorInfo>)
extern "C"  int32_t SerializationTarget_U3CFindDeserializationConstructorU3Eb__2b_m3493386038 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___g0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.Serialization.SerializationTarget::<FindDeserializationConstructor>b__2c(System.Reflection.ConstructorInfo)
extern "C"  String_t* SerializationTarget_U3CFindDeserializationConstructorU3Eb__2c_m2425392088 (Il2CppObject * __this /* static, unused */, ConstructorInfo_t2851816542 * ___ctor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MsgPack.Serialization.SerializationTarget::<ComplementMembers>b__31(MsgPack.Serialization.SerializingMember)
extern "C"  int32_t SerializationTarget_U3CComplementMembersU3Eb__31_m1307270240 (Il2CppObject * __this /* static, unused */, SerializingMember_t909336757 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.Serialization.SerializationTarget::<VerifyKeyUniqueness>b__34(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Reflection.MemberInfo>>)
extern "C"  String_t* SerializationTarget_U3CVerifyKeyUniquenessU3Eb__34_m3879614049 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t3084342876  ___kv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MsgPack.Serialization.SerializationTarget::<VerifyKeyUniqueness>b__35(System.Reflection.MemberInfo)
extern "C"  String_t* SerializationTarget_U3CVerifyKeyUniquenessU3Eb__35_m169770801 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
