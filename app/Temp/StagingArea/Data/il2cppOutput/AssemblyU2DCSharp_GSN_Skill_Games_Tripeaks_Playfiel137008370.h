#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Tripeaks.PlayfieldData[]
struct PlayfieldDataU5BU5D_t850169989;
// GSN.Skill.Games.Tripeaks.PlayfieldDataDB/SmartEntryCostConfig
struct SmartEntryCostConfig_t1863879830;
// System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Games.Tripeaks.PlayfieldData>
struct Dictionary_2_t4042437962;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.PlayfieldDataDB
struct  PlayfieldDataDB_t137008370  : public ScriptableObject_t1975622470
{
public:
	// GSN.Skill.Games.Tripeaks.PlayfieldData[] GSN.Skill.Games.Tripeaks.PlayfieldDataDB::playfieldDataDB
	PlayfieldDataU5BU5D_t850169989* ___playfieldDataDB_2;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldDataDB::globalMarginMod
	float ___globalMarginMod_3;
	// System.Boolean GSN.Skill.Games.Tripeaks.PlayfieldDataDB::useNewMarginSystem
	bool ___useNewMarginSystem_4;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldDataDB::streakBonusCurveMod
	float ___streakBonusCurveMod_5;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldDataDB::stockBonusCurveMod
	float ___stockBonusCurveMod_6;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldDataDB::maxStreakBonus
	float ___maxStreakBonus_7;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldDataDB::maxStockBonus
	float ___maxStockBonus_8;
	// System.Boolean GSN.Skill.Games.Tripeaks.PlayfieldDataDB::useDynamicMargin
	bool ___useDynamicMargin_9;
	// UnityEngine.Vector2 GSN.Skill.Games.Tripeaks.PlayfieldDataDB::dynamicMarginTarget
	Vector2_t2243707579  ___dynamicMarginTarget_10;
	// System.Single GSN.Skill.Games.Tripeaks.PlayfieldDataDB::minDynamicMargin
	float ___minDynamicMargin_11;
	// GSN.Skill.Games.Tripeaks.PlayfieldDataDB/SmartEntryCostConfig GSN.Skill.Games.Tripeaks.PlayfieldDataDB::payerSmartEntryConfig
	SmartEntryCostConfig_t1863879830 * ___payerSmartEntryConfig_18;
	// GSN.Skill.Games.Tripeaks.PlayfieldDataDB/SmartEntryCostConfig GSN.Skill.Games.Tripeaks.PlayfieldDataDB::nonPayerSmartEntryConfig
	SmartEntryCostConfig_t1863879830 * ___nonPayerSmartEntryConfig_19;
	// System.Collections.Generic.Dictionary`2<System.String,GSN.Skill.Games.Tripeaks.PlayfieldData> GSN.Skill.Games.Tripeaks.PlayfieldDataDB::dict
	Dictionary_2_t4042437962 * ___dict_20;

public:
	inline static int32_t get_offset_of_playfieldDataDB_2() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___playfieldDataDB_2)); }
	inline PlayfieldDataU5BU5D_t850169989* get_playfieldDataDB_2() const { return ___playfieldDataDB_2; }
	inline PlayfieldDataU5BU5D_t850169989** get_address_of_playfieldDataDB_2() { return &___playfieldDataDB_2; }
	inline void set_playfieldDataDB_2(PlayfieldDataU5BU5D_t850169989* value)
	{
		___playfieldDataDB_2 = value;
		Il2CppCodeGenWriteBarrier(&___playfieldDataDB_2, value);
	}

	inline static int32_t get_offset_of_globalMarginMod_3() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___globalMarginMod_3)); }
	inline float get_globalMarginMod_3() const { return ___globalMarginMod_3; }
	inline float* get_address_of_globalMarginMod_3() { return &___globalMarginMod_3; }
	inline void set_globalMarginMod_3(float value)
	{
		___globalMarginMod_3 = value;
	}

	inline static int32_t get_offset_of_useNewMarginSystem_4() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___useNewMarginSystem_4)); }
	inline bool get_useNewMarginSystem_4() const { return ___useNewMarginSystem_4; }
	inline bool* get_address_of_useNewMarginSystem_4() { return &___useNewMarginSystem_4; }
	inline void set_useNewMarginSystem_4(bool value)
	{
		___useNewMarginSystem_4 = value;
	}

	inline static int32_t get_offset_of_streakBonusCurveMod_5() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___streakBonusCurveMod_5)); }
	inline float get_streakBonusCurveMod_5() const { return ___streakBonusCurveMod_5; }
	inline float* get_address_of_streakBonusCurveMod_5() { return &___streakBonusCurveMod_5; }
	inline void set_streakBonusCurveMod_5(float value)
	{
		___streakBonusCurveMod_5 = value;
	}

	inline static int32_t get_offset_of_stockBonusCurveMod_6() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___stockBonusCurveMod_6)); }
	inline float get_stockBonusCurveMod_6() const { return ___stockBonusCurveMod_6; }
	inline float* get_address_of_stockBonusCurveMod_6() { return &___stockBonusCurveMod_6; }
	inline void set_stockBonusCurveMod_6(float value)
	{
		___stockBonusCurveMod_6 = value;
	}

	inline static int32_t get_offset_of_maxStreakBonus_7() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___maxStreakBonus_7)); }
	inline float get_maxStreakBonus_7() const { return ___maxStreakBonus_7; }
	inline float* get_address_of_maxStreakBonus_7() { return &___maxStreakBonus_7; }
	inline void set_maxStreakBonus_7(float value)
	{
		___maxStreakBonus_7 = value;
	}

	inline static int32_t get_offset_of_maxStockBonus_8() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___maxStockBonus_8)); }
	inline float get_maxStockBonus_8() const { return ___maxStockBonus_8; }
	inline float* get_address_of_maxStockBonus_8() { return &___maxStockBonus_8; }
	inline void set_maxStockBonus_8(float value)
	{
		___maxStockBonus_8 = value;
	}

	inline static int32_t get_offset_of_useDynamicMargin_9() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___useDynamicMargin_9)); }
	inline bool get_useDynamicMargin_9() const { return ___useDynamicMargin_9; }
	inline bool* get_address_of_useDynamicMargin_9() { return &___useDynamicMargin_9; }
	inline void set_useDynamicMargin_9(bool value)
	{
		___useDynamicMargin_9 = value;
	}

	inline static int32_t get_offset_of_dynamicMarginTarget_10() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___dynamicMarginTarget_10)); }
	inline Vector2_t2243707579  get_dynamicMarginTarget_10() const { return ___dynamicMarginTarget_10; }
	inline Vector2_t2243707579 * get_address_of_dynamicMarginTarget_10() { return &___dynamicMarginTarget_10; }
	inline void set_dynamicMarginTarget_10(Vector2_t2243707579  value)
	{
		___dynamicMarginTarget_10 = value;
	}

	inline static int32_t get_offset_of_minDynamicMargin_11() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___minDynamicMargin_11)); }
	inline float get_minDynamicMargin_11() const { return ___minDynamicMargin_11; }
	inline float* get_address_of_minDynamicMargin_11() { return &___minDynamicMargin_11; }
	inline void set_minDynamicMargin_11(float value)
	{
		___minDynamicMargin_11 = value;
	}

	inline static int32_t get_offset_of_payerSmartEntryConfig_18() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___payerSmartEntryConfig_18)); }
	inline SmartEntryCostConfig_t1863879830 * get_payerSmartEntryConfig_18() const { return ___payerSmartEntryConfig_18; }
	inline SmartEntryCostConfig_t1863879830 ** get_address_of_payerSmartEntryConfig_18() { return &___payerSmartEntryConfig_18; }
	inline void set_payerSmartEntryConfig_18(SmartEntryCostConfig_t1863879830 * value)
	{
		___payerSmartEntryConfig_18 = value;
		Il2CppCodeGenWriteBarrier(&___payerSmartEntryConfig_18, value);
	}

	inline static int32_t get_offset_of_nonPayerSmartEntryConfig_19() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___nonPayerSmartEntryConfig_19)); }
	inline SmartEntryCostConfig_t1863879830 * get_nonPayerSmartEntryConfig_19() const { return ___nonPayerSmartEntryConfig_19; }
	inline SmartEntryCostConfig_t1863879830 ** get_address_of_nonPayerSmartEntryConfig_19() { return &___nonPayerSmartEntryConfig_19; }
	inline void set_nonPayerSmartEntryConfig_19(SmartEntryCostConfig_t1863879830 * value)
	{
		___nonPayerSmartEntryConfig_19 = value;
		Il2CppCodeGenWriteBarrier(&___nonPayerSmartEntryConfig_19, value);
	}

	inline static int32_t get_offset_of_dict_20() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370, ___dict_20)); }
	inline Dictionary_2_t4042437962 * get_dict_20() const { return ___dict_20; }
	inline Dictionary_2_t4042437962 ** get_address_of_dict_20() { return &___dict_20; }
	inline void set_dict_20(Dictionary_2_t4042437962 * value)
	{
		___dict_20 = value;
		Il2CppCodeGenWriteBarrier(&___dict_20, value);
	}
};

