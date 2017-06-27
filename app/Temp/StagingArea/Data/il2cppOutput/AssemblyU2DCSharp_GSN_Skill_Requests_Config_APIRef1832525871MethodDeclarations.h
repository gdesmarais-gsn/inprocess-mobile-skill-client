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

// GSN.Skill.Requests.Config.APIReference
struct APIReference_t1832525871;
// GSN.Skill.Requests.Config.APIInfoRequestData
struct APIInfoRequestData_t936324779;
// System.String
struct String_t;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIInfo936324779.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_Config_APIRef1717305705.h"

// System.Void GSN.Skill.Requests.Config.APIReference::.ctor()
extern "C"  void APIReference__ctor_m1659393407 (APIReference_t1832525871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Requests.Config.APIReference::get_HasData()
extern "C"  bool APIReference_get_HasData_m2206065836 (APIReference_t1832525871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.Config.APIReference::set_HasData(System.Boolean)
extern "C"  void APIReference_set_HasData_m213098159 (APIReference_t1832525871 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Requests.Config.APIInfoRequestData GSN.Skill.Requests.Config.APIReference::get_apiInfo()
extern "C"  APIInfoRequestData_t936324779 * APIReference_get_apiInfo_m676524763 (APIReference_t1832525871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.Config.APIReference::set_apiInfo(GSN.Skill.Requests.Config.APIInfoRequestData)
extern "C"  void APIReference_set_apiInfo_m1321682396 (APIReference_t1832525871 * __this, APIInfoRequestData_t936324779 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.Config.APIReference::SetEnvironment(System.String)
extern "C"  void APIReference_SetEnvironment_m2338914010 (APIReference_t1832525871 * __this, String_t* ___environment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Requests.Config.APIReference::GetRequestURL(GSN.Skill.Requests.Config.APIReference/Category,System.String)
extern "C"  String_t* APIReference_GetRequestURL_m4266373835 (APIReference_t1832525871 * __this, int32_t ___category0, String_t* ___urlKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Requests.Config.APIReference::ValidateRequest(GSN.Skill.Requests.Config.APIReference/Category,System.String)
extern "C"  bool APIReference_ValidateRequest_m955785921 (APIReference_t1832525871 * __this, int32_t ___category0, String_t* ___urlKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.Config.APIReference::OnAPIInfoComplete(GSN.Skill.Requests.IWebRequest)
extern "C"  void APIReference_OnAPIInfoComplete_m1625508824 (APIReference_t1832525871 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Requests.Config.APIReference/Category GSN.Skill.Requests.Config.APIReference::GetCategory(System.String)
extern "C"  int32_t APIReference_GetCategory_m2736389623 (APIReference_t1832525871 * __this, String_t* ___category0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
