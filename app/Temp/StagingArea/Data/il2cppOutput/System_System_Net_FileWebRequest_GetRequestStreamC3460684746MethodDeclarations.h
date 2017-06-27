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

// System.Net.FileWebRequest/GetRequestStreamCallback
struct GetRequestStreamCallback_t3460684746;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t3255436806;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.FileWebRequest/GetRequestStreamCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GetRequestStreamCallback__ctor_m3549989484 (GetRequestStreamCallback_t3460684746 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest/GetRequestStreamCallback::Invoke()
extern "C"  Stream_t3255436806 * GetRequestStreamCallback_Invoke_m1696034860 (GetRequestStreamCallback_t3460684746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest/GetRequestStreamCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetRequestStreamCallback_BeginInvoke_m2323662313 (GetRequestStreamCallback_t3460684746 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest/GetRequestStreamCallback::EndInvoke(System.IAsyncResult)
extern "C"  Stream_t3255436806 * GetRequestStreamCallback_EndInvoke_m2437360108 (GetRequestStreamCallback_t3460684746 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
