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
// GSN.Skill.Games.Common.Tasks.GsnScheduler
struct GsnScheduler_t1299811741;
// GSN.Skill.Games.Common.Tasks.GsnGameClockTask
struct GsnGameClockTask_t2111061105;
// GSN.Skill.Games.Common.Utils.GsnRandom
struct GsnRandom_t3573954395;
// GSN.Skill.Games.Common.Utils.GsnRational
struct GsnRational_t1635961804;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// GSN.Skill.Games.Common.Model.GameModelBase/ReportMetricDelegate
struct ReportMetricDelegate_t3706644810;
// GSN.Skill.Games.Common.Utils.IDataSafe
struct IDataSafe_t659114092;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Events_Ev3009527247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Model.GameModelBase
struct  GameModelBase_t2215752692  : public EventDispatcher_t3009527247
{
public:
	// System.Int32 GSN.Skill.Games.Common.Model.GameModelBase::_endGameReason
	int32_t ____endGameReason_5;
	// GSN.Skill.Games.Common.Tasks.GsnScheduler GSN.Skill.Games.Common.Model.GameModelBase::_scheduler
	GsnScheduler_t1299811741 * ____scheduler_14;
	// GSN.Skill.Games.Common.Tasks.GsnGameClockTask GSN.Skill.Games.Common.Model.GameModelBase::_clockTask
	GsnGameClockTask_t2111061105 * ____clockTask_15;
	// System.Int32 GSN.Skill.Games.Common.Model.GameModelBase::_gameTime
	int32_t ____gameTime_16;
	// System.Int64 GSN.Skill.Games.Common.Model.GameModelBase::_stateTimeOffsetMS
	int64_t ____stateTimeOffsetMS_17;
	// GSN.Skill.Games.Common.Utils.GsnRandom GSN.Skill.Games.Common.Model.GameModelBase::_rand
	GsnRandom_t3573954395 * ____rand_18;
	// GSN.Skill.Games.Common.Utils.GsnRandom GSN.Skill.Games.Common.Model.GameModelBase::_tiRand
	GsnRandom_t3573954395 * ____tiRand_19;
	// GSN.Skill.Games.Common.Utils.GsnRational GSN.Skill.Games.Common.Model.GameModelBase::_rfDuration
	GsnRational_t1635961804 * ____rfDuration_20;
	// System.String GSN.Skill.Games.Common.Model.GameModelBase::_version
	String_t* ____version_21;
	// System.Boolean GSN.Skill.Games.Common.Model.GameModelBase::_receiving
	bool ____receiving_22;
	// System.Boolean GSN.Skill.Games.Common.Model.GameModelBase::_updating
	bool ____updating_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GSN.Skill.Games.Common.Model.GameModelBase::_tweakables
	Dictionary_2_t3986656710 * ____tweakables_24;
	// System.Type[] GSN.Skill.Games.Common.Model.GameModelBase::inputTypeEnums
	TypeU5BU5D_t1664964607* ___inputTypeEnums_25;
	// GSN.Skill.Games.Common.Model.GameModelBase/ReportMetricDelegate GSN.Skill.Games.Common.Model.GameModelBase::ReportMetricHandler
	ReportMetricDelegate_t3706644810 * ___ReportMetricHandler_26;
	// System.String GSN.Skill.Games.Common.Model.GameModelBase::_dataPath
	String_t* ____dataPath_27;
	// GSN.Skill.Games.Common.Utils.IDataSafe GSN.Skill.Games.Common.Model.GameModelBase::_dataSafe
	Il2CppObject * ____dataSafe_28;
	// System.Int32 GSN.Skill.Games.Common.Model.GameModelBase::_mostRecentSessionTimeMS
	int32_t ____mostRecentSessionTimeMS_29;
	// System.Boolean GSN.Skill.Games.Common.Model.GameModelBase::_frozen
	bool ____frozen_30;

public:
	inline static int32_t get_offset_of__endGameReason_5() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____endGameReason_5)); }
	inline int32_t get__endGameReason_5() const { return ____endGameReason_5; }
	inline int32_t* get_address_of__endGameReason_5() { return &____endGameReason_5; }
	inline void set__endGameReason_5(int32_t value)
	{
		____endGameReason_5 = value;
	}

	inline static int32_t get_offset_of__scheduler_14() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____scheduler_14)); }
	inline GsnScheduler_t1299811741 * get__scheduler_14() const { return ____scheduler_14; }
	inline GsnScheduler_t1299811741 ** get_address_of__scheduler_14() { return &____scheduler_14; }
	inline void set__scheduler_14(GsnScheduler_t1299811741 * value)
	{
		____scheduler_14 = value;
		Il2CppCodeGenWriteBarrier(&____scheduler_14, value);
	}

	inline static int32_t get_offset_of__clockTask_15() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____clockTask_15)); }
	inline GsnGameClockTask_t2111061105 * get__clockTask_15() const { return ____clockTask_15; }
	inline GsnGameClockTask_t2111061105 ** get_address_of__clockTask_15() { return &____clockTask_15; }
	inline void set__clockTask_15(GsnGameClockTask_t2111061105 * value)
	{
		____clockTask_15 = value;
		Il2CppCodeGenWriteBarrier(&____clockTask_15, value);
	}

	inline static int32_t get_offset_of__gameTime_16() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____gameTime_16)); }
	inline int32_t get__gameTime_16() const { return ____gameTime_16; }
	inline int32_t* get_address_of__gameTime_16() { return &____gameTime_16; }
	inline void set__gameTime_16(int32_t value)
	{
		____gameTime_16 = value;
	}

	inline static int32_t get_offset_of__stateTimeOffsetMS_17() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____stateTimeOffsetMS_17)); }
	inline int64_t get__stateTimeOffsetMS_17() const { return ____stateTimeOffsetMS_17; }
	inline int64_t* get_address_of__stateTimeOffsetMS_17() { return &____stateTimeOffsetMS_17; }
	inline void set__stateTimeOffsetMS_17(int64_t value)
	{
		____stateTimeOffsetMS_17 = value;
	}

	inline static int32_t get_offset_of__rand_18() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____rand_18)); }
	inline GsnRandom_t3573954395 * get__rand_18() const { return ____rand_18; }
	inline GsnRandom_t3573954395 ** get_address_of__rand_18() { return &____rand_18; }
	inline void set__rand_18(GsnRandom_t3573954395 * value)
	{
		____rand_18 = value;
		Il2CppCodeGenWriteBarrier(&____rand_18, value);
	}

	inline static int32_t get_offset_of__tiRand_19() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____tiRand_19)); }
	inline GsnRandom_t3573954395 * get__tiRand_19() const { return ____tiRand_19; }
	inline GsnRandom_t3573954395 ** get_address_of__tiRand_19() { return &____tiRand_19; }
	inline void set__tiRand_19(GsnRandom_t3573954395 * value)
	{
		____tiRand_19 = value;
		Il2CppCodeGenWriteBarrier(&____tiRand_19, value);
	}

	inline static int32_t get_offset_of__rfDuration_20() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____rfDuration_20)); }
	inline GsnRational_t1635961804 * get__rfDuration_20() const { return ____rfDuration_20; }
	inline GsnRational_t1635961804 ** get_address_of__rfDuration_20() { return &____rfDuration_20; }
	inline void set__rfDuration_20(GsnRational_t1635961804 * value)
	{
		____rfDuration_20 = value;
		Il2CppCodeGenWriteBarrier(&____rfDuration_20, value);
	}

	inline static int32_t get_offset_of__version_21() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____version_21)); }
	inline String_t* get__version_21() const { return ____version_21; }
	inline String_t** get_address_of__version_21() { return &____version_21; }
	inline void set__version_21(String_t* value)
	{
		____version_21 = value;
		Il2CppCodeGenWriteBarrier(&____version_21, value);
	}

	inline static int32_t get_offset_of__receiving_22() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____receiving_22)); }
	inline bool get__receiving_22() const { return ____receiving_22; }
	inline bool* get_address_of__receiving_22() { return &____receiving_22; }
	inline void set__receiving_22(bool value)
	{
		____receiving_22 = value;
	}

	inline static int32_t get_offset_of__updating_23() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____updating_23)); }
	inline bool get__updating_23() const { return ____updating_23; }
	inline bool* get_address_of__updating_23() { return &____updating_23; }
	inline void set__updating_23(bool value)
	{
		____updating_23 = value;
	}

	inline static int32_t get_offset_of__tweakables_24() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____tweakables_24)); }
	inline Dictionary_2_t3986656710 * get__tweakables_24() const { return ____tweakables_24; }
	inline Dictionary_2_t3986656710 ** get_address_of__tweakables_24() { return &____tweakables_24; }
	inline void set__tweakables_24(Dictionary_2_t3986656710 * value)
	{
		____tweakables_24 = value;
		Il2CppCodeGenWriteBarrier(&____tweakables_24, value);
	}

	inline static int32_t get_offset_of_inputTypeEnums_25() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ___inputTypeEnums_25)); }
	inline TypeU5BU5D_t1664964607* get_inputTypeEnums_25() const { return ___inputTypeEnums_25; }
	inline TypeU5BU5D_t1664964607** get_address_of_inputTypeEnums_25() { return &___inputTypeEnums_25; }
	inline void set_inputTypeEnums_25(TypeU5BU5D_t1664964607* value)
	{
		___inputTypeEnums_25 = value;
		Il2CppCodeGenWriteBarrier(&___inputTypeEnums_25, value);
	}

	inline static int32_t get_offset_of_ReportMetricHandler_26() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ___ReportMetricHandler_26)); }
	inline ReportMetricDelegate_t3706644810 * get_ReportMetricHandler_26() const { return ___ReportMetricHandler_26; }
	inline ReportMetricDelegate_t3706644810 ** get_address_of_ReportMetricHandler_26() { return &___ReportMetricHandler_26; }
	inline void set_ReportMetricHandler_26(ReportMetricDelegate_t3706644810 * value)
	{
		___ReportMetricHandler_26 = value;
		Il2CppCodeGenWriteBarrier(&___ReportMetricHandler_26, value);
	}

	inline static int32_t get_offset_of__dataPath_27() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____dataPath_27)); }
	inline String_t* get__dataPath_27() const { return ____dataPath_27; }
	inline String_t** get_address_of__dataPath_27() { return &____dataPath_27; }
	inline void set__dataPath_27(String_t* value)
	{
		____dataPath_27 = value;
		Il2CppCodeGenWriteBarrier(&____dataPath_27, value);
	}

	inline static int32_t get_offset_of__dataSafe_28() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____dataSafe_28)); }
	inline Il2CppObject * get__dataSafe_28() const { return ____dataSafe_28; }
	inline Il2CppObject ** get_address_of__dataSafe_28() { return &____dataSafe_28; }
	inline void set__dataSafe_28(Il2CppObject * value)
	{
		____dataSafe_28 = value;
		Il2CppCodeGenWriteBarrier(&____dataSafe_28, value);
	}

	inline static int32_t get_offset_of__mostRecentSessionTimeMS_29() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____mostRecentSessionTimeMS_29)); }
	inline int32_t get__mostRecentSessionTimeMS_29() const { return ____mostRecentSessionTimeMS_29; }
	inline int32_t* get_address_of__mostRecentSessionTimeMS_29() { return &____mostRecentSessionTimeMS_29; }
	inline void set__mostRecentSessionTimeMS_29(int32_t value)
	{
		____mostRecentSessionTimeMS_29 = value;
	}

	inline static int32_t get_offset_of__frozen_30() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692, ____frozen_30)); }
	inline bool get__frozen_30() const { return ____frozen_30; }
	inline bool* get_address_of__frozen_30() { return &____frozen_30; }
	inline void set__frozen_30(bool value)
	{
		____frozen_30 = value;
	}
};

