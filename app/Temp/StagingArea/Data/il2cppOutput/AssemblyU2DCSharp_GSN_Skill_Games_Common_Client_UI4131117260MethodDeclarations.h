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

// GSN.Skill.Games.Common.Client.UIHudBase
struct UIHudBase_t4131117260;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GSN.Skill.Games.Common.Events.IModelEvent
struct IModelEvent_t642686546;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Client.UIHudBase::.ctor()
extern "C"  void UIHudBase__ctor_m63415575 (UIHudBase_t4131117260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Client.UIHudBase::get_currentTime()
extern "C"  int32_t UIHudBase_get_currentTime_m3120255288 (UIHudBase_t4131117260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::set_currentTime(System.Int32)
extern "C"  void UIHudBase_set_currentTime_m1473127223 (UIHudBase_t4131117260 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::Awake()
extern "C"  void UIHudBase_Awake_m314468454 (UIHudBase_t4131117260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::PreloadAbortDialog()
extern "C"  void UIHudBase_PreloadAbortDialog_m2374863452 (UIHudBase_t4131117260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::ShowReplayHud()
extern "C"  void UIHudBase_ShowReplayHud_m3691717518 (UIHudBase_t4131117260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::OnExitClicked()
extern "C"  void UIHudBase_OnExitClicked_m637628705 (UIHudBase_t4131117260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::ShowAbortDialog()
extern "C"  void UIHudBase_ShowAbortDialog_m4062334532 (UIHudBase_t4131117260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::ConfirmAbortDialog()
extern "C"  void UIHudBase_ConfirmAbortDialog_m433263147 (UIHudBase_t4131117260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::SetAbortDialogStringIds(System.String,System.String)
extern "C"  void UIHudBase_SetAbortDialogStringIds_m3549362864 (UIHudBase_t4131117260 * __this, String_t* ___headerId0, String_t* ___messageId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::SpeedUpTimeDown()
extern "C"  void UIHudBase_SpeedUpTimeDown_m93489506 (UIHudBase_t4131117260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::SpeedUpTimeUp()
extern "C"  void UIHudBase_SpeedUpTimeUp_m669119005 (UIHudBase_t4131117260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.UIHudBase::SpeedUpTimeTap()
extern "C"  Il2CppObject * UIHudBase_SpeedUpTimeTap_m2310867731 (UIHudBase_t4131117260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::OnUpdateClock(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void UIHudBase_OnUpdateClock_m1282591159 (UIHudBase_t4131117260 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::OnScoreUpdate(GSN.Skill.Games.Common.Events.IModelEvent)
extern "C"  void UIHudBase_OnScoreUpdate_m2744547747 (UIHudBase_t4131117260 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.UIHudBase::HideAbortDialog()
extern "C"  void UIHudBase_HideAbortDialog_m3061933185 (UIHudBase_t4131117260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
