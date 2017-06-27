#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GSN.Skill.Games.Common.Tutorial.Unity.TutorialController
struct TutorialController_t2540770700;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.Unity.TutorialPrefabUtills
struct  TutorialPrefabUtills_t944404751  : public Il2CppObject
{
public:

public:
};

struct TutorialPrefabUtills_t944404751_StaticFields
{
public:
	// UnityEngine.GameObject GSN.Skill.Games.Common.Tutorial.Unity.TutorialPrefabUtills::_rootGameObject
	GameObject_t1756533147 * ____rootGameObject_1;
	// GSN.Skill.Games.Common.Tutorial.Unity.TutorialController GSN.Skill.Games.Common.Tutorial.Unity.TutorialPrefabUtills::_rootController
	TutorialController_t2540770700 * ____rootController_2;

public:
	inline static int32_t get_offset_of__rootGameObject_1() { return static_cast<int32_t>(offsetof(TutorialPrefabUtills_t944404751_StaticFields, ____rootGameObject_1)); }
	inline GameObject_t1756533147 * get__rootGameObject_1() const { return ____rootGameObject_1; }
	inline GameObject_t1756533147 ** get_address_of__rootGameObject_1() { return &____rootGameObject_1; }
	inline void set__rootGameObject_1(GameObject_t1756533147 * value)
	{
		____rootGameObject_1 = value;
		Il2CppCodeGenWriteBarrier(&____rootGameObject_1, value);
	}

	inline static int32_t get_offset_of__rootController_2() { return static_cast<int32_t>(offsetof(TutorialPrefabUtills_t944404751_StaticFields, ____rootController_2)); }
	inline TutorialController_t2540770700 * get__rootController_2() const { return ____rootController_2; }
	inline TutorialController_t2540770700 ** get_address_of__rootController_2() { return &____rootController_2; }
	inline void set__rootController_2(TutorialController_t2540770700 * value)
	{
		____rootController_2 = value;
		Il2CppCodeGenWriteBarrier(&____rootController_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
