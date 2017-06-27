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

// GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy
struct ActionProxy_t486097841;
// GSN.Skill.Games.Common.Utils.TimeoutDispatcher
struct TimeoutDispatcher_t290349592;
// System.Action
struct Action_t3226471752;
// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Time290349592.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act4252928663.h"

// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy::.ctor()
extern "C"  void ActionProxy__ctor_m4070414426 (ActionProxy_t486097841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy::Init(GSN.Skill.Games.Common.Utils.TimeoutDispatcher,System.Action,GSN.Skill.Games.Common.Utils.ActionContext,System.Int32)
extern "C"  void ActionProxy_Init_m3498547059 (ActionProxy_t486097841 * __this, TimeoutDispatcher_t290349592 * ___user0, Action_t3226471752 * ___action1, ActionContext_t4252928663 * ___actionContext2, int32_t ___id3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy::Reconstruct()
extern "C"  void ActionProxy_Reconstruct_m3044718480 (ActionProxy_t486097841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy::QueueIt()
extern "C"  void ActionProxy_QueueIt_m781660828 (ActionProxy_t486097841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy::callFromAbort()
extern "C"  void ActionProxy_callFromAbort_m2239115068 (ActionProxy_t486097841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy::callFromQueue()
extern "C"  void ActionProxy_callFromQueue_m3869640165 (ActionProxy_t486097841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher/ActionProxy::callAction(System.Boolean)
extern "C"  void ActionProxy_callAction_m3590831275 (ActionProxy_t486097841 * __this, bool ___fromQueue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
