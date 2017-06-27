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

// GSN.Skill.Games.Common.Model.MockDataSafe
struct MockDataSafe_t2873738597;
// GSN.Skill.Games.Common.Model.IDataSafePlugin
struct IDataSafePlugin_t3786836483;
// GSN.Skill.Games.Common.Utils.IGameSession
struct IGameSession_t348500823;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_1_t3745798877;

#include "codegen/il2cpp-codegen.h"

// System.Void GSN.Skill.Games.Common.Model.MockDataSafe::.ctor(GSN.Skill.Games.Common.Model.IDataSafePlugin,GSN.Skill.Games.Common.Utils.IGameSession)
extern "C"  void MockDataSafe__ctor_m2754065528 (MockDataSafe_t2873738597 * __this, Il2CppObject * ___gsPlugin0, Il2CppObject * ___gameSession1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.MockDataSafe::FetchData(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern "C"  void MockDataSafe_FetchData_m315369910 (MockDataSafe_t2873738597 * __this, Dictionary_2_t3943999495 * ___request0, Action_1_t3745798877 * ___doneAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.MockDataSafe::handleDataResponse(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void MockDataSafe_handleDataResponse_m1581793752 (MockDataSafe_t2873738597 * __this, Dictionary_2_t3943999495 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Model.MockDataSafe::finish()
extern "C"  void MockDataSafe_finish_m3862088453 (MockDataSafe_t2873738597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
