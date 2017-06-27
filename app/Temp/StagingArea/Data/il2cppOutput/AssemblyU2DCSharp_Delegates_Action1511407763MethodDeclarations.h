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

// Delegates/Action
struct Action_t1511407763;
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

// System.Void Delegates/Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m577794166 (Action_t1511407763 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegates/Action::Invoke()
extern "C"  void Action_Invoke_m1732963004 (Action_t1511407763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Delegates/Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_BeginInvoke_m4183060413 (Action_t1511407763 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegates/Action::EndInvoke(System.IAsyncResult)
extern "C"  void Action_EndInvoke_m2133933628 (Action_t1511407763 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
