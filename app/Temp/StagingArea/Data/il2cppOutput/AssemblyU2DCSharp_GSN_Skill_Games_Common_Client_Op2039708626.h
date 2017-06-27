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
// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.OptionJSONName
struct  OptionJSONName_t2039708626  : public MonoBehaviour_t1158329972
{
public:
	// System.String GSN.Skill.Games.Common.Client.OptionJSONName::_jSONName
	String_t* ____jSONName_2;
	// UnityEngine.UI.Toggle GSN.Skill.Games.Common.Client.OptionJSONName::_overrideToggle
	Toggle_t3976754468 * ____overrideToggle_3;
	// System.Boolean GSN.Skill.Games.Common.Client.OptionJSONName::startRecord
	bool ___startRecord_4;
	// System.Boolean GSN.Skill.Games.Common.Client.OptionJSONName::joinRecord
	bool ___joinRecord_5;
	// System.Object GSN.Skill.Games.Common.Client.OptionJSONName::defaultValue
	Il2CppObject * ___defaultValue_6;

public:
	inline static int32_t get_offset_of__jSONName_2() { return static_cast<int32_t>(offsetof(OptionJSONName_t2039708626, ____jSONName_2)); }
	inline String_t* get__jSONName_2() const { return ____jSONName_2; }
	inline String_t** get_address_of__jSONName_2() { return &____jSONName_2; }
	inline void set__jSONName_2(String_t* value)
	{
		____jSONName_2 = value;
		Il2CppCodeGenWriteBarrier(&____jSONName_2, value);
	}

	inline static int32_t get_offset_of__overrideToggle_3() { return static_cast<int32_t>(offsetof(OptionJSONName_t2039708626, ____overrideToggle_3)); }
	inline Toggle_t3976754468 * get__overrideToggle_3() const { return ____overrideToggle_3; }
	inline Toggle_t3976754468 ** get_address_of__overrideToggle_3() { return &____overrideToggle_3; }
	inline void set__overrideToggle_3(Toggle_t3976754468 * value)
	{
		____overrideToggle_3 = value;
		Il2CppCodeGenWriteBarrier(&____overrideToggle_3, value);
	}

	inline static int32_t get_offset_of_startRecord_4() { return static_cast<int32_t>(offsetof(OptionJSONName_t2039708626, ___startRecord_4)); }
	inline bool get_startRecord_4() const { return ___startRecord_4; }
	inline bool* get_address_of_startRecord_4() { return &___startRecord_4; }
	inline void set_startRecord_4(bool value)
	{
		___startRecord_4 = value;
	}

	inline static int32_t get_offset_of_joinRecord_5() { return static_cast<int32_t>(offsetof(OptionJSONName_t2039708626, ___joinRecord_5)); }
	inline bool get_joinRecord_5() const { return ___joinRecord_5; }
	inline bool* get_address_of_joinRecord_5() { return &___joinRecord_5; }
	inline void set_joinRecord_5(bool value)
	{
		___joinRecord_5 = value;
	}

	inline static int32_t get_offset_of_defaultValue_6() { return static_cast<int32_t>(offsetof(OptionJSONName_t2039708626, ___defaultValue_6)); }
	inline Il2CppObject * get_defaultValue_6() const { return ___defaultValue_6; }
	inline Il2CppObject ** get_address_of_defaultValue_6() { return &___defaultValue_6; }
	inline void set_defaultValue_6(Il2CppObject * value)
	{
		___defaultValue_6 = value;
		Il2CppCodeGenWriteBarrier(&___defaultValue_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
