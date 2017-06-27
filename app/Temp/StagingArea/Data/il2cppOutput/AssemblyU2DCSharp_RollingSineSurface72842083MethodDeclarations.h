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

// RollingSineSurface
struct RollingSineSurface_t72842083;

#include "codegen/il2cpp-codegen.h"

// System.Void RollingSineSurface::.ctor()
extern "C"  void RollingSineSurface__ctor_m3656012702 (RollingSineSurface_t72842083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RollingSineSurface::CalculateSag(System.Single,System.Single)
extern "C"  float RollingSineSurface_CalculateSag_m3252575137 (RollingSineSurface_t72842083 * __this, float ___relativeX0, float ___magnitude1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RollingSineSurface::GetLocalYAt(System.Single)
extern "C"  float RollingSineSurface_GetLocalYAt_m185792400 (RollingSineSurface_t72842083 * __this, float ___localX0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
