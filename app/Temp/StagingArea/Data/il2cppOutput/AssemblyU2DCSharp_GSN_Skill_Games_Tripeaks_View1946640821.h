#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.Game.GameBase
struct GameBase_t3011854951;
// GSN.Skill.Games.Tripeaks.PlayfieldDataDB
struct PlayfieldDataDB_t137008370;
// GSN.Skill.Games.Tripeaks.UIStartScreen
struct UIStartScreen_t2387721474;
// GSN.Skill.Games.Tripeaks.UIHud
struct UIHud_t3729045721;
// GSN.Skill.Games.Tripeaks.UIResults
struct UIResults_t3853378288;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Canvas
struct Canvas_t209405766;
// GSN.Skill.Games.Tripeaks.Board
struct Board_t4208424732;
// UnityEngine.Animator
struct Animator_t69676727;
// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.TriPeaksAudio>
struct List_1_t891620853;
// System.Collections.Generic.List`1<CutScene>
struct List_1_t613093252;
// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.Tutorial>
struct List_1_t3200099458;
// System.String
struct String_t;
// GSN.Skill.Games.Common.Client.MonoBehaviourPool
struct MonoBehaviourPool_t4145220098;
// GSN.Skill.Games.Tripeaks.Tutorial
struct Tutorial_t3830978326;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Ga3608972958.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.View
struct  View_t1946640821  : public ViewBase_t3608972958
{
public:
	// GSN.Skill.Games.Common.Client.Game.GameBase GSN.Skill.Games.Tripeaks.View::game
	GameBase_t3011854951 * ___game_12;
	// GSN.Skill.Games.Tripeaks.PlayfieldDataDB GSN.Skill.Games.Tripeaks.View::_playfieldDB
	PlayfieldDataDB_t137008370 * ____playfieldDB_13;
	// GSN.Skill.Games.Tripeaks.UIStartScreen GSN.Skill.Games.Tripeaks.View::_startScreen
	UIStartScreen_t2387721474 * ____startScreen_14;
	// GSN.Skill.Games.Tripeaks.UIHud GSN.Skill.Games.Tripeaks.View::_hud
	UIHud_t3729045721 * ____hud_15;
	// GSN.Skill.Games.Tripeaks.UIResults GSN.Skill.Games.Tripeaks.View::_results
	UIResults_t3853378288 * ____results_16;
	// UnityEngine.Camera GSN.Skill.Games.Tripeaks.View::mainCamera
	Camera_t189460977 * ___mainCamera_17;
	// UnityEngine.Camera GSN.Skill.Games.Tripeaks.View::uiCamera
	Camera_t189460977 * ___uiCamera_18;
	// UnityEngine.Canvas GSN.Skill.Games.Tripeaks.View::canvas
	Canvas_t209405766 * ___canvas_19;
	// GSN.Skill.Games.Tripeaks.Board GSN.Skill.Games.Tripeaks.View::_board
	Board_t4208424732 * ____board_20;
	// UnityEngine.Animator GSN.Skill.Games.Tripeaks.View::_backgroundCameraAnimator
	Animator_t69676727 * ____backgroundCameraAnimator_21;
	// System.Int32 GSN.Skill.Games.Tripeaks.View::_playfieldID
	int32_t ____playfieldID_22;
	// System.Boolean GSN.Skill.Games.Tripeaks.View::_holdEnabled
	bool ____holdEnabled_23;
	// System.Boolean GSN.Skill.Games.Tripeaks.View::_reshuffleEnabled
	bool ____reshuffleEnabled_24;
	// System.Boolean GSN.Skill.Games.Tripeaks.View::_oneShotWildEnabled
	bool ____oneShotWildEnabled_25;
	// System.Int32 GSN.Skill.Games.Tripeaks.View::backgroundDifficultyIndex
	int32_t ___backgroundDifficultyIndex_26;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.TriPeaksAudio> GSN.Skill.Games.Tripeaks.View::gameMusicList
	List_1_t891620853 * ___gameMusicList_27;
	// System.Collections.Generic.List`1<CutScene> GSN.Skill.Games.Tripeaks.View::cutScenes
	List_1_t613093252 * ___cutScenes_28;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.Tutorial> GSN.Skill.Games.Tripeaks.View::tutorials
	List_1_t3200099458 * ___tutorials_29;
	// System.Int32 GSN.Skill.Games.Tripeaks.View::_currentTime
	int32_t ____currentTime_30;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.View::_scoreFloatPool
	MonoBehaviourPool_t4145220098 * ____scoreFloatPool_38;
	// GSN.Skill.Games.Common.Client.MonoBehaviourPool GSN.Skill.Games.Tripeaks.View::_scoreFireFXPool
	MonoBehaviourPool_t4145220098 * ____scoreFireFXPool_39;
	// System.Boolean GSN.Skill.Games.Tripeaks.View::_poolsInitilized
	bool ____poolsInitilized_40;
	// System.Boolean GSN.Skill.Games.Tripeaks.View::_inTutorial
	bool ____inTutorial_41;
	// System.Boolean GSN.Skill.Games.Tripeaks.View::_reshuffleCompleteTutorialTriggered
	bool ____reshuffleCompleteTutorialTriggered_42;
	// GSN.Skill.Games.Tripeaks.Tutorial GSN.Skill.Games.Tripeaks.View::_currentTutorial
	Tutorial_t3830978326 * ____currentTutorial_43;
	// System.Collections.IEnumerator GSN.Skill.Games.Tripeaks.View::_coTutorialTimer
	Il2CppObject * ____coTutorialTimer_44;

public:
	inline static int32_t get_offset_of_game_12() { return static_cast<int32_t>(offsetof(View_t1946640821, ___game_12)); }
	inline GameBase_t3011854951 * get_game_12() const { return ___game_12; }
	inline GameBase_t3011854951 ** get_address_of_game_12() { return &___game_12; }
	inline void set_game_12(GameBase_t3011854951 * value)
	{
		___game_12 = value;
		Il2CppCodeGenWriteBarrier(&___game_12, value);
	}

