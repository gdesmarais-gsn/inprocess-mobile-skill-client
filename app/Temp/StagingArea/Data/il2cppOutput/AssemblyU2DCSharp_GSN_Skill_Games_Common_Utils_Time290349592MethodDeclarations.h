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

// GSN.Skill.Games.Common.Utils.TimeoutDispatcher
struct TimeoutDispatcher_t290349592;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;
// System.Object
struct Il2CppObject;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act1924202305.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Core_System_Action3226471752.h"

// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher::.ctor(GSN.Skill.Games.Common.Utils.ActionQueue)
extern "C"  void TimeoutDispatcher__ctor_m2068326086 (TimeoutDispatcher_t290349592 * __this, ActionQueue_t1924202305 * ___aq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.TimeoutDispatcher::get_Aborted()
extern "C"  bool TimeoutDispatcher_get_Aborted_m15251479 (TimeoutDispatcher_t290349592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher::set_Aborted(System.Boolean)
extern "C"  void TimeoutDispatcher_set_Aborted_m1880290052 (TimeoutDispatcher_t290349592 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.TimeoutDispatcher::get_Active()
extern "C"  bool TimeoutDispatcher_get_Active_m3790920908 (TimeoutDispatcher_t290349592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher::set_Active(System.Boolean)
extern "C"  void TimeoutDispatcher_set_Active_m831482907 (TimeoutDispatcher_t290349592 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.TimeoutDispatcher::get_Duration()
extern "C"  int32_t TimeoutDispatcher_get_Duration_m2483621778 (TimeoutDispatcher_t290349592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher::set_Duration(System.Int32)
extern "C"  void TimeoutDispatcher_set_Duration_m1589377923 (TimeoutDispatcher_t290349592 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher::killTimer()
extern "C"  void TimeoutDispatcher_killTimer_m3326803640 (TimeoutDispatcher_t290349592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher::Abort()
extern "C"  void TimeoutDispatcher_Abort_m3559257771 (TimeoutDispatcher_t290349592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher::timerCallback(System.Object)
extern "C"  void TimeoutDispatcher_timerCallback_m825104029 (TimeoutDispatcher_t290349592 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher::DispatchTimeout(System.Int32,System.Action)
extern "C"  void TimeoutDispatcher_DispatchTimeout_m3141415756 (TimeoutDispatcher_t290349592 * __this, int32_t ___duration0, Action_t3226471752 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.TimeoutDispatcher::.cctor()
extern "C"  void TimeoutDispatcher__cctor_m1421389752 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
