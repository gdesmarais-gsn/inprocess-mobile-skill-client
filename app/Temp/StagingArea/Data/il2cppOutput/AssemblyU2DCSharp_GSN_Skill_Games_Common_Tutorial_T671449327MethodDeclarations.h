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

// GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepHiddenHandler
struct TutorialStepHiddenHandler_t671449327;
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

// System.Void GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepHiddenHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void TutorialStepHiddenHandler__ctor_m219523822 (TutorialStepHiddenHandler_t671449327 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepHiddenHandler::Invoke(GSN.Skill.Games.Common.Tutorial.TutorialGroup,System.String)
extern "C"  void TutorialStepHiddenHandler_Invoke_m3725934518 (TutorialStepHiddenHandler_t671449327 * __this, TutorialGroup_t2606817647 * ___group0, String_t* ___stepId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepHiddenHandler::BeginInvoke(GSN.Skill.Games.Common.Tutorial.TutorialGroup,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TutorialStepHiddenHandler_BeginInvoke_m4140606557 (TutorialStepHiddenHandler_t671449327 * __this, TutorialGroup_t2606817647 * ___group0, String_t* ___stepId1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepHiddenHandler::EndInvoke(System.IAsyncResult)
extern "C"  void TutorialStepHiddenHandler_EndInvoke_m413450320 (TutorialStepHiddenHandler_t671449327 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
