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

// GSN.Skill.Phoenix.Model.PopupManager
struct PopupManager_t2446372139;
// GSN.Skill.Phoenix.Model.Popups.IPopupModel
struct IPopupModel_t4086349582;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_PopupTyp3448311560.h"

// System.Void GSN.Skill.Phoenix.Model.PopupManager::.ctor()
extern "C"  void PopupManager__ctor_m3013343859 (PopupManager_t2446372139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.PopupType GSN.Skill.Phoenix.Model.PopupManager::GetTopPopupType()
extern "C"  int32_t PopupManager_GetTopPopupType_m3072098250 (PopupManager_t2446372139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.PopupManager::SetPopup(GSN.Skill.Phoenix.Model.Popups.IPopupModel)
extern "C"  void PopupManager_SetPopup_m4244292321 (PopupManager_t2446372139 * __this, Il2CppObject * ___popup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.PopupManager::RemovePopup(System.Int64)
extern "C"  void PopupManager_RemovePopup_m1253611813 (PopupManager_t2446372139 * __this, int64_t ___uid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.PopupManager::RemovePopup(GSN.Skill.Phoenix.Model.Popups.IPopupModel)
extern "C"  void PopupManager_RemovePopup_m1459871629 (PopupManager_t2446372139 * __this, Il2CppObject * ___popup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.PopupManager::ClearQueuedPopups()
extern "C"  void PopupManager_ClearQueuedPopups_m3351222532 (PopupManager_t2446372139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.PopupManager::Reset()
extern "C"  void PopupManager_Reset_m4086238468 (PopupManager_t2446372139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GSN.Skill.Phoenix.Model.PopupManager::GetUID()
extern "C"  int64_t PopupManager_GetUID_m4269665386 (PopupManager_t2446372139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.Model.PopupManager::ValidatePopup(GSN.Skill.Phoenix.Model.PopupType)
extern "C"  bool PopupManager_ValidatePopup_m463921734 (PopupManager_t2446372139 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.PopupManager::.cctor()
extern "C"  void PopupManager__cctor_m812654182 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
