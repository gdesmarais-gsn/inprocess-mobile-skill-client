#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepController
struct  TutorialStepController_t2587800018  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepController::<Camera>k__BackingField
	Camera_t189460977 * ___U3CCameraU3Ek__BackingField_2;
	// UnityEngine.Events.UnityEvent GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepController::onShowEvent
	UnityEvent_t408735097 * ___onShowEvent_3;
	// UnityEngine.Events.UnityEvent GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepController::onWillHideEvent
	UnityEvent_t408735097 * ___onWillHideEvent_4;
	// UnityEngine.Events.UnityEvent GSN.Skill.Games.Common.Tutorial.Unity.TutorialStepController::onHideEvent
	UnityEvent_t408735097 * ___onHideEvent_5;

public:
	inline static int32_t get_offset_of_U3CCameraU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TutorialStepController_t2587800018, ___U3CCameraU3Ek__BackingField_2)); }
	inline Camera_t189460977 * get_U3CCameraU3Ek__BackingField_2() const { return ___U3CCameraU3Ek__BackingField_2; }
	inline Camera_t189460977 ** get_address_of_U3CCameraU3Ek__BackingField_2() { return &___U3CCameraU3Ek__BackingField_2; }
	inline void set_U3CCameraU3Ek__BackingField_2(Camera_t189460977 * value)
	{
		___U3CCameraU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCameraU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_onShowEvent_3() { return static_cast<int32_t>(offsetof(TutorialStepController_t2587800018, ___onShowEvent_3)); }
	inline UnityEvent_t408735097 * get_onShowEvent_3() const { return ___onShowEvent_3; }
	inline UnityEvent_t408735097 ** get_address_of_onShowEvent_3() { return &___onShowEvent_3; }
	inline void set_onShowEvent_3(UnityEvent_t408735097 * value)
	{
		___onShowEvent_3 = value;
		Il2CppCodeGenWriteBarrier(&___onShowEvent_3, value);
	}

	inline static int32_t get_offset_of_onWillHideEvent_4() { return static_cast<int32_t>(offsetof(TutorialStepController_t2587800018, ___onWillHideEvent_4)); }
	inline UnityEvent_t408735097 * get_onWillHideEvent_4() const { return ___onWillHideEvent_4; }
	inline UnityEvent_t408735097 ** get_address_of_onWillHideEvent_4() { return &___onWillHideEvent_4; }
	inline void set_onWillHideEvent_4(UnityEvent_t408735097 * value)
	{
		___onWillHideEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___onWillHideEvent_4, value);
	}

	inline static int32_t get_offset_of_onHideEvent_5() { return static_cast<int32_t>(offsetof(TutorialStepController_t2587800018, ___onHideEvent_5)); }
	inline UnityEvent_t408735097 * get_onHideEvent_5() const { return ___onHideEvent_5; }
	inline UnityEvent_t408735097 ** get_address_of_onHideEvent_5() { return &___onHideEvent_5; }
	inline void set_onHideEvent_5(UnityEvent_t408735097 * value)
	{
		___onHideEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___onHideEvent_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
