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

// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>
struct Dictionary_2_t613314382;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1933339084.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22665626900.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m91540802_gshared (Enumerator_t1933339084 * __this, Dictionary_2_t613314382 * ___dictionary0, const MethodInfo* method);
#define Enumerator__ctor_m91540802(__this, ___dictionary0, method) ((  void (*) (Enumerator_t1933339084 *, Dictionary_2_t613314382 *, const MethodInfo*))Enumerator__ctor_m91540802_gshared)(__this, ___dictionary0, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m1170362933_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1170362933(__this, method) ((  Il2CppObject * (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1170362933_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m4222086121_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m4222086121(__this, method) ((  void (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m4222086121_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t3048875398  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3269289826_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3269289826(__this, method) ((  DictionaryEntry_t3048875398  (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3269289826_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m681286023_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m681286023(__this, method) ((  Il2CppObject * (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m681286023_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m3629931679_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m3629931679(__this, method) ((  Il2CppObject * (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m3629931679_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3799918969_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m3799918969(__this, method) ((  bool (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_MoveNext_m3799918969_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t2665626900  Enumerator_get_Current_m1466798657_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1466798657(__this, method) ((  KeyValuePair_2_t2665626900  (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_get_Current_m1466798657_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::get_CurrentKey()
extern "C"  RuntimeTypeHandle_t2330101084  Enumerator_get_CurrentKey_m342289642_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m342289642(__this, method) ((  RuntimeTypeHandle_t2330101084  (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_get_CurrentKey_m342289642_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::get_CurrentValue()
extern "C"  Il2CppObject * Enumerator_get_CurrentValue_m1934634602_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1934634602(__this, method) ((  Il2CppObject * (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_get_CurrentValue_m1934634602_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::Reset()
extern "C"  void Enumerator_Reset_m868316928_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_Reset_m868316928(__this, method) ((  void (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_Reset_m868316928_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::VerifyState()
extern "C"  void Enumerator_VerifyState_m353011467_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m353011467(__this, method) ((  void (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_VerifyState_m353011467_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m1074110257_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1074110257(__this, method) ((  void (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_VerifyCurrent_m1074110257_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.RuntimeTypeHandle,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m2365312258_gshared (Enumerator_t1933339084 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m2365312258(__this, method) ((  void (*) (Enumerator_t1933339084 *, const MethodInfo*))Enumerator_Dispose_m2365312258_gshared)(__this, method)