	inline static int32_t get_offset_of__playfieldDB_13() { return static_cast<int32_t>(offsetof(View_t1946640821, ____playfieldDB_13)); }
	inline PlayfieldDataDB_t137008370 * get__playfieldDB_13() const { return ____playfieldDB_13; }
	inline PlayfieldDataDB_t137008370 ** get_address_of__playfieldDB_13() { return &____playfieldDB_13; }
	inline void set__playfieldDB_13(PlayfieldDataDB_t137008370 * value)
	{
		____playfieldDB_13 = value;
		Il2CppCodeGenWriteBarrier(&____playfieldDB_13, value);
	}

	inline static int32_t get_offset_of__startScreen_14() { return static_cast<int32_t>(offsetof(View_t1946640821, ____startScreen_14)); }
	inline UIStartScreen_t2387721474 * get__startScreen_14() const { return ____startScreen_14; }
	inline UIStartScreen_t2387721474 ** get_address_of__startScreen_14() { return &____startScreen_14; }
	inline void set__startScreen_14(UIStartScreen_t2387721474 * value)
	{
		____startScreen_14 = value;
		Il2CppCodeGenWriteBarrier(&____startScreen_14, value);
	}

	inline static int32_t get_offset_of__hud_15() { return static_cast<int32_t>(offsetof(View_t1946640821, ____hud_15)); }
	inline UIHud_t3729045721 * get__hud_15() const { return ____hud_15; }
	inline UIHud_t3729045721 ** get_address_of__hud_15() { return &____hud_15; }
	inline void set__hud_15(UIHud_t3729045721 * value)
	{
		____hud_15 = value;
		Il2CppCodeGenWriteBarrier(&____hud_15, value);
	}

