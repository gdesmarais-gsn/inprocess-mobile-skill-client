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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_DateTime693205669.h"

// System.TimeSpan Newtonsoft.Json.Utilities.DateTimeUtils::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t3430258949  DateTimeUtils_GetUtcOffset_m2932391425 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.DateTimeUtils::GetLocalOffset(System.DateTime)
extern "C"  String_t* DateTimeUtils_GetLocalOffset_m349400590 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToLocalTime(System.DateTime)
extern "C"  DateTime_t693205669  DateTimeUtils_SwitchToLocalTime_m3514126449 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToUtcTime(System.DateTime)
extern "C"  DateTime_t693205669  DateTimeUtils_SwitchToUtcTime_m1885005792 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m1134226606 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m958664634 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, TimeSpan_t3430258949  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m52666072 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, TimeSpan_t3430258949  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m3355457252 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m473797939 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, bool ___convertToUtc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::UniversialTicksToJavaScriptTicks(System.Int64)
extern "C"  int64_t DateTimeUtils_UniversialTicksToJavaScriptTicks_m397345684 (Il2CppObject * __this /* static, unused */, int64_t ___universialTicks0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::ConvertJavaScriptTicksToDateTime(System.Int64)
extern "C"  DateTime_t693205669  DateTimeUtils_ConvertJavaScriptTicksToDateTime_m2282985994 (Il2CppObject * __this /* static, unused */, int64_t ___javaScriptTicks0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::.cctor()
extern "C"  void DateTimeUtils__cctor_m2706151258 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
