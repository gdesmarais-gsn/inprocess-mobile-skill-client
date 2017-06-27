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

// GSN.Skill.Games.Common.Tutorial.Unity.TutorialPrefabUtills
struct TutorialPrefabUtills_t944404751;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GSN.Skill.Games.Common.Tutorial.Unity.TutorialController
struct TutorialController_t2540770700;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void GSN.Skill.Games.Common.Tutorial.Unity.TutorialPrefabUtills::.ctor()
extern "C"  void TutorialPrefabUtills__ctor_m2707238194 (TutorialPrefabUtills_t944404751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GSN.Skill.Games.Common.Tutorial.Unity.TutorialPrefabUtills::get_RootGameObject()
extern "C"  GameObject_t1756533147 * TutorialPrefabUtills_get_RootGameObject_m3919014969 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Tutorial.Unity.TutorialController GSN.Skill.Games.Common.Tutorial.Unity.TutorialPrefabUtills::get_RootController()
extern "C"  TutorialController_t2540770700 * TutorialPrefabUtills_get_RootController_m1739563778 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GSN.Skill.Games.Common.Tutorial.Unity.TutorialPrefabUtills::InstantiateStepPrefab(System.String)
extern "C"  GameObject_t1756533147 * TutorialPrefabUtills_InstantiateStepPrefab_m800541509 (Il2CppObject * __this /* static, unused */, String_t* ___prefabName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.Unity.TutorialPrefabUtills::SetNameAndParent(UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.GameObject)
extern "C"  void TutorialPrefabUtills_SetNameAndParent_m724965819 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Transform_t3275118058 * ___parentTransform1, GameObject_t1756533147 * ___prefabObject2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Tutorial.Unity.TutorialPrefabUtills::DestroyStepObject(UnityEngine.GameObject)
extern "C"  void TutorialPrefabUtills_DestroyStepObject_m3535165347 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ____stepObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GSN.Skill.Games.Common.Tutorial.Unity.TutorialPrefabUtills::FindStepGameObjectOnScene(System.String)
extern "C"  GameObject_t1756533147 * TutorialPrefabUtills_FindStepGameObjectOnScene_m615021460 (Il2CppObject * __this /* static, unused */, String_t* ___stepPrefabName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
