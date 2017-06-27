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

// GSN.Skill.Games.Common.Utils.GroupLoadingData
struct GroupLoadingData_t3963712907;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Utils.GroupLoadingData::.ctor(System.Single,System.String)
extern "C"  void GroupLoadingData__ctor_m434119567 (GroupLoadingData_t3963712907 * __this, float ___toLoad0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GroupLoadingData::ItemLoaded()
extern "C"  void GroupLoadingData_ItemLoaded_m1200094040 (GroupLoadingData_t3963712907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GSN.Skill.Games.Common.Utils.GroupLoadingData::get_PercentDone()
extern "C"  float GroupLoadingData_get_PercentDone_m2477150852 (GroupLoadingData_t3963712907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Games.Common.Utils.GroupLoadingData::Dump()
extern "C"  String_t* GroupLoadingData_Dump_m1644811093 (GroupLoadingData_t3963712907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
