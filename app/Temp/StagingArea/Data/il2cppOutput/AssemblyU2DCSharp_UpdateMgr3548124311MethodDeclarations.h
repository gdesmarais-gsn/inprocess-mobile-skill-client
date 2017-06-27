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

// UpdateMgr
struct UpdateMgr_t3548124311;
// CoroutineHandle
struct CoroutineHandle_t3736301024;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// Delegates/Action
struct Action_t1511407763;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_SequenceType4084443865.h"
#include "AssemblyU2DCSharp_CoroutineHandle3736301024.h"
#include "AssemblyU2DCSharp_Delegates_Action1511407763.h"

// System.Void UpdateMgr::.ctor()
extern "C"  void UpdateMgr__ctor_m2947882044 (UpdateMgr_t3548124311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UpdateMgr UpdateMgr::get_InstGuaranteed()
extern "C"  UpdateMgr_t3548124311 * UpdateMgr_get_InstGuaranteed_m3503664783 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UpdateMgr UpdateMgr::get_InstGuaranteedEvenInEditMode()
extern "C"  UpdateMgr_t3548124311 * UpdateMgr_get_InstGuaranteedEvenInEditMode_m779079431 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UpdateMgr UpdateMgr::CreateInstance()
extern "C"  UpdateMgr_t3548124311 * UpdateMgr_CreateInstance_m1181559145 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CoroutineHandle UpdateMgr::StartSequence(UnityEngine.GameObject,System.Collections.IEnumerator,SequenceType,System.Boolean)
extern "C"  CoroutineHandle_t3736301024 * UpdateMgr_StartSequence_m802640363 (UpdateMgr_t3548124311 * __this, GameObject_t1756533147 * ___target0, Il2CppObject * ___function1, int32_t ___type2, bool ___syncStart3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr::StartSequence(CoroutineHandle&,UnityEngine.GameObject,System.Collections.IEnumerator,SequenceType,System.Boolean)
extern "C"  void UpdateMgr_StartSequence_m4191049554 (UpdateMgr_t3548124311 * __this, CoroutineHandle_t3736301024 ** ___coroutineHandle0, GameObject_t1756533147 * ___target1, Il2CppObject * ___function2, int32_t ___type3, bool ___syncStart4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CoroutineHandle UpdateMgr::StartSequence(System.Collections.IEnumerator,SequenceType,System.Boolean)
extern "C"  CoroutineHandle_t3736301024 * UpdateMgr_StartSequence_m1338327591 (UpdateMgr_t3548124311 * __this, Il2CppObject * ___function0, int32_t ___type1, bool ___syncStart2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr::StartSequence(CoroutineHandle&,System.Collections.IEnumerator,SequenceType,System.Boolean)
extern "C"  void UpdateMgr_StartSequence_m1727088328 (UpdateMgr_t3548124311 * __this, CoroutineHandle_t3736301024 ** ___coroutineHandle0, Il2CppObject * ___function1, int32_t ___type2, bool ___syncStart3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr::StopSequence(CoroutineHandle)
extern "C"  void UpdateMgr_StopSequence_m1467234501 (UpdateMgr_t3548124311 * __this, CoroutineHandle_t3736301024 * ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CoroutineHandle UpdateMgr::ResumeSequence(CoroutineHandle,SequenceType)
extern "C"  CoroutineHandle_t3736301024 * UpdateMgr_ResumeSequence_m65573628 (UpdateMgr_t3548124311 * __this, CoroutineHandle_t3736301024 * ___handle0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr::StopWaitingForSequence(CoroutineHandle)
extern "C"  void UpdateMgr_StopWaitingForSequence_m310644293 (UpdateMgr_t3548124311 * __this, CoroutineHandle_t3736301024 * ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr::StopAllSequences()
extern "C"  void UpdateMgr_StopAllSequences_m2761307103 (UpdateMgr_t3548124311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UpdateMgr::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t2299508840 * UpdateMgr_StartCoroutine_m625877643 (UpdateMgr_t3548124311 * __this, Il2CppObject * ___routine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr::Awake()
extern "C"  void UpdateMgr_Awake_m4013830483 (UpdateMgr_t3548124311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr::Initialize()
extern "C"  void UpdateMgr_Initialize_m988869488 (UpdateMgr_t3548124311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr::add_onDestroy(Delegates/Action)
extern "C"  void UpdateMgr_add_onDestroy_m521788784 (UpdateMgr_t3548124311 * __this, Action_t1511407763 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr::remove_onDestroy(Delegates/Action)
extern "C"  void UpdateMgr_remove_onDestroy_m2376347453 (UpdateMgr_t3548124311 * __this, Action_t1511407763 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr::OnDestroy()
extern "C"  void UpdateMgr_OnDestroy_m2546827401 (UpdateMgr_t3548124311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr::Update()
extern "C"  void UpdateMgr_Update_m1457003551 (UpdateMgr_t3548124311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr::OnApplicationQuit()
extern "C"  void UpdateMgr_OnApplicationQuit_m4060057818 (UpdateMgr_t3548124311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
