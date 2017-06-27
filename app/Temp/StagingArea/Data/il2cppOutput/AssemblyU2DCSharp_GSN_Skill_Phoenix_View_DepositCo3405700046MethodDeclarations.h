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

// GSN.Skill.Phoenix.View.DepositConfirmPageView
struct DepositConfirmPageView_t3405700046;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_DepositM3723506665.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_CreditCardDeta1436690111.h"

// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::.ctor()
extern "C"  void DepositConfirmPageView__ctor_m2244130504 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::OnEnable()
extern "C"  void DepositConfirmPageView_OnEnable_m191038928 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::OnDisable()
extern "C"  void DepositConfirmPageView_OnDisable_m1048218769 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::SetInitialState()
extern "C"  void DepositConfirmPageView_SetInitialState_m2708481819 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::SetCreditCardInfoUpdated()
extern "C"  void DepositConfirmPageView_SetCreditCardInfoUpdated_m3347166948 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::SetBillingInfoUpdated()
extern "C"  void DepositConfirmPageView_SetBillingInfoUpdated_m2521587406 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::SetData(System.Boolean)
extern "C"  void DepositConfirmPageView_SetData_m402126325 (DepositConfirmPageView_t3405700046 * __this, bool ___hasCard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::AddNewCard(GSN.Skill.Phoenix.Model.DepositManager/DepositWithNewCardData)
extern "C"  void DepositConfirmPageView_AddNewCard_m456758906 (DepositConfirmPageView_t3405700046 * __this, DepositWithNewCardData_t3723506665  ___cardData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::AddSavedCard(GSN.Skill.Phoenix.CreditCardDetails,System.Boolean)
extern "C"  void DepositConfirmPageView_AddSavedCard_m4131880976 (DepositConfirmPageView_t3405700046 * __this, CreditCardDetails_t1436690111  ___card0, bool ___changingCard1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::AddNewCardButton()
extern "C"  void DepositConfirmPageView_AddNewCardButton_m12806855 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::CheckValidInput()
extern "C"  void DepositConfirmPageView_CheckValidInput_m1984704106 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::UpdateConfirmButtonState()
extern "C"  void DepositConfirmPageView_UpdateConfirmButtonState_m1768896190 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.View.DepositConfirmPageView::HasAllRequiredInputNewCard()
extern "C"  bool DepositConfirmPageView_HasAllRequiredInputNewCard_m4030309970 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.View.DepositConfirmPageView::HasAllRequiredInputExistingCard()
extern "C"  bool DepositConfirmPageView_HasAllRequiredInputExistingCard_m3764057051 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::OnEditDepositAmount()
extern "C"  void DepositConfirmPageView_OnEditDepositAmount_m3525385813 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::OnEditCreditCard(System.Int32)
extern "C"  void DepositConfirmPageView_OnEditCreditCard_m230236849 (DepositConfirmPageView_t3405700046 * __this, int32_t ___cardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::OnAddNewCreditCard()
extern "C"  void DepositConfirmPageView_OnAddNewCreditCard_m3326590137 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::OnSelectOldCard(System.Int32)
extern "C"  void DepositConfirmPageView_OnSelectOldCard_m3138058707 (DepositConfirmPageView_t3405700046 * __this, int32_t ___cardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::OnChangeCreditCard(System.Int32)
extern "C"  void DepositConfirmPageView_OnChangeCreditCard_m1955609619 (DepositConfirmPageView_t3405700046 * __this, int32_t ___cardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::OnEditBillingInfo()
extern "C"  void DepositConfirmPageView_OnEditBillingInfo_m3376255208 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::OnConfirmButton()
extern "C"  void DepositConfirmPageView_OnConfirmButton_m970711949 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::SetCreditCardErrorVisible(System.Boolean)
extern "C"  void DepositConfirmPageView_SetCreditCardErrorVisible_m3903957358 (DepositConfirmPageView_t3405700046 * __this, bool ___showError0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.View.DepositConfirmPageView::IsCreditCardErrorVisible()
extern "C"  bool DepositConfirmPageView_IsCreditCardErrorVisible_m2978580581 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::SetBillingAddressErrorVisible(System.Boolean)
extern "C"  void DepositConfirmPageView_SetBillingAddressErrorVisible_m1353219568 (DepositConfirmPageView_t3405700046 * __this, bool ___showError0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Phoenix.View.DepositConfirmPageView::IsBillingAddressErrorVisible()
extern "C"  bool DepositConfirmPageView_IsBillingAddressErrorVisible_m4102533809 (DepositConfirmPageView_t3405700046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.DepositConfirmPageView::OnDepositFail(GSN.Skill.Events.IEvent)
extern "C"  void DepositConfirmPageView_OnDepositFail_m189319574 (DepositConfirmPageView_t3405700046 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
