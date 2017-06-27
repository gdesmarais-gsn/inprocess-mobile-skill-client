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

// GSN.Skill.Games.Common.Utils.WebRequestJob/FailChecker
struct FailChecker_t651280870;
// System.Object
struct Il2CppObject;
// GSN.Skill.Games.Common.Utils.WebRequestDispatcher
struct WebRequestDispatcher_t345378452;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_WebR345378452.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob/FailChecker::.ctor(System.Object,System.IntPtr)
extern "C"  void FailChecker__ctor_m3677631451 (FailChecker_t651280870 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.WebRequestJob/FailChecker::Invoke(GSN.Skill.Games.Common.Utils.WebRequestDispatcher)
extern "C"  bool FailChecker_Invoke_m14507539 (FailChecker_t651280870 * __this, WebRequestDispatcher_t345378452 * ___dispatcher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Utils.WebRequestJob/FailChecker::BeginInvoke(GSN.Skill.Games.Common.Utils.WebRequestDispatcher,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FailChecker_BeginInvoke_m4292253434 (FailChecker_t651280870 * __this, WebRequestDispatcher_t345378452 * ___dispatcher0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.WebRequestJob/FailChecker::EndInvoke(System.IAsyncResult)
extern "C"  bool FailChecker_EndInvoke_m1972376133 (FailChecker_t651280870 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
