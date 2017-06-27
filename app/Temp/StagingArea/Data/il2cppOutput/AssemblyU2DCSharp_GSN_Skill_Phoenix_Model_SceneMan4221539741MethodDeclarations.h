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

// GSN.Skill.Phoenix.Model.SceneManager/LoadSceneProgressUpdate
struct LoadSceneProgressUpdate_t4221539741;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Phoenix.Model.SceneManager/LoadSceneProgressUpdate::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadSceneProgressUpdate__ctor_m1737460694 (LoadSceneProgressUpdate_t4221539741 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.SceneManager/LoadSceneProgressUpdate::Invoke(System.Single)
extern "C"  void LoadSceneProgressUpdate_Invoke_m728540305 (LoadSceneProgressUpdate_t4221539741 * __this, float ___progress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Phoenix.Model.SceneManager/LoadSceneProgressUpdate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadSceneProgressUpdate_BeginInvoke_m924493474 (LoadSceneProgressUpdate_t4221539741 * __this, float ___progress0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.SceneManager/LoadSceneProgressUpdate::EndInvoke(System.IAsyncResult)
extern "C"  void LoadSceneProgressUpdate_EndInvoke_m540092092 (LoadSceneProgressUpdate_t4221539741 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
