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

// GSN.Skill.Games.Common.Tutorial.TutorialGroup
struct TutorialGroup_t2606817647;
// GSN.Skill.Games.Common.Tutorial.TutorialStep
struct TutorialStep_t11121064;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Tutorial.JSONTutorialGroup
struct JSONTutorialGroup_t2216388037;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tutorial_Tu11121064.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Tutorial_2216388037.h"

// System.Void GSN.Skill.Games.Common.Tutorial.TutorialGroup::.ctor()
extern "C"  void TutorialGroup__ctor_m914236973 (TutorialGroup_t2606817647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialGroup::AddStep(GSN.Skill.Games.Common.Tutorial.TutorialStep)
extern "C"  void TutorialGroup_AddStep_m1793775825 (TutorialGroup_t2606817647 * __this, TutorialStep_t11121064 * ___step0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialGroup::RemoveStep(System.String)
extern "C"  void TutorialGroup_RemoveStep_m2000499735 (TutorialGroup_t2606817647 * __this, String_t* ___stepName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialGroup::SetOrderStep(System.String,System.Int32)
extern "C"  void TutorialGroup_SetOrderStep_m3402735980 (TutorialGroup_t2606817647 * __this, String_t* ___stepName0, int32_t ___newOrder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Tutorial.TutorialGroup::CompleteStep(System.Int32)
extern "C"  bool TutorialGroup_CompleteStep_m3529664895 (TutorialGroup_t2606817647 * __this, int32_t ___stepNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialGroup::CompleteAllSteps()
extern "C"  void TutorialGroup_CompleteAllSteps_m68474902 (TutorialGroup_t2606817647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialGroup::ClearCompletedStep(System.Int32)
extern "C"  void TutorialGroup_ClearCompletedStep_m3173646374 (TutorialGroup_t2606817647 * __this, int32_t ___stepNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialGroup::ClearAllSteps()
extern "C"  void TutorialGroup_ClearAllSteps_m745856620 (TutorialGroup_t2606817647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Tutorial.TutorialGroup::IsStepCompleted(System.Int32)
extern "C"  bool TutorialGroup_IsStepCompleted_m2477010225 (TutorialGroup_t2606817647 * __this, int32_t ___stepNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Tutorial.TutorialGroup::IsCompleted()
extern "C"  bool TutorialGroup_IsCompleted_m3622251700 (TutorialGroup_t2606817647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Tutorial.TutorialGroup::GetStepNumber(System.String)
extern "C"  int32_t TutorialGroup_GetStepNumber_m3095085700 (TutorialGroup_t2606817647 * __this, String_t* ___stepId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.TutorialGroup::Load(GSN.Skill.Games.Common.Tutorial.JSONTutorialGroup)
extern "C"  void TutorialGroup_Load_m1386559613 (TutorialGroup_t2606817647 * __this, JSONTutorialGroup_t2216388037 * ___jsonGroup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