struct GameModelBase_t2215752692_StaticFields
{
public:
	// System.String GSN.Skill.Games.Common.Model.GameModelBase::SETUP_SEED
	String_t* ___SETUP_SEED_7;
	// System.String GSN.Skill.Games.Common.Model.GameModelBase::OPTIONS_TI_SEED
	String_t* ___OPTIONS_TI_SEED_9;
	// System.String GSN.Skill.Games.Common.Model.GameModelBase::OPTIONS_GAME_TIME
	String_t* ___OPTIONS_GAME_TIME_10;
	// System.String GSN.Skill.Games.Common.Model.GameModelBase::OPTIONS_GAME_TIP1
	String_t* ___OPTIONS_GAME_TIP1_11;
	// System.String GSN.Skill.Games.Common.Model.GameModelBase::OPTIONS_GAME_TIP2
	String_t* ___OPTIONS_GAME_TIP2_12;
	// System.String GSN.Skill.Games.Common.Model.GameModelBase::OPTIONS_GAME_TIP3
	String_t* ___OPTIONS_GAME_TIP3_13;

public:
	inline static int32_t get_offset_of_SETUP_SEED_7() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692_StaticFields, ___SETUP_SEED_7)); }
	inline String_t* get_SETUP_SEED_7() const { return ___SETUP_SEED_7; }
	inline String_t** get_address_of_SETUP_SEED_7() { return &___SETUP_SEED_7; }
	inline void set_SETUP_SEED_7(String_t* value)
	{
		___SETUP_SEED_7 = value;
		Il2CppCodeGenWriteBarrier(&___SETUP_SEED_7, value);
	}

	inline static int32_t get_offset_of_OPTIONS_TI_SEED_9() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692_StaticFields, ___OPTIONS_TI_SEED_9)); }
	inline String_t* get_OPTIONS_TI_SEED_9() const { return ___OPTIONS_TI_SEED_9; }
	inline String_t** get_address_of_OPTIONS_TI_SEED_9() { return &___OPTIONS_TI_SEED_9; }
	inline void set_OPTIONS_TI_SEED_9(String_t* value)
	{
		___OPTIONS_TI_SEED_9 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_TI_SEED_9, value);
	}

	inline static int32_t get_offset_of_OPTIONS_GAME_TIME_10() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692_StaticFields, ___OPTIONS_GAME_TIME_10)); }
	inline String_t* get_OPTIONS_GAME_TIME_10() const { return ___OPTIONS_GAME_TIME_10; }
	inline String_t** get_address_of_OPTIONS_GAME_TIME_10() { return &___OPTIONS_GAME_TIME_10; }
	inline void set_OPTIONS_GAME_TIME_10(String_t* value)
	{
		___OPTIONS_GAME_TIME_10 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_GAME_TIME_10, value);
	}

	inline static int32_t get_offset_of_OPTIONS_GAME_TIP1_11() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692_StaticFields, ___OPTIONS_GAME_TIP1_11)); }
	inline String_t* get_OPTIONS_GAME_TIP1_11() const { return ___OPTIONS_GAME_TIP1_11; }
	inline String_t** get_address_of_OPTIONS_GAME_TIP1_11() { return &___OPTIONS_GAME_TIP1_11; }
	inline void set_OPTIONS_GAME_TIP1_11(String_t* value)
	{
		___OPTIONS_GAME_TIP1_11 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_GAME_TIP1_11, value);
	}

	inline static int32_t get_offset_of_OPTIONS_GAME_TIP2_12() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692_StaticFields, ___OPTIONS_GAME_TIP2_12)); }
	inline String_t* get_OPTIONS_GAME_TIP2_12() const { return ___OPTIONS_GAME_TIP2_12; }
	inline String_t** get_address_of_OPTIONS_GAME_TIP2_12() { return &___OPTIONS_GAME_TIP2_12; }
	inline void set_OPTIONS_GAME_TIP2_12(String_t* value)
	{
		___OPTIONS_GAME_TIP2_12 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_GAME_TIP2_12, value);
	}

	inline static int32_t get_offset_of_OPTIONS_GAME_TIP3_13() { return static_cast<int32_t>(offsetof(GameModelBase_t2215752692_StaticFields, ___OPTIONS_GAME_TIP3_13)); }
	inline String_t* get_OPTIONS_GAME_TIP3_13() const { return ___OPTIONS_GAME_TIP3_13; }
	inline String_t** get_address_of_OPTIONS_GAME_TIP3_13() { return &___OPTIONS_GAME_TIP3_13; }
	inline void set_OPTIONS_GAME_TIP3_13(String_t* value)
	{
		___OPTIONS_GAME_TIP3_13 = value;
		Il2CppCodeGenWriteBarrier(&___OPTIONS_GAME_TIP3_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
