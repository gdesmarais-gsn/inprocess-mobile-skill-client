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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.TimeZoneInfo/TransitionTime
struct TransitionTime_t3441274853;
struct TransitionTime_t3441274853_marshaled_pinvoke;
struct TransitionTime_t3441274853_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_TimeZoneInfo_TransitionTime3441274853.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.TimeZoneInfo/TransitionTime::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TransitionTime_GetObjectData_m2395761042 (TransitionTime_t3441274853 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.Object)
extern "C"  bool TransitionTime_Equals_m2186578453 (TransitionTime_t3441274853 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
extern "C"  bool TransitionTime_Equals_m412469520 (TransitionTime_t3441274853 * __this, TransitionTime_t3441274853  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo/TransitionTime::GetHashCode()
extern "C"  int32_t TransitionTime_GetHashCode_m3645594211 (TransitionTime_t3441274853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::OnDeserialization(System.Object)
extern "C"  void TransitionTime_OnDeserialization_m2002627132 (TransitionTime_t3441274853 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Equality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  bool TransitionTime_op_Equality_m136520400 (Il2CppObject * __this /* static, unused */, TransitionTime_t3441274853  ___t10, TransitionTime_t3441274853  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TransitionTime_t3441274853;
struct TransitionTime_t3441274853_marshaled_pinvoke;

extern "C" void TransitionTime_t3441274853_marshal_pinvoke(const TransitionTime_t3441274853& unmarshaled, TransitionTime_t3441274853_marshaled_pinvoke& marshaled);
extern "C" void TransitionTime_t3441274853_marshal_pinvoke_back(const TransitionTime_t3441274853_marshaled_pinvoke& marshaled, TransitionTime_t3441274853& unmarshaled);
extern "C" void TransitionTime_t3441274853_marshal_pinvoke_cleanup(TransitionTime_t3441274853_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TransitionTime_t3441274853;
struct TransitionTime_t3441274853_marshaled_com;

extern "C" void TransitionTime_t3441274853_marshal_com(const TransitionTime_t3441274853& unmarshaled, TransitionTime_t3441274853_marshaled_com& marshaled);
extern "C" void TransitionTime_t3441274853_marshal_com_back(const TransitionTime_t3441274853_marshaled_com& marshaled, TransitionTime_t3441274853& unmarshaled);
extern "C" void TransitionTime_t3441274853_marshal_com_cleanup(TransitionTime_t3441274853_marshaled_com& marshaled);
