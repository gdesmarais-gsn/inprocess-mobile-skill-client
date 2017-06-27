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

// GSN.Skill.Phoenix.Strings.StringTable
struct StringTable_t2266070887;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t1563811461;
// System.String
struct String_t;
// System.Enum
struct Enum_t2459695545;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Enum2459695545.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen3476757314.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Strings_InputFi918236426.h"

// System.Void GSN.Skill.Phoenix.Strings.StringTable::.ctor()
extern "C"  void StringTable__ctor_m3354347778 (StringTable_t2266070887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GSN.Skill.Phoenix.Strings.StringTable::get_StringIDs()
extern "C"  List_1_t1398341365 * StringTable_get_StringIDs_m1582810133 (StringTable_t2266070887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Strings.StringTable::set_StringIDs(System.Collections.Generic.List`1<System.String>)
extern "C"  void StringTable_set_StringIDs_m1235990732 (StringTable_t2266070887 * __this, List_1_t1398341365 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Strings.StringTable::get_CheatEnabled()
extern "C"  bool StringTable_get_CheatEnabled_m774111087 (StringTable_t2266070887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Strings.StringTable::set_CheatEnabled(System.Boolean)
extern "C"  void StringTable_set_CheatEnabled_m373785120 (StringTable_t2266070887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Strings.StringTable::set_Table(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern "C"  void StringTable_set_Table_m3806950405 (StringTable_t2266070887 * __this, Dictionary_2_t1563811461 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Strings.StringTable::GetEntry(System.String)
extern "C"  String_t* StringTable_GetEntry_m1056952297 (StringTable_t2266070887 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Strings.StringTable::GetEntry(System.Enum)
extern "C"  String_t* StringTable_GetEntry_m576823723 (StringTable_t2266070887 * __this, Enum_t2459695545 * ___entryKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Strings.StringTable::GetEntry(System.Enum,System.Object)
extern "C"  String_t* StringTable_GetEntry_m2689204929 (StringTable_t2266070887 * __this, Enum_t2459695545 * ___key0, Il2CppObject * ___arg01, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Strings.StringTable::GetEntry(System.Enum,System.Object,System.Object)
extern "C"  String_t* StringTable_GetEntry_m4129838443 (StringTable_t2266070887 * __this, Enum_t2459695545 * ___key0, Il2CppObject * ___arg01, Il2CppObject * ___arg12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Strings.StringTable::GetEntry(System.Enum,System.Object,System.Object,System.Object)
extern "C"  String_t* StringTable_GetEntry_m1407491457 (StringTable_t2266070887 * __this, Enum_t2459695545 * ___key0, Il2CppObject * ___arg01, Il2CppObject * ___arg12, Il2CppObject * ___arg23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Strings.StringTable::GetEntry(System.Enum,System.Object[])
extern "C"  String_t* StringTable_GetEntry_m4169615011 (StringTable_t2266070887 * __this, Enum_t2459695545 * ___key0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<GSN.Skill.Phoenix.Strings.ErrorTranslation> GSN.Skill.Phoenix.Strings.StringTable::GetErrorTranslation(System.String)
extern "C"  Nullable_1_t3476757314  StringTable_GetErrorTranslation_m1690995318 (StringTable_t2266070887 * __this, String_t* ___wwErrorMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Strings.StringTable::AddErrorTranslation(System.String,GSN.Skill.Phoenix.Strings.InputFieldType,System.Enum)
extern "C"  void StringTable_AddErrorTranslation_m2977831108 (StringTable_t2266070887 * __this, String_t* ___msg0, int32_t ___inputType1, Enum_t2459695545 * ___key2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Strings.StringTable::HasEntry(System.String,System.String)
extern "C"  bool StringTable_HasEntry_m2390851488 (StringTable_t2266070887 * __this, String_t* ___groupKey0, String_t* ___entry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Strings.StringTable::GetEntry(System.String,System.String)
extern "C"  String_t* StringTable_GetEntry_m3666225631 (StringTable_t2266070887 * __this, String_t* ___groupKey0, String_t* ___entry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Strings.StringTable::Update(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern "C"  void StringTable_Update_m2914049227 (StringTable_t2266070887 * __this, Dictionary_2_t1563811461 * ___updateDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
