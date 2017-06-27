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

// GSN.Skill.Phoenix.Model.DepositManager
struct DepositManager_t590905979;
// GSN.Skill.Phoenix.Model.LocationManager
struct LocationManager_t2180792764;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// System.String
struct String_t;
// GSN.Skill.Events.IEvent
struct IEvent_t972216987;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Location2180792764.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Data_Cur3910039426.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_DepositM3723506665.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_Model_Location2235240169.h"

// System.Void GSN.Skill.Phoenix.Model.DepositManager::.ctor(GSN.Skill.Phoenix.Model.LocationManager,GSN.Skill.Phoenix.Model.Data.CurrentUser)
extern "C"  void DepositManager__ctor_m1705957849 (DepositManager_t590905979 * __this, LocationManager_t2180792764 * ___locationManager0, CurrentUser_t3910039426 * ___currentUser1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::ShowDeposit()
extern "C"  void DepositManager_ShowDeposit_m3698390562 (DepositManager_t590905979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::ValidateDepositLocation()
extern "C"  void DepositManager_ValidateDepositLocation_m1436214592 (DepositManager_t590905979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::MakeDepositWithExistingCard(System.Int32,System.Int32,System.String)
extern "C"  void DepositManager_MakeDepositWithExistingCard_m3421599732 (DepositManager_t590905979 * __this, int32_t ___amount0, int32_t ___ccID1, String_t* ___password2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::MakeDepositWithNewCard(GSN.Skill.Phoenix.Model.DepositManager/DepositWithNewCardData)
extern "C"  void DepositManager_MakeDepositWithNewCard_m3232720542 (DepositManager_t590905979 * __this, DepositWithNewCardData_t3723506665  ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::OnValidateLocationSuccess()
extern "C"  void DepositManager_OnValidateLocationSuccess_m571232912 (DepositManager_t590905979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::OnValidateLocationFail(GSN.Skill.Phoenix.Model.LocationFailReason)
extern "C"  void DepositManager_OnValidateLocationFail_m472197839 (DepositManager_t590905979 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::OnUserLogout(GSN.Skill.Events.IEvent)
extern "C"  void DepositManager_OnUserLogout_m3277555868 (DepositManager_t590905979 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::OnDepositBegin(GSN.Skill.Requests.IWebRequest)
extern "C"  void DepositManager_OnDepositBegin_m3208585176 (DepositManager_t590905979 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::OnDepositSuccess(GSN.Skill.Requests.IWebRequest)
extern "C"  void DepositManager_OnDepositSuccess_m2151522170 (DepositManager_t590905979 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::OnDepositFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void DepositManager_OnDepositFail_m1762118865 (DepositManager_t590905979 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::OnAddCreditCardBegin(GSN.Skill.Requests.IWebRequest)
extern "C"  void DepositManager_OnAddCreditCardBegin_m2228508726 (DepositManager_t590905979 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::OnAddCreditCardSuccess(GSN.Skill.Requests.IWebRequest)
extern "C"  void DepositManager_OnAddCreditCardSuccess_m911611868 (DepositManager_t590905979 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::OnAddCreditCardFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void DepositManager_OnAddCreditCardFail_m866886749 (DepositManager_t590905979 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.DepositManager::UpdateLastUsedCardData()
extern "C"  void DepositManager_UpdateLastUsedCardData_m2285723417 (DepositManager_t590905979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
