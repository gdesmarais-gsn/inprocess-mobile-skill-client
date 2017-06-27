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

// UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate
struct BasicResponseDelegate_t1347328110;
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

// System.Void UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BasicResponseDelegate__ctor_m4100720496 (BasicResponseDelegate_t1347328110 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::Invoke(System.Boolean,System.String)
extern "C"  void BasicResponseDelegate_Invoke_m2117145949 (BasicResponseDelegate_t1347328110 * __this, bool ___success0, String_t* ___extendedInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::BeginInvoke(System.Boolean,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BasicResponseDelegate_BeginInvoke_m2558854038 (BasicResponseDelegate_t1347328110 * __this, bool ___success0, String_t* ___extendedInfo1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BasicResponseDelegate_EndInvoke_m121935294 (BasicResponseDelegate_t1347328110 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
