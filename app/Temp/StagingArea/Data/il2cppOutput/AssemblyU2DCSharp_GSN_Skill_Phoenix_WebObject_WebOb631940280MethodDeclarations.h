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

// GSN.Skill.Phoenix.WebObject.WebObjectWrapper
struct WebObjectWrapper_t631940280;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::.ctor()
extern "C"  void WebObjectWrapper__ctor_m1694117032 (WebObjectWrapper_t631940280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::AddCustomHeader(System.String,System.String)
extern "C"  void WebObjectWrapper_AddCustomHeader_m3592542643 (WebObjectWrapper_t631940280 * __this, String_t* ___headerKey0, String_t* ___headerValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GSN.Skill.Phoenix.WebObject.WebObjectWrapper::GetCustomHeader(System.String)
extern "C"  String_t* WebObjectWrapper_GetCustomHeader_m201197711 (WebObjectWrapper_t631940280 * __this, String_t* ___headerKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::Attach(System.String)
extern "C"  void WebObjectWrapper_Attach_m716628967 (WebObjectWrapper_t631940280 * __this, String_t* ___i_unityObjectName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::Attach(UnityEngine.GameObject)
extern "C"  void WebObjectWrapper_Attach_m1831139973 (WebObjectWrapper_t631940280 * __this, GameObject_t1756533147 * ___i_unityObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::Load()
extern "C"  void WebObjectWrapper_Load_m1832607370 (WebObjectWrapper_t631940280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::Close()
extern "C"  void WebObjectWrapper_Close_m1646206460 (WebObjectWrapper_t631940280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::Release()
extern "C"  void WebObjectWrapper_Release_m2286046839 (WebObjectWrapper_t631940280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void WebObjectWrapper_SetMargins_m399307609 (WebObjectWrapper_t631940280 * __this, int32_t ___i_left0, int32_t ___i_top1, int32_t ___i_right2, int32_t ___i_bottom3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::SetVisibility(System.Boolean)
extern "C"  void WebObjectWrapper_SetVisibility_m3175790529 (WebObjectWrapper_t631940280 * __this, bool ___i_isVisible0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::HandleLoad()
extern "C"  void WebObjectWrapper_HandleLoad_m664428544 (WebObjectWrapper_t631940280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::SetCustomHeaders()
extern "C"  void WebObjectWrapper_SetCustomHeaders_m2112716207 (WebObjectWrapper_t631940280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::DispatchWebPageLoadedEvent(System.String)
extern "C"  void WebObjectWrapper_DispatchWebPageLoadedEvent_m1823881306 (WebObjectWrapper_t631940280 * __this, String_t* ___i_msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::OnWebViewLoaded(System.String)
extern "C"  void WebObjectWrapper_OnWebViewLoaded_m2757285599 (WebObjectWrapper_t631940280 * __this, String_t* ___i_msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.WebObject.WebObjectWrapper::OnError(System.String)
extern "C"  void WebObjectWrapper_OnError_m774754641 (WebObjectWrapper_t631940280 * __this, String_t* ___i_msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
