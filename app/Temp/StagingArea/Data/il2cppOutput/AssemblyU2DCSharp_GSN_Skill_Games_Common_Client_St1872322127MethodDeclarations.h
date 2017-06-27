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

// GSN.Skill.Games.Common.Client.StringTable
struct StringTable_t1872322127;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2132529970;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Client.StringTable::.ctor()
extern "C"  void StringTable__ctor_m2344529994 (StringTable_t1872322127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GSN.Skill.Games.Common.Client.StringTable::get_stringIDs()
extern "C"  List_1_t1398341365 * StringTable_get_stringIDs_m666007381 (StringTable_t1872322127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.StringTable::set_stringIDs(System.Collections.Generic.List`1<System.String>)
extern "C"  void StringTable_set_stringIDs_m2648949792 (StringTable_t1872322127 * __this, List_1_t1398341365 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.StringTable::set_table(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void StringTable_set_table_m2794824568 (StringTable_t1872322127 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String> GSN.Skill.Games.Common.Client.StringTable::get_Keys()
extern "C"  KeyCollection_t2132529970 * StringTable_get_Keys_m3939843267 (StringTable_t1872322127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Client.StringTable::GetEntry(System.String)
extern "C"  String_t* StringTable_GetEntry_m2035826593 (StringTable_t1872322127 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.StringTable::UpdateFromDictionary(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void StringTable_UpdateFromDictionary_m3424496612 (StringTable_t1872322127 * __this, Dictionary_2_t3943999495 * ___sessionDict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
