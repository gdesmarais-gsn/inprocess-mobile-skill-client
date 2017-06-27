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

// GSN.Skill.Phoenix.Model.RequestManager/GameListDataUpdate
struct GameListDataUpdate_t3950550015;
// System.Object
struct Il2CppObject;
// GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesRequestData
struct ListGameTypesRequestData_t3554081872;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Requests_Tourn3554081872.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Phoenix.Model.RequestManager/GameListDataUpdate::.ctor(System.Object,System.IntPtr)
extern "C"  void GameListDataUpdate__ctor_m238048248 (GameListDataUpdate_t3950550015 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.RequestManager/GameListDataUpdate::Invoke(GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesRequestData)
extern "C"  void GameListDataUpdate_Invoke_m712648507 (GameListDataUpdate_t3950550015 * __this, ListGameTypesRequestData_t3554081872 * ___gameListData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Phoenix.Model.RequestManager/GameListDataUpdate::BeginInvoke(GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesRequestData,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GameListDataUpdate_BeginInvoke_m1771398686 (GameListDataUpdate_t3950550015 * __this, ListGameTypesRequestData_t3554081872 * ___gameListData0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.RequestManager/GameListDataUpdate::EndInvoke(System.IAsyncResult)
extern "C"  void GameListDataUpdate_EndInvoke_m3207470978 (GameListDataUpdate_t3950550015 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
