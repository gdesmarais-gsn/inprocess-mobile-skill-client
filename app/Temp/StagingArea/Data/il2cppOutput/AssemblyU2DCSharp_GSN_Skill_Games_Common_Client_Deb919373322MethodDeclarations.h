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

// GSN.Skill.Games.Common.Client.DebugMenu.BaseDebugMenu/OnScaledGUIFunc
struct OnScaledGUIFunc_t919373322;
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

// System.Void GSN.Skill.Games.Common.Client.DebugMenu.BaseDebugMenu/OnScaledGUIFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void OnScaledGUIFunc__ctor_m876256743 (OnScaledGUIFunc_t919373322 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.BaseDebugMenu/OnScaledGUIFunc::Invoke(System.Single,System.Single)
extern "C"  void OnScaledGUIFunc_Invoke_m3874351507 (OnScaledGUIFunc_t919373322 * __this, float ___screenWidth0, float ___screenHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Client.DebugMenu.BaseDebugMenu/OnScaledGUIFunc::BeginInvoke(System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnScaledGUIFunc_BeginInvoke_m2484912100 (OnScaledGUIFunc_t919373322 * __this, float ___screenWidth0, float ___screenHeight1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.BaseDebugMenu/OnScaledGUIFunc::EndInvoke(System.IAsyncResult)
extern "C"  void OnScaledGUIFunc_EndInvoke_m60434717 (OnScaledGUIFunc_t919373322 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
