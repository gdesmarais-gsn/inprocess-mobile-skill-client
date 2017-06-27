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

// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act4252928663.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act1924202305.h"

// System.Void GSN.Skill.Games.Common.Utils.ActionContext::.ctor()
extern "C"  void ActionContext__ctor_m4193402208 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.ActionContext::get_name()
extern "C"  String_t* ActionContext_get_name_m2707867715 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::set_name(System.String)
extern "C"  void ActionContext_set_name_m2377911594 (ActionContext_t4252928663 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.ActionContext::get_parent()
extern "C"  ActionContext_t4252928663 * ActionContext_get_parent_m1018752725 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::set_parent(GSN.Skill.Games.Common.Utils.ActionContext)
extern "C"  void ActionContext_set_parent_m421110392 (ActionContext_t4252928663 * __this, ActionContext_t4252928663 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action GSN.Skill.Games.Common.Utils.ActionContext::get_eHandler()
extern "C"  Action_t3226471752 * ActionContext_get_eHandler_m3379796174 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::set_eHandler(System.Action)
extern "C"  void ActionContext_set_eHandler_m4129326245 (ActionContext_t4252928663 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action GSN.Skill.Games.Common.Utils.ActionContext::get_doneAction()
extern "C"  Action_t3226471752 * ActionContext_get_doneAction_m4172075145 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::set_doneAction(System.Action)
extern "C"  void ActionContext_set_doneAction_m3018752108 (ActionContext_t4252928663 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::removeDoneAction()
extern "C"  void ActionContext_removeDoneAction_m3936653444 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.ActionContext::get_id()
extern "C"  int32_t ActionContext_get_id_m3017632624 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::set_id(System.Int32)
extern "C"  void ActionContext_set_id_m3308301113 (ActionContext_t4252928663 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.ActionContext::get_inPool()
extern "C"  bool ActionContext_get_inPool_m272872544 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::set_inPool(System.Boolean)
extern "C"  void ActionContext_set_inPool_m3179904037 (ActionContext_t4252928663 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.ActionContext::get_active()
extern "C"  bool ActionContext_get_active_m1331257269 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::set_active(System.Boolean)
extern "C"  void ActionContext_set_active_m2508398428 (ActionContext_t4252928663 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.ActionContext::get_refCount()
extern "C"  int32_t ActionContext_get_refCount_m2612332669 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::set_refCount(System.Int32)
extern "C"  void ActionContext_set_refCount_m2306406230 (ActionContext_t4252928663 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.ActionContext::get_hasRefs()
extern "C"  bool ActionContext_get_hasRefs_m450990169 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.ActionContext::get_LoggingEnabled()
extern "C"  bool ActionContext_get_LoggingEnabled_m3344660603 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::SetLogging(System.Boolean,System.UInt32)
extern "C"  void ActionContext_SetLogging_m1225149190 (ActionContext_t4252928663 * __this, bool ___enabled0, uint32_t ___prefStrength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.ActionContext::AddRef()
extern "C"  ActionContext_t4252928663 * ActionContext_AddRef_m1655755074 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::RemoveRef()
extern "C"  void ActionContext_RemoveRef_m2536706519 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.ActionContext::_deactivate()
extern "C"  ActionContext_t4252928663 * ActionContext__deactivate_m4020675259 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::Reconstruct()
extern "C"  void ActionContext_Reconstruct_m2549016746 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::TryRecycle()
extern "C"  void ActionContext_TryRecycle_m2034561372 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionContext::Initialize(GSN.Skill.Games.Common.Utils.ActionQueue,System.String,System.Int32,System.Action,System.Action,GSN.Skill.Games.Common.Utils.ActionContext,System.String)
extern "C"  void ActionContext_Initialize_m3641837391 (ActionContext_t4252928663 * __this, ActionQueue_t1924202305 * ___actionQueue0, String_t* ___name1, int32_t ___id2, Action_t3226471752 * ___eHandler3, Action_t3226471752 * ___doneAction4, ActionContext_t4252928663 * ___parent5, String_t* ___note6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.ActionContext::In(GSN.Skill.Games.Common.Utils.ActionContext)
extern "C"  bool ActionContext_In_m3875738240 (ActionContext_t4252928663 * __this, ActionContext_t4252928663 * ___acSought0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.ActionContext::get_Trace()
extern "C"  String_t* ActionContext_get_Trace_m3458292909 (ActionContext_t4252928663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
