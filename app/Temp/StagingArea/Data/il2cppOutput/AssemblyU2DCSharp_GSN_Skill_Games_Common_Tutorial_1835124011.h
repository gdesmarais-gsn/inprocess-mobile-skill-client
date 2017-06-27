#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Tutorial.Unity.TutorialBlackoutController
struct  TutorialBlackoutController_t1835124011  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite GSN.Skill.Games.Common.Tutorial.Unity.TutorialBlackoutController::blackoutTexture
	Sprite_t309593783 * ___blackoutTexture_2;
	// UnityEngine.Color GSN.Skill.Games.Common.Tutorial.Unity.TutorialBlackoutController::blackoutColor
	Color_t2020392075  ___blackoutColor_3;
	// UnityEngine.Transform GSN.Skill.Games.Common.Tutorial.Unity.TutorialBlackoutController::_transform
	Transform_t3275118058 * ____transform_4;
	// UnityEngine.SpriteRenderer GSN.Skill.Games.Common.Tutorial.Unity.TutorialBlackoutController::_backoutSpriteRenderer
	SpriteRenderer_t1209076198 * ____backoutSpriteRenderer_5;

public:
	inline static int32_t get_offset_of_blackoutTexture_2() { return static_cast<int32_t>(offsetof(TutorialBlackoutController_t1835124011, ___blackoutTexture_2)); }
	inline Sprite_t309593783 * get_blackoutTexture_2() const { return ___blackoutTexture_2; }
	inline Sprite_t309593783 ** get_address_of_blackoutTexture_2() { return &___blackoutTexture_2; }
	inline void set_blackoutTexture_2(Sprite_t309593783 * value)
	{
		___blackoutTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___blackoutTexture_2, value);
	}

	inline static int32_t get_offset_of_blackoutColor_3() { return static_cast<int32_t>(offsetof(TutorialBlackoutController_t1835124011, ___blackoutColor_3)); }
	inline Color_t2020392075  get_blackoutColor_3() const { return ___blackoutColor_3; }
	inline Color_t2020392075 * get_address_of_blackoutColor_3() { return &___blackoutColor_3; }
	inline void set_blackoutColor_3(Color_t2020392075  value)
	{
		___blackoutColor_3 = value;
	}

	inline static int32_t get_offset_of__transform_4() { return static_cast<int32_t>(offsetof(TutorialBlackoutController_t1835124011, ____transform_4)); }
	inline Transform_t3275118058 * get__transform_4() const { return ____transform_4; }
	inline Transform_t3275118058 ** get_address_of__transform_4() { return &____transform_4; }
	inline void set__transform_4(Transform_t3275118058 * value)
	{
		____transform_4 = value;
		Il2CppCodeGenWriteBarrier(&____transform_4, value);
	}

	inline static int32_t get_offset_of__backoutSpriteRenderer_5() { return static_cast<int32_t>(offsetof(TutorialBlackoutController_t1835124011, ____backoutSpriteRenderer_5)); }
	inline SpriteRenderer_t1209076198 * get__backoutSpriteRenderer_5() const { return ____backoutSpriteRenderer_5; }
	inline SpriteRenderer_t1209076198 ** get_address_of__backoutSpriteRenderer_5() { return &____backoutSpriteRenderer_5; }
	inline void set__backoutSpriteRenderer_5(SpriteRenderer_t1209076198 * value)
	{
		____backoutSpriteRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&____backoutSpriteRenderer_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
