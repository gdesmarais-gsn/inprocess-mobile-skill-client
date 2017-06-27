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

// GSN.Skill.Games.Tripeaks.ScoreFloat
struct ScoreFloat_t1059481002;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void GSN.Skill.Games.Tripeaks.ScoreFloat::.ctor()
extern "C"  void ScoreFloat__ctor_m3957730514 (ScoreFloat_t1059481002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Tripeaks.ScoreFloat::setScore(System.Int32,System.Int32,UnityEngine.Vector3,UnityEngine.GameObject)
extern "C"  void ScoreFloat_setScore_m3540014937 (ScoreFloat_t1059481002 * __this, int32_t ___pointsEarned0, int32_t ___streak1, Vector3_t2243707580  ___fireballEndPos2, GameObject_t1756533147 * ___fireballObject3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.ScoreFloat::playFireballEffect(UnityEngine.Vector3,UnityEngine.GameObject)
extern "C"  Il2CppObject * ScoreFloat_playFireballEffect_m3204677581 (ScoreFloat_t1059481002 * __this, Vector3_t2243707580  ___fireballEndPos0, GameObject_t1756533147 * ___fireballObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
