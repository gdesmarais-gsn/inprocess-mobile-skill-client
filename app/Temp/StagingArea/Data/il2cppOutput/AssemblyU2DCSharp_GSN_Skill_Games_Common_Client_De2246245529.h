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
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu
struct  ArenaDebugMenu_t2246245529  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Toggle GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_hideAllText
	Toggle_t3976754468 * ____hideAllText_3;
	// UnityEngine.UI.Toggle GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_mockSessionString
	Toggle_t3976754468 * ____mockSessionString_4;
	// UnityEngine.UI.Toggle GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_useLocalResources
	Toggle_t3976754468 * ____useLocalResources_5;
	// UnityEngine.UI.Toggle GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_useNet
	Toggle_t3976754468 * ____useNet_6;
	// UnityEngine.UI.Toggle GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_abortOnEndToggle
	Toggle_t3976754468 * ____abortOnEndToggle_7;
	// UnityEngine.UI.InputField GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_netUrl
	InputField_t1631627530 * ____netUrl_8;
	// UnityEngine.UI.Toggle GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_sendEmailWhenDone
	Toggle_t3976754468 * ____sendEmailWhenDone_9;
	// UnityEngine.UI.InputField GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_replayEmailTo
	InputField_t1631627530 * ____replayEmailTo_10;
	// UnityEngine.UI.InputField GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_replayEmailSmtpServer
	InputField_t1631627530 * ____replayEmailSmtpServer_11;
	// UnityEngine.UI.InputField GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_replayEmailSmtpPort
	InputField_t1631627530 * ____replayEmailSmtpPort_12;
	// UnityEngine.UI.InputField GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_replayEmailFromAddress
	InputField_t1631627530 * ____replayEmailFromAddress_13;
	// UnityEngine.UI.InputField GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_replayEmailFromPassword
	InputField_t1631627530 * ____replayEmailFromPassword_14;
	// System.IO.MemoryStream GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_replayStream
	MemoryStream_t743994179 * ____replayStream_15;
	// System.Boolean GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_playReplay
	bool ____playReplay_16;
	// UnityEngine.GameObject GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::optionsGO
	GameObject_t1756533147 * ___optionsGO_17;
	// System.String GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_gameSceneToLoad
	String_t* ____gameSceneToLoad_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_panels
	List_1_t1125654279 * ____panels_24;
	// UnityEngine.GameObject GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_easyPanel
	GameObject_t1756533147 * ____easyPanel_25;
	// System.String GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_easyPanelName
	String_t* ____easyPanelName_26;
	// System.Boolean GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_useRecordOverrides
	bool ____useRecordOverrides_27;
	// System.String GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_startRecordOverride
	String_t* ____startRecordOverride_28;
	// System.String GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::_joinRecordOverride
	String_t* ____joinRecordOverride_29;

