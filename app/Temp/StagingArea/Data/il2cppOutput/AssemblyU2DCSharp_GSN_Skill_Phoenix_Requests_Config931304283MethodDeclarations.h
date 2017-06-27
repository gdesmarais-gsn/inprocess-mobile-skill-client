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

// GSN.Skill.Phoenix.Requests.Config.FabricEventTokenRequestData
struct FabricEventTokenRequestData_t931304283;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Confi1291620670.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Phoenix.Requests.Config.FabricEventTokenRequestData::.ctor()
extern "C"  void FabricEventTokenRequestData__ctor_m3078006824 (FabricEventTokenRequestData_t931304283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Config.FabricEventTokenData GSN.Skill.Phoenix.Requests.Config.FabricEventTokenRequestData::get_Response()
extern "C"  FabricEventTokenData_t1291620670  FabricEventTokenRequestData_get_Response_m578365747 (FabricEventTokenRequestData_t931304283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Config.FabricEventTokenRequestData::set_Response(GSN.Skill.Phoenix.Requests.Config.FabricEventTokenData)
extern "C"  void FabricEventTokenRequestData_set_Response_m3177874348 (FabricEventTokenRequestData_t931304283 * __this, FabricEventTokenData_t1291620670  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Config.FabricEventTokenRequestData::get_Url()
extern "C"  String_t* FabricEventTokenRequestData_get_Url_m2782574563 (FabricEventTokenRequestData_t931304283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.Requests.Config.FabricEventTokenRequestData::BuildURLSuffix()
extern "C"  String_t* FabricEventTokenRequestData_BuildURLSuffix_m4258435763 (FabricEventTokenRequestData_t931304283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Config.FabricEventTokenRequestData::AddGETParameter(System.Text.StringBuilder,System.String,System.String)
extern "C"  void FabricEventTokenRequestData_AddGETParameter_m3234924922 (FabricEventTokenRequestData_t931304283 * __this, StringBuilder_t1221177846 * ___sb0, String_t* ___parameter1, String_t* ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