	inline static int32_t get_offset_of__results_16() { return static_cast<int32_t>(offsetof(View_t1946640821, ____results_16)); }
	inline UIResults_t3853378288 * get__results_16() const { return ____results_16; }
	inline UIResults_t3853378288 ** get_address_of__results_16() { return &____results_16; }
	inline void set__results_16(UIResults_t3853378288 * value)
	{
		____results_16 = value;
		Il2CppCodeGenWriteBarrier(&____results_16, value);
	}

	inline static int32_t get_offset_of_mainCamera_17() { return static_cast<int32_t>(offsetof(View_t1946640821, ___mainCamera_17)); }
	inline Camera_t189460977 * get_mainCamera_17() const { return ___mainCamera_17; }
	inline Camera_t189460977 ** get_address_of_mainCamera_17() { return &___mainCamera_17; }
	inline void set_mainCamera_17(Camera_t189460977 * value)
	{
		___mainCamera_17 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_17, value);
	}

	inline static int32_t get_offset_of_uiCamera_18() { return static_cast<int32_t>(offsetof(View_t1946640821, ___uiCamera_18)); }
	inline Camera_t189460977 * get_uiCamera_18() const { return ___uiCamera_18; }
	inline Camera_t189460977 ** get_address_of_uiCamera_18() { return &___uiCamera_18; }
	inline void set_uiCamera_18(Camera_t189460977 * value)
	{
		___uiCamera_18 = value;
		Il2CppCodeGenWriteBarrier(&___uiCamera_18, value);
	}

	inline static int32_t get_offset_of_canvas_19() { return static_cast<int32_t>(offsetof(View_t1946640821, ___canvas_19)); }
	inline Canvas_t209405766 * get_canvas_19() const { return ___canvas_19; }
	inline Canvas_t209405766 ** get_address_of_canvas_19() { return &___canvas_19; }
	inline void set_canvas_19(Canvas_t209405766 * value)
	{
		___canvas_19 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_19, value);
	}

	inline static int32_t get_offset_of__board_20() { return static_cast<int32_t>(offsetof(View_t1946640821, ____board_20)); }
	inline Board_t4208424732 * get__board_20() const { return ____board_20; }
	inline Board_t4208424732 ** get_address_of__board_20() { return &____board_20; }
	inline void set__board_20(Board_t4208424732 * value)
	{
		____board_20 = value;
		Il2CppCodeGenWriteBarrier(&____board_20, value);
	}

	inline static int32_t get_offset_of__backgroundCameraAnimator_21() { return static_cast<int32_t>(offsetof(View_t1946640821, ____backgroundCameraAnimator_21)); }
	inline Animator_t69676727 * get__backgroundCameraAnimator_21() const { return ____backgroundCameraAnimator_21; }
	inline Animator_t69676727 ** get_address_of__backgroundCameraAnimator_21() { return &____backgroundCameraAnimator_21; }
	inline void set__backgroundCameraAnimator_21(Animator_t69676727 * value)
	{
		____backgroundCameraAnimator_21 = value;
		Il2CppCodeGenWriteBarrier(&____backgroundCameraAnimator_21, value);
	}

	inline static int32_t get_offset_of__playfieldID_22() { return static_cast<int32_t>(offsetof(View_t1946640821, ____playfieldID_22)); }
	inline int32_t get__playfieldID_22() const { return ____playfieldID_22; }
	inline int32_t* get_address_of__playfieldID_22() { return &____playfieldID_22; }
	inline void set__playfieldID_22(int32_t value)
	{
		____playfieldID_22 = value;
	}

	inline static int32_t get_offset_of__holdEnabled_23() { return static_cast<int32_t>(offsetof(View_t1946640821, ____holdEnabled_23)); }
	inline bool get__holdEnabled_23() const { return ____holdEnabled_23; }
	inline bool* get_address_of__holdEnabled_23() { return &____holdEnabled_23; }
	inline void set__holdEnabled_23(bool value)
	{
		____holdEnabled_23 = value;
	}

	inline static int32_t get_offset_of__reshuffleEnabled_24() { return static_cast<int32_t>(offsetof(View_t1946640821, ____reshuffleEnabled_24)); }
	inline bool get__reshuffleEnabled_24() const { return ____reshuffleEnabled_24; }
	inline bool* get_address_of__reshuffleEnabled_24() { return &____reshuffleEnabled_24; }
	inline void set__reshuffleEnabled_24(bool value)
	{
		____reshuffleEnabled_24 = value;
	}

	inline static int32_t get_offset_of__oneShotWildEnabled_25() { return static_cast<int32_t>(offsetof(View_t1946640821, ____oneShotWildEnabled_25)); }
	inline bool get__oneShotWildEnabled_25() const { return ____oneShotWildEnabled_25; }
	inline bool* get_address_of__oneShotWildEnabled_25() { return &____oneShotWildEnabled_25; }
	inline void set__oneShotWildEnabled_25(bool value)
	{
		____oneShotWildEnabled_25 = value;
	}

	inline static int32_t get_offset_of_backgroundDifficultyIndex_26() { return static_cast<int32_t>(offsetof(View_t1946640821, ___backgroundDifficultyIndex_26)); }
	inline int32_t get_backgroundDifficultyIndex_26() const { return ___backgroundDifficultyIndex_26; }
	inline int32_t* get_address_of_backgroundDifficultyIndex_26() { return &___backgroundDifficultyIndex_26; }
	inline void set_backgroundDifficultyIndex_26(int32_t value)
	{
		___backgroundDifficultyIndex_26 = value;
	}

	inline static int32_t get_offset_of_gameMusicList_27() { return static_cast<int32_t>(offsetof(View_t1946640821, ___gameMusicList_27)); }
	inline List_1_t891620853 * get_gameMusicList_27() const { return ___gameMusicList_27; }
	inline List_1_t891620853 ** get_address_of_gameMusicList_27() { return &___gameMusicList_27; }
	inline void set_gameMusicList_27(List_1_t891620853 * value)
	{
		___gameMusicList_27 = value;
		Il2CppCodeGenWriteBarrier(&___gameMusicList_27, value);
	}

	inline static int32_t get_offset_of_cutScenes_28() { return static_cast<int32_t>(offsetof(View_t1946640821, ___cutScenes_28)); }
	inline List_1_t613093252 * get_cutScenes_28() const { return ___cutScenes_28; }
	inline List_1_t613093252 ** get_address_of_cutScenes_28() { return &___cutScenes_28; }
	inline void set_cutScenes_28(List_1_t613093252 * value)
	{
		___cutScenes_28 = value;
		Il2CppCodeGenWriteBarrier(&___cutScenes_28, value);
	}

	inline static int32_t get_offset_of_tutorials_29() { return static_cast<int32_t>(offsetof(View_t1946640821, ___tutorials_29)); }
	inline List_1_t3200099458 * get_tutorials_29() const { return ___tutorials_29; }
	inline List_1_t3200099458 ** get_address_of_tutorials_29() { return &___tutorials_29; }
	inline void set_tutorials_29(List_1_t3200099458 * value)
	{
		___tutorials_29 = value;
		Il2CppCodeGenWriteBarrier(&___tutorials_29, value);
	}

	inline static int32_t get_offset_of__currentTime_30() { return static_cast<int32_t>(offsetof(View_t1946640821, ____currentTime_30)); }
	inline int32_t get__currentTime_30() const { return ____currentTime_30; }
	inline int32_t* get_address_of__currentTime_30() { return &____currentTime_30; }
	inline void set__currentTime_30(int32_t value)
	{
		____currentTime_30 = value;
	}

	inline static int32_t get_offset_of__scoreFloatPool_38() { return static_cast<int32_t>(offsetof(View_t1946640821, ____scoreFloatPool_38)); }
	inline MonoBehaviourPool_t4145220098 * get__scoreFloatPool_38() const { return ____scoreFloatPool_38; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__scoreFloatPool_38() { return &____scoreFloatPool_38; }
	inline void set__scoreFloatPool_38(MonoBehaviourPool_t4145220098 * value)
	{
		____scoreFloatPool_38 = value;
		Il2CppCodeGenWriteBarrier(&____scoreFloatPool_38, value);
	}

	inline static int32_t get_offset_of__scoreFireFXPool_39() { return static_cast<int32_t>(offsetof(View_t1946640821, ____scoreFireFXPool_39)); }
	inline MonoBehaviourPool_t4145220098 * get__scoreFireFXPool_39() const { return ____scoreFireFXPool_39; }
	inline MonoBehaviourPool_t4145220098 ** get_address_of__scoreFireFXPool_39() { return &____scoreFireFXPool_39; }
	inline void set__scoreFireFXPool_39(MonoBehaviourPool_t4145220098 * value)
	{
		____scoreFireFXPool_39 = value;
		Il2CppCodeGenWriteBarrier(&____scoreFireFXPool_39, value);
	}

	inline static int32_t get_offset_of__poolsInitilized_40() { return static_cast<int32_t>(offsetof(View_t1946640821, ____poolsInitilized_40)); }
	inline bool get__poolsInitilized_40() const { return ____poolsInitilized_40; }
	inline bool* get_address_of__poolsInitilized_40() { return &____poolsInitilized_40; }
	inline void set__poolsInitilized_40(bool value)
	{
		____poolsInitilized_40 = value;
	}

	inline static int32_t get_offset_of__inTutorial_41() { return static_cast<int32_t>(offsetof(View_t1946640821, ____inTutorial_41)); }
	inline bool get__inTutorial_41() const { return ____inTutorial_41; }
	inline bool* get_address_of__inTutorial_41() { return &____inTutorial_41; }
	inline void set__inTutorial_41(bool value)
	{
		____inTutorial_41 = value;
	}

	inline static int32_t get_offset_of__reshuffleCompleteTutorialTriggered_42() { return static_cast<int32_t>(offsetof(View_t1946640821, ____reshuffleCompleteTutorialTriggered_42)); }
	inline bool get__reshuffleCompleteTutorialTriggered_42() const { return ____reshuffleCompleteTutorialTriggered_42; }
	inline bool* get_address_of__reshuffleCompleteTutorialTriggered_42() { return &____reshuffleCompleteTutorialTriggered_42; }
	inline void set__reshuffleCompleteTutorialTriggered_42(bool value)
	{
		____reshuffleCompleteTutorialTriggered_42 = value;
	}

	inline static int32_t get_offset_of__currentTutorial_43() { return static_cast<int32_t>(offsetof(View_t1946640821, ____currentTutorial_43)); }
	inline Tutorial_t3830978326 * get__currentTutorial_43() const { return ____currentTutorial_43; }
	inline Tutorial_t3830978326 ** get_address_of__currentTutorial_43() { return &____currentTutorial_43; }
	inline void set__currentTutorial_43(Tutorial_t3830978326 * value)
	{
		____currentTutorial_43 = value;
		Il2CppCodeGenWriteBarrier(&____currentTutorial_43, value);
	}

	inline static int32_t get_offset_of__coTutorialTimer_44() { return static_cast<int32_t>(offsetof(View_t1946640821, ____coTutorialTimer_44)); }
	inline Il2CppObject * get__coTutorialTimer_44() const { return ____coTutorialTimer_44; }
	inline Il2CppObject ** get_address_of__coTutorialTimer_44() { return &____coTutorialTimer_44; }
	inline void set__coTutorialTimer_44(Il2CppObject * value)
	{
		____coTutorialTimer_44 = value;
		Il2CppCodeGenWriteBarrier(&____coTutorialTimer_44, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