public:
	inline static int32_t get_offset_of__hideAllText_3() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____hideAllText_3)); }
	inline Toggle_t3976754468 * get__hideAllText_3() const { return ____hideAllText_3; }
	inline Toggle_t3976754468 ** get_address_of__hideAllText_3() { return &____hideAllText_3; }
	inline void set__hideAllText_3(Toggle_t3976754468 * value)
	{
		____hideAllText_3 = value;
		Il2CppCodeGenWriteBarrier(&____hideAllText_3, value);
	}

	inline static int32_t get_offset_of__mockSessionString_4() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____mockSessionString_4)); }
	inline Toggle_t3976754468 * get__mockSessionString_4() const { return ____mockSessionString_4; }
	inline Toggle_t3976754468 ** get_address_of__mockSessionString_4() { return &____mockSessionString_4; }
	inline void set__mockSessionString_4(Toggle_t3976754468 * value)
	{
		____mockSessionString_4 = value;
		Il2CppCodeGenWriteBarrier(&____mockSessionString_4, value);
	}

	inline static int32_t get_offset_of__useLocalResources_5() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____useLocalResources_5)); }
	inline Toggle_t3976754468 * get__useLocalResources_5() const { return ____useLocalResources_5; }
	inline Toggle_t3976754468 ** get_address_of__useLocalResources_5() { return &____useLocalResources_5; }
	inline void set__useLocalResources_5(Toggle_t3976754468 * value)
	{
		____useLocalResources_5 = value;
		Il2CppCodeGenWriteBarrier(&____useLocalResources_5, value);
	}

	inline static int32_t get_offset_of__useNet_6() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____useNet_6)); }
	inline Toggle_t3976754468 * get__useNet_6() const { return ____useNet_6; }
	inline Toggle_t3976754468 ** get_address_of__useNet_6() { return &____useNet_6; }
	inline void set__useNet_6(Toggle_t3976754468 * value)
	{
		____useNet_6 = value;
		Il2CppCodeGenWriteBarrier(&____useNet_6, value);
	}

	inline static int32_t get_offset_of__abortOnEndToggle_7() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____abortOnEndToggle_7)); }
	inline Toggle_t3976754468 * get__abortOnEndToggle_7() const { return ____abortOnEndToggle_7; }
	inline Toggle_t3976754468 ** get_address_of__abortOnEndToggle_7() { return &____abortOnEndToggle_7; }
	inline void set__abortOnEndToggle_7(Toggle_t3976754468 * value)
	{
		____abortOnEndToggle_7 = value;
		Il2CppCodeGenWriteBarrier(&____abortOnEndToggle_7, value);
	}

	inline static int32_t get_offset_of__netUrl_8() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____netUrl_8)); }
	inline InputField_t1631627530 * get__netUrl_8() const { return ____netUrl_8; }
	inline InputField_t1631627530 ** get_address_of__netUrl_8() { return &____netUrl_8; }
	inline void set__netUrl_8(InputField_t1631627530 * value)
	{
		____netUrl_8 = value;
		Il2CppCodeGenWriteBarrier(&____netUrl_8, value);
	}

	inline static int32_t get_offset_of__sendEmailWhenDone_9() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____sendEmailWhenDone_9)); }
	inline Toggle_t3976754468 * get__sendEmailWhenDone_9() const { return ____sendEmailWhenDone_9; }
	inline Toggle_t3976754468 ** get_address_of__sendEmailWhenDone_9() { return &____sendEmailWhenDone_9; }
	inline void set__sendEmailWhenDone_9(Toggle_t3976754468 * value)
	{
		____sendEmailWhenDone_9 = value;
		Il2CppCodeGenWriteBarrier(&____sendEmailWhenDone_9, value);
	}

	inline static int32_t get_offset_of__replayEmailTo_10() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____replayEmailTo_10)); }
	inline InputField_t1631627530 * get__replayEmailTo_10() const { return ____replayEmailTo_10; }
	inline InputField_t1631627530 ** get_address_of__replayEmailTo_10() { return &____replayEmailTo_10; }
	inline void set__replayEmailTo_10(InputField_t1631627530 * value)
	{
		____replayEmailTo_10 = value;
		Il2CppCodeGenWriteBarrier(&____replayEmailTo_10, value);
	}

	inline static int32_t get_offset_of__replayEmailSmtpServer_11() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____replayEmailSmtpServer_11)); }
	inline InputField_t1631627530 * get__replayEmailSmtpServer_11() const { return ____replayEmailSmtpServer_11; }
	inline InputField_t1631627530 ** get_address_of__replayEmailSmtpServer_11() { return &____replayEmailSmtpServer_11; }
	inline void set__replayEmailSmtpServer_11(InputField_t1631627530 * value)
	{
		____replayEmailSmtpServer_11 = value;
		Il2CppCodeGenWriteBarrier(&____replayEmailSmtpServer_11, value);
	}

	inline static int32_t get_offset_of__replayEmailSmtpPort_12() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____replayEmailSmtpPort_12)); }
	inline InputField_t1631627530 * get__replayEmailSmtpPort_12() const { return ____replayEmailSmtpPort_12; }
	inline InputField_t1631627530 ** get_address_of__replayEmailSmtpPort_12() { return &____replayEmailSmtpPort_12; }
	inline void set__replayEmailSmtpPort_12(InputField_t1631627530 * value)
	{
		____replayEmailSmtpPort_12 = value;
		Il2CppCodeGenWriteBarrier(&____replayEmailSmtpPort_12, value);
	}

	inline static int32_t get_offset_of__replayEmailFromAddress_13() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____replayEmailFromAddress_13)); }
	inline InputField_t1631627530 * get__replayEmailFromAddress_13() const { return ____replayEmailFromAddress_13; }
	inline InputField_t1631627530 ** get_address_of__replayEmailFromAddress_13() { return &____replayEmailFromAddress_13; }
	inline void set__replayEmailFromAddress_13(InputField_t1631627530 * value)
	{
		____replayEmailFromAddress_13 = value;
		Il2CppCodeGenWriteBarrier(&____replayEmailFromAddress_13, value);
	}

	inline static int32_t get_offset_of__replayEmailFromPassword_14() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____replayEmailFromPassword_14)); }
	inline InputField_t1631627530 * get__replayEmailFromPassword_14() const { return ____replayEmailFromPassword_14; }
	inline InputField_t1631627530 ** get_address_of__replayEmailFromPassword_14() { return &____replayEmailFromPassword_14; }
	inline void set__replayEmailFromPassword_14(InputField_t1631627530 * value)
	{
		____replayEmailFromPassword_14 = value;
		Il2CppCodeGenWriteBarrier(&____replayEmailFromPassword_14, value);
	}

	inline static int32_t get_offset_of__replayStream_15() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____replayStream_15)); }
	inline MemoryStream_t743994179 * get__replayStream_15() const { return ____replayStream_15; }
	inline MemoryStream_t743994179 ** get_address_of__replayStream_15() { return &____replayStream_15; }
	inline void set__replayStream_15(MemoryStream_t743994179 * value)
	{
		____replayStream_15 = value;
		Il2CppCodeGenWriteBarrier(&____replayStream_15, value);
	}

	inline static int32_t get_offset_of__playReplay_16() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____playReplay_16)); }
	inline bool get__playReplay_16() const { return ____playReplay_16; }
	inline bool* get_address_of__playReplay_16() { return &____playReplay_16; }
	inline void set__playReplay_16(bool value)
	{
		____playReplay_16 = value;
	}

	inline static int32_t get_offset_of_optionsGO_17() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ___optionsGO_17)); }
	inline GameObject_t1756533147 * get_optionsGO_17() const { return ___optionsGO_17; }
	inline GameObject_t1756533147 ** get_address_of_optionsGO_17() { return &___optionsGO_17; }
	inline void set_optionsGO_17(GameObject_t1756533147 * value)
	{
		___optionsGO_17 = value;
		Il2CppCodeGenWriteBarrier(&___optionsGO_17, value);
	}

	inline static int32_t get_offset_of__gameSceneToLoad_18() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____gameSceneToLoad_18)); }
	inline String_t* get__gameSceneToLoad_18() const { return ____gameSceneToLoad_18; }
	inline String_t** get_address_of__gameSceneToLoad_18() { return &____gameSceneToLoad_18; }
	inline void set__gameSceneToLoad_18(String_t* value)
	{
		____gameSceneToLoad_18 = value;
		Il2CppCodeGenWriteBarrier(&____gameSceneToLoad_18, value);
	}

	inline static int32_t get_offset_of__panels_24() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____panels_24)); }
	inline List_1_t1125654279 * get__panels_24() const { return ____panels_24; }
	inline List_1_t1125654279 ** get_address_of__panels_24() { return &____panels_24; }
	inline void set__panels_24(List_1_t1125654279 * value)
	{
		____panels_24 = value;
		Il2CppCodeGenWriteBarrier(&____panels_24, value);
	}

	inline static int32_t get_offset_of__easyPanel_25() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____easyPanel_25)); }
	inline GameObject_t1756533147 * get__easyPanel_25() const { return ____easyPanel_25; }
	inline GameObject_t1756533147 ** get_address_of__easyPanel_25() { return &____easyPanel_25; }
	inline void set__easyPanel_25(GameObject_t1756533147 * value)
	{
		____easyPanel_25 = value;
		Il2CppCodeGenWriteBarrier(&____easyPanel_25, value);
	}

	inline static int32_t get_offset_of__easyPanelName_26() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____easyPanelName_26)); }
	inline String_t* get__easyPanelName_26() const { return ____easyPanelName_26; }
	inline String_t** get_address_of__easyPanelName_26() { return &____easyPanelName_26; }
	inline void set__easyPanelName_26(String_t* value)
	{
		____easyPanelName_26 = value;
		Il2CppCodeGenWriteBarrier(&____easyPanelName_26, value);
	}

	inline static int32_t get_offset_of__useRecordOverrides_27() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____useRecordOverrides_27)); }
	inline bool get__useRecordOverrides_27() const { return ____useRecordOverrides_27; }
	inline bool* get_address_of__useRecordOverrides_27() { return &____useRecordOverrides_27; }
	inline void set__useRecordOverrides_27(bool value)
	{
		____useRecordOverrides_27 = value;
	}

	inline static int32_t get_offset_of__startRecordOverride_28() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____startRecordOverride_28)); }
	inline String_t* get__startRecordOverride_28() const { return ____startRecordOverride_28; }
	inline String_t** get_address_of__startRecordOverride_28() { return &____startRecordOverride_28; }
	inline void set__startRecordOverride_28(String_t* value)
	{
		____startRecordOverride_28 = value;
		Il2CppCodeGenWriteBarrier(&____startRecordOverride_28, value);
	}

	inline static int32_t get_offset_of__joinRecordOverride_29() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529, ____joinRecordOverride_29)); }
	inline String_t* get__joinRecordOverride_29() const { return ____joinRecordOverride_29; }
	inline String_t** get_address_of__joinRecordOverride_29() { return &____joinRecordOverride_29; }
	inline void set__joinRecordOverride_29(String_t* value)
	{
		____joinRecordOverride_29 = value;
		Il2CppCodeGenWriteBarrier(&____joinRecordOverride_29, value);
	}
};

