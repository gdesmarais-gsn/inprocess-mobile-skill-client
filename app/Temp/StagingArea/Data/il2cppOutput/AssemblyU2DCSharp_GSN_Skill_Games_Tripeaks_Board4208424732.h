#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// GSN.Skill.Games.Tripeaks.HoldingCard
struct HoldingCard_t3246184859;
// GSN.Skill.Games.Tripeaks.WildButton
struct WildButton_t3930816134;
// GSN.Skill.Games.Tripeaks.UIHud
struct UIHud_t3729045721;
// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.Card>
struct List_1_t1456666406;
// GSN.Skill.Games.Tripeaks.Card
struct Card_t2087545274;
// GSN.Skill.Games.Tripeaks.PlayfieldData
struct PlayfieldData_t2127658700;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Client.MonoBehaviourPool
struct MonoBehaviourPool_t4145220098;
// GSN.Skill.Games.Tripeaks.DeckData
struct DeckData_t2475950745;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.Board
struct  Board_t4208424732  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform GSN.Skill.Games.Tripeaks.Board::_drawPile
	Transform_t3275118058 * ____drawPile_2;
	// UnityEngine.Transform GSN.Skill.Games.Tripeaks.Board::_wastePile
	Transform_t3275118058 * ____wastePile_3;
	// GSN.Skill.Games.Tripeaks.HoldingCard GSN.Skill.Games.Tripeaks.Board::_holdingCard
	HoldingCard_t3246184859 * ____holdingCard_4;
	// GSN.Skill.Games.Tripeaks.WildButton GSN.Skill.Games.Tripeaks.Board::_wildButton
	WildButton_t3930816134 * ____wildButton_5;
	// System.Single GSN.Skill.Games.Tripeaks.Board::_screenWorldLeftSide
	float ____screenWorldLeftSide_6;
	// GSN.Skill.Games.Tripeaks.UIHud GSN.Skill.Games.Tripeaks.Board::_uiHud
	UIHud_t3729045721 * ____uiHud_7;
	// UnityEngine.Vector3 GSN.Skill.Games.Tripeaks.Board::_wastePilePosition
	Vector3_t2243707580  ____wastePilePosition_8;
	// UnityEngine.Vector3 GSN.Skill.Games.Tripeaks.Board::_drawPilePosition
	Vector3_t2243707580  ____drawPilePosition_9;
	// UnityEngine.Vector3 GSN.Skill.Games.Tripeaks.Board::_wildCardButtonPos
	Vector3_t2243707580  ____wildCardButtonPos_10;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.Card> GSN.Skill.Games.Tripeaks.Board::_cards
	List_1_t1456666406 * ____cards_29;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.Card> GSN.Skill.Games.Tripeaks.Board::_dealPile
	List_1_t1456666406 * ____dealPile_30;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.Card> GSN.Skill.Games.Tripeaks.Board::_wasteCards
	List_1_t1456666406 * ____wasteCards_31;
	// GSN.Skill.Games.Tripeaks.Card GSN.Skill.Games.Tripeaks.Board::_wildCardOneShot
	Card_t2087545274 * ____wildCardOneShot_32;
	// System.Int32 GSN.Skill.Games.Tripeaks.Board::_reshufflePenalty
	int32_t ____reshufflePenalty_33;
	// System.Single GSN.Skill.Games.Tripeaks.Board::_lastReshuffleTime
	float ____lastReshuffleTime_34;
	// GSN.Skill.Games.Tripeaks.PlayfieldData GSN.Skill.Games.Tripeaks.Board::_pfData
	PlayfieldData_t2127658700 * ____pfData_35;
	// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.Board::_reshuffleCoroutine
	Il2CppObject * ____reshuffleCoroutine_36;
	// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.Board::_animateDealTableau
	Il2CppObject * ____animateDealTableau_37;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_faceCardPool
	MonoBehaviourPool_t4145220098 * ____faceCardPool_65;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_goldenCardPool
	MonoBehaviourPool_t4145220098 * ____goldenCardPool_66;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_oneShotWildCardPool
	MonoBehaviourPool_t4145220098 * ____oneShotWildCardPool_67;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_blackTikiCardPool
	MonoBehaviourPool_t4145220098 * ____blackTikiCardPool_68;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_redTikiCardPool
	MonoBehaviourPool_t4145220098 * ____redTikiCardPool_69;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_flowerTikiCardPool
	MonoBehaviourPool_t4145220098 * ____flowerTikiCardPool_70;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_volcanoTikiCardPool
	MonoBehaviourPool_t4145220098 * ____volcanoTikiCardPool_71;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_sharkCardPool
	MonoBehaviourPool_t4145220098 * ____sharkCardPool_72;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_sharkBaitCardPool
	MonoBehaviourPool_t4145220098 * ____sharkBaitCardPool_73;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_trapOverlayPool
	MonoBehaviourPool_t4145220098 * ____trapOverlayPool_74;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_dynamiteOverlayPool
	MonoBehaviourPool_t4145220098 * ____dynamiteOverlayPool_75;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_tutorialSelectOverlayPool
	MonoBehaviourPool_t4145220098 * ____tutorialSelectOverlayPool_76;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.Board::_tutoriaDestinationOverlayPool
	MonoBehaviourPool_t4145220098 * ____tutoriaDestinationOverlayPool_77;
	// GSN.Skill.Games.Tripeaks.DeckData GSN.Skill.Games.Tripeaks.Board::_deckData
	DeckData_t2475950745 * ____deckData_78;
	// System.Boolean GSN.Skill.Games.Tripeaks.Board::_poolsInitilized
	bool ____poolsInitilized_79;

