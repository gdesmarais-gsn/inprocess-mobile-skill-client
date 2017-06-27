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

// GSN.Skill.Utils.SingletonManager
struct SingletonManager_t1584738618;
// GSN.Skill.Utils.IDestroyable
struct IDestroyable_t1863646897;

#include "codegen/il2cpp-codegen.h"

// System.Void GSN.Skill.Utils.SingletonManager::.ctor()
extern "C"  void SingletonManager__ctor_m3528243493 (SingletonManager_t1584738618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.SingletonManager::AddSingleton(GSN.Skill.Utils.IDestroyable)
extern "C"  void SingletonManager_AddSingleton_m1513577262 (SingletonManager_t1584738618 * __this, Il2CppObject * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Utils.SingletonManager::OnDestroy()
extern "C"  void SingletonManager_OnDestroy_m2934993172 (SingletonManager_t1584738618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
