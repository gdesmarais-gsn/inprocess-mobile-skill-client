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

// GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/SendEventFunction
struct SendEventFunction_t4048650273;
// System.Object
struct Il2CppObject;
// GSN.Skill.Phoenix.Model.AnalyticsAttributes
struct AnalyticsAttributes_t3724305597;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Analytic3724305597.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/SendEventFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void SendEventFunction__ctor_m53934934 (SendEventFunction_t4048650273 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/SendEventFunction::Invoke(GSN.Skill.Phoenix.Model.AnalyticsAttributes)
extern "C"  void SendEventFunction_Invoke_m3726954712 (SendEventFunction_t4048650273 * __this, AnalyticsAttributes_t3724305597 * ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/SendEventFunction::BeginInvoke(GSN.Skill.Phoenix.Model.AnalyticsAttributes,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SendEventFunction_BeginInvoke_m2437594407 (SendEventFunction_t4048650273 * __this, AnalyticsAttributes_t3724305597 * ___attributes0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/SendEventFunction::EndInvoke(System.IAsyncResult)
extern "C"  void SendEventFunction_EndInvoke_m2544740984 (SendEventFunction_t4048650273 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
