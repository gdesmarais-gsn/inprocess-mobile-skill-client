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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728;
// System.String
struct String_t;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1216180266;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t3552561393;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
struct UnityWebRequest_t254341728_marshaled_pinvoke;
struct UnityWebRequest_t254341728_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Networking_DownloadHandler1216180266.h"
#include "UnityEngine_UnityEngine_Networking_UploadHandler3552561393.h"
#include "UnityEngine_UnityEngine_Networking_UnityWebRequest2654069489.h"

// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
extern "C"  void UnityWebRequest__ctor_m1187779891 (UnityWebRequest_t254341728 * __this, String_t* ___url0, String_t* ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
extern "C"  void UnityWebRequest__ctor_m2378599348 (UnityWebRequest_t254341728 * __this, String_t* ___url0, String_t* ___method1, DownloadHandler_t1216180266 * ___downloadHandler2, UploadHandler_t3552561393 * ___uploadHandler3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Get_m3762133581 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.String)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Put_m1681506174 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, String_t* ___bodyData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.String)
extern "C"  UnityWebRequest_t254341728 * UnityWebRequest_Post_m3438227921 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, String_t* ___postData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
extern "C"  bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m977096671 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
extern "C"  void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m1872424902 (UnityWebRequest_t254341728 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
extern "C"  bool UnityWebRequest_get_disposeUploadHandlerOnDispose_m573074478 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
extern "C"  void UnityWebRequest_set_disposeUploadHandlerOnDispose_m11086527 (UnityWebRequest_t254341728 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalCreate()
extern "C"  void UnityWebRequest_InternalCreate_m2618341326 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
extern "C"  void UnityWebRequest_InternalDestroy_m1188536142 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
extern "C"  void UnityWebRequest_InternalSetDefaults_m1411946726 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::Finalize()
extern "C"  void UnityWebRequest_Finalize_m1113857405 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
extern "C"  void UnityWebRequest_Dispose_m437623634 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Networking.UnityWebRequest::InternalBegin()
extern "C"  AsyncOperation_t3814632279 * UnityWebRequest_InternalBegin_m987291664 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Networking.UnityWebRequest::Send()
extern "C"  AsyncOperation_t3814632279 * UnityWebRequest_Send_m4070133578 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C"  void UnityWebRequest_InternalSetMethod_m969165462 (UnityWebRequest_t254341728 * __this, int32_t ___methodType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
extern "C"  void UnityWebRequest_InternalSetCustomMethod_m1107638252 (UnityWebRequest_t254341728 * __this, String_t* ___customMethodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
extern "C"  void UnityWebRequest_set_method_m4118764027 (UnityWebRequest_t254341728 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
extern "C"  String_t* UnityWebRequest_get_error_m1819765147 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
extern "C"  void UnityWebRequest_set_url_m2494687159 (UnityWebRequest_t254341728 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
extern "C"  void UnityWebRequest_InternalSetUrl_m1669953255 (UnityWebRequest_t254341728 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
extern "C"  int64_t UnityWebRequest_get_responseCode_m1590258701 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isError()
extern "C"  bool UnityWebRequest_get_isError_m2487408374 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
extern "C"  void UnityWebRequest_InternalSetRequestHeader_m2536447480 (UnityWebRequest_t254341728 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
extern "C"  void UnityWebRequest_SetRequestHeader_m466367223 (UnityWebRequest_t254341728 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
extern "C"  String_t* UnityWebRequest_GetResponseHeader_m1822960276 (UnityWebRequest_t254341728 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
extern "C"  UploadHandler_t3552561393 * UnityWebRequest_get_uploadHandler_m1968885984 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
extern "C"  void UnityWebRequest_set_uploadHandler_m2033861625 (UnityWebRequest_t254341728 * __this, UploadHandler_t3552561393 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C"  DownloadHandler_t1216180266 * UnityWebRequest_get_downloadHandler_m2794451840 (UnityWebRequest_t254341728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C"  void UnityWebRequest_set_downloadHandler_m1587492897 (UnityWebRequest_t254341728 * __this, DownloadHandler_t1216180266 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::ContainsForbiddenCharacters(System.String,System.Int32)
extern "C"  bool UnityWebRequest_ContainsForbiddenCharacters_m2308554832 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___firstAllowedCharCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::IsHeaderNameLegal(System.String)
extern "C"  bool UnityWebRequest_IsHeaderNameLegal_m453693478 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::IsHeaderValueLegal(System.String)
extern "C"  bool UnityWebRequest_IsHeaderValueLegal_m925827794 (Il2CppObject * __this /* static, unused */, String_t* ___headerValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::.cctor()
extern "C"  void UnityWebRequest__cctor_m126744318 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct UnityWebRequest_t254341728;
struct UnityWebRequest_t254341728_marshaled_pinvoke;

extern "C" void UnityWebRequest_t254341728_marshal_pinvoke(const UnityWebRequest_t254341728& unmarshaled, UnityWebRequest_t254341728_marshaled_pinvoke& marshaled);
extern "C" void UnityWebRequest_t254341728_marshal_pinvoke_back(const UnityWebRequest_t254341728_marshaled_pinvoke& marshaled, UnityWebRequest_t254341728& unmarshaled);
extern "C" void UnityWebRequest_t254341728_marshal_pinvoke_cleanup(UnityWebRequest_t254341728_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct UnityWebRequest_t254341728;
struct UnityWebRequest_t254341728_marshaled_com;

extern "C" void UnityWebRequest_t254341728_marshal_com(const UnityWebRequest_t254341728& unmarshaled, UnityWebRequest_t254341728_marshaled_com& marshaled);
extern "C" void UnityWebRequest_t254341728_marshal_com_back(const UnityWebRequest_t254341728_marshaled_com& marshaled, UnityWebRequest_t254341728& unmarshaled);
extern "C" void UnityWebRequest_t254341728_marshal_com_cleanup(UnityWebRequest_t254341728_marshaled_com& marshaled);
