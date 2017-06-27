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

// GSN.Skill.Phoenix.Model.RequestManager/UserDataUpdate
struct UserDataUpdate_t3995399920;
// System.Object
struct Il2CppObject;
// GSN.Skill.Phoenix.Requests.Account.User
struct User_t1577144177;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Accou1577144177.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Phoenix.Model.RequestManager/UserDataUpdate::.ctor(System.Object,System.IntPtr)
extern "C"  void UserDataUpdate__ctor_m742706911 (UserDataUpdate_t3995399920 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.RequestManager/UserDataUpdate::Invoke(GSN.Skill.Phoenix.Requests.Account.User)
extern "C"  void UserDataUpdate_Invoke_m1885458989 (UserDataUpdate_t3995399920 * __this, User_t1577144177 * ___userData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Phoenix.Model.RequestManager/UserDataUpdate::BeginInvoke(GSN.Skill.Phoenix.Requests.Account.User,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UserDataUpdate_BeginInvoke_m95291410 (UserDataUpdate_t3995399920 * __this, User_t1577144177 * ___userData0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.RequestManager/UserDataUpdate::EndInvoke(System.IAsyncResult)
extern "C"  void UserDataUpdate_EndInvoke_m3076274097 (UserDataUpdate_t3995399920 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
