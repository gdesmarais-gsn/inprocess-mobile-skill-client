#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t2810717544;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Material
struct Material_t193706927;
// GSN.Skill.Games.Tripeaks.DustFX
struct DustFX_t531013926;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.PoiCharacter
struct  PoiCharacter_t134467383  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.PoiCharacter::animator
	Animator_t69676727 * ___animator_2;
	// UnityEngine.Renderer[] GSN.Skill.Games.Tripeaks.PoiCharacter::maskObjects
	RendererU5BU5D_t2810717544* ___maskObjects_3;
	// UnityEngine.Renderer GSN.Skill.Games.Tripeaks.PoiCharacter::bodyObject
	Renderer_t257310565 * ___bodyObject_4;
	// UnityEngine.Material GSN.Skill.Games.Tripeaks.PoiCharacter::sunsetMask
	Material_t193706927 * ___sunsetMask_5;
	// UnityEngine.Material GSN.Skill.Games.Tripeaks.PoiCharacter::nightMask
	Material_t193706927 * ___nightMask_6;
	// UnityEngine.Material GSN.Skill.Games.Tripeaks.PoiCharacter::sunsetBody
	Material_t193706927 * ___sunsetBody_7;
	// UnityEngine.Material GSN.Skill.Games.Tripeaks.PoiCharacter::nightBody
	Material_t193706927 * ___nightBody_8;
	// GSN.Skill.Games.Tripeaks.DustFX GSN.Skill.Games.Tripeaks.PoiCharacter::dustFX
	DustFX_t531013926 * ___dustFX_9;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(PoiCharacter_t134467383, ___animator_2)); }
	inline Animator_t69676727 * get_animator_2() const { return ___animator_2; }
	inline Animator_t69676727 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t69676727 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_maskObjects_3() { return static_cast<int32_t>(offsetof(PoiCharacter_t134467383, ___maskObjects_3)); }
	inline RendererU5BU5D_t2810717544* get_maskObjects_3() const { return ___maskObjects_3; }
	inline RendererU5BU5D_t2810717544** get_address_of_maskObjects_3() { return &___maskObjects_3; }
	inline void set_maskObjects_3(RendererU5BU5D_t2810717544* value)
	{
		___maskObjects_3 = value;
		Il2CppCodeGenWriteBarrier(&___maskObjects_3, value);
	}

	inline static int32_t get_offset_of_bodyObject_4() { return static_cast<int32_t>(offsetof(PoiCharacter_t134467383, ___bodyObject_4)); }
	inline Renderer_t257310565 * get_bodyObject_4() const { return ___bodyObject_4; }
	inline Renderer_t257310565 ** get_address_of_bodyObject_4() { return &___bodyObject_4; }
	inline void set_bodyObject_4(Renderer_t257310565 * value)
	{
		___bodyObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___bodyObject_4, value);
	}

	inline static int32_t get_offset_of_sunsetMask_5() { return static_cast<int32_t>(offsetof(PoiCharacter_t134467383, ___sunsetMask_5)); }
	inline Material_t193706927 * get_sunsetMask_5() const { return ___sunsetMask_5; }
	inline Material_t193706927 ** get_address_of_sunsetMask_5() { return &___sunsetMask_5; }
	inline void set_sunsetMask_5(Material_t193706927 * value)
	{
		___sunsetMask_5 = value;
		Il2CppCodeGenWriteBarrier(&___sunsetMask_5, value);
	}

	inline static int32_t get_offset_of_nightMask_6() { return static_cast<int32_t>(offsetof(PoiCharacter_t134467383, ___nightMask_6)); }
	inline Material_t193706927 * get_nightMask_6() const { return ___nightMask_6; }
	inline Material_t193706927 ** get_address_of_nightMask_6() { return &___nightMask_6; }
	inline void set_nightMask_6(Material_t193706927 * value)
	{
		___nightMask_6 = value;
		Il2CppCodeGenWriteBarrier(&___nightMask_6, value);
	}

	inline static int32_t get_offset_of_sunsetBody_7() { return static_cast<int32_t>(offsetof(PoiCharacter_t134467383, ___sunsetBody_7)); }
	inline Material_t193706927 * get_sunsetBody_7() const { return ___sunsetBody_7; }
	inline Material_t193706927 ** get_address_of_sunsetBody_7() { return &___sunsetBody_7; }
	inline void set_sunsetBody_7(Material_t193706927 * value)
	{
		___sunsetBody_7 = value;
		Il2CppCodeGenWriteBarrier(&___sunsetBody_7, value);
	}

	inline static int32_t get_offset_of_nightBody_8() { return static_cast<int32_t>(offsetof(PoiCharacter_t134467383, ___nightBody_8)); }
	inline Material_t193706927 * get_nightBody_8() const { return ___nightBody_8; }
	inline Material_t193706927 ** get_address_of_nightBody_8() { return &___nightBody_8; }
	inline void set_nightBody_8(Material_t193706927 * value)
	{
		___nightBody_8 = value;
		Il2CppCodeGenWriteBarrier(&___nightBody_8, value);
	}

	inline static int32_t get_offset_of_dustFX_9() { return static_cast<int32_t>(offsetof(PoiCharacter_t134467383, ___dustFX_9)); }
	inline DustFX_t531013926 * get_dustFX_9() const { return ___dustFX_9; }
	inline DustFX_t531013926 ** get_address_of_dustFX_9() { return &___dustFX_9; }
	inline void set_dustFX_9(DustFX_t531013926 * value)
	{
		___dustFX_9 = value;
		Il2CppCodeGenWriteBarrier(&___dustFX_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
