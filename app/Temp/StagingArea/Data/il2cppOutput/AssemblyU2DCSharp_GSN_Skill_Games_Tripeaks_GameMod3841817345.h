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
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1445386684;
// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.BaseCardData>
struct List_1_t4087109391;
// GSN.Skill.Games.Tripeaks.TriPeaksCardDeck
struct TriPeaksCardDeck_t1840429032;
// GSN.Skill.Games.Common.Primitive.Card.GsnCardPile
struct GsnCardPile_t3625903776;
// GSN.Skill.Games.Common.Primitive.Card.GsnCard
struct GsnCard_t782444760;
// GSN.Skill.Games.Tripeaks.LockModelTask
struct LockModelTask_t2128931019;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.Stack`1<GSN.Skill.Games.Common.Events.IModelEvent>
struct Stack_1_t1730414700;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Converter`2<System.String,System.Int32>
struct Converter_2_t1811520226;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Model_Gam2215752692.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.GameModel
struct  GameModel_t3841817345  : public GameModelBase_t2215752692
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> GSN.Skill.Games.Tripeaks.GameModel::_optionToggles
	Dictionary_2_t1445386684 * ____optionToggles_139;
	// System.Collections.Generic.List`1<GSN.Skill.Games.Tripeaks.BaseCardData> GSN.Skill.Games.Tripeaks.GameModel::_cards
	List_1_t4087109391 * ____cards_140;
	// GSN.Skill.Games.Tripeaks.TriPeaksCardDeck GSN.Skill.Games.Tripeaks.GameModel::_deck
	TriPeaksCardDeck_t1840429032 * ____deck_141;
	// GSN.Skill.Games.Common.Primitive.Card.GsnCardPile GSN.Skill.Games.Tripeaks.GameModel::_dealPile
	GsnCardPile_t3625903776 * ____dealPile_142;
	// GSN.Skill.Games.Common.Primitive.Card.GsnCardPile GSN.Skill.Games.Tripeaks.GameModel::_wastePile
	GsnCardPile_t3625903776 * ____wastePile_143;
	// GSN.Skill.Games.Common.Primitive.Card.GsnCardPile GSN.Skill.Games.Tripeaks.GameModel::_removedPile
	GsnCardPile_t3625903776 * ____removedPile_144;
	// GSN.Skill.Games.Common.Primitive.Card.GsnCard GSN.Skill.Games.Tripeaks.GameModel::<holdCard>k__BackingField
	GsnCard_t782444760 * ___U3CholdCardU3Ek__BackingField_145;
	// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::_boardID
	int32_t ____boardID_146;
	// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::<score>k__BackingField
	int32_t ___U3CscoreU3Ek__BackingField_147;
	// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::<timeBonus>k__BackingField
	int32_t ___U3CtimeBonusU3Ek__BackingField_148;
	// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::<streakBonus>k__BackingField
	int32_t ___U3CstreakBonusU3Ek__BackingField_149;
	// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::_numOneTimeWildsLeft
	int32_t ____numOneTimeWildsLeft_150;
	// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::_streakCount
	int32_t ____streakCount_151;
	// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::_lengthOfGameInMS
	int32_t ____lengthOfGameInMS_152;
	// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::_wildID
	int32_t ____wildID_153;
	// System.Int32 GSN.Skill.Games.Tripeaks.GameModel::_turnCounter
	int32_t ____turnCounter_154;
	// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::inputBlocked
	bool ___inputBlocked_155;
	// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::triggerClearBoardEvent
	bool ___triggerClearBoardEvent_156;
	// GSN.Skill.Games.Tripeaks.LockModelTask GSN.Skill.Games.Tripeaks.GameModel::_lockTask
	LockModelTask_t2128931019 * ____lockTask_157;
	// System.Collections.Generic.List`1<System.Int32> GSN.Skill.Games.Tripeaks.GameModel::_faceUpCards
	List_1_t1440998580 * ____faceUpCards_158;
	// System.Collections.Generic.Stack`1<GSN.Skill.Games.Common.Events.IModelEvent> GSN.Skill.Games.Tripeaks.GameModel::_undoSteps
	Stack_1_t1730414700 * ____undoSteps_159;
	// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::_okToAddUndo
	bool ____okToAddUndo_160;
	// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::_streakResetLocked
	bool ____streakResetLocked_161;
	// System.Boolean GSN.Skill.Games.Tripeaks.GameModel::_hasReshuffled
	bool ____hasReshuffled_162;
	// System.Int32[] GSN.Skill.Games.Tripeaks.GameModel::_IntroTutorialCardOrder
	Int32U5BU5D_t3030399641* ____IntroTutorialCardOrder_163;

