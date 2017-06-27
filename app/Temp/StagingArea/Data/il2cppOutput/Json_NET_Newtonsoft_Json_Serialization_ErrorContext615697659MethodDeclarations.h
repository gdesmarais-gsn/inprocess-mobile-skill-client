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

// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t615697659;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void Newtonsoft.Json.Serialization.ErrorContext::.ctor(System.Object,System.Object,System.Exception)
extern "C"  void ErrorContext__ctor_m3570535168 (ErrorContext_t615697659 * __this, Il2CppObject * ___originalObject0, Il2CppObject * ___member1, Exception_t1927440687 * ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Newtonsoft.Json.Serialization.ErrorContext::get_Error()
extern "C"  Exception_t1927440687 * ErrorContext_get_Error_m4148650906 (ErrorContext_t615697659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Error(System.Exception)
extern "C"  void ErrorContext_set_Error_m395754199 (ErrorContext_t615697659 * __this, Exception_t1927440687 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.ErrorContext::get_OriginalObject()
extern "C"  Il2CppObject * ErrorContext_get_OriginalObject_m4119090278 (ErrorContext_t615697659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_OriginalObject(System.Object)
extern "C"  void ErrorContext_set_OriginalObject_m2923449561 (ErrorContext_t615697659 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.ErrorContext::get_Member()
extern "C"  Il2CppObject * ErrorContext_get_Member_m846416952 (ErrorContext_t615697659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Member(System.Object)
extern "C"  void ErrorContext_set_Member_m1713643713 (ErrorContext_t615697659 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::get_Handled()
extern "C"  bool ErrorContext_get_Handled_m2160149433 (ErrorContext_t615697659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Handled(System.Boolean)
extern "C"  void ErrorContext_set_Handled_m553172198 (ErrorContext_t615697659 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
