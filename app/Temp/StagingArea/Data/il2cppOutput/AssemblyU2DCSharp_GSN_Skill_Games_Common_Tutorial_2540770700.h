#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Tutorial.Unity.TutorialController
struct TutorialController_t2540770700;
// GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepController
struct TutorialStepController_t2587800018;
// UnityEngine.Camera
struct Camera_t189460977;
// GSN.Skill.Games.Common.Tutorial.Unity.TutorialBlackoutController
struct TutorialBlackoutController_t1835124011;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.Unity.TutorialController
struct  TutorialController_t2540770700  : public MonoBehaviour_t1158329972
{
public:
	// GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepController GSN.Skill.Games.Common.Tutorial.Unity.TutorialController::_stepController
	TutorialStepController_t2587800018 * ____stepController_3;
	// UnityEngine.Camera GSN.Skill.Games.Common.Tutorial.Unity.TutorialController::_stepCamera
	Camera_t189460977 * ____stepCamera_4;
	// GSN.Skill.Games.Common.Tutorial.Unity.TutorialBlackoutController GSN.Skill.Games.Common.Tutorial.Unity.TutorialController::_blackout
	TutorialBlackoutController_t1835124011 * ____blackout_5;

public:
	inline static int32_t get_offset_of__stepController_3() { return static_cast<int32_t>(offsetof(TutorialController_t2540770700, ____stepController_3)); }
	inline TutorialStepController_t2587800018 * get__stepController_3() const { return ____stepController_3; }
	inline TutorialStepController_t2587800018 ** get_address_of__stepController_3() { return &____stepController_3; }
	inline void set__stepController_3(TutorialStepController_t2587800018 * value)
	{
		____stepController_3 = value;
		Il2CppCodeGenWriteBarrier(&____stepController_3, value);
	}

	inline static int32_t get_offset_of__stepCamera_4() { return static_cast<int32_t>(offsetof(TutorialController_t2540770700, ____stepCamera_4)); }
	inline Camera_t189460977 * get__stepCamera_4() const { return ____stepCamera_4; }
	inline Camera_t189460977 ** get_address_of__stepCamera_4() { return &____stepCamera_4; }
	inline void set__stepCamera_4(Camera_t189460977 * value)
	{
		____stepCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&____stepCamera_4, value);
	}

	inline static int32_t get_offset_of__blackout_5() { return static_cast<int32_t>(offsetof(TutorialController_t2540770700, ____blackout_5)); }
	inline TutorialBlackoutController_t1835124011 * get__blackout_5() const { return ____blackout_5; }
	inline TutorialBlackoutController_t1835124011 ** get_address_of__blackout_5() { return &____blackout_5; }
	inline void set__blackout_5(TutorialBlackoutController_t1835124011 * value)
	{
		____blackout_5 = value;
		Il2CppCodeGenWriteBarrier(&____blackout_5, value);
	}
};

struct TutorialController_t2540770700_StaticFields
{
public:
	// GSN.Skill.Games.Common.Tutorial.Unity.TutorialController GSN.Skill.Games.Common.Tutorial.Unity.TutorialController::_instance
	TutorialController_t2540770700 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(TutorialController_t2540770700_StaticFields, ____instance_2)); }
	inline TutorialController_t2540770700 * get__instance_2() const { return ____instance_2; }
	inline TutorialController_t2540770700 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(TutorialController_t2540770700 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
