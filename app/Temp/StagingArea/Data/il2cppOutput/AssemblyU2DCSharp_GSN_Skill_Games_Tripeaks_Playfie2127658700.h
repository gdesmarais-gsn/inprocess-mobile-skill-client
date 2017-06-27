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
// System.String[]
struct StringU5BU5D_t1642385972;
// GSN.Skill.Games.Tripeaks.PlayfieldData/CardData[]
struct CardDataU5BU5D_t1346892751;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.PlayfieldData
struct  PlayfieldData_t2127658700  : public ScriptableObject_t1975622470
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::ID
	int32_t ___ID_2;
	// System.String GSN.Skill.Games.Tripeaks.PlayfieldData::levelName
	String_t* ___levelName_3;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::entryCost
	int32_t ___entryCost_4;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::timeStarRequirement
	int32_t ___timeStarRequirement_5;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::stockCardCount
	int32_t ___stockCardCount_6;
	// System.String[] GSN.Skill.Games.Tripeaks.PlayfieldData::musicNames
	StringU5BU5D_t1642385972* ___musicNames_7;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::moreStockCardsCountAdjustment
	int32_t ___moreStockCardsCountAdjustment_8;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::moreStocksBaseMultiOfLevelCost
	float ___moreStocksBaseMultiOfLevelCost_9;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::moreStocksAddMultiOfLevelCost
	float ___moreStocksAddMultiOfLevelCost_10;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::smartMoneyPercentage
	float ___smartMoneyPercentage_11;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::smartMoneyPowerCurve
	float ___smartMoneyPowerCurve_12;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::undoBaseMultiOfLevelCost
	float ___undoBaseMultiOfLevelCost_13;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::undoAddMultiOfLevelCost
	float ___undoAddMultiOfLevelCost_14;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::wildBaseMultiOfLevelCost
	float ___wildBaseMultiOfLevelCost_15;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::wildAddMultiOfLevelCost
	float ___wildAddMultiOfLevelCost_16;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiRedMin
	int32_t ___tikiRedMin_17;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiRedMax
	int32_t ___tikiRedMax_18;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiRedChance
	int32_t ___tikiRedChance_19;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiBlackMin
	int32_t ___tikiBlackMin_20;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiBlackMax
	int32_t ___tikiBlackMax_21;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiBlackChance
	int32_t ___tikiBlackChance_22;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiGoldenMin
	int32_t ___tikiGoldenMin_23;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiGoldenMax
	int32_t ___tikiGoldenMax_24;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiGoldenChance
	int32_t ___tikiGoldenChance_25;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiBlossomMin
	int32_t ___tikiBlossomMin_26;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiBlossomMax
	int32_t ___tikiBlossomMax_27;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiBlossomChance
	int32_t ___tikiBlossomChance_28;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiVolcanoMin
	int32_t ___tikiVolcanoMin_29;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiVolcanoMax
	int32_t ___tikiVolcanoMax_30;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiVolcanoChance
	int32_t ___tikiVolcanoChance_31;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiFireSpawnPosTop
	int32_t ___tikiFireSpawnPosTop_32;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldData::tikiFireSpawnPosBot
	int32_t ___tikiFireSpawnPosBot_33;
	// System.Boolean GSN.Skill.Games.Tripeaks.PlayfieldData::tikiFire
	bool ___tikiFire_34;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::bonusCardChance
	float ___bonusCardChance_35;
	// GSN.Skill.Games.Tripeaks.PlayfieldData/CardData[] GSN.Skill.Games.Tripeaks.PlayfieldData::cardData
	CardDataU5BU5D_t1346892751* ___cardData_36;
	// GSN.Skill.Games.Tripeaks.PlayfieldData/CardData[] GSN.Skill.Games.Tripeaks.PlayfieldData::stockData
	CardDataU5BU5D_t1346892751* ___stockData_37;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::targetWinRate
	float ___targetWinRate_38;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::simWinRate
	float ___simWinRate_39;
	// System.Boolean GSN.Skill.Games.Tripeaks.PlayfieldData::lockStockCardCount
	bool ___lockStockCardCount_40;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::targetMargin
	float ___targetMargin_41;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::simMargin
	float ___simMargin_42;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldData::simMarginNew
	float ___simMarginNew_43;

