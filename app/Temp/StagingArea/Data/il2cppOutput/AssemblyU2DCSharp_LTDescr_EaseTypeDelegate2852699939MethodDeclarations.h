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

// LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_t2852699939;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void LTDescr/EaseTypeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EaseTypeDelegate__ctor_m2802419770 (EaseTypeDelegate_t2852699939 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr/EaseTypeDelegate::Invoke()
extern "C"  Vector3_t2243707580  EaseTypeDelegate_Invoke_m1805020222 (EaseTypeDelegate_t2852699939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LTDescr/EaseTypeDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EaseTypeDelegate_BeginInvoke_m1255487053 (EaseTypeDelegate_t2852699939 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr/EaseTypeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  Vector3_t2243707580  EaseTypeDelegate_EndInvoke_m3836470234 (EaseTypeDelegate_t2852699939 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
