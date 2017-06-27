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

// Newtonsoft.Json.Serialization.ErrorEventArgs
struct ErrorEventArgs_t3365615597;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t615697659;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_Serialization_ErrorContext615697659.h"

// System.Void Newtonsoft.Json.Serialization.ErrorEventArgs::.ctor(System.Object,Newtonsoft.Json.Serialization.ErrorContext)
extern "C"  void ErrorEventArgs__ctor_m3688168920 (ErrorEventArgs_t3365615597 * __this, Il2CppObject * ___currentObject0, ErrorContext_t615697659 * ___errorContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.ErrorEventArgs::get_CurrentObject()
extern "C"  Il2CppObject * ErrorEventArgs_get_CurrentObject_m2655664824 (ErrorEventArgs_t3365615597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorEventArgs::set_CurrentObject(System.Object)
extern "C"  void ErrorEventArgs_set_CurrentObject_m1418333313 (ErrorEventArgs_t3365615597 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.ErrorContext Newtonsoft.Json.Serialization.ErrorEventArgs::get_ErrorContext()
extern "C"  ErrorContext_t615697659 * ErrorEventArgs_get_ErrorContext_m944074323 (ErrorEventArgs_t3365615597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorEventArgs::set_ErrorContext(Newtonsoft.Json.Serialization.ErrorContext)
extern "C"  void ErrorEventArgs_set_ErrorContext_m2981786716 (ErrorEventArgs_t3365615597 * __this, ErrorContext_t615697659 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
