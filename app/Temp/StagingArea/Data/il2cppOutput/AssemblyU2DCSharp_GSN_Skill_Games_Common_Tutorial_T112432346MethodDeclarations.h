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

// GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepShownHandler
struct TutorialStepShownHandler_t112432346;
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

// System.Void GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepShownHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void TutorialStepShownHandler__ctor_m1853488221 (TutorialStepShownHandler_t112432346 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepShownHandler::Invoke(GSN.Skill.Games.Common.Tutorial.TutorialGroup,System.String)
extern "C"  void TutorialStepShownHandler_Invoke_m1617722321 (TutorialStepShownHandler_t112432346 * __this, TutorialGroup_t2606817647 * ___group0, String_t* ___stepId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepShownHandler::BeginInvoke(GSN.Skill.Games.Common.Tutorial.TutorialGroup,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TutorialStepShownHandler_BeginInvoke_m3461327036 (TutorialStepShownHandler_t112432346 * __this, TutorialGroup_t2606817647 * ___group0, String_t* ___stepId1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialManager/TutorialStepShownHandler::EndInvoke(System.IAsyncResult)
extern "C"  void TutorialStepShownHandler_EndInvoke_m371520511 (TutorialStepShownHandler_t112432346 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
