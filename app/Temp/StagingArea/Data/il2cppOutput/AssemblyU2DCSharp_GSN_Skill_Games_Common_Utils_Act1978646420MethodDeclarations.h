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

// GSN.Skill.Games.Common.Utils.ActionQueueIdleChecker
struct ActionQueueIdleChecker_t1978646420;
// System.Action
struct Action_t3226471752;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void GSN.Skill.Games.Common.Utils.ActionQueueIdleChecker::.ctor()
extern "C"  void ActionQueueIdleChecker__ctor_m3399053603 (ActionQueueIdleChecker_t1978646420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueueIdleChecker::Start(System.Int32,System.Action)
extern "C"  void ActionQueueIdleChecker_Start_m676211551 (ActionQueueIdleChecker_t1978646420 * __this, int32_t ___seconds0, Action_t3226471752 * ___cb1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueueIdleChecker::timerCallback(System.Object)
extern "C"  void ActionQueueIdleChecker_timerCallback_m946884867 (ActionQueueIdleChecker_t1978646420 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
