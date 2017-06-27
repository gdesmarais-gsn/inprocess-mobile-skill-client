#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu
struct ArenaDebugMenu_t2246245529;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t3218582488;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_t101629490;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t2011960077;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameLoader
struct  GameLoader_t575929449  : public MonoBehaviour_t1158329972
{
public:
	// System.Type GameLoader::_currentGameType
	Type_t * ____currentGameType_2;
	// GSN.Skill.Games.Common.Client.DebugMenu.ArenaDebugMenu GameLoader::_currentMenu
	ArenaDebugMenu_t2246245529 * ____currentMenu_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> GameLoader::_gameTypes
	Dictionary_2_t3218582488 * ____gameTypes_4;

public:
	inline static int32_t get_offset_of__currentGameType_2() { return static_cast<int32_t>(offsetof(GameLoader_t575929449, ____currentGameType_2)); }
	inline Type_t * get__currentGameType_2() const { return ____currentGameType_2; }
	inline Type_t ** get_address_of__currentGameType_2() { return &____currentGameType_2; }
	inline void set__currentGameType_2(Type_t * value)
	{
		____currentGameType_2 = value;
		Il2CppCodeGenWriteBarrier(&____currentGameType_2, value);
	}

	inline static int32_t get_offset_of__currentMenu_3() { return static_cast<int32_t>(offsetof(GameLoader_t575929449, ____currentMenu_3)); }
	inline ArenaDebugMenu_t2246245529 * get__currentMenu_3() const { return ____currentMenu_3; }
	inline ArenaDebugMenu_t2246245529 ** get_address_of__currentMenu_3() { return &____currentMenu_3; }
	inline void set__currentMenu_3(ArenaDebugMenu_t2246245529 * value)
	{
		____currentMenu_3 = value;
		Il2CppCodeGenWriteBarrier(&____currentMenu_3, value);
	}

	inline static int32_t get_offset_of__gameTypes_4() { return static_cast<int32_t>(offsetof(GameLoader_t575929449, ____gameTypes_4)); }
	inline Dictionary_2_t3218582488 * get__gameTypes_4() const { return ____gameTypes_4; }
	inline Dictionary_2_t3218582488 ** get_address_of__gameTypes_4() { return &____gameTypes_4; }
	inline void set__gameTypes_4(Dictionary_2_t3218582488 * value)
	{
		____gameTypes_4 = value;
		Il2CppCodeGenWriteBarrier(&____gameTypes_4, value);
	}
};

struct GameLoader_t575929449_StaticFields
{
public:
	// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> GameLoader::<>f__mg$cache0
	Func_2_t101629490 * ___U3CU3Ef__mgU24cache0_5;
	// System.Func`2<System.Type,System.Boolean> GameLoader::<>f__am$cache0
	Func_2_t2011960077 * ___U3CU3Ef__amU24cache0_6;
	// System.Func`2<System.Type,System.Boolean> GameLoader::<>f__am$cache1
	Func_2_t2011960077 * ___U3CU3Ef__amU24cache1_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(GameLoader_t575929449_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline Func_2_t101629490 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline Func_2_t101629490 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(Func_2_t101629490 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(GameLoader_t575929449_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Func_2_t2011960077 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Func_2_t2011960077 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Func_2_t2011960077 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_7() { return static_cast<int32_t>(offsetof(GameLoader_t575929449_StaticFields, ___U3CU3Ef__amU24cache1_7)); }
	inline Func_2_t2011960077 * get_U3CU3Ef__amU24cache1_7() const { return ___U3CU3Ef__amU24cache1_7; }
	inline Func_2_t2011960077 ** get_address_of_U3CU3Ef__amU24cache1_7() { return &___U3CU3Ef__amU24cache1_7; }
	inline void set_U3CU3Ef__amU24cache1_7(Func_2_t2011960077 * value)
	{
		___U3CU3Ef__amU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
