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

// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_MaterialPropertyBlock3303648957.h"
#include "UnityEngine_UnityEngine_Rendering_ShadowCastingMod4042762198.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Internal_DrawMeshMatrixArg4188113582.h"
#include "UnityEngine_UnityEngine_InternalDrawTextureArgumen1708329234.h"

// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_DrawMesh_m691903288 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003  ___matrix1, Material_t193706927 * ___material2, int32_t ___layer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32,UnityEngine.MaterialPropertyBlock,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void Graphics_DrawMesh_m3872434986 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003  ___matrix1, Material_t193706927 * ___material2, int32_t ___layer3, Camera_t189460977 * ___camera4, int32_t ___submeshIndex5, MaterialPropertyBlock_t3303648957 * ___properties6, bool ___castShadows7, bool ___receiveShadows8, bool ___useLightProbes9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,UnityEngine.Transform,System.Boolean)
extern "C"  void Graphics_DrawMesh_m2126202847 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003  ___matrix1, Material_t193706927 * ___material2, int32_t ___layer3, Camera_t189460977 * ___camera4, int32_t ___submeshIndex5, MaterialPropertyBlock_t3303648957 * ___properties6, int32_t ___castShadows7, bool ___receiveShadows8, Transform_t3275118058 * ___probeAnchor9, bool ___useLightProbes10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshMatrix(UnityEngine.Internal_DrawMeshMatrixArguments&,UnityEngine.MaterialPropertyBlock,UnityEngine.Material,UnityEngine.Mesh,UnityEngine.Camera)
extern "C"  void Graphics_Internal_DrawMeshMatrix_m2757306173 (Il2CppObject * __this /* static, unused */, Internal_DrawMeshMatrixArguments_t4188113582 * ___arguments0, MaterialPropertyBlock_t3303648957 * ___properties1, Material_t193706927 * ___material2, Mesh_t1356156583 * ___mesh3, Camera_t189460977 * ___camera4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Graphics::Internal_GetMaxDrawMeshInstanceCount()
extern "C"  int32_t Graphics_Internal_GetMaxDrawMeshInstanceCount_m3046083541 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C"  void Graphics_DrawTexture_m2939589060 (Il2CppObject * __this /* static, unused */, InternalDrawTextureArguments_t1708329234 * ___arguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::.cctor()
extern "C"  void Graphics__cctor_m3711221683 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
