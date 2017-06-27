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

// System.Collections.Generic.Dictionary`2/Transform`1<MsgPack.MessagePackObject,MsgPack.MessagePackObject,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>>
struct Transform_1_t1366362679;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22208478405.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<MsgPack.MessagePackObject,MsgPack.MessagePackObject,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m372732694_gshared (Transform_1_t1366362679 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m372732694(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1366362679 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m372732694_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<MsgPack.MessagePackObject,MsgPack.MessagePackObject,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2208478405  Transform_1_Invoke_m3546980566_gshared (Transform_1_t1366362679 * __this, MessagePackObject_t2038085051  ___key0, MessagePackObject_t2038085051  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3546980566(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2208478405  (*) (Transform_1_t1366362679 *, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , const MethodInfo*))Transform_1_Invoke_m3546980566_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<MsgPack.MessagePackObject,MsgPack.MessagePackObject,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1579431615_gshared (Transform_1_t1366362679 * __this, MessagePackObject_t2038085051  ___key0, MessagePackObject_t2038085051  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1579431615(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1366362679 *, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1579431615_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<MsgPack.MessagePackObject,MsgPack.MessagePackObject,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2208478405  Transform_1_EndInvoke_m2597090668_gshared (Transform_1_t1366362679 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2597090668(__this, ___result0, method) ((  KeyValuePair_2_t2208478405  (*) (Transform_1_t1366362679 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2597090668_gshared)(__this, ___result0, method)
