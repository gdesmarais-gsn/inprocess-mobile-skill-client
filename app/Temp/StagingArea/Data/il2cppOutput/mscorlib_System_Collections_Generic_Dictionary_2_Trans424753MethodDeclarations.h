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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Strings.ErrorTranslation,GSN.Skill.Phoenix.Strings.ErrorTranslation>
struct Transform_1_t424753;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Strings_ErrorTr918723703.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Strings.ErrorTranslation,GSN.Skill.Phoenix.Strings.ErrorTranslation>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3173370147_gshared (Transform_1_t424753 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3173370147(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t424753 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3173370147_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Strings.ErrorTranslation,GSN.Skill.Phoenix.Strings.ErrorTranslation>::Invoke(TKey,TValue)
extern "C"  ErrorTranslation_t918723703  Transform_1_Invoke_m3845395095_gshared (Transform_1_t424753 * __this, Il2CppObject * ___key0, ErrorTranslation_t918723703  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3845395095(__this, ___key0, ___value1, method) ((  ErrorTranslation_t918723703  (*) (Transform_1_t424753 *, Il2CppObject *, ErrorTranslation_t918723703 , const MethodInfo*))Transform_1_Invoke_m3845395095_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Strings.ErrorTranslation,GSN.Skill.Phoenix.Strings.ErrorTranslation>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2240794232_gshared (Transform_1_t424753 * __this, Il2CppObject * ___key0, ErrorTranslation_t918723703  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2240794232(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t424753 *, Il2CppObject *, ErrorTranslation_t918723703 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2240794232_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,GSN.Skill.Phoenix.Strings.ErrorTranslation,GSN.Skill.Phoenix.Strings.ErrorTranslation>::EndInvoke(System.IAsyncResult)
extern "C"  ErrorTranslation_t918723703  Transform_1_EndInvoke_m2250262393_gshared (Transform_1_t424753 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2250262393(__this, ___result0, method) ((  ErrorTranslation_t918723703  (*) (Transform_1_t424753 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2250262393_gshared)(__this, ___result0, method)
