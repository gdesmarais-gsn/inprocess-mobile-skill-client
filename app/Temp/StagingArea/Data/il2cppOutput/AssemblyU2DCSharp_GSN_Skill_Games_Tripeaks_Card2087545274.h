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
// GSN.Skill.Games.Common.AnimCurve
struct AnimCurve_t116428666;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t1098056643;
// GSN.Skill.Games.Tripeaks.OverlayBase
struct OverlayBase_t541437815;
// System.String
struct String_t;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Po1962253443.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_CardTyp2845949242.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Tripeaks_PileID2297141513.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.Card
struct  Card_t2087545274  : public PooledMonoBehaviour_t1962253443
{
public:
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.Card::_animator
	Animator_t69676727 * ____animator_4;
	// GSN.Skill.Games.Common.AnimCurve GSN.Skill.Games.Tripeaks.Card::_cardHop
	AnimCurve_t116428666 * ____cardHop_5;
	// System.Int32 GSN.Skill.Games.Tripeaks.Card::_value
	int32_t ____value_6;
	// System.Int32 GSN.Skill.Games.Tripeaks.Card::_index
	int32_t ____index_7;
	// System.Int32 GSN.Skill.Games.Tripeaks.Card::_cardID
	int32_t ____cardID_8;
	// System.Int32 GSN.Skill.Games.Tripeaks.Card::_flags
	int32_t ____flags_9;
	// GSN.Skill.Games.Tripeaks.CardType GSN.Skill.Games.Tripeaks.Card::_cardType
	int32_t ____cardType_10;
	// UnityEngine.MeshRenderer GSN.Skill.Games.Tripeaks.Card::_cardFrontRenderer
	MeshRenderer_t1268241104 * ____cardFrontRenderer_11;
	// UnityEngine.MeshRenderer GSN.Skill.Games.Tripeaks.Card::_cardBackRenderer
	MeshRenderer_t1268241104 * ____cardBackRenderer_12;
	// UnityEngine.SpriteRenderer[] GSN.Skill.Games.Tripeaks.Card::_foregroundSprites
	SpriteRendererU5BU5D_t1098056643* ____foregroundSprites_13;
	// GSN.Skill.Games.Tripeaks.PileID GSN.Skill.Games.Tripeaks.Card::_PileID
	int32_t ____PileID_14;
	// GSN.Skill.Games.Tripeaks.OverlayBase GSN.Skill.Games.Tripeaks.Card::_overlay
	OverlayBase_t541437815 * ____overlay_15;
	// System.Boolean GSN.Skill.Games.Tripeaks.Card::_faceUp
	bool ____faceUp_16;
	// System.Single GSN.Skill.Games.Tripeaks.Card::SPIN_DIST_1
	float ___SPIN_DIST_1_37;
	// System.Single GSN.Skill.Games.Tripeaks.Card::SPIN_DIST_2
	float ___SPIN_DIST_2_38;
	// System.Single GSN.Skill.Games.Tripeaks.Card::RANDOM_MOVE_DIST
	float ___RANDOM_MOVE_DIST_39;
	// System.Single GSN.Skill.Games.Tripeaks.Card::RANDOM_MOVE_SPEED
	float ___RANDOM_MOVE_SPEED_40;
	// System.Boolean GSN.Skill.Games.Tripeaks.Card::_waitForAnimationToEndToShowOverlay
	bool ____waitForAnimationToEndToShowOverlay_41;
	// UnityEngine.Color[] GSN.Skill.Games.Tripeaks.Card::_timeOfDayTint
	ColorU5BU5D_t672350442* ____timeOfDayTint_42;
	// UnityEngine.Vector3 GSN.Skill.Games.Tripeaks.Card::_originPos
	Vector3_t2243707580  ____originPos_44;
	// UnityEngine.Vector3 GSN.Skill.Games.Tripeaks.Card::_pendingTweenDest
	Vector3_t2243707580  ____pendingTweenDest_45;
	// System.Boolean GSN.Skill.Games.Tripeaks.Card::_pendingTween
	bool ____pendingTween_46;

public:
	inline static int32_t get_offset_of__animator_4() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____animator_4)); }
	inline Animator_t69676727 * get__animator_4() const { return ____animator_4; }
	inline Animator_t69676727 ** get_address_of__animator_4() { return &____animator_4; }
	inline void set__animator_4(Animator_t69676727 * value)
	{
		____animator_4 = value;
		Il2CppCodeGenWriteBarrier(&____animator_4, value);
	}

	inline static int32_t get_offset_of__cardHop_5() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____cardHop_5)); }
	inline AnimCurve_t116428666 * get__cardHop_5() const { return ____cardHop_5; }
	inline AnimCurve_t116428666 ** get_address_of__cardHop_5() { return &____cardHop_5; }
	inline void set__cardHop_5(AnimCurve_t116428666 * value)
	{
		____cardHop_5 = value;
		Il2CppCodeGenWriteBarrier(&____cardHop_5, value);
	}

	inline static int32_t get_offset_of__value_6() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____value_6)); }
	inline int32_t get__value_6() const { return ____value_6; }
	inline int32_t* get_address_of__value_6() { return &____value_6; }
	inline void set__value_6(int32_t value)
	{
		____value_6 = value;
	}

	inline static int32_t get_offset_of__index_7() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____index_7)); }
	inline int32_t get__index_7() const { return ____index_7; }
	inline int32_t* get_address_of__index_7() { return &____index_7; }
	inline void set__index_7(int32_t value)
	{
		____index_7 = value;
	}

	inline static int32_t get_offset_of__cardID_8() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____cardID_8)); }
	inline int32_t get__cardID_8() const { return ____cardID_8; }
	inline int32_t* get_address_of__cardID_8() { return &____cardID_8; }
	inline void set__cardID_8(int32_t value)
	{
		____cardID_8 = value;
	}

	inline static int32_t get_offset_of__flags_9() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____flags_9)); }
	inline int32_t get__flags_9() const { return ____flags_9; }
	inline int32_t* get_address_of__flags_9() { return &____flags_9; }
	inline void set__flags_9(int32_t value)
	{
		____flags_9 = value;
	}

	inline static int32_t get_offset_of__cardType_10() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____cardType_10)); }
	inline int32_t get__cardType_10() const { return ____cardType_10; }
	inline int32_t* get_address_of__cardType_10() { return &____cardType_10; }
	inline void set__cardType_10(int32_t value)
	{
		____cardType_10 = value;
	}

	inline static int32_t get_offset_of__cardFrontRenderer_11() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____cardFrontRenderer_11)); }
	inline MeshRenderer_t1268241104 * get__cardFrontRenderer_11() const { return ____cardFrontRenderer_11; }
	inline MeshRenderer_t1268241104 ** get_address_of__cardFrontRenderer_11() { return &____cardFrontRenderer_11; }
	inline void set__cardFrontRenderer_11(MeshRenderer_t1268241104 * value)
	{
		____cardFrontRenderer_11 = value;
		Il2CppCodeGenWriteBarrier(&____cardFrontRenderer_11, value);
	}

	inline static int32_t get_offset_of__cardBackRenderer_12() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____cardBackRenderer_12)); }
	inline MeshRenderer_t1268241104 * get__cardBackRenderer_12() const { return ____cardBackRenderer_12; }
	inline MeshRenderer_t1268241104 ** get_address_of__cardBackRenderer_12() { return &____cardBackRenderer_12; }
	inline void set__cardBackRenderer_12(MeshRenderer_t1268241104 * value)
	{
		____cardBackRenderer_12 = value;
		Il2CppCodeGenWriteBarrier(&____cardBackRenderer_12, value);
	}

	inline static int32_t get_offset_of__foregroundSprites_13() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____foregroundSprites_13)); }
	inline SpriteRendererU5BU5D_t1098056643* get__foregroundSprites_13() const { return ____foregroundSprites_13; }
	inline SpriteRendererU5BU5D_t1098056643** get_address_of__foregroundSprites_13() { return &____foregroundSprites_13; }
	inline void set__foregroundSprites_13(SpriteRendererU5BU5D_t1098056643* value)
	{
		____foregroundSprites_13 = value;
		Il2CppCodeGenWriteBarrier(&____foregroundSprites_13, value);
	}

	inline static int32_t get_offset_of__PileID_14() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____PileID_14)); }
	inline int32_t get__PileID_14() const { return ____PileID_14; }
	inline int32_t* get_address_of__PileID_14() { return &____PileID_14; }
	inline void set__PileID_14(int32_t value)
	{
		____PileID_14 = value;
	}

	inline static int32_t get_offset_of__overlay_15() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____overlay_15)); }
	inline OverlayBase_t541437815 * get__overlay_15() const { return ____overlay_15; }
	inline OverlayBase_t541437815 ** get_address_of__overlay_15() { return &____overlay_15; }
	inline void set__overlay_15(OverlayBase_t541437815 * value)
	{
		____overlay_15 = value;
		Il2CppCodeGenWriteBarrier(&____overlay_15, value);
	}

	inline static int32_t get_offset_of__faceUp_16() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____faceUp_16)); }
	inline bool get__faceUp_16() const { return ____faceUp_16; }
	inline bool* get_address_of__faceUp_16() { return &____faceUp_16; }
	inline void set__faceUp_16(bool value)
	{
		____faceUp_16 = value;
	}

	inline static int32_t get_offset_of_SPIN_DIST_1_37() { return static_cast<int32_t>(offsetof(Card_t2087545274, ___SPIN_DIST_1_37)); }
	inline float get_SPIN_DIST_1_37() const { return ___SPIN_DIST_1_37; }
	inline float* get_address_of_SPIN_DIST_1_37() { return &___SPIN_DIST_1_37; }
	inline void set_SPIN_DIST_1_37(float value)
	{
		___SPIN_DIST_1_37 = value;
	}

	inline static int32_t get_offset_of_SPIN_DIST_2_38() { return static_cast<int32_t>(offsetof(Card_t2087545274, ___SPIN_DIST_2_38)); }
	inline float get_SPIN_DIST_2_38() const { return ___SPIN_DIST_2_38; }
	inline float* get_address_of_SPIN_DIST_2_38() { return &___SPIN_DIST_2_38; }
	inline void set_SPIN_DIST_2_38(float value)
	{
		___SPIN_DIST_2_38 = value;
	}

	inline static int32_t get_offset_of_RANDOM_MOVE_DIST_39() { return static_cast<int32_t>(offsetof(Card_t2087545274, ___RANDOM_MOVE_DIST_39)); }
	inline float get_RANDOM_MOVE_DIST_39() const { return ___RANDOM_MOVE_DIST_39; }
	inline float* get_address_of_RANDOM_MOVE_DIST_39() { return &___RANDOM_MOVE_DIST_39; }
	inline void set_RANDOM_MOVE_DIST_39(float value)
	{
		___RANDOM_MOVE_DIST_39 = value;
	}

	inline static int32_t get_offset_of_RANDOM_MOVE_SPEED_40() { return static_cast<int32_t>(offsetof(Card_t2087545274, ___RANDOM_MOVE_SPEED_40)); }
	inline float get_RANDOM_MOVE_SPEED_40() const { return ___RANDOM_MOVE_SPEED_40; }
	inline float* get_address_of_RANDOM_MOVE_SPEED_40() { return &___RANDOM_MOVE_SPEED_40; }
	inline void set_RANDOM_MOVE_SPEED_40(float value)
	{
		___RANDOM_MOVE_SPEED_40 = value;
	}

	inline static int32_t get_offset_of__waitForAnimationToEndToShowOverlay_41() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____waitForAnimationToEndToShowOverlay_41)); }
	inline bool get__waitForAnimationToEndToShowOverlay_41() const { return ____waitForAnimationToEndToShowOverlay_41; }
	inline bool* get_address_of__waitForAnimationToEndToShowOverlay_41() { return &____waitForAnimationToEndToShowOverlay_41; }
	inline void set__waitForAnimationToEndToShowOverlay_41(bool value)
	{
		____waitForAnimationToEndToShowOverlay_41 = value;
	}

	inline static int32_t get_offset_of__timeOfDayTint_42() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____timeOfDayTint_42)); }
	inline ColorU5BU5D_t672350442* get__timeOfDayTint_42() const { return ____timeOfDayTint_42; }
	inline ColorU5BU5D_t672350442** get_address_of__timeOfDayTint_42() { return &____timeOfDayTint_42; }
	inline void set__timeOfDayTint_42(ColorU5BU5D_t672350442* value)
	{
		____timeOfDayTint_42 = value;
		Il2CppCodeGenWriteBarrier(&____timeOfDayTint_42, value);
	}

	inline static int32_t get_offset_of__originPos_44() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____originPos_44)); }
	inline Vector3_t2243707580  get__originPos_44() const { return ____originPos_44; }
	inline Vector3_t2243707580 * get_address_of__originPos_44() { return &____originPos_44; }
	inline void set__originPos_44(Vector3_t2243707580  value)
	{
		____originPos_44 = value;
	}

	inline static int32_t get_offset_of__pendingTweenDest_45() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____pendingTweenDest_45)); }
	inline Vector3_t2243707580  get__pendingTweenDest_45() const { return ____pendingTweenDest_45; }
	inline Vector3_t2243707580 * get_address_of__pendingTweenDest_45() { return &____pendingTweenDest_45; }
	inline void set__pendingTweenDest_45(Vector3_t2243707580  value)
	{
		____pendingTweenDest_45 = value;
	}

	inline static int32_t get_offset_of__pendingTween_46() { return static_cast<int32_t>(offsetof(Card_t2087545274, ____pendingTween_46)); }
	inline bool get__pendingTween_46() const { return ____pendingTween_46; }
	inline bool* get_address_of__pendingTween_46() { return &____pendingTween_46; }
	inline void set__pendingTween_46(bool value)
	{
		____pendingTween_46 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
