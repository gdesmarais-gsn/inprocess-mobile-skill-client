#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Tutorial.Unity.TutorialActiveArea[]
struct TutorialActiveAreaU5BU5D_t1430130712;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.Unity.TutorialActiveAreasController
struct  TutorialActiveAreasController_t2367064372  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color GSN.Skill.Games.Common.Tutorial.Unity.TutorialActiveAreasController::Color
	Color_t2020392075  ___Color_2;
	// System.Single GSN.Skill.Games.Common.Tutorial.Unity.TutorialActiveAreasController::AlphaCutoff
	float ___AlphaCutoff_3;
	// GSN.Skill.Games.Common.Tutorial.Unity.TutorialActiveArea[] GSN.Skill.Games.Common.Tutorial.Unity.TutorialActiveAreasController::_activeAreas
	TutorialActiveAreaU5BU5D_t1430130712* ____activeAreas_4;

public:
	inline static int32_t get_offset_of_Color_2() { return static_cast<int32_t>(offsetof(TutorialActiveAreasController_t2367064372, ___Color_2)); }
	inline Color_t2020392075  get_Color_2() const { return ___Color_2; }
	inline Color_t2020392075 * get_address_of_Color_2() { return &___Color_2; }
	inline void set_Color_2(Color_t2020392075  value)
	{
		___Color_2 = value;
	}

	inline static int32_t get_offset_of_AlphaCutoff_3() { return static_cast<int32_t>(offsetof(TutorialActiveAreasController_t2367064372, ___AlphaCutoff_3)); }
	inline float get_AlphaCutoff_3() const { return ___AlphaCutoff_3; }
	inline float* get_address_of_AlphaCutoff_3() { return &___AlphaCutoff_3; }
	inline void set_AlphaCutoff_3(float value)
	{
		___AlphaCutoff_3 = value;
	}

	inline static int32_t get_offset_of__activeAreas_4() { return static_cast<int32_t>(offsetof(TutorialActiveAreasController_t2367064372, ____activeAreas_4)); }
	inline TutorialActiveAreaU5BU5D_t1430130712* get__activeAreas_4() const { return ____activeAreas_4; }
	inline TutorialActiveAreaU5BU5D_t1430130712** get_address_of__activeAreas_4() { return &____activeAreas_4; }
	inline void set__activeAreas_4(TutorialActiveAreaU5BU5D_t1430130712* value)
	{
		____activeAreas_4 = value;
		Il2CppCodeGenWriteBarrier(&____activeAreas_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
