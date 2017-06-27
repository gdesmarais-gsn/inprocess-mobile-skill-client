#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu
struct ArenaDebugMenu_t2246245529;
// GSN.Skill.Games.Common.Model.GameModelBase
struct GameModelBase_t2215752692;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object
struct Il2CppObject;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Button
struct Button_t2872111280;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField1631627530.h"
#include "UnityEngine_UI_UnityEngine_UI_Toggle3976754468.h"

// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::.ctor()
extern "C"  void ArenaDebugMenu__ctor_m1818891154 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::Awake()
extern "C"  void ArenaDebugMenu_Awake_m4230896061 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::Update()
extern "C"  void ArenaDebugMenu_Update_m4152331681 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Model.GameModelBase GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::CreateModel()
extern "C"  GameModelBase_t2215752692 * ArenaDebugMenu_CreateModel_m109749384 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::AddCustomControls()
extern "C"  void ArenaDebugMenu_AddCustomControls_m1306832004 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::convertToBinary(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* ArenaDebugMenu_convertToBinary_m3962646864 (ArenaDebugMenu_t2246245529 * __this, ByteU5BU5D_t3397334013* ___fileBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::loadReplayStream(System.String,System.Action)
extern "C"  void ArenaDebugMenu_loadReplayStream_m1807386566 (ArenaDebugMenu_t2246245529 * __this, String_t* ___url0, Action_t3226471752 * ___doneAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::loadReplayData(System.String,System.Action)
extern "C"  Il2CppObject * ArenaDebugMenu_loadReplayData_m594655514 (ArenaDebugMenu_t2246245529 * __this, String_t* ___filename0, Action_t3226471752 * ___doneAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::Start()
extern "C"  void ArenaDebugMenu_Start_m3484293986 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::SetTopLabel(System.String)
extern "C"  void ArenaDebugMenu_SetTopLabel_m1436389717 (ArenaDebugMenu_t2246245529 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::StartGame()
extern "C"  void ArenaDebugMenu_StartGame_m4259779596 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::GoToArena()
extern "C"  void ArenaDebugMenu_GoToArena_m3518697936 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::LoadPlayerPrefs()
extern "C"  void ArenaDebugMenu_LoadPlayerPrefs_m3508225123 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::ToggleHideText()
extern "C"  void ArenaDebugMenu_ToggleHideText_m802362727 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::ToggleUseLocalResources()
extern "C"  void ArenaDebugMenu_ToggleUseLocalResources_m162454849 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::CreateCustomFromPrefab(System.String,UnityEngine.GameObject,System.String)
extern "C"  GameObject_t1756533147 * ArenaDebugMenu_CreateCustomFromPrefab_m1166992438 (ArenaDebugMenu_t2246245529 * __this, String_t* ___prefabName0, GameObject_t1756533147 * ___parent1, String_t* ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::AddOptionJSONName(UnityEngine.GameObject,System.String,System.Boolean,System.Boolean,System.Object)
extern "C"  void ArenaDebugMenu_AddOptionJSONName_m1953862397 (ArenaDebugMenu_t2246245529 * __this, GameObject_t1756533147 * ___o0, String_t* ___optionName1, bool ___inStartRecord2, bool ___inJoinRecord3, Il2CppObject * ___defaultValue4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::CreateInputField(UnityEngine.GameObject,System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  InputField_t1631627530 * ArenaDebugMenu_CreateInputField_m613734818 (ArenaDebugMenu_t2246245529 * __this, GameObject_t1756533147 * ___parent0, String_t* ___label1, String_t* ___defaultValue2, String_t* ___optionName3, bool ___inStartRecord4, bool ___inJoinRecord5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::FindInputField(System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  InputField_t1631627530 * ArenaDebugMenu_FindInputField_m3840718825 (ArenaDebugMenu_t2246245529 * __this, String_t* ___name0, String_t* ___defaultValue1, String_t* ___optionName2, bool ___inStartRecord3, bool ___inJoinRecord4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::SetupInputField(UnityEngine.UI.InputField,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void ArenaDebugMenu_SetupInputField_m768050554 (ArenaDebugMenu_t2246245529 * __this, InputField_t1631627530 * ___input0, String_t* ___defaultValue1, String_t* ___optionName2, bool ___inStartRecord3, bool ___inJoinRecord4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Toggle GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::CreateToggle(UnityEngine.GameObject,System.String,System.Boolean,System.String,System.Boolean,System.Boolean)
extern "C"  Toggle_t3976754468 * ArenaDebugMenu_CreateToggle_m3802581849 (ArenaDebugMenu_t2246245529 * __this, GameObject_t1756533147 * ___parent0, String_t* ___label1, bool ___defaultValue2, String_t* ___optionName3, bool ___inStartRecord4, bool ___inJoinRecord5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Toggle GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::FindToggle(System.String,System.Boolean,System.String,System.Boolean,System.Boolean)
extern "C"  Toggle_t3976754468 * ArenaDebugMenu_FindToggle_m1606552390 (ArenaDebugMenu_t2246245529 * __this, String_t* ___name0, bool ___defaultValue1, String_t* ___optionName2, bool ___inStartRecord3, bool ___inJoinRecord4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::SetupToggle(UnityEngine.UI.Toggle,System.Boolean,System.String,System.Boolean,System.Boolean)
extern "C"  void ArenaDebugMenu_SetupToggle_m456822467 (ArenaDebugMenu_t2246245529 * __this, Toggle_t3976754468 * ___toggle0, bool ___defaultValue1, String_t* ___optionName2, bool ___inStartRecord3, bool ___inJoinRecord4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::CreateButton(UnityEngine.GameObject,System.String,System.String)
extern "C"  Button_t2872111280 * ArenaDebugMenu_CreateButton_m2892881448 (ArenaDebugMenu_t2246245529 * __this, GameObject_t1756533147 * ___parent0, String_t* ___name1, String_t* ___label2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::OptionNames()
extern "C"  List_1_t1398341365 * ArenaDebugMenu_OptionNames_m35084768 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::CreatePanel(UnityEngine.GameObject,System.String)
extern "C"  GameObject_t1756533147 * ArenaDebugMenu_CreatePanel_m368785091 (ArenaDebugMenu_t2246245529 * __this, GameObject_t1756533147 * ___parent0, String_t* ___panelName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::CreateLabel(UnityEngine.GameObject,System.String,System.String)
extern "C"  void ArenaDebugMenu_CreateLabel_m4218832142 (ArenaDebugMenu_t2246245529 * __this, GameObject_t1756533147 * ___parent0, String_t* ___labelName1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::ToggleMockSessionText()
extern "C"  void ArenaDebugMenu_ToggleMockSessionText_m1457052927 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::StartWithRandomGameData(System.String)
extern "C"  void ArenaDebugMenu_StartWithRandomGameData_m2347969809 (ArenaDebugMenu_t2246245529 * __this, String_t* ___gameDatafileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu::ResetToDefault()
extern "C"  void ArenaDebugMenu_ResetToDefault_m1228361661 (ArenaDebugMenu_t2246245529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
