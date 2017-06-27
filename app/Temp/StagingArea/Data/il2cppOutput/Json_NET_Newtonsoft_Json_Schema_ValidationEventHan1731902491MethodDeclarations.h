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

// Newtonsoft.Json.Schema.ValidationEventHandler
struct ValidationEventHandler_t1731902491;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Schema.ValidationEventArgs
struct ValidationEventArgs_t130261338;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Json_NET_Newtonsoft_Json_Schema_ValidationEventArgs130261338.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Newtonsoft.Json.Schema.ValidationEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ValidationEventHandler__ctor_m1101548629 (ValidationEventHandler_t1731902491 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.ValidationEventHandler::Invoke(System.Object,Newtonsoft.Json.Schema.ValidationEventArgs)
extern "C"  void ValidationEventHandler_Invoke_m4236537675 (ValidationEventHandler_t1731902491 * __this, Il2CppObject * ___sender0, ValidationEventArgs_t130261338 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Newtonsoft.Json.Schema.ValidationEventHandler::BeginInvoke(System.Object,Newtonsoft.Json.Schema.ValidationEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ValidationEventHandler_BeginInvoke_m2378351506 (ValidationEventHandler_t1731902491 * __this, Il2CppObject * ___sender0, ValidationEventArgs_t130261338 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Schema.ValidationEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ValidationEventHandler_EndInvoke_m3375580831 (ValidationEventHandler_t1731902491 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
