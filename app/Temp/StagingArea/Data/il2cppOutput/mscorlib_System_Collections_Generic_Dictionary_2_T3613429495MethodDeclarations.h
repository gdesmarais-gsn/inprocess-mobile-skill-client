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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType,System.Collections.Generic.KeyValuePair`2<System.Object,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType>>
struct Transform_1_t3613429495;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g71093525.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourn2721688175.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType,System.Collections.Generic.KeyValuePair`2<System.Object,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m86063894_gshared (Transform_1_t3613429495 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m86063894(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3613429495 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m86063894_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType,System.Collections.Generic.KeyValuePair`2<System.Object,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t71093525  Transform_1_Invoke_m2831939862_gshared (Transform_1_t3613429495 * __this, Il2CppObject * ___key0, GameType_t2721688175  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2831939862(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t71093525  (*) (Transform_1_t3613429495 *, Il2CppObject *, GameType_t2721688175 , const MethodInfo*))Transform_1_Invoke_m2831939862_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType,System.Collections.Generic.KeyValuePair`2<System.Object,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1212475751_gshared (Transform_1_t3613429495 * __this, Il2CppObject * ___key0, GameType_t2721688175  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1212475751(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3613429495 *, Il2CppObject *, GameType_t2721688175 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1212475751_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType,System.Collections.Generic.KeyValuePair`2<System.Object,GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t71093525  Transform_1_EndInvoke_m2161676844_gshared (Transform_1_t3613429495 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2161676844(__this, ___result0, method) ((  KeyValuePair_2_t71093525  (*) (Transform_1_t3613429495 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2161676844_gshared)(__this, ___result0, method)
