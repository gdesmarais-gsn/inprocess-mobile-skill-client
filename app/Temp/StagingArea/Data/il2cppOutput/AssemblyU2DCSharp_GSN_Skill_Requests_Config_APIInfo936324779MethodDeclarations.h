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

// GSN.Skill.Requests.Config.APIInfoRequestData
struct APIInfoRequestData_t936324779;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIInfo301782448.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Requests.Config.APIInfoRequestData::.ctor()
extern "C"  void APIInfoRequestData__ctor_m2751367491 (APIInfoRequestData_t936324779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Requests.Config.APIInfoData GSN.Skill.Requests.Config.APIInfoRequestData::get_Response()
extern "C"  APIInfoData_t301782448  APIInfoRequestData_get_Response_m2841962971 (APIInfoRequestData_t936324779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.Config.APIInfoRequestData::set_Response(GSN.Skill.Requests.Config.APIInfoData)
extern "C"  void APIInfoRequestData_set_Response_m4194915544 (APIInfoRequestData_t936324779 * __this, APIInfoData_t301782448  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Requests.Config.APIInfoRequestData::get_Url()
extern "C"  String_t* APIInfoRequestData_get_Url_m1033819888 (APIInfoRequestData_t936324779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Requests.Config.APIInfoRequestData::get_GameLocationBaseURL()
extern "C"  String_t* APIInfoRequestData_get_GameLocationBaseURL_m857341376 (APIInfoRequestData_t936324779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Requests.Config.APIInfoRequestData::get_WorldWinnerBaseURL()
extern "C"  String_t* APIInfoRequestData_get_WorldWinnerBaseURL_m1762653834 (APIInfoRequestData_t936324779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Requests.Config.APIInfoRequestData::GetBaseURL(System.String)
extern "C"  String_t* APIInfoRequestData_GetBaseURL_m4196605124 (APIInfoRequestData_t936324779 * __this, String_t* ___environmentString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
