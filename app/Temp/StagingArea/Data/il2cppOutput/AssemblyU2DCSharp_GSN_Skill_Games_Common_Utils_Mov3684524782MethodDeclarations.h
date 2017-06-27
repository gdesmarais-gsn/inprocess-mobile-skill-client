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

// GSN.Skill.Games.Common.Utils.MovePlayer
struct MovePlayer_t3684524782;
// GSN.Skill.Games.Common.Model.GameModelBase
struct GameModelBase_t2215752692;
// System.IO.MemoryStream
struct MemoryStream_t743994179;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Model_Gam2215752692.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"

// System.Void GSN.Skill.Games.Common.Utils.MovePlayer::.ctor(GSN.Skill.Games.Common.Model.GameModelBase,System.IO.MemoryStream,System.Boolean)
extern "C"  void MovePlayer__ctor_m3336838358 (MovePlayer_t3684524782 * __this, GameModelBase_t2215752692 * ___model0, MemoryStream_t743994179 * ___gameLogStream1, bool ___abortOnEnd2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.MovePlayer::get_excessRealTime()
extern "C"  int32_t MovePlayer_get_excessRealTime_m3536951178 (MovePlayer_t3684524782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.MovePlayer::set_excessRealTime(System.Int32)
extern "C"  void MovePlayer_set_excessRealTime_m4213303723 (MovePlayer_t3684524782 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.MovePlayer::ConfigureModel()
extern "C"  void MovePlayer_ConfigureModel_m3567098986 (MovePlayer_t3684524782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.MovePlayer::GetNotaryHunk()
extern "C"  bool MovePlayer_GetNotaryHunk_m886159592 (MovePlayer_t3684524782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.MovePlayer::PrepareNextRecord()
extern "C"  void MovePlayer_PrepareNextRecord_m2015848384 (MovePlayer_t3684524782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Utils.MovePlayer::PlayMoves(System.Int32)
extern "C"  bool MovePlayer_PlayMoves_m2554934712 (MovePlayer_t3684524782 * __this, int32_t ___before0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
