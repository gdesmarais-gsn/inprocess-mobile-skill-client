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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData,System.Collections.Generic.KeyValuePair`2<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData>>
struct Transform_1_t1460305319;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22903952073.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Gam1843813920.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData,System.Collections.Generic.KeyValuePair`2<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2113100500_gshared (Transform_1_t1460305319 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2113100500(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1460305319 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2113100500_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData,System.Collections.Generic.KeyValuePair`2<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2903952073  Transform_1_Invoke_m834889364_gshared (Transform_1_t1460305319 * __this, int32_t ___key0, GameData_t1843813920  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m834889364(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2903952073  (*) (Transform_1_t1460305319 *, int32_t, GameData_t1843813920 , const MethodInfo*))Transform_1_Invoke_m834889364_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData,System.Collections.Generic.KeyValuePair`2<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1286400267_gshared (Transform_1_t1460305319 * __this, int32_t ___key0, GameData_t1843813920  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1286400267(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1460305319 *, int32_t, GameData_t1843813920 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1286400267_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData,System.Collections.Generic.KeyValuePair`2<System.Int32,GSN.Skill.Phoenix.Model.Data.GameData>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2903952073  Transform_1_EndInvoke_m129949726_gshared (Transform_1_t1460305319 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m129949726(__this, ___result0, method) ((  KeyValuePair_2_t2903952073  (*) (Transform_1_t1460305319 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m129949726_gshared)(__this, ___result0, method)