public:
	inline static int32_t get_offset_of__optionToggles_139() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____optionToggles_139)); }
	inline Dictionary_2_t1445386684 * get__optionToggles_139() const { return ____optionToggles_139; }
	inline Dictionary_2_t1445386684 ** get_address_of__optionToggles_139() { return &____optionToggles_139; }
	inline void set__optionToggles_139(Dictionary_2_t1445386684 * value)
	{
		____optionToggles_139 = value;
		Il2CppCodeGenWriteBarrier(&____optionToggles_139, value);
	}

	inline static int32_t get_offset_of__cards_140() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____cards_140)); }
	inline List_1_t4087109391 * get__cards_140() const { return ____cards_140; }
	inline List_1_t4087109391 ** get_address_of__cards_140() { return &____cards_140; }
	inline void set__cards_140(List_1_t4087109391 * value)
	{
		____cards_140 = value;
		Il2CppCodeGenWriteBarrier(&____cards_140, value);
	}

	inline static int32_t get_offset_of__deck_141() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____deck_141)); }
	inline TriPeaksCardDeck_t1840429032 * get__deck_141() const { return ____deck_141; }
	inline TriPeaksCardDeck_t1840429032 ** get_address_of__deck_141() { return &____deck_141; }
	inline void set__deck_141(TriPeaksCardDeck_t1840429032 * value)
	{
		____deck_141 = value;
		Il2CppCodeGenWriteBarrier(&____deck_141, value);
	}

	inline static int32_t get_offset_of__dealPile_142() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____dealPile_142)); }
	inline GsnCardPile_t3625903776 * get__dealPile_142() const { return ____dealPile_142; }
	inline GsnCardPile_t3625903776 ** get_address_of__dealPile_142() { return &____dealPile_142; }
	inline void set__dealPile_142(GsnCardPile_t3625903776 * value)
	{
		____dealPile_142 = value;
		Il2CppCodeGenWriteBarrier(&____dealPile_142, value);
	}

	inline static int32_t get_offset_of__wastePile_143() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____wastePile_143)); }
	inline GsnCardPile_t3625903776 * get__wastePile_143() const { return ____wastePile_143; }
	inline GsnCardPile_t3625903776 ** get_address_of__wastePile_143() { return &____wastePile_143; }
	inline void set__wastePile_143(GsnCardPile_t3625903776 * value)
	{
		____wastePile_143 = value;
		Il2CppCodeGenWriteBarrier(&____wastePile_143, value);
	}

	inline static int32_t get_offset_of__removedPile_144() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____removedPile_144)); }
	inline GsnCardPile_t3625903776 * get__removedPile_144() const { return ____removedPile_144; }
	inline GsnCardPile_t3625903776 ** get_address_of__removedPile_144() { return &____removedPile_144; }
	inline void set__removedPile_144(GsnCardPile_t3625903776 * value)
	{
		____removedPile_144 = value;
		Il2CppCodeGenWriteBarrier(&____removedPile_144, value);
	}

	inline static int32_t get_offset_of_U3CholdCardU3Ek__BackingField_145() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ___U3CholdCardU3Ek__BackingField_145)); }
	inline GsnCard_t782444760 * get_U3CholdCardU3Ek__BackingField_145() const { return ___U3CholdCardU3Ek__BackingField_145; }
	inline GsnCard_t782444760 ** get_address_of_U3CholdCardU3Ek__BackingField_145() { return &___U3CholdCardU3Ek__BackingField_145; }
	inline void set_U3CholdCardU3Ek__BackingField_145(GsnCard_t782444760 * value)
	{
		___U3CholdCardU3Ek__BackingField_145 = value;
		Il2CppCodeGenWriteBarrier(&___U3CholdCardU3Ek__BackingField_145, value);
	}

	inline static int32_t get_offset_of__boardID_146() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____boardID_146)); }
	inline int32_t get__boardID_146() const { return ____boardID_146; }
	inline int32_t* get_address_of__boardID_146() { return &____boardID_146; }
	inline void set__boardID_146(int32_t value)
	{
		____boardID_146 = value;
	}

	inline static int32_t get_offset_of_U3CscoreU3Ek__BackingField_147() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ___U3CscoreU3Ek__BackingField_147)); }
	inline int32_t get_U3CscoreU3Ek__BackingField_147() const { return ___U3CscoreU3Ek__BackingField_147; }
	inline int32_t* get_address_of_U3CscoreU3Ek__BackingField_147() { return &___U3CscoreU3Ek__BackingField_147; }
	inline void set_U3CscoreU3Ek__BackingField_147(int32_t value)
	{
		___U3CscoreU3Ek__BackingField_147 = value;
	}

	inline static int32_t get_offset_of_U3CtimeBonusU3Ek__BackingField_148() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ___U3CtimeBonusU3Ek__BackingField_148)); }
	inline int32_t get_U3CtimeBonusU3Ek__BackingField_148() const { return ___U3CtimeBonusU3Ek__BackingField_148; }
	inline int32_t* get_address_of_U3CtimeBonusU3Ek__BackingField_148() { return &___U3CtimeBonusU3Ek__BackingField_148; }
	inline void set_U3CtimeBonusU3Ek__BackingField_148(int32_t value)
	{
		___U3CtimeBonusU3Ek__BackingField_148 = value;
	}

	inline static int32_t get_offset_of_U3CstreakBonusU3Ek__BackingField_149() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ___U3CstreakBonusU3Ek__BackingField_149)); }
	inline int32_t get_U3CstreakBonusU3Ek__BackingField_149() const { return ___U3CstreakBonusU3Ek__BackingField_149; }
	inline int32_t* get_address_of_U3CstreakBonusU3Ek__BackingField_149() { return &___U3CstreakBonusU3Ek__BackingField_149; }
	inline void set_U3CstreakBonusU3Ek__BackingField_149(int32_t value)
	{
		___U3CstreakBonusU3Ek__BackingField_149 = value;
	}

	inline static int32_t get_offset_of__numOneTimeWildsLeft_150() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____numOneTimeWildsLeft_150)); }
	inline int32_t get__numOneTimeWildsLeft_150() const { return ____numOneTimeWildsLeft_150; }
	inline int32_t* get_address_of__numOneTimeWildsLeft_150() { return &____numOneTimeWildsLeft_150; }
	inline void set__numOneTimeWildsLeft_150(int32_t value)
	{
		____numOneTimeWildsLeft_150 = value;
	}

	inline static int32_t get_offset_of__streakCount_151() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____streakCount_151)); }
	inline int32_t get__streakCount_151() const { return ____streakCount_151; }
	inline int32_t* get_address_of__streakCount_151() { return &____streakCount_151; }
	inline void set__streakCount_151(int32_t value)
	{
		____streakCount_151 = value;
	}

	inline static int32_t get_offset_of__lengthOfGameInMS_152() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____lengthOfGameInMS_152)); }
	inline int32_t get__lengthOfGameInMS_152() const { return ____lengthOfGameInMS_152; }
	inline int32_t* get_address_of__lengthOfGameInMS_152() { return &____lengthOfGameInMS_152; }
	inline void set__lengthOfGameInMS_152(int32_t value)
	{
		____lengthOfGameInMS_152 = value;
	}

	inline static int32_t get_offset_of__wildID_153() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____wildID_153)); }
	inline int32_t get__wildID_153() const { return ____wildID_153; }
	inline int32_t* get_address_of__wildID_153() { return &____wildID_153; }
	inline void set__wildID_153(int32_t value)
	{
		____wildID_153 = value;
	}

	inline static int32_t get_offset_of__turnCounter_154() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____turnCounter_154)); }
	inline int32_t get__turnCounter_154() const { return ____turnCounter_154; }
	inline int32_t* get_address_of__turnCounter_154() { return &____turnCounter_154; }
	inline void set__turnCounter_154(int32_t value)
	{
		____turnCounter_154 = value;
	}

	inline static int32_t get_offset_of_inputBlocked_155() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ___inputBlocked_155)); }
	inline bool get_inputBlocked_155() const { return ___inputBlocked_155; }
	inline bool* get_address_of_inputBlocked_155() { return &___inputBlocked_155; }
	inline void set_inputBlocked_155(bool value)
	{
		___inputBlocked_155 = value;
	}

	inline static int32_t get_offset_of_triggerClearBoardEvent_156() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ___triggerClearBoardEvent_156)); }
	inline bool get_triggerClearBoardEvent_156() const { return ___triggerClearBoardEvent_156; }
	inline bool* get_address_of_triggerClearBoardEvent_156() { return &___triggerClearBoardEvent_156; }
	inline void set_triggerClearBoardEvent_156(bool value)
	{
		___triggerClearBoardEvent_156 = value;
	}

	inline static int32_t get_offset_of__lockTask_157() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____lockTask_157)); }
	inline LockModelTask_t2128931019 * get__lockTask_157() const { return ____lockTask_157; }
	inline LockModelTask_t2128931019 ** get_address_of__lockTask_157() { return &____lockTask_157; }
	inline void set__lockTask_157(LockModelTask_t2128931019 * value)
	{
		____lockTask_157 = value;
		Il2CppCodeGenWriteBarrier(&____lockTask_157, value);
	}

	inline static int32_t get_offset_of__faceUpCards_158() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____faceUpCards_158)); }
	inline List_1_t1440998580 * get__faceUpCards_158() const { return ____faceUpCards_158; }
	inline List_1_t1440998580 ** get_address_of__faceUpCards_158() { return &____faceUpCards_158; }
	inline void set__faceUpCards_158(List_1_t1440998580 * value)
	{
		____faceUpCards_158 = value;
		Il2CppCodeGenWriteBarrier(&____faceUpCards_158, value);
	}

	inline static int32_t get_offset_of__undoSteps_159() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____undoSteps_159)); }
	inline Stack_1_t1730414700 * get__undoSteps_159() const { return ____undoSteps_159; }
	inline Stack_1_t1730414700 ** get_address_of__undoSteps_159() { return &____undoSteps_159; }
	inline void set__undoSteps_159(Stack_1_t1730414700 * value)
	{
		____undoSteps_159 = value;
		Il2CppCodeGenWriteBarrier(&____undoSteps_159, value);
	}

	inline static int32_t get_offset_of__okToAddUndo_160() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____okToAddUndo_160)); }
	inline bool get__okToAddUndo_160() const { return ____okToAddUndo_160; }
	inline bool* get_address_of__okToAddUndo_160() { return &____okToAddUndo_160; }
	inline void set__okToAddUndo_160(bool value)
	{
		____okToAddUndo_160 = value;
	}

	inline static int32_t get_offset_of__streakResetLocked_161() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____streakResetLocked_161)); }
	inline bool get__streakResetLocked_161() const { return ____streakResetLocked_161; }
	inline bool* get_address_of__streakResetLocked_161() { return &____streakResetLocked_161; }
	inline void set__streakResetLocked_161(bool value)
	{
		____streakResetLocked_161 = value;
	}

	inline static int32_t get_offset_of__hasReshuffled_162() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____hasReshuffled_162)); }
	inline bool get__hasReshuffled_162() const { return ____hasReshuffled_162; }
	inline bool* get_address_of__hasReshuffled_162() { return &____hasReshuffled_162; }
	inline void set__hasReshuffled_162(bool value)
	{
		____hasReshuffled_162 = value;
	}

	inline static int32_t get_offset_of__IntroTutorialCardOrder_163() { return static_cast<int32_t>(offsetof(GameModel_t3841817345, ____IntroTutorialCardOrder_163)); }
	inline Int32U5BU5D_t3030399641* get__IntroTutorialCardOrder_163() const { return ____IntroTutorialCardOrder_163; }
	inline Int32U5BU5D_t3030399641** get_address_of__IntroTutorialCardOrder_163() { return &____IntroTutorialCardOrder_163; }
	inline void set__IntroTutorialCardOrder_163(Int32U5BU5D_t3030399641* value)
	{
		____IntroTutorialCardOrder_163 = value;
		Il2CppCodeGenWriteBarrier(&____IntroTutorialCardOrder_163, value);
	}
};

