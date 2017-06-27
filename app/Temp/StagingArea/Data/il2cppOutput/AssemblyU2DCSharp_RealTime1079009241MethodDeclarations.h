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

// RealTime
struct RealTime_t1079009241;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TimeCategory4008096495.h"

// System.Void RealTime::.ctor()
extern "C"  void RealTime__ctor_m2996256456 (RealTime_t1079009241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RealTime::DeltaFor(TimeCategory)
extern "C"  float RealTime_DeltaFor_m560309498 (Il2CppObject * __this /* static, unused */, int32_t ___cat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RealTime::get_DeltaTime()
extern "C"  float RealTime_get_DeltaTime_m1977007638 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RealTime::TimeFor(TimeCategory)
extern "C"  float RealTime_TimeFor_m4258543729 (Il2CppObject * __this /* static, unused */, int32_t ___cat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RealTime::get_TimeNow()
extern "C"  float RealTime_get_TimeNow_m3820609658 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RealTime::DoWaitForSeconds(System.Single)
extern "C"  Il2CppObject * RealTime_DoWaitForSeconds_m3941726719 (RealTime_t1079009241 * __this, float ___dt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RealTime RealTime::get_Inst()
extern "C"  RealTime_t1079009241 * RealTime_get_Inst_m247457733 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RealTime::get_fixedDeltaTime()
extern "C"  float RealTime_get_fixedDeltaTime_m3324355776 (RealTime_t1079009241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealTime::set_fixedDeltaTime(System.Single)
extern "C"  void RealTime_set_fixedDeltaTime_m3264276927 (RealTime_t1079009241 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealTime::Awake()
extern "C"  void RealTime_Awake_m3624977541 (RealTime_t1079009241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealTime::Start()
extern "C"  void RealTime_Start_m934682072 (RealTime_t1079009241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealTime::OnDestroy()
extern "C"  void RealTime_OnDestroy_m3803630943 (RealTime_t1079009241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealTime::Update()
extern "C"  void RealTime_Update_m2867301825 (RealTime_t1079009241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RealTime::GetRealTimeSinceStartup()
extern "C"  float RealTime_GetRealTimeSinceStartup_m3328795496 (RealTime_t1079009241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
