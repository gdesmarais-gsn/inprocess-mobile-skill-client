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

// System.Func`2<System.Object,System.Object>
struct Func_2_t2825504181;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;

#include "codegen/il2cpp-codegen.h"
#include "Json_NET_Newtonsoft_Json_Utilities_ConvertUtils_Ty1788482786.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_System_ComponentModel_TypeConverter745995970.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"

// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ConvertUtils::CreateCastConverter(Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey)
extern "C"  Func_2_t2825504181 * ConvertUtils_CreateCastConverter_m1845668242 (Il2CppObject * __this /* static, unused */, TypeConvertKey_t1788482786  ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::CanConvertType(System.Type,System.Type,System.Boolean)
extern "C"  bool ConvertUtils_CanConvertType_m2592041761 (Il2CppObject * __this /* static, unused */, Type_t * ___initialType0, Type_t * ___targetType1, bool ___allowTypeNameToString2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::IsComponentConverter(System.ComponentModel.TypeConverter)
extern "C"  bool ConvertUtils_IsComponentConverter_m3201781469 (Il2CppObject * __this /* static, unused */, TypeConverter_t745995970 * ___converter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ConvertUtils::Convert(System.Object,System.Globalization.CultureInfo,System.Type)
extern "C"  Il2CppObject * ConvertUtils_Convert_m3818838684 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue0, CultureInfo_t3500843524 * ___culture1, Type_t * ___targetType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::TryConvert(System.Object,System.Globalization.CultureInfo,System.Type,System.Object&)
extern "C"  bool ConvertUtils_TryConvert_m47747452 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue0, CultureInfo_t3500843524 * ___culture1, Type_t * ___targetType2, Il2CppObject ** ___convertedValue3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ConvertUtils::ConvertOrCast(System.Object,System.Globalization.CultureInfo,System.Type)
extern "C"  Il2CppObject * ConvertUtils_ConvertOrCast_m4225117974 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue0, CultureInfo_t3500843524 * ___culture1, Type_t * ___targetType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::TryConvertOrCast(System.Object,System.Globalization.CultureInfo,System.Type,System.Object&)
extern "C"  bool ConvertUtils_TryConvertOrCast_m3071738358 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue0, CultureInfo_t3500843524 * ___culture1, Type_t * ___targetType2, Il2CppObject ** ___convertedValue3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ConvertUtils::EnsureTypeAssignable(System.Object,System.Type,System.Type)
extern "C"  Il2CppObject * ConvertUtils_EnsureTypeAssignable_m3824434219 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___initialType1, Type_t * ___targetType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter Newtonsoft.Json.Utilities.ConvertUtils::GetConverter(System.Type)
extern "C"  TypeConverter_t745995970 * ConvertUtils_GetConverter_m68689346 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::IsInteger(System.Object)
extern "C"  bool ConvertUtils_IsInteger_m3401115667 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ConvertUtils::.cctor()
extern "C"  void ConvertUtils__cctor_m1525818360 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
