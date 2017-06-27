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

// System.TimeZoneInfo
struct TimeZoneInfo_t436210607;
// System.String
struct String_t;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t2338614759;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_DateTime693205669.h"
#include "System_Core_System_TimeZoneInfo436210607.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.TimeZoneInfo::.cctor()
extern "C"  void TimeZoneInfo__cctor_m483632682 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZoneInfo::get_BaseUtcOffset()
extern "C"  TimeSpan_t3430258949  TimeZoneInfo_get_BaseUtcOffset_m2074358475 (TimeZoneInfo_t436210607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_DisplayName()
extern "C"  String_t* TimeZoneInfo_get_DisplayName_m1320862476 (TimeZoneInfo_t436210607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_Id()
extern "C"  String_t* TimeZoneInfo_get_Id_m4230955224 (TimeZoneInfo_t436210607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZoneInfo::ConvertTimeToUtc(System.DateTime)
extern "C"  DateTime_t693205669  TimeZoneInfo_ConvertTimeToUtc_m1561837105 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::Equals(System.TimeZoneInfo)
extern "C"  bool TimeZoneInfo_Equals_m1278385776 (TimeZoneInfo_t436210607 * __this, TimeZoneInfo_t436210607 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::GetAdjustmentRules()
extern "C"  AdjustmentRuleU5BU5D_t2338614759* TimeZoneInfo_GetAdjustmentRules_m2902716878 (TimeZoneInfo_t436210607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo::GetHashCode()
extern "C"  int32_t TimeZoneInfo_GetHashCode_m2527234624 (TimeZoneInfo_t436210607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TimeZoneInfo_GetObjectData_m277127693 (TimeZoneInfo_t436210607 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::HasSameRules(System.TimeZoneInfo)
extern "C"  bool TimeZoneInfo_HasSameRules_m258175028 (TimeZoneInfo_t436210607 * __this, TimeZoneInfo_t436210607 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo::OnDeserialization(System.Object)
extern "C"  void TimeZoneInfo_OnDeserialization_m3598190737 (TimeZoneInfo_t436210607 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::ToString()
extern "C"  String_t* TimeZoneInfo_ToString_m2552375480 (TimeZoneInfo_t436210607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
