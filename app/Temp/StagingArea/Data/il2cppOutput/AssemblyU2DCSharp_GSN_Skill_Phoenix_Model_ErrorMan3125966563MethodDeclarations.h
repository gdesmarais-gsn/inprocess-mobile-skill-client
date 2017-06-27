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

// GSN.Skill.Phoenix.Model.ErrorManager
struct ErrorManager_t3125966563;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
// GSN.Skill.Requests.WebRequests
struct WebRequests_t3348797540;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;
// GSN.Skill.Requests.WebRequestErrorData/Error[]
struct ErrorU5BU5D_t1838875882;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.Strings.ErrorTranslation>
struct List_1_t287844835;
// GSN.Skill.Phoenix.Model.Popups.GpsDeniedPopupModel
struct GpsDeniedPopupModel_t3863095986;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_ErrorTyp4040390998.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequests3348797540.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_ErrorDat2682468630.h"
#include "mscorlib_System_Nullable_1_gen3476757314.h"

// System.Void GSN.Skill.Phoenix.Model.ErrorManager::.ctor()
extern "C"  void ErrorManager__ctor_m1583660741 (ErrorManager_t3125966563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::Init(GSN.Skill.Phoenix.Model.Data.CurrentUser)
extern "C"  void ErrorManager_Init_m866703366 (ErrorManager_t3125966563 * __this, CurrentUser_t3910039426 * ___currentUser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::HandleErrorCallback()
extern "C"  void ErrorManager_HandleErrorCallback_m1911806120 (ErrorManager_t3125966563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::ClearCurrentError()
extern "C"  void ErrorManager_ClearCurrentError_m239617385 (ErrorManager_t3125966563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::HandleWebRequestError(GSN.Skill.Phoenix.Model.ErrorType,GSN.Skill.Requests.IWebRequest,System.Boolean)
extern "C"  void ErrorManager_HandleWebRequestError_m4080401151 (ErrorManager_t3125966563 * __this, int32_t ___type0, Il2CppObject * ___request1, bool ___allowRetry2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::HandleWebRequestsError(GSN.Skill.Requests.WebRequests,System.Boolean)
extern "C"  void ErrorManager_HandleWebRequestsError_m3372418375 (ErrorManager_t3125966563 * __this, WebRequests_t3348797540 * ___requests0, bool ___allowRetry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::HandleWebRequestError(GSN.Skill.Phoenix.Model.ErrorType,System.String,System.Action)
extern "C"  void ErrorManager_HandleWebRequestError_m4025215214 (ErrorManager_t3125966563 * __this, int32_t ___type0, String_t* ___message1, Action_t3226471752 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::HandleUserError(GSN.Skill.Phoenix.Model.ErrorType,System.String,System.Action,System.String,System.Boolean)
extern "C"  void ErrorManager_HandleUserError_m1904665889 (ErrorManager_t3125966563 * __this, int32_t ___type0, String_t* ___message1, Action_t3226471752 * ___callback2, String_t* ___buttonText3, bool ___showCloseButton4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Model.ErrorManager::ValidateError()
extern "C"  bool ErrorManager_ValidateError_m2505944419 (ErrorManager_t3125966563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::PopulateErrorMessage(GSN.Skill.Phoenix.Model.ErrorData&,GSN.Skill.Requests.WebRequestErrorData/Error[])
extern "C"  void ErrorManager_PopulateErrorMessage_m3790262712 (ErrorManager_t3125966563 * __this, ErrorData_t2682468630 * ___errorData0, ErrorU5BU5D_t1838875882* ___errors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<GSN.Skill.Phoenix.Strings.ErrorTranslation> GSN.Skill.Phoenix.Model.ErrorManager::GetErrorTranslation(GSN.Skill.Requests.IWebRequest)
extern "C"  Nullable_1_t3476757314  ErrorManager_GetErrorTranslation_m277762550 (ErrorManager_t3125966563 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<GSN.Skill.Phoenix.Strings.ErrorTranslation> GSN.Skill.Phoenix.Model.ErrorManager::GetErrorTranslation(System.String)
extern "C"  Nullable_1_t3476757314  ErrorManager_GetErrorTranslation_m3190110743 (ErrorManager_t3125966563 * __this, String_t* ___wwErrorMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::GetAllErrorTranslations(GSN.Skill.Requests.WebRequestErrorData/Error[],System.Collections.Generic.List`1<GSN.Skill.Phoenix.Strings.ErrorTranslation>&)
extern "C"  void ErrorManager_GetAllErrorTranslations_m2653708510 (ErrorManager_t3125966563 * __this, ErrorU5BU5D_t1838875882* ___errors0, List_1_t287844835 ** ___translations1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::ShowGpsPermission(System.Action,System.Action)
extern "C"  void ErrorManager_ShowGpsPermission_m1950295917 (ErrorManager_t3125966563 * __this, Action_t3226471752 * ___OnCallback0, Action_t3226471752 * ___OnCancelCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.Popups.GpsDeniedPopupModel GSN.Skill.Phoenix.Model.ErrorManager::ShowGpsDenied(System.Action,System.Action)
extern "C"  GpsDeniedPopupModel_t3863095986 * ErrorManager_ShowGpsDenied_m3156698664 (ErrorManager_t3125966563 * __this, Action_t3226471752 * ___OnCallback0, Action_t3226471752 * ___OnCancelCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Model.ErrorManager::ValidateVerifyPassword(GSN.Skill.Requests.IWebRequest)
extern "C"  bool ErrorManager_ValidateVerifyPassword_m1984930186 (ErrorManager_t3125966563 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::ShowVerifyPassword(System.Action)
extern "C"  void ErrorManager_ShowVerifyPassword_m2137642799 (ErrorManager_t3125966563 * __this, Action_t3226471752 * ___OnSuccessCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::HandleVerifyPassword(System.String)
extern "C"  void ErrorManager_HandleVerifyPassword_m2216626321 (ErrorManager_t3125966563 * __this, String_t* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::OnVerifyPasswordLoginSuccess(GSN.Skill.Requests.IWebRequest)
extern "C"  void ErrorManager_OnVerifyPasswordLoginSuccess_m2608129663 (ErrorManager_t3125966563 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::OnVerifyPasswordLoginFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void ErrorManager_OnVerifyPasswordLoginFail_m747425516 (ErrorManager_t3125966563 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.ErrorManager::OnApplicationPause(System.Boolean)
extern "C"  void ErrorManager_OnApplicationPause_m2008752303 (ErrorManager_t3125966563 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
