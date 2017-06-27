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

// GSN.Skill.Requests.WorldWinnerSessionHandler
struct WorldWinnerSessionHandler_t1662797409;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GSN.Skill.Requests.FetchHandler
struct FetchHandler_t3511486974;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_UnityWebRequest254341728.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_FetchHandler3511486974.h"

// System.Void GSN.Skill.Requests.WorldWinnerSessionHandler::.ctor()
extern "C"  void WorldWinnerSessionHandler__ctor_m4250363677 (WorldWinnerSessionHandler_t1662797409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Requests.WorldWinnerSessionHandler::get_retryCount()
extern "C"  int32_t WorldWinnerSessionHandler_get_retryCount_m3298238637 (WorldWinnerSessionHandler_t1662797409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WorldWinnerSessionHandler::set_retryCount(System.Int32)
extern "C"  void WorldWinnerSessionHandler_set_retryCount_m1776327382 (WorldWinnerSessionHandler_t1662797409 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WorldWinnerSessionHandler::UpdateCookieData(UnityEngine.Networking.UnityWebRequest,GSN.Skill.Requests.IWebRequest)
extern "C"  void WorldWinnerSessionHandler_UpdateCookieData_m84241878 (WorldWinnerSessionHandler_t1662797409 * __this, UnityWebRequest_t254341728 * ___unityRequest0, Il2CppObject * ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Requests.WorldWinnerSessionHandler::SetRequestHeader(UnityEngine.Networking.UnityWebRequest)
extern "C"  void WorldWinnerSessionHandler_SetRequestHeader_m4002988372 (WorldWinnerSessionHandler_t1662797409 * __this, UnityWebRequest_t254341728 * ___unityRequest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Requests.WorldWinnerSessionHandler::GetRequestHeaders()
extern "C"  Dictionary_2_t3943999495 * WorldWinnerSessionHandler_GetRequestHeaders_m4205116812 (WorldWinnerSessionHandler_t1662797409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Requests.WorldWinnerSessionHandler::RefreshSessionID(GSN.Skill.Requests.FetchHandler)
extern "C"  Il2CppObject * WorldWinnerSessionHandler_RefreshSessionID_m4143882812 (WorldWinnerSessionHandler_t1662797409 * __this, FetchHandler_t3511486974 * ___fetchFunction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
