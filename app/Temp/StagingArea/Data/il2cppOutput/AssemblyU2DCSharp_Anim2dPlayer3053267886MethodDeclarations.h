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

// Anim2dPlayer
struct Anim2dPlayer_t3053267886;
// Anim2d[]
struct Anim2dU5BU5D_t1177073858;
// System.String
struct String_t;
// Anim2dPlayState/TimeEvent
struct TimeEvent_t3275616986;
// Anim2dPlayState
struct Anim2dPlayState_t1160144854;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// Stm.V1_0.Dispatcher
struct Dispatcher_t2840725577;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Anim2dPlayState_TimeEvent3275616986.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Anim2dPlayState1160144854.h"
#include "AssemblyU2DCSharp_Stm_V1_0_Dispatcher2840725577.h"

// System.Void Anim2dPlayer::.ctor()
extern "C"  void Anim2dPlayer__ctor_m1177453541 (Anim2dPlayer_t3053267886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Anim2d[] Anim2dPlayer::GetAnims()
extern "C"  Anim2dU5BU5D_t1177073858* Anim2dPlayer_GetAnims_m799663231 (Anim2dPlayer_t3053267886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Anim2dPlayer::get_LastAnimStateName()
extern "C"  String_t* Anim2dPlayer_get_LastAnimStateName_m1310962560 (Anim2dPlayer_t3053267886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2dPlayer::Awake()
extern "C"  void Anim2dPlayer_Awake_m3588923418 (Anim2dPlayer_t3053267886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Anim2dPlayer::EventSorter(Anim2dPlayState/TimeEvent,Anim2dPlayState/TimeEvent)
extern "C"  int32_t Anim2dPlayer_EventSorter_m4206562046 (Il2CppObject * __this /* static, unused */, TimeEvent_t3275616986 * ___a0, TimeEvent_t3275616986 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2dPlayer::Start()
extern "C"  void Anim2dPlayer_Start_m827584685 (Anim2dPlayer_t3053267886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2dPlayer::LegacySetup()
extern "C"  void Anim2dPlayer_LegacySetup_m3570603023 (Anim2dPlayer_t3053267886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2dPlayer::OnEnable()
extern "C"  void Anim2dPlayer_OnEnable_m2658250541 (Anim2dPlayer_t3053267886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2dPlayer::LateUpdate()
extern "C"  void Anim2dPlayer_LateUpdate_m1894653408 (Anim2dPlayer_t3053267886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2dPlayer::ForceApply()
extern "C"  void Anim2dPlayer_ForceApply_m2570219124 (Anim2dPlayer_t3053267886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2dPlayer::Step(System.Single)
extern "C"  void Anim2dPlayer_Step_m1706337892 (Anim2dPlayer_t3053267886 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Anim2dPlayer::GetOnEndEventName(System.String)
extern "C"  String_t* Anim2dPlayer_GetOnEndEventName_m4253393257 (Anim2dPlayer_t3053267886 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Anim2dPlayer::GetOnStartEventName(System.String)
extern "C"  String_t* Anim2dPlayer_GetOnStartEventName_m485751214 (Anim2dPlayer_t3053267886 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Anim2dPlayer::GetOnTimeEventName(System.String,System.Int32)
extern "C"  String_t* Anim2dPlayer_GetOnTimeEventName_m955537438 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Anim2dPlayer::GetOnEnterEventName(System.String)
extern "C"  String_t* Anim2dPlayer_GetOnEnterEventName_m1977637628 (Anim2dPlayer_t3053267886 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Anim2dPlayer::GetOnExitEventName(System.String)
extern "C"  String_t* Anim2dPlayer_GetOnExitEventName_m925338886 (Anim2dPlayer_t3053267886 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2dPlayer::Play(Anim2dPlayState)
extern "C"  void Anim2dPlayer_Play_m1655179527 (Anim2dPlayer_t3053267886 * __this, Anim2dPlayState_t1160144854 * ___playState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2dPlayer::Queue(Anim2dPlayState)
extern "C"  void Anim2dPlayer_Queue_m4252007530 (Anim2dPlayer_t3053267886 * __this, Anim2dPlayState_t1160144854 * ___playState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Anim2dPlayer::DoPlayQueued(Anim2dPlayState)
extern "C"  Il2CppObject * Anim2dPlayer_DoPlayQueued_m2725216591 (Anim2dPlayer_t3053267886 * __this, Anim2dPlayState_t1160144854 * ___playState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Anim2dPlayer::Stm.V1_0.IDynamicActor.ListDynamicActions()
extern "C"  Il2CppObject* Anim2dPlayer_Stm_V1_0_IDynamicActor_ListDynamicActions_m1175891622 (Anim2dPlayer_t3053267886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Anim2dPlayer::IndexToID(System.Int32)
extern "C"  String_t* Anim2dPlayer_IndexToID_m2815385181 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Anim2dPlayer::ListDynamicEvents()
extern "C"  Il2CppObject* Anim2dPlayer_ListDynamicEvents_m3602887611 (Anim2dPlayer_t3053267886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2dPlayer::Stm.V1_0.IDynamicActor.DoAction(Stm.V1_0.Dispatcher,System.String)
extern "C"  void Anim2dPlayer_Stm_V1_0_IDynamicActor_DoAction_m2177769552 (Anim2dPlayer_t3053267886 * __this, Dispatcher_t2840725577 * ___sender0, String_t* ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Anim2dPlayer::Action(System.String)
extern "C"  void Anim2dPlayer_Action_m862935005 (Anim2dPlayer_t3053267886 * __this, String_t* ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Anim2dPlayer::StateExists(System.String)
extern "C"  bool Anim2dPlayer_StateExists_m1037900020 (Anim2dPlayer_t3053267886 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Anim2dPlayer::get_isPlaying()
extern "C"  bool Anim2dPlayer_get_isPlaying_m2836816722 (Anim2dPlayer_t3053267886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
