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

// GSN.Skill.Games.Common.Client.SingletonManager
struct SingletonManager_t313169018;
// GSN.Skill.Games.Common.Client.IDestroyable
struct IDestroyable_t1485860377;

#include "codegen/il2cpp-codegen.h"

// System.Void GSN.Skill.Games.Common.Client.SingletonManager::.ctor()
extern "C"  void SingletonManager__ctor_m2907620051 (SingletonManager_t313169018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.SingletonManager::AddSingleton(GSN.Skill.Games.Common.Client.IDestroyable)
extern "C"  void SingletonManager_AddSingleton_m2328975314 (SingletonManager_t313169018 * __this, Il2CppObject * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.SingletonManager::OnDestroy()
extern "C"  void SingletonManager_OnDestroy_m1610564914 (SingletonManager_t313169018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
