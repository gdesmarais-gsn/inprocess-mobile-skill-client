#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<GSN.Skill.Phoenix.Model.ScreenType,System.String>
struct Dictionary_2_t465126342;
// System.Collections.Generic.Dictionary`2<GSN.Skill.Phoenix.Model.PopupType,System.String>
struct Dictionary_2_t2797781420;
// GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/SendEventFunction
struct SendEventFunction_t4048650273;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GSN.Skill.Phoenix.Model.PopupType>
struct List_1_t2817432692;
// GSN.Skill.Phoenix.Model.Data.CurrentUser
struct CurrentUser_t3910039426;
// GSN.Skill.Phoenix.Model.Data.GameListData
struct GameListData_t2961126766;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Decimal724701077.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.Data.AnalyticsEvents
struct  AnalyticsEvents_t2028915351  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<GSN.Skill.Phoenix.Model.ScreenType,System.String> GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::BACKGROUND_SCREEN_LOOK_UP_TABLE
	Dictionary_2_t465126342 * ___BACKGROUND_SCREEN_LOOK_UP_TABLE_0;
	// System.Collections.Generic.Dictionary`2<GSN.Skill.Phoenix.Model.PopupType,System.String> GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::MODAL_NAME_LOOK_UP_TABLE
	Dictionary_2_t2797781420 * ___MODAL_NAME_LOOK_UP_TABLE_1;
	// GSN.Skill.Phoenix.Model.Data.AnalyticsEvents/SendEventFunction GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::__sendEventFunction
	SendEventFunction_t4048650273 * _____sendEventFunction_2;
	// System.Decimal GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::_rewardPointsBalance
	Decimal_t724701077  ____rewardPointsBalance_3;
	// System.String GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::_backgroundScreen
	String_t* ____backgroundScreen_4;
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.Model.PopupType> GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::_popups
	List_1_t2817432692 * ____popups_5;
	// System.String GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::_modalContent
	String_t* ____modalContent_6;
	// GSN.Skill.Phoenix.Model.Data.CurrentUser GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::_currentUser
	CurrentUser_t3910039426 * ____currentUser_7;
	// GSN.Skill.Phoenix.Model.Data.GameListData GSN.Skill.Phoenix.Model.Data.AnalyticsEvents::_gameList
	GameListData_t2961126766 * ____gameList_8;

