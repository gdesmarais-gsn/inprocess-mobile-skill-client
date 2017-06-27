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

// SceneryChanger/Scenery
struct Scenery_t2624549033;
// SceneryChanger
struct SceneryChanger_t2642862775;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SceneryChanger2642862775.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void SceneryChanger/Scenery::.ctor()
extern "C"  void Scenery__ctor_m4062183422 (Scenery_t2624549033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger/Scenery::Apply(SceneryChanger)
extern "C"  void Scenery_Apply_m4096599469 (Scenery_t2624549033 * __this, SceneryChanger_t2642862775 * ___owner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger/Scenery::Unapply(SceneryChanger)
extern "C"  void Scenery_Unapply_m248222764 (Scenery_t2624549033 * __this, SceneryChanger_t2642862775 * ___owner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger/Scenery::Reapply(SceneryChanger)
extern "C"  void Scenery_Reapply_m4039544514 (Scenery_t2624549033 * __this, SceneryChanger_t2642862775 * ___owner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger/Scenery::ReapplyTo(SceneryChanger,UnityEngine.GameObject)
extern "C"  void Scenery_ReapplyTo_m4062211169 (Scenery_t2624549033 * __this, SceneryChanger_t2642862775 * ___owner0, GameObject_t1756533147 * ___go1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger/Scenery::UnapplyTo(SceneryChanger,UnityEngine.GameObject)
extern "C"  void Scenery_UnapplyTo_m802370229 (Scenery_t2624549033 * __this, SceneryChanger_t2642862775 * ___owner0, GameObject_t1756533147 * ___go1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger/Scenery::ShowObjects(UnityEngine.GameObject[],System.Boolean)
extern "C"  void Scenery_ShowObjects_m532166418 (Scenery_t2624549033 * __this, GameObjectU5BU5D_t3057952154* ___objects0, bool ___show1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger/Scenery::ApplyMaterials()
extern "C"  void Scenery_ApplyMaterials_m1537865366 (Scenery_t2624549033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger/Scenery::ApplyMaterialsTo(UnityEngine.GameObject)
extern "C"  void Scenery_ApplyMaterialsTo_m1714706103 (Scenery_t2624549033 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger/Scenery::UnapplyMaterials()
extern "C"  void Scenery_UnapplyMaterials_m4226122803 (Scenery_t2624549033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger/Scenery::UnapplyMaterialsTo(UnityEngine.GameObject)
extern "C"  void Scenery_UnapplyMaterialsTo_m852823134 (Scenery_t2624549033 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneryChanger/Scenery::CopyCameraSettings(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void Scenery_CopyCameraSettings_m2300065417 (Scenery_t2624549033 * __this, Camera_t189460977 * ___src0, Camera_t189460977 * ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
