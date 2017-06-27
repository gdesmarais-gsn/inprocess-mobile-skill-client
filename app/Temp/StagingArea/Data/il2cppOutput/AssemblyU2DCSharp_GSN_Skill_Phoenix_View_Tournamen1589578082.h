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
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// GSN.Skill.Phoenix.View.Pool.PooledGameObject
struct PooledGameObject_t3748385124;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// UnityEngine.UI.Button
struct Button_t2872111280;
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_t2371740582;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.LayoutElement
struct LayoutElement_t2808691390;
// GSN.Skill.Phoenix.View.GameResource
struct GameResource_t1931330162;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.PlayerStandingsTile>
struct List_1_t63416930;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// GSN.Skill.Phoenix.View.PlayerStandingsTile
struct PlayerStandingsTile_t694295798;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_PopupView1248909057.h"
#include "mscorlib_System_Decimal724701077.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_GetTournResult3917028247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.TournamentResultsPopupView
struct  TournamentResultsPopupView_t1589578082  : public PopupView_t1248909057
{
public:
	// UnityEngine.UI.ScrollRect GSN.Skill.Phoenix.View.TournamentResultsPopupView::_scrollRect
	ScrollRect_t1199013257 * ____scrollRect_23;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.TournamentResultsPopupView::_matchDetailsPanel
	GameObject_t1756533147 * ____matchDetailsPanel_24;
	// UnityEngine.Transform GSN.Skill.Phoenix.View.TournamentResultsPopupView::_standingsListParent
	Transform_t3275118058 * ____standingsListParent_25;
	// UnityEngine.Transform GSN.Skill.Phoenix.View.TournamentResultsPopupView::_tournamentFlavorAnchor
	Transform_t3275118058 * ____tournamentFlavorAnchor_26;
	// GSN.Skill.Phoenix.View.Pool.PooledGameObject GSN.Skill.Phoenix.View.TournamentResultsPopupView::_flavorIcon
	PooledGameObject_t3748385124 * ____flavorIcon_27;
	// UnityEngine.GameObject GSN.Skill.Phoenix.View.TournamentResultsPopupView::_toggleHiddenEntriesPanel
	GameObject_t1756533147 * ____toggleHiddenEntriesPanel_28;
	// UnityEngine.UI.Toggle GSN.Skill.Phoenix.View.TournamentResultsPopupView::_hiddenEntriesToggle
	Toggle_t3976754468 * ____hiddenEntriesToggle_29;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.TournamentResultsPopupView::_gameName
	TextMeshProUGUI_t934157183 * ____gameName_30;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.TournamentResultsPopupView::_numPlayers
	TextMeshProUGUI_t934157183 * ____numPlayers_31;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.TournamentResultsPopupView::_fee
	TextMeshProUGUI_t934157183 * ____fee_32;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.TournamentResultsPopupView::_startTime
	TextMeshProUGUI_t934157183 * ____startTime_33;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.TournamentResultsPopupView::_endTime
	TextMeshProUGUI_t934157183 * ____endTime_34;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.TournamentResultsPopupView::_tournamentID
	TextMeshProUGUI_t934157183 * ____tournamentID_35;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.TournamentResultsPopupView::_reEnterButton
	Button_t2872111280 * ____reEnterButton_36;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.TournamentResultsPopupView::_reEnterFee
	TextMeshProUGUI_t934157183 * ____reEnterFee_37;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.TournamentResultsPopupView::_playAgainButton
	Button_t2872111280 * ____playAgainButton_38;
	// TMPro.TextMeshProUGUI GSN.Skill.Phoenix.View.TournamentResultsPopupView::_playAgainFee
	TextMeshProUGUI_t934157183 * ____playAgainFee_39;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.TournamentResultsPopupView::_skipAnimationsButton
	Button_t2872111280 * ____skipAnimationsButton_40;
	// TMPro.TextMeshProUGUI[] GSN.Skill.Phoenix.View.TournamentResultsPopupView::_themedText
	TextMeshProUGUIU5BU5D_t2371740582* ____themedText_41;
	// UnityEngine.UI.Image GSN.Skill.Phoenix.View.TournamentResultsPopupView::_backgroundTint
	Image_t2042527209 * ____backgroundTint_42;
	// UnityEngine.UI.Image GSN.Skill.Phoenix.View.TournamentResultsPopupView::_matchDetailsTint
	Image_t2042527209 * ____matchDetailsTint_43;
	// UnityEngine.UI.LayoutElement GSN.Skill.Phoenix.View.TournamentResultsPopupView::_standingsLayout
	LayoutElement_t2808691390 * ____standingsLayout_44;
	// UnityEngine.UI.Button GSN.Skill.Phoenix.View.TournamentResultsPopupView::_closeButton
	Button_t2872111280 * ____closeButton_45;
	// GSN.Skill.Phoenix.View.GameResource GSN.Skill.Phoenix.View.TournamentResultsPopupView::_gameResource
	GameResource_t1931330162 * ____gameResource_46;
	// System.Int32 GSN.Skill.Phoenix.View.TournamentResultsPopupView::_tournID
	int32_t ____tournID_47;
	// System.Int32 GSN.Skill.Phoenix.View.TournamentResultsPopupView::_flavorID
	int32_t ____flavorID_48;
	// System.Int32 GSN.Skill.Phoenix.View.TournamentResultsPopupView::_flavorTypeID
	int32_t ____flavorTypeID_49;
	// System.Int32 GSN.Skill.Phoenix.View.TournamentResultsPopupView::_gameID
	int32_t ____gameID_50;
	// System.Decimal GSN.Skill.Phoenix.View.TournamentResultsPopupView::_feeAmount
	Decimal_t724701077  ____feeAmount_51;
	// System.Decimal GSN.Skill.Phoenix.View.TournamentResultsPopupView::_winItNowFeeAmount
	Decimal_t724701077  ____winItNowFeeAmount_52;
	// System.Decimal GSN.Skill.Phoenix.View.TournamentResultsPopupView::_purseAmount
	Decimal_t724701077  ____purseAmount_53;
	// System.Boolean GSN.Skill.Phoenix.View.TournamentResultsPopupView::_winItNowActive
	bool ____winItNowActive_54;
	// UnityEngine.Coroutine GSN.Skill.Phoenix.View.TournamentResultsPopupView::_animatedPlayerStandings
	Coroutine_t2299508840 * ____animatedPlayerStandings_55;
	// UnityEngine.Vector3 GSN.Skill.Phoenix.View.TournamentResultsPopupView::_scratchVector
	Vector3_t2243707580  ____scratchVector_56;
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.PlayerStandingsTile> GSN.Skill.Phoenix.View.TournamentResultsPopupView::_masterList
	List_1_t63416930 * ____masterList_57;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GSN.Skill.Phoenix.View.TournamentResultsPopupView::_waitingForPlayerList
	List_1_t1125654279 * ____waitingForPlayerList_58;
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.PlayerStandingsTile> GSN.Skill.Phoenix.View.TournamentResultsPopupView::_rankedPlayerStandings
	List_1_t63416930 * ____rankedPlayerStandings_59;
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.View.PlayerStandingsTile> GSN.Skill.Phoenix.View.TournamentResultsPopupView::_otherPlayerStandings
	List_1_t63416930 * ____otherPlayerStandings_60;
	// GSN.Skill.Phoenix.View.PlayerStandingsTile GSN.Skill.Phoenix.View.TournamentResultsPopupView::_highScoreTile
	PlayerStandingsTile_t694295798 * ____highScoreTile_61;
	// System.Int32 GSN.Skill.Phoenix.View.TournamentResultsPopupView::_playerHighScoreRank
	int32_t ____playerHighScoreRank_62;
	// GSN.Skill.Phoenix.GetTournResultsSuccessEvent/TournResultData GSN.Skill.Phoenix.View.TournamentResultsPopupView::_resultData
	TournResultData_t3917028247  ____resultData_63;

public:
	inline static int32_t get_offset_of__scrollRect_23() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____scrollRect_23)); }
	inline ScrollRect_t1199013257 * get__scrollRect_23() const { return ____scrollRect_23; }
	inline ScrollRect_t1199013257 ** get_address_of__scrollRect_23() { return &____scrollRect_23; }
	inline void set__scrollRect_23(ScrollRect_t1199013257 * value)
	{
		____scrollRect_23 = value;
		Il2CppCodeGenWriteBarrier(&____scrollRect_23, value);
	}

	inline static int32_t get_offset_of__matchDetailsPanel_24() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____matchDetailsPanel_24)); }
	inline GameObject_t1756533147 * get__matchDetailsPanel_24() const { return ____matchDetailsPanel_24; }
	inline GameObject_t1756533147 ** get_address_of__matchDetailsPanel_24() { return &____matchDetailsPanel_24; }
	inline void set__matchDetailsPanel_24(GameObject_t1756533147 * value)
	{
		____matchDetailsPanel_24 = value;
		Il2CppCodeGenWriteBarrier(&____matchDetailsPanel_24, value);
	}

	inline static int32_t get_offset_of__standingsListParent_25() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____standingsListParent_25)); }
	inline Transform_t3275118058 * get__standingsListParent_25() const { return ____standingsListParent_25; }
	inline Transform_t3275118058 ** get_address_of__standingsListParent_25() { return &____standingsListParent_25; }
	inline void set__standingsListParent_25(Transform_t3275118058 * value)
	{
		____standingsListParent_25 = value;
		Il2CppCodeGenWriteBarrier(&____standingsListParent_25, value);
	}

	inline static int32_t get_offset_of__tournamentFlavorAnchor_26() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____tournamentFlavorAnchor_26)); }
	inline Transform_t3275118058 * get__tournamentFlavorAnchor_26() const { return ____tournamentFlavorAnchor_26; }
	inline Transform_t3275118058 ** get_address_of__tournamentFlavorAnchor_26() { return &____tournamentFlavorAnchor_26; }
	inline void set__tournamentFlavorAnchor_26(Transform_t3275118058 * value)
	{
		____tournamentFlavorAnchor_26 = value;
		Il2CppCodeGenWriteBarrier(&____tournamentFlavorAnchor_26, value);
	}

	inline static int32_t get_offset_of__flavorIcon_27() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____flavorIcon_27)); }
	inline PooledGameObject_t3748385124 * get__flavorIcon_27() const { return ____flavorIcon_27; }
	inline PooledGameObject_t3748385124 ** get_address_of__flavorIcon_27() { return &____flavorIcon_27; }
	inline void set__flavorIcon_27(PooledGameObject_t3748385124 * value)
	{
		____flavorIcon_27 = value;
		Il2CppCodeGenWriteBarrier(&____flavorIcon_27, value);
	}

	inline static int32_t get_offset_of__toggleHiddenEntriesPanel_28() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____toggleHiddenEntriesPanel_28)); }
	inline GameObject_t1756533147 * get__toggleHiddenEntriesPanel_28() const { return ____toggleHiddenEntriesPanel_28; }
	inline GameObject_t1756533147 ** get_address_of__toggleHiddenEntriesPanel_28() { return &____toggleHiddenEntriesPanel_28; }
	inline void set__toggleHiddenEntriesPanel_28(GameObject_t1756533147 * value)
	{
		____toggleHiddenEntriesPanel_28 = value;
		Il2CppCodeGenWriteBarrier(&____toggleHiddenEntriesPanel_28, value);
	}

	inline static int32_t get_offset_of__hiddenEntriesToggle_29() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____hiddenEntriesToggle_29)); }
	inline Toggle_t3976754468 * get__hiddenEntriesToggle_29() const { return ____hiddenEntriesToggle_29; }
	inline Toggle_t3976754468 ** get_address_of__hiddenEntriesToggle_29() { return &____hiddenEntriesToggle_29; }
	inline void set__hiddenEntriesToggle_29(Toggle_t3976754468 * value)
	{
		____hiddenEntriesToggle_29 = value;
		Il2CppCodeGenWriteBarrier(&____hiddenEntriesToggle_29, value);
	}

	inline static int32_t get_offset_of__gameName_30() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____gameName_30)); }
	inline TextMeshProUGUI_t934157183 * get__gameName_30() const { return ____gameName_30; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__gameName_30() { return &____gameName_30; }
	inline void set__gameName_30(TextMeshProUGUI_t934157183 * value)
	{
		____gameName_30 = value;
		Il2CppCodeGenWriteBarrier(&____gameName_30, value);
	}

	inline static int32_t get_offset_of__numPlayers_31() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____numPlayers_31)); }
	inline TextMeshProUGUI_t934157183 * get__numPlayers_31() const { return ____numPlayers_31; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__numPlayers_31() { return &____numPlayers_31; }
	inline void set__numPlayers_31(TextMeshProUGUI_t934157183 * value)
	{
		____numPlayers_31 = value;
		Il2CppCodeGenWriteBarrier(&____numPlayers_31, value);
	}

	inline static int32_t get_offset_of__fee_32() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____fee_32)); }
	inline TextMeshProUGUI_t934157183 * get__fee_32() const { return ____fee_32; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__fee_32() { return &____fee_32; }
	inline void set__fee_32(TextMeshProUGUI_t934157183 * value)
	{
		____fee_32 = value;
		Il2CppCodeGenWriteBarrier(&____fee_32, value);
	}

	inline static int32_t get_offset_of__startTime_33() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____startTime_33)); }
	inline TextMeshProUGUI_t934157183 * get__startTime_33() const { return ____startTime_33; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__startTime_33() { return &____startTime_33; }
	inline void set__startTime_33(TextMeshProUGUI_t934157183 * value)
	{
		____startTime_33 = value;
		Il2CppCodeGenWriteBarrier(&____startTime_33, value);
	}

	inline static int32_t get_offset_of__endTime_34() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____endTime_34)); }
	inline TextMeshProUGUI_t934157183 * get__endTime_34() const { return ____endTime_34; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__endTime_34() { return &____endTime_34; }
	inline void set__endTime_34(TextMeshProUGUI_t934157183 * value)
	{
		____endTime_34 = value;
		Il2CppCodeGenWriteBarrier(&____endTime_34, value);
	}

	inline static int32_t get_offset_of__tournamentID_35() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____tournamentID_35)); }
	inline TextMeshProUGUI_t934157183 * get__tournamentID_35() const { return ____tournamentID_35; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__tournamentID_35() { return &____tournamentID_35; }
	inline void set__tournamentID_35(TextMeshProUGUI_t934157183 * value)
	{
		____tournamentID_35 = value;
		Il2CppCodeGenWriteBarrier(&____tournamentID_35, value);
	}

	inline static int32_t get_offset_of__reEnterButton_36() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____reEnterButton_36)); }
	inline Button_t2872111280 * get__reEnterButton_36() const { return ____reEnterButton_36; }
	inline Button_t2872111280 ** get_address_of__reEnterButton_36() { return &____reEnterButton_36; }
	inline void set__reEnterButton_36(Button_t2872111280 * value)
	{
		____reEnterButton_36 = value;
		Il2CppCodeGenWriteBarrier(&____reEnterButton_36, value);
	}

	inline static int32_t get_offset_of__reEnterFee_37() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____reEnterFee_37)); }
	inline TextMeshProUGUI_t934157183 * get__reEnterFee_37() const { return ____reEnterFee_37; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__reEnterFee_37() { return &____reEnterFee_37; }
	inline void set__reEnterFee_37(TextMeshProUGUI_t934157183 * value)
	{
		____reEnterFee_37 = value;
		Il2CppCodeGenWriteBarrier(&____reEnterFee_37, value);
	}

	inline static int32_t get_offset_of__playAgainButton_38() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____playAgainButton_38)); }
	inline Button_t2872111280 * get__playAgainButton_38() const { return ____playAgainButton_38; }
	inline Button_t2872111280 ** get_address_of__playAgainButton_38() { return &____playAgainButton_38; }
	inline void set__playAgainButton_38(Button_t2872111280 * value)
	{
		____playAgainButton_38 = value;
		Il2CppCodeGenWriteBarrier(&____playAgainButton_38, value);
	}

	inline static int32_t get_offset_of__playAgainFee_39() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____playAgainFee_39)); }
	inline TextMeshProUGUI_t934157183 * get__playAgainFee_39() const { return ____playAgainFee_39; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__playAgainFee_39() { return &____playAgainFee_39; }
	inline void set__playAgainFee_39(TextMeshProUGUI_t934157183 * value)
	{
		____playAgainFee_39 = value;
		Il2CppCodeGenWriteBarrier(&____playAgainFee_39, value);
	}

	inline static int32_t get_offset_of__skipAnimationsButton_40() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____skipAnimationsButton_40)); }
	inline Button_t2872111280 * get__skipAnimationsButton_40() const { return ____skipAnimationsButton_40; }
	inline Button_t2872111280 ** get_address_of__skipAnimationsButton_40() { return &____skipAnimationsButton_40; }
	inline void set__skipAnimationsButton_40(Button_t2872111280 * value)
	{
		____skipAnimationsButton_40 = value;
		Il2CppCodeGenWriteBarrier(&____skipAnimationsButton_40, value);
	}

	inline static int32_t get_offset_of__themedText_41() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____themedText_41)); }
	inline TextMeshProUGUIU5BU5D_t2371740582* get__themedText_41() const { return ____themedText_41; }
	inline TextMeshProUGUIU5BU5D_t2371740582** get_address_of__themedText_41() { return &____themedText_41; }
	inline void set__themedText_41(TextMeshProUGUIU5BU5D_t2371740582* value)
	{
		____themedText_41 = value;
		Il2CppCodeGenWriteBarrier(&____themedText_41, value);
	}

	inline static int32_t get_offset_of__backgroundTint_42() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____backgroundTint_42)); }
	inline Image_t2042527209 * get__backgroundTint_42() const { return ____backgroundTint_42; }
	inline Image_t2042527209 ** get_address_of__backgroundTint_42() { return &____backgroundTint_42; }
	inline void set__backgroundTint_42(Image_t2042527209 * value)
	{
		____backgroundTint_42 = value;
		Il2CppCodeGenWriteBarrier(&____backgroundTint_42, value);
	}

	inline static int32_t get_offset_of__matchDetailsTint_43() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____matchDetailsTint_43)); }
	inline Image_t2042527209 * get__matchDetailsTint_43() const { return ____matchDetailsTint_43; }
	inline Image_t2042527209 ** get_address_of__matchDetailsTint_43() { return &____matchDetailsTint_43; }
	inline void set__matchDetailsTint_43(Image_t2042527209 * value)
	{
		____matchDetailsTint_43 = value;
		Il2CppCodeGenWriteBarrier(&____matchDetailsTint_43, value);
	}

	inline static int32_t get_offset_of__standingsLayout_44() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____standingsLayout_44)); }
	inline LayoutElement_t2808691390 * get__standingsLayout_44() const { return ____standingsLayout_44; }
	inline LayoutElement_t2808691390 ** get_address_of__standingsLayout_44() { return &____standingsLayout_44; }
	inline void set__standingsLayout_44(LayoutElement_t2808691390 * value)
	{
		____standingsLayout_44 = value;
		Il2CppCodeGenWriteBarrier(&____standingsLayout_44, value);
	}

	inline static int32_t get_offset_of__closeButton_45() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____closeButton_45)); }
	inline Button_t2872111280 * get__closeButton_45() const { return ____closeButton_45; }
	inline Button_t2872111280 ** get_address_of__closeButton_45() { return &____closeButton_45; }
	inline void set__closeButton_45(Button_t2872111280 * value)
	{
		____closeButton_45 = value;
		Il2CppCodeGenWriteBarrier(&____closeButton_45, value);
	}

	inline static int32_t get_offset_of__gameResource_46() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____gameResource_46)); }
	inline GameResource_t1931330162 * get__gameResource_46() const { return ____gameResource_46; }
	inline GameResource_t1931330162 ** get_address_of__gameResource_46() { return &____gameResource_46; }
	inline void set__gameResource_46(GameResource_t1931330162 * value)
	{
		____gameResource_46 = value;
		Il2CppCodeGenWriteBarrier(&____gameResource_46, value);
	}

	inline static int32_t get_offset_of__tournID_47() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____tournID_47)); }
	inline int32_t get__tournID_47() const { return ____tournID_47; }
	inline int32_t* get_address_of__tournID_47() { return &____tournID_47; }
	inline void set__tournID_47(int32_t value)
	{
		____tournID_47 = value;
	}

	inline static int32_t get_offset_of__flavorID_48() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____flavorID_48)); }
	inline int32_t get__flavorID_48() const { return ____flavorID_48; }
	inline int32_t* get_address_of__flavorID_48() { return &____flavorID_48; }
	inline void set__flavorID_48(int32_t value)
	{
		____flavorID_48 = value;
	}

	inline static int32_t get_offset_of__flavorTypeID_49() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____flavorTypeID_49)); }
	inline int32_t get__flavorTypeID_49() const { return ____flavorTypeID_49; }
	inline int32_t* get_address_of__flavorTypeID_49() { return &____flavorTypeID_49; }
	inline void set__flavorTypeID_49(int32_t value)
	{
		____flavorTypeID_49 = value;
	}

	inline static int32_t get_offset_of__gameID_50() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____gameID_50)); }
	inline int32_t get__gameID_50() const { return ____gameID_50; }
	inline int32_t* get_address_of__gameID_50() { return &____gameID_50; }
	inline void set__gameID_50(int32_t value)
	{
		____gameID_50 = value;
	}

	inline static int32_t get_offset_of__feeAmount_51() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____feeAmount_51)); }
	inline Decimal_t724701077  get__feeAmount_51() const { return ____feeAmount_51; }
	inline Decimal_t724701077 * get_address_of__feeAmount_51() { return &____feeAmount_51; }
	inline void set__feeAmount_51(Decimal_t724701077  value)
	{
		____feeAmount_51 = value;
	}

	inline static int32_t get_offset_of__winItNowFeeAmount_52() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____winItNowFeeAmount_52)); }
	inline Decimal_t724701077  get__winItNowFeeAmount_52() const { return ____winItNowFeeAmount_52; }
	inline Decimal_t724701077 * get_address_of__winItNowFeeAmount_52() { return &____winItNowFeeAmount_52; }
	inline void set__winItNowFeeAmount_52(Decimal_t724701077  value)
	{
		____winItNowFeeAmount_52 = value;
	}

	inline static int32_t get_offset_of__purseAmount_53() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____purseAmount_53)); }
	inline Decimal_t724701077  get__purseAmount_53() const { return ____purseAmount_53; }
	inline Decimal_t724701077 * get_address_of__purseAmount_53() { return &____purseAmount_53; }
	inline void set__purseAmount_53(Decimal_t724701077  value)
	{
		____purseAmount_53 = value;
	}

	inline static int32_t get_offset_of__winItNowActive_54() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____winItNowActive_54)); }
	inline bool get__winItNowActive_54() const { return ____winItNowActive_54; }
	inline bool* get_address_of__winItNowActive_54() { return &____winItNowActive_54; }
	inline void set__winItNowActive_54(bool value)
	{
		____winItNowActive_54 = value;
	}

	inline static int32_t get_offset_of__animatedPlayerStandings_55() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____animatedPlayerStandings_55)); }
	inline Coroutine_t2299508840 * get__animatedPlayerStandings_55() const { return ____animatedPlayerStandings_55; }
	inline Coroutine_t2299508840 ** get_address_of__animatedPlayerStandings_55() { return &____animatedPlayerStandings_55; }
	inline void set__animatedPlayerStandings_55(Coroutine_t2299508840 * value)
	{
		____animatedPlayerStandings_55 = value;
		Il2CppCodeGenWriteBarrier(&____animatedPlayerStandings_55, value);
	}

	inline static int32_t get_offset_of__scratchVector_56() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____scratchVector_56)); }
	inline Vector3_t2243707580  get__scratchVector_56() const { return ____scratchVector_56; }
	inline Vector3_t2243707580 * get_address_of__scratchVector_56() { return &____scratchVector_56; }
	inline void set__scratchVector_56(Vector3_t2243707580  value)
	{
		____scratchVector_56 = value;
	}

	inline static int32_t get_offset_of__masterList_57() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____masterList_57)); }
	inline List_1_t63416930 * get__masterList_57() const { return ____masterList_57; }
	inline List_1_t63416930 ** get_address_of__masterList_57() { return &____masterList_57; }
	inline void set__masterList_57(List_1_t63416930 * value)
	{
		____masterList_57 = value;
		Il2CppCodeGenWriteBarrier(&____masterList_57, value);
	}

	inline static int32_t get_offset_of__waitingForPlayerList_58() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____waitingForPlayerList_58)); }
	inline List_1_t1125654279 * get__waitingForPlayerList_58() const { return ____waitingForPlayerList_58; }
	inline List_1_t1125654279 ** get_address_of__waitingForPlayerList_58() { return &____waitingForPlayerList_58; }
	inline void set__waitingForPlayerList_58(List_1_t1125654279 * value)
	{
		____waitingForPlayerList_58 = value;
		Il2CppCodeGenWriteBarrier(&____waitingForPlayerList_58, value);
	}

	inline static int32_t get_offset_of__rankedPlayerStandings_59() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____rankedPlayerStandings_59)); }
	inline List_1_t63416930 * get__rankedPlayerStandings_59() const { return ____rankedPlayerStandings_59; }
	inline List_1_t63416930 ** get_address_of__rankedPlayerStandings_59() { return &____rankedPlayerStandings_59; }
	inline void set__rankedPlayerStandings_59(List_1_t63416930 * value)
	{
		____rankedPlayerStandings_59 = value;
		Il2CppCodeGenWriteBarrier(&____rankedPlayerStandings_59, value);
	}

	inline static int32_t get_offset_of__otherPlayerStandings_60() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____otherPlayerStandings_60)); }
	inline List_1_t63416930 * get__otherPlayerStandings_60() const { return ____otherPlayerStandings_60; }
	inline List_1_t63416930 ** get_address_of__otherPlayerStandings_60() { return &____otherPlayerStandings_60; }
	inline void set__otherPlayerStandings_60(List_1_t63416930 * value)
	{
		____otherPlayerStandings_60 = value;
		Il2CppCodeGenWriteBarrier(&____otherPlayerStandings_60, value);
	}

	inline static int32_t get_offset_of__highScoreTile_61() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____highScoreTile_61)); }
	inline PlayerStandingsTile_t694295798 * get__highScoreTile_61() const { return ____highScoreTile_61; }
	inline PlayerStandingsTile_t694295798 ** get_address_of__highScoreTile_61() { return &____highScoreTile_61; }
	inline void set__highScoreTile_61(PlayerStandingsTile_t694295798 * value)
	{
		____highScoreTile_61 = value;
		Il2CppCodeGenWriteBarrier(&____highScoreTile_61, value);
	}

	inline static int32_t get_offset_of__playerHighScoreRank_62() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____playerHighScoreRank_62)); }
	inline int32_t get__playerHighScoreRank_62() const { return ____playerHighScoreRank_62; }
	inline int32_t* get_address_of__playerHighScoreRank_62() { return &____playerHighScoreRank_62; }
	inline void set__playerHighScoreRank_62(int32_t value)
	{
		____playerHighScoreRank_62 = value;
	}

	inline static int32_t get_offset_of__resultData_63() { return static_cast<int32_t>(offsetof(TournamentResultsPopupView_t1589578082, ____resultData_63)); }
	inline TournResultData_t3917028247  get__resultData_63() const { return ____resultData_63; }
	inline TournResultData_t3917028247 * get_address_of__resultData_63() { return &____resultData_63; }
	inline void set__resultData_63(TournResultData_t3917028247  value)
	{
		____resultData_63 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
