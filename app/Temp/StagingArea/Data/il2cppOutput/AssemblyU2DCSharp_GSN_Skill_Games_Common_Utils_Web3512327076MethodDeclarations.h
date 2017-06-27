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

// GSN.Skill.Games.Common.Utils.WebRequestJob
struct WebRequestJob_t3512327076;
// GSN.Skill.Games.Common.Utils.WebRequestDispatcher
struct WebRequestDispatcher_t345378452;
// GSN.Skill.Games.Common.Utils.RequestWrapper
struct RequestWrapper_t293827378;
// System.Net.WebResponse
struct WebResponse_t1895226051;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_WebR345378452.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Requ293827378.h"
#include "System_System_Net_WebResponse1895226051.h"

// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob::.ctor()
extern "C"  void WebRequestJob__ctor_m513522227 (WebRequestJob_t3512327076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.WebRequestJob::defaultFailChecker(GSN.Skill.Games.Common.Utils.WebRequestDispatcher)
extern "C"  bool WebRequestJob_defaultFailChecker_m3854382759 (WebRequestJob_t3512327076 * __this, WebRequestDispatcher_t345378452 * ___dispatcher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.WebRequestJob::defaultFatalChecker(GSN.Skill.Games.Common.Utils.WebRequestDispatcher)
extern "C"  bool WebRequestJob_defaultFatalChecker_m2631454439 (WebRequestJob_t3512327076 * __this, WebRequestDispatcher_t345378452 * ___dispatcher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.WebRequestJob::FailedFatally()
extern "C"  bool WebRequestJob_FailedFatally_m913280395 (WebRequestJob_t3512327076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.RequestWrapper GSN.Skill.Games.Common.Utils.WebRequestJob::get_Wrapper()
extern "C"  RequestWrapper_t293827378 * WebRequestJob_get_Wrapper_m1375861490 (WebRequestJob_t3512327076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob::set_Wrapper(GSN.Skill.Games.Common.Utils.RequestWrapper)
extern "C"  void WebRequestJob_set_Wrapper_m3325676909 (WebRequestJob_t3512327076 * __this, RequestWrapper_t293827378 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob::SetDefaultTimeout(System.Int32)
extern "C"  void WebRequestJob_SetDefaultTimeout_m2076694104 (Il2CppObject * __this /* static, unused */, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob::NewWrapper()
extern "C"  void WebRequestJob_NewWrapper_m2665644532 (WebRequestJob_t3512327076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob::CustomReset(System.Boolean)
extern "C"  void WebRequestJob_CustomReset_m3367685838 (WebRequestJob_t3512327076 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob::CustomAbort()
extern "C"  void WebRequestJob_CustomAbort_m656756886 (WebRequestJob_t3512327076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob::CustomStart()
extern "C"  void WebRequestJob_CustomStart_m1550579524 (WebRequestJob_t3512327076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob::.cctor()
extern "C"  void WebRequestJob__cctor_m1286167684 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob::<CustomStart>m__0()
extern "C"  void WebRequestJob_U3CCustomStartU3Em__0_m3376906287 (WebRequestJob_t3512327076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.WebRequestJob::<GlobalOnComplete>m__1(System.Net.WebResponse)
extern "C"  void WebRequestJob_U3CGlobalOnCompleteU3Em__1_m460642191 (Il2CppObject * __this /* static, unused */, WebResponse_t1895226051 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
