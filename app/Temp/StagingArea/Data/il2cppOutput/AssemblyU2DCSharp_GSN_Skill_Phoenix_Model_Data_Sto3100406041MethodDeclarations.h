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

// GSN.Skill.Phoenix.Model.Data.StoredConfigData
struct StoredConfigData_t3100406041;
// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t405338302;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Phoenix.Model.Data.StoredConfigData::.ctor()
extern "C"  void StoredConfigData__ctor_m2671860937 (StoredConfigData_t3100406041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Model.Data.StoredConfigData::get_TaxFormLink()
extern "C"  String_t* StoredConfigData_get_TaxFormLink_m4053313014 (StoredConfigData_t3100406041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.StoredConfigData::set_TaxFormLink(System.String)
extern "C"  void StoredConfigData_set_TaxFormLink_m3713886365 (StoredConfigData_t3100406041 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Model.Data.StoredConfigData::get_TermsOfServiceLink()
extern "C"  String_t* StoredConfigData_get_TermsOfServiceLink_m3738670820 (StoredConfigData_t3100406041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.StoredConfigData::set_TermsOfServiceLink(System.String)
extern "C"  void StoredConfigData_set_TermsOfServiceLink_m589455479 (StoredConfigData_t3100406041 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Model.Data.StoredConfigData::get_PrivacyPolicyLink()
extern "C"  String_t* StoredConfigData_get_PrivacyPolicyLink_m1934969179 (StoredConfigData_t3100406041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.StoredConfigData::set_PrivacyPolicyLink(System.String)
extern "C"  void StoredConfigData_set_PrivacyPolicyLink_m190686568 (StoredConfigData_t3100406041 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Model.Data.StoredConfigData::get_TermsOfConditionsLink()
extern "C"  String_t* StoredConfigData_get_TermsOfConditionsLink_m781436973 (StoredConfigData_t3100406041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.StoredConfigData::set_TermsOfConditionsLink(System.String)
extern "C"  void StoredConfigData_set_TermsOfConditionsLink_m1870156282 (StoredConfigData_t3100406041 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.Int32> GSN.Skill.Phoenix.Model.Data.StoredConfigData::get_unsupportedPhoenixGames()
extern "C"  HashSet_1_t405338302 * StoredConfigData_get_unsupportedPhoenixGames_m3099256287 (StoredConfigData_t3100406041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.StoredConfigData::set_unsupportedPhoenixGames(System.Collections.Generic.HashSet`1<System.Int32>)
extern "C"  void StoredConfigData_set_unsupportedPhoenixGames_m1533560588 (StoredConfigData_t3100406041 * __this, HashSet_1_t405338302 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Model.Data.StoredConfigData::get_ApplicationVersion()
extern "C"  String_t* StoredConfigData_get_ApplicationVersion_m3100382633 (StoredConfigData_t3100406041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.StoredConfigData::set_ApplicationVersion(System.String)
extern "C"  void StoredConfigData_set_ApplicationVersion_m2539137494 (StoredConfigData_t3100406041 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.StoredConfigData::OnConfigUpdated(GSN.Skill.Requests.IWebRequest)
extern "C"  void StoredConfigData_OnConfigUpdated_m2944532628 (StoredConfigData_t3100406041 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.StoredConfigData::CheckMinVersion()
extern "C"  void StoredConfigData_CheckMinVersion_m2665864579 (StoredConfigData_t3100406041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.StoredConfigData::PopulateUnsupportedGameList()
extern "C"  void StoredConfigData_PopulateUnsupportedGameList_m2940268272 (StoredConfigData_t3100406041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
