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

// System.Func`3<System.Int32,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Int32>
struct Func_3_t3976942739;
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
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Func`3<System.Int32,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m3450645610_gshared (Func_3_t3976942739 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_3__ctor_m3450645610(__this, ___object0, ___method1, method) ((  void (*) (Func_3_t3976942739 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_3__ctor_m3450645610_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`3<System.Int32,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Int32>::Invoke(T1,T2)
extern "C"  int32_t Func_3_Invoke_m1771929863_gshared (Func_3_t3976942739 * __this, int32_t ___arg10, KeyValuePair_2_t2208478405  ___arg21, const MethodInfo* method);
#define Func_3_Invoke_m1771929863(__this, ___arg10, ___arg21, method) ((  int32_t (*) (Func_3_t3976942739 *, int32_t, KeyValuePair_2_t2208478405 , const MethodInfo*))Func_3_Invoke_m1771929863_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Func`3<System.Int32,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Int32>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_3_BeginInvoke_m300168322_gshared (Func_3_t3976942739 * __this, int32_t ___arg10, KeyValuePair_2_t2208478405  ___arg21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Func_3_BeginInvoke_m300168322(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Func_3_t3976942739 *, int32_t, KeyValuePair_2_t2208478405 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_3_BeginInvoke_m300168322_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// TResult System.Func`3<System.Int32,System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Func_3_EndInvoke_m2184753984_gshared (Func_3_t3976942739 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_3_EndInvoke_m2184753984(__this, ___result0, method) ((  int32_t (*) (Func_3_t3976942739 *, Il2CppObject *, const MethodInfo*))Func_3_EndInvoke_m2184753984_gshared)(__this, ___result0, method)
