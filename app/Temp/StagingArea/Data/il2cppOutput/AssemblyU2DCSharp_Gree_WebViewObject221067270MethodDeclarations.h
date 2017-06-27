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

// Gree.WebViewObject
struct WebViewObject_t221067270;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void Gree.WebViewObject::.ctor()
extern "C"  void WebViewObject__ctor_m467219008 (WebViewObject_t221067270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gree.WebViewObject::get_IsKeyboardVisible()
extern "C"  bool WebViewObject_get_IsKeyboardVisible_m2739635676 (WebViewObject_t221067270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::Init(System.Action`1<System.String>,System.Boolean,System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Boolean)
extern "C"  void WebViewObject_Init_m3291430792 (WebViewObject_t221067270 * __this, Action_1_t1831019615 * ___cb0, bool ___transparent1, String_t* ___ua2, Action_1_t1831019615 * ___err3, Action_1_t1831019615 * ___ld4, bool ___enableWKWebView5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::OnDestroy()
extern "C"  void WebViewObject_OnDestroy_m3013164291 (WebViewObject_t221067270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::SetCenterPositionWithScale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void WebViewObject_SetCenterPositionWithScale_m1661049908 (WebViewObject_t221067270 * __this, Vector2_t2243707579  ___center0, Vector2_t2243707579  ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void WebViewObject_SetMargins_m51872371 (WebViewObject_t221067270 * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::SetVisibility(System.Boolean)
extern "C"  void WebViewObject_SetVisibility_m1898397539 (WebViewObject_t221067270 * __this, bool ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gree.WebViewObject::GetVisibility()
extern "C"  bool WebViewObject_GetVisibility_m1925870506 (WebViewObject_t221067270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::LoadURL(System.String)
extern "C"  void WebViewObject_LoadURL_m1303758471 (WebViewObject_t221067270 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::LoadHTML(System.String,System.String)
extern "C"  void WebViewObject_LoadHTML_m835845691 (WebViewObject_t221067270 * __this, String_t* ___html0, String_t* ___baseUrl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::EvaluateJS(System.String)
extern "C"  void WebViewObject_EvaluateJS_m2235453848 (WebViewObject_t221067270 * __this, String_t* ___js0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gree.WebViewObject::CanGoBack()
extern "C"  bool WebViewObject_CanGoBack_m2515666883 (WebViewObject_t221067270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gree.WebViewObject::CanGoForward()
extern "C"  bool WebViewObject_CanGoForward_m3906143215 (WebViewObject_t221067270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::GoBack()
extern "C"  void WebViewObject_GoBack_m384607403 (WebViewObject_t221067270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::GoForward()
extern "C"  void WebViewObject_GoForward_m2697634271 (WebViewObject_t221067270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::CallOnError(System.String)
extern "C"  void WebViewObject_CallOnError_m187493137 (WebViewObject_t221067270 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::CallOnLoaded(System.String)
extern "C"  void WebViewObject_CallOnLoaded_m1032629368 (WebViewObject_t221067270 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::CallFromJS(System.String)
extern "C"  void WebViewObject_CallFromJS_m1658671907 (WebViewObject_t221067270 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::AddCustomHeader(System.String,System.String)
extern "C"  void WebViewObject_AddCustomHeader_m2145384633 (WebViewObject_t221067270 * __this, String_t* ___headerKey0, String_t* ___headerValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Gree.WebViewObject::GetCustomHeaderValue(System.String)
extern "C"  String_t* WebViewObject_GetCustomHeaderValue_m3251310070 (WebViewObject_t221067270 * __this, String_t* ___headerKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::RemoveCustomHeader(System.String)
extern "C"  void WebViewObject_RemoveCustomHeader_m636114374 (WebViewObject_t221067270 * __this, String_t* ___headerKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gree.WebViewObject::ClearCustomHeader()
extern "C"  void WebViewObject_ClearCustomHeader_m476092517 (WebViewObject_t221067270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
