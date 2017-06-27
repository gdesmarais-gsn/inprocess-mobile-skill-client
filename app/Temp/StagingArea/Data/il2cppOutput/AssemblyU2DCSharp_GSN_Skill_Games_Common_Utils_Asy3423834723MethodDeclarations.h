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

// GSN.Skill.Games.Common.Utils.AsyncFunctionCaller
struct AsyncFunctionCaller_t3423834723;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;
// GSN.Skill.Games.Common.Utils.AsyncFunctionCaller/AsyncFunction
struct AsyncFunction_t2308364364;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act1924202305.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Asy2308364364.h"
#include "System_Core_System_Action3226471752.h"

// System.Void GSN.Skill.Games.Common.Utils.AsyncFunctionCaller::.ctor(GSN.Skill.Games.Common.Utils.ActionQueue)
extern "C"  void AsyncFunctionCaller__ctor_m521738409 (AsyncFunctionCaller_t3423834723 * __this, ActionQueue_t1924202305 * ___actionQueue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.AsyncFunctionCaller::Add(GSN.Skill.Games.Common.Utils.AsyncFunctionCaller/AsyncFunction)
extern "C"  void AsyncFunctionCaller_Add_m3550143281 (AsyncFunctionCaller_t3423834723 * __this, AsyncFunction_t2308364364 * ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.AsyncFunctionCaller::CallMore()
extern "C"  void AsyncFunctionCaller_CallMore_m3899875475 (AsyncFunctionCaller_t3423834723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.AsyncFunctionCaller::CallOne()
extern "C"  void AsyncFunctionCaller_CallOne_m3781646350 (AsyncFunctionCaller_t3423834723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.AsyncFunctionCaller::CallAll(System.Action)
extern "C"  void AsyncFunctionCaller_CallAll_m838234564 (AsyncFunctionCaller_t3423834723 * __this, Action_t3226471752 * ___doneAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
