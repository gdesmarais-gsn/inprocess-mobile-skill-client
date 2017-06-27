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

// GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>
struct BaseAnalytics_1_t4154339586;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>::.ctor(System.Action`1<System.String>)
extern "C"  void BaseAnalytics_1__ctor_m1938020125_gshared (BaseAnalytics_1_t4154339586 * __this, Action_1_t1831019615 * ___logFunction0, const MethodInfo* method);
#define BaseAnalytics_1__ctor_m1938020125(__this, ___logFunction0, method) ((  void (*) (BaseAnalytics_1_t4154339586 *, Action_1_t1831019615 *, const MethodInfo*))BaseAnalytics_1__ctor_m1938020125_gshared)(__this, ___logFunction0, method)
// T GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>::get_instance()
extern "C"  Il2CppObject * BaseAnalytics_1_get_instance_m3337768240_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define BaseAnalytics_1_get_instance_m3337768240(__this /* static, unused */, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))BaseAnalytics_1_get_instance_m3337768240_gshared)(__this /* static, unused */, method)
// System.Void GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>::ReportGameStart(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void BaseAnalytics_1_ReportGameStart_m2161729504_gshared (BaseAnalytics_1_t4154339586 * __this, String_t* ___reason0, Dictionary_2_t309261261 * ___other1, const MethodInfo* method);
#define BaseAnalytics_1_ReportGameStart_m2161729504(__this, ___reason0, ___other1, method) ((  void (*) (BaseAnalytics_1_t4154339586 *, String_t*, Dictionary_2_t309261261 *, const MethodInfo*))BaseAnalytics_1_ReportGameStart_m2161729504_gshared)(__this, ___reason0, ___other1, method)
// System.Void GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>::ReportCheckpoint(System.String,System.String,System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void BaseAnalytics_1_ReportCheckpoint_m598339439_gshared (BaseAnalytics_1_t4154339586 * __this, String_t* ___category0, String_t* ___subcategory1, int32_t ___step2, Dictionary_2_t309261261 * ___other3, const MethodInfo* method);
#define BaseAnalytics_1_ReportCheckpoint_m598339439(__this, ___category0, ___subcategory1, ___step2, ___other3, method) ((  void (*) (BaseAnalytics_1_t4154339586 *, String_t*, String_t*, int32_t, Dictionary_2_t309261261 *, const MethodInfo*))BaseAnalytics_1_ReportCheckpoint_m598339439_gshared)(__this, ___category0, ___subcategory1, ___step2, ___other3, method)
// System.Void GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>::ReportGameEnd(System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void BaseAnalytics_1_ReportGameEnd_m818799201_gshared (BaseAnalytics_1_t4154339586 * __this, int32_t ___endReason0, int32_t ___totalScore1, Dictionary_2_t309261261 * ___other2, const MethodInfo* method);
#define BaseAnalytics_1_ReportGameEnd_m818799201(__this, ___endReason0, ___totalScore1, ___other2, method) ((  void (*) (BaseAnalytics_1_t4154339586 *, int32_t, int32_t, Dictionary_2_t309261261 *, const MethodInfo*))BaseAnalytics_1_ReportGameEnd_m818799201_gshared)(__this, ___endReason0, ___totalScore1, ___other2, method)
// System.Void GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>::ReportStartScreenLoad(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void BaseAnalytics_1_ReportStartScreenLoad_m2042458950_gshared (BaseAnalytics_1_t4154339586 * __this, Dictionary_2_t309261261 * ___other0, const MethodInfo* method);
#define BaseAnalytics_1_ReportStartScreenLoad_m2042458950(__this, ___other0, method) ((  void (*) (BaseAnalytics_1_t4154339586 *, Dictionary_2_t309261261 *, const MethodInfo*))BaseAnalytics_1_ReportStartScreenLoad_m2042458950_gshared)(__this, ___other0, method)
// System.Void GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>::ReportStartScreenExit(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void BaseAnalytics_1_ReportStartScreenExit_m1395577642_gshared (BaseAnalytics_1_t4154339586 * __this, Dictionary_2_t309261261 * ___other0, const MethodInfo* method);
#define BaseAnalytics_1_ReportStartScreenExit_m1395577642(__this, ___other0, method) ((  void (*) (BaseAnalytics_1_t4154339586 *, Dictionary_2_t309261261 *, const MethodInfo*))BaseAnalytics_1_ReportStartScreenExit_m1395577642_gshared)(__this, ___other0, method)
// System.Void GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>::ReportLevelStart(System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void BaseAnalytics_1_ReportLevelStart_m2133013291_gshared (BaseAnalytics_1_t4154339586 * __this, int32_t ___levelID0, Dictionary_2_t309261261 * ___other1, const MethodInfo* method);
#define BaseAnalytics_1_ReportLevelStart_m2133013291(__this, ___levelID0, ___other1, method) ((  void (*) (BaseAnalytics_1_t4154339586 *, int32_t, Dictionary_2_t309261261 *, const MethodInfo*))BaseAnalytics_1_ReportLevelStart_m2133013291_gshared)(__this, ___levelID0, ___other1, method)
// System.Void GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>::ReportLevelEnd(System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void BaseAnalytics_1_ReportLevelEnd_m2010517981_gshared (BaseAnalytics_1_t4154339586 * __this, int32_t ___endReason0, int32_t ___totalScore1, Dictionary_2_t309261261 * ___other2, const MethodInfo* method);
#define BaseAnalytics_1_ReportLevelEnd_m2010517981(__this, ___endReason0, ___totalScore1, ___other2, method) ((  void (*) (BaseAnalytics_1_t4154339586 *, int32_t, int32_t, Dictionary_2_t309261261 *, const MethodInfo*))BaseAnalytics_1_ReportLevelEnd_m2010517981_gshared)(__this, ___endReason0, ___totalScore1, ___other2, method)
// System.Void GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>::ReportGameplayEvvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void BaseAnalytics_1_ReportGameplayEvvent_m3654925878_gshared (BaseAnalytics_1_t4154339586 * __this, String_t* ___subtype0, Dictionary_2_t309261261 * ___other1, const MethodInfo* method);
#define BaseAnalytics_1_ReportGameplayEvvent_m3654925878(__this, ___subtype0, ___other1, method) ((  void (*) (BaseAnalytics_1_t4154339586 *, String_t*, Dictionary_2_t309261261 *, const MethodInfo*))BaseAnalytics_1_ReportGameplayEvvent_m3654925878_gshared)(__this, ___subtype0, ___other1, method)
// System.Void GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>::ReportUserGameSettings(System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void BaseAnalytics_1_ReportUserGameSettings_m47551678_gshared (BaseAnalytics_1_t4154339586 * __this, String_t* ___type0, String_t* ___from1, String_t* ___to2, Dictionary_2_t309261261 * ___other3, const MethodInfo* method);
#define BaseAnalytics_1_ReportUserGameSettings_m47551678(__this, ___type0, ___from1, ___to2, ___other3, method) ((  void (*) (BaseAnalytics_1_t4154339586 *, String_t*, String_t*, String_t*, Dictionary_2_t309261261 *, const MethodInfo*))BaseAnalytics_1_ReportUserGameSettings_m47551678_gshared)(__this, ___type0, ___from1, ___to2, ___other3, method)
// System.Void GSN.Skill.Games.Common.Client.BaseAnalytics`1<System.Object>::ReportTabSelected(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void BaseAnalytics_1_ReportTabSelected_m1996739720_gshared (BaseAnalytics_1_t4154339586 * __this, String_t* ___from0, String_t* ___to1, Dictionary_2_t309261261 * ___other2, const MethodInfo* method);
#define BaseAnalytics_1_ReportTabSelected_m1996739720(__this, ___from0, ___to1, ___other2, method) ((  void (*) (BaseAnalytics_1_t4154339586 *, String_t*, String_t*, Dictionary_2_t309261261 *, const MethodInfo*))BaseAnalytics_1_ReportTabSelected_m1996739720_gshared)(__this, ___from0, ___to1, ___other2, method)
