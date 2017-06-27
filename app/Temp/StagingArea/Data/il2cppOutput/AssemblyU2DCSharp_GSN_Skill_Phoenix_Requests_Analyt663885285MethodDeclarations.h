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

// GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler
struct FabricSessionHandler_t663885285;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GSN.Skill.Requests.FetchHandler
struct FetchHandler_t3511486974;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_UnityWebRequest254341728.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_FetchHandler3511486974.h"

// System.Void GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler::.ctor()
extern "C"  void FabricSessionHandler__ctor_m765727898 (FabricSessionHandler_t663885285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler::get_retryCount()
extern "C"  int32_t FabricSessionHandler_get_retryCount_m3723553466 (FabricSessionHandler_t663885285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler::set_retryCount(System.Int32)
extern "C"  void FabricSessionHandler_set_retryCount_m4112652747 (FabricSessionHandler_t663885285 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler::SetRequestHeader(UnityEngine.Networking.UnityWebRequest)
extern "C"  void FabricSessionHandler_SetRequestHeader_m3820724997 (FabricSessionHandler_t663885285 * __this, UnityWebRequest_t254341728 * ___unityRequest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler::GetRequestHeaders()
extern "C"  Dictionary_2_t3943999495 * FabricSessionHandler_GetRequestHeaders_m1993751939 (FabricSessionHandler_t663885285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler::RefreshSessionID(GSN.Skill.Requests.FetchHandler)
extern "C"  Il2CppObject * FabricSessionHandler_RefreshSessionID_m3919883091 (FabricSessionHandler_t663885285 * __this, FetchHandler_t3511486974 * ___fetchFunction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Requests.Analytics.FabricSessionHandler::UpdateCookieData(UnityEngine.Networking.UnityWebRequest,GSN.Skill.Requests.IWebRequest)
extern "C"  void FabricSessionHandler_UpdateCookieData_m961398339 (FabricSessionHandler_t663885285 * __this, UnityWebRequest_t254341728 * ___unityRequest0, Il2CppObject * ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
