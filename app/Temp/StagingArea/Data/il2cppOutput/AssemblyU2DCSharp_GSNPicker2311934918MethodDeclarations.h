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

// GSNPicker
struct GSNPicker_t2311934918;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t3883897865;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_TMP_InputField_SelectionEv3883897865.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSNPicker::.ctor()
extern "C"  void GSNPicker__ctor_m4251758039 (GSNPicker_t2311934918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_InputField/SelectionEvent GSNPicker::get_onDeselect()
extern "C"  SelectionEvent_t3883897865 * GSNPicker_get_onDeselect_m22260072 (GSNPicker_t2311934918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSNPicker::set_onDeselect(TMPro.TMP_InputField/SelectionEvent)
extern "C"  void GSNPicker_set_onDeselect_m2037058997 (GSNPicker_t2311934918 * __this, SelectionEvent_t3883897865 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSNPicker::Awake()
extern "C"  void GSNPicker_Awake_m1686295814 (GSNPicker_t2311934918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSNPicker::Start()
extern "C"  void GSNPicker_Start_m1407313419 (GSNPicker_t2311934918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSNPicker::Update()
extern "C"  void GSNPicker_Update_m3993289396 (GSNPicker_t2311934918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSNPicker::SetParentName(System.String)
extern "C"  void GSNPicker_SetParentName_m4051988924 (GSNPicker_t2311934918 * __this, String_t* ___parentName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSNPicker::ShowPicker(System.String,System.Collections.Generic.List`1<System.String>,System.Int32)
extern "C"  void GSNPicker_ShowPicker_m1072744825 (GSNPicker_t2311934918 * __this, String_t* ___parentName0, List_1_t1398341365 * ___entries1, int32_t ___rowIndexToStart2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSNPicker::OnNativePickerValue(System.String)
extern "C"  void GSNPicker_OnNativePickerValue_m1604987438 (GSNPicker_t2311934918 * __this, String_t* ___messageData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSNPicker::OnNativePickerCancel(System.String)
extern "C"  void GSNPicker_OnNativePickerCancel_m4037236345 (GSNPicker_t2311934918 * __this, String_t* ___ignore0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSNPicker::GeneratePickerListForNumberRange(System.Collections.Generic.List`1<System.String>&,System.Int32,System.Int32)
extern "C"  void GSNPicker_GeneratePickerListForNumberRange_m3511898597 (Il2CppObject * __this /* static, unused */, List_1_t1398341365 ** ___pickerEntries0, int32_t ___startingValue1, int32_t ___numEntries2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
