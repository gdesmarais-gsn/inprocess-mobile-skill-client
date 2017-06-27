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

// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;
// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.ActionContext>
struct List_1_t3622049795;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act4252928663.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::.ctor()
extern "C"  void ActionQueue__ctor_m2455043128 (ActionQueue_t1924202305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::rootEHandler()
extern "C"  void ActionQueue_rootEHandler_m3940118825 (ActionQueue_t1924202305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.ActionQueue::get_RootActionContext()
extern "C"  ActionContext_t4252928663 * ActionQueue_get_RootActionContext_m1084903710 (ActionQueue_t1924202305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::set_RootActionContext(GSN.Skill.Games.Common.Utils.ActionContext)
extern "C"  void ActionQueue_set_RootActionContext_m3826095439 (ActionQueue_t1924202305 * __this, ActionContext_t4252928663 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.ActionQueue::get_AtRootContext()
extern "C"  bool ActionQueue_get_AtRootContext_m2480778111 (ActionQueue_t1924202305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::RecycleContext(GSN.Skill.Games.Common.Utils.ActionContext)
extern "C"  void ActionQueue_RecycleContext_m1353991425 (ActionQueue_t1924202305 * __this, ActionContext_t4252928663 * ___actionContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.ActionQueue::NewContext(System.String,System.Int32,System.Action,System.Action,GSN.Skill.Games.Common.Utils.ActionContext,System.String)
extern "C"  ActionContext_t4252928663 * ActionQueue_NewContext_m3792898079 (ActionQueue_t1924202305 * __this, String_t* ___name0, int32_t ___id1, Action_t3226471752 * ___eHandler2, Action_t3226471752 * ___doneAction3, ActionContext_t4252928663 * ___parent4, String_t* ___note5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::CallActionInContext(System.Action,GSN.Skill.Games.Common.Utils.ActionContext)
extern "C"  void ActionQueue_CallActionInContext_m3360888932 (ActionQueue_t1924202305 * __this, Action_t3226471752 * ___a0, ActionContext_t4252928663 * ___ac1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::BeginContext(System.String,System.Int32,System.Action,System.Action,System.Action,GSN.Skill.Games.Common.Utils.ActionContext,System.String)
extern "C"  void ActionQueue_BeginContext_m2356830681 (ActionQueue_t1924202305 * __this, String_t* ___name0, int32_t ___id1, Action_t3226471752 * ___a2, Action_t3226471752 * ___eHandler3, Action_t3226471752 * ___doneAction4, ActionContext_t4252928663 * ___parent5, String_t* ___note6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::EndContext(GSN.Skill.Games.Common.Utils.ActionContext)
extern "C"  void ActionQueue_EndContext_m4068461645 (ActionQueue_t1924202305 * __this, ActionContext_t4252928663 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::EndContext()
extern "C"  void ActionQueue_EndContext_m962037646 (ActionQueue_t1924202305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::QueueActionWithoutAddRef(System.Action,GSN.Skill.Games.Common.Utils.ActionContext,System.Boolean)
extern "C"  void ActionQueue_QueueActionWithoutAddRef_m1912920292 (ActionQueue_t1924202305 * __this, Action_t3226471752 * ___a0, ActionContext_t4252928663 * ___c1, bool ___allowDupes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.ActionQueue::get_StatusText()
extern "C"  String_t* ActionQueue_get_StatusText_m3649965543 (ActionQueue_t1924202305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::getTraces(System.Text.StringBuilder,System.Collections.Generic.List`1<GSN.Skill.Games.Common.Utils.ActionContext>)
extern "C"  void ActionQueue_getTraces_m3621241355 (ActionQueue_t1924202305 * __this, StringBuilder_t1221177846 * ___sb0, List_1_t3622049795 * ___l1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::QueueAction(System.Action,GSN.Skill.Games.Common.Utils.ActionContext,System.Boolean)
extern "C"  void ActionQueue_QueueAction_m2251539640 (ActionQueue_t1924202305 * __this, Action_t3226471752 * ___a0, ActionContext_t4252928663 * ___actionContext1, bool ___allowDupes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::AssertContext(GSN.Skill.Games.Common.Utils.ActionContext)
extern "C"  void ActionQueue_AssertContext_m3483353726 (ActionQueue_t1924202305 * __this, ActionContext_t4252928663 * ___ac0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.ActionQueue::InSubContextOf(GSN.Skill.Games.Common.Utils.ActionContext)
extern "C"  bool ActionQueue_InSubContextOf_m1428476000 (ActionQueue_t1924202305 * __this, ActionContext_t4252928663 * ___acSought0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::AssertContext(System.String,System.Int32)
extern "C"  void ActionQueue_AssertContext_m3618136452 (ActionQueue_t1924202305 * __this, String_t* ___name0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.ActionQueue::get_Context()
extern "C"  ActionContext_t4252928663 * ActionQueue_get_Context_m88484036 (ActionQueue_t1924202305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::set_Context(GSN.Skill.Games.Common.Utils.ActionContext)
extern "C"  void ActionQueue_set_Context_m634589507 (ActionQueue_t1924202305 * __this, ActionContext_t4252928663 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::Process()
extern "C"  void ActionQueue_Process_m1171916249 (ActionQueue_t1924202305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.ActionQueue::get_ExceptionMessage()
extern "C"  String_t* ActionQueue_get_ExceptionMessage_m1901173402 (ActionQueue_t1924202305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::set_ExceptionMessage(System.String)
extern "C"  void ActionQueue_set_ExceptionMessage_m4032633313 (ActionQueue_t1924202305 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::BubbleException()
extern "C"  void ActionQueue_BubbleException_m227257235 (ActionQueue_t1924202305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::HandleException(System.Exception,System.String,System.String)
extern "C"  void ActionQueue_HandleException_m1147153487 (ActionQueue_t1924202305 * __this, Exception_t1927440687 * ___e0, String_t* ___message1, String_t* ___trace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::DoNothing()
extern "C"  void ActionQueue_DoNothing_m1106234782 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::DumpCurrentWrapper()
extern "C"  void ActionQueue_DumpCurrentWrapper_m4048516508 (ActionQueue_t1924202305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::StopPumpingFrames()
extern "C"  void ActionQueue_StopPumpingFrames_m2542970076 (ActionQueue_t1924202305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.ActionQueue::PumpFrames(System.Int32)
extern "C"  void ActionQueue_PumpFrames_m1883718613 (ActionQueue_t1924202305 * __this, int32_t ___frameDuration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
