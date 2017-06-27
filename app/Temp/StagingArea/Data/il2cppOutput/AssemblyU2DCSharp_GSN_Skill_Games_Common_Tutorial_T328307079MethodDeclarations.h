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

// GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepWillHideHandler
struct TutorialStepWillHideHandler_t328307079;
// System.Object
struct Il2CppObject;
// GSN.Skill.Games.Common.Tutorial.TutorialGroup
struct TutorialGroup_t2606817647;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tutorial_2606817647.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepWillHideHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void TutorialStepWillHideHandler__ctor_m882085450 (TutorialStepWillHideHandler_t328307079 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepWillHideHandler::Invoke(GSN.Skill.Games.Common.Tutorial.TutorialGroup,System.String)
extern "C"  void TutorialStepWillHideHandler_Invoke_m1025099578 (TutorialStepWillHideHandler_t328307079 * __this, TutorialGroup_t2606817647 * ___group0, String_t* ___stepId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepWillHideHandler::BeginInvoke(GSN.Skill.Games.Common.Tutorial.TutorialGroup,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TutorialStepWillHideHandler_BeginInvoke_m39512485 (TutorialStepWillHideHandler_t328307079 * __this, TutorialGroup_t2606817647 * ___group0, String_t* ___stepId1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepWillHideHandler::EndInvoke(System.IAsyncResult)
extern "C"  void TutorialStepWillHideHandler_EndInvoke_m4154905344 (TutorialStepWillHideHandler_t328307079 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
