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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
struct Transform_1_t2677383581;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4228843959_gshared (Transform_1_t2677383581 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4228843959(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2677383581 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4228843959_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern "C"  uint8_t Transform_1_Invoke_m3635857507_gshared (Transform_1_t2677383581 * __this, Il2CppObject * ___key0, uint8_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3635857507(__this, ___key0, ___value1, method) ((  uint8_t (*) (Transform_1_t2677383581 *, Il2CppObject *, uint8_t, const MethodInfo*))Transform_1_Invoke_m3635857507_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m598584578_gshared (Transform_1_t2677383581 * __this, Il2CppObject * ___key0, uint8_t ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m598584578(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2677383581 *, Il2CppObject *, uint8_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m598584578_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C"  uint8_t Transform_1_EndInvoke_m3398022049_gshared (Transform_1_t2677383581 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3398022049(__this, ___result0, method) ((  uint8_t (*) (Transform_1_t2677383581 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3398022049_gshared)(__this, ___result0, method)
