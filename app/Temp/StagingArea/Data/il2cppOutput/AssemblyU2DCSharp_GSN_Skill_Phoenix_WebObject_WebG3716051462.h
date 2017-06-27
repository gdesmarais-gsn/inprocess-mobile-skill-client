#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t3218582488;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_WebObject_WebOb631940280.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.WebObject.WebGameObjectWrapper
struct  WebGameObjectWrapper_t3716051462  : public WebObjectWrapper_t631940280
{
public:
	// System.Int32 GSN.Skill.Phoenix.WebObject.WebGameObjectWrapper::loadCount
	int32_t ___loadCount_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Phoenix.WebObject.WebGameObjectWrapper::sessionStorage
	Dictionary_2_t3943999495 * ___sessionStorage_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Phoenix.WebObject.WebGameObjectWrapper::localStorage
	Dictionary_2_t3943999495 * ___localStorage_6;
	// System.String[] GSN.Skill.Phoenix.WebObject.WebGameObjectWrapper::GAME_EVENT_PARTS_SEPERATOR_ARRAY
	StringU5BU5D_t1642385972* ___GAME_EVENT_PARTS_SEPERATOR_ARRAY_9;

public:
	inline static int32_t get_offset_of_loadCount_4() { return static_cast<int32_t>(offsetof(WebGameObjectWrapper_t3716051462, ___loadCount_4)); }
	inline int32_t get_loadCount_4() const { return ___loadCount_4; }
	inline int32_t* get_address_of_loadCount_4() { return &___loadCount_4; }
	inline void set_loadCount_4(int32_t value)
	{
		___loadCount_4 = value;
	}

	inline static int32_t get_offset_of_sessionStorage_5() { return static_cast<int32_t>(offsetof(WebGameObjectWrapper_t3716051462, ___sessionStorage_5)); }
	inline Dictionary_2_t3943999495 * get_sessionStorage_5() const { return ___sessionStorage_5; }
	inline Dictionary_2_t3943999495 ** get_address_of_sessionStorage_5() { return &___sessionStorage_5; }
	inline void set_sessionStorage_5(Dictionary_2_t3943999495 * value)
	{
		___sessionStorage_5 = value;
		Il2CppCodeGenWriteBarrier(&___sessionStorage_5, value);
	}

	inline static int32_t get_offset_of_localStorage_6() { return static_cast<int32_t>(offsetof(WebGameObjectWrapper_t3716051462, ___localStorage_6)); }
	inline Dictionary_2_t3943999495 * get_localStorage_6() const { return ___localStorage_6; }
	inline Dictionary_2_t3943999495 ** get_address_of_localStorage_6() { return &___localStorage_6; }
	inline void set_localStorage_6(Dictionary_2_t3943999495 * value)
	{
		___localStorage_6 = value;
		Il2CppCodeGenWriteBarrier(&___localStorage_6, value);
	}

	inline static int32_t get_offset_of_GAME_EVENT_PARTS_SEPERATOR_ARRAY_9() { return static_cast<int32_t>(offsetof(WebGameObjectWrapper_t3716051462, ___GAME_EVENT_PARTS_SEPERATOR_ARRAY_9)); }
	inline StringU5BU5D_t1642385972* get_GAME_EVENT_PARTS_SEPERATOR_ARRAY_9() const { return ___GAME_EVENT_PARTS_SEPERATOR_ARRAY_9; }
	inline StringU5BU5D_t1642385972** get_address_of_GAME_EVENT_PARTS_SEPERATOR_ARRAY_9() { return &___GAME_EVENT_PARTS_SEPERATOR_ARRAY_9; }
	inline void set_GAME_EVENT_PARTS_SEPERATOR_ARRAY_9(StringU5BU5D_t1642385972* value)
	{
		___GAME_EVENT_PARTS_SEPERATOR_ARRAY_9 = value;
		Il2CppCodeGenWriteBarrier(&___GAME_EVENT_PARTS_SEPERATOR_ARRAY_9, value);
	}
};

struct WebGameObjectWrapper_t3716051462_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> GSN.Skill.Phoenix.WebObject.WebGameObjectWrapper::JS2UnityMap
	Dictionary_2_t3218582488 * ___JS2UnityMap_7;

public:
	inline static int32_t get_offset_of_JS2UnityMap_7() { return static_cast<int32_t>(offsetof(WebGameObjectWrapper_t3716051462_StaticFields, ___JS2UnityMap_7)); }
	inline Dictionary_2_t3218582488 * get_JS2UnityMap_7() const { return ___JS2UnityMap_7; }
	inline Dictionary_2_t3218582488 ** get_address_of_JS2UnityMap_7() { return &___JS2UnityMap_7; }
	inline void set_JS2UnityMap_7(Dictionary_2_t3218582488 * value)
	{
		___JS2UnityMap_7 = value;
		Il2CppCodeGenWriteBarrier(&___JS2UnityMap_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
