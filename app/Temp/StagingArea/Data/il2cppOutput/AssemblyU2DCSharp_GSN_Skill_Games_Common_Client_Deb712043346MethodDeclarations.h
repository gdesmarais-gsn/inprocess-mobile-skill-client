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

// GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu
struct ArenaMenu_t712043346;
// System.String
struct String_t;
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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField1631627530.h"
#include "UnityEngine_UI_UnityEngine_UI_Toggle3976754468.h"

// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::.ctor()
extern "C"  void ArenaMenu__ctor_m696531705 (ArenaMenu_t712043346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::Awake()
extern "C"  void ArenaMenu_Awake_m589775274 (ArenaMenu_t712043346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::AdjustScale()
extern "C"  void ArenaMenu_AdjustScale_m2276465154 (ArenaMenu_t712043346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::Update()
extern "C"  void ArenaMenu_Update_m2912223580 (ArenaMenu_t712043346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::Start()
extern "C"  void ArenaMenu_Start_m924144193 (ArenaMenu_t712043346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::SetTopLabel(System.String)
extern "C"  void ArenaMenu_SetTopLabel_m1038720248 (ArenaMenu_t712043346 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::CreateCustomFromPrefab(System.String,UnityEngine.GameObject,System.String)
extern "C"  GameObject_t1756533147 * ArenaMenu_CreateCustomFromPrefab_m122305041 (ArenaMenu_t712043346 * __this, String_t* ___prefabName0, GameObject_t1756533147 * ___parent1, String_t* ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::AddOptionJSONName(UnityEngine.GameObject,System.String,System.Boolean,System.Boolean,System.Object)
extern "C"  void ArenaMenu_AddOptionJSONName_m1205654192 (ArenaMenu_t712043346 * __this, GameObject_t1756533147 * ___o0, String_t* ___optionName1, bool ___inStartRecord2, bool ___inJoinRecord3, Il2CppObject * ___defaultValue4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::CreateInputField(UnityEngine.GameObject,System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  InputField_t1631627530 * ArenaMenu_CreateInputField_m3312884981 (ArenaMenu_t712043346 * __this, GameObject_t1756533147 * ___parent0, String_t* ___label1, String_t* ___defaultValue2, String_t* ___optionName3, bool ___inStartRecord4, bool ___inJoinRecord5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::FindInputField(System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  InputField_t1631627530 * ArenaMenu_FindInputField_m2414502096 (ArenaMenu_t712043346 * __this, String_t* ___name0, String_t* ___defaultValue1, String_t* ___optionName2, bool ___inStartRecord3, bool ___inJoinRecord4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::SetupInputField(UnityEngine.UI.InputField,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void ArenaMenu_SetupInputField_m1138067295 (ArenaMenu_t712043346 * __this, InputField_t1631627530 * ___input0, String_t* ___defaultValue1, String_t* ___optionName2, bool ___inStartRecord3, bool ___inJoinRecord4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Toggle GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::CreateToggle(UnityEngine.GameObject,System.String,System.Boolean,System.String,System.Boolean,System.Boolean)
extern "C"  Toggle_t3976754468 * ArenaMenu_CreateToggle_m2824654782 (ArenaMenu_t712043346 * __this, GameObject_t1756533147 * ___parent0, String_t* ___label1, bool ___defaultValue2, String_t* ___optionName3, bool ___inStartRecord4, bool ___inJoinRecord5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Toggle GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::FindToggle(System.String,System.Boolean,System.String,System.Boolean,System.Boolean)
extern "C"  Toggle_t3976754468 * ArenaMenu_FindToggle_m3552487501 (ArenaMenu_t712043346 * __this, String_t* ___name0, bool ___defaultValue1, String_t* ___optionName2, bool ___inStartRecord3, bool ___inJoinRecord4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::SetupToggle(UnityEngine.UI.Toggle,System.Boolean,System.String,System.Boolean,System.Boolean)
extern "C"  void ArenaMenu_SetupToggle_m375136514 (ArenaMenu_t712043346 * __this, Toggle_t3976754468 * ___toggle0, bool ___defaultValue1, String_t* ___optionName2, bool ___inStartRecord3, bool ___inJoinRecord4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::CreateButton(UnityEngine.GameObject,System.String,System.String)
extern "C"  Button_t2872111280 * ArenaMenu_CreateButton_m3267993179 (ArenaMenu_t712043346 * __this, GameObject_t1756533147 * ___parent0, String_t* ___name1, String_t* ___label2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::CreatePanel(UnityEngine.GameObject,System.String)
extern "C"  GameObject_t1756533147 * ArenaMenu_CreatePanel_m2703495164 (ArenaMenu_t712043346 * __this, GameObject_t1756533147 * ___parent0, String_t* ___panelName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::CreateLabel(UnityEngine.GameObject,System.String,System.String)
extern "C"  void ArenaMenu_CreateLabel_m173736339 (ArenaMenu_t712043346 * __this, GameObject_t1756533147 * ___parent0, String_t* ___labelName1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::ClearPanels()
extern "C"  void ArenaMenu_ClearPanels_m1538601833 (ArenaMenu_t712043346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.DebugMenu.ArenaMenu::AddPanel(UnityEngine.GameObject)
extern "C"  void ArenaMenu_AddPanel_m1836206040 (ArenaMenu_t712043346 * __this, GameObject_t1756533147 * ___panel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
