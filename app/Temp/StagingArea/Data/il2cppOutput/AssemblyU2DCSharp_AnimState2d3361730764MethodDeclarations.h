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

// AnimState2d
struct AnimState2d_t3361730764;
// Anim2d
struct Anim2d_t3845468051;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Anim2d3845468051.h"

// System.Void AnimState2d::.ctor()
extern "C"  void AnimState2d__ctor_m885065649 (AnimState2d_t3361730764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AnimState2d::Update(System.Single,System.Boolean)
extern "C"  bool AnimState2d_Update_m4014038176 (AnimState2d_t3361730764 * __this, float ___deltaTime0, bool ___forceNoEnd1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimState2d::Apply(System.Boolean,System.Boolean&,Anim2d)
extern "C"  void AnimState2d_Apply_m1796250550 (AnimState2d_t3361730764 * __this, bool ___first0, bool* ___dirtiedGrid1, Anim2d_t3845468051 * ___anim2d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
