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

// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t746807584;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t2823857299;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C"  void ListMatchRequest__ctor_m3255499916 (ListMatchRequest_t746807584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C"  int32_t ListMatchRequest_get_pageSize_m2871494881 (ListMatchRequest_t746807584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C"  void ListMatchRequest_set_pageSize_m3790906912 (ListMatchRequest_t746807584 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C"  int32_t ListMatchRequest_get_pageNum_m2224383554 (ListMatchRequest_t746807584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C"  void ListMatchRequest_set_pageNum_m365156805 (ListMatchRequest_t746807584 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C"  String_t* ListMatchRequest_get_nameFilter_m1025621407 (ListMatchRequest_t746807584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C"  void ListMatchRequest_set_nameFilter_m4090797564 (ListMatchRequest_t746807584 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::get_filterOutPrivateMatches()
extern "C"  bool ListMatchRequest_get_filterOutPrivateMatches_m2540556391 (ListMatchRequest_t746807584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_filterOutPrivateMatches(System.Boolean)
extern "C"  void ListMatchRequest_set_filterOutPrivateMatches_m795690652 (ListMatchRequest_t746807584 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_eloScore()
extern "C"  int32_t ListMatchRequest_get_eloScore_m385640357 (ListMatchRequest_t746807584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_eloScore(System.Int32)
extern "C"  void ListMatchRequest_set_eloScore_m1992166202 (ListMatchRequest_t746807584 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C"  Dictionary_2_t2823857299 * ListMatchRequest_get_matchAttributeFilterLessThan_m2905103878 (ListMatchRequest_t746807584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterEqualTo()
extern "C"  Dictionary_2_t2823857299 * ListMatchRequest_get_matchAttributeFilterEqualTo_m4190190529 (ListMatchRequest_t746807584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C"  Dictionary_2_t2823857299 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m1044018087 (ListMatchRequest_t746807584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern "C"  String_t* ListMatchRequest_ToString_m2983508271 (ListMatchRequest_t746807584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
