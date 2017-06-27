﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// UnityEngine.UI.Selectable
struct Selectable_t1490392188;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_TMPro_TMP_Text1920000777.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable1490392188.h"
#include "AssemblyU2DCSharp_TMPro_TMP_DefaultControls_Resour4030816863.h"

// UnityEngine.GameObject TMPro.TMP_DefaultControls::CreateUIElementRoot(System.String,UnityEngine.Vector2)
extern "C"  GameObject_t1756533147 * TMP_DefaultControls_CreateUIElementRoot_m4272593481 (Il2CppObject * __this /* static, unused */, String_t* ___name0, Vector2_t2243707579  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TMPro.TMP_DefaultControls::CreateUIObject(System.String,UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * TMP_DefaultControls_CreateUIObject_m2040457246 (Il2CppObject * __this /* static, unused */, String_t* ___name0, GameObject_t1756533147 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_DefaultControls::SetDefaultTextValues(TMPro.TMP_Text)
extern "C"  void TMP_DefaultControls_SetDefaultTextValues_m3288066605 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___lbl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_DefaultControls::SetDefaultColorTransitionValues(UnityEngine.UI.Selectable)
extern "C"  void TMP_DefaultControls_SetDefaultColorTransitionValues_m2393144322 (Il2CppObject * __this /* static, unused */, Selectable_t1490392188 * ___slider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_DefaultControls::SetParentAndAlign(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void TMP_DefaultControls_SetParentAndAlign_m521195840 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___child0, GameObject_t1756533147 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_DefaultControls::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C"  void TMP_DefaultControls_SetLayerRecursively_m4219284575 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TMPro.TMP_DefaultControls::CreateScrollbar(TMPro.TMP_DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * TMP_DefaultControls_CreateScrollbar_m2946044222 (Il2CppObject * __this /* static, unused */, Resources_t4030816863  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TMPro.TMP_DefaultControls::CreateInputField(TMPro.TMP_DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * TMP_DefaultControls_CreateInputField_m383946972 (Il2CppObject * __this /* static, unused */, Resources_t4030816863  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TMPro.TMP_DefaultControls::CreateDropdown(TMPro.TMP_DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * TMP_DefaultControls_CreateDropdown_m312284321 (Il2CppObject * __this /* static, unused */, Resources_t4030816863  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_DefaultControls::.cctor()
extern "C"  void TMP_DefaultControls__cctor_m2780872403 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;