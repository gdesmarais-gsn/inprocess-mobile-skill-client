#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.GameLog
struct GameLog_t388062514;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Session.GameSessionBase
struct  GameSessionBase_t3185325067  : public Il2CppObject
{
public:
	// GSN.Skill.Games.Common.Utils.GameLog GSN.Skill.Games.Common.Client.Session.GameSessionBase::gameLog
	GameLog_t388062514 * ___gameLog_0;
	// System.String GSN.Skill.Games.Common.Client.Session.GameSessionBase::<ValidationHost>k__BackingField
	String_t* ___U3CValidationHostU3Ek__BackingField_1;
	// System.String GSN.Skill.Games.Common.Client.Session.GameSessionBase::<WorldWinnerHost>k__BackingField
	String_t* ___U3CWorldWinnerHostU3Ek__BackingField_2;
	// System.String GSN.Skill.Games.Common.Client.Session.GameSessionBase::<APIStartGamePath>k__BackingField
	String_t* ___U3CAPIStartGamePathU3Ek__BackingField_3;
	// System.String GSN.Skill.Games.Common.Client.Session.GameSessionBase::_authzToken
	String_t* ____authzToken_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSessionBase::_joinRecord
	Dictionary_2_t3943999495 * ____joinRecord_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSessionBase::_startRecord
	Dictionary_2_t3943999495 * ____startRecord_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSessionBase::_joinBody
	Dictionary_2_t3943999495 * ____joinBody_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSessionBase::_startBody
	Dictionary_2_t3943999495 * ____startBody_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Client.Session.GameSessionBase::_setup
	Dictionary_2_t3943999495 * ____setup_9;
	// System.Byte[] GSN.Skill.Games.Common.Client.Session.GameSessionBase::_joinHunkHash
	ByteU5BU5D_t3397334013* ____joinHunkHash_10;

public:
	inline static int32_t get_offset_of_gameLog_0() { return static_cast<int32_t>(offsetof(GameSessionBase_t3185325067, ___gameLog_0)); }
	inline GameLog_t388062514 * get_gameLog_0() const { return ___gameLog_0; }
	inline GameLog_t388062514 ** get_address_of_gameLog_0() { return &___gameLog_0; }
	inline void set_gameLog_0(GameLog_t388062514 * value)
	{
		___gameLog_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameLog_0, value);
	}

	inline static int32_t get_offset_of_U3CValidationHostU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GameSessionBase_t3185325067, ___U3CValidationHostU3Ek__BackingField_1)); }
	inline String_t* get_U3CValidationHostU3Ek__BackingField_1() const { return ___U3CValidationHostU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CValidationHostU3Ek__BackingField_1() { return &___U3CValidationHostU3Ek__BackingField_1; }
	inline void set_U3CValidationHostU3Ek__BackingField_1(String_t* value)
	{
		___U3CValidationHostU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CValidationHostU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CWorldWinnerHostU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GameSessionBase_t3185325067, ___U3CWorldWinnerHostU3Ek__BackingField_2)); }
	inline String_t* get_U3CWorldWinnerHostU3Ek__BackingField_2() const { return ___U3CWorldWinnerHostU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CWorldWinnerHostU3Ek__BackingField_2() { return &___U3CWorldWinnerHostU3Ek__BackingField_2; }
	inline void set_U3CWorldWinnerHostU3Ek__BackingField_2(String_t* value)
	{
		___U3CWorldWinnerHostU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CWorldWinnerHostU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CAPIStartGamePathU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GameSessionBase_t3185325067, ___U3CAPIStartGamePathU3Ek__BackingField_3)); }
	inline String_t* get_U3CAPIStartGamePathU3Ek__BackingField_3() const { return ___U3CAPIStartGamePathU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CAPIStartGamePathU3Ek__BackingField_3() { return &___U3CAPIStartGamePathU3Ek__BackingField_3; }
	inline void set_U3CAPIStartGamePathU3Ek__BackingField_3(String_t* value)
	{
		___U3CAPIStartGamePathU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAPIStartGamePathU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of__authzToken_4() { return static_cast<int32_t>(offsetof(GameSessionBase_t3185325067, ____authzToken_4)); }
	inline String_t* get__authzToken_4() const { return ____authzToken_4; }
	inline String_t** get_address_of__authzToken_4() { return &____authzToken_4; }
	inline void set__authzToken_4(String_t* value)
	{
		____authzToken_4 = value;
		Il2CppCodeGenWriteBarrier(&____authzToken_4, value);
	}

	inline static int32_t get_offset_of__joinRecord_5() { return static_cast<int32_t>(offsetof(GameSessionBase_t3185325067, ____joinRecord_5)); }
	inline Dictionary_2_t3943999495 * get__joinRecord_5() const { return ____joinRecord_5; }
	inline Dictionary_2_t3943999495 ** get_address_of__joinRecord_5() { return &____joinRecord_5; }
	inline void set__joinRecord_5(Dictionary_2_t3943999495 * value)
	{
		____joinRecord_5 = value;
		Il2CppCodeGenWriteBarrier(&____joinRecord_5, value);
	}

	inline static int32_t get_offset_of__startRecord_6() { return static_cast<int32_t>(offsetof(GameSessionBase_t3185325067, ____startRecord_6)); }
	inline Dictionary_2_t3943999495 * get__startRecord_6() const { return ____startRecord_6; }
	inline Dictionary_2_t3943999495 ** get_address_of__startRecord_6() { return &____startRecord_6; }
	inline void set__startRecord_6(Dictionary_2_t3943999495 * value)
	{
		____startRecord_6 = value;
		Il2CppCodeGenWriteBarrier(&____startRecord_6, value);
	}

	inline static int32_t get_offset_of__joinBody_7() { return static_cast<int32_t>(offsetof(GameSessionBase_t3185325067, ____joinBody_7)); }
	inline Dictionary_2_t3943999495 * get__joinBody_7() const { return ____joinBody_7; }
	inline Dictionary_2_t3943999495 ** get_address_of__joinBody_7() { return &____joinBody_7; }
	inline void set__joinBody_7(Dictionary_2_t3943999495 * value)
	{
		____joinBody_7 = value;
		Il2CppCodeGenWriteBarrier(&____joinBody_7, value);
	}

	inline static int32_t get_offset_of__startBody_8() { return static_cast<int32_t>(offsetof(GameSessionBase_t3185325067, ____startBody_8)); }
	inline Dictionary_2_t3943999495 * get__startBody_8() const { return ____startBody_8; }
	inline Dictionary_2_t3943999495 ** get_address_of__startBody_8() { return &____startBody_8; }
	inline void set__startBody_8(Dictionary_2_t3943999495 * value)
	{
		____startBody_8 = value;
		Il2CppCodeGenWriteBarrier(&____startBody_8, value);
	}

	inline static int32_t get_offset_of__setup_9() { return static_cast<int32_t>(offsetof(GameSessionBase_t3185325067, ____setup_9)); }
	inline Dictionary_2_t3943999495 * get__setup_9() const { return ____setup_9; }
	inline Dictionary_2_t3943999495 ** get_address_of__setup_9() { return &____setup_9; }
	inline void set__setup_9(Dictionary_2_t3943999495 * value)
	{
		____setup_9 = value;
		Il2CppCodeGenWriteBarrier(&____setup_9, value);
	}

	inline static int32_t get_offset_of__joinHunkHash_10() { return static_cast<int32_t>(offsetof(GameSessionBase_t3185325067, ____joinHunkHash_10)); }
	inline ByteU5BU5D_t3397334013* get__joinHunkHash_10() const { return ____joinHunkHash_10; }
	inline ByteU5BU5D_t3397334013** get_address_of__joinHunkHash_10() { return &____joinHunkHash_10; }
	inline void set__joinHunkHash_10(ByteU5BU5D_t3397334013* value)
	{
		____joinHunkHash_10 = value;
		Il2CppCodeGenWriteBarrier(&____joinHunkHash_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
