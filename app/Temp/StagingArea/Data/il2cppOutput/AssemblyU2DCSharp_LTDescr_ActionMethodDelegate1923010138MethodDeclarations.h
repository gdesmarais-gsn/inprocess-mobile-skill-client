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

// LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_t1923010138;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void LTDescr/ActionMethodDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ActionMethodDelegate__ctor_m129226817 (ActionMethodDelegate_t1923010138 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr/ActionMethodDelegate::Invoke()
extern "C"  void ActionMethodDelegate_Invoke_m931791577 (ActionMethodDelegate_t1923010138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LTDescr/ActionMethodDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ActionMethodDelegate_BeginInvoke_m748831104 (ActionMethodDelegate_t1923010138 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr/ActionMethodDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ActionMethodDelegate_EndInvoke_m658915231 (ActionMethodDelegate_t1923010138 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
