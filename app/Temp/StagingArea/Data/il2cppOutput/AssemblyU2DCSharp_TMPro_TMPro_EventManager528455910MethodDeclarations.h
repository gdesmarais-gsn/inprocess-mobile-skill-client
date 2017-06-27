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
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t2530419979;
// UnityEngine.Object
struct Object_t1021602117;
// TMPro.TextMeshPro
struct TextMeshPro_t2521834357;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t1159837347;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// System.Object
struct Il2CppObject;
// TMPro.Compute_DT_EventArgs
struct Compute_DT_EventArgs_t4231491594;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "AssemblyU2DCSharp_TMPro_TMP_FontAsset2530419979.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "AssemblyU2DCSharp_TMPro_TextMeshPro2521834357.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_TMPro_TMP_ColorGradient1159837347.h"
#include "AssemblyU2DCSharp_TMPro_TextMeshProUGUI934157183.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_TMPro_Compute_DT_EventArgs4231491594.h"

// System.Void TMPro.TMPro_EventManager::ON_PRE_RENDER_OBJECT_CHANGED()
extern "C"  void TMPro_EventManager_ON_PRE_RENDER_OBJECT_CHANGED_m343113814 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_MATERIAL_PROPERTY_CHANGED(System.Boolean,UnityEngine.Material)
extern "C"  void TMPro_EventManager_ON_MATERIAL_PROPERTY_CHANGED_m2431133072 (Il2CppObject * __this /* static, unused */, bool ___isChanged0, Material_t193706927 * ___mat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_FONT_PROPERTY_CHANGED(System.Boolean,TMPro.TMP_FontAsset)
extern "C"  void TMPro_EventManager_ON_FONT_PROPERTY_CHANGED_m4282887941 (Il2CppObject * __this /* static, unused */, bool ___isChanged0, TMP_FontAsset_t2530419979 * ___font1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_SPRITE_ASSET_PROPERTY_CHANGED(System.Boolean,UnityEngine.Object)
extern "C"  void TMPro_EventManager_ON_SPRITE_ASSET_PROPERTY_CHANGED_m3448120949 (Il2CppObject * __this /* static, unused */, bool ___isChanged0, Object_t1021602117 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_TEXTMESHPRO_PROPERTY_CHANGED(System.Boolean,TMPro.TextMeshPro)
extern "C"  void TMPro_EventManager_ON_TEXTMESHPRO_PROPERTY_CHANGED_m1945836651 (Il2CppObject * __this /* static, unused */, bool ___isChanged0, TextMeshPro_t2521834357 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_DRAG_AND_DROP_MATERIAL_CHANGED(UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material)
extern "C"  void TMPro_EventManager_ON_DRAG_AND_DROP_MATERIAL_CHANGED_m267420364 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___sender0, Material_t193706927 * ___currentMaterial1, Material_t193706927 * ___newMaterial2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_TEXT_STYLE_PROPERTY_CHANGED(System.Boolean)
extern "C"  void TMPro_EventManager_ON_TEXT_STYLE_PROPERTY_CHANGED_m1497806012 (Il2CppObject * __this /* static, unused */, bool ___isChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_COLOR_GRAIDENT_PROPERTY_CHANGED(TMPro.TMP_ColorGradient)
extern "C"  void TMPro_EventManager_ON_COLOR_GRAIDENT_PROPERTY_CHANGED_m2572747269 (Il2CppObject * __this /* static, unused */, TMP_ColorGradient_t1159837347 * ___gradient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_TEXT_CHANGED(UnityEngine.Object)
extern "C"  void TMPro_EventManager_ON_TEXT_CHANGED_m4243394665 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_TMP_SETTINGS_CHANGED()
extern "C"  void TMPro_EventManager_ON_TMP_SETTINGS_CHANGED_m1431768097 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(System.Boolean,TMPro.TextMeshProUGUI)
extern "C"  void TMPro_EventManager_ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED_m2632522870 (Il2CppObject * __this /* static, unused */, bool ___isChanged0, TextMeshProUGUI_t934157183 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_COMPUTE_DT_EVENT(System.Object,TMPro.Compute_DT_EventArgs)
extern "C"  void TMPro_EventManager_ON_COMPUTE_DT_EVENT_m4152908238 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___Sender0, Compute_DT_EventArgs_t4231491594 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::.cctor()
extern "C"  void TMPro_EventManager__cctor_m1472498930 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
