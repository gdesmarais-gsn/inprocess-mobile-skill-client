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

// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Object>
struct DataResponseDelegate_1_t945754175;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void DataResponseDelegate_1__ctor_m2222754223_gshared (DataResponseDelegate_1_t945754175 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define DataResponseDelegate_1__ctor_m2222754223(__this, ___object0, ___method1, method) ((  void (*) (DataResponseDelegate_1_t945754175 *, Il2CppObject *, IntPtr_t, const MethodInfo*))DataResponseDelegate_1__ctor_m2222754223_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Object>::Invoke(System.Boolean,System.String,T)
extern "C"  void DataResponseDelegate_1_Invoke_m2892839852_gshared (DataResponseDelegate_1_t945754175 * __this, bool ___success0, String_t* ___extendedInfo1, Il2CppObject * ___responseData2, const MethodInfo* method);
#define DataResponseDelegate_1_Invoke_m2892839852(__this, ___success0, ___extendedInfo1, ___responseData2, method) ((  void (*) (DataResponseDelegate_1_t945754175 *, bool, String_t*, Il2CppObject *, const MethodInfo*))DataResponseDelegate_1_Invoke_m2892839852_gshared)(__this, ___success0, ___extendedInfo1, ___responseData2, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Object>::BeginInvoke(System.Boolean,System.String,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataResponseDelegate_1_BeginInvoke_m2356550577_gshared (DataResponseDelegate_1_t945754175 * __this, bool ___success0, String_t* ___extendedInfo1, Il2CppObject * ___responseData2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method);
#define DataResponseDelegate_1_BeginInvoke_m2356550577(__this, ___success0, ___extendedInfo1, ___responseData2, ___callback3, ___object4, method) ((  Il2CppObject * (*) (DataResponseDelegate_1_t945754175 *, bool, String_t*, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))DataResponseDelegate_1_BeginInvoke_m2356550577_gshared)(__this, ___success0, ___extendedInfo1, ___responseData2, ___callback3, ___object4, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void DataResponseDelegate_1_EndInvoke_m1252280981_gshared (DataResponseDelegate_1_t945754175 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define DataResponseDelegate_1_EndInvoke_m1252280981(__this, ___result0, method) ((  void (*) (DataResponseDelegate_1_t945754175 *, Il2CppObject *, const MethodInfo*))DataResponseDelegate_1_EndInvoke_m1252280981_gshared)(__this, ___result0, method)
