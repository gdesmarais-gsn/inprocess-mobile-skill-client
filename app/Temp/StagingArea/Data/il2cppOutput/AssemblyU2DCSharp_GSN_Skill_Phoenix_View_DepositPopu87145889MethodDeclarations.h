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

// GSN.Skill.Phoenix.View.DepositPopupView
struct DepositPopupView_t87145889;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_GetDepositConf1479940912.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Phoenix.View.DepositPopupView::.ctor()
extern "C"  void DepositPopupView__ctor_m1743216131 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnEnable()
extern "C"  void DepositPopupView_OnEnable_m2212380303 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnDisable()
extern "C"  void DepositPopupView_OnDisable_m2608355016 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::SetInitialState()
extern "C"  void DepositPopupView_SetInitialState_m2346159514 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnFetchPopupBeginEvent(GSN.Skill.Events.IEvent)
extern "C"  void DepositPopupView_OnFetchPopupBeginEvent_m3109740252 (DepositPopupView_t87145889 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnFetchPopupCompleteEvent(GSN.Skill.Events.IEvent)
extern "C"  void DepositPopupView_OnFetchPopupCompleteEvent_m3198067720 (DepositPopupView_t87145889 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnDepositDataSuccess(GSN.Skill.Events.IEvent)
extern "C"  void DepositPopupView_OnDepositDataSuccess_m3371944160 (DepositPopupView_t87145889 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnMakeDepositSuccess(GSN.Skill.Events.IEvent)
extern "C"  void DepositPopupView_OnMakeDepositSuccess_m3865470914 (DepositPopupView_t87145889 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::SetReturnUserPages()
extern "C"  void DepositPopupView_SetReturnUserPages_m2017724996 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::SetAddCreditCardpages()
extern "C"  void DepositPopupView_SetAddCreditCardpages_m860135605 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnCloseButton()
extern "C"  void DepositPopupView_OnCloseButton_m1729513452 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnBackButton()
extern "C"  void DepositPopupView_OnBackButton_m3342509067 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::ChangeDepositPage(System.Int32)
extern "C"  void DepositPopupView_ChangeDepositPage_m3366202067 (DepositPopupView_t87145889 * __this, int32_t ___pageIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnDepositAmountSelected(GSN.Skill.Phoenix.GetDepositConfigDataSuccessEvent/DepositAmount)
extern "C"  void DepositPopupView_OnDepositAmountSelected_m3827821595 (DepositPopupView_t87145889 * __this, DepositAmount_t1479940912  ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnValidDepositLocation(GSN.Skill.Events.IEvent)
extern "C"  void DepositPopupView_OnValidDepositLocation_m3443291810 (DepositPopupView_t87145889 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnCreditCardInfoEntered(System.String,System.String,System.String,System.String)
extern "C"  void DepositPopupView_OnCreditCardInfoEntered_m1397481016 (DepositPopupView_t87145889 * __this, String_t* ___ccNumber0, String_t* ___expMonth1, String_t* ___expYear2, String_t* ___cvn3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnBillingInfoEntered(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void DepositPopupView_OnBillingInfoEntered_m578003670 (DepositPopupView_t87145889 * __this, String_t* ___firstName0, String_t* ___lastName1, String_t* ___address12, String_t* ___address23, String_t* ___city4, String_t* ___state5, String_t* ___country6, String_t* ___zip7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::MakeDepositWithNewCard()
extern "C"  void DepositPopupView_MakeDepositWithNewCard_m2836818019 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::MakeDepositWithExistingCard(System.String)
extern "C"  void DepositPopupView_MakeDepositWithExistingCard_m752640302 (DepositPopupView_t87145889 * __this, String_t* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::MakeDeposit(System.String)
extern "C"  void DepositPopupView_MakeDeposit_m2959355799 (DepositPopupView_t87145889 * __this, String_t* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnDepositConfirmButton()
extern "C"  void DepositPopupView_OnDepositConfirmButton_m3656617672 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::OnDepositConfirmCloseButton()
extern "C"  void DepositPopupView_OnDepositConfirmCloseButton_m2595033678 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::AddNewCard()
extern "C"  void DepositPopupView_AddNewCard_m2885531982 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::EditNewCard()
extern "C"  void DepositPopupView_EditNewCard_m3621396403 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::ChangeActiveCard(System.Int32)
extern "C"  void DepositPopupView_ChangeActiveCard_m3375547242 (DepositPopupView_t87145889 * __this, int32_t ___cardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::EditBillingInfo()
extern "C"  void DepositPopupView_EditBillingInfo_m2075220932 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositPopupView::EditDepositAmouunt()
extern "C"  void DepositPopupView_EditDepositAmouunt_m1617516818 (DepositPopupView_t87145889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
