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

// GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationParser
struct GeolocationParser_t2750765603;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou3499681863.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationParser::.ctor(System.Object,System.IntPtr)
extern "C"  void GeolocationParser__ctor_m334117879 (GeolocationParser_t2750765603 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Account.CheckLocationLegalityRequestData/GpsData GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationParser::Invoke(System.String)
extern "C"  GpsData_t3499681863  GeolocationParser_Invoke_m2877044327 (GeolocationParser_t2750765603 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationParser::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GeolocationParser_BeginInvoke_m1703594184 (GeolocationParser_t2750765603 * __this, String_t* ___data0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Requests.Account.CheckLocationLegalityRequestData/GpsData GSN.Skill.Phoenix.Utils.GeoLocation.GeolocationParser::EndInvoke(System.IAsyncResult)
extern "C"  GpsData_t3499681863  GeolocationParser_EndInvoke_m2674376479 (GeolocationParser_t2750765603 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
