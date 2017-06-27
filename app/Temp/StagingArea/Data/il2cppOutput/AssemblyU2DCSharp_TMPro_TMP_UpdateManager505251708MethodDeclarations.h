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

// TMPro.TMP_UpdateManager
struct TMP_UpdateManager_t505251708;
// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_TMP_Text1920000777.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void TMPro.TMP_UpdateManager::.ctor()
extern "C"  void TMP_UpdateManager__ctor_m2069057429 (TMP_UpdateManager_t505251708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_UpdateManager TMPro.TMP_UpdateManager::get_instance()
extern "C"  TMP_UpdateManager_t505251708 * TMP_UpdateManager_get_instance_m565780114 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::RegisterTextElementForLayoutRebuild(TMPro.TMP_Text)
extern "C"  void TMP_UpdateManager_RegisterTextElementForLayoutRebuild_m3932605372 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_UpdateManager::InternalRegisterTextElementForLayoutRebuild(TMPro.TMP_Text)
extern "C"  bool TMP_UpdateManager_InternalRegisterTextElementForLayoutRebuild_m3401171477 (TMP_UpdateManager_t505251708 * __this, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::RegisterTextElementForGraphicRebuild(TMPro.TMP_Text)
extern "C"  void TMP_UpdateManager_RegisterTextElementForGraphicRebuild_m576486320 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TMP_UpdateManager::InternalRegisterTextElementForGraphicRebuild(TMPro.TMP_Text)
extern "C"  bool TMP_UpdateManager_InternalRegisterTextElementForGraphicRebuild_m1933154689 (TMP_UpdateManager_t505251708 * __this, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::OnCameraPreRender(UnityEngine.Camera)
extern "C"  void TMP_UpdateManager_OnCameraPreRender_m2103529838 (TMP_UpdateManager_t505251708 * __this, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::UnRegisterTextElementForRebuild(TMPro.TMP_Text)
extern "C"  void TMP_UpdateManager_UnRegisterTextElementForRebuild_m2423347847 (Il2CppObject * __this /* static, unused */, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::InternalUnRegisterTextElementForGraphicRebuild(TMPro.TMP_Text)
extern "C"  void TMP_UpdateManager_InternalUnRegisterTextElementForGraphicRebuild_m411228430 (TMP_UpdateManager_t505251708 * __this, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_UpdateManager::InternalUnRegisterTextElementForLayoutRebuild(TMPro.TMP_Text)
extern "C"  void TMP_UpdateManager_InternalUnRegisterTextElementForLayoutRebuild_m3711629578 (TMP_UpdateManager_t505251708 * __this, TMP_Text_t1920000777 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
