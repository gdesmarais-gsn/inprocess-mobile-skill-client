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

// GSN.Skill.Games.Common.Utils.RequestWrapper
struct RequestWrapper_t293827378;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer
struct requestCustomizer_t2087322079;
// GSN.Skill.Games.Common.Utils.WebRequestDispatcher
struct WebRequestDispatcher_t345378452;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Req3245723708.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Req2087322079.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_WebR345378452.h"
#include "Json_NET_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "System_Core_System_Action3226471752.h"

// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper::.ctor(System.String,GSN.Skill.Games.Common.Utils.RequestWrapper/HttpMethod)
extern "C"  void RequestWrapper__ctor_m981064589 (RequestWrapper_t293827378 * __this, String_t* ___url_0, int32_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer GSN.Skill.Games.Common.Utils.RequestWrapper::get_customizeRequest()
extern "C"  requestCustomizer_t2087322079 * RequestWrapper_get_customizeRequest_m1368796308 (RequestWrapper_t293827378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper::set_customizeRequest(GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer)
extern "C"  void RequestWrapper_set_customizeRequest_m3665372035 (RequestWrapper_t293827378 * __this, requestCustomizer_t2087322079 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.WebRequestDispatcher GSN.Skill.Games.Common.Utils.RequestWrapper::get_Dispatcher()
extern "C"  WebRequestDispatcher_t345378452 * RequestWrapper_get_Dispatcher_m2570750270 (RequestWrapper_t293827378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper::set_Dispatcher(GSN.Skill.Games.Common.Utils.WebRequestDispatcher)
extern "C"  void RequestWrapper_set_Dispatcher_m187725133 (RequestWrapper_t293827378 * __this, WebRequestDispatcher_t345378452 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper::addHeader(System.String,System.String)
extern "C"  void RequestWrapper_addHeader_m1952933113 (RequestWrapper_t293827378 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper::addAuthHeader(System.String)
extern "C"  void RequestWrapper_addAuthHeader_m3316441911 (RequestWrapper_t293827378 * __this, String_t* ___authToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper::addParameter(System.String,Newtonsoft.Json.Linq.JToken)
extern "C"  void RequestWrapper_addParameter_m1248361703 (RequestWrapper_t293827378 * __this, String_t* ___key0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper::addQueryParameter(System.String,System.String)
extern "C"  void RequestWrapper_addQueryParameter_m4107403417 (RequestWrapper_t293827378 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper::send(System.Action`1<System.String>,System.Action`1<System.String>)
extern "C"  void RequestWrapper_send_m3362321519 (RequestWrapper_t293827378 * __this, Action_1_t1831019615 * ___successCallback0, Action_1_t1831019615 * ___failureCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper::send(System.Action,System.Int32)
extern "C"  void RequestWrapper_send_m3096881651 (RequestWrapper_t293827378 * __this, Action_t3226471752 * ___doneAction0, int32_t ___timeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RequestWrapper::.cctor()
extern "C"  void RequestWrapper__cctor_m2723283718 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
