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

// System.Collections.Generic.Dictionary`2<System.Object,System.RuntimeTypeHandle>
struct Dictionary_2_t1922161212;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3242185914.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23974473730.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m3341921614_gshared (Enumerator_t3242185914 * __this, Dictionary_2_t1922161212 * ___dictionary0, const MethodInfo* method);
#define Enumerator__ctor_m3341921614(__this, ___dictionary0, method) ((  void (*) (Enumerator_t3242185914 *, Dictionary_2_t1922161212 *, const MethodInfo*))Enumerator__ctor_m3341921614_gshared)(__this, ___dictionary0, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m2963692585_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m2963692585(__this, method) ((  Il2CppObject * (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m2963692585_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m3575773525_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m3575773525(__this, method) ((  void (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m3575773525_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t3048875398  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2658976266_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2658976266(__this, method) ((  DictionaryEntry_t3048875398  (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2658976266_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m795957903_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m795957903(__this, method) ((  Il2CppObject * (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m795957903_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m3787232711_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m3787232711(__this, method) ((  Il2CppObject * (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m3787232711_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m245633261_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m245633261(__this, method) ((  bool (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_MoveNext_m245633261_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::get_Current()
extern "C"  KeyValuePair_2_t3974473730  Enumerator_get_Current_m1777320981_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1777320981(__this, method) ((  KeyValuePair_2_t3974473730  (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_get_Current_m1777320981_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::get_CurrentKey()
extern "C"  Il2CppObject * Enumerator_get_CurrentKey_m917945654_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m917945654(__this, method) ((  Il2CppObject * (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_get_CurrentKey_m917945654_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::get_CurrentValue()
extern "C"  RuntimeTypeHandle_t2330101084  Enumerator_get_CurrentValue_m3521893174_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m3521893174(__this, method) ((  RuntimeTypeHandle_t2330101084  (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_get_CurrentValue_m3521893174_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::Reset()
extern "C"  void Enumerator_Reset_m614601944_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_Reset_m614601944(__this, method) ((  void (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_Reset_m614601944_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::VerifyState()
extern "C"  void Enumerator_VerifyState_m2300468867_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m2300468867(__this, method) ((  void (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_VerifyState_m2300468867_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m1513156125_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1513156125(__this, method) ((  void (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_VerifyCurrent_m1513156125_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.RuntimeTypeHandle>::Dispose()
extern "C"  void Enumerator_Dispose_m2260193686_gshared (Enumerator_t3242185914 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m2260193686(__this, method) ((  void (*) (Enumerator_t3242185914 *, const MethodInfo*))Enumerator_Dispose_m2260193686_gshared)(__this, method)
