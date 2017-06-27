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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.CreditCardDetails,GSN.Skill.Phoenix.CreditCardDetails>
struct Transform_1_t1635063714;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_CreditCardDeta1436690111.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.CreditCardDetails,GSN.Skill.Phoenix.CreditCardDetails>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3370205626_gshared (Transform_1_t1635063714 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3370205626(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1635063714 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3370205626_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.CreditCardDetails,GSN.Skill.Phoenix.CreditCardDetails>::Invoke(TKey,TValue)
extern "C"  CreditCardDetails_t1436690111  Transform_1_Invoke_m2394984994_gshared (Transform_1_t1635063714 * __this, int32_t ___key0, CreditCardDetails_t1436690111  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2394984994(__this, ___key0, ___value1, method) ((  CreditCardDetails_t1436690111  (*) (Transform_1_t1635063714 *, int32_t, CreditCardDetails_t1436690111 , const MethodInfo*))Transform_1_Invoke_m2394984994_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.CreditCardDetails,GSN.Skill.Phoenix.CreditCardDetails>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2486572267_gshared (Transform_1_t1635063714 * __this, int32_t ___key0, CreditCardDetails_t1436690111  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2486572267(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1635063714 *, int32_t, CreditCardDetails_t1436690111 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2486572267_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.CreditCardDetails,GSN.Skill.Phoenix.CreditCardDetails>::EndInvoke(System.IAsyncResult)
extern "C"  CreditCardDetails_t1436690111  Transform_1_EndInvoke_m499344016_gshared (Transform_1_t1635063714 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m499344016(__this, ___result0, method) ((  CreditCardDetails_t1436690111  (*) (Transform_1_t1635063714 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m499344016_gshared)(__this, ___result0, method)
