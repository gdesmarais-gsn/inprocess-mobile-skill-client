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

// GSN.Skill.Games.Common.Client.Game.ControllerBase
struct ControllerBase_t4247623737;
// GSN.Skill.Games.Common.Model.GameModelBase
struct GameModelBase_t2215752692;
// GSN.Skill.Games.Common.Client.Game.ViewBase
struct ViewBase_t3608972958;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Common.Client.Session.ReplayGameSession
struct ReplayGameSession_t2987204361;
// GSN.Skill.Games.Common.Events.IInputMessage
struct IInputMessage_t3660278550;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Model_Gam2215752692.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Ga3608972958.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Se2987204361.h"

// System.Void GSN.Skill.Games.Common.Client.Game.ControllerBase::.cctor()
extern "C"  void ControllerBase__cctor_m3198351441 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ControllerBase::.ctor()
extern "C"  void ControllerBase__ctor_m930067504 (ControllerBase_t4247623737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Model.GameModelBase GSN.Skill.Games.Common.Client.Game.ControllerBase::get_model()
extern "C"  GameModelBase_t2215752692 * ControllerBase_get_model_m1669998905 (ControllerBase_t4247623737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ControllerBase::set_model(GSN.Skill.Games.Common.Model.GameModelBase)
extern "C"  void ControllerBase_set_model_m801118504 (ControllerBase_t4247623737 * __this, GameModelBase_t2215752692 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Game.ViewBase GSN.Skill.Games.Common.Client.Game.ControllerBase::get_view()
extern "C"  ViewBase_t3608972958 * ControllerBase_get_view_m1148526873 (ControllerBase_t4247623737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ControllerBase::set_view(GSN.Skill.Games.Common.Client.Game.ViewBase)
extern "C"  void ControllerBase_set_view_m1493471192 (ControllerBase_t4247623737 * __this, ViewBase_t3608972958 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ControllerBase::Configure(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void ControllerBase_Configure_m770993345 (ControllerBase_t4247623737 * __this, Dictionary_2_t3943999495 * ___joinRecord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ControllerBase::CreateMovePlayer(GSN.Skill.Games.Common.Client.Session.ReplayGameSession)
extern "C"  void ControllerBase_CreateMovePlayer_m886829679 (ControllerBase_t4247623737 * __this, ReplayGameSession_t2987204361 * ___gameSession0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ControllerBase::UpdateTime(System.Int32)
extern "C"  void ControllerBase_UpdateTime_m2883337951 (ControllerBase_t4247623737 * __this, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ControllerBase::Send(GSN.Skill.Games.Common.Events.IInputMessage)
extern "C"  void ControllerBase_Send_m3583710944 (ControllerBase_t4247623737 * __this, Il2CppObject * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Game.ControllerBase::Sync(System.Int32)
extern "C"  void ControllerBase_Sync_m135996056 (ControllerBase_t4247623737 * __this, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