public:
	inline static int32_t get_offset_of_ID_2() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___ID_2)); }
	inline int32_t get_ID_2() const { return ___ID_2; }
	inline int32_t* get_address_of_ID_2() { return &___ID_2; }
	inline void set_ID_2(int32_t value)
	{
		___ID_2 = value;
	}

	inline static int32_t get_offset_of_levelName_3() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___levelName_3)); }
	inline String_t* get_levelName_3() const { return ___levelName_3; }
	inline String_t** get_address_of_levelName_3() { return &___levelName_3; }
	inline void set_levelName_3(String_t* value)
	{
		___levelName_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelName_3, value);
	}

	inline static int32_t get_offset_of_entryCost_4() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___entryCost_4)); }
	inline int32_t get_entryCost_4() const { return ___entryCost_4; }
	inline int32_t* get_address_of_entryCost_4() { return &___entryCost_4; }
	inline void set_entryCost_4(int32_t value)
	{
		___entryCost_4 = value;
	}

	inline static int32_t get_offset_of_timeStarRequirement_5() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___timeStarRequirement_5)); }
	inline int32_t get_timeStarRequirement_5() const { return ___timeStarRequirement_5; }
	inline int32_t* get_address_of_timeStarRequirement_5() { return &___timeStarRequirement_5; }
	inline void set_timeStarRequirement_5(int32_t value)
	{
		___timeStarRequirement_5 = value;
	}

	inline static int32_t get_offset_of_stockCardCount_6() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___stockCardCount_6)); }
	inline int32_t get_stockCardCount_6() const { return ___stockCardCount_6; }
	inline int32_t* get_address_of_stockCardCount_6() { return &___stockCardCount_6; }
	inline void set_stockCardCount_6(int32_t value)
	{
		___stockCardCount_6 = value;
	}

	inline static int32_t get_offset_of_musicNames_7() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___musicNames_7)); }
	inline StringU5BU5D_t1642385972* get_musicNames_7() const { return ___musicNames_7; }
	inline StringU5BU5D_t1642385972** get_address_of_musicNames_7() { return &___musicNames_7; }
	inline void set_musicNames_7(StringU5BU5D_t1642385972* value)
	{
		___musicNames_7 = value;
		Il2CppCodeGenWriteBarrier(&___musicNames_7, value);
	}

	inline static int32_t get_offset_of_moreStockCardsCountAdjustment_8() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___moreStockCardsCountAdjustment_8)); }
	inline int32_t get_moreStockCardsCountAdjustment_8() const { return ___moreStockCardsCountAdjustment_8; }
	inline int32_t* get_address_of_moreStockCardsCountAdjustment_8() { return &___moreStockCardsCountAdjustment_8; }
	inline void set_moreStockCardsCountAdjustment_8(int32_t value)
	{
		___moreStockCardsCountAdjustment_8 = value;
	}

	inline static int32_t get_offset_of_moreStocksBaseMultiOfLevelCost_9() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___moreStocksBaseMultiOfLevelCost_9)); }
	inline float get_moreStocksBaseMultiOfLevelCost_9() const { return ___moreStocksBaseMultiOfLevelCost_9; }
	inline float* get_address_of_moreStocksBaseMultiOfLevelCost_9() { return &___moreStocksBaseMultiOfLevelCost_9; }
	inline void set_moreStocksBaseMultiOfLevelCost_9(float value)
	{
		___moreStocksBaseMultiOfLevelCost_9 = value;
	}

	inline static int32_t get_offset_of_moreStocksAddMultiOfLevelCost_10() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___moreStocksAddMultiOfLevelCost_10)); }
	inline float get_moreStocksAddMultiOfLevelCost_10() const { return ___moreStocksAddMultiOfLevelCost_10; }
	inline float* get_address_of_moreStocksAddMultiOfLevelCost_10() { return &___moreStocksAddMultiOfLevelCost_10; }
	inline void set_moreStocksAddMultiOfLevelCost_10(float value)
	{
		___moreStocksAddMultiOfLevelCost_10 = value;
	}

	inline static int32_t get_offset_of_smartMoneyPercentage_11() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___smartMoneyPercentage_11)); }
	inline float get_smartMoneyPercentage_11() const { return ___smartMoneyPercentage_11; }
	inline float* get_address_of_smartMoneyPercentage_11() { return &___smartMoneyPercentage_11; }
	inline void set_smartMoneyPercentage_11(float value)
	{
		___smartMoneyPercentage_11 = value;
	}

	inline static int32_t get_offset_of_smartMoneyPowerCurve_12() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___smartMoneyPowerCurve_12)); }
	inline float get_smartMoneyPowerCurve_12() const { return ___smartMoneyPowerCurve_12; }
	inline float* get_address_of_smartMoneyPowerCurve_12() { return &___smartMoneyPowerCurve_12; }
	inline void set_smartMoneyPowerCurve_12(float value)
	{
		___smartMoneyPowerCurve_12 = value;
	}

	inline static int32_t get_offset_of_undoBaseMultiOfLevelCost_13() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___undoBaseMultiOfLevelCost_13)); }
	inline float get_undoBaseMultiOfLevelCost_13() const { return ___undoBaseMultiOfLevelCost_13; }
	inline float* get_address_of_undoBaseMultiOfLevelCost_13() { return &___undoBaseMultiOfLevelCost_13; }
	inline void set_undoBaseMultiOfLevelCost_13(float value)
	{
		___undoBaseMultiOfLevelCost_13 = value;
	}

	inline static int32_t get_offset_of_undoAddMultiOfLevelCost_14() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___undoAddMultiOfLevelCost_14)); }
	inline float get_undoAddMultiOfLevelCost_14() const { return ___undoAddMultiOfLevelCost_14; }
	inline float* get_address_of_undoAddMultiOfLevelCost_14() { return &___undoAddMultiOfLevelCost_14; }
	inline void set_undoAddMultiOfLevelCost_14(float value)
	{
		___undoAddMultiOfLevelCost_14 = value;
	}

	inline static int32_t get_offset_of_wildBaseMultiOfLevelCost_15() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___wildBaseMultiOfLevelCost_15)); }
	inline float get_wildBaseMultiOfLevelCost_15() const { return ___wildBaseMultiOfLevelCost_15; }
	inline float* get_address_of_wildBaseMultiOfLevelCost_15() { return &___wildBaseMultiOfLevelCost_15; }
	inline void set_wildBaseMultiOfLevelCost_15(float value)
	{
		___wildBaseMultiOfLevelCost_15 = value;
	}

	inline static int32_t get_offset_of_wildAddMultiOfLevelCost_16() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___wildAddMultiOfLevelCost_16)); }
	inline float get_wildAddMultiOfLevelCost_16() const { return ___wildAddMultiOfLevelCost_16; }
	inline float* get_address_of_wildAddMultiOfLevelCost_16() { return &___wildAddMultiOfLevelCost_16; }
	inline void set_wildAddMultiOfLevelCost_16(float value)
	{
		___wildAddMultiOfLevelCost_16 = value;
	}

	inline static int32_t get_offset_of_tikiRedMin_17() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiRedMin_17)); }
	inline int32_t get_tikiRedMin_17() const { return ___tikiRedMin_17; }
	inline int32_t* get_address_of_tikiRedMin_17() { return &___tikiRedMin_17; }
	inline void set_tikiRedMin_17(int32_t value)
	{
		___tikiRedMin_17 = value;
	}

	inline static int32_t get_offset_of_tikiRedMax_18() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiRedMax_18)); }
	inline int32_t get_tikiRedMax_18() const { return ___tikiRedMax_18; }
	inline int32_t* get_address_of_tikiRedMax_18() { return &___tikiRedMax_18; }
	inline void set_tikiRedMax_18(int32_t value)
	{
		___tikiRedMax_18 = value;
	}

	inline static int32_t get_offset_of_tikiRedChance_19() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiRedChance_19)); }
	inline int32_t get_tikiRedChance_19() const { return ___tikiRedChance_19; }
	inline int32_t* get_address_of_tikiRedChance_19() { return &___tikiRedChance_19; }
	inline void set_tikiRedChance_19(int32_t value)
	{
		___tikiRedChance_19 = value;
	}

	inline static int32_t get_offset_of_tikiBlackMin_20() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiBlackMin_20)); }
	inline int32_t get_tikiBlackMin_20() const { return ___tikiBlackMin_20; }
	inline int32_t* get_address_of_tikiBlackMin_20() { return &___tikiBlackMin_20; }
	inline void set_tikiBlackMin_20(int32_t value)
	{
		___tikiBlackMin_20 = value;
	}

	inline static int32_t get_offset_of_tikiBlackMax_21() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiBlackMax_21)); }
	inline int32_t get_tikiBlackMax_21() const { return ___tikiBlackMax_21; }
	inline int32_t* get_address_of_tikiBlackMax_21() { return &___tikiBlackMax_21; }
	inline void set_tikiBlackMax_21(int32_t value)
	{
		___tikiBlackMax_21 = value;
	}

	inline static int32_t get_offset_of_tikiBlackChance_22() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiBlackChance_22)); }
	inline int32_t get_tikiBlackChance_22() const { return ___tikiBlackChance_22; }
	inline int32_t* get_address_of_tikiBlackChance_22() { return &___tikiBlackChance_22; }
	inline void set_tikiBlackChance_22(int32_t value)
	{
		___tikiBlackChance_22 = value;
	}

	inline static int32_t get_offset_of_tikiGoldenMin_23() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiGoldenMin_23)); }
	inline int32_t get_tikiGoldenMin_23() const { return ___tikiGoldenMin_23; }
	inline int32_t* get_address_of_tikiGoldenMin_23() { return &___tikiGoldenMin_23; }
	inline void set_tikiGoldenMin_23(int32_t value)
	{
		___tikiGoldenMin_23 = value;
	}

	inline static int32_t get_offset_of_tikiGoldenMax_24() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiGoldenMax_24)); }
	inline int32_t get_tikiGoldenMax_24() const { return ___tikiGoldenMax_24; }
	inline int32_t* get_address_of_tikiGoldenMax_24() { return &___tikiGoldenMax_24; }
	inline void set_tikiGoldenMax_24(int32_t value)
	{
		___tikiGoldenMax_24 = value;
	}

	inline static int32_t get_offset_of_tikiGoldenChance_25() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiGoldenChance_25)); }
	inline int32_t get_tikiGoldenChance_25() const { return ___tikiGoldenChance_25; }
	inline int32_t* get_address_of_tikiGoldenChance_25() { return &___tikiGoldenChance_25; }
	inline void set_tikiGoldenChance_25(int32_t value)
	{
		___tikiGoldenChance_25 = value;
	}

	inline static int32_t get_offset_of_tikiBlossomMin_26() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiBlossomMin_26)); }
	inline int32_t get_tikiBlossomMin_26() const { return ___tikiBlossomMin_26; }
	inline int32_t* get_address_of_tikiBlossomMin_26() { return &___tikiBlossomMin_26; }
	inline void set_tikiBlossomMin_26(int32_t value)
	{
		___tikiBlossomMin_26 = value;
	}

	inline static int32_t get_offset_of_tikiBlossomMax_27() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiBlossomMax_27)); }
	inline int32_t get_tikiBlossomMax_27() const { return ___tikiBlossomMax_27; }
	inline int32_t* get_address_of_tikiBlossomMax_27() { return &___tikiBlossomMax_27; }
	inline void set_tikiBlossomMax_27(int32_t value)
	{
		___tikiBlossomMax_27 = value;
	}

	inline static int32_t get_offset_of_tikiBlossomChance_28() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiBlossomChance_28)); }
	inline int32_t get_tikiBlossomChance_28() const { return ___tikiBlossomChance_28; }
	inline int32_t* get_address_of_tikiBlossomChance_28() { return &___tikiBlossomChance_28; }
	inline void set_tikiBlossomChance_28(int32_t value)
	{
		___tikiBlossomChance_28 = value;
	}

	inline static int32_t get_offset_of_tikiVolcanoMin_29() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiVolcanoMin_29)); }
	inline int32_t get_tikiVolcanoMin_29() const { return ___tikiVolcanoMin_29; }
	inline int32_t* get_address_of_tikiVolcanoMin_29() { return &___tikiVolcanoMin_29; }
	inline void set_tikiVolcanoMin_29(int32_t value)
	{
		___tikiVolcanoMin_29 = value;
	}

	inline static int32_t get_offset_of_tikiVolcanoMax_30() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiVolcanoMax_30)); }
	inline int32_t get_tikiVolcanoMax_30() const { return ___tikiVolcanoMax_30; }
	inline int32_t* get_address_of_tikiVolcanoMax_30() { return &___tikiVolcanoMax_30; }
	inline void set_tikiVolcanoMax_30(int32_t value)
	{
		___tikiVolcanoMax_30 = value;
	}

	inline static int32_t get_offset_of_tikiVolcanoChance_31() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiVolcanoChance_31)); }
	inline int32_t get_tikiVolcanoChance_31() const { return ___tikiVolcanoChance_31; }
	inline int32_t* get_address_of_tikiVolcanoChance_31() { return &___tikiVolcanoChance_31; }
	inline void set_tikiVolcanoChance_31(int32_t value)
	{
		___tikiVolcanoChance_31 = value;
	}

	inline static int32_t get_offset_of_tikiFireSpawnPosTop_32() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiFireSpawnPosTop_32)); }
	inline int32_t get_tikiFireSpawnPosTop_32() const { return ___tikiFireSpawnPosTop_32; }
	inline int32_t* get_address_of_tikiFireSpawnPosTop_32() { return &___tikiFireSpawnPosTop_32; }
	inline void set_tikiFireSpawnPosTop_32(int32_t value)
	{
		___tikiFireSpawnPosTop_32 = value;
	}

	inline static int32_t get_offset_of_tikiFireSpawnPosBot_33() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiFireSpawnPosBot_33)); }
	inline int32_t get_tikiFireSpawnPosBot_33() const { return ___tikiFireSpawnPosBot_33; }
	inline int32_t* get_address_of_tikiFireSpawnPosBot_33() { return &___tikiFireSpawnPosBot_33; }
	inline void set_tikiFireSpawnPosBot_33(int32_t value)
	{
		___tikiFireSpawnPosBot_33 = value;
	}

	inline static int32_t get_offset_of_tikiFire_34() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___tikiFire_34)); }
	inline bool get_tikiFire_34() const { return ___tikiFire_34; }
	inline bool* get_address_of_tikiFire_34() { return &___tikiFire_34; }
	inline void set_tikiFire_34(bool value)
	{
		___tikiFire_34 = value;
	}

	inline static int32_t get_offset_of_bonusCardChance_35() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___bonusCardChance_35)); }
	inline float get_bonusCardChance_35() const { return ___bonusCardChance_35; }
	inline float* get_address_of_bonusCardChance_35() { return &___bonusCardChance_35; }
	inline void set_bonusCardChance_35(float value)
	{
		___bonusCardChance_35 = value;
	}

	inline static int32_t get_offset_of_cardData_36() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___cardData_36)); }
	inline CardDataU5BU5D_t1346892751* get_cardData_36() const { return ___cardData_36; }
	inline CardDataU5BU5D_t1346892751** get_address_of_cardData_36() { return &___cardData_36; }
	inline void set_cardData_36(CardDataU5BU5D_t1346892751* value)
	{
		___cardData_36 = value;
		Il2CppCodeGenWriteBarrier(&___cardData_36, value);
	}

	inline static int32_t get_offset_of_stockData_37() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___stockData_37)); }
	inline CardDataU5BU5D_t1346892751* get_stockData_37() const { return ___stockData_37; }
	inline CardDataU5BU5D_t1346892751** get_address_of_stockData_37() { return &___stockData_37; }
	inline void set_stockData_37(CardDataU5BU5D_t1346892751* value)
	{
		___stockData_37 = value;
		Il2CppCodeGenWriteBarrier(&___stockData_37, value);
	}

	inline static int32_t get_offset_of_targetWinRate_38() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___targetWinRate_38)); }
	inline float get_targetWinRate_38() const { return ___targetWinRate_38; }
	inline float* get_address_of_targetWinRate_38() { return &___targetWinRate_38; }
	inline void set_targetWinRate_38(float value)
	{
		___targetWinRate_38 = value;
	}

	inline static int32_t get_offset_of_simWinRate_39() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___simWinRate_39)); }
	inline float get_simWinRate_39() const { return ___simWinRate_39; }
	inline float* get_address_of_simWinRate_39() { return &___simWinRate_39; }
	inline void set_simWinRate_39(float value)
	{
		___simWinRate_39 = value;
	}

	inline static int32_t get_offset_of_lockStockCardCount_40() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___lockStockCardCount_40)); }
	inline bool get_lockStockCardCount_40() const { return ___lockStockCardCount_40; }
	inline bool* get_address_of_lockStockCardCount_40() { return &___lockStockCardCount_40; }
	inline void set_lockStockCardCount_40(bool value)
	{
		___lockStockCardCount_40 = value;
	}

	inline static int32_t get_offset_of_targetMargin_41() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___targetMargin_41)); }
	inline float get_targetMargin_41() const { return ___targetMargin_41; }
	inline float* get_address_of_targetMargin_41() { return &___targetMargin_41; }
	inline void set_targetMargin_41(float value)
	{
		___targetMargin_41 = value;
	}

	inline static int32_t get_offset_of_simMargin_42() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___simMargin_42)); }
	inline float get_simMargin_42() const { return ___simMargin_42; }
	inline float* get_address_of_simMargin_42() { return &___simMargin_42; }
	inline void set_simMargin_42(float value)
	{
		___simMargin_42 = value;
	}

	inline static int32_t get_offset_of_simMarginNew_43() { return static_cast<int32_t>(offsetof(PlayfieldData_t2127658700, ___simMarginNew_43)); }
	inline float get_simMarginNew_43() const { return ___simMarginNew_43; }
	inline float* get_address_of_simMarginNew_43() { return &___simMarginNew_43; }
	inline void set_simMarginNew_43(float value)
	{
		___simMarginNew_43 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
