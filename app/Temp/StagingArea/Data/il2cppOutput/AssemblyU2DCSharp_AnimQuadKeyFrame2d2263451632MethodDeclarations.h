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

// AnimQuadKeyFrame2d
struct AnimQuadKeyFrame2d_t2263451632;
// BezierPatchQuad
struct BezierPatchQuad_t3561387740;
// AnimQuadKeyFrame2d[]
struct AnimQuadKeyFrame2dU5BU5D_t841820753;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BezierPatchQuad3561387740.h"

// System.Void AnimQuadKeyFrame2d::.ctor()
extern "C"  void AnimQuadKeyFrame2d__ctor_m185595289 (AnimQuadKeyFrame2d_t2263451632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimQuadKeyFrame2d::WriteToQuad(BezierPatchQuad)
extern "C"  void AnimQuadKeyFrame2d_WriteToQuad_m1770005180 (AnimQuadKeyFrame2d_t2263451632 * __this, BezierPatchQuad_t3561387740 * ___quad0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimQuadKeyFrame2d::WriteToQuad(System.Single,AnimQuadKeyFrame2d[],BezierPatchQuad)
extern "C"  void AnimQuadKeyFrame2d_WriteToQuad_m496225835 (Il2CppObject * __this /* static, unused */, float ___time0, AnimQuadKeyFrame2dU5BU5D_t841820753* ___keyFrames1, BezierPatchQuad_t3561387740 * ___quad2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimQuadKeyFrame2d::WriteToQuad(BezierPatchQuad,System.Single)
extern "C"  void AnimQuadKeyFrame2d_WriteToQuad_m4042915547 (AnimQuadKeyFrame2d_t2263451632 * __this, BezierPatchQuad_t3561387740 * ___quad0, float ___blendFactor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimQuadKeyFrame2d::WriteToQuad(System.Single,AnimQuadKeyFrame2d[],BezierPatchQuad,System.Single)
extern "C"  void AnimQuadKeyFrame2d_WriteToQuad_m1104399472 (Il2CppObject * __this /* static, unused */, float ___time0, AnimQuadKeyFrame2dU5BU5D_t841820753* ___keyFrames1, BezierPatchQuad_t3561387740 * ___quad2, float ___blendFactor3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
