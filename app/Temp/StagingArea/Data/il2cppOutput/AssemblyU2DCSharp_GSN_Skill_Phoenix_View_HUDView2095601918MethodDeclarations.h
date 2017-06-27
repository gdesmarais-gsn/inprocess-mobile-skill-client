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

// GSN.Skill.Phoenix.View.HUDView
struct HUDView_t2095601918;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;

#include "codegen/il2cpp-codegen.h"

// System.Void GSN.Skill.Phoenix.View.HUDView::.ctor()
extern "C"  void HUDView__ctor_m99973250 (HUDView_t2095601918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.HUDView::OnEnable()
extern "C"  void HUDView_OnEnable_m1743865938 (HUDView_t2095601918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.HUDView::OnDisable()
extern "C"  void HUDView_OnDisable_m1907208973 (HUDView_t2095601918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.HUDView::HandleBalanceUpdate(System.Single,System.Single,System.Action`1<System.Single>)
extern "C"  void HUDView_HandleBalanceUpdate_m476979766 (HUDView_t2095601918 * __this, float ___currentBalance0, float ___newBalance1, Action_1_t1878309314 * ___OnUpdate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.HUDView::OnResetApp(GSN.Skill.Events.IEvent)
extern "C"  void HUDView_OnResetApp_m1626705420 (HUDView_t2095601918 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.HUDView::OnRewardsPointsBalanceUpdate(GSN.Skill.Events.IEvent)
extern "C"  void HUDView_OnRewardsPointsBalanceUpdate_m4282475534 (HUDView_t2095601918 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.HUDView::OnCashBalanceUpdate(GSN.Skill.Events.IEvent)
extern "C"  void HUDView_OnCashBalanceUpdate_m1713273538 (HUDView_t2095601918 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.HUDView::OnDepositButton()
extern "C"  void HUDView_OnDepositButton_m1764829567 (HUDView_t2095601918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.HUDView::OnRewardsButton()
extern "C"  void HUDView_OnRewardsButton_m737931359 (HUDView_t2095601918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.HUDView::OnProfileButton()
extern "C"  void HUDView_OnProfileButton_m3896019112 (HUDView_t2095601918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.HUDView::<OnRewardsPointsBalanceUpdate>m__0(System.Single)
extern "C"  void HUDView_U3COnRewardsPointsBalanceUpdateU3Em__0_m1164767347 (HUDView_t2095601918 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.HUDView::<OnCashBalanceUpdate>m__1(System.Single)
extern "C"  void HUDView_U3COnCashBalanceUpdateU3Em__1_m4144487102 (HUDView_t2095601918 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
