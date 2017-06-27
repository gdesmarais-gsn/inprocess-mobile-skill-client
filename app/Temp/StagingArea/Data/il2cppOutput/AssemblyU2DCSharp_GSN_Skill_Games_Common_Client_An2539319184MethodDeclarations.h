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

// GSN.Skill.Games.Common.Client.AnalyticSender
struct AnalyticSender_t2539319184;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Client.AnalyticSender::.ctor(System.Action`1<System.String>)
extern "C"  void AnalyticSender__ctor_m619425709 (AnalyticSender_t2539319184 * __this, Action_1_t1831019615 * ___logFunction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.AnalyticSender::SendAnalytic(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnalyticSender_SendAnalytic_m4276358876 (AnalyticSender_t2539319184 * __this, String_t* ___type0, Dictionary_2_t309261261 * ___attributes1, Dictionary_2_t309261261 * ___other2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