public:
	inline static int32_t get_offset_of_BACKGROUND_SCREEN_LOOK_UP_TABLE_0() { return static_cast<int32_t>(offsetof(AnalyticsEvents_t2028915351, ___BACKGROUND_SCREEN_LOOK_UP_TABLE_0)); }
	inline Dictionary_2_t465126342 * get_BACKGROUND_SCREEN_LOOK_UP_TABLE_0() const { return ___BACKGROUND_SCREEN_LOOK_UP_TABLE_0; }
	inline Dictionary_2_t465126342 ** get_address_of_BACKGROUND_SCREEN_LOOK_UP_TABLE_0() { return &___BACKGROUND_SCREEN_LOOK_UP_TABLE_0; }
	inline void set_BACKGROUND_SCREEN_LOOK_UP_TABLE_0(Dictionary_2_t465126342 * value)
	{
		___BACKGROUND_SCREEN_LOOK_UP_TABLE_0 = value;
		Il2CppCodeGenWriteBarrier(&___BACKGROUND_SCREEN_LOOK_UP_TABLE_0, value);
	}

	inline static int32_t get_offset_of_MODAL_NAME_LOOK_UP_TABLE_1() { return static_cast<int32_t>(offsetof(AnalyticsEvents_t2028915351, ___MODAL_NAME_LOOK_UP_TABLE_1)); }
	inline Dictionary_2_t2797781420 * get_MODAL_NAME_LOOK_UP_TABLE_1() const { return ___MODAL_NAME_LOOK_UP_TABLE_1; }
	inline Dictionary_2_t2797781420 ** get_address_of_MODAL_NAME_LOOK_UP_TABLE_1() { return &___MODAL_NAME_LOOK_UP_TABLE_1; }
	inline void set_MODAL_NAME_LOOK_UP_TABLE_1(Dictionary_2_t2797781420 * value)
	{
		___MODAL_NAME_LOOK_UP_TABLE_1 = value;
		Il2CppCodeGenWriteBarrier(&___MODAL_NAME_LOOK_UP_TABLE_1, value);
	}

	inline static int32_t get_offset_of___sendEventFunction_2() { return static_cast<int32_t>(offsetof(AnalyticsEvents_t2028915351, _____sendEventFunction_2)); }
	inline SendEventFunction_t4048650273 * get___sendEventFunction_2() const { return _____sendEventFunction_2; }
	inline SendEventFunction_t4048650273 ** get_address_of___sendEventFunction_2() { return &_____sendEventFunction_2; }
	inline void set___sendEventFunction_2(SendEventFunction_t4048650273 * value)
	{
		_____sendEventFunction_2 = value;
		Il2CppCodeGenWriteBarrier(&_____sendEventFunction_2, value);
	}

	inline static int32_t get_offset_of__rewardPointsBalance_3() { return static_cast<int32_t>(offsetof(AnalyticsEvents_t2028915351, ____rewardPointsBalance_3)); }
	inline Decimal_t724701077  get__rewardPointsBalance_3() const { return ____rewardPointsBalance_3; }
	inline Decimal_t724701077 * get_address_of__rewardPointsBalance_3() { return &____rewardPointsBalance_3; }
	inline void set__rewardPointsBalance_3(Decimal_t724701077  value)
	{
		____rewardPointsBalance_3 = value;
	}

	inline static int32_t get_offset_of__backgroundScreen_4() { return static_cast<int32_t>(offsetof(AnalyticsEvents_t2028915351, ____backgroundScreen_4)); }
	inline String_t* get__backgroundScreen_4() const { return ____backgroundScreen_4; }
	inline String_t** get_address_of__backgroundScreen_4() { return &____backgroundScreen_4; }
	inline void set__backgroundScreen_4(String_t* value)
	{
		____backgroundScreen_4 = value;
		Il2CppCodeGenWriteBarrier(&____backgroundScreen_4, value);
	}

	inline static int32_t get_offset_of__popups_5() { return static_cast<int32_t>(offsetof(AnalyticsEvents_t2028915351, ____popups_5)); }
	inline List_1_t2817432692 * get__popups_5() const { return ____popups_5; }
	inline List_1_t2817432692 ** get_address_of__popups_5() { return &____popups_5; }
	inline void set__popups_5(List_1_t2817432692 * value)
	{
		____popups_5 = value;
		Il2CppCodeGenWriteBarrier(&____popups_5, value);
	}

	inline static int32_t get_offset_of__modalContent_6() { return static_cast<int32_t>(offsetof(AnalyticsEvents_t2028915351, ____modalContent_6)); }
	inline String_t* get__modalContent_6() const { return ____modalContent_6; }
	inline String_t** get_address_of__modalContent_6() { return &____modalContent_6; }
	inline void set__modalContent_6(String_t* value)
	{
		____modalContent_6 = value;
		Il2CppCodeGenWriteBarrier(&____modalContent_6, value);
	}

	inline static int32_t get_offset_of__currentUser_7() { return static_cast<int32_t>(offsetof(AnalyticsEvents_t2028915351, ____currentUser_7)); }
	inline CurrentUser_t3910039426 * get__currentUser_7() const { return ____currentUser_7; }
	inline CurrentUser_t3910039426 ** get_address_of__currentUser_7() { return &____currentUser_7; }
	inline void set__currentUser_7(CurrentUser_t3910039426 * value)
	{
		____currentUser_7 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_7, value);
	}

	inline static int32_t get_offset_of__gameList_8() { return static_cast<int32_t>(offsetof(AnalyticsEvents_t2028915351, ____gameList_8)); }
	inline GameListData_t2961126766 * get__gameList_8() const { return ____gameList_8; }
	inline GameListData_t2961126766 ** get_address_of__gameList_8() { return &____gameList_8; }
	inline void set__gameList_8(GameListData_t2961126766 * value)
	{
		____gameList_8 = value;
		Il2CppCodeGenWriteBarrier(&____gameList_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
