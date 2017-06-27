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

// Newtonsoft.Json.Utilities.StringUtils/ActionLine
struct ActionLine_t3198721076;
// System.Object
struct Il2CppObject;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Newtonsoft.Json.Utilities.StringUtils/ActionLine::.ctor(System.Object,System.IntPtr)
extern "C"  void ActionLine__ctor_m3494032656 (ActionLine_t3198721076 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils/ActionLine::Invoke(System.IO.TextWriter,System.String)
extern "C"  void ActionLine_Invoke_m1814932027 (ActionLine_t3198721076 * __this, TextWriter_t4027217640 * ___textWriter0, String_t* ___line1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Newtonsoft.Json.Utilities.StringUtils/ActionLine::BeginInvoke(System.IO.TextWriter,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ActionLine_BeginInvoke_m46159748 (ActionLine_t3198721076 * __this, TextWriter_t4027217640 * ___textWriter0, String_t* ___line1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils/ActionLine::EndInvoke(System.IAsyncResult)
extern "C"  void ActionLine_EndInvoke_m1340731994 (ActionLine_t3198721076 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
