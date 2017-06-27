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

// System.Collections.Generic.Dictionary`2/Transform`1<MsgPack.MessagePackObject,MsgPack.MessagePackObject,MsgPack.MessagePackObject>
struct Transform_1_t1195969325;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<MsgPack.MessagePackObject,MsgPack.MessagePackObject,MsgPack.MessagePackObject>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m350030046_gshared (Transform_1_t1195969325 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m350030046(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1195969325 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m350030046_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<MsgPack.MessagePackObject,MsgPack.MessagePackObject,MsgPack.MessagePackObject>::Invoke(TKey,TValue)
extern "C"  MessagePackObject_t2038085051  Transform_1_Invoke_m1102148198_gshared (Transform_1_t1195969325 * __this, MessagePackObject_t2038085051  ___key0, MessagePackObject_t2038085051  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1102148198(__this, ___key0, ___value1, method) ((  MessagePackObject_t2038085051  (*) (Transform_1_t1195969325 *, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , const MethodInfo*))Transform_1_Invoke_m1102148198_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<MsgPack.MessagePackObject,MsgPack.MessagePackObject,MsgPack.MessagePackObject>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3061067359_gshared (Transform_1_t1195969325 * __this, MessagePackObject_t2038085051  ___key0, MessagePackObject_t2038085051  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3061067359(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1195969325 *, MessagePackObject_t2038085051 , MessagePackObject_t2038085051 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3061067359_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<MsgPack.MessagePackObject,MsgPack.MessagePackObject,MsgPack.MessagePackObject>::EndInvoke(System.IAsyncResult)
extern "C"  MessagePackObject_t2038085051  Transform_1_EndInvoke_m2784397248_gshared (Transform_1_t1195969325 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2784397248(__this, ___result0, method) ((  MessagePackObject_t2038085051  (*) (Transform_1_t1195969325 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2784397248_gshared)(__this, ___result0, method)
