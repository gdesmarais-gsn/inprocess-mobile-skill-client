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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType
struct  GameType_t2721688175 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType::game_release_status
	String_t* ___game_release_status_0;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType::name
	String_t* ___name_1;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType::icon_uri
	String_t* ___icon_uri_2;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType::promo_short
	String_t* ___promo_short_3;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType::category
	String_t* ___category_4;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType::gametype_id
	String_t* ___gametype_id_5;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType::ocx_objectname
	String_t* ___ocx_objectname_6;
	// System.String GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType::ocx_codebase
	String_t* ___ocx_codebase_7;

public:
	inline static int32_t get_offset_of_game_release_status_0() { return static_cast<int32_t>(offsetof(GameType_t2721688175, ___game_release_status_0)); }
	inline String_t* get_game_release_status_0() const { return ___game_release_status_0; }
	inline String_t** get_address_of_game_release_status_0() { return &___game_release_status_0; }
	inline void set_game_release_status_0(String_t* value)
	{
		___game_release_status_0 = value;
		Il2CppCodeGenWriteBarrier(&___game_release_status_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(GameType_t2721688175, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_icon_uri_2() { return static_cast<int32_t>(offsetof(GameType_t2721688175, ___icon_uri_2)); }
	inline String_t* get_icon_uri_2() const { return ___icon_uri_2; }
	inline String_t** get_address_of_icon_uri_2() { return &___icon_uri_2; }
	inline void set_icon_uri_2(String_t* value)
	{
		___icon_uri_2 = value;
		Il2CppCodeGenWriteBarrier(&___icon_uri_2, value);
	}

	inline static int32_t get_offset_of_promo_short_3() { return static_cast<int32_t>(offsetof(GameType_t2721688175, ___promo_short_3)); }
	inline String_t* get_promo_short_3() const { return ___promo_short_3; }
	inline String_t** get_address_of_promo_short_3() { return &___promo_short_3; }
	inline void set_promo_short_3(String_t* value)
	{
		___promo_short_3 = value;
		Il2CppCodeGenWriteBarrier(&___promo_short_3, value);
	}

	inline static int32_t get_offset_of_category_4() { return static_cast<int32_t>(offsetof(GameType_t2721688175, ___category_4)); }
	inline String_t* get_category_4() const { return ___category_4; }
	inline String_t** get_address_of_category_4() { return &___category_4; }
	inline void set_category_4(String_t* value)
	{
		___category_4 = value;
		Il2CppCodeGenWriteBarrier(&___category_4, value);
	}

	inline static int32_t get_offset_of_gametype_id_5() { return static_cast<int32_t>(offsetof(GameType_t2721688175, ___gametype_id_5)); }
	inline String_t* get_gametype_id_5() const { return ___gametype_id_5; }
	inline String_t** get_address_of_gametype_id_5() { return &___gametype_id_5; }
	inline void set_gametype_id_5(String_t* value)
	{
		___gametype_id_5 = value;
		Il2CppCodeGenWriteBarrier(&___gametype_id_5, value);
	}

	inline static int32_t get_offset_of_ocx_objectname_6() { return static_cast<int32_t>(offsetof(GameType_t2721688175, ___ocx_objectname_6)); }
	inline String_t* get_ocx_objectname_6() const { return ___ocx_objectname_6; }
	inline String_t** get_address_of_ocx_objectname_6() { return &___ocx_objectname_6; }
	inline void set_ocx_objectname_6(String_t* value)
	{
		___ocx_objectname_6 = value;
		Il2CppCodeGenWriteBarrier(&___ocx_objectname_6, value);
	}

	inline static int32_t get_offset_of_ocx_codebase_7() { return static_cast<int32_t>(offsetof(GameType_t2721688175, ___ocx_codebase_7)); }
	inline String_t* get_ocx_codebase_7() const { return ___ocx_codebase_7; }
	inline String_t** get_address_of_ocx_codebase_7() { return &___ocx_codebase_7; }
	inline void set_ocx_codebase_7(String_t* value)
	{
		___ocx_codebase_7 = value;
		Il2CppCodeGenWriteBarrier(&___ocx_codebase_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType
struct GameType_t2721688175_marshaled_pinvoke
{
	char* ___game_release_status_0;
	char* ___name_1;
	char* ___icon_uri_2;
	char* ___promo_short_3;
	char* ___category_4;
	char* ___gametype_id_5;
	char* ___ocx_objectname_6;
	char* ___ocx_codebase_7;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Tournament.ListGameTypesData/GameType
struct GameType_t2721688175_marshaled_com
{
	Il2CppChar* ___game_release_status_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___icon_uri_2;
	Il2CppChar* ___promo_short_3;
	Il2CppChar* ___category_4;
	Il2CppChar* ___gametype_id_5;
	Il2CppChar* ___ocx_objectname_6;
	Il2CppChar* ___ocx_codebase_7;
};