struct PlayfieldDataDB_t137008370_StaticFields
{
public:
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldDataDB::NUM_TRACKS
	int32_t ___NUM_TRACKS_12;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldDataDB::MAIN_TRACK_ID
	int32_t ___MAIN_TRACK_ID_13;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldDataDB::EXPERT_TRACK_ID
	int32_t ___EXPERT_TRACK_ID_14;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldDataDB::GSN_TRACK_ID
	int32_t ___GSN_TRACK_ID_15;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldDataDB::BASH_TRACK_ID
	int32_t ___BASH_TRACK_ID_16;
	// System.Int32 GSN.Skill.Games.Tripeaks.PlayfieldDataDB::TIKISKIES_TRACK_ID
	int32_t ___TIKISKIES_TRACK_ID_17;

public:
	inline static int32_t get_offset_of_NUM_TRACKS_12() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370_StaticFields, ___NUM_TRACKS_12)); }
	inline int32_t get_NUM_TRACKS_12() const { return ___NUM_TRACKS_12; }
	inline int32_t* get_address_of_NUM_TRACKS_12() { return &___NUM_TRACKS_12; }
	inline void set_NUM_TRACKS_12(int32_t value)
	{
		___NUM_TRACKS_12 = value;
	}

	inline static int32_t get_offset_of_MAIN_TRACK_ID_13() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370_StaticFields, ___MAIN_TRACK_ID_13)); }
	inline int32_t get_MAIN_TRACK_ID_13() const { return ___MAIN_TRACK_ID_13; }
	inline int32_t* get_address_of_MAIN_TRACK_ID_13() { return &___MAIN_TRACK_ID_13; }
	inline void set_MAIN_TRACK_ID_13(int32_t value)
	{
		___MAIN_TRACK_ID_13 = value;
	}

	inline static int32_t get_offset_of_EXPERT_TRACK_ID_14() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370_StaticFields, ___EXPERT_TRACK_ID_14)); }
	inline int32_t get_EXPERT_TRACK_ID_14() const { return ___EXPERT_TRACK_ID_14; }
	inline int32_t* get_address_of_EXPERT_TRACK_ID_14() { return &___EXPERT_TRACK_ID_14; }
	inline void set_EXPERT_TRACK_ID_14(int32_t value)
	{
		___EXPERT_TRACK_ID_14 = value;
	}

	inline static int32_t get_offset_of_GSN_TRACK_ID_15() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370_StaticFields, ___GSN_TRACK_ID_15)); }
	inline int32_t get_GSN_TRACK_ID_15() const { return ___GSN_TRACK_ID_15; }
	inline int32_t* get_address_of_GSN_TRACK_ID_15() { return &___GSN_TRACK_ID_15; }
	inline void set_GSN_TRACK_ID_15(int32_t value)
	{
		___GSN_TRACK_ID_15 = value;
	}

	inline static int32_t get_offset_of_BASH_TRACK_ID_16() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370_StaticFields, ___BASH_TRACK_ID_16)); }
	inline int32_t get_BASH_TRACK_ID_16() const { return ___BASH_TRACK_ID_16; }
	inline int32_t* get_address_of_BASH_TRACK_ID_16() { return &___BASH_TRACK_ID_16; }
	inline void set_BASH_TRACK_ID_16(int32_t value)
	{
		___BASH_TRACK_ID_16 = value;
	}

	inline static int32_t get_offset_of_TIKISKIES_TRACK_ID_17() { return static_cast<int32_t>(offsetof(PlayfieldDataDB_t137008370_StaticFields, ___TIKISKIES_TRACK_ID_17)); }
	inline int32_t get_TIKISKIES_TRACK_ID_17() const { return ___TIKISKIES_TRACK_ID_17; }
	inline int32_t* get_address_of_TIKISKIES_TRACK_ID_17() { return &___TIKISKIES_TRACK_ID_17; }
	inline void set_TIKISKIES_TRACK_ID_17(int32_t value)
	{
		___TIKISKIES_TRACK_ID_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
