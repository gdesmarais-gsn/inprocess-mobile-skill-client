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

// GSN.Skill.Phoenix.Model.WithdrawManager
struct WithdrawManager_t1792595621;
// System.String
struct String_t;
// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Phoenix.Model.WithdrawManager::.ctor()
extern "C"  void WithdrawManager__ctor_m2256563595 (WithdrawManager_t1792595621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.WithdrawManager::Withdraw(System.Decimal,System.String)
extern "C"  void WithdrawManager_Withdraw_m1903519223 (WithdrawManager_t1792595621 * __this, Decimal_t724701077  ___amount0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.WithdrawManager::OnWithdrawSuccess(GSN.Skill.Requests.IWebRequest)
extern "C"  void WithdrawManager_OnWithdrawSuccess_m1112098970 (WithdrawManager_t1792595621 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.Model.WithdrawManager::OnWithdrawFail(GSN.Skill.Requests.IWebRequest)
extern "C"  void WithdrawManager_OnWithdrawFail_m3506346737 (WithdrawManager_t1792595621 * __this, Il2CppObject * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