struct ArenaDebugMenu_t2246245529_StaticFields
{
public:
	// System.Action`1<System.String> GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::<>f__mg$cache0
	Action_1_t1831019615 * ___U3CU3Ef__mgU24cache0_30;
	// System.Action`1<System.String> GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::<>f__mg$cache1
	Action_1_t1831019615 * ___U3CU3Ef__mgU24cache1_31;
	// System.Action`1<System.String> GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::<>f__mg$cache2
	Action_1_t1831019615 * ___U3CU3Ef__mgU24cache2_32;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_30() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529_StaticFields, ___U3CU3Ef__mgU24cache0_30)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__mgU24cache0_30() const { return ___U3CU3Ef__mgU24cache0_30; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__mgU24cache0_30() { return &___U3CU3Ef__mgU24cache0_30; }
	inline void set_U3CU3Ef__mgU24cache0_30(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__mgU24cache0_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_31() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529_StaticFields, ___U3CU3Ef__mgU24cache1_31)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__mgU24cache1_31() const { return ___U3CU3Ef__mgU24cache1_31; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__mgU24cache1_31() { return &___U3CU3Ef__mgU24cache1_31; }
	inline void set_U3CU3Ef__mgU24cache1_31(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__mgU24cache1_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_32() { return static_cast<int32_t>(offsetof(ArenaDebugMenu_t2246245529_StaticFields, ___U3CU3Ef__mgU24cache2_32)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__mgU24cache2_32() const { return ___U3CU3Ef__mgU24cache2_32; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__mgU24cache2_32() { return &___U3CU3Ef__mgU24cache2_32; }
	inline void set_U3CU3Ef__mgU24cache2_32(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__mgU24cache2_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
