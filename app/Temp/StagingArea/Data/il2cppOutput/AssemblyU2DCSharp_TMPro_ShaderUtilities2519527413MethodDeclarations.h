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

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void TMPro.ShaderUtilities::.cctor()
extern "C"  void ShaderUtilities__cctor_m4139032557 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.ShaderUtilities::GetShaderPropertyIDs()
extern "C"  void ShaderUtilities_GetShaderPropertyIDs_m2392998842 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.ShaderUtilities::UpdateShaderRatios(UnityEngine.Material)
extern "C"  void ShaderUtilities_UpdateShaderRatios_m2614274342 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 TMPro.ShaderUtilities::GetFontExtent(UnityEngine.Material)
extern "C"  Vector4_t2243707581  ShaderUtilities_GetFontExtent_m1046322040 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___material0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.ShaderUtilities::IsMaskingEnabled(UnityEngine.Material)
extern "C"  bool ShaderUtilities_IsMaskingEnabled_m2602428369 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___material0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.ShaderUtilities::GetPadding(UnityEngine.Material,System.Boolean,System.Boolean)
extern "C"  float ShaderUtilities_GetPadding_m2318267255 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___material0, bool ___enableExtraPadding1, bool ___isBold2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.ShaderUtilities::GetPadding(UnityEngine.Material[],System.Boolean,System.Boolean)
extern "C"  float ShaderUtilities_GetPadding_m3303425929 (Il2CppObject * __this /* static, unused */, MaterialU5BU5D_t3123989686* ___materials0, bool ___enableExtraPadding1, bool ___isBold2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
