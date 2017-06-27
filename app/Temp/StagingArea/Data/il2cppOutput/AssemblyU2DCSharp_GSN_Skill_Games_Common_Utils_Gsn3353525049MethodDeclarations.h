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

// GSN.Skill.Games.Common.Utils.GsnObjectPool
struct GsnObjectPool_t3353525049;
// GSN.Skill.Games.Common.Utils.IGsnPooledObject
struct IGsnPooledObject_t139234273;

#include "codegen/il2cpp-codegen.h"

// System.Void GSN.Skill.Games.Common.Utils.GsnObjectPool::.ctor()
extern "C"  void GsnObjectPool__ctor_m862426700 (GsnObjectPool_t3353525049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Utils.IGsnPooledObject GSN.Skill.Games.Common.Utils.GsnObjectPool::GetPooledObject()
extern "C"  Il2CppObject * GsnObjectPool_GetPooledObject_m4134066346 (GsnObjectPool_t3353525049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.GsnObjectPool::ReleaseObject(GSN.Skill.Games.Common.Utils.IGsnPooledObject)
extern "C"  void GsnObjectPool_ReleaseObject_m3074292863 (GsnObjectPool_t3353525049 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
