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

// Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t894287291;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t2707150522;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Json_NET_Newtonsoft_Json_ObservableSupport_NotifyC2707150522.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void NotifyCollectionChangedEventHandler__ctor_m3578176584 (NotifyCollectionChangedEventHandler_t894287291 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventHandler::Invoke(System.Object,Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventArgs)
extern "C"  void NotifyCollectionChangedEventHandler_Invoke_m2153121547 (NotifyCollectionChangedEventHandler_t894287291 * __this, Il2CppObject * ___sender0, NotifyCollectionChangedEventArgs_t2707150522 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventHandler::BeginInvoke(System.Object,Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * NotifyCollectionChangedEventHandler_BeginInvoke_m4270659800 (NotifyCollectionChangedEventHandler_t894287291 * __this, Il2CppObject * ___sender0, NotifyCollectionChangedEventArgs_t2707150522 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.ObservableSupport.NotifyCollectionChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void NotifyCollectionChangedEventHandler_EndInvoke_m617295126 (NotifyCollectionChangedEventHandler_t894287291 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
