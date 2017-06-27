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

// GSN.Skill.Games.Common.Utils.WebRequestJob/FatalChecker
struct FatalChecker_t1371496586;
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

// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob/FatalChecker::.ctor(System.Object,System.IntPtr)
extern "C"  void FatalChecker__ctor_m391555699 (FatalChecker_t1371496586 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.WebRequestJob/FatalChecker::Invoke(GSN.Skill.Games.Common.Utils.WebRequestDispatcher)
extern "C"  bool FatalChecker_Invoke_m2184144939 (FatalChecker_t1371496586 * __this, WebRequestDispatcher_t345378452 * ___dispatcher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Utils.WebRequestJob/FatalChecker::BeginInvoke(GSN.Skill.Games.Common.Utils.WebRequestDispatcher,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FatalChecker_BeginInvoke_m2787009566 (FatalChecker_t1371496586 * __this, WebRequestDispatcher_t345378452 * ___dispatcher0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.WebRequestJob/FatalChecker::EndInvoke(System.IAsyncResult)
extern "C"  bool FatalChecker_EndInvoke_m1291162297 (FatalChecker_t1371496586 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
