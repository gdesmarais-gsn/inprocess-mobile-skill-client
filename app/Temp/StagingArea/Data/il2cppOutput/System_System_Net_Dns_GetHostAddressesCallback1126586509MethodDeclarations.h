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

// System.Net.Dns/GetHostAddressesCallback
struct GetHostAddressesCallback_t1126586509;
// System.Object
struct Il2CppObject;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t4087230954;
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

// System.Void System.Net.Dns/GetHostAddressesCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GetHostAddressesCallback__ctor_m1189062569 (GetHostAddressesCallback_t1126586509 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns/GetHostAddressesCallback::Invoke(System.String)
extern "C"  IPAddressU5BU5D_t4087230954* GetHostAddressesCallback_Invoke_m62398143 (GetHostAddressesCallback_t1126586509 * __this, String_t* ___hostName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns/GetHostAddressesCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetHostAddressesCallback_BeginInvoke_m2279952428 (GetHostAddressesCallback_t1126586509 * __this, String_t* ___hostName0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns/GetHostAddressesCallback::EndInvoke(System.IAsyncResult)
extern "C"  IPAddressU5BU5D_t4087230954* GetHostAddressesCallback_EndInvoke_m1992944783 (GetHostAddressesCallback_t1126586509 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
