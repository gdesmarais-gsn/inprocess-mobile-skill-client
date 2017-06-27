#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;

#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Po1962253443.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.ScoreFloat
struct  ScoreFloat_t1059481002  : public PooledMonoBehaviour_t1962253443
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.ScoreFloat::scoreValue
	TextMeshProUGUI_t934157183 * ___scoreValue_4;
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.ScoreFloat::streakValue
	TextMeshProUGUI_t934157183 * ___streakValue_5;
	// UnityEngine.Color32[] GSN.Skill.Games.Tripeaks.ScoreFloat::streakColors
	Color32U5BU5D_t30278651* ___streakColors_6;

public:
	inline static int32_t get_offset_of_scoreValue_4() { return static_cast<int32_t>(offsetof(ScoreFloat_t1059481002, ___scoreValue_4)); }
	inline TextMeshProUGUI_t934157183 * get_scoreValue_4() const { return ___scoreValue_4; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_scoreValue_4() { return &___scoreValue_4; }
	inline void set_scoreValue_4(TextMeshProUGUI_t934157183 * value)
	{
		___scoreValue_4 = value;
		Il2CppCodeGenWriteBarrier(&___scoreValue_4, value);
	}

	inline static int32_t get_offset_of_streakValue_5() { return static_cast<int32_t>(offsetof(ScoreFloat_t1059481002, ___streakValue_5)); }
	inline TextMeshProUGUI_t934157183 * get_streakValue_5() const { return ___streakValue_5; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_streakValue_5() { return &___streakValue_5; }
	inline void set_streakValue_5(TextMeshProUGUI_t934157183 * value)
	{
		___streakValue_5 = value;
		Il2CppCodeGenWriteBarrier(&___streakValue_5, value);
	}

	inline static int32_t get_offset_of_streakColors_6() { return static_cast<int32_t>(offsetof(ScoreFloat_t1059481002, ___streakColors_6)); }
	inline Color32U5BU5D_t30278651* get_streakColors_6() const { return ___streakColors_6; }
	inline Color32U5BU5D_t30278651** get_address_of_streakColors_6() { return &___streakColors_6; }
	inline void set_streakColors_6(Color32U5BU5D_t30278651* value)
	{
		___streakColors_6 = value;
		Il2CppCodeGenWriteBarrier(&___streakColors_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
