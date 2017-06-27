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

// GSN.Skill.Phoenix.View.Pool.GsnObjectPool
struct GsnObjectPool_t2394837727;
// GSN.Skill.Phoenix.View.Pool.IGsnPooledObject
struct IGsnPooledObject_t3995842541;

#include "codegen/il2cpp-codegen.h"

// System.Void GSN.Skill.Phoenix.View.Pool.GsnObjectPool::.ctor()
extern "C"  void GsnObjectPool__ctor_m1841745981 (GsnObjectPool_t2394837727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Phoenix.View.Pool.IGsnPooledObject GSN.Skill.Phoenix.View.Pool.GsnObjectPool::GetPooledObject()
extern "C"  Il2CppObject * GsnObjectPool_GetPooledObject_m2576375154 (GsnObjectPool_t2394837727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Phoenix.View.Pool.GsnObjectPool::ReleaseObject(GSN.Skill.Phoenix.View.Pool.IGsnPooledObject)
extern "C"  void GsnObjectPool_ReleaseObject_m941502615 (GsnObjectPool_t2394837727 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