public:
	inline static int32_t get_offset_of__drawPile_2() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____drawPile_2)); }
	inline Transform_t3275118058 * get__drawPile_2() const { return ____drawPile_2; }
	inline Transform_t3275118058 ** get_address_of__drawPile_2() { return &____drawPile_2; }
	inline void set__drawPile_2(Transform_t3275118058 * value)
	{
		____drawPile_2 = value;
		Il2CppCodeGenWriteBarrier(&____drawPile_2, value);
	}

	inline static int32_t get_offset_of__wastePile_3() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____wastePile_3)); }
	inline Transform_t3275118058 * get__wastePile_3() const { return ____wastePile_3; }
	inline Transform_t3275118058 ** get_address_of__wastePile_3() { return &____wastePile_3; }
	inline void set__wastePile_3(Transform_t3275118058 * value)
	{
		____wastePile_3 = value;
		Il2CppCodeGenWriteBarrier(&____wastePile_3, value);
	}

	inline static int32_t get_offset_of__holdingCard_4() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____holdingCard_4)); }
	inline HoldingCard_t3246184859 * get__holdingCard_4() const { return ____holdingCard_4; }
	inline HoldingCard_t3246184859 ** get_address_of__holdingCard_4() { return &____holdingCard_4; }
	inline void set__holdingCard_4(HoldingCard_t3246184859 * value)
	{
		____holdingCard_4 = value;
		Il2CppCodeGenWriteBarrier(&____holdingCard_4, value);
	}

	inline static int32_t get_offset_of__wildButton_5() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____wildButton_5)); }
	inline WildButton_t3930816134 * get__wildButton_5() const { return ____wildButton_5; }
	inline WildButton_t3930816134 ** get_address_of__wildButton_5() { return &____wildButton_5; }
	inline void set__wildButton_5(WildButton_t3930816134 * value)
	{
		____wildButton_5 = value;
		Il2CppCodeGenWriteBarrier(&____wildButton_5, value);
	}

	inline static int32_t get_offset_of__screenWorldLeftSide_6() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____screenWorldLeftSide_6)); }
	inline float get__screenWorldLeftSide_6() const { return ____screenWorldLeftSide_6; }
	inline float* get_address_of__screenWorldLeftSide_6() { return &____screenWorldLeftSide_6; }
	inline void set__screenWorldLeftSide_6(float value)
	{
		____screenWorldLeftSide_6 = value;
	}

	inline static int32_t get_offset_of__uiHud_7() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____uiHud_7)); }
	inline UIHud_t3729045721 * get__uiHud_7() const { return ____uiHud_7; }
	inline UIHud_t3729045721 ** get_address_of__uiHud_7() { return &____uiHud_7; }
	inline void set__uiHud_7(UIHud_t3729045721 * value)
	{
		____uiHud_7 = value;
		Il2CppCodeGenWriteBarrier(&____uiHud_7, value);
	}

	inline static int32_t get_offset_of__wastePilePosition_8() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____wastePilePosition_8)); }
	inline Vector3_t2243707580  get__wastePilePosition_8() const { return ____wastePilePosition_8; }
	inline Vector3_t2243707580 * get_address_of__wastePilePosition_8() { return &____wastePilePosition_8; }
	inline void set__wastePilePosition_8(Vector3_t2243707580  value)
	{
		____wastePilePosition_8 = value;
	}

	inline static int32_t get_offset_of__drawPilePosition_9() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____drawPilePosition_9)); }
	inline Vector3_t2243707580  get__drawPilePosition_9() const { return ____drawPilePosition_9; }
	inline Vector3_t2243707580 * get_address_of__drawPilePosition_9() { return &____drawPilePosition_9; }
	inline void set__drawPilePosition_9(Vector3_t2243707580  value)
	{
		____drawPilePosition_9 = value;
	}

	inline static int32_t get_offset_of__wildCardButtonPos_10() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____wildCardButtonPos_10)); }
	inline Vector3_t2243707580  get__wildCardButtonPos_10() const { return ____wildCardButtonPos_10; }
	inline Vector3_t2243707580 * get_address_of__wildCardButtonPos_10() { return &____wildCardButtonPos_10; }
	inline void set__wildCardButtonPos_10(Vector3_t2243707580  value)
	{
		____wildCardButtonPos_10 = value;
	}

	inline static int32_t get_offset_of__cards_29() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____cards_29)); }
	inline List_1_t1456666406 * get__cards_29() const { return ____cards_29; }
	inline List_1_t1456666406 ** get_address_of__cards_29() { return &____cards_29; }
	inline void set__cards_29(List_1_t1456666406 * value)
	{
		____cards_29 = value;
		Il2CppCodeGenWriteBarrier(&____cards_29, value);
	}

	inline static int32_t get_offset_of__dealPile_30() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____dealPile_30)); }
	inline List_1_t1456666406 * get__dealPile_30() const { return ____dealPile_30; }
	inline List_1_t1456666406 ** get_address_of__dealPile_30() { return &____dealPile_30; }
	inline void set__dealPile_30(List_1_t1456666406 * value)
	{
		____dealPile_30 = value;
		Il2CppCodeGenWriteBarrier(&____dealPile_30, value);
	}

	inline static int32_t get_offset_of__wasteCards_31() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____wasteCards_31)); }
	inline List_1_t1456666406 * get__wasteCards_31() const { return ____wasteCards_31; }
	inline List_1_t1456666406 ** get_address_of__wasteCards_31() { return &____wasteCards_31; }
	inline void set__wasteCards_31(List_1_t1456666406 * value)
	{
		____wasteCards_31 = value;
		Il2CppCodeGenWriteBarrier(&____wasteCards_31, value);
	}

	inline static int32_t get_offset_of__wildCardOneShot_32() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____wildCardOneShot_32)); }
	inline Card_t2087545274 * get__wildCardOneShot_32() const { return ____wildCardOneShot_32; }
	inline Card_t2087545274 ** get_address_of__wildCardOneShot_32() { return &____wildCardOneShot_32; }
	inline void set__wildCardOneShot_32(Card_t2087545274 * value)
	{
		____wildCardOneShot_32 = value;
		Il2CppCodeGenWriteBarrier(&____wildCardOneShot_32, value);
	}

	inline static int32_t get_offset_of__reshufflePenalty_33() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____reshufflePenalty_33)); }
	inline int32_t get__reshufflePenalty_33() const { return ____reshufflePenalty_33; }
	inline int32_t* get_address_of__reshufflePenalty_33() { return &____reshufflePenalty_33; }
	inline void set__reshufflePenalty_33(int32_t value)
	{
		____reshufflePenalty_33 = value;
	}

	inline static int32_t get_offset_of__lastReshuffleTime_34() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____lastReshuffleTime_34)); }
	inline float get__lastReshuffleTime_34() const { return ____lastReshuffleTime_34; }
	inline float* get_address_of__lastReshuffleTime_34() { return &____lastReshuffleTime_34; }
	inline void set__lastReshuffleTime_34(float value)
	{
		____lastReshuffleTime_34 = value;
	}

	inline static int32_t get_offset_of__pfData_35() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____pfData_35)); }
	inline PlayfieldData_t2127658700 * get__pfData_35() const { return ____pfData_35; }
	inline PlayfieldData_t2127658700 ** get_address_of__pfData_35() { return &____pfData_35; }
	inline void set__pfData_35(PlayfieldData_t2127658700 * value)
	{
		____pfData_35 = value;
		Il2CppCodeGenWriteBarrier(&____pfData_35, value);
	}

	inline static int32_t get_offset_of__reshuffleCoroutine_36() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____reshuffleCoroutine_36)); }
	inline Il2CppObject * get__reshuffleCoroutine_36() const { return ____reshuffleCoroutine_36; }
	inline Il2CppObject ** get_address_of__reshuffleCoroutine_36() { return &____reshuffleCoroutine_36; }
	inline void set__reshuffleCoroutine_36(Il2CppObject * value)
	{
		____reshuffleCoroutine_36 = value;
		Il2CppCodeGenWriteBarrier(&____reshuffleCoroutine_36, value);
	}

	inline static int32_t get_offset_of__animateDealTableau_37() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____animateDealTableau_37)); }
	inline Il2CppObject * get__animateDealTableau_37() const { return ____animateDealTableau_37; }
	inline Il2CppObject ** get_address_of__animateDealTableau_37() { return &____animateDealTableau_37; }
	inline void set__animateDealTableau_37(Il2CppObject * value)
	{
		____animateDealTableau_37 = value;
		Il2CppCodeGenWriteBarrier(&____animateDealTableau_37, value);
	}

	inline static int32_t get_offset_of__faceCardPool_65() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____faceCardPool_65)); }
	inline MonoBehaviourPool_t4145220098 * get__faceCardPool_65() const { return ____faceCardPool_65; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__faceCardPool_65() { return &____faceCardPool_65; }
	inline void set__faceCardPool_65(MonoBehaviourPool_t4145220098 * value)
	{
		____faceCardPool_65 = value;
		Il2CppCodeGenWriteBarrier(&____faceCardPool_65, value);
	}

	inline static int32_t get_offset_of__goldenCardPool_66() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____goldenCardPool_66)); }
	inline MonoBehaviourPool_t4145220098 * get__goldenCardPool_66() const { return ____goldenCardPool_66; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__goldenCardPool_66() { return &____goldenCardPool_66; }
	inline void set__goldenCardPool_66(MonoBehaviourPool_t4145220098 * value)
	{
		____goldenCardPool_66 = value;
		Il2CppCodeGenWriteBarrier(&____goldenCardPool_66, value);
	}

	inline static int32_t get_offset_of__oneShotWildCardPool_67() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____oneShotWildCardPool_67)); }
	inline MonoBehaviourPool_t4145220098 * get__oneShotWildCardPool_67() const { return ____oneShotWildCardPool_67; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__oneShotWildCardPool_67() { return &____oneShotWildCardPool_67; }
	inline void set__oneShotWildCardPool_67(MonoBehaviourPool_t4145220098 * value)
	{
		____oneShotWildCardPool_67 = value;
		Il2CppCodeGenWriteBarrier(&____oneShotWildCardPool_67, value);
	}

	inline static int32_t get_offset_of__blackTikiCardPool_68() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____blackTikiCardPool_68)); }
	inline MonoBehaviourPool_t4145220098 * get__blackTikiCardPool_68() const { return ____blackTikiCardPool_68; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__blackTikiCardPool_68() { return &____blackTikiCardPool_68; }
	inline void set__blackTikiCardPool_68(MonoBehaviourPool_t4145220098 * value)
	{
		____blackTikiCardPool_68 = value;
		Il2CppCodeGenWriteBarrier(&____blackTikiCardPool_68, value);
	}

	inline static int32_t get_offset_of__redTikiCardPool_69() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____redTikiCardPool_69)); }
	inline MonoBehaviourPool_t4145220098 * get__redTikiCardPool_69() const { return ____redTikiCardPool_69; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__redTikiCardPool_69() { return &____redTikiCardPool_69; }
	inline void set__redTikiCardPool_69(MonoBehaviourPool_t4145220098 * value)
	{
		____redTikiCardPool_69 = value;
		Il2CppCodeGenWriteBarrier(&____redTikiCardPool_69, value);
	}

	inline static int32_t get_offset_of__flowerTikiCardPool_70() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____flowerTikiCardPool_70)); }
	inline MonoBehaviourPool_t4145220098 * get__flowerTikiCardPool_70() const { return ____flowerTikiCardPool_70; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__flowerTikiCardPool_70() { return &____flowerTikiCardPool_70; }
	inline void set__flowerTikiCardPool_70(MonoBehaviourPool_t4145220098 * value)
	{
		____flowerTikiCardPool_70 = value;
		Il2CppCodeGenWriteBarrier(&____flowerTikiCardPool_70, value);
	}

	inline static int32_t get_offset_of__volcanoTikiCardPool_71() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____volcanoTikiCardPool_71)); }
	inline MonoBehaviourPool_t4145220098 * get__volcanoTikiCardPool_71() const { return ____volcanoTikiCardPool_71; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__volcanoTikiCardPool_71() { return &____volcanoTikiCardPool_71; }
	inline void set__volcanoTikiCardPool_71(MonoBehaviourPool_t4145220098 * value)
	{
		____volcanoTikiCardPool_71 = value;
		Il2CppCodeGenWriteBarrier(&____volcanoTikiCardPool_71, value);
	}

	inline static int32_t get_offset_of__sharkCardPool_72() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____sharkCardPool_72)); }
	inline MonoBehaviourPool_t4145220098 * get__sharkCardPool_72() const { return ____sharkCardPool_72; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__sharkCardPool_72() { return &____sharkCardPool_72; }
	inline void set__sharkCardPool_72(MonoBehaviourPool_t4145220098 * value)
	{
		____sharkCardPool_72 = value;
		Il2CppCodeGenWriteBarrier(&____sharkCardPool_72, value);
	}

	inline static int32_t get_offset_of__sharkBaitCardPool_73() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____sharkBaitCardPool_73)); }
	inline MonoBehaviourPool_t4145220098 * get__sharkBaitCardPool_73() const { return ____sharkBaitCardPool_73; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__sharkBaitCardPool_73() { return &____sharkBaitCardPool_73; }
	inline void set__sharkBaitCardPool_73(MonoBehaviourPool_t4145220098 * value)
	{
		____sharkBaitCardPool_73 = value;
		Il2CppCodeGenWriteBarrier(&____sharkBaitCardPool_73, value);
	}

	inline static int32_t get_offset_of__trapOverlayPool_74() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____trapOverlayPool_74)); }
	inline MonoBehaviourPool_t4145220098 * get__trapOverlayPool_74() const { return ____trapOverlayPool_74; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__trapOverlayPool_74() { return &____trapOverlayPool_74; }
	inline void set__trapOverlayPool_74(MonoBehaviourPool_t4145220098 * value)
	{
		____trapOverlayPool_74 = value;
		Il2CppCodeGenWriteBarrier(&____trapOverlayPool_74, value);
	}

	inline static int32_t get_offset_of__dynamiteOverlayPool_75() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____dynamiteOverlayPool_75)); }
	inline MonoBehaviourPool_t4145220098 * get__dynamiteOverlayPool_75() const { return ____dynamiteOverlayPool_75; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__dynamiteOverlayPool_75() { return &____dynamiteOverlayPool_75; }
	inline void set__dynamiteOverlayPool_75(MonoBehaviourPool_t4145220098 * value)
	{
		____dynamiteOverlayPool_75 = value;
		Il2CppCodeGenWriteBarrier(&____dynamiteOverlayPool_75, value);
	}

	inline static int32_t get_offset_of__tutorialSelectOverlayPool_76() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____tutorialSelectOverlayPool_76)); }
	inline MonoBehaviourPool_t4145220098 * get__tutorialSelectOverlayPool_76() const { return ____tutorialSelectOverlayPool_76; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__tutorialSelectOverlayPool_76() { return &____tutorialSelectOverlayPool_76; }
	inline void set__tutorialSelectOverlayPool_76(MonoBehaviourPool_t4145220098 * value)
	{
		____tutorialSelectOverlayPool_76 = value;
		Il2CppCodeGenWriteBarrier(&____tutorialSelectOverlayPool_76, value);
	}

	inline static int32_t get_offset_of__tutoriaDestinationOverlayPool_77() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____tutoriaDestinationOverlayPool_77)); }
	inline MonoBehaviourPool_t4145220098 * get__tutoriaDestinationOverlayPool_77() const { return ____tutoriaDestinationOverlayPool_77; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__tutoriaDestinationOverlayPool_77() { return &____tutoriaDestinationOverlayPool_77; }
	inline void set__tutoriaDestinationOverlayPool_77(MonoBehaviourPool_t4145220098 * value)
	{
		____tutoriaDestinationOverlayPool_77 = value;
		Il2CppCodeGenWriteBarrier(&____tutoriaDestinationOverlayPool_77, value);
	}

	inline static int32_t get_offset_of__deckData_78() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____deckData_78)); }
	inline DeckData_t2475950745 * get__deckData_78() const { return ____deckData_78; }
	inline DeckData_t2475950745 ** get_address_of__deckData_78() { return &____deckData_78; }
	inline void set__deckData_78(DeckData_t2475950745 * value)
	{
		____deckData_78 = value;
		Il2CppCodeGenWriteBarrier(&____deckData_78, value);
	}

	inline static int32_t get_offset_of__poolsInitilized_79() { return static_cast<int32_t>(offsetof(Board_t4208424732, ____poolsInitilized_79)); }
	inline bool get__poolsInitilized_79() const { return ____poolsInitilized_79; }
	inline bool* get_address_of__poolsInitilized_79() { return &____poolsInitilized_79; }
	inline void set__poolsInitilized_79(bool value)
	{
		____poolsInitilized_79 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
