#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Client.Game.ControllerBase
struct ControllerBase_t4247623737;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// GSN.Skill.Games.Common.Client.Game.IViewMode
struct IViewMode_t1215208523;
// GSN.Skill.Games.Common.Utils.GroupLoadingData
struct GroupLoadingData_t3963712907;
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Si1272875047.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Game.ViewBase
struct  ViewBase_t3608972958  : public SingletonMonoBehaviour_1_t1272875047
{
public:
	// GSN.Skill.Games.Common.Client.Game.ControllerBase GSN.Skill.Games.Common.Client.Game.ViewBase::<controller>k__BackingField
	ControllerBase_t4247623737 * ___U3CcontrollerU3Ek__BackingField_3;
	// System.Boolean GSN.Skill.Games.Common.Client.Game.ViewBase::<InReplay>k__BackingField
	bool ___U3CInReplayU3Ek__BackingField_4;
	// System.Boolean GSN.Skill.Games.Common.Client.Game.ViewBase::_preloadComplete
	bool ____preloadComplete_5;
	// System.Boolean GSN.Skill.Games.Common.Client.Game.ViewBase::gameStarted
	bool ___gameStarted_6;
	// System.Boolean GSN.Skill.Games.Common.Client.Game.ViewBase::_ignoreUserInput
	bool ____ignoreUserInput_7;
	// System.Collections.Generic.List`1<System.String> GSN.Skill.Games.Common.Client.Game.ViewBase::_assetBundleNames
	List_1_t1398341365 * ____assetBundleNames_8;
	// GSN.Skill.Games.Common.Client.Game.IViewMode GSN.Skill.Games.Common.Client.Game.ViewBase::_viewMode
	Il2CppObject * ____viewMode_9;
	// GSN.Skill.Games.Common.Utils.GroupLoadingData GSN.Skill.Games.Common.Client.Game.ViewBase::_preloadLoadingData
	GroupLoadingData_t3963712907 * ____preloadLoadingData_10;

public:
	inline static int32_t get_offset_of_U3CcontrollerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ViewBase_t3608972958, ___U3CcontrollerU3Ek__BackingField_3)); }
	inline ControllerBase_t4247623737 * get_U3CcontrollerU3Ek__BackingField_3() const { return ___U3CcontrollerU3Ek__BackingField_3; }
	inline ControllerBase_t4247623737 ** get_address_of_U3CcontrollerU3Ek__BackingField_3() { return &___U3CcontrollerU3Ek__BackingField_3; }
	inline void set_U3CcontrollerU3Ek__BackingField_3(ControllerBase_t4247623737 * value)
	{
		___U3CcontrollerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcontrollerU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CInReplayU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ViewBase_t3608972958, ___U3CInReplayU3Ek__BackingField_4)); }
	inline bool get_U3CInReplayU3Ek__BackingField_4() const { return ___U3CInReplayU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CInReplayU3Ek__BackingField_4() { return &___U3CInReplayU3Ek__BackingField_4; }
	inline void set_U3CInReplayU3Ek__BackingField_4(bool value)
	{
		___U3CInReplayU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__preloadComplete_5() { return static_cast<int32_t>(offsetof(ViewBase_t3608972958, ____preloadComplete_5)); }
	inline bool get__preloadComplete_5() const { return ____preloadComplete_5; }
	inline bool* get_address_of__preloadComplete_5() { return &____preloadComplete_5; }
	inline void set__preloadComplete_5(bool value)
	{
		____preloadComplete_5 = value;
	}

	inline static int32_t get_offset_of_gameStarted_6() { return static_cast<int32_t>(offsetof(ViewBase_t3608972958, ___gameStarted_6)); }
	inline bool get_gameStarted_6() const { return ___gameStarted_6; }
	inline bool* get_address_of_gameStarted_6() { return &___gameStarted_6; }
	inline void set_gameStarted_6(bool value)
	{
		___gameStarted_6 = value;
	}

	inline static int32_t get_offset_of__ignoreUserInput_7() { return static_cast<int32_t>(offsetof(ViewBase_t3608972958, ____ignoreUserInput_7)); }
	inline bool get__ignoreUserInput_7() const { return ____ignoreUserInput_7; }
	inline bool* get_address_of__ignoreUserInput_7() { return &____ignoreUserInput_7; }
	inline void set__ignoreUserInput_7(bool value)
	{
		____ignoreUserInput_7 = value;
	}

	inline static int32_t get_offset_of__assetBundleNames_8() { return static_cast<int32_t>(offsetof(ViewBase_t3608972958, ____assetBundleNames_8)); }
	inline List_1_t1398341365 * get__assetBundleNames_8() const { return ____assetBundleNames_8; }
	inline List_1_t1398341365 ** get_address_of__assetBundleNames_8() { return &____assetBundleNames_8; }
	inline void set__assetBundleNames_8(List_1_t1398341365 * value)
	{
		____assetBundleNames_8 = value;
		Il2CppCodeGenWriteBarrier(&____assetBundleNames_8, value);
	}

	inline static int32_t get_offset_of__viewMode_9() { return static_cast<int32_t>(offsetof(ViewBase_t3608972958, ____viewMode_9)); }
	inline Il2CppObject * get__viewMode_9() const { return ____viewMode_9; }
	inline Il2CppObject ** get_address_of__viewMode_9() { return &____viewMode_9; }
	inline void set__viewMode_9(Il2CppObject * value)
	{
		____viewMode_9 = value;
		Il2CppCodeGenWriteBarrier(&____viewMode_9, value);
	}

	inline static int32_t get_offset_of__preloadLoadingData_10() { return static_cast<int32_t>(offsetof(ViewBase_t3608972958, ____preloadLoadingData_10)); }
	inline GroupLoadingData_t3963712907 * get__preloadLoadingData_10() const { return ____preloadLoadingData_10; }
	inline GroupLoadingData_t3963712907 ** get_address_of__preloadLoadingData_10() { return &____preloadLoadingData_10; }
	inline void set__preloadLoadingData_10(GroupLoadingData_t3963712907 * value)
	{
		____preloadLoadingData_10 = value;
		Il2CppCodeGenWriteBarrier(&____preloadLoadingData_10, value);
	}
};

struct ViewBase_t3608972958_StaticFields
{
public:
	// System.Action GSN.Skill.Games.Common.Client.Game.ViewBase::<>f__mg$cache0
	Action_t3226471752 * ___U3CU3Ef__mgU24cache0_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_11() { return static_cast<int32_t>(offsetof(ViewBase_t3608972958_StaticFields, ___U3CU3Ef__mgU24cache0_11)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache0_11() const { return ___U3CU3Ef__mgU24cache0_11; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache0_11() { return &___U3CU3Ef__mgU24cache0_11; }
	inline void set_U3CU3Ef__mgU24cache0_11(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
