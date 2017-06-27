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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Collections.DictionaryEntry>
struct Func_2_t2371521502;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22208478405.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2323030691_gshared (Func_2_t2371521502 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m2323030691(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t2371521502 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2323030691_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Collections.DictionaryEntry>::Invoke(T)
extern "C"  DictionaryEntry_t3048875398  Func_2_Invoke_m3364482269_gshared (Func_2_t2371521502 * __this, KeyValuePair_2_t2208478405  ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m3364482269(__this, ___arg10, method) ((  DictionaryEntry_t3048875398  (*) (Func_2_t2371521502 *, KeyValuePair_2_t2208478405 , const MethodInfo*))Func_2_Invoke_m3364482269_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Collections.DictionaryEntry>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m1401631786_gshared (Func_2_t2371521502 * __this, KeyValuePair_2_t2208478405  ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m1401631786(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t2371521502 *, KeyValuePair_2_t2208478405 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m1401631786_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t3048875398  Func_2_EndInvoke_m175957695_gshared (Func_2_t2371521502 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m175957695(__this, ___result0, method) ((  DictionaryEntry_t3048875398  (*) (Func_2_t2371521502 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m175957695_gshared)(__this, ___result0, method)
