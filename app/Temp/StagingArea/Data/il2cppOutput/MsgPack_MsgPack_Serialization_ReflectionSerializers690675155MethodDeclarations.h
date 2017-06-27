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

// MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler
struct ReflectionNilImplicationHandler_t690675155;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3961629604;
// MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerParameter
struct ReflectionSerializerNilImplicationHandlerParameter_t3591379922;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerOnUnpackedParameter
struct ReflectionSerializerNilImplicationHandlerOnUnpackedParameter_t3143178000;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_ReflectionSerializer3591379922.h"
#include "MsgPack_MsgPack_Serialization_ReflectionSerializer3143178000.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::.ctor()
extern "C"  void ReflectionNilImplicationHandler__ctor_m294548788 (ReflectionNilImplicationHandler_t690675155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Object,System.Boolean> MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::OnPackingMessagePackObject(MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerParameter)
extern "C"  Func_2_t3961629604 * ReflectionNilImplicationHandler_OnPackingMessagePackObject_m112121364 (ReflectionNilImplicationHandler_t690675155 * __this, ReflectionSerializerNilImplicationHandlerParameter_t3591379922 * ___parameter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Object,System.Boolean> MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::OnPackingReferenceTypeObject(MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerParameter)
extern "C"  Func_2_t3961629604 * ReflectionNilImplicationHandler_OnPackingReferenceTypeObject_m1155630035 (ReflectionNilImplicationHandler_t690675155 * __this, ReflectionSerializerNilImplicationHandlerParameter_t3591379922 * ___parameter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Object,System.Boolean> MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::OnPackingNullableValueTypeObject(MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerParameter)
extern "C"  Func_2_t3961629604 * ReflectionNilImplicationHandler_OnPackingNullableValueTypeObject_m3991667540 (ReflectionNilImplicationHandler_t690675155 * __this, ReflectionSerializerNilImplicationHandlerParameter_t3591379922 * ___parameter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::OnPackingCore(MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerParameter,System.Func`2<System.Object,System.Boolean>)
extern "C"  Action_1_t2491248677 * ReflectionNilImplicationHandler_OnPackingCore_m1853435916 (ReflectionNilImplicationHandler_t690675155 * __this, ReflectionSerializerNilImplicationHandlerParameter_t3591379922 * ___parameter0, Func_2_t3961629604 * ___condition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::OnNopOnUnpacked(MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerOnUnpackedParameter)
extern "C"  Action_1_t2491248677 * ReflectionNilImplicationHandler_OnNopOnUnpacked_m746033481 (ReflectionNilImplicationHandler_t690675155 * __this, ReflectionSerializerNilImplicationHandlerOnUnpackedParameter_t3143178000 * ___parameter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::OnThrowNullIsProhibitedExceptionOnUnpacked(MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerOnUnpackedParameter)
extern "C"  Action_1_t2491248677 * ReflectionNilImplicationHandler_OnThrowNullIsProhibitedExceptionOnUnpacked_m1233214866 (ReflectionNilImplicationHandler_t690675155 * __this, ReflectionSerializerNilImplicationHandlerOnUnpackedParameter_t3143178000 * ___parameter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<System.Object> MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::OnThrowValueTypeCannotBeNull3OnUnpacked(MsgPack.Serialization.ReflectionSerializers.ReflectionSerializerNilImplicationHandlerOnUnpackedParameter)
extern "C"  Action_1_t2491248677 * ReflectionNilImplicationHandler_OnThrowValueTypeCannotBeNull3OnUnpacked_m507138719 (ReflectionNilImplicationHandler_t690675155 * __this, ReflectionSerializerNilImplicationHandlerOnUnpackedParameter_t3143178000 * ___parameter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::<OnPackingMessagePackObject>b__0(System.Object)
extern "C"  bool ReflectionNilImplicationHandler_U3COnPackingMessagePackObjectU3Eb__0_m3696406577 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::<OnPackingReferenceTypeObject>b__2(System.Object)
extern "C"  bool ReflectionNilImplicationHandler_U3COnPackingReferenceTypeObjectU3Eb__2_m3039815578 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::<OnPackingNullableValueTypeObject>b__4(System.Object)
extern "C"  bool ReflectionNilImplicationHandler_U3COnPackingNullableValueTypeObjectU3Eb__4_m2915660405 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::<OnNopOnUnpacked>b__9(System.Object)
extern "C"  void ReflectionNilImplicationHandler_U3COnNopOnUnpackedU3Eb__9_m2633910661 (Il2CppObject * __this /* static, unused */, Il2CppObject * ____0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ReflectionSerializers.ReflectionNilImplicationHandler::.cctor()
extern "C"  void ReflectionNilImplicationHandler__cctor_m387741267 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
