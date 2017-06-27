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

// GSN.Skill.Games.Common.Utils.GsnDebug
struct GsnDebug_t1785824881;
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
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Log1038996893.h"

// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::.cctor()
extern "C"  void GsnDebug__cctor_m1793171853 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::.ctor()
extern "C"  void GsnDebug__ctor_m1922493758 (GsnDebug_t1785824881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.GsnDebug::get_recentLogSize()
extern "C"  int32_t GsnDebug_get_recentLogSize_m3676965567 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_recentLogSize(System.Int32)
extern "C"  void GsnDebug_set_recentLogSize_m3246892330 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::consolidate(System.Object[])
extern "C"  String_t* GsnDebug_consolidate_m300819518 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::appendLogRange(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C"  void GsnDebug_appendLogRange_m2850176999 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___s0, int32_t ___start1, int32_t ___finish2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::UploadRecentLog(System.Boolean)
extern "C"  void GsnDebug_UploadRecentLog_m2933890349 (Il2CppObject * __this /* static, unused */, bool ___isError0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::maybeSendNetLogs()
extern "C"  void GsnDebug_maybeSendNetLogs_m3580898590 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.GsnDebug::get_NetLogging()
extern "C"  bool GsnDebug_get_NetLogging_m998404231 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_NetLogging(System.Boolean)
extern "C"  void GsnDebug_set_NetLogging_m3885991956 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::UploadRecentLog()
extern "C"  void GsnDebug_UploadRecentLog_m58725878 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::addToRecentLog(System.String)
extern "C"  void GsnDebug_addToRecentLog_m757055405 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::Log(System.Object[])
extern "C"  void GsnDebug_Log_m3044938852 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::LogWarning(System.Object[])
extern "C"  void GsnDebug_LogWarning_m1489817934 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::LogError(System.Object[])
extern "C"  void GsnDebug_LogError_m48688396 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::AddLog(System.Action`1<System.String>,System.Boolean)
extern "C"  void GsnDebug_AddLog_m3458829700 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___f0, bool ___onlyIfNull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::RemoveLog(System.Action`1<System.String>)
extern "C"  void GsnDebug_RemoveLog_m3273527206 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::AddLogWarning(System.Action`1<System.String>,System.Boolean)
extern "C"  void GsnDebug_AddLogWarning_m2540947172 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___f0, bool ___onlyIfNull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::RemoveLogWarning(System.Action`1<System.String>)
extern "C"  void GsnDebug_RemoveLogWarning_m1557190304 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::AddLogError(System.Action`1<System.String>,System.Boolean)
extern "C"  void GsnDebug_AddLogError_m2188783374 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___f0, bool ___onlyIfNull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::RemoveLogError(System.Action`1<System.String>)
extern "C"  void GsnDebug_RemoveLogError_m1579968678 (Il2CppObject * __this /* static, unused */, Action_1_t1831019615 * ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::AddLogHandledException(System.Action`1<System.Exception>)
extern "C"  void GsnDebug_AddLogHandledException_m1397246802 (Il2CppObject * __this /* static, unused */, Action_1_t1729240069 * ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::LogHandledException(System.Exception)
extern "C"  void GsnDebug_LogHandledException_m4268388663 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.LogContext GSN.Skill.Games.Common.Utils.GsnDebug::GetContext()
extern "C"  LogContext_t1038996893  GsnDebug_GetContext_m329083893 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::SetContext(GSN.Skill.Games.Common.Utils.LogContext)
extern "C"  void GsnDebug_SetContext_m2224006500 (Il2CppObject * __this /* static, unused */, LogContext_t1038996893  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_END_COLOR()
extern "C"  String_t* GsnDebug_get_END_COLOR_m2423647099 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_END_COLOR(System.String)
extern "C"  void GsnDebug_set_END_COLOR_m3892309190 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_COLOR_RED()
extern "C"  String_t* GsnDebug_get_COLOR_RED_m1849578619 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_COLOR_RED(System.String)
extern "C"  void GsnDebug_set_COLOR_RED_m684408344 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_COLOR_GREEN()
extern "C"  String_t* GsnDebug_get_COLOR_GREEN_m4013129435 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_COLOR_GREEN(System.String)
extern "C"  void GsnDebug_set_COLOR_GREEN_m375122028 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_COLOR_BLUE()
extern "C"  String_t* GsnDebug_get_COLOR_BLUE_m1246884622 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_COLOR_BLUE(System.String)
extern "C"  void GsnDebug_set_COLOR_BLUE_m492565857 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_COLOR_YELLOW()
extern "C"  String_t* GsnDebug_get_COLOR_YELLOW_m981817354 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_COLOR_YELLOW(System.String)
extern "C"  void GsnDebug_set_COLOR_YELLOW_m4246667675 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_COLOR_CYAN()
extern "C"  String_t* GsnDebug_get_COLOR_CYAN_m3748678729 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_COLOR_CYAN(System.String)
extern "C"  void GsnDebug_set_COLOR_CYAN_m2873822380 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_COLOR_MAGENTA()
extern "C"  String_t* GsnDebug_get_COLOR_MAGENTA_m3859314725 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_COLOR_MAGENTA(System.String)
extern "C"  void GsnDebug_set_COLOR_MAGENTA_m660395052 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_COLOR_ORANGE()
extern "C"  String_t* GsnDebug_get_COLOR_ORANGE_m3218290332 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_COLOR_ORANGE(System.String)
extern "C"  void GsnDebug_set_COLOR_ORANGE_m3853540155 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_COLOR_SPRING_GREEN()
extern "C"  String_t* GsnDebug_get_COLOR_SPRING_GREEN_m2063314325 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_COLOR_SPRING_GREEN(System.String)
extern "C"  void GsnDebug_set_COLOR_SPRING_GREEN_m3797715926 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_COLOR_VIOLET()
extern "C"  String_t* GsnDebug_get_COLOR_VIOLET_m3259038061 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_COLOR_VIOLET(System.String)
extern "C"  void GsnDebug_set_COLOR_VIOLET_m1162956700 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_COLOR_CANARY()
extern "C"  String_t* GsnDebug_get_COLOR_CANARY_m2209939670 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_COLOR_CANARY(System.String)
extern "C"  void GsnDebug_set_COLOR_CANARY_m1848526409 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_COLOR_ROYAL_BLUE()
extern "C"  String_t* GsnDebug_get_COLOR_ROYAL_BLUE_m1312066426 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_COLOR_ROYAL_BLUE(System.String)
extern "C"  void GsnDebug_set_COLOR_ROYAL_BLUE_m459596151 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GsnDebug::get_COLOR_PINK()
extern "C"  String_t* GsnDebug_get_COLOR_PINK_m3857324082 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::set_COLOR_PINK(System.String)
extern "C"  void GsnDebug_set_COLOR_PINK_m3321584915 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::SetLightColors()
extern "C"  void GsnDebug_SetLightColors_m2200842460 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::SetDarkColors()
extern "C"  void GsnDebug_SetDarkColors_m2854808610 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnDebug::ShowColors()
extern "C"  void GsnDebug_ShowColors_m4267557975 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
