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

// GSN.Skill.Phoenix.Model.Popups.GpsDeniedPopupModel
struct GpsDeniedPopupModel_t3863095986;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_PopupTyp3448311560.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Utils_GeoLocat1069557131.h"

// System.Void GSN.Skill.Phoenix.Model.Popups.GpsDeniedPopupModel::.ctor(System.Action,System.Action)
extern "C"  void GpsDeniedPopupModel__ctor_m1416372515 (GpsDeniedPopupModel_t3863095986 * __this, Action_t3226471752 * ___callback0, Action_t3226471752 * ___cancelCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.Model.PopupType GSN.Skill.Phoenix.Model.Popups.GpsDeniedPopupModel::get_type()
extern "C"  int32_t GpsDeniedPopupModel_get_type_m788375428 (GpsDeniedPopupModel_t3863095986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.GpsDeniedPopupModel::OnOpen()
extern "C"  void GpsDeniedPopupModel_OnOpen_m3338174766 (GpsDeniedPopupModel_t3863095986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.GpsDeniedPopupModel::OnClose()
extern "C"  void GpsDeniedPopupModel_OnClose_m3125401804 (GpsDeniedPopupModel_t3863095986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.Popups.GpsDeniedPopupModel::UpdateState(GSN.Skill.Phoenix.Utils.GeoLocation.GpsResult)
extern "C"  void GpsDeniedPopupModel_UpdateState_m1842944695 (GpsDeniedPopupModel_t3863095986 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
