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

// ContactSineSurface
struct ContactSineSurface_t810018916;

#include "codegen/il2cpp-codegen.h"

// System.Void ContactSineSurface::.ctor()
extern "C"  void ContactSineSurface__ctor_m436169903 (ContactSineSurface_t810018916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ContactSineSurface::FactorWithOvershoot(System.Single)
extern "C"  float ContactSineSurface_FactorWithOvershoot_m748312542 (ContactSineSurface_t810018916 * __this, float ___factor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ContactSineSurface::CalculateSag(System.Single,System.Single)
extern "C"  float ContactSineSurface_CalculateSag_m4212785514 (ContactSineSurface_t810018916 * __this, float ___relativeX0, float ___magnitude1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ContactSineSurface::CalculateDistributedSag(System.Single,System.Single)
extern "C"  float ContactSineSurface_CalculateDistributedSag_m1722665247 (ContactSineSurface_t810018916 * __this, float ___relativeX0, float ___magnitude1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ContactSineSurface::GetLocalYAt(System.Single)
extern "C"  float ContactSineSurface_GetLocalYAt_m2942651727 (ContactSineSurface_t810018916 * __this, float ___localX0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
