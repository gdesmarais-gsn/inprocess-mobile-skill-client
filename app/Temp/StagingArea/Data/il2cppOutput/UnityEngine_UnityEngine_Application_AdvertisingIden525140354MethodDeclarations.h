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

// UnityEngine.Application/AdvertisingIdentifierCallback
struct AdvertisingIdentifierCallback_t525140354;
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

// System.Void UnityEngine.Application/AdvertisingIdentifierCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AdvertisingIdentifierCallback__ctor_m3220349716 (AdvertisingIdentifierCallback_t525140354 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application/AdvertisingIdentifierCallback::Invoke(System.String,System.Boolean,System.String)
extern "C"  void AdvertisingIdentifierCallback_Invoke_m268061795 (AdvertisingIdentifierCallback_t525140354 * __this, String_t* ___advertisingId0, bool ___trackingEnabled1, String_t* ___errorMsg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Application/AdvertisingIdentifierCallback::BeginInvoke(System.String,System.Boolean,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AdvertisingIdentifierCallback_BeginInvoke_m1373660762 (AdvertisingIdentifierCallback_t525140354 * __this, String_t* ___advertisingId0, bool ___trackingEnabled1, String_t* ___errorMsg2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application/AdvertisingIdentifierCallback::EndInvoke(System.IAsyncResult)
extern "C"  void AdvertisingIdentifierCallback_EndInvoke_m1308833978 (AdvertisingIdentifierCallback_t525140354 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
