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

// GSN.Skill.Utils.GsnDebug
struct GsnDebug_t2592334923;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<System.Exception>
struct Action_1_t1729240069;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"
#include "AssemblyU2DCSharp_GSN_Skill_Utils_LogContext4282415095.h"

// System.Void GSN.Skill.Utils.GsnDebug::.cctor()
extern "C"  void GsnDebug__cctor_m3988557585 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::.ctor()
extern "C"  void GsnDebug__ctor_m154561940 (GsnDebug_t2592334923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Utils.GsnDebug::get_recentLogSize()
extern "C"  int32_t GsnDebug_get_recentLogSize_m3734056071 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_recentLogSize(System.Int32)
extern "C"  void GsnDebug_set_recentLogSize_m946091728 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::consolidate(System.Object[])
extern "C"  String_t* GsnDebug_consolidate_m2790280354 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::appendLogRange(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C"  void GsnDebug_appendLogRange_m2191871663 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___s0, int32_t ___start1, int32_t ___finish2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::addToRecentLog(System.String)
extern "C"  void GsnDebug_addToRecentLog_m3223671737 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::Log(System.Object[])
extern "C"  void GsnDebug_Log_m176833694 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::LogWarning(System.Object[])
extern "C"  void GsnDebug_LogWarning_m3707926860 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::LogError(System.Object[])
extern "C"  void GsnDebug_LogError_m2991840470 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::AddLog(System.Action`1<System.String>,System.Boolean)
extern "C"  void GsnDebug_AddLog_m735512246 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___f0, bool ___onlyIfNull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::RemoveLog(System.Action`1<System.String>)
extern "C"  void GsnDebug_RemoveLog_m1703585348 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::AddLogWarning(System.Action`1<System.String>,System.Boolean)
extern "C"  void GsnDebug_AddLogWarning_m1055474606 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___f0, bool ___onlyIfNull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::RemoveLogWarning(System.Action`1<System.String>)
extern "C"  void GsnDebug_RemoveLogWarning_m2117064226 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::AddLogError(System.Action`1<System.String>,System.Boolean)
extern "C"  void GsnDebug_AddLogError_m1106142380 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___f0, bool ___onlyIfNull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::RemoveLogError(System.Action`1<System.String>)
extern "C"  void GsnDebug_RemoveLogError_m3355438212 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::AddLogHandledException(System.Action`1<System.Exception>)
extern "C"  void GsnDebug_AddLogHandledException_m2093231304 (Il2CppObject * __this /* static, unused */, Action_1_t1729240069 * ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::LogHandledException(System.Exception)
extern "C"  void GsnDebug_LogHandledException_m1230807135 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Utils.LogContext GSN.Skill.Utils.GsnDebug::GetContext()
extern "C"  LogContext_t4282415095  GsnDebug_GetContext_m2428076769 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::SetContext(GSN.Skill.Utils.LogContext)
extern "C"  void GsnDebug_SetContext_m838021972 (Il2CppObject * __this /* static, unused */, LogContext_t4282415095  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_END_COLOR()
extern "C"  String_t* GsnDebug_get_END_COLOR_m3855378599 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_END_COLOR(System.String)
extern "C"  void GsnDebug_set_END_COLOR_m3917246100 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_COLOR_RED()
extern "C"  String_t* GsnDebug_get_COLOR_RED_m2070024935 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_COLOR_RED(System.String)
extern "C"  void GsnDebug_set_COLOR_RED_m2182068722 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_COLOR_GREEN()
extern "C"  String_t* GsnDebug_get_COLOR_GREEN_m897711767 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_COLOR_GREEN(System.String)
extern "C"  void GsnDebug_set_COLOR_GREEN_m679327774 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_COLOR_BLUE()
extern "C"  String_t* GsnDebug_get_COLOR_BLUE_m1880789278 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_COLOR_BLUE(System.String)
extern "C"  void GsnDebug_set_COLOR_BLUE_m768566261 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_COLOR_YELLOW()
extern "C"  String_t* GsnDebug_get_COLOR_YELLOW_m517809270 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_COLOR_YELLOW(System.String)
extern "C"  void GsnDebug_set_COLOR_YELLOW_m606886603 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_COLOR_CYAN()
extern "C"  String_t* GsnDebug_get_COLOR_CYAN_m3220897713 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_COLOR_CYAN(System.String)
extern "C"  void GsnDebug_set_COLOR_CYAN_m1965422454 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_COLOR_MAGENTA()
extern "C"  String_t* GsnDebug_get_COLOR_MAGENTA_m1605774389 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_COLOR_MAGENTA(System.String)
extern "C"  void GsnDebug_set_COLOR_MAGENTA_m1107298038 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_COLOR_ORANGE()
extern "C"  String_t* GsnDebug_get_COLOR_ORANGE_m3222409928 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_COLOR_ORANGE(System.String)
extern "C"  void GsnDebug_set_COLOR_ORANGE_m2233701059 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_COLOR_SPRING_GREEN()
extern "C"  String_t* GsnDebug_get_COLOR_SPRING_GREEN_m872801605 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_COLOR_SPRING_GREEN(System.String)
extern "C"  void GsnDebug_set_COLOR_SPRING_GREEN_m2227098348 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_COLOR_VIOLET()
extern "C"  String_t* GsnDebug_get_COLOR_VIOLET_m4119952813 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_COLOR_VIOLET(System.String)
extern "C"  void GsnDebug_set_COLOR_VIOLET_m1845159446 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_COLOR_CANARY()
extern "C"  String_t* GsnDebug_get_COLOR_CANARY_m2041523574 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_COLOR_CANARY(System.String)
extern "C"  void GsnDebug_set_COLOR_CANARY_m940328365 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_COLOR_ROYAL_BLUE()
extern "C"  String_t* GsnDebug_get_COLOR_ROYAL_BLUE_m3671571382 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_COLOR_ROYAL_BLUE(System.String)
extern "C"  void GsnDebug_set_COLOR_ROYAL_BLUE_m3930769807 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Utils.GsnDebug::get_COLOR_PINK()
extern "C"  String_t* GsnDebug_get_COLOR_PINK_m3812053262 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::set_COLOR_PINK(System.String)
extern "C"  void GsnDebug_set_COLOR_PINK_m4188797139 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::SetLightColors()
extern "C"  void GsnDebug_SetLightColors_m919313518 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::SetDarkColors()
extern "C"  void GsnDebug_SetDarkColors_m3011034320 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.GsnDebug::ShowColors()
extern "C"  void GsnDebug_ShowColors_m4195974743 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
