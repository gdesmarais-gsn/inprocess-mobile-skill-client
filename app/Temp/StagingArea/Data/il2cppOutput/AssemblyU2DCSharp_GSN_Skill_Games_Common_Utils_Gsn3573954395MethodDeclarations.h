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

// GSN.Skill.Games.Common.Utils.GsnRandom
struct GsnRandom_t3573954395;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Games.Common.Utils.GsnRandom::.ctor(System.UInt32)
extern "C"  void GsnRandom__ctor_m438597032 (GsnRandom_t3573954395 * __this, uint32_t ___iSeed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GSN.Skill.Games.Common.Utils.GsnRandom::get_origSeed()
extern "C"  uint32_t GsnRandom_get_origSeed_m3603203796 (GsnRandom_t3573954395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRandom::set_origSeed(System.UInt32)
extern "C"  void GsnRandom_set_origSeed_m3246779333 (GsnRandom_t3573954395 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRandom::SetSeed(System.UInt32,System.UInt32)
extern "C"  void GsnRandom_SetSeed_m3491644489 (GsnRandom_t3573954395 * __this, uint32_t ___iSeed0, uint32_t ___burnCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRandom::Reset()
extern "C"  void GsnRandom_Reset_m3866134297 (GsnRandom_t3573954395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GSN.Skill.Games.Common.Utils.GsnRandom::GetSeed()
extern "C"  uint32_t GsnRandom_GetSeed_m466194632 (GsnRandom_t3573954395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GSN.Skill.Games.Common.Utils.GsnRandom::GetBurnCount()
extern "C"  uint32_t GsnRandom_GetBurnCount_m733612573 (GsnRandom_t3573954395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GSN.Skill.Games.Common.Utils.GsnRandom::GetNext()
extern "C"  uint32_t GsnRandom_GetNext_m800155896 (GsnRandom_t3573954395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GSN.Skill.Games.Common.Utils.GsnRandom::GetNextRange(System.UInt32,System.UInt32)
extern "C"  uint32_t GsnRandom_GetNextRange_m1830476161 (GsnRandom_t3573954395 * __this, uint32_t ___minNum0, uint32_t ___maxNum1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GSN.Skill.Games.Common.Utils.GsnRandom::GetNextMod(System.UInt32)
extern "C"  uint32_t GsnRandom_GetNextMod_m1101310592 (GsnRandom_t3573954395 * __this, uint32_t ___denom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnRandom::Dump(System.String)
extern "C"  void GsnRandom_Dump_m3736272920 (GsnRandom_t3573954395 * __this, String_t* ___heading0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
