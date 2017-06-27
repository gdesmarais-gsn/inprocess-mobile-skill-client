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

// UnityEngine.Animator
struct Animator_t69676727;
// System.String
struct String_t;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_t2969332312;
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_t1936965233;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t670468573;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo2577870592.h"
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo2410896200.h"
#include "UnityEngine_UnityEngine_RuntimeAnimatorController670468573.h"

// System.Single UnityEngine.Animator::GetFloat(System.Int32)
extern "C"  float Animator_GetFloat_m3714897923 (Animator_t69676727 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
extern "C"  void Animator_SetFloat_m2956422680 (Animator_t69676727 * __this, int32_t ___id0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
extern "C"  bool Animator_GetBool_m919083767 (Animator_t69676727 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m2305662531 (Animator_t69676727 * __this, String_t* ___name0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
extern "C"  void Animator_SetBool_m2272870950 (Animator_t69676727 * __this, int32_t ___id0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetInteger(System.Int32)
extern "C"  int32_t Animator_GetInteger_m1012099561 (Animator_t69676727 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C"  void Animator_SetInteger_m528582597 (Animator_t69676727 * __this, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
extern "C"  void Animator_SetInteger_m1464706502 (Animator_t69676727 * __this, int32_t ___id0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m3418492570 (Animator_t69676727 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
extern "C"  void Animator_SetTrigger_m2297748533 (Animator_t69676727 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C"  void Animator_ResetTrigger_m865269317 (Animator_t69676727 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
extern "C"  void Animator_SetLayerWeight_m2914961795 (Animator_t69676727 * __this, int32_t ___layerIndex0, float ___weight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t2577870592  Animator_GetCurrentAnimatorStateInfo_m1931338898 (Animator_t69676727 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t2577870592  Animator_GetNextAnimatorStateInfo_m3085812524 (Animator_t69676727 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorTransitionInfo UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32)
extern "C"  AnimatorTransitionInfo_t2410896200  Animator_GetAnimatorTransitionInfo_m2734940813 (Animator_t69676727 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)
extern "C"  AnimatorClipInfoU5BU5D_t2969332312* Animator_GetCurrentAnimatorClipInfo_m2138963390 (Animator_t69676727 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern "C"  bool Animator_IsInTransition_m3442920577 (Animator_t69676727 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
extern "C"  AnimatorControllerParameterU5BU5D_t1936965233* Animator_get_parameters_m3091186905 (Animator_t69676727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String)
extern "C"  void Animator_Play_m1123842248 (Animator_t69676727 * __this, String_t* ___stateName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C"  void Animator_Play_m2181614708 (Animator_t69676727 * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C"  void Animator_Play_m3632052371 (Animator_t69676727 * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C"  RuntimeAnimatorController_t670468573 * Animator_get_runtimeAnimatorController_m652575931 (Animator_t69676727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
extern "C"  void Animator_set_runtimeAnimatorController_m4277899194 (Animator_t69676727 * __this, RuntimeAnimatorController_t670468573 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m3313850714 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
extern "C"  void Animator_SetFloatID_m315788701 (Animator_t69676727 * __this, int32_t ___id0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
extern "C"  float Animator_GetFloatID_m2459156264 (Animator_t69676727 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C"  void Animator_SetBoolString_m1893192746 (Animator_t69676727 * __this, String_t* ___name0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
extern "C"  void Animator_SetBoolID_m1875705373 (Animator_t69676727 * __this, int32_t ___id0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
extern "C"  bool Animator_GetBoolID_m618935642 (Animator_t69676727 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C"  void Animator_SetIntegerString_m3104058366 (Animator_t69676727 * __this, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
extern "C"  void Animator_SetIntegerID_m1279848667 (Animator_t69676727 * __this, int32_t ___id0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
extern "C"  int32_t Animator_GetIntegerID_m224950522 (Animator_t69676727 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C"  void Animator_SetTriggerString_m2002790359 (Animator_t69676727 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
extern "C"  void Animator_SetTriggerID_m75277672 (Animator_t69676727 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C"  void Animator_ResetTriggerString_m1445965342 (Animator_t69676727 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