struct GameModel_t3841817345_StaticFields
{
public:
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_BOARD_ID
	String_t* ___OPTIONS_BOARD_ID_31;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_RED_TIKI_ID
	String_t* ___OPTIONS_RED_TIKI_ID_32;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_BLACK_TIKI_ID
	String_t* ___OPTIONS_BLACK_TIKI_ID_33;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_VOLCANO_TIKI_ID
	String_t* ___OPTIONS_VOLCANO_TIKI_ID_34;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_BLOSSOM_TIKI_ID
	String_t* ___OPTIONS_BLOSSOM_TIKI_ID_35;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_GOLDEN_TIKI_ID
	String_t* ___OPTIONS_GOLDEN_TIKI_ID_36;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_REDBLACK_MAX_CARD_ID
	String_t* ___OPTIONS_REDBLACK_MAX_CARD_ID_37;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_VOLCANO_MAX_CARD_ID
	String_t* ___OPTIONS_VOLCANO_MAX_CARD_ID_38;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_BLOSSOM_MAX_CARD_ID
	String_t* ___OPTIONS_BLOSSOM_MAX_CARD_ID_39;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_TRAP_HAZARD_ID
	String_t* ___OPTIONS_TRAP_HAZARD_ID_40;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_SHARK_HAZARD_ID
	String_t* ___OPTIONS_SHARK_HAZARD_ID_41;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_DYNAMITE_HAZARD_ID
	String_t* ___OPTIONS_DYNAMITE_HAZARD_ID_42;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_DYNAMITE_USE_TIME_ID
	String_t* ___OPTIONS_DYNAMITE_USE_TIME_ID_43;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_DYNAMITE_TIME_MAX_ID
	String_t* ___OPTIONS_DYNAMITE_TIME_MAX_ID_44;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_DYNAMITE_TURN_MAX_ID
	String_t* ___OPTIONS_DYNAMITE_TURN_MAX_ID_45;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_RESHUFFLE_ID
	String_t* ___OPTIONS_RESHUFFLE_ID_46;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_HOLD_ID
	String_t* ___OPTIONS_HOLD_ID_47;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_ONE_SHOT_WILD_ID
	String_t* ___OPTIONS_ONE_SHOT_WILD_ID_48;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_BACKGROUND_ID
	String_t* ___OPTIONS_BACKGROUND_ID_49;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_BACKGROUND_DIFFICULTY_ID
	String_t* ___OPTIONS_BACKGROUND_DIFFICULTY_ID_50;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID
	String_t* ___OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID_51;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID
	String_t* ___OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID_52;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_TUTORIAL_INTRO_ID
	String_t* ___OPTIONS_TUTORIAL_INTRO_ID_134;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID
	String_t* ___OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID_135;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_TUTORIAL_TRAP_ID
	String_t* ___OPTIONS_TUTORIAL_TRAP_ID_136;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_TUTORIAL_SHARK_ID
	String_t* ___OPTIONS_TUTORIAL_SHARK_ID_137;
	// System.String GSN.Skill.Games.Tripeaks.GameModel::OPTIONS_TUTORIAL_DYNAMITE_ID
	String_t* ___OPTIONS_TUTORIAL_DYNAMITE_ID_138;
	// System.Type[] GSN.Skill.Games.Tripeaks.GameModel::inputEnumTypes
	TypeU5BU5D_t1664964607* ___inputEnumTypes_164;
	// System.Type[] GSN.Skill.Games.Tripeaks.GameModel::eventEnumTypes
	TypeU5BU5D_t1664964607* ___eventEnumTypes_165;
	// System.Converter`2<System.String,System.Int32> GSN.Skill.Games.Tripeaks.GameModel::<>f__mg$cache0
	Converter_2_t1811520226 * ___U3CU3Ef__mgU24cache0_166;

public:
	inline static int32_t get_offset_of_OPTIONS_BOARD_ID_31() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_BOARD_ID_31)); }
	inline String_t* get_OPTIONS_BOARD_ID_31() const { return ___OPTIONS_BOARD_ID_31; }
	inline String_t** get_address_of_OPTIONS_BOARD_ID_31() { return &___OPTIONS_BOARD_ID_31; }
	inline void set_OPTIONS_BOARD_ID_31(String_t* value)
	{
		___OPTIONS_BOARD_ID_31 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_BOARD_ID_31, value);
	}

	inline static int32_t get_offset_of_OPTIONS_RED_TIKI_ID_32() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_RED_TIKI_ID_32)); }
	inline String_t* get_OPTIONS_RED_TIKI_ID_32() const { return ___OPTIONS_RED_TIKI_ID_32; }
	inline String_t** get_address_of_OPTIONS_RED_TIKI_ID_32() { return &___OPTIONS_RED_TIKI_ID_32; }
	inline void set_OPTIONS_RED_TIKI_ID_32(String_t* value)
	{
		___OPTIONS_RED_TIKI_ID_32 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_RED_TIKI_ID_32, value);
	}

	inline static int32_t get_offset_of_OPTIONS_BLACK_TIKI_ID_33() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_BLACK_TIKI_ID_33)); }
	inline String_t* get_OPTIONS_BLACK_TIKI_ID_33() const { return ___OPTIONS_BLACK_TIKI_ID_33; }
	inline String_t** get_address_of_OPTIONS_BLACK_TIKI_ID_33() { return &___OPTIONS_BLACK_TIKI_ID_33; }
	inline void set_OPTIONS_BLACK_TIKI_ID_33(String_t* value)
	{
		___OPTIONS_BLACK_TIKI_ID_33 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_BLACK_TIKI_ID_33, value);
	}

	inline static int32_t get_offset_of_OPTIONS_VOLCANO_TIKI_ID_34() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_VOLCANO_TIKI_ID_34)); }
	inline String_t* get_OPTIONS_VOLCANO_TIKI_ID_34() const { return ___OPTIONS_VOLCANO_TIKI_ID_34; }
	inline String_t** get_address_of_OPTIONS_VOLCANO_TIKI_ID_34() { return &___OPTIONS_VOLCANO_TIKI_ID_34; }
	inline void set_OPTIONS_VOLCANO_TIKI_ID_34(String_t* value)
	{
		___OPTIONS_VOLCANO_TIKI_ID_34 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_VOLCANO_TIKI_ID_34, value);
	}

	inline static int32_t get_offset_of_OPTIONS_BLOSSOM_TIKI_ID_35() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_BLOSSOM_TIKI_ID_35)); }
	inline String_t* get_OPTIONS_BLOSSOM_TIKI_ID_35() const { return ___OPTIONS_BLOSSOM_TIKI_ID_35; }
	inline String_t** get_address_of_OPTIONS_BLOSSOM_TIKI_ID_35() { return &___OPTIONS_BLOSSOM_TIKI_ID_35; }
	inline void set_OPTIONS_BLOSSOM_TIKI_ID_35(String_t* value)
	{
		___OPTIONS_BLOSSOM_TIKI_ID_35 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_BLOSSOM_TIKI_ID_35, value);
	}

	inline static int32_t get_offset_of_OPTIONS_GOLDEN_TIKI_ID_36() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_GOLDEN_TIKI_ID_36)); }
	inline String_t* get_OPTIONS_GOLDEN_TIKI_ID_36() const { return ___OPTIONS_GOLDEN_TIKI_ID_36; }
	inline String_t** get_address_of_OPTIONS_GOLDEN_TIKI_ID_36() { return &___OPTIONS_GOLDEN_TIKI_ID_36; }
	inline void set_OPTIONS_GOLDEN_TIKI_ID_36(String_t* value)
	{
		___OPTIONS_GOLDEN_TIKI_ID_36 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_GOLDEN_TIKI_ID_36, value);
	}

	inline static int32_t get_offset_of_OPTIONS_REDBLACK_MAX_CARD_ID_37() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_REDBLACK_MAX_CARD_ID_37)); }
	inline String_t* get_OPTIONS_REDBLACK_MAX_CARD_ID_37() const { return ___OPTIONS_REDBLACK_MAX_CARD_ID_37; }
	inline String_t** get_address_of_OPTIONS_REDBLACK_MAX_CARD_ID_37() { return &___OPTIONS_REDBLACK_MAX_CARD_ID_37; }
	inline void set_OPTIONS_REDBLACK_MAX_CARD_ID_37(String_t* value)
	{
		___OPTIONS_REDBLACK_MAX_CARD_ID_37 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_REDBLACK_MAX_CARD_ID_37, value);
	}

	inline static int32_t get_offset_of_OPTIONS_VOLCANO_MAX_CARD_ID_38() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_VOLCANO_MAX_CARD_ID_38)); }
	inline String_t* get_OPTIONS_VOLCANO_MAX_CARD_ID_38() const { return ___OPTIONS_VOLCANO_MAX_CARD_ID_38; }
	inline String_t** get_address_of_OPTIONS_VOLCANO_MAX_CARD_ID_38() { return &___OPTIONS_VOLCANO_MAX_CARD_ID_38; }
	inline void set_OPTIONS_VOLCANO_MAX_CARD_ID_38(String_t* value)
	{
		___OPTIONS_VOLCANO_MAX_CARD_ID_38 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_VOLCANO_MAX_CARD_ID_38, value);
	}

	inline static int32_t get_offset_of_OPTIONS_BLOSSOM_MAX_CARD_ID_39() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_BLOSSOM_MAX_CARD_ID_39)); }
	inline String_t* get_OPTIONS_BLOSSOM_MAX_CARD_ID_39() const { return ___OPTIONS_BLOSSOM_MAX_CARD_ID_39; }
	inline String_t** get_address_of_OPTIONS_BLOSSOM_MAX_CARD_ID_39() { return &___OPTIONS_BLOSSOM_MAX_CARD_ID_39; }
	inline void set_OPTIONS_BLOSSOM_MAX_CARD_ID_39(String_t* value)
	{
		___OPTIONS_BLOSSOM_MAX_CARD_ID_39 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_BLOSSOM_MAX_CARD_ID_39, value);
	}

	inline static int32_t get_offset_of_OPTIONS_TRAP_HAZARD_ID_40() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_TRAP_HAZARD_ID_40)); }
	inline String_t* get_OPTIONS_TRAP_HAZARD_ID_40() const { return ___OPTIONS_TRAP_HAZARD_ID_40; }
	inline String_t** get_address_of_OPTIONS_TRAP_HAZARD_ID_40() { return &___OPTIONS_TRAP_HAZARD_ID_40; }
	inline void set_OPTIONS_TRAP_HAZARD_ID_40(String_t* value)
	{
		___OPTIONS_TRAP_HAZARD_ID_40 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_TRAP_HAZARD_ID_40, value);
	}

	inline static int32_t get_offset_of_OPTIONS_SHARK_HAZARD_ID_41() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_SHARK_HAZARD_ID_41)); }
	inline String_t* get_OPTIONS_SHARK_HAZARD_ID_41() const { return ___OPTIONS_SHARK_HAZARD_ID_41; }
	inline String_t** get_address_of_OPTIONS_SHARK_HAZARD_ID_41() { return &___OPTIONS_SHARK_HAZARD_ID_41; }
	inline void set_OPTIONS_SHARK_HAZARD_ID_41(String_t* value)
	{
		___OPTIONS_SHARK_HAZARD_ID_41 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_SHARK_HAZARD_ID_41, value);
	}

	inline static int32_t get_offset_of_OPTIONS_DYNAMITE_HAZARD_ID_42() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_DYNAMITE_HAZARD_ID_42)); }
	inline String_t* get_OPTIONS_DYNAMITE_HAZARD_ID_42() const { return ___OPTIONS_DYNAMITE_HAZARD_ID_42; }
	inline String_t** get_address_of_OPTIONS_DYNAMITE_HAZARD_ID_42() { return &___OPTIONS_DYNAMITE_HAZARD_ID_42; }
	inline void set_OPTIONS_DYNAMITE_HAZARD_ID_42(String_t* value)
	{
		___OPTIONS_DYNAMITE_HAZARD_ID_42 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_DYNAMITE_HAZARD_ID_42, value);
	}

	inline static int32_t get_offset_of_OPTIONS_DYNAMITE_USE_TIME_ID_43() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_DYNAMITE_USE_TIME_ID_43)); }
	inline String_t* get_OPTIONS_DYNAMITE_USE_TIME_ID_43() const { return ___OPTIONS_DYNAMITE_USE_TIME_ID_43; }
	inline String_t** get_address_of_OPTIONS_DYNAMITE_USE_TIME_ID_43() { return &___OPTIONS_DYNAMITE_USE_TIME_ID_43; }
	inline void set_OPTIONS_DYNAMITE_USE_TIME_ID_43(String_t* value)
	{
		___OPTIONS_DYNAMITE_USE_TIME_ID_43 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_DYNAMITE_USE_TIME_ID_43, value);
	}

	inline static int32_t get_offset_of_OPTIONS_DYNAMITE_TIME_MAX_ID_44() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_DYNAMITE_TIME_MAX_ID_44)); }
	inline String_t* get_OPTIONS_DYNAMITE_TIME_MAX_ID_44() const { return ___OPTIONS_DYNAMITE_TIME_MAX_ID_44; }
	inline String_t** get_address_of_OPTIONS_DYNAMITE_TIME_MAX_ID_44() { return &___OPTIONS_DYNAMITE_TIME_MAX_ID_44; }
	inline void set_OPTIONS_DYNAMITE_TIME_MAX_ID_44(String_t* value)
	{
		___OPTIONS_DYNAMITE_TIME_MAX_ID_44 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_DYNAMITE_TIME_MAX_ID_44, value);
	}

	inline static int32_t get_offset_of_OPTIONS_DYNAMITE_TURN_MAX_ID_45() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_DYNAMITE_TURN_MAX_ID_45)); }
	inline String_t* get_OPTIONS_DYNAMITE_TURN_MAX_ID_45() const { return ___OPTIONS_DYNAMITE_TURN_MAX_ID_45; }
	inline String_t** get_address_of_OPTIONS_DYNAMITE_TURN_MAX_ID_45() { return &___OPTIONS_DYNAMITE_TURN_MAX_ID_45; }
	inline void set_OPTIONS_DYNAMITE_TURN_MAX_ID_45(String_t* value)
	{
		___OPTIONS_DYNAMITE_TURN_MAX_ID_45 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_DYNAMITE_TURN_MAX_ID_45, value);
	}

	inline static int32_t get_offset_of_OPTIONS_RESHUFFLE_ID_46() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_RESHUFFLE_ID_46)); }
	inline String_t* get_OPTIONS_RESHUFFLE_ID_46() const { return ___OPTIONS_RESHUFFLE_ID_46; }
	inline String_t** get_address_of_OPTIONS_RESHUFFLE_ID_46() { return &___OPTIONS_RESHUFFLE_ID_46; }
	inline void set_OPTIONS_RESHUFFLE_ID_46(String_t* value)
	{
		___OPTIONS_RESHUFFLE_ID_46 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_RESHUFFLE_ID_46, value);
	}

	inline static int32_t get_offset_of_OPTIONS_HOLD_ID_47() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_HOLD_ID_47)); }
	inline String_t* get_OPTIONS_HOLD_ID_47() const { return ___OPTIONS_HOLD_ID_47; }
	inline String_t** get_address_of_OPTIONS_HOLD_ID_47() { return &___OPTIONS_HOLD_ID_47; }
	inline void set_OPTIONS_HOLD_ID_47(String_t* value)
	{
		___OPTIONS_HOLD_ID_47 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_HOLD_ID_47, value);
	}

	inline static int32_t get_offset_of_OPTIONS_ONE_SHOT_WILD_ID_48() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_ONE_SHOT_WILD_ID_48)); }
	inline String_t* get_OPTIONS_ONE_SHOT_WILD_ID_48() const { return ___OPTIONS_ONE_SHOT_WILD_ID_48; }
	inline String_t** get_address_of_OPTIONS_ONE_SHOT_WILD_ID_48() { return &___OPTIONS_ONE_SHOT_WILD_ID_48; }
	inline void set_OPTIONS_ONE_SHOT_WILD_ID_48(String_t* value)
	{
		___OPTIONS_ONE_SHOT_WILD_ID_48 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_ONE_SHOT_WILD_ID_48, value);
	}

	inline static int32_t get_offset_of_OPTIONS_BACKGROUND_ID_49() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_BACKGROUND_ID_49)); }
	inline String_t* get_OPTIONS_BACKGROUND_ID_49() const { return ___OPTIONS_BACKGROUND_ID_49; }
	inline String_t** get_address_of_OPTIONS_BACKGROUND_ID_49() { return &___OPTIONS_BACKGROUND_ID_49; }
	inline void set_OPTIONS_BACKGROUND_ID_49(String_t* value)
	{
		___OPTIONS_BACKGROUND_ID_49 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_BACKGROUND_ID_49, value);
	}

	inline static int32_t get_offset_of_OPTIONS_BACKGROUND_DIFFICULTY_ID_50() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_BACKGROUND_DIFFICULTY_ID_50)); }
	inline String_t* get_OPTIONS_BACKGROUND_DIFFICULTY_ID_50() const { return ___OPTIONS_BACKGROUND_DIFFICULTY_ID_50; }
	inline String_t** get_address_of_OPTIONS_BACKGROUND_DIFFICULTY_ID_50() { return &___OPTIONS_BACKGROUND_DIFFICULTY_ID_50; }
	inline void set_OPTIONS_BACKGROUND_DIFFICULTY_ID_50(String_t* value)
	{
		___OPTIONS_BACKGROUND_DIFFICULTY_ID_50 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_BACKGROUND_DIFFICULTY_ID_50, value);
	}

	inline static int32_t get_offset_of_OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID_51() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID_51)); }
	inline String_t* get_OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID_51() const { return ___OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID_51; }
	inline String_t** get_address_of_OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID_51() { return &___OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID_51; }
	inline void set_OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID_51(String_t* value)
	{
		___OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID_51 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_SPAWN_ALL_TIKIS_DEBUG_ID_51, value);
	}

	inline static int32_t get_offset_of_OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID_52() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID_52)); }
	inline String_t* get_OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID_52() const { return ___OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID_52; }
	inline String_t** get_address_of_OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID_52() { return &___OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID_52; }
	inline void set_OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID_52(String_t* value)
	{
		___OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID_52 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_TIKI_SPAWN_CHANCE_100_DEBUG_ID_52, value);
	}

	inline static int32_t get_offset_of_OPTIONS_TUTORIAL_INTRO_ID_134() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_TUTORIAL_INTRO_ID_134)); }
	inline String_t* get_OPTIONS_TUTORIAL_INTRO_ID_134() const { return ___OPTIONS_TUTORIAL_INTRO_ID_134; }
	inline String_t** get_address_of_OPTIONS_TUTORIAL_INTRO_ID_134() { return &___OPTIONS_TUTORIAL_INTRO_ID_134; }
	inline void set_OPTIONS_TUTORIAL_INTRO_ID_134(String_t* value)
	{
		___OPTIONS_TUTORIAL_INTRO_ID_134 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_TUTORIAL_INTRO_ID_134, value);
	}

	inline static int32_t get_offset_of_OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID_135() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID_135)); }
	inline String_t* get_OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID_135() const { return ___OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID_135; }
	inline String_t** get_address_of_OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID_135() { return &___OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID_135; }
	inline void set_OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID_135(String_t* value)
	{
		___OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID_135 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_TUTORIAL_INTRO_CARD_ORDER_ID_135, value);
	}

	inline static int32_t get_offset_of_OPTIONS_TUTORIAL_TRAP_ID_136() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_TUTORIAL_TRAP_ID_136)); }
	inline String_t* get_OPTIONS_TUTORIAL_TRAP_ID_136() const { return ___OPTIONS_TUTORIAL_TRAP_ID_136; }
	inline String_t** get_address_of_OPTIONS_TUTORIAL_TRAP_ID_136() { return &___OPTIONS_TUTORIAL_TRAP_ID_136; }
	inline void set_OPTIONS_TUTORIAL_TRAP_ID_136(String_t* value)
	{
		___OPTIONS_TUTORIAL_TRAP_ID_136 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_TUTORIAL_TRAP_ID_136, value);
	}

	inline static int32_t get_offset_of_OPTIONS_TUTORIAL_SHARK_ID_137() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_TUTORIAL_SHARK_ID_137)); }
	inline String_t* get_OPTIONS_TUTORIAL_SHARK_ID_137() const { return ___OPTIONS_TUTORIAL_SHARK_ID_137; }
	inline String_t** get_address_of_OPTIONS_TUTORIAL_SHARK_ID_137() { return &___OPTIONS_TUTORIAL_SHARK_ID_137; }
	inline void set_OPTIONS_TUTORIAL_SHARK_ID_137(String_t* value)
	{
		___OPTIONS_TUTORIAL_SHARK_ID_137 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_TUTORIAL_SHARK_ID_137, value);
	}

	inline static int32_t get_offset_of_OPTIONS_TUTORIAL_DYNAMITE_ID_138() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___OPTIONS_TUTORIAL_DYNAMITE_ID_138)); }
	inline String_t* get_OPTIONS_TUTORIAL_DYNAMITE_ID_138() const { return ___OPTIONS_TUTORIAL_DYNAMITE_ID_138; }
	inline String_t** get_address_of_OPTIONS_TUTORIAL_DYNAMITE_ID_138() { return &___OPTIONS_TUTORIAL_DYNAMITE_ID_138; }
	inline void set_OPTIONS_TUTORIAL_DYNAMITE_ID_138(String_t* value)
	{
		___OPTIONS_TUTORIAL_DYNAMITE_ID_138 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_TUTORIAL_DYNAMITE_ID_138, value);
	}

	inline static int32_t get_offset_of_inputEnumTypes_164() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___inputEnumTypes_164)); }
	inline TypeU5BU5D_t1664964607* get_inputEnumTypes_164() const { return ___inputEnumTypes_164; }
	inline TypeU5BU5D_t1664964607** get_address_of_inputEnumTypes_164() { return &___inputEnumTypes_164; }
	inline void set_inputEnumTypes_164(TypeU5BU5D_t1664964607* value)
	{
		___inputEnumTypes_164 = value;
		Il2CppCodeGenWriteBarrier(&___inputEnumTypes_164, value);
	}

	inline static int32_t get_offset_of_eventEnumTypes_165() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___eventEnumTypes_165)); }
	inline TypeU5BU5D_t1664964607* get_eventEnumTypes_165() const { return ___eventEnumTypes_165; }
	inline TypeU5BU5D_t1664964607** get_address_of_eventEnumTypes_165() { return &___eventEnumTypes_165; }
	inline void set_eventEnumTypes_165(TypeU5BU5D_t1664964607* value)
	{
		___eventEnumTypes_165 = value;
		Il2CppCodeGenWriteBarrier(&___eventEnumTypes_165, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_166() { return static_cast<int32_t>(offsetof(GameModel_t3841817345_StaticFields, ___U3CU3Ef__mgU24cache0_166)); }
	inline Converter_2_t1811520226 * get_U3CU3Ef__mgU24cache0_166() const { return ___U3CU3Ef__mgU24cache0_166; }
	inline Converter_2_t1811520226 ** get_address_of_U3CU3Ef__mgU24cache0_166() { return &___U3CU3Ef__mgU24cache0_166; }
	inline void set_U3CU3Ef__mgU24cache0_166(Converter_2_t1811520226 * value)
	{
		___U3CU3Ef__mgU24cache0_166 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_166, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
