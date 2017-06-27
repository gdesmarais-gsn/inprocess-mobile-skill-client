#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Aux_Data[]
struct Aux_DataU5BU5D_t3548010659;
struct Aux_Data_t580742790_marshaled_pinvoke;
struct Aux_Data_t580742790_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor
struct  Flavor_t1431012079 
{
public:
	// System.String[] GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::prizeValue
	StringU5BU5D_t1642385972* ___prizeValue_0;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::multiplierEligible
	String_t* ___multiplierEligible_1;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::Fee
	String_t* ___Fee_2;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::FlavorID
	String_t* ___FlavorID_3;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::reward_points
	String_t* ___reward_points_4;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::FlavorDescription
	String_t* ___FlavorDescription_5;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::FlavorParentTemplateID
	String_t* ___FlavorParentTemplateID_6;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::FlavorTypeID
	String_t* ___FlavorTypeID_7;
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::Permissions
	int32_t ___Permissions_8;
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::min_cash_games_required
	int32_t ___min_cash_games_required_9;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::FlavorName
	String_t* ___FlavorName_10;
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::max_cash_games_permitted
	int32_t ___max_cash_games_permitted_11;
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::max_game_specific_plays_permitted
	int32_t ___max_game_specific_plays_permitted_12;
	// System.Int32 GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::min_game_specific_plays_required
	int32_t ___min_game_specific_plays_required_13;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::GametypeName
	String_t* ___GametypeName_14;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::GameOCXObjectName
	String_t* ___GameOCXObjectName_15;
	// GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Aux_Data[] GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::aux_data
	Aux_DataU5BU5D_t3548010659* ___aux_data_16;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::FlavorType
	String_t* ___FlavorType_17;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::GametypeID
	String_t* ___GametypeID_18;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor::MaxPlayers
	String_t* ___MaxPlayers_19;

public:
	inline static int32_t get_offset_of_prizeValue_0() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___prizeValue_0)); }
	inline StringU5BU5D_t1642385972* get_prizeValue_0() const { return ___prizeValue_0; }
	inline StringU5BU5D_t1642385972** get_address_of_prizeValue_0() { return &___prizeValue_0; }
	inline void set_prizeValue_0(StringU5BU5D_t1642385972* value)
	{
		___prizeValue_0 = value;
		Il2CppCodeGenWriteBarrier(&___prizeValue_0, value);
	}

	inline static int32_t get_offset_of_multiplierEligible_1() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___multiplierEligible_1)); }
	inline String_t* get_multiplierEligible_1() const { return ___multiplierEligible_1; }
	inline String_t** get_address_of_multiplierEligible_1() { return &___multiplierEligible_1; }
	inline void set_multiplierEligible_1(String_t* value)
	{
		___multiplierEligible_1 = value;
		Il2CppCodeGenWriteBarrier(&___multiplierEligible_1, value);
	}

	inline static int32_t get_offset_of_Fee_2() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___Fee_2)); }
	inline String_t* get_Fee_2() const { return ___Fee_2; }
	inline String_t** get_address_of_Fee_2() { return &___Fee_2; }
	inline void set_Fee_2(String_t* value)
	{
		___Fee_2 = value;
		Il2CppCodeGenWriteBarrier(&___Fee_2, value);
	}

	inline static int32_t get_offset_of_FlavorID_3() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___FlavorID_3)); }
	inline String_t* get_FlavorID_3() const { return ___FlavorID_3; }
	inline String_t** get_address_of_FlavorID_3() { return &___FlavorID_3; }
	inline void set_FlavorID_3(String_t* value)
	{
		___FlavorID_3 = value;
		Il2CppCodeGenWriteBarrier(&___FlavorID_3, value);
	}

	inline static int32_t get_offset_of_reward_points_4() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___reward_points_4)); }
	inline String_t* get_reward_points_4() const { return ___reward_points_4; }
	inline String_t** get_address_of_reward_points_4() { return &___reward_points_4; }
	inline void set_reward_points_4(String_t* value)
	{
		___reward_points_4 = value;
		Il2CppCodeGenWriteBarrier(&___reward_points_4, value);
	}

	inline static int32_t get_offset_of_FlavorDescription_5() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___FlavorDescription_5)); }
	inline String_t* get_FlavorDescription_5() const { return ___FlavorDescription_5; }
	inline String_t** get_address_of_FlavorDescription_5() { return &___FlavorDescription_5; }
	inline void set_FlavorDescription_5(String_t* value)
	{
		___FlavorDescription_5 = value;
		Il2CppCodeGenWriteBarrier(&___FlavorDescription_5, value);
	}

	inline static int32_t get_offset_of_FlavorParentTemplateID_6() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___FlavorParentTemplateID_6)); }
	inline String_t* get_FlavorParentTemplateID_6() const { return ___FlavorParentTemplateID_6; }
	inline String_t** get_address_of_FlavorParentTemplateID_6() { return &___FlavorParentTemplateID_6; }
	inline void set_FlavorParentTemplateID_6(String_t* value)
	{
		___FlavorParentTemplateID_6 = value;
		Il2CppCodeGenWriteBarrier(&___FlavorParentTemplateID_6, value);
	}

	inline static int32_t get_offset_of_FlavorTypeID_7() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___FlavorTypeID_7)); }
	inline String_t* get_FlavorTypeID_7() const { return ___FlavorTypeID_7; }
	inline String_t** get_address_of_FlavorTypeID_7() { return &___FlavorTypeID_7; }
	inline void set_FlavorTypeID_7(String_t* value)
	{
		___FlavorTypeID_7 = value;
		Il2CppCodeGenWriteBarrier(&___FlavorTypeID_7, value);
	}

	inline static int32_t get_offset_of_Permissions_8() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___Permissions_8)); }
	inline int32_t get_Permissions_8() const { return ___Permissions_8; }
	inline int32_t* get_address_of_Permissions_8() { return &___Permissions_8; }
	inline void set_Permissions_8(int32_t value)
	{
		___Permissions_8 = value;
	}

	inline static int32_t get_offset_of_min_cash_games_required_9() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___min_cash_games_required_9)); }
	inline int32_t get_min_cash_games_required_9() const { return ___min_cash_games_required_9; }
	inline int32_t* get_address_of_min_cash_games_required_9() { return &___min_cash_games_required_9; }
	inline void set_min_cash_games_required_9(int32_t value)
	{
		___min_cash_games_required_9 = value;
	}

	inline static int32_t get_offset_of_FlavorName_10() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___FlavorName_10)); }
	inline String_t* get_FlavorName_10() const { return ___FlavorName_10; }
	inline String_t** get_address_of_FlavorName_10() { return &___FlavorName_10; }
	inline void set_FlavorName_10(String_t* value)
	{
		___FlavorName_10 = value;
		Il2CppCodeGenWriteBarrier(&___FlavorName_10, value);
	}

	inline static int32_t get_offset_of_max_cash_games_permitted_11() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___max_cash_games_permitted_11)); }
	inline int32_t get_max_cash_games_permitted_11() const { return ___max_cash_games_permitted_11; }
	inline int32_t* get_address_of_max_cash_games_permitted_11() { return &___max_cash_games_permitted_11; }
	inline void set_max_cash_games_permitted_11(int32_t value)
	{
		___max_cash_games_permitted_11 = value;
	}

	inline static int32_t get_offset_of_max_game_specific_plays_permitted_12() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___max_game_specific_plays_permitted_12)); }
	inline int32_t get_max_game_specific_plays_permitted_12() const { return ___max_game_specific_plays_permitted_12; }
	inline int32_t* get_address_of_max_game_specific_plays_permitted_12() { return &___max_game_specific_plays_permitted_12; }
	inline void set_max_game_specific_plays_permitted_12(int32_t value)
	{
		___max_game_specific_plays_permitted_12 = value;
	}

	inline static int32_t get_offset_of_min_game_specific_plays_required_13() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___min_game_specific_plays_required_13)); }
	inline int32_t get_min_game_specific_plays_required_13() const { return ___min_game_specific_plays_required_13; }
	inline int32_t* get_address_of_min_game_specific_plays_required_13() { return &___min_game_specific_plays_required_13; }
	inline void set_min_game_specific_plays_required_13(int32_t value)
	{
		___min_game_specific_plays_required_13 = value;
	}

	inline static int32_t get_offset_of_GametypeName_14() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___GametypeName_14)); }
	inline String_t* get_GametypeName_14() const { return ___GametypeName_14; }
	inline String_t** get_address_of_GametypeName_14() { return &___GametypeName_14; }
	inline void set_GametypeName_14(String_t* value)
	{
		___GametypeName_14 = value;
		Il2CppCodeGenWriteBarrier(&___GametypeName_14, value);
	}

	inline static int32_t get_offset_of_GameOCXObjectName_15() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___GameOCXObjectName_15)); }
	inline String_t* get_GameOCXObjectName_15() const { return ___GameOCXObjectName_15; }
	inline String_t** get_address_of_GameOCXObjectName_15() { return &___GameOCXObjectName_15; }
	inline void set_GameOCXObjectName_15(String_t* value)
	{
		___GameOCXObjectName_15 = value;
		Il2CppCodeGenWriteBarrier(&___GameOCXObjectName_15, value);
	}

	inline static int32_t get_offset_of_aux_data_16() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___aux_data_16)); }
	inline Aux_DataU5BU5D_t3548010659* get_aux_data_16() const { return ___aux_data_16; }
	inline Aux_DataU5BU5D_t3548010659** get_address_of_aux_data_16() { return &___aux_data_16; }
	inline void set_aux_data_16(Aux_DataU5BU5D_t3548010659* value)
	{
		___aux_data_16 = value;
		Il2CppCodeGenWriteBarrier(&___aux_data_16, value);
	}

	inline static int32_t get_offset_of_FlavorType_17() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___FlavorType_17)); }
	inline String_t* get_FlavorType_17() const { return ___FlavorType_17; }
	inline String_t** get_address_of_FlavorType_17() { return &___FlavorType_17; }
	inline void set_FlavorType_17(String_t* value)
	{
		___FlavorType_17 = value;
		Il2CppCodeGenWriteBarrier(&___FlavorType_17, value);
	}

	inline static int32_t get_offset_of_GametypeID_18() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___GametypeID_18)); }
	inline String_t* get_GametypeID_18() const { return ___GametypeID_18; }
	inline String_t** get_address_of_GametypeID_18() { return &___GametypeID_18; }
	inline void set_GametypeID_18(String_t* value)
	{
		___GametypeID_18 = value;
		Il2CppCodeGenWriteBarrier(&___GametypeID_18, value);
	}

	inline static int32_t get_offset_of_MaxPlayers_19() { return static_cast<int32_t>(offsetof(Flavor_t1431012079, ___MaxPlayers_19)); }
	inline String_t* get_MaxPlayers_19() const { return ___MaxPlayers_19; }
	inline String_t** get_address_of_MaxPlayers_19() { return &___MaxPlayers_19; }
	inline void set_MaxPlayers_19(String_t* value)
	{
		___MaxPlayers_19 = value;
		Il2CppCodeGenWriteBarrier(&___MaxPlayers_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor
struct Flavor_t1431012079_marshaled_pinvoke
{
	char** ___prizeValue_0;
	char* ___multiplierEligible_1;
	char* ___Fee_2;
	char* ___FlavorID_3;
	char* ___reward_points_4;
	char* ___FlavorDescription_5;
	char* ___FlavorParentTemplateID_6;
	char* ___FlavorTypeID_7;
	int32_t ___Permissions_8;
	int32_t ___min_cash_games_required_9;
	char* ___FlavorName_10;
	int32_t ___max_cash_games_permitted_11;
	int32_t ___max_game_specific_plays_permitted_12;
	int32_t ___min_game_specific_plays_required_13;
	char* ___GametypeName_14;
	char* ___GameOCXObjectName_15;
	Aux_Data_t580742790_marshaled_pinvoke* ___aux_data_16;
	char* ___FlavorType_17;
	char* ___GametypeID_18;
	char* ___MaxPlayers_19;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListFlavorsData/Flavor
struct Flavor_t1431012079_marshaled_com
{
	Il2CppChar** ___prizeValue_0;
	Il2CppChar* ___multiplierEligible_1;
	Il2CppChar* ___Fee_2;
	Il2CppChar* ___FlavorID_3;
	Il2CppChar* ___reward_points_4;
	Il2CppChar* ___FlavorDescription_5;
	Il2CppChar* ___FlavorParentTemplateID_6;
	Il2CppChar* ___FlavorTypeID_7;
	int32_t ___Permissions_8;
	int32_t ___min_cash_games_required_9;
	Il2CppChar* ___FlavorName_10;
	int32_t ___max_cash_games_permitted_11;
	int32_t ___max_game_specific_plays_permitted_12;
	int32_t ___min_game_specific_plays_required_13;
	Il2CppChar* ___GametypeName_14;
	Il2CppChar* ___GameOCXObjectName_15;
	Aux_Data_t580742790_marshaled_com* ___aux_data_16;
	Il2CppChar* ___FlavorType_17;
	Il2CppChar* ___GametypeID_18;
	Il2CppChar* ___MaxPlayers_19;
};
