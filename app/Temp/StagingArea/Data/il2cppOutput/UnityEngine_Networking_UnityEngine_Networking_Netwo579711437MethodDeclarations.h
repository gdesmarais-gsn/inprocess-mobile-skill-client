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

// UnityEngine.Networking.NetworkAnimator
struct NetworkAnimator_t579711437;
// UnityEngine.Animator
struct Animator_t69676727;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.AnimationMessage
struct AnimationMessage_t3934203181;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3187690923;
// UnityEngine.Networking.NetworkSystem.AnimationParametersMessage
struct AnimationParametersMessage_t349763583;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t560143343;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t2339216573;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animator69676727.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3934203181.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3187690923.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo349763583.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo560143343.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2339216573.h"

// System.Void UnityEngine.Networking.NetworkAnimator::.ctor()
extern "C"  void NetworkAnimator__ctor_m2160663518 (NetworkAnimator_t579711437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.Networking.NetworkAnimator::get_animator()
extern "C"  Animator_t69676727 * NetworkAnimator_get_animator_m2773399505 (NetworkAnimator_t579711437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::set_animator(UnityEngine.Animator)
extern "C"  void NetworkAnimator_set_animator_m1404940034 (NetworkAnimator_t579711437 * __this, Animator_t69676727 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetParameterAutoSend(System.Int32,System.Boolean)
extern "C"  void NetworkAnimator_SetParameterAutoSend_m3777937306 (NetworkAnimator_t579711437 * __this, int32_t ___index0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkAnimator::GetParameterAutoSend(System.Int32)
extern "C"  bool NetworkAnimator_GetParameterAutoSend_m339242033 (NetworkAnimator_t579711437 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::ResetParameterOptions()
extern "C"  void NetworkAnimator_ResetParameterOptions_m3157323882 (NetworkAnimator_t579711437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnStartAuthority()
extern "C"  void NetworkAnimator_OnStartAuthority_m2947542048 (NetworkAnimator_t579711437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::FixedUpdate()
extern "C"  void NetworkAnimator_FixedUpdate_m3092718755 (NetworkAnimator_t579711437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkAnimator::CheckAnimStateChanged(System.Int32&,System.Single&)
extern "C"  bool NetworkAnimator_CheckAnimStateChanged_m516785184 (NetworkAnimator_t579711437 * __this, int32_t* ___stateHash0, float* ___normalizedTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::CheckSendRate()
extern "C"  void NetworkAnimator_CheckSendRate_m450510650 (NetworkAnimator_t579711437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetSendTrackingParam(System.String,System.Int32)
extern "C"  void NetworkAnimator_SetSendTrackingParam_m4196169661 (NetworkAnimator_t579711437 * __this, String_t* ___p0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetRecvTrackingParam(System.String,System.Int32)
extern "C"  void NetworkAnimator_SetRecvTrackingParam_m2820148759 (NetworkAnimator_t579711437 * __this, String_t* ___p0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::HandleAnimMsg(UnityEngine.Networking.NetworkSystem.AnimationMessage,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkAnimator_HandleAnimMsg_m3276912479 (NetworkAnimator_t579711437 * __this, AnimationMessage_t3934203181 * ___msg0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::HandleAnimParamsMsg(UnityEngine.Networking.NetworkSystem.AnimationParametersMessage,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkAnimator_HandleAnimParamsMsg_m749768893 (NetworkAnimator_t579711437 * __this, AnimationParametersMessage_t349763583 * ___msg0, NetworkReader_t3187690923 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::HandleAnimTriggerMsg(System.Int32)
extern "C"  void NetworkAnimator_HandleAnimTriggerMsg_m734471553 (NetworkAnimator_t579711437 * __this, int32_t ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::WriteParameters(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  void NetworkAnimator_WriteParameters_m1532174866 (NetworkAnimator_t579711437 * __this, NetworkWriter_t560143343 * ___writer0, bool ___autoSend1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::ReadParameters(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkAnimator_ReadParameters_m903074883 (NetworkAnimator_t579711437 * __this, NetworkReader_t3187690923 * ___reader0, bool ___autoSend1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkAnimator::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkAnimator_OnSerialize_m754430848 (NetworkAnimator_t579711437 * __this, NetworkWriter_t560143343 * ___writer0, bool ___forceAll1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkAnimator_OnDeserialize_m2817559185 (NetworkAnimator_t579711437 * __this, NetworkReader_t3187690923 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetTrigger(System.String)
extern "C"  void NetworkAnimator_SetTrigger_m336534974 (NetworkAnimator_t579711437 * __this, String_t* ___triggerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetTrigger(System.Int32)
extern "C"  void NetworkAnimator_SetTrigger_m3370672475 (NetworkAnimator_t579711437 * __this, int32_t ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationServerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationServerMessage_m3151683039 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationParametersServerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationParametersServerMessage_m465332345 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationTriggerServerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationTriggerServerMessage_m2971801355 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationClientMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationClientMessage_m2685633315 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationParametersClientMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationParametersClientMessage_m3314388189 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationTriggerClientMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationTriggerClientMessage_m3513902215 (Il2CppObject * __this /* static, unused */, NetworkMessage_t2339216573 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::.cctor()
extern "C"  void NetworkAnimator__cctor_m490843823 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
