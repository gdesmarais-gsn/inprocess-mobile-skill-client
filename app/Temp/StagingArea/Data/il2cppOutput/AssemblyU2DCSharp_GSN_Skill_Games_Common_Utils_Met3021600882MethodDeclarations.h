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

// GSN.Skill.Games.Common.Utils.MetricTracker
struct MetricTracker_t3021600882;
// System.String
struct String_t;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>>
struct List_1_t1593889629;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"

// System.Void GSN.Skill.Games.Common.Utils.MetricTracker::.ctor()
extern "C"  void MetricTracker__ctor_m912350449 (MetricTracker_t3021600882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.MetricTracker::Add(System.String,Newtonsoft.Json.Linq.JToken)
extern "C"  void MetricTracker_Add_m4291522570 (MetricTracker_t3021600882 * __this, String_t* ___key0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.MetricTracker::Dispatch()
extern "C"  void MetricTracker_Dispatch_m1215223453 (MetricTracker_t3021600882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>> GSN.Skill.Games.Common.Utils.MetricTracker::get_Stream()
extern "C"  List_1_t1593889629 * MetricTracker_get_Stream_m1009575284 (MetricTracker_t3021600882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
