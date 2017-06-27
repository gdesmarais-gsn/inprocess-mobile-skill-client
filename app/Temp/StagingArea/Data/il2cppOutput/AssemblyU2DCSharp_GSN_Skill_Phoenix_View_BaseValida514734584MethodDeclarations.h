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

// GSN.Skill.Phoenix.View.BaseValidatableField
struct BaseValidatableField_t514734584;
// System.String
struct String_t;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_BaseValida514734584.h"

// System.Void GSN.Skill.Phoenix.View.BaseValidatableField::.ctor()
extern "C"  void BaseValidatableField__ctor_m1053730104 (BaseValidatableField_t514734584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.BaseValidatableField::OnEnable()
extern "C"  void BaseValidatableField_OnEnable_m2481048388 (BaseValidatableField_t514734584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.BaseValidatableField::OnDisable()
extern "C"  void BaseValidatableField_OnDisable_m832756035 (BaseValidatableField_t514734584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.BaseValidatableField::OnUserEditFinished(System.String)
extern "C"  void BaseValidatableField_OnUserEditFinished_m3721326692 (BaseValidatableField_t514734584 * __this, String_t* ___textFieldText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.BaseValidatableField::ClearValidityFailure()
extern "C"  void BaseValidatableField_ClearValidityFailure_m3322801453 (BaseValidatableField_t514734584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.BaseValidatableField::OnInputFieldErrorEvent(GSN.Skill.Events.IEvent)
extern "C"  void BaseValidatableField_OnInputFieldErrorEvent_m44264934 (BaseValidatableField_t514734584 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.BaseValidatableField::OnValidInputEvent(GSN.Skill.Events.IEvent)
extern "C"  void BaseValidatableField_OnValidInputEvent_m1552727830 (BaseValidatableField_t514734584 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.View.BaseValidatableField::IsValid()
extern "C"  bool BaseValidatableField_IsValid_m3120033584 (BaseValidatableField_t514734584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.BaseValidatableField::RevalidateOnVisibleError()
extern "C"  void BaseValidatableField_RevalidateOnVisibleError_m608788496 (BaseValidatableField_t514734584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.BaseValidatableField::SetRevalidateOnVisibleErrorTarget(GSN.Skill.Phoenix.View.BaseValidatableField)
extern "C"  void BaseValidatableField_SetRevalidateOnVisibleErrorTarget_m2618685492 (BaseValidatableField_t514734584 * __this, BaseValidatableField_t514734584 * ___fieldToLink0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
