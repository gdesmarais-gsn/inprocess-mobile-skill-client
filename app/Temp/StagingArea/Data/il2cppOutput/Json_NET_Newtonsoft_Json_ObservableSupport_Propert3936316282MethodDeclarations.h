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

// Newtonsoft.Json.ObservableSupport.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t3936316282;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.ObservableSupport.PropertyChangingEventArgs
struct PropertyChangingEventArgs_t2999891911;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Json_NET_Newtonsoft_Json_ObservableSupport_Propert2999891911.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Newtonsoft.Json.ObservableSupport.PropertyChangingEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PropertyChangingEventHandler__ctor_m1640552941 (PropertyChangingEventHandler_t3936316282 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.ObservableSupport.PropertyChangingEventHandler::Invoke(System.Object,Newtonsoft.Json.ObservableSupport.PropertyChangingEventArgs)
extern "C"  void PropertyChangingEventHandler_Invoke_m3471011719 (PropertyChangingEventHandler_t3936316282 * __this, Il2CppObject * ___sender0, PropertyChangingEventArgs_t2999891911 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Newtonsoft.Json.ObservableSupport.PropertyChangingEventHandler::BeginInvoke(System.Object,Newtonsoft.Json.ObservableSupport.PropertyChangingEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PropertyChangingEventHandler_BeginInvoke_m2487842854 (PropertyChangingEventHandler_t3936316282 * __this, Il2CppObject * ___sender0, PropertyChangingEventArgs_t2999891911 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.ObservableSupport.PropertyChangingEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PropertyChangingEventHandler_EndInvoke_m914643447 (PropertyChangingEventHandler_t3936316282 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
