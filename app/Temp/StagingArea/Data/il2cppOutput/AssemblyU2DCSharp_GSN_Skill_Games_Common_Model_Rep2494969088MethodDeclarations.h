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

// GSN.Skill.Games.Common.Model.ReplayDataSafe
struct ReplayDataSafe_t2494969088;
// GSN.Skill.Games.Common.Utils.SecureHunk
struct SecureHunk_t3302567905;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_1_t3745798877;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Sec3302567905.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act1924202305.h"

// System.Void GSN.Skill.Games.Common.Model.ReplayDataSafe::.ctor(GSN.Skill.Games.Common.Utils.SecureHunk,GSN.Skill.Games.Common.Utils.ActionQueue,System.UInt32)
extern "C"  void ReplayDataSafe__ctor_m1110585355 (ReplayDataSafe_t2494969088 * __this, SecureHunk_t3302567905 * ___dataHistoryHunk0, ActionQueue_t1924202305 * ___actionQueue1, uint32_t ___startTimeStamp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.ReplayDataSafe::FetchData(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern "C"  void ReplayDataSafe_FetchData_m1790275385 (ReplayDataSafe_t2494969088 * __this, Dictionary_2_t3943999495 * ___request0, Action_1_t3745798877 * ___doneAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
